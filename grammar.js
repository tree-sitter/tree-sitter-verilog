'use strict';

const PREC = {

  PARENT: 37,     // () [] :: .                                   Left Highest
  UNARY: 36,      // + - ! ~ & ~& | ~| ^ ~^ ^~ ++ -- (unary)
  POW: 35,        // **                                           Left
  MUL: 34,        // * / %                                        Left
  ADD: 33,        // + - (binary)                                 Left
  SHIFT: 32,      // << >> <<< >>>                                Left
  RELATIONAL: 31, // < <= > >= inside dist                        Left
  EQUAL: 30,      // == != === !== ==? !=?                        Left
  AND: 29,        // & (binary)                                   Left
  XOR: 28,        // ^ ~^ ^~ (binary)                             Left
  OR: 27,         // | (binary)                                   Left

  // The matches operator shall have higher precedence than the && and || operators
  MATCHES: 26,

  LOGICAL_AND: 25, // &&                                           Left
  LOGICAL_OR: 24, // ||                                           Left
  CONDITIONAL: 23, // ?: (conditional operator)                    Right
  IMPLICATION: 22, // –> <–>                                       Right
  ASSIGN: 21,     // = += -= *= /= %= &= ^= |= <<= >>= <<<= >>>= := :/ <= None
  CONCAT: 20,     // {} {{}}                            Concatenation   Lowest

  SPARENT: 19,    // [* ] [= ] [-> ]
  SHARP2: 18,     // ##                                                 Left
  throughout: 17, // throughout                                         Right
  within: 16,     // within                                             Left
  intersect: 15,  // intersect                                          Left
  nexttime: 14,   // not, nexttime, s_nexttime
  and: 13,        // and                                                Left
  or: 12,         // or                                                 Left
  iff: 11,        // iff                                                Right
  until: 10,      // until, s_until, until_with, s_until_with, implies  Right
  INCIDENCE: 9,   // |->, |=>, #-#, #=#                                 Right
  always: 8       // always, s_always, eventually, s_eventually,        —
  // if-else, case , accept_on, reject_on,
  // sync_accept_on, sync_reject_on
};

function optseq() {
  return optional(prec.left(seq.apply(null, arguments)));
}

function repseq() {
  return repeat(prec.left(seq.apply(null, arguments)));
}

function commaSep(rule) {
  return optional(sep1(',', rule));
}

function commaSep1(rule) {
  return seq(rule, repseq(',', rule));
}

function sep1(separator, rule) {
  return prec.left(seq(
    rule,
    repeat(prec.left(seq(separator, rule)))
  ));
}

function psep1(precedence, separator, rule) {
  return prec.left(precedence, seq(
    rule,
    repeat(prec.left(seq(separator, rule)))
  ));
}

function exprOp ($, prior, ops) {
  return prec.left(prior, seq($.expression, ops, repeat($.attribute_instance), $.expression));
}

function constExprOp ($, prior, ops) {
  return prec.left(prior, seq($.constant_expression, ops, repeat($.attribute_instance), $.constant_expression));
}

function directive (command) {
  return alias(new RegExp('`' + command), 'directive_' + command);
}

/*
    Verilog parser grammar based on IEEE Std 1800-2017.
*/

const rules = {
  source_file: $ => repeat($._description),

  /* 22. Compiler directives */

  /* 22-1 `include */

  include_compiler_directive_relative: $ => seq(
    '"', token.immediate(prec(1, /[^\\"\n]+/)), '"'
  ),

  include_compiler_directive_standard: $ => seq(
    '<', token.immediate(prec(1, /[^\\>\n]+/)), '>'
  ),

  include_compiler_directive: $ => seq(
    directive('include'),
    choice(
      $.include_compiler_directive_relative,
      $.include_compiler_directive_standard
    )
  ),

  /* 22-2 `define */

  default_text: $ => /\w+/,

  macro_text: $ => /(\\(.|\r?\n)|[^\\\n])*/,

  text_macro_name: $ => seq(
    $.text_macro_identifier,
    optseq('(', $.list_of_formal_arguments, ')')
  ),

  list_of_formal_arguments: $ => sep1(',', $.formal_argument),

  formal_argument: $ => seq(
    $.simple_identifier,
    optseq('=', $.default_text)
  ),

  text_macro_identifier: $ => $.identifier,

  /* 22-5 define */

  text_macro_definition: $ => seq(
    directive('define'),
    $.text_macro_name,
    optional($.macro_text),
    '\n'
  ),

  /* 22-3 usage */

  text_macro_usage: $ => seq(
    '`',
    $.text_macro_identifier,
    optseq('(', $.list_of_actual_arguments, ')')
  ),

  simple_text_macro_usage: $ => seq(
    '`',
    $.text_macro_identifier
  ),

  /* 22-4 22-5 */

  id_directive: $ => seq(
    choice(
      directive('ifdef'),
      directive('ifndef'),
      directive('elsif'),
      directive('undef') /* 22-5-2 */
    ),
    $.text_macro_identifier
  ),

  zero_directive: $ => choice(
    directive('resetall'), /* 22-3 */
    directive('undefineall'), /* 22-5-3 */
    directive('endif'),
    directive('else'),
    directive('unconnected_drive'), /* 22-9 */
    directive('nounconnected_drive'),
    directive('celldefine'), /* 22-10 */
    directive('endcelldefine')
  ),

  /* 22-7 timescale */

  timescale_compiler_directive: $ => seq(
    directive('timescale'),
    $.time_literal, // time_unit,
    '/',
    $.time_literal, // time_precision
    '\n'
  ),

  /* 22-8 default_nettype */

  default_nettype_compiler_directive: $ => seq(
    directive('default_nettype'),
    $.default_nettype_value,
    '\n'
  ),

  default_nettype_value: $ => choice('wire', 'tri', 'tri0', 'tri1', 'wand', 'triand', 'wor', 'trior', 'trireg', 'uwire', 'none'),


  /* 22-12 */

  line_compiler_directive: $ => seq(
    directive('line'),
    $.unsigned_number,
    $.include_compiler_directive_relative,
    $.unsigned_number,
    '\n'
  ),

  _directives: $ => choice(
    $.line_compiler_directive,
    $.include_compiler_directive,
    $.text_macro_definition,
    $.text_macro_usage,
    $.id_directive,
    $.zero_directive,
    $.timescale_compiler_directive,
    $.default_nettype_compiler_directive
  ),

  // TODO missing arguments, empty list of arguments

  list_of_actual_arguments: $ => sep1(',', $.actual_argument),

  actual_argument: $ => $.expression,

  /* A.1.1 Library source text */

  // library_text: $ => repeat($.library_description),

  // library_description: $ => choice(
  //   $.library_declaration,
  //   $.include_statement,
  //   $.config_declaration,
  //   ';'
  // ),
  //
  // library_declaration: $ => seq(
  //   'library',
  //   $.library_identifier,
  //   sep1(',', $.file_path_spec),
  //   optseq('-incdir', sep1(',', $.file_path_spec)),
  //   ';'
  // ),
  //
  // include_statement: $ => seq('include', $.file_path_spec, ';'),

  /* A.1.2 SystemVerilog source text */

  _description: $ => choice(
    $._directives,
    $.module_declaration,
    // $.udp_declaration,
    $.interface_declaration,
    $.program_declaration,
    $.package_declaration,
    seq(repeat($.attribute_instance), $.package_item),
    seq(repeat($.attribute_instance), $.bind_directive)
    // $.config_declaration,
  ),

  // module_nonansi_header: $ =>
  //   { attribute_instance } module_keyword [ lifetime ] module_identifier
  //     { package_import_declaration } [ parameter_port_list ] list_of_ports ';'
  //
  // module_ansi_header: $ =>
  //   { attribute_instance } module_keyword [ lifetime ] module_identifier
  //     { package_import_declaration } [ parameter_port_list ] [ list_of_port_declarations ] ';'
  //
  // module_declaration: $ =>
  //   module_nonansi_header [ timeunits_declaration ] { module_item }
  //     'endmodule' [ ':' module_identifier ]
  // | module_ansi_header [ timeunits_declaration ] { non_port_module_item }
  //     'endmodule' [ ':' module_identifier ]
  // | { attribute_instance } module_keyword [ lifetime ] module_identifier '(' '.*' ')' ';'
  //   [ timeunits_declaration ] { module_item } 'endmodule' [ ':' module_identifier ]
  // | 'extern' module_nonansi_header
  // | 'extern' module_ansi_header

  module_header: $ => seq(
    repeat($.attribute_instance),
    $.module_keyword,
    optional($.lifetime),
    $.module_identifier
  ),

  module_nonansi_header: $ => seq(
    repeat($.package_import_declaration),
    optional($.parameter_port_list),
    $.list_of_ports
  ),

  module_ansi_header: $ => seq(
    repeat($.package_import_declaration),
    choice(
      seq($.parameter_port_list, optional($.list_of_port_declarations)),
      $.list_of_port_declarations
    )
  ),

  module_declaration: $ => choice(
    seq(
      $.module_header,
      optional(choice(
        $.module_nonansi_header,
        $.module_ansi_header,
        seq('(', '.*', ')')
      )),
      ';',
      optional($.timeunits_declaration),
      repeat($._module_item),
      'endmodule', optseq(':', $.module_identifier)
    ),
    seq('extern', $.module_header, choice(
      $.module_nonansi_header,
      $.module_ansi_header
    ))
  ),

  module_keyword: $ => choice('module', 'macromodule'),

  interface_declaration: $ => choice(
    seq(
      $.interface_nonansi_header,
      optional($.timeunits_declaration),
      repeat($.interface_item),
      'endinterface', optseq(':', $.interface_identifier)
    ),
    seq(
      $.interface_ansi_header,
      optional($.timeunits_declaration),
      repeat($.non_port_interface_item),
      'endinterface', optseq(':', $.interface_identifier)
    ),
    seq(
      repeat($.attribute_instance),
      'interface',
      $.interface_identifier,
      '(', '.*', ')', ';',
      optional($.timeunits_declaration),
      repeat($.interface_item),
      'endinterface', optseq(':', $.interface_identifier)
    ),
    seq('extern', $.interface_nonansi_header),
    seq('extern', $.interface_ansi_header)
  ),

  interface_nonansi_header: $ => seq(
    repeat($.attribute_instance),
    'interface',
    optional($.lifetime),
    $.interface_identifier,
    repeat($.package_import_declaration),
    optional($.parameter_port_list),
    $.list_of_ports,
    ';'
  ),

  interface_ansi_header: $ => seq(
    repeat($.attribute_instance),
    'interface',
    optional($.lifetime),
    $.interface_identifier,
    repeat($.package_import_declaration),
    choice(
      seq($.parameter_port_list, optional($.list_of_port_declarations)),
      $.list_of_port_declarations
    ),
    ';'
  ),

  program_declaration: $ => choice(
    seq(
      $.program_nonansi_header,
      optional($.timeunits_declaration),
      repeat($.program_item),
      'endprogram', optseq(':', $.program_identifier)
    ),
    seq(
      $.program_ansi_header,
      optional($.timeunits_declaration),
      repeat($.non_port_program_item),
      'endprogram', optseq(':', $.program_identifier)
    ),
    seq(
      repeat($.attribute_instance),
      'program',
      $.program_identifier,
      '(', '.*', ')', ';',
      optional($.timeunits_declaration),
      repeat($.program_item),
      'endprogram', optseq(':', $.program_identifier)
    ),
    seq('extern', $.program_nonansi_header),
    seq('extern', $.program_ansi_header)
  ),

  program_nonansi_header: $ => seq(
    repeat($.attribute_instance),
    'program',
    optional($.lifetime),
    $.program_identifier,
    repeat($.package_import_declaration),
    optional($.parameter_port_list),
    $.list_of_ports,
    ';'
  ),

  program_ansi_header: $ => seq(
    repeat($.attribute_instance),
    'program',
    optional($.lifetime),
    $.program_identifier,
    repeat($.package_import_declaration),
    choice(
      seq($.parameter_port_list, optional($.list_of_port_declarations)),
      $.list_of_port_declarations
    ),
    ';'
  ),

  checker_declaration: $ => seq(
    'checker',
    $.checker_identifier,
    optseq('(', optional($.checker_port_list), ')'),
    ';',
    repseq(
      repeat($.attribute_instance),
      $.checker_or_generate_item
    ),
    'endchecker', optseq(':', $.checker_identifier)
  ),

  class_declaration: $ => seq(
    optional('virtual'),
    'class',
    optional($.lifetime),
    $.class_identifier,
    optional($.parameter_port_list),
    optseq(
      'extends', $.class_type, optional($.list_of_arguments_parent)
    ),
    optseq(
      'implements', sep1(',', $.interface_class_type)
    ),
    ';',
    repeat($.class_item),
    'endclass', optseq(':', $.class_identifier)
  ),

  interface_class_type: $ => seq(
    $.ps_class_identifier,
    optional($.parameter_value_assignment)
  ),

  interface_class_declaration: $ => seq(
    'interface', 'class',
    $.class_identifier,
    optional($.parameter_port_list),
    optseq(
      'extends', optional(sep1(',', $.interface_class_type)), ';'
    ),
    repeat($.interface_class_item),
    'endclass', optseq(':', $.class_identifier)
  ),

  interface_class_item: $ => choice(
    $.type_declaration,
    seq(repeat($.attribute_instance), $.interface_class_method),
    seq($.any_parameter_declaration, ';'),
    ';'
  ),

  interface_class_method: $ => seq('pure', 'virtual', $.method_prototype, ';'),

  package_declaration: $ => seq(
    repeat($.attribute_instance),
    'package', optional($.lifetime), $.package_identifier, ';',
    optional($.timeunits_declaration),
    repseq($.attribute_instance, $.package_item),
    'endpackage', optseq(':', $.package_identifier)
  ),

  timeunits_declaration: $ => choice(
    prec.left(seq('timeunit', $.time_literal, optseq('/', $.time_literal), ';')),
    prec.left(seq('timeprecision', $.time_literal, ';')),
    prec.left(seq('timeunit', $.time_literal, ';', 'timeprecision', $.time_literal, ';')),
    prec.left(seq('timeprecision', $.time_literal, ';', 'timeunit', $.time_literal, ';'))
  ),

  /* A.1.3 Module parameters and ports */

  parameter_port_list: $ => seq(
    '#', '(',
    optional(choice(
      seq($.list_of_param_assignments, repseq(',', $.parameter_port_declaration)),
      sep1(',', $.parameter_port_declaration)
    )),
    ')'
  ),

  parameter_port_declaration: $ => choice(
    $.any_parameter_declaration,
    seq($.data_type, $.list_of_param_assignments),
    seq('type', $.list_of_type_assignments)
  ),

  list_of_ports: $ => seq(
    '(',
    optional(sep1(',', seq(
      optional($.line_compiler_directive),
      $.port,
      optional($.line_compiler_directive)
    ))),
    ')'
  ),

  list_of_port_declarations: $ => seq(
    '(',
    optional(sep1(',', seq(
      repeat($.attribute_instance),
      $.ansi_port_declaration
    ))),
    ')'
  ),

  port_declaration: $ => seq(
    repeat($.attribute_instance),
    choice(
      $.inout_declaration,
      $.input_declaration,
      $.output_declaration,
      $.ref_declaration,
      $.interface_port_declaration
    )
  ),

  port: $ => choice(
    $._port_expression,
    seq('.', $.port_identifier, '(', optional($._port_expression), ')')
  ),

  _port_expression: $ => choice(
    $.port_reference,
    seq('{', sep1(',', $.port_reference), '}')
  ),

  port_reference: $ => seq(
    $.port_identifier,
    optional($.constant_select1)
  ),

  port_direction: $ => choice('input', 'output', 'inout', 'ref'),

  net_port_header1: $ => choice(
    seq(optional($.port_direction), $.net_port_type1),
    $.port_direction
  ),

  variable_port_header: $ => seq(
    optional($.port_direction),
    $.variable_port_type
  ),

  interface_port_header: $ => seq(
    choice(
      $.interface_identifier,
      'interface'
    ),
    optseq('.', $.modport_identifier)
  ),

  ansi_port_declaration: $ => choice(
    seq(
      optional(choice($.net_port_header1, $.interface_port_header)),
      $.port_identifier,
      repeat($.unpacked_dimension),
      optseq('=', $.constant_expression)
    ),
    seq(
      optional($.variable_port_header),
      $.port_identifier,
      repeat($._variable_dimension),
      optseq('=', $.constant_expression)
    ),
    seq(
      optional($.port_direction), '.', $.port_identifier,
      '(', optional($.expression), ')'
    )
  ),

  /* A.1.4 Module items */

  elaboration_system_task: $ => choice(
    seq(
      '$fatal',
      optseq(
        '(', $.finish_number, optseq(',', $.list_of_arguments), ')'
      ),
      ';'
    ),
    seq(
      choice('$error', '$warning', '$info'),
      optional($.list_of_arguments_parent),
      ';'
    )
  ),

  finish_number: $ => choice('0', '1', '2'),

  _module_common_item: $ => choice(
    $._module_or_generate_item_declaration,
    $.interface_instantiation,
    $.program_instantiation,
    // $.assertion_item,
    $.bind_directive,
    $.continuous_assign,
    $.net_alias,
    $.initial_construct,
    $.final_construct,
    $.always_construct,
    $.loop_generate_construct,
    $.conditional_generate_construct,
    $.elaboration_system_task
  ),

  _module_item: $ => choice(
    seq($.port_declaration, ';'),
    $._non_port_module_item
  ),

  module_or_generate_item: $ => seq(
    repeat($.attribute_instance),
    choice(
      $.parameter_override,
      $.gate_instantiation,
      // $.udp_instantiation,
      $.module_instantiation,
      $._module_common_item
    )
  ),

  _module_or_generate_item_declaration: $ => choice(
    $._package_or_generate_item_declaration,
    $.genvar_declaration
    //  $.clocking_declaration
    //  seq('default' __ 'clocking' __ clocking_identifier __ ';')
    //  seq('default' __ 'disable' __ 'iff' __ expression_or_dist __ ';')
  ),

  _non_port_module_item: $ => choice(
    $._directives,
    $.generate_region,
    $.module_or_generate_item,
    $.specify_block,
    seq(repeat($.attribute_instance), $.specparam_declaration),
    $.program_declaration,
    $.module_declaration,
    $.interface_declaration,
    $.timeunits_declaration
  ),

  parameter_override: $ => seq(
    'defparam',
    $.list_of_defparam_assignments,
    ';'
  ),

  bind_directive: $ => seq(
    'bind',
    choice(
      seq(
        $.bind_target_scope,
        optseq(':', $.bind_target_instance_list)
      ),
      $.bind_target_instance
    ),
    $.bind_instantiation,
    ';'
  ),

  bind_target_scope: $ => choice(
    $.module_identifier
    // $.interface_identifier
  ),

  bind_target_instance: $ => seq(
    $.hierarchical_identifier,
    optional($.constant_bit_select1)
  ),

  bind_target_instance_list: $ => sep1(',', $.bind_target_instance),

  bind_instantiation: $ => choice(
    $.program_instantiation,
    $.module_instantiation,
    $.interface_instantiation,
    $.checker_instantiation
  ),

  /* A.1.5 Configuration source text */

  config_declaration: $ => seq(
    'config', $.config_identifier, ';',
    repseq($.local_parameter_declaration, ';'),
    $.design_statement,
    repeat($.config_rule_statement),
    'endconfig', optseq(':', $.config_identifier)
  ),

  design_statement: $ => seq(
    'design',
    repseq(
      optseq($.library_identifier, '.'),
      $.cell_identifier
    ),
    ';'
  ),

  config_rule_statement: $ => choice(
    seq($.default_clause, $.liblist_clause, ';'),
    seq($.inst_clause, $.liblist_clause, ';'),
    seq($.inst_clause, $.use_clause, ';'),
    seq($.cell_clause, $.liblist_clause, ';'),
    seq($.cell_clause, $.use_clause, ';')
  ),

  default_clause: $ => 'default',

  inst_clause: $ => seq('instance', $.inst_name),

  inst_name: $ => seq($.topmodule_identifier, repseq('.', $.instance_identifier)),

  cell_clause: $ => seq('cell', optseq($.library_identifier, '.'), $.cell_identifier),

  liblist_clause: $ => seq('liblist', repeat($.library_identifier)),

  use_clause: $ => seq(
    'use',
    choice(
      sep1(',', $.named_parameter_assignment),
      seq(
        optseq($.library_identifier, '.'),
        $.cell_identifier,
        optional(sep1(',', $.named_parameter_assignment))
      )
    ),
    optseq(':', 'config')
  ),

  /* A.1.6 Interface items */

  interface_or_generate_item: $ => choice(
    seq(repeat($.attribute_instance), $._module_common_item),
    seq(repeat($.attribute_instance), $.extern_tf_declaration)
  ),

  extern_tf_declaration: $ => choice(
    // seq('extern', $.method_prototype, ';'),
    seq('extern', 'forkjoin', $.task_prototype, ';')
  ),

  interface_item: $ => choice(
    seq($.port_declaration, ';'),
    $.non_port_interface_item
  ),

  non_port_interface_item: $ => choice(
    $.generate_region,
    $.interface_or_generate_item,
    $.program_declaration,
    $.modport_declaration,
    $.interface_declaration,
    $.timeunits_declaration
  ),

  /* A.1.7 Program items */

  program_item: $ => choice(
    seq($.port_declaration, ';'),
    $.non_port_program_item
  ),

  non_port_program_item: $ => choice(
    seq(repeat($.attribute_instance), $.continuous_assign),
    seq(repeat($.attribute_instance), $._module_or_generate_item_declaration),
    seq(repeat($.attribute_instance), $.initial_construct),
    seq(repeat($.attribute_instance), $.final_construct),
    seq(repeat($.attribute_instance), $.concurrent_assertion_item),
    $.timeunits_declaration,
    $.program_generate_item
  ),

  program_generate_item: $ => choice(
    $.loop_generate_construct,
    $.conditional_generate_construct,
    $.generate_region,
    $.elaboration_system_task
  ),

  /* A.1.8 Checker items */

  checker_port_list: $ => sep1(',', $.checker_port_item),

  checker_port_item: $ => seq(
    repeat($.attribute_instance),
    optional($.checker_port_direction),
    optional($.property_formal_type1),
    $.formal_port_identifier,
    repeat($._variable_dimension),
    optseq('=', $.property_actual_arg)
  ),

  checker_port_direction: $ => choice('input', 'output'),

  checker_or_generate_item: $ => choice(
    $.checker_or_generate_item_declaration,
    $.initial_construct,
    $.always_construct,
    $.final_construct,
    // $.assertion_item,
    $.continuous_assign,
    $.checker_generate_item
  ),

  checker_or_generate_item_declaration: $ => choice(
    seq(optional('rand'), $.data_declaration),
    $.function_declaration,
    $.checker_declaration,
    $.assertion_item_declaration,
    $.covergroup_declaration,
    $.genvar_declaration,
    // $.clocking_declaration,
    seq('default', 'clocking', $.clocking_identifier, ';'),
    prec.right(PREC.iff, seq('default', 'disable', 'iff', $.expression_or_dist, ';')),
    ';'
  ),

  checker_generate_item: $ => choice(
    $.loop_generate_construct,
    $.conditional_generate_construct,
    $.generate_region,
    $.elaboration_system_task
  ),

  /* A.1.9 Class items */

  class_item: $ => choice(
    $._directives,
    seq(repeat($.attribute_instance), $.class_property),
    seq(repeat($.attribute_instance), $.class_method),
    seq(repeat($.attribute_instance), $.class_constraint),
    seq(repeat($.attribute_instance), $.class_declaration),
    seq(repeat($.attribute_instance), $.covergroup_declaration),
    seq($.any_parameter_declaration, ';'),
    ';'
  ),

  class_property: $ => choice(
    seq(repeat($.property_qualifier), $.data_declaration),
    seq(
      'const',
      repeat($.class_item_qualifier),
      $.data_type,
      $.const_identifier,
      optseq('=', $.constant_expression),
      ';'
    )
  ),

  class_method: $ => choice(
    seq(repeat($.method_qualifier), $.task_declaration),
    seq(repeat($.method_qualifier), $.function_declaration),
    seq('pure', 'virtual', repeat($.class_item_qualifier), $.method_prototype, ';'),
    seq('extern', repeat($.method_qualifier), $.method_prototype, ';'),
    seq(repeat($.method_qualifier), $.class_constructor_declaration),
    seq('extern', repeat($.method_qualifier), $.class_constructor_prototype)
  ),

  class_constructor_prototype: $ => seq(
    'function', 'new', optseq('(', optional($.tf_port_list), ')'), ';'
  ),

  class_constraint: $ => choice(
    $.constraint_prototype,
    $.constraint_declaration
  ),

  class_item_qualifier: $ => choice('static', 'protected', 'local'),

  property_qualifier: $ => choice(
    $.random_qualifier,
    $.class_item_qualifier
  ),

  random_qualifier: $ => choice('rand', 'randc'),

  method_qualifier: $ => choice(
    seq(optional('pure'), 'virtual'),
    $.class_item_qualifier
  ),

  method_prototype: $ => choice(
    $.task_prototype,
    $.function_prototype
  ),

  class_constructor_declaration: $ => seq(
    'function',
    optional($.class_scope),
    'new',
    optseq('(', optional($.tf_port_list), ')'),
    ';',
    repeat($.block_item_declaration),
    optseq(
      'super', '.', 'new',
      optional($.list_of_arguments_parent),
      ';'
    ),
    repeat($.function_statement_or_null),
    'endfunction', optseq(':', 'new')
  ),

  /* A.1.10 Constraints */

  constraint_declaration: $ => seq(
    optional('static'),
    'constraint',
    $.constraint_identifier,
    $.constraint_block
  ),

  constraint_block: $ => seq('{', repeat($.constraint_block_item), '}'),

  constraint_block_item: $ => choice(
    seq('solve', $.solve_before_list, 'before', $.solve_before_list, ';'),
    $.constraint_expression
  ),

  solve_before_list: $ => sep1(',', $.constraint_primary),

  constraint_primary: $ => seq(
    optional(choice(
      seq($.implicit_class_handle, '.'),
      $.class_scope
    )),
    $.hierarchical_identifier,
    optional($.select1)
  ),

  constraint_expression: $ => choice(
    seq(optional('soft'), $.expression_or_dist, ';'),
    seq($.uniqueness_constraint, ';'),
    prec.right(PREC.IMPLICATION, seq($.expression, '–>', $.constraint_set)),
    prec.left(seq(
      'if', '(', $.expression, ')', $.constraint_set,
      optseq('else', $.constraint_set)
    )),
    seq(
      'foreach', '(',
      $.ps_or_hierarchical_array_identifier,
      '[', optional($.loop_variables1), ']',
      ')',
      $.constraint_set
    ),
    seq('disable', 'soft', $.constraint_primary, ';')
  ),

  uniqueness_constraint: $ => seq(
    'unique', '{', $.open_range_list, '}'
  ),

  constraint_set: $ => choice(
    $.constraint_expression,
    seq('{', repeat($.constraint_expression), '}')
  ),

  dist_list: $ => sep1(',', $.dist_item),

  dist_item: $ => seq($.value_range, optional($.dist_weight)),

  dist_weight: $ => seq(choice(':=', ':/'), $.expression),

  constraint_prototype: $ => seq(
    optional($.constraint_prototype_qualifier),
    optional('static'),
    'constraint',
    $.constraint_identifier,
    ';'
  ),

  constraint_prototype_qualifier: $ => choice('extern', 'pure'),

  extern_constraint_declaration: $ => seq(
    optional('static'),
    'constraint',
    $.class_scope,
    $.constraint_identifier,
    $.constraint_block
  ),

  identifier_list: $ => sep1(',', $.identifier),


  /* A.1.11 Package items */

  package_item: $ => choice(
    $._package_or_generate_item_declaration,
    $.anonymous_program,
    $.package_export_declaration,
    $.timeunits_declaration
  ),

  _package_or_generate_item_declaration: $ => choice(
    $.net_declaration,
    $.data_declaration,
    $.task_declaration,
    $.function_declaration,
    $.checker_declaration,
    $.dpi_import_export,
    $.extern_constraint_declaration,
    $.class_declaration,
    $.class_constructor_declaration,
    seq($.any_parameter_declaration, ';'),
    // $.covergroup_declaration,
    $.overload_declaration,
    $.assertion_item_declaration,
    ';'
  ),

  anonymous_program: $ => seq(
    'program', ';', repeat($.anonymous_program_item), 'endprogram'
  ),

  anonymous_program_item: $ => choice(
    $.task_declaration,
    $.function_declaration,
    $.class_declaration,
    $.covergroup_declaration,
    $.class_constructor_declaration,
    ';'
  ),

  /* A.2 Declarations */

  /* A.2.1 Declaration types */

  /* A.2.1.1 Module parameter declarations */

  local_parameter_declaration: $ => seq(
    'localparam',
    choice(
      seq(
        optional($.data_type_or_implicit1),
        $.list_of_param_assignments
      ),
      seq('type', $.list_of_type_assignments)
    )
  ),

  parameter_declaration: $ => seq(
    'parameter',
    choice(
      seq(
        optional($.data_type_or_implicit1),
        $.list_of_param_assignments
      ),
      seq('type', $.list_of_type_assignments)
    )
  ),

  any_parameter_declaration: $ => choice(
    $.local_parameter_declaration,
    $.parameter_declaration
  ),

  specparam_declaration: $ => seq(
    'specparam',
    optional($.packed_dimension),
    $.list_of_specparam_assignments,
    ';'
  ),

  /* A.2.1.2 Port declarations */

  inout_declaration: $ => seq(
    'inout', optional($.net_port_type1), $.list_of_port_identifiers
  ),

  input_declaration: $ => seq(
    'input',
    choice(
      seq(optional($.net_port_type1), $.list_of_port_identifiers),
      seq(optional($.variable_port_type), $.list_of_variable_identifiers)
    )
  ),

  output_declaration: $ => seq(
    'output',
    choice(
      seq(optional($.net_port_type1), $.list_of_port_identifiers),
      seq(optional($.variable_port_type), $.list_of_variable_port_identifiers)
    )
  ),

  interface_port_declaration: $ => seq(
    $.interface_identifier,
    optseq('.', $.modport_identifier),
    $.list_of_interface_identifiers
  ),

  ref_declaration: $ => seq(
    'ref', $.variable_port_type, $.list_of_variable_identifiers
  ),

  // A.2.1.3 Type declarations

  data_declaration: $ => choice(
    seq(
      optional('const'),
      optional('var'),
      optional($.lifetime),
      optional($.data_type_or_implicit1),
      $.list_of_variable_decl_assignments,
      ';'
    ),
    $.type_declaration,
    $.package_import_declaration,
    $.net_type_declaration
  ),

  package_import_declaration: $ => seq(
    'import', sep1(',', $.package_import_item), ';'
  ),

  package_import_item: $ => seq(
    $.package_identifier, '::', choice($.identifier, '*')
  ),

  package_export_declaration: $ => seq(
    'export', choice('*::*', sep1(',', $.package_import_item)), ';'
  ),

  genvar_declaration: $ => seq(
    'genvar', $.list_of_genvar_identifiers, ';'
  ),

  net_declaration: $ => choice(
    seq(
      $.net_type,
      optional(choice($.drive_strength, $.charge_strength)),
      optional(choice('vectored', 'scalared')),
      optional($.data_type_or_implicit1),
      optional($.delay3),
      $.list_of_net_decl_assignments,
      ';'
    ),
    seq(
      $.net_type_identifier,
      optional($.delay_control),
      $.list_of_net_decl_assignments,
      ';'
    ),
    seq(
      'interconnect',
      optional($.implicit_data_type1),
      optseq('#', $.delay_value),
      sep1(',', seq($.net_identifier, repeat($.unpacked_dimension))),
      ';'
    )
  ),

  type_declaration: $ => seq(
    'typedef',
    choice(
      seq($.data_type, $.type_identifier, repeat($._variable_dimension)),
      seq(
        $.interface_instance_identifier, optional($.constant_bit_select1),
        '.', $.type_identifier, $.type_identifier
      ),
      seq(
        optional(choice(
          'enum', 'struct', 'union', 'class', seq('interface', 'class')
        )),
        $.type_identifier
      )
    ),
    ';'
  ),

  net_type_declaration: $ => seq(
    'nettype',
    choice(
      seq(
        $.data_type,
        $.net_type_identifier,
        optseq(
          'with',
          optional(choice($.package_scope, $.class_scope)),
          $.tf_identifier
        )
      ),
      seq(
        optional(choice($.package_scope, $.class_scope)),
        $.net_type_identifier,
        $.net_type_identifier
      )
    ),
    ';'
  ),

  lifetime: $ => choice('static', 'automatic'),


  /* A.2.2 Declaration data types */

  /* A.2.2.1 Net and variable types */

  casting_type: $ => choice(
    $.simple_type,
    $.constant_primary,
    $._signing,
    'string',
    'const'
  ),

  data_type: $ => choice(
    seq($.integer_vector_type, optional($._signing), repeat($.packed_dimension)),
    seq($.integer_atom_type, optional($._signing)),
    $.non_integer_type,
    seq(
      $._struct_union,
      optseq('packed', optional($._signing)),
      '{', repeat1($.struct_union_member), '}',
      repeat($.packed_dimension)
    ),
    seq(
      'enum', optional($._enum_base_type),
      '{', sep1(',', $.enum_name_declaration), '}',
      repeat($.packed_dimension)
    ),
    'string',
    'chandle',
    prec.left(seq(
      'virtual', optional('interface'),
      $.interface_identifier,
      optional($.parameter_value_assignment),
      optseq('.', $.modport_identifier)
    )),
    seq(
      optional(choice($.class_scope, $.package_scope)),
      $.type_identifier,
      repeat($.packed_dimension)
    ),
    $.class_type,
    'event',
    $.ps_covergroup_identifier,
    $.type_reference
  ),

  data_type_or_implicit1: $ => choice(
    $.data_type,
    $.implicit_data_type1
  ),

  implicit_data_type1: $ => choice( // reordered : repeat -> repeat1
    seq($._signing, repeat($.packed_dimension)),
    repeat1($.packed_dimension)
  ),

  _enum_base_type: $ => choice(
    seq(
      $.integer_atom_type, optional($._signing)
    ),
    seq(
      $.integer_vector_type, optional($._signing), optional($.packed_dimension)
    ),
    seq(
      $.type_identifier, optional($.packed_dimension)
    )
  ),

  enum_name_declaration: $ => seq(
    $.enum_identifier,
    optseq(
      '[', $.integral_number, optseq(':', $.integral_number), ']'
    ),
    optseq('=', $.constant_expression)
  ),

  class_scope: $ => seq($.class_type, '::'),

  class_type: $ => prec.right(seq(
    $.ps_class_identifier,
    optional($.parameter_value_assignment),
    repseq(
      '::',
      $.class_identifier,
      optional($.parameter_value_assignment)
    )
  )),

  _integer_type: $ => choice(
    $.integer_vector_type,
    $.integer_atom_type
  ),

  integer_atom_type: $ => choice('byte', 'shortint', 'int', 'longint', 'integer', 'time'),

  integer_vector_type: $ => choice('bit', 'logic', 'reg'),

  non_integer_type: $ => choice('shortreal', 'real', 'realtime'),

  net_type: $ => choice('supply0', 'supply1', 'tri', 'triand', 'trior', 'trireg', 'tri0', 'tri1', 'uwire', 'wire', 'wand', 'wor'),

  net_port_type1: $ => choice(
    prec.left(-1, seq($.net_type, $.data_type_or_implicit1)),
    $.net_type,
    $.data_type_or_implicit1,

    $.net_type_identifier,
    seq('interconnect', optional($.implicit_data_type1))
  ),

  variable_port_type: $ => alias($._var_data_type, $._variable_port_type),

  _var_data_type: $ => prec.left(choice(
    $.data_type,
    seq('var', optional($.data_type_or_implicit1))
  )),

  _signing: $ => choice('signed', 'unsigned'),

  simple_type: $ => choice(
    $._integer_type,
    $.non_integer_type,
    $.ps_type_identifier,
    $.ps_parameter_identifier
  ),

  struct_union_member: $ => seq(
    repeat($.attribute_instance),
    // optional($.random_qualifier),
    $.data_type_or_void,
    $.list_of_variable_decl_assignments,
    ';'
  ),

  data_type_or_void: $ => choice(
    $.data_type,
    'void'
  ),

  _struct_union: $ => choice(
    'struct',
    seq('union', optional('tagged'))
  ),

  type_reference: $ => seq(
    'type', '(',
    choice(
      $.expression,
      $.data_type
    ),
    ')'
  ),

  // A.2.2.2 Strengths

  drive_strength: $ => seq(
    '(',
    choice(
      seq($.strength0, ',', $.strength1),
      seq($.strength1, ',', $.strength0),
      seq($.strength0, ',', 'highz1'),
      seq($.strength1, ',', 'highz0'),
      seq('highz0', ',', $.strength1),
      seq('highz1', ',', $.strength0)
    ),
    ')'
  ),

  strength0: $ => choice('supply0', 'strong0', 'pull0', 'weak0'),

  strength1: $ => choice('supply1', 'strong1', 'pull1', 'weak1'),

  charge_strength: $ => seq('(', choice('small', 'medium', 'large'), ')'),

  // A.2.2.3 Delays

  delay3: $ => seq('#', choice(
    $.delay_value,
    seq(
      '(', $.mintypmax_expression,
      optseq($.mintypmax_expression,
        optional($.mintypmax_expression)
      ),
      ')'
    )
  )),

  delay2: $ => seq('#', choice(
    $.delay_value,
    seq('(', $.mintypmax_expression, optional($.mintypmax_expression), ')')
  )),

  delay_value: $ => choice(
    $.unsigned_number,
    $.real_number,
    $.ps_identifier,
    $.time_literal,
    '1step'
  ),

  /* A.2.3 Declaration lists */

  list_of_defparam_assignments: $ => sep1(',', $.defparam_assignment),

  list_of_genvar_identifiers: $ => sep1(',', $.genvar_identifier),

  list_of_interface_identifiers: $ => sep1(',', seq(
    $.interface_identifier,
    repeat($.unpacked_dimension)
  )),

  list_of_net_decl_assignments: $ => sep1(',', $.net_decl_assignment),

  list_of_param_assignments: $ => sep1(',', $.param_assignment),

  list_of_port_identifiers: $ => sep1(',', seq(
    $.port_identifier,
    repeat($.unpacked_dimension)
  )),

  list_of_udp_port_identifiers: $ => sep1(',', $.port_identifier),

  list_of_specparam_assignments: $ => sep1(',', $.specparam_assignment),

  list_of_tf_variable_identifiers: $ => sep1(',', seq(
    $.port_identifier,
    repeat($._variable_dimension),
    optseq('=', $.expression)
  )),

  list_of_type_assignments: $ => sep1(',', $.type_assignment),

  list_of_variable_decl_assignments: $ => sep1(',', $.variable_decl_assignment),

  list_of_variable_identifiers: $ => sep1(',', seq(
    $.variable_identifier,
    repeat($._variable_dimension)
  )),

  list_of_variable_port_identifiers: $ => sep1(',', seq(
    $.port_identifier,
    repeat($._variable_dimension),
    optseq('=', $.constant_expression)
  )),

  /* A.2.4 Declaration assignments */

  defparam_assignment: $ => seq(
    $.hierarchical_parameter_identifier,
    '=',
    $.constant_mintypmax_expression
  ),

  net_decl_assignment: $ => seq(
    $.net_identifier,
    repeat($.unpacked_dimension),
    optseq('=', $.expression)
  ),

  param_assignment: $ => seq(
    $.parameter_identifier,
    repeat($.unpacked_dimension),
    optseq('=', $.constant_param_expression)
  ),

  specparam_assignment: $ => choice(
    seq($.specparam_identifier, '=', $.constant_mintypmax_expression),
    $.pulse_control_specparam
  ),

  type_assignment: $ => seq(
    $.type_identifier,
    optseq('=', $.data_type)
  ),

  pulse_control_specparam: $ => choice(
    seq(
      'PATHPULSE$=',
      '(',
      $.reject_limit_value,
      optseq(',', $.error_limit_value),
      ')'
    )
    // seq(
    //   'PATHPULSE$',
    //   $.specify_input_terminal_descriptor,
    //   '$',
    //   $.specify_output_terminal_descriptor,
    //   '=', '(', $.reject_limit_value, optseq(',', $.error_limit_value), ')'
    // )
  ),

  error_limit_value: $ => $.limit_value,

  reject_limit_value: $ => $.limit_value,

  limit_value: $ => $.constant_mintypmax_expression,

  variable_decl_assignment: $ => choice(
    seq(
      $.variable_identifier,
      repeat($._variable_dimension),
      optseq('=', $.expression)
    ),
    seq(
      $.dynamic_array_variable_identifier,
      $.unsized_dimension,
      repeat($._variable_dimension),
      optseq('=', $.dynamic_array_new)
    ),
    seq(
      $.class_variable_identifier,
      optseq('=', $.class_new)
    )
  ),

  class_new: $ => choice(
    seq(
      optional($.class_scope), 'new', optional($.list_of_arguments_parent)
    ),
    seq('new', $.expression)
  ),

  dynamic_array_new: $ => seq(
    'new', '[', $.expression, ']', optseq('(', $.expression, ')')
  ),

  // A.2.5 Declaration ranges

  unpacked_dimension: $ => seq(
    '[', choice(
      $.constant_range,
      $.constant_expression
    ), ']'
  ),

  packed_dimension: $ => choice(
    seq('[', $.constant_range, ']'),
    $.unsized_dimension
  ),

  associative_dimension: $ => seq(
    '[', choice($.data_type, '*'), ']'
  ),

  _variable_dimension: $ => choice(
    $.unsized_dimension,
    $.unpacked_dimension,
    $.associative_dimension,
    $.queue_dimension
  ),

  queue_dimension: $ => seq(
    '[', '$', optseq(':', $.constant_expression), ']'
  ),

  unsized_dimension: $ => seq('[', ']'),

  // A.2.6 Function declarations

  function_data_type_or_implicit1: $ => choice(
    $.data_type_or_void,
    $.implicit_data_type1
  ),

  function_declaration: $ => seq(
    'function',
    optional($.lifetime),
    $.function_body_declaration
  ),

  function_body_declaration: $ => seq(
    optional($.function_data_type_or_implicit1),
    optional(choice(
      seq($.interface_identifier, '.'),
      $.class_scope
    )),
    $.function_identifier,
    choice(
      seq(
        ';',
        repeat($.tf_item_declaration)
      ),
      seq(
        '(', optional($.tf_port_list), ')', ';',
        repeat($.block_item_declaration)
      )
    ),
    repeat($.function_statement_or_null),
    'endfunction',
    optseq(':', $.function_identifier)
  ),

  function_prototype: $ => seq(
    'function',
    $.data_type_or_void,
    $.function_identifier,
    optseq(
      '(', optional($.tf_port_list), ')'
    )
  ),

  dpi_import_export: $ => choice(
    seq(
      'import',
      $.dpi_spec_string,
      optional($.dpi_function_import_property),
      optseq($.c_identifier, '='),
      $.dpi_function_proto,
      ';'
    ),
    seq(
      'import',
      $.dpi_spec_string,
      optional($.dpi_task_import_property),
      optseq($.c_identifier, '='),
      $.dpi_task_proto,
      ';'
    ),
    seq(
      'export',
      $.dpi_spec_string,
      optseq($.c_identifier, '='),
      'function',
      $.function_identifier,
      ';'
    ),
    seq(
      'export',
      $.dpi_spec_string,
      optseq($.c_identifier, '='),
      'task',
      $.task_identifier,
      ';'
    )
  ),

  dpi_spec_string: $ => choice('"DPI-C"', '"DPI"'),

  dpi_function_import_property: $ => choice('context', 'pure'),

  dpi_task_import_property: $ => 'context',

  dpi_function_proto: $ => $.function_prototype,

  dpi_task_proto: $ => $.task_prototype,


  // A.2.7 Task declarations

  task_declaration: $ => seq(
    'task',
    optional($.lifetime),
    $.task_body_declaration
  ),

  task_body_declaration: $ => seq(
    optional(choice(
      seq($.interface_identifier, '.'),
      $.class_scope
    )),
    $.task_identifier,
    choice(
      seq(
        ';',
        repeat($.tf_item_declaration)
      ),
      seq(
        '(', optional($.tf_port_list), ')', ';',
        repeat($.block_item_declaration)
      )
    ),
    repeat($.statement_or_null),
    'endtask',
    optseq(':', $.task_identifier)
  ),

  tf_item_declaration: $ => choice(
    $.block_item_declaration,
    $.tf_port_declaration
  ),

  tf_port_list: $ => sep1(',', $.tf_port_item1),

  tf_port_item1: $ => seq(
    repeat($.attribute_instance),
    optional($.tf_port_direction),
    optional('var'),
    choice(
      seq(
        $.data_type_or_implicit1,
        optseq(
          $.port_identifier,
          repeat($._variable_dimension),
          optseq('=', $.expression)
        )
      ),
      seq(
        $.port_identifier,
        repeat($._variable_dimension),
        optseq('=', $.expression)
      )
    )
  ),

  tf_port_direction: $ => choice(
    $.port_direction,
    seq('const', 'ref')
  ),

  tf_port_declaration: $ => seq(
    repeat($.attribute_instance),
    $.tf_port_direction,
    optional('var'),
    optional($.data_type_or_implicit1),
    $.list_of_tf_variable_identifiers,
    ';'
  ),

  task_prototype: $ => seq(
    'task',
    $.task_identifier,
    optseq('(', optional($.tf_port_list), ')')
  ),


  // A.2.8 Block item declarations

  block_item_declaration: $ => seq(
    repeat($.attribute_instance),
    choice(
      $.data_declaration,
      seq($.any_parameter_declaration, ';'),
      $.overload_declaration,
      $.let_declaration
    )
  ),

  overload_declaration: $ => seq(
    'bind',
    $.overload_operator,
    'function',
    $.data_type,
    $.function_identifier,
    '(',
    $.overload_proto_formals,
    ')',
    ';'
  ),

  overload_operator: $ => choice('+', '++', '–', '––', '*', '**', '/', '%', '==', '!=', '<', '<=', '>', '>=', '='),

  overload_proto_formals: $ => sep1(',', $.data_type),

  /* A.2.9 Interface declarations */

  modport_declaration: $ => seq('modport', sep1(',', $.modport_item), ';'),

  modport_item: $ => seq(
    $.modport_identifier,
    '(', sep1(',', $.modport_ports_declaration), ')'
  ),

  modport_ports_declaration: $ => seq(
    repeat($.attribute_instance),
    choice(
      $.modport_simple_ports_declaration,
      $.modport_tf_ports_declaration,
      $.modport_clocking_declaration
    )
  ),

  modport_clocking_declaration: $ => seq('clocking', $.clocking_identifier),

  modport_simple_ports_declaration: $ => seq(
    $.port_direction,
    sep1(',', $.modport_simple_port)
  ),

  modport_simple_port: $ => choice(
    $.port_identifier,
    seq('.', $.port_identifier, '(', optional($.expression), ')')
  ),

  modport_tf_ports_declaration: $ => seq(
    $.import_export, sep1(',', $.modport_tf_port)
  ),

  modport_tf_port: $ => choice(
    // $.method_prototype,
    $.tf_identifier
  ),

  import_export: $ => choice('import', 'export'),

  // A.2.10 Assertion declarations

  concurrent_assertion_item: $ => choice(
    seq(
      optseq($.block_identifier, ':'),
      $.concurrent_assertion_statement
    ),
    $.checker_instantiation
  ),

  concurrent_assertion_statement: $ => choice(
    $.assert_property_statement,
    $.assume_property_statement,
    $.cover_property_statement,
    $.cover_sequence_statement,
    $.restrict_property_statement
  ),

  assert_property_statement: $ => seq(
    'assert', 'property', '(', $.property_spec, ')', $.action_block
  ),

  assume_property_statement: $ => seq(
    'assume', 'property', '(', $.property_spec, ')', $.action_block
  ),

  cover_property_statement: $ => seq(
    'cover', 'property', '(', $.property_spec, ')', $.statement_or_null
  ),

  expect_property_statement: $ => seq(
    'expect', '(', $.property_spec, ')', $.action_block
  ),

  cover_sequence_statement: $ => seq(
    'cover', 'sequence', '(',
    optional($.clocking_event),
    optional(prec.right(PREC.iff, seq(
      'disable', 'iff', '(', $.expression_or_dist, ')'
    ))),
    $.sequence_expr,
    ')',
    $.statement_or_null
  ),

  restrict_property_statement: $ => seq(
    'restrict', 'property', '(', $.property_spec, ')', ';'
  ),

  property_instance: $ => seq(
    $.ps_or_hierarchical_property_identifier,
    optseq(
      '(', optional($.property_list_of_arguments), ')'
    )
  ),

  property_list_of_arguments: $ => choice(
    seq(
      sep1(',', optional($.property_actual_arg)),
      repeat1(seq( // TODO remove 1
        ',', '.', $.identifier, '(', optional($.property_actual_arg), ')'
      ))
    ),
    sep1(',', seq(
      '.', $.identifier, '(', optional($.property_actual_arg), ')'
    ))
  ),

  property_actual_arg: $ => choice(
    $.property_expr
    // $.sequence_actual_arg
  ),

  assertion_item_declaration: $ => choice(
    $.property_declaration,
    $.sequence_declaration,
    $.let_declaration
  ),

  property_declaration: $ => seq(
    'property',
    $.property_identifier,
    optseq(
      '(', optional($.property_port_list), ')'
    ),
    ';',
    repeat($.assertion_variable_declaration),
    $.property_spec,
    optional(';'),
    'endproperty', optseq(':', $.property_identifier)
  ),

  property_port_list: $ => sep1(',', $.property_port_item),

  property_port_item: $ => seq(
    repeat($.attribute_instance),
    optseq(
      'local',
      optional($.property_lvar_port_direction)
    ),
    $.property_formal_type1,
    $.formal_port_identifier,
    repeat($._variable_dimension),
    optseq('=', $.property_actual_arg)
  ),

  property_lvar_port_direction: $ => 'input',

  property_formal_type1: $ => choice(
    $.sequence_formal_type1,
    'property'
  ),

  property_spec: $ => seq(
    optional($.clocking_event),
    optional(prec.right(PREC.iff, seq(
      'disable', 'iff', '(', $.expression_or_dist, ')'
    ))),
    $.property_expr
  ),

  property_expr: $ => choice(
    $.sequence_expr,
    seq('strong', '(', $.sequence_expr, ')'),
    seq('weak', '(', $.sequence_expr, ')'),
    prec.left(PREC.PARENT, seq('(', $.property_expr, ')')),

    // FIXME no assosiativity rules per spec
    prec.left(PREC.nexttime, seq('not', $.property_expr)),
    prec.left(PREC.or, seq($.property_expr, 'or', $.property_expr)),
    prec.left(PREC.and, seq($.property_expr, 'and', $.property_expr)),

    prec.right(PREC.INCIDENCE, seq($.sequence_expr, '|->', $.property_expr)),
    prec.right(PREC.INCIDENCE, seq($.sequence_expr, '|=>', $.property_expr)),

    // FIXME no assosiativity rules per spec
    prec.left(seq('if', '(', $.expression_or_dist, ')', $.property_expr, optseq('else', $.property_expr))), // FIXME spec bug ( ) are not red

    seq('case', '(', $.expression_or_dist, ')', repeat1($.property_case_item), 'endcase'),  // FIXME spec bug ( ) are not red
    prec.right(PREC.INCIDENCE, seq($.sequence_expr, '#-#', $.property_expr)),
    prec.right(PREC.INCIDENCE, seq($.sequence_expr, '#=#', $.property_expr)),

    // FIXME no assosiativity rules per spec
    prec.left(PREC.nexttime, seq('nexttime', $.property_expr)),
    prec.left(PREC.nexttime, seq('nexttime', '[', $.constant_expression, ']', $.property_expr)), // FIXME spec bug constant _expression with the space
    prec.left(PREC.nexttime, seq('s_nexttime', $.property_expr)),
    prec.left(PREC.nexttime, seq('s_nexttime', '[', $.constant_expression, ']', $.property_expr)),
    prec.left(PREC.always, seq('always', $.property_expr)),
    prec.left(PREC.always, seq('always', '[', $.cycle_delay_const_range_expression, ']', $.property_expr)),
    prec.left(PREC.always, seq('s_always', '[', $.constant_range, ']', $.property_expr)),
    prec.left(PREC.always, seq('s_eventually', $.property_expr)),
    prec.left(PREC.always, seq('eventually', '[', $.constant_range, ']', $.property_expr)),
    prec.left(PREC.always, seq('s_eventually', '[', $.cycle_delay_const_range_expression, ']', $.property_expr)),

    prec.right(PREC.until, seq($.property_expr, 'until', $.property_expr)),
    prec.right(PREC.until, seq($.property_expr, 's_until', $.property_expr)),
    prec.right(PREC.until, seq($.property_expr, 'until_with', $.property_expr)),
    prec.right(PREC.until, seq($.property_expr, 's_until_with', $.property_expr)),
    prec.right(PREC.until, seq($.property_expr, 'implies', $.property_expr)),
    prec.right(PREC.iff,   seq($.property_expr, 'iff', $.property_expr)),

    // FIXME no assosiativity rules per spec
    prec.left(PREC.always, seq('accept_on', '(', $.expression_or_dist, ')', $.property_expr)),
    prec.left(PREC.always, seq('reject_on', '(', $.expression_or_dist, ')', $.property_expr)),
    prec.left(PREC.always, seq('sync_accept_on', '(', $.expression_or_dist, ')', $.property_expr)),
    prec.left(PREC.always, seq('sync_reject_on', '(', $.expression_or_dist, ')', $.property_expr)),

    // $.property_instance,
    prec.left(seq($.clocking_event, $.property_expr)) // FIXME no assosiativity rules per spec
  ),

  property_case_item: $ => choice(
    seq(
      sep1(',', $.expression_or_dist), ':', $.property_expr, ';'
    ),
    seq(
      'default', optional(':'), $.property_expr, ';'
    )
  ),

  sequence_declaration: $ => seq(
    'sequence',
    $.sequence_identifier,
    optseq(
      '(', optional($.sequence_port_list), ')'
    ),
    ';',
    repeat($.assertion_variable_declaration),
    $.sequence_expr,
    optional(';'),
    'endsequence', optseq(':', $.sequence_identifier)
  ),

  sequence_port_list: $ => sep1(',', $.sequence_port_item),

  sequence_port_item: $ => seq(
    repeat($.attribute_instance),
    optseq(
      'local',
      optional($.sequence_lvar_port_direction)
    ),
    optional($.sequence_formal_type1),
    $.formal_port_identifier,
    repeat($._variable_dimension),
    optseq(
      '=', $.sequence_actual_arg
    )
  ),

  sequence_lvar_port_direction: $ => choice('input', 'inout', 'output'),

  sequence_formal_type1: $ => choice(
    $.data_type_or_implicit1,
    'sequence',
    'untyped'
  ),

  sequence_expr: $ => choice(
    prec.left(sep1(',', $.cycle_delay_range, $.sequence_expr)), // FIXME precedence?
    // prec.left(seq($.sequence_expr, repeat1(seq($.cycle_delay_range, $.sequence_expr)))), // FIXME precedence?
    seq($.expression_or_dist, optional($.boolean_abbrev)),
    seq($.sequence_instance, optional($.sequence_abbrev)),
    prec.left(seq('(', $.sequence_expr, repseq(',', $.sequence_match_item), ')', optional($.sequence_abbrev))),
    prec.left(PREC.and, seq($.sequence_expr, 'and', $.sequence_expr)),
    prec.left(PREC.intersect, seq($.sequence_expr, 'intersect', $.sequence_expr)),
    prec.left(PREC.or, seq($.sequence_expr, 'or', $.sequence_expr)),
    seq('first_match', '(', $.sequence_expr, repseq(',', $.sequence_match_item), ')'),
    prec.right(PREC.throughout, seq($.expression_or_dist, 'throughout', $.sequence_expr)),
    prec.left(PREC.within, seq($.sequence_expr, 'within', $.sequence_expr)),
    prec.left(seq($.clocking_event, $.sequence_expr)) // FIXME precedence?
  ),

  cycle_delay_range: $ => choice(
    prec.left(seq('##', $.constant_primary)),
    prec.left(seq('##', '[', $.cycle_delay_const_range_expression, ']')),
    '##[*]',
    '##[+]'
  ),

  sequence_method_call: $ => seq($.sequence_instance, '.', $.method_identifier),

  sequence_match_item: $ => choice(
    $.operator_assignment,
    $.inc_or_dec_expression,
    $.subroutine_call
  ),

  sequence_instance: $ => seq(
    $.ps_or_hierarchical_sequence_identifier,
    optseq('(', optional($.sequence_list_of_arguments), ')')
  ),

  sequence_list_of_arguments: $ => choice(
    // seq(
    //   sep1(',', optional($.sequence_actual_arg)),
    //   repseq(',', '.', $.identifier, '(', optional($.sequence_actual_arg), ')')
    // ),
    sep1(',', seq('.', $.identifier, '(', optional($.sequence_actual_arg), ')'))
  ),

  sequence_actual_arg: $ => choice(
    $.event_expression,
    $.sequence_expr
  ),

  boolean_abbrev: $ => choice(
    $.consecutive_repetition,
    $.non_consecutive_repetition,
    $.goto_repetition
  ),

  sequence_abbrev: $ => $.consecutive_repetition,

  consecutive_repetition: $ => choice(
    seq('[*', $.const_or_range_expression, ']'),
    '[*]',
    '[+]'
  ),

  non_consecutive_repetition: $ => seq('[=', $.const_or_range_expression, ']'),

  goto_repetition: $ => seq('[->', $.const_or_range_expression, ']'),

  const_or_range_expression: $ => choice(
    $.constant_expression,
    $.cycle_delay_const_range_expression
  ),

  cycle_delay_const_range_expression: $ => choice(
    seq($.constant_expression, ':', $.constant_expression),
    seq($.constant_expression, ':', '$')
  ),

  expression_or_dist: $ => seq(
    $.expression,
    optional(prec.left(PREC.RELATIONAL, seq('dist', '{', $.dist_list, '}')))
  ),

  assertion_variable_declaration: $ => seq(
    $._var_data_type,
    $.list_of_variable_decl_assignments,
    ';'
  ),

  // A.2.11 Covergroup declarations

  covergroup_declaration: $ => seq(
    'covergroup', $.covergroup_identifier,
    optseq('(', optional($.tf_port_list), ')'),
    optional($.coverage_event),
    ';',
    repeat($.coverage_spec_or_option),
    'endgroup', optseq(':', $.covergroup_identifier)
  ),

  coverage_spec_or_option: $ => choice(
    seq(repeat($.attribute_instance), $.coverage_spec),
    seq(repeat($.attribute_instance), $.coverage_option, ';')
  ),

  coverage_option: $ => choice(
    seq('option', '.', $.member_identifier, '=', $.expression),
    seq('type_option', '.', $.member_identifier, '=', $.constant_expression)
  ),

  coverage_spec: $ => choice($.cover_point, $.cover_cross),

  coverage_event: $ => choice(
    $.clocking_event,
    seq('with', 'function', 'sample', '(', optional($.tf_port_list), ')'),
    seq('@@', '(', $.block_event_expression, ')')
  ),

  block_event_expression: $ => choice(
    prec.left(PREC.or, seq($.block_event_expression, 'or', $.block_event_expression)),
    seq('begin', $.hierarchical_btf_identifier),
    seq('end', $.hierarchical_btf_identifier)
  ),

  hierarchical_btf_identifier: $ => choice(
    $.hierarchical_tf_identifier,
    $.hierarchical_block_identifier,
    prec.left(PREC.PARENT, seq(
      choice(seq($.hierarchical_identifier, '.'), $.class_scope),
      $.method_identifier
    ))
  ),

  cover_point: $ => seq(
    optseq(optional($.data_type_or_implicit1), $.cover_point_identifier, ':'),
    'coverpoint', $.expression,
    optional(prec.right(PREC.iff, seq('iff', '(', $.expression, ')'))),
    $.bins_or_empty
  ),

  bins_or_empty: $ => choice(
    seq('{', repeat($.attribute_instance), repseq($.bins_or_options, ';'), '}'),
    ';'
  ),

  bins_or_options: $ => choice(
    $.coverage_option,
    seq(
      'wildcard',
      $.bins_keyword,
      $.bin_identifier,
      optseq('[', optional($.covergroup_expression), ']'),
      '=',
      '{', $.covergroup_range_list, '}',
      optseq('with', '(', $.with_covergroup_expression, ')'),
      optional(prec.right(PREC.iff, seq('iff', '(', $.expression, ')')))
    ),
    seq(
      'wildcard',
      $.bins_keyword,
      $.bin_identifier,
      optseq('[', optional($.covergroup_expression), ']'),
      '=',
      $.cover_point_identifier,
      'with', '(', $.with_covergroup_expression, ')',
      optional(prec.right(PREC.iff, seq('iff', '(', $.expression, ')')))
    ),
    seq(
      'wildcard',
      $.bins_keyword,
      $.bin_identifier,
      optseq('[', optional($.covergroup_expression), ']'),
      '=',
      $.set_covergroup_expression,
      optional(prec.right(PREC.iff, seq('iff', '(', $.expression, ')')))
    ),
    seq(
      'wildcard',
      $.bins_keyword,
      $.bin_identifier,
      optseq('[', ']'),
      '=',
      $.trans_list,
      optional(prec.right(PREC.iff, seq('iff', '(', $.expression, ')')))
    ),
    seq(
      $.bins_keyword,
      $.bin_identifier,
      optseq('[', optional($.covergroup_expression), ']'),
      '=',
      'default',
      optional(prec.right(PREC.iff, seq('iff', '(', $.expression, ')')))
    ),
    seq(
      $.bins_keyword,
      $.bin_identifier,
      '=',
      'default',
      'sequence',
      optional(prec.right(PREC.iff, seq('iff', '(', $.expression, ')')))
    )
  ),

  bins_keyword: $ => choice('bins', 'illegal_bins', 'ignore_bins'),

  trans_list: $ => sep1(',', seq('(', $.trans_set, ')')),

  trans_set: $ => sep1('=>', $.trans_range_list),

  trans_range_list: $ => choice(
    $.trans_item,
    seq($.trans_item, '[*', $.repeat_range, ']'),
    seq($.trans_item, '[–>', $.repeat_range, ']'),
    seq($.trans_item, '[=', $.repeat_range, ']')
  ),

  trans_item: $ => $.covergroup_range_list,

  repeat_range: $ => seq(
    $.covergroup_expression, optseq(':', $.covergroup_expression)
  ),

  cover_cross: $ => seq(
    optseq($.cross_identifier, ':'),
    'cross',
    $.list_of_cross_items,
    optional(prec.right(PREC.iff, seq('iff', '(', $.expression, ')'))),
    $.cross_body
  ),

  list_of_cross_items: $ => seq($.cross_item, ',', sep1(',', $.cross_item)),

  cross_item: $ => choice(
    $.cover_point_identifier
    // $.variable_identifier
  ),

  cross_body: $ => choice(
    seq('{', repseq($.cross_body_item, ';'), '}'),
    ';'
  ),

  cross_body_item: $ => choice(
    $.function_declaration, // FIXME standard function_declaraton => function_declaration
    seq($.bins_selection_or_option, ';')
  ),

  bins_selection_or_option: $ => choice(
    seq(repeat($.attribute_instance), $.coverage_option),
    seq(repeat($.attribute_instance), $.bins_selection)
  ),

  bins_selection: $ => seq(
    $.bins_keyword, $.bin_identifier, '=', $.select_expression,
    optional(prec.right(PREC.iff, seq('iff', '(', $.expression, ')')))
  ),

  select_expression: $ => choice(
    $.select_condition,
    prec.left(PREC.UNARY, seq('!', $.select_condition)),
    prec.left(PREC.LOGICAL_AND, seq($.select_expression, '&&', $.select_expression)),
    prec.left(PREC.LOGICAL_OR, seq($.select_expression, '||', $.select_expression)),
    prec.left(PREC.PARENT, seq('(', $.select_expression, ')')),
    seq(
      $.select_expression, 'with', '(', $.with_covergroup_expression, ')',
      optseq('matches', $.integer_covergroup_expression)
    ),
    $.cross_identifier,
    seq(
      $.cross_set_expression,
      optseq('matches', $.integer_covergroup_expression)
    )
  ),

  select_condition: $ => seq(
    'binsof', '(', $.bins_expression, ')',
    optseq('intersect', '{', $.covergroup_range_list, '}')
  ),

  bins_expression: $ => choice(
    $.variable_identifier,
    prec.left(PREC.PARENT, seq($.cover_point_identifier, optseq('.', $.bin_identifier)))
  ),

  covergroup_range_list: $ => sep1(',', $.covergroup_value_range),

  covergroup_value_range: $ => choice(
    $.covergroup_expression,
    seq('[', $.covergroup_expression, ':', $.covergroup_expression, ']')
  ),

  with_covergroup_expression: $ => $.covergroup_expression,

  set_covergroup_expression: $ => $.covergroup_expression,

  integer_covergroup_expression: $ => $.covergroup_expression,

  cross_set_expression: $ => $.covergroup_expression,

  covergroup_expression: $ => $.expression,

  /* A.2.12 Let declarations */

  let_declaration: $ => seq(
    'let', $.let_identifier,
    optseq('(', optional($.let_port_list), ')'),
    '=', $.expression, ';'
  ),

  let_identifier: $ => $.identifier,

  let_port_list: $ => sep1(',', $.let_port_item),

  let_port_item: $ => seq(
    repeat($.attribute_instance),
    optional($.let_formal_type1),
    $.formal_port_identifier,
    repeat($._variable_dimension),
    optseq('=', $.expression)
  ),

  let_formal_type1: $ => choice(
    $.data_type_or_implicit1,
    'untyped'
  ),

  let_expression: $ => prec.left(seq(
    optional($.package_scope),
    $.let_identifier,
    optseq('(', optional($.let_list_of_arguments), ')')
  )),

  let_list_of_arguments: $ => choice(
    // FIXME empty string
    // seq(
    //   sep1(',', optional($.let_actual_arg)),
    //   repseq(',', '.', $.identifier, '(', optional($.let_actual_arg), ')')
    // ),
    sep1(',', seq('.', $.identifier, '(', optional($.let_actual_arg), ')'))
  ),

  let_actual_arg: $ => $.expression,

  // A.3 Primitive instances

  // A.3.1 Primitive instantiation and instances

  gate_instantiation: $ => seq(
    choice(
      seq(
        $.cmos_switchtype,
        optional($.delay3),
        sep1(',', $.cmos_switch_instance)
      ),
      seq(
        $.enable_gatetype,
        optional($.drive_strength), optional($.delay3),
        sep1(',', $.enable_gate_instance)
      ),
      seq(
        $.mos_switchtype,
        optional($.delay3),
        sep1(',', $.mos_switch_instance)
      ),
      seq(
        $.n_input_gatetype,
        optional($.drive_strength), optional($.delay2),
        sep1(',', $.n_input_gate_instance)
      ),
      seq(
        $.n_output_gatetype,
        optional($.drive_strength), optional($.delay2),
        sep1(',', $.n_output_gate_instance)
      ),
      seq(
        $.pass_en_switchtype,
        optional($.delay2),
        sep1(',', $.pass_enable_switch_instance)
      ),
      seq(
        $.pass_switchtype,
        sep1(',', $.pass_switch_instance)
      ),
      seq(
        'pulldown',
        optional($.pulldown_strength),
        sep1(',', $.pull_gate_instance)
      ),
      seq(
        'pullup',
        optional($.pullup_strength),
        sep1(',', $.pull_gate_instance)
      )
    ),
    ';'
  ),

  cmos_switch_instance: $ => seq(
    optional($.name_of_instance),
    '(',
    $.output_terminal, ',',
    $.input_terminal, ',',
    $.ncontrol_terminal, ',',
    $.pcontrol_terminal,
    ')'
  ),

  enable_gate_instance: $ => seq(
    optional($.name_of_instance),
    '(', $.output_terminal, ',', $.input_terminal, ',', $.enable_terminal, ')'
  ),

  mos_switch_instance: $ => seq(
    optional($.name_of_instance),
    '(', $.output_terminal, ',', $.input_terminal, ',', $.enable_terminal, ')'
  ),

  n_input_gate_instance: $ => seq(
    optional($.name_of_instance),
    '(', $.output_terminal, ',', sep1(',', $.input_terminal), ')'
  ),

  n_output_gate_instance: $ => seq(
    optional($.name_of_instance),
    '(', sep1(',', $.output_terminal), ',', $.input_terminal, ')'
  ),

  pass_switch_instance: $ => seq(
    optional($.name_of_instance),
    '(', $.inout_terminal, ',', $.inout_terminal, ')'
  ),

  pass_enable_switch_instance: $ => seq(
    optional($.name_of_instance),
    '(', $.inout_terminal, ',', $.inout_terminal, ',', $.enable_terminal, ')'
  ),

  pull_gate_instance: $ => seq(
    optional($.name_of_instance),
    '(', $.output_terminal, ')'
  ),

  // A.3.2 Primitive strengths

  pulldown_strength: $ => choice(
    seq('(', $.strength0, ',', $.strength1, ')'),
    seq('(', $.strength1, ',', $.strength0, ')'),
    seq('(', $.strength0, ')')
  ),

  pullup_strength: $ =>choice(
    seq(',', $.strength0, ',', $.strength1, ')'),
    seq(',', $.strength1, ',', $.strength0, ')'),
    seq(',', $.strength1, ')')
  ),

  // A.3.3 Primitive terminals

  enable_terminal: $ => $.expression,
  inout_terminal: $ => $.net_lvalue,
  input_terminal: $ => $.expression,
  ncontrol_terminal: $ => $.expression,
  output_terminal: $ => $.net_lvalue,
  pcontrol_terminal: $ => $.expression,

  // A.3.4 Primitive gate and switch types

  cmos_switchtype: $ => choice('cmos', 'rcmos'),
  enable_gatetype: $ => choice('bufif0', 'bufif1', 'notif0', 'notif1'),
  mos_switchtype: $ => choice('nmos', 'pmos', 'rnmos', 'rpmos'),
  n_input_gatetype: $ => choice('and', 'nand', 'or', 'nor', 'xor', 'xnor'),
  n_output_gatetype: $ => choice('buf', 'not'),
  pass_en_switchtype: $ => choice('tranif0', 'tranif1', 'rtranif1', 'rtranif0'),
  pass_switchtype: $ => choice('tran', 'rtran'),

  // A.4 Instantiations

  // A.4.1 Instantiation

  // A.4.1.1 Module instantiation

  module_instantiation: $ => seq(
    $.module_identifier,
    optional($.parameter_value_assignment),
    sep1(',', $.hierarchical_instance),
    ';'
  ),

  parameter_value_assignment: $ => seq(
    '#', '(', optional($.list_of_parameter_assignments), ')'
  ),

  list_of_parameter_assignments: $ => choice(
    sep1(',', $.ordered_parameter_assignment),
    sep1(',', $.named_parameter_assignment)
  ),

  ordered_parameter_assignment: $ => alias($.param_expression, $._ordered_parameter_assignment),

  named_parameter_assignment: $ => seq(
    '.', $.parameter_identifier, '(', optional($.param_expression), ')'
  ),

  hierarchical_instance: $ => seq(
    $.name_of_instance, '(', optional($.list_of_port_connections), ')'
  ),

  name_of_instance: $ => seq(
    $.instance_identifier, repeat($.unpacked_dimension)
  ),

  // Reordered

  list_of_port_connections: $ => choice(
    sep1(',', $.named_port_connection),
    sep1(',', $.ordered_port_connection)
  ),

  ordered_port_connection: $ => seq(
    repeat($.attribute_instance),
    $.expression
  ),

  // from spec:
  // named_port_connection: $ =>
  //   { attribute_instance } . port_identifier [ ( [ expression ] ) ]
  // | { attribute_instance } .*

  named_port_connection: $ => seq(
    repeat($.attribute_instance),
    choice(
      seq('.', $.port_identifier, optseq(
        '(', optional($.expression), ')'
      )),
      '.*'
    )
  ),

  /* A.4.1.2 Interface instantiation */

  interface_instantiation: $ => seq(
    $.interface_identifier,
    optional($.parameter_value_assignment),
    sep1(',', $.hierarchical_instance),
    ';'
  ),

  /* A.4.1.3 Program instantiation */

  program_instantiation: $ => seq(
    $.program_identifier,
    optional($.parameter_value_assignment),
    sep1(',', $.hierarchical_instance),
    ';'
  ),

  /* A.4.1.4 Checker instantiation */

  checker_instantiation: $ => seq(
    $.ps_checker_identifier,
    $.name_of_instance,
    '(',
    // optional($.list_of_checker_port_connections),
    choice(
      sep1(',', optseq(
        repeat($.attribute_instance),
        optional($.property_actual_arg)
      )),
      // sep1(',', $.named_checker_port_connection)
      sep1(',', choice(
        seq(
          repeat($.attribute_instance), '.', $.formal_port_identifier,
          optseq('(', optional($.property_actual_arg), ')')
        ),
        seq(
          repeat($.attribute_instance), '.*'
        )
      ))
    ),
    ')',
    ';'
  ),

  // list_of_checker_port_connections1: $ => choice(
  //   sep1(',', optional($.ordered_checker_port_connection1)),
  //   sep1(',', $.named_checker_port_connection)
  // ),

  // ordered_checker_port_connection: $ => seq(
  //   repeat($.attribute_instance),
  //   optional($.property_actual_arg)
  // ),

  // named_checker_port_connection: $ => choice(
  //   seq(
  //     repeat($.attribute_instance), '.', $.formal_port_identifier,
  //     optseq('(', optional($.property_actual_arg), ')')
  //   ),
  //   seq(
  //     repeat($.attribute_instance, '.*')
  //   )
  // ),

  /* A.4.2 Generated instantiation */

  generate_region: $ => seq(
    'generate', repeat($.generate_item), 'endgenerate'
  ),

  loop_generate_construct: $ => seq(
    'for', '(',
    $.genvar_initialization, ';', $.genvar_expression, ';', $.genvar_iteration,
    ')',
    $.generate_block
  ),

  genvar_initialization: $ => seq(
    optional('genvar'),
    $.genvar_identifier,
    '=',
    $.constant_expression
  ),

  genvar_iteration: $ => choice(
    seq($.genvar_identifier, $.assignment_operator, $.genvar_expression),
    seq($.inc_or_dec_operator, $.genvar_identifier),
    seq($.genvar_identifier, $.inc_or_dec_operator)
  ),

  conditional_generate_construct: $ => choice(
    $.if_generate_construct,
    $.case_generate_construct
  ),

  if_generate_construct: $ => prec.left(seq(
    'if', '(', $.constant_expression, ')', $.generate_block,
    optseq('else', $.generate_block)
  )),

  case_generate_construct: $ => seq(
    'case', '(', $.constant_expression, ')', $.case_generate_item,
    repeat($.case_generate_item),
    'endcase'
  ),

  case_generate_item: $ => choice(
    seq(sep1(',', $.constant_expression), ':', $.generate_block),
    seq('default', optional(':'), $.generate_block)
  ),

  generate_block: $ => choice(
    $.generate_item,
    seq(
      optseq($.generate_block_identifier, ':'),
      'begin',
      optseq(':', $.generate_block_identifier),
      repeat($.generate_item),
      'end',
      optseq(':', $.generate_block_identifier)
    )
  ),

  generate_item: $ => choice(
    $.module_or_generate_item,
    $.interface_or_generate_item,
    $.checker_or_generate_item
  ),

  /* 5. Lexical conventions */

  // SourceCharacter = .

  /*Letter
    = Lu
    / Ll
    / Lt
    / Lm
    / Lo
    / Nl*/

  /*Digit
    = Nd*/

  /* 5.5 Operators */

  /* 5.6 Identifiers, keywords, and system names */

  /* 5.6.1 Escaped identifiers */

  /* 5.6.2 Keywords

  Keywords are predefined nonescaped identifiers that are used to define the
  language constructs. A SystemVerilog keyword preceded by an escape character is
  not interpreted as a keyword. All keywords are defined in lowercase only. Annex
  B gives a list of all defined keywords. Subclause 22.14 discusses compatibility
  of reserved keywords with previous versions of IEEE Std 1364 and IEEE Std 1800.
  */


  /* 5.6.3 System tasks and system functions

  The dollar sign ($) introduces a language construct that enables development of
  user-defined system tasks and system functions. System constructs are not design
  semantics, but refer to simulator functionality. A name following the $ is
  interpreted as a system task or a system function.
  */

  /* 5.6.4 Compiler directives

  The ` character (the ASCII value 0x60, called grave accent) introduces a
  language construct used to implement compiler directives. The compiler behavior
  dictated by a compiler directive shall take effect as soon as the compiler reads
  the directive. The directive shall remain in effect for the rest of the
  compilation unless a different compiler directive specifies otherwise. A
  compiler directive in one description file can, therefore, control compilation
  behavior in multiple description files. The effects of a compiler directive are
  limited to a compilation unit (see 3.12.1) and shall not affect other
  compilation units.
  */

  /* 5.7 Numbers

  Constant numbers can be specified as integer constants (see 5.7.1) or real
  constants (see 5.7.2). The formal syntax for numbers is listed in Syntax 5-2.
  */







  // A.6 Behavioral statements

  // A.6.1 Continuous assignment and net alias statements

  continuous_assign: $ => seq(
    'assign',
    choice(
      seq(
        optional($.drive_strength),
        optional($.delay3),
        $.list_of_net_assignments
      ),
      seq(
        optional($.delay_control),
        $.list_of_variable_assignments
      )
    ),
    ';'
  ),

  list_of_net_assignments: $ => sep1(',', $.net_assignment),

  list_of_variable_assignments: $ => sep1(',', $.variable_assignment),

  net_alias: $ => seq(
    'alias', $.net_lvalue, '=', sep1(',', seq('=', $.net_lvalue)), ';'
  ),

  net_assignment: $ => seq($.net_lvalue, '=', $.expression),

  // A.6.2 Procedural blocks and assignments

  initial_construct: $ => seq('initial', $.statement_or_null),

  always_construct: $ => seq($.always_keyword, $.statement),

  always_keyword: $ => choice(
    'always', 'always_comb', 'always_latch', 'always_ff'
  ),

  final_construct: $ => seq('final', $.function_statement),

  blocking_assignment: $ => choice(
    seq(
      $.variable_lvalue, '=', $.delay_or_event_control, $.expression
    ),
    // seq(
    //   $.nonrange_variable_lvalue, '=', $.dynamic_array_new
    // ),
    // seq(
    //   optional(choice(
    //     seq($.implicit_class_handle, '.'),
    //     $.class_scope,
    //     $.package_scope
    //   )),
    //   $.hierarchical_variable_identifier
    //   $.select,
    //   '=',
    //   $.class_new
    // ),
    $.operator_assignment
  ),

  operator_assignment: $ => seq(
    $.variable_lvalue, $.assignment_operator, $.expression
  ),

  assignment_operator: $ => choice(
    '=', '+=', '-=', '*=', '/=', '%=', '&=', '|=', '^=', '<<=', '>>=', '<<<=', '>>>='
  ),

  nonblocking_assignment: $ => seq(
    $.variable_lvalue, '<=', optional($.delay_or_event_control), $.expression
  ),

  procedural_continuous_assignment: $ => choice(
    seq('assign', $.variable_assignment),
    seq('deassign', $.variable_lvalue),
    seq('force', $.variable_assignment),
    seq('force', $.net_assignment),
    seq('release', $.variable_lvalue),
    seq('release', $.net_lvalue)
  ),

  variable_assignment: $ => seq(
    $.variable_lvalue,
    '=',
    $.expression
  ),

  // A.6.3 Parallel and sequential blocks

  action_block: $ => choice(
    $.statement_or_null,
    seq(optional($.statement), 'else', $.statement_or_null)
  ),

  seq_block: $ => seq(
    'begin', optseq(':', $.block_identifier),
    repeat($.block_item_declaration),
    repeat($.statement_or_null),
    'end', optseq(':', $.block_identifier)
  ),

  par_block: $ => seq(
    'fork', optseq(':', $.block_identifier),
    repeat($.block_item_declaration),
    repeat($.statement_or_null),
    $.join_keyword, optseq(':', $.block_identifier)
  ),

  join_keyword: $ => choice('join', 'join_any', 'join_none'),

  // A.6.4 Statements

  statement_or_null: $ => choice(
    $.statement,
    seq(optional($.attribute_instance), ';')
  ),

  statement: $ => seq(
    optseq($.block_identifier, ':'),
    repeat($.attribute_instance),
    $.statement_item
  ),

  statement_item: $ => choice(
    seq($.blocking_assignment, ';'),
    seq($.nonblocking_assignment, ';'),
    seq($.procedural_continuous_assignment, ';'),
    $.case_statement,
    $.conditional_statement,
    seq($.inc_or_dec_expression, ';'),
    $.subroutine_call_statement,
    $.disable_statement,
    $.event_trigger,
    $.loop_statement,
    $.jump_statement,
    $.par_block,
    $.seq_block,
    $.procedural_timing_control_statement,
    $.wait_statement,
    $.procedural_assertion_statement,
    // seq($.clocking_drive, ';'),
    // $.randsequence_statement,
    $.randcase_statement,
    $.expect_property_statement
  ),

  function_statement: $ => $.statement,

  function_statement_or_null: $ => choice(
    $.function_statement,
    seq(repeat($.attribute_instance), ';')
  ),

  variable_identifier_list: $ => sep1(',', $.variable_identifier),


  // A.6.5 Timing control statements

  procedural_timing_control_statement: $ => seq(
    $._procedural_timing_control, $.statement_or_null // statement_or_null1
  ),

  delay_or_event_control: $ => choice(
    $.delay_control,
    $.event_control,
    seq('repeat', '(', $.expression, ')', $.event_control)
  ),

  delay_control: $ => seq('#', choice(
    $.delay_value,
    seq('(', $.mintypmax_expression, ')')
  )),

  event_control: $ => choice(
    // seq('@', $.hierarchical_event_identifier),
    seq('@', '(', choice($.event_expression, '*'), ')'),
    '@*'
    // seq('@', $.ps_or_hierarchical_sequence_identifier)
  ),

  event_expression: $ => choice( // reordered : brake recursion
    prec.left(seq($.event_expression, 'or', $.event_expression)),
    prec.left(seq($.event_expression, ',', $.event_expression)),
    seq(
      optional($.edge_identifier),
      $.expression
    ) // reordered : help parser
    // seq(
    //   optional($.edge_identifier),
    //   $.expression,
    //   optseq('iff', $.expression)
    // ),
    // seq(
    //   $.sequence_instance,
    //   optseq('iff', $.expression)
    // ),
    // seq('(', $.event_expression, ')')
  ),

  // event_expression_2: $ => choice( // reordered : help parser
  //   seq($.edge_identifier, $.expression), // reordered : help parser
  //   seq(
  //     optional($.edge_identifier),
  //     $.expression,
  //     optseq('iff', $.expression)
  //   ),
  //   // seq(
  //   //   $.sequence_instance,
  //   //   optseq('iff', $.expression)
  //   // ),
  //   seq('(', $.event_expression, ')')
  // ),

  _procedural_timing_control: $ => choice(
    $.delay_control,
    $.event_control,
    $.cycle_delay
  ),

  jump_statement: $ => choice(
    seq('return', optional($.expression), ';'),
    seq('break', ';'),
    seq('continue', ';')
  ),

  wait_statement: $ => choice(
    seq('wait', '(', $.expression, ')', $.statement_or_null),
    seq('wait', 'fork', ';'),
    seq('wait_order', '(', sep1(',', $.hierarchical_identifier), ')', $.action_block)
  ),

  event_trigger: $ => choice(
    seq('->', $.hierarchical_event_identifier, ';'),
    seq('->>', optional($.delay_or_event_control), $.hierarchical_event_identifier, ';')
  ),

  disable_statement: $ => choice(
    seq('disable', $.hierarchical_task_identifier, ';'),
    seq('disable', $.hierarchical_block_identifier, ';'),
    seq('disable', 'fork', ';')
  ),

  // A.6.6 Conditional statements

  conditional_statement: $ => prec.left(seq(
    optional($.unique_priority),
    'if', '(', $.cond_predicate, ')', $.statement_or_null,
    // repseq('else', 'if', '(', $.cond_predicate, ')', $.statement_or_null),
    optseq('else', $.statement_or_null)
  )),

  unique_priority: $ => choice('unique', 'unique0', 'priority'),

  cond_predicate: $ => psep1(PREC.PARENT, '&&&', $.expression_or_cond_pattern), // FIXME precedence

  expression_or_cond_pattern: $ => choice(
    $.expression,
    $.cond_pattern
  ),

  cond_pattern: $ => seq($.expression, 'matches', $.pattern),

  // A.6.7 Case statements

  case_statement: $ => seq(
    optional($.unique_priority),
    seq(
      $.case_keyword,
      '(', $.case_expression, ')',
      choice(
        repeat1($.case_item),
        seq('matches', repeat1($.case_pattern_item)),
        seq('inside', repeat1($.case_inside_item)) // only case
      )
    ),
    'endcase'
  ),

  case_keyword: $ => choice('case', 'casez', 'casex'),

  case_expression: $ => $.expression,

  case_item: $ => choice(
    seq(sep1(',', $.case_item_expression), ':', $.statement_or_null),
    seq('default', optional(':'), $.statement_or_null)
  ),

  case_pattern_item: $ => choice(
    seq($.pattern, optseq('&&&', $.expression), ':', $.statement_or_null),
    seq('default', optional(':'), $.statement_or_null)
  ),

  case_inside_item: $ => choice(
    seq($.open_range_list, ':', $.statement_or_null),
    seq('default', optional(':'), $.statement_or_null)
  ),

  case_item_expression: $ => $.expression,

  randcase_statement: $ => seq(
    'randcase', $.randcase_item, repeat($.randcase_item), 'endcase'
  ),

  randcase_item: $ => seq($.expression, ':', $.statement_or_null),

  open_range_list: $ => sep1(',', $.open_value_range),

  open_value_range: $ => $.value_range,

  // A.6.7.1 Patterns

  pattern: $ => choice(
    seq('.', $.variable_identifier),
    '.*',
    $.constant_expression,
    seq('tagged', $.member_identifier, optional($.pattern)),
    seq('\'{', sep1(',', $.pattern), '}'),
    seq('\'{', sep1(',', seq($.member_identifier, ':', $.pattern)), '}')
  ),

  assignment_pattern: $ => seq(
    '\'{',
    choice(
      sep1(',', $.expression),
      // sep1(',', seq($.structure_pattern_key, ':', $.expression)),
      sep1(',', seq($.array_pattern_key, ':', $.expression)),
      seq($.constant_expression, '{', sep1(',', $.expression), '}')
    ),
    '}'
  ),

  structure_pattern_key: $ => choice(
    $.member_identifier,
    $.assignment_pattern_key
  ),

  array_pattern_key: $ => choice(
    $.constant_expression,
    $.assignment_pattern_key
  ),

  assignment_pattern_key: $ => choice(
    $.simple_type,
    'default'
  ),

  assignment_pattern_expression: $ => seq(
    optional($.assignment_pattern_expression_type), $.assignment_pattern
  ),

  assignment_pattern_expression_type: $ => choice(
    $.ps_type_identifier,
    // $.ps_parameter_identifier,
    $.integer_atom_type,
    $.type_reference
  ),

  constant_assignment_pattern_expression: $ => $.assignment_pattern_expression,

  assignment_pattern_net_lvalue: $ => seq(
    '\'{', sep1(',', $.net_lvalue), '}'
  ),

  assignment_pattern_variable_lvalue: $ => seq(
    '\'{', sep1(',', $.variable_lvalue), '}'
  ),

  // A.6.8 Looping statements

  loop_statement: $ => choice(
    seq('forever', $.statement_or_null),
    seq('repeat', '(', $.expression, ')', $.statement_or_null),
    seq('while', '(', $.expression, ')', $.statement_or_null),
    seq(
      'for', '(',
      optional($.for_initialization), ';',
      optional($.expression), ';',
      optional($.for_step),
      ')',
      $.statement_or_null
    ),
    seq('do', $.statement_or_null, 'while', '(', $.expression, ')', ';'),
    seq(
      'foreach', '(',
      $.ps_or_hierarchical_array_identifier,
      '[',
      optional($.loop_variables1),
      ']',
      ')',
      $.statement
    )
  ),

  for_initialization: $ => choice(
    $.list_of_variable_assignments,
    sep1(',', $.for_variable_declaration)
  ),

  for_variable_declaration: $ => seq(
    optional('var'), $.data_type,
    sep1(',', seq(
      $.variable_identifier, '=', $.expression
    ))
  ),

  for_step: $ => sep1(',', $.for_step_assignment),

  for_step_assignment: $ => choice(
    $.operator_assignment,
    $.inc_or_dec_expression,
    $.function_subroutine_call
  ),

  loop_variables1: $ => seq(
    $.index_variable_identifier,
    repseq(',', optional($.index_variable_identifier))
  ),

  // A.6.9 Subroutine call statements

  subroutine_call_statement: $ => choice(
    seq($.subroutine_call, ';'),
    seq('void\'', '(', $.function_subroutine_call, ')', ';')
  ),

  // A.6.10 Assertion statements

  assertion_item: $ => choice(
    $.concurrent_assertion_item,
    $.deferred_immediate_assertion_item
  ),

  deferred_immediate_assertion_item: $ => seq(
    optseq(
      $.block_identifier, ':'
    ),
    $.deferred_immediate_assertion_statement
  ),

  procedural_assertion_statement: $ => choice(
    $.concurrent_assertion_statement,
    $.immediate_assertion_statement,
    $.checker_instantiation
  ),

  immediate_assertion_statement: $ => choice(
    $.simple_immediate_assertion_statement,
    $.deferred_immediate_assertion_statement
  ),

  simple_immediate_assertion_statement: $ => choice(
    $.simple_immediate_assert_statement,
    $.simple_immediate_assume_statement,
    $.simple_immediate_cover_statement
  ),

  simple_immediate_assert_statement: $ => seq(
    'assert', '(', $.expression, ')', $.action_block
  ),

  simple_immediate_assume_statement: $ => seq(
    'assume', '(', $.expression, ')', $.action_block
  ),

  simple_immediate_cover_statement: $ => seq(
    'cover', '(', $.expression, ')', $.statement_or_null
  ),

  deferred_immediate_assertion_statement: $ => choice(
    $.deferred_immediate_assert_statement,
    $.deferred_immediate_assume_statement,
    $.deferred_immediate_cover_statement
  ),

  deferred_immediate_assert_statement: $ => seq(
    'assert',
    choice('#0', 'final'),
    '(', $.expression, ')', $.action_block
  ),

  deferred_immediate_assume_statement: $ => seq(
    'assume',
    choice('#0', 'final'),
    '(', $.expression, ')', $.action_block
  ),

  deferred_immediate_cover_statement: $ => seq(
    'cover',
    choice('#0', 'final'),
    '(', $.expression, ')', $.statement_or_null
  ),

  // A.6.11 Clocking block

  // clocking_declaration
  // = [ default ] clocking [ clocking_identifier ] clocking_event ;
  // { clocking_item }
  // endclocking [ : clocking_identifier ]
  // | global clocking [ clocking_identifier ] clocking_event ;
  //   endclocking [ : clocking_identifier ]

  clocking_event: $ => seq('@', choice(
    $.identifier,
    seq('@', '(', $.event_expression, ')')
  )),

  // clocking_item =
  // default default_skew ;
  // | clocking_direction list_of_clocking_decl_assign ;
  // | ( attribute_instance __ )* assertion_item_declaration
  // default_skew =
  // input clocking_skew
  // | output clocking_skew
  // | input clocking_skew output clocking_skew
  // clocking_direction =
  // input [ clocking_skew ]
  // | output [ clocking_skew ]
  // | input [ clocking_skew ] output [ clocking_skew ]
  // | inout
  // list_of_clocking_decl_assign
  //   = clocking_decl_assign { , clocking_decl_assign }
  // clocking_decl_assign = signal_identifier [ = expression ]
  // clocking_skew =
  // edge_identifier [ delay_control ]
  // | delay_control
  // clocking_drive =
  // clockvar_expression <= [ cycle_delay ] expression

  cycle_delay: $ => prec.left(seq('##', choice(
    $.integral_number,
    $.identifier,
    seq('(', $.expression, ')')
  ))),

  clockvar: $ => $.hierarchical_identifier,

  clockvar_expression: $ => seq(
    $.clockvar,
    optional($.select1)
  ),

  // A.6.12 Randsequence

  // randsequence_statement = randsequence ( [ production_identifier ] )
  // production { production }
  // endsequence
  // production
  //   = [ data_type_or_void ] production_identifier
  //  [ ( tf_port_list ) ] : rs_rule { | rs_rule } ;
  // rs_rule = rs_production_list [ := weight_specification [ rs_code_block ] ]
  // rs_production_list =
  // rs_prod { rs_prod }
  // | rand join [ ( expression ) ] production_item
  //   production_item { production_item }
  // weight_specification =
  // integral_number
  // | ps_identifier
  // | ( expression )
  // rs_code_block = { { data_declaration } { statement_or_null } }
  // rs_prod =
  // production_item
  // | rs_code_block
  // | rs_if_else
  // | rs_repeat
  // | rs_case
  // production_item = production_identifier [ ( list_of_arguments ) ]
  // rs_if_else = if ( expression ) production_item [ else production_item ]
  // rs_repeat = repeat ( expression ) production_item
  // rs_case = case ( case_expression ) rs_case_item { rs_case_item } endcase
  // rs_case_item =
  // case_item_expression { , case_item_expression } : production_item ;
  // | default [ : ] production_item ;

  // A.7 Specify section

  // A.7.1 Specify block declaration

  specify_block: $ => seq('specify', repeat($.specify_item), 'endspecify'),

  specify_item: $ => choice(
    $.specparam_declaration,
    $.pulsestyle_declaration,
    $.showcancelled_declaration,
    $.path_declaration,
    $.system_timing_check
  ),

  pulsestyle_declaration: $ => seq(
    choice('pulsestyle_onevent', 'pulsestyle_ondetect'),
    $.list_of_path_outputs,
    ';'
  ),

  showcancelled_declaration: $ => seq(
    choice('showcancelled', 'noshowcancelled'),
    $.list_of_path_outputs,
    ';'
  ),

  // A.7 Specify section

  // A.7.1 Specify block declaration

  // A.7.2 Specify path declarations

  path_declaration: $ => seq(
    choice(
      $.simple_path_declaration,
      $.edge_sensitive_path_declaration,
      $.state_dependent_path_declaration
    ),
    ';'
  ),

  simple_path_declaration: $ => seq(
    choice($.parallel_path_description, $.full_path_description),
    '=',
    $.path_delay_value
  ),

  parallel_path_description: $ => seq(
    '(',
    $.specify_input_terminal_descriptor,
    optional($.polarity_operator),
    '=>',
    $.specify_output_terminal_descriptor,
    ')'
  ),

  full_path_description: $ => seq(
    '(',
    $.list_of_path_inputs,
    optional($.polarity_operator),
    '*>',
    $.list_of_path_outputs,
    ')'
  ),

  list_of_path_inputs: $ => sep1(',', $.specify_input_terminal_descriptor),

  list_of_path_outputs: $ => sep1(',', $.specify_output_terminal_descriptor),

  // A.7.3 Specify block terminals

  specify_input_terminal_descriptor: $ => seq(
    $.input_identifier, optseq('[', $.constant_range_expression, ']')
  ),

  specify_output_terminal_descriptor: $ => seq(
    $.output_identifier, optseq('[', $.constant_range_expression, ']')
  ),

  input_identifier: $ => choice(
    $.input_port_identifier,
    $.inout_port_identifier,
    seq($.interface_identifier, '.', $.port_identifier) // FIXME glue dot?
  ),

  output_identifier: $ => choice(
    $.output_port_identifier,
    $.inout_port_identifier,
    seq($.interface_identifier, '.', $.port_identifier)
  ),

  /* A.7.4 Specify path delays */

  path_delay_value: $ => choice(
    $.list_of_path_delay_expressions,
    seq('(', $.list_of_path_delay_expressions, ')')
  ),

  list_of_path_delay_expressions: $ => sep1(',', $.path_delay_expression),

  // list_of_path_delay_expressions: $ => choice(
  //   $.t_path_delay_expression,
  //   seq($.trise_path_delay_expression, ',', $.tfall_path_delay_expression),
  //   seq(
  //     $.trise_path_delay_expression, ',', $.tfall_path_delay_expression, ',',
  //     $.tz_path_delay_expression
  //   ),
  //   seq(
  //     $.t01_path_delay_expression, ',', $.t10_path_delay_expression, ',',
  //     $.t0z_path_delay_expression, ',', $.tz1_path_delay_expression, ',',
  //     $.t1z_path_delay_expression, ',', $.tz0_path_delay_expression
  //   ),
  //   seq(
  //     $.t01_path_delay_expression, ',', $.t10_path_delay_expression, ',',
  //     $.t0z_path_delay_expression, ',', $.tz1_path_delay_expression, ',',
  //     $.t1z_path_delay_expression, ',', $.tz0_path_delay_expression, ',',
  //     $.t0x_path_delay_expression, ',', $.tx1_path_delay_expression, ',',
  //     $.t1x_path_delay_expression, ',', $.tx0_path_delay_expression, ',',
  //     $.txz_path_delay_expression, ',', $.tzx_path_delay_expression
  //   )
  // ),
  //
  // t_path_delay_expression: $ => alias($.path_delay_expression, $.t_path_delay_expression),
  // trise_path_delay_expression: $ => alias($.path_delay_expression, $.trise_path_delay_expression),
  // tfall_path_delay_expression: $ => alias($.path_delay_expression, $.tfall_path_delay_expression),
  // tz_path_delay_expression: $ => alias($.path_delay_expression, $.tz_path_delay_expression),
  // t01_path_delay_expression: $ => alias($.path_delay_expression, $.t01_path_delay_expression),
  // t10_path_delay_expression: $ => alias($.path_delay_expression, $.t10_path_delay_expression),
  // t0z_path_delay_expression: $ => alias($.path_delay_expression, $.t0z_path_delay_expression),
  // tz1_path_delay_expression: $ => alias($.path_delay_expression, $.tz1_path_delay_expression),
  // t1z_path_delay_expression: $ => alias($.path_delay_expression, $.t1z_path_delay_expression),
  // tz0_path_delay_expression: $ => alias($.path_delay_expression, $.tz0_path_delay_expression),
  // t0x_path_delay_expression: $ => alias($.path_delay_expression, $.t0x_path_delay_expression),
  // tx1_path_delay_expression: $ => alias($.path_delay_expression, $.tx1_path_delay_expression),
  // t1x_path_delay_expression: $ => alias($.path_delay_expression, $.t1x_path_delay_expression),
  // tx0_path_delay_expression: $ => alias($.path_delay_expression, $.tx0_path_delay_expression),
  // txz_path_delay_expression: $ => alias($.path_delay_expression, $.txz_path_delay_expression),
  // tzx_path_delay_expression: $ => alias($.path_delay_expression, $.tzx_path_delay_expression),

  path_delay_expression: $ => $.constant_mintypmax_expression,

  edge_sensitive_path_declaration: $ => seq(
    choice(
      $.parallel_edge_sensitive_path_description,
      $.full_edge_sensitive_path_description
    ),
    '=', $.path_delay_value
  ),

  parallel_edge_sensitive_path_description: $ => seq(
    '(',
    optional($.edge_identifier),
    $.specify_input_terminal_descriptor,
    optional($.polarity_operator),
    '=>',
    '(',
    $.specify_output_terminal_descriptor,
    optional($.polarity_operator),
    ':',
    $.data_source_expression,
    ')',
    ')'
  ),

  full_edge_sensitive_path_description: $ => seq(
    '(',
    optional($.edge_identifier),
    $.list_of_path_inputs,
    optional($.polarity_operator),
    '*>',
    '(',
    $.list_of_path_outputs,
    optional($.polarity_operator),
    ':',
    $.data_source_expression,
    ')',
    ')'
  ),

  data_source_expression: $ => $.expression,

  edge_identifier: $ => choice('posedge', 'negedge', 'edge'),

  state_dependent_path_declaration: $ => choice(
    seq('if', '(', $.module_path_expression, ')', $.simple_path_declaration),
    seq('if', '(', $.module_path_expression, ')', $.edge_sensitive_path_declaration),
    seq('ifnone', $.simple_path_declaration)
  ),

  polarity_operator: $ => choice('+', '-'),

  /* A.7.5 System timing checks */

  /* A.7.5.1 System timing check commands */

  system_timing_check: $ => choice(
    $.$setup_timing_check,
    $.$hold_timing_check,
    $.$setuphold_timing_check,
    $.$recovery_timing_check,
    $.$removal_timing_check,
    $.$recrem_timing_check,
    $.$skew_timing_check,
    $.$timeskew_timing_check,
    $.$fullskew_timing_check,
    $.$period_timing_check,
    $.$width_timing_check,
    $.$nochange_timing_check
  ),

  $setup_timing_check: $ => seq(
    '$setup', '(',
    $.data_event, ',', $.reference_event, ',', $.timing_check_limit,
    optseq(',', optional($.notifier)),
    ')', ';'
  ),

  $hold_timing_check: $ => seq(
    '$hold', '(',
    $.reference_event, ',', $.data_event, ',', $.timing_check_limit,
    optseq(',', optional($.notifier)),
    ')', ';'
  ),

  $setuphold_timing_check: $ => seq(
    '$setuphold', '(',
    $.reference_event, ',', $.data_event, ',', $.timing_check_limit, ',', $.timing_check_limit,
    optseq(
      ',',
      optional($.notifier),
      optseq(
        ',',
        optional($.timestamp_condition),
        optseq(
          ',',
          optional($.timecheck_condition),
          optseq(
            ',',
            optional($.delayed_reference),
            optseq(
              ',',
              optional($.delayed_data)
            )
          )
        )
      )
    ),
    ')', ';'
  ),

  $recovery_timing_check: $ => seq(
    '$recovery', '(',
    $.reference_event, ',', $.data_event, ',', $.timing_check_limit,
    optseq(',', optional($.notifier)),
    ')', ';'
  ),

  $removal_timing_check: $ => seq(
    '$removal', '(',
    $.reference_event, ',', $.data_event, ',', $.timing_check_limit,
    optseq(',', optional($.notifier)),
    ')', ';'
  ),

  $recrem_timing_check: $ => seq(
    '$recrem', '(',
    $.reference_event, ',', $.data_event, ',', $.timing_check_limit, ',', $.timing_check_limit,
    optseq(
      ',',
      optional($.notifier),
      optseq(',',
        optional($.timestamp_condition),
        optseq(',', optional($.timecheck_condition)),
        optseq(
          ',',
          optional($.delayed_reference),
          optseq(',', optional($.delayed_data))
        )
      )
    ),
    ')', ';'
  ),

  $skew_timing_check: $ => seq(
    '$skew', '(',
    $.reference_event, ',', $.data_event, ',', $.timing_check_limit,
    optseq(',', optional($.notifier)),
    ')', ';'
  ),

  $timeskew_timing_check: $ => seq(
    '$timeskew', '(',
    $.reference_event, ',', $.data_event, ',', $.timing_check_limit,
    optseq(',',
      optional($.notifier),
      optseq(',',
        optional($.event_based_flag),
        optseq(',', optional($.remain_active_flag))
      )
    ),
    ')', ';'
  ),

  $fullskew_timing_check: $ => seq(
    '$fullskew', '(',
    $.reference_event, ',', $.data_event, ',', $.timing_check_limit, ',', $.timing_check_limit,
    optseq(',',
      optional($.notifier),
      optseq(',',
        optional($.event_based_flag),
        optseq(',', optional($.remain_active_flag))
      )
    ),
    ')', ';'
  ),

  $period_timing_check: $ => seq(
    '$period', '(', $.controlled_reference_event, ',', $.timing_check_limit,
    optseq(',', optional($.notifier)),
    ')', ';'
  ),

  $width_timing_check: $ => seq(
    '$width', '(',
    $.controlled_reference_event, ',', $.timing_check_limit, ',', $.threshold,
    optseq(',', optional($.notifier)),
    ')', ';'
  ),

  $nochange_timing_check: $ => seq(
    '$nochange', '(',
    $.reference_event, ',', $.data_event, ',', $.start_edge_offset, ',', $.end_edge_offset,
    optseq(',', optional($.notifier)),
    ')', ';'
  ),

  // A.7.5.2 System timing check command arguments

  timecheck_condition: $ => $.mintypmax_expression,

  controlled_reference_event: $ => alias($.controlled_timing_check_event, $.controlled_reference_event),

  data_event: $ => $.timing_check_event,

  delayed_data: $ => seq(
    $.terminal_identifier, optional($.constant_mintypmax_expression)
  ),

  delayed_reference: $ => seq(
    $.terminal_identifier, optional($.constant_mintypmax_expression)
  ),

  end_edge_offset: $ => $.mintypmax_expression,

  event_based_flag: $ => $.constant_expression,

  notifier: $ => $.variable_identifier,

  reference_event: $ => $.timing_check_event,

  remain_active_flag: $ => $.constant_mintypmax_expression,

  timestamp_condition: $ => $.mintypmax_expression,

  start_edge_offset: $ => $.mintypmax_expression,

  threshold: $ => $.constant_expression,

  timing_check_limit: $ => $.expression,

  // A.7.5.3 System timing check event definitions

  timing_check_event: $ => seq(
    optional($.timing_check_event_control),
    $.specify_terminal_descriptor,
    optseq('&&&', $.timing_check_condition)
  ),

  controlled_timing_check_event: $ => seq(
    $.timing_check_event_control,
    $.specify_terminal_descriptor,
    optseq('&&&', $.timing_check_condition)
  ),

  timing_check_event_control: $ => choice(
    'posedge', 'negedge', 'edge', $.edge_control_specifier
  ),

  specify_terminal_descriptor: $ => choice(
    $.specify_input_terminal_descriptor,
    $.specify_output_terminal_descriptor
  ),

  edge_control_specifier: $ => seq(
    'edge', '[', sep1(',', $.edge_descriptor), ']'
  ),

  edge_descriptor: $ => choice(
    '01',
    '10',
    seq($.z_or_x, $.zero_or_one),
    seq($.zero_or_one, $.z_or_x)
  ),

  zero_or_one: $ => choice('0', '1'),

  z_or_x: $ => choice('x', 'X', 'z', 'Z'),

  timing_check_condition: $ => choice(
    $.scalar_timing_check_condition,
    seq('(', $.scalar_timing_check_condition, ')')
  ),

  scalar_timing_check_condition: $ => choice(
    $.expression,
    seq('~', $.expression),
    seq($.expression, '==', $.scalar_constant),
    seq($.expression, '===', $.scalar_constant),
    seq($.expression, '!=', $.scalar_constant),
    seq($.expression, '!==', $.scalar_constant)
  ),

  scalar_constant: $ => choice(
    '1\'b0',
    '1\'b1',
    '1\'B0',
    '1\'B1',
    '\'b0',
    '\'b1',
    '\'B0',
    '\'B1',
    '1',
    '0'
  ),

  // A.8 Expressions

  // A.8.1 Concatenations

  concatenation: $ => seq(
    '{', psep1(PREC.CONCAT, ',', $.expression), '}'
  ),

  constant_concatenation: $ => seq(
    '{', psep1(PREC.CONCAT, ',', $.constant_expression), '}'
  ),

  constant_multiple_concatenation: $ => prec.left(PREC.CONCAT, seq(
    '{', $.constant_expression, $.constant_concatenation, '}'
  )),

  module_path_concatenation: $ => seq(
    '{', psep1(PREC.CONCAT, ',', $.module_path_expression), '}'
  ),

  module_path_multiple_concatenation: $ => prec.left(PREC.CONCAT, seq(
    '{', $.constant_expression, $.module_path_concatenation, '}'
  )),

  multiple_concatenation: $ => prec.left(PREC.CONCAT, seq(
    '{', $.expression, $.concatenation, '}'
  )),

  // streaming_concatenation
  //  = { stream_operator [ slice_size ] stream_concatenation }
  // stream_operator = >> | <<
  // slice_size = simple_type | constant_expression
  // stream_concatenation = { stream_expression { , stream_expression } }
  // stream_expression = expression [ with [ array_range_expression ] ]
  // array_range_expression =
  // expression
  // | expression : expression
  // | expression +: expression
  // | expression -: expression
  empty_unpacked_array_concatenation: $ => seq('{', '}'),

  /* A.8.2 Subroutine calls */

  constant_function_call: $ => $.function_subroutine_call,

  tf_call: $ => prec.left(seq(
    $.hierarchical_tf_identifier, // FIXME
    // $.ps_or_hierarchical_tf_identifier,
    repeat($.attribute_instance),
    optional($.list_of_arguments_parent)
  )),

  system_tf_call: $ => prec.left(seq(
    $.system_tf_identifier,
    choice(
      optional($.list_of_arguments_parent),
      seq('(', $.data_type, optseq(',', $.expression), ')'),
      prec.left(seq(
        '(', $.expression,
        repseq(',', optional($.expression)),
        optseq(',', optional($.clocking_event)),
        ')'
      ))
    )
  )),

  subroutine_call: $ => choice(
    $.tf_call,
    $.system_tf_call,
    $.method_call,
    seq(optseq('std', '::'), $.randomize_call)
  ),

  function_subroutine_call: $ => $.subroutine_call,

  list_of_arguments: $ => choice(
    // seq(
    //   sep1(',', optional($.expression)),
    //   repseq(',', '.', $.identifier, '(', optional($.expression), ')')
    // ),
    sep1(',', seq('.', $.identifier, '(', optional($.expression), ')'))
  ),

  list_of_arguments_parent: $ => seq(
    '(',
    choice(
      sep1(',', $.expression),
      // sep1(',', optional($.expression)), // FIXME
      seq(
        repseq(',', '.', $.identifier, '(', optional($.expression), ')')
      ),
      sep1(',', repseq(',', '.', $.identifier, '(', optional($.expression), ')'))
    ),
    ')'
  ),

  method_call: $ => seq($.method_call_root, '.', $.method_call_body),

  method_call_body: $ => choice(
    prec.left(seq(
      $.method_identifier,
      repeat($.attribute_instance),
      optional($.list_of_arguments_parent)
    )),
    $.built_in_method_call
  ),

  built_in_method_call: $ => choice(
    $.array_manipulation_call,
    $.randomize_call
  ),

  array_manipulation_call: $ => prec.left(seq(
    $.array_method_name,
    repeat($.attribute_instance),
    optional($.list_of_arguments_parent),
    optseq('with', '(', $.expression, ')')
  )),

  randomize_call: $ => prec.left(seq(
    'randomize',
    repeat($.attribute_instance),
    optseq(
      '(',
      optional(choice(
        $.variable_identifier_list,
        'null'
      )),
      ')'
    ),
    optseq(
      'with',
      optseq(
        '(',
        optional($.identifier_list),
        ')'
      ),
      $.constraint_block
    )
  )),

  method_call_root: $ => choice($.primary, $.implicit_class_handle),

  array_method_name: $ => choice(
    $.method_identifier, 'unique', 'and', 'or', 'xor'
  ),

  // A.8.3 Expressions

  inc_or_dec_expression: $ => choice(
    seq($.inc_or_dec_operator, repeat($.attribute_instance), $.variable_lvalue),
    seq($.variable_lvalue, repeat($.attribute_instance), $.inc_or_dec_operator)
  ),

  conditional_expression: $ => prec.right(PREC.CONDITIONAL, seq(
    $.cond_predicate,
    '?',
    repeat($.attribute_instance), $.expression,
    ':',
    $.expression
  )),

  constant_expression: $ => choice(
    $.constant_primary,

    prec.left(PREC.UNARY, seq(
      $.unary_operator, repeat($.attribute_instance), $.constant_primary
    )),

    constExprOp($, PREC.ADD, choice('+', '-')),
    constExprOp($, PREC.MUL, choice('*', '/', '%')),
    constExprOp($, PREC.EQUAL, choice('==', '!=', '===', '!==', '==?', '!=?')),
    constExprOp($, PREC.LOGICAL_AND, '&&'),
    constExprOp($, PREC.LOGICAL_OR, '||'),
    constExprOp($, PREC.POW, '**'),
    constExprOp($, PREC.RELATIONAL, choice('<', '<=', '>', '>=')),
    constExprOp($, PREC.AND, '&'),
    constExprOp($, PREC.OR, '|'),
    constExprOp($, PREC.XOR, choice('^', '^~', '~^')),
    constExprOp($, PREC.SHIFT, choice('>>', '<<', '>>>', '<<<')),
    constExprOp($, PREC.IMPLICATION, choice('->', '<->')),

    prec.right(PREC.CONDITIONAL, seq(
      $.constant_expression,
      '?',
      repeat($.attribute_instance),
      ':',
      $.constant_expression
    ))
  ),

  constant_mintypmax_expression: $ => seq(
    $.constant_expression,
    optseq(':', $.constant_expression, ':', $.constant_expression)
  ),

  constant_param_expression: $ => choice(
    $.constant_mintypmax_expression,
    $.data_type,
    '$'
  ),

  param_expression: $ => choice(
    $.mintypmax_expression,
    $.data_type,
    '$'
  ),

  constant_range_expression: $ => choice(
    $.constant_expression,
    $.constant_part_select_range
  ),

  constant_part_select_range: $ => choice(
    $.constant_range,
    $.constant_indexed_range
  ),

  constant_range: $ => seq(
    $.constant_expression,
    ':',
    $.constant_expression
  ),

  constant_indexed_range: $ => seq(
    $.constant_expression, choice('+:', '-:'), $.constant_expression
  ),

  expression: $ => choice(
    $.primary,

    prec.left(PREC.UNARY, seq(
      $.unary_operator, repeat($.attribute_instance), $.primary
    )),
    prec.left(PREC.UNARY, $.inc_or_dec_expression),
    prec.left(PREC.PARENT, seq('(', $.operator_assignment, ')')),

    exprOp($, PREC.ADD, choice('+', '-')),
    exprOp($, PREC.MUL, choice('*', '/', '%')),
    exprOp($, PREC.EQUAL, choice('==', '!=', '===', '!==', '==?', '!=?')),
    exprOp($, PREC.LOGICAL_AND, '&&'),
    exprOp($, PREC.LOGICAL_OR, '||'),
    exprOp($, PREC.POW, '**'),
    exprOp($, PREC.RELATIONAL, choice('<', '<=', '>', '>=')),
    exprOp($, PREC.AND, '&'),
    exprOp($, PREC.OR, '|'),
    exprOp($, PREC.XOR, choice('^', '^~', '~^')),
    exprOp($, PREC.SHIFT, choice('>>', '<<', '>>>', '<<<')),
    exprOp($, PREC.IMPLICATION, choice('->', '<->')),

    $.conditional_expression,
    $.inside_expression,
    $.tagged_union_expression
  ),

  tagged_union_expression: $ => prec.left(seq(
    'tagged',
    $.member_identifier,
    optional($.expression)
  )),

  inside_expression: $ => prec.left(PREC.RELATIONAL, seq(
    $.expression, 'inside', '{', $.open_range_list, '}'
  )),

  value_range: $ => choice(
    $.expression,
    seq('[', $.expression, ':', $.expression, ']')
  ),

  mintypmax_expression: $ => seq(
    $.expression,
    optseq(':', $.expression, ':', $.expression)
  ),

  module_path_conditional_expression: $ => seq(
    $.module_path_expression,
    '?',
    repeat($.attribute_instance), $.module_path_expression,
    ':',
    $.module_path_expression
  ),

  module_path_expression: $ => choice(
    $.module_path_primary
    // seq($.unary_module_path_operator, repeat($.attribute_instance), $.module_path_primary),
    // seq(
    //   $.module_path_expression,
    //   $.binary_module_path_operator,
    //   repeat($.attribute_instance),
    //   $.module_path_expression
    // ),
    // $.module_path_conditional_expression
  ),

  module_path_mintypmax_expression: $ => seq(
    $.module_path_expression,
    optseq(
      ':', $.module_path_expression,
      ':', $.module_path_expression
    )
  ),

  part_select_range: $ => choice(
    $.constant_range,
    $.indexed_range
  ),

  indexed_range: $ => seq(
    $.expression, choice('+:', '-:'), $.constant_expression
  ),

  genvar_expression: $ => $.constant_expression,

  /* A.8.4 Primaries */



  // FIXME FIXME FIXME

  constant_primary: $ => choice(
    $.primary_literal,
    prec.left(10, seq(
      $.ps_parameter_identifier,
      optional($.constant_select1)
    )),
    seq(
      $.specparam_identifier,
      optseq('[', $.constant_range_expression, ']')
    ),
    $.genvar_identifier,
    seq(
      $.formal_port_identifier,
      optional($.constant_select1)
    ),
    seq(
      optional(choice($.package_scope, $.class_scope)),
      $.enum_identifier
    ),
    seq(
      $.constant_concatenation,
      optseq('[', $.constant_range_expression, ']')
    ),
    seq(
      $.constant_multiple_concatenation,
      optseq('[', $.constant_range_expression, ']')
    ),
    $.constant_function_call,
    $.constant_let_expression,
    seq('(', $.constant_mintypmax_expression, ')'),
    $.constant_cast,
    // $.constant_assignment_pattern_expression,
    $.type_reference,
    'null'
  ),

  module_path_primary: $ => choice(
    $.number,
    $.identifier,
    $.module_path_concatenation,
    $.module_path_multiple_concatenation,
    $.function_subroutine_call,
    seq('(', $.module_path_mintypmax_expression, ')')
  ),

  primary: $ => choice(
    $.primary_literal,
    prec.left(100, seq(
      optional(choice($.class_qualifier, $.package_scope)),
      $.hierarchical_identifier,
      optional($.select1)
    )),
    $.empty_unpacked_array_concatenation,
    seq($.concatenation, optseq('[', $.range_expression, ']')),
    seq($.multiple_concatenation, optseq('[', $.range_expression, ']')),
    $.function_subroutine_call,
    $.let_expression,
    seq('(', $.mintypmax_expression, ')'),
    $.cast,
    $.assignment_pattern_expression,
    // $.streaming_concatenation,
    $.sequence_method_call,
    'this',
    '$',
    'null'
  ),

  class_qualifier: $ => seq(
    optseq('local', '::'),
    choice( // TODO optional?
      seq($.implicit_class_handle, '.'),
      $.class_scope
    )
  ),


  range_expression: $ => choice(
    $.expression,
    $.part_select_range
  ),
  //

  primary_literal: $ => choice(
    $.number,
    $.time_literal,
    $.unbased_unsized_literal,
    $.string_literal,
    $.simple_text_macro_usage
  ),


  time_literal: $ => choice(
    seq($.unsigned_number, $.time_unit),
    seq($.fixed_point_number, $.time_unit)
  ),

  time_unit: $ => choice('s', 'ms', 'us', 'ns', 'ps', 'fs'),

  string_literal: $ => seq('"', /[\x09\x20\x21\x23-\xFE]*/, '"'),

  implicit_class_handle: $ => choice(
    prec.left(seq('this', optseq('.', 'super'))),
    'super'
  ),

  // select1: $ => choice( // reordered -> non empty
  //   seq(
  //     repseq('.', $.member_identifier, optional($.bit_select1)),
  //     '.', $.member_identifier,
  //     optional($.bit_select1),
  //     optseq('[', $.part_select_range, ']')
  //   ),
  //   seq(
  //     $.bit_select1,
  //     optseq('[', $.part_select_range, ']')
  //   ),
  //   seq('[', $.part_select_range, ']')
  // ),

  // bit_select1: $ => repeat1(seq( // reordered -> non empty
  //   '[', $.expression, ']')
  // ),

  select1: $ => choice( // reordered -> non empty
    seq(
      '[',
      repseq($.expression, ']', '['),
      choice(
        $.expression,
        $.part_select_range
      ),
      ']'
    )
  ),

  // nonrange_select1: $ => choice( // reordered -> non empty
  //   seq(
  //     seq(
  //       repseq('.', $.member_identifier, optional($.bit_select1)),
  //       '.', $.member_identifier
  //     ),
  //     optional($.bit_select1)
  //   ),
  //   $.bit_select1
  // ),

  constant_bit_select1: $ => repeat1(seq( // reordered -> non empty
    '[', $.constant_expression, ']'
  )),

  constant_select1: $ => choice( // reordered -> non empty
    seq(
      '[',
      repseq($.constant_expression, ']', '['),
      choice($.constant_expression, $.constant_part_select_range),
      ']'
    )
  ),

  // constant_select1: $ => choice( // reordered -> non empty
  //   // seq(
  //   //   repseq('.', $.member_identifier, optional($.constant_bit_select1))),
  //   //   '.', $.member_identifier,
  //   //   optional($.constant_bit_select1),
  //   //   optseq('[', $.constant_part_select_range, ']')
  //   // ),
  //   seq(
  //     $.constant_bit_select1,
  //     optseq('[', $.constant_part_select_range, ']')
  //   ),
  //   seq('[', $.constant_part_select_range, ']'),
  // ),

  constant_cast: $ => seq($.casting_type, '\'', '(', $.constant_expression, ')'),

  constant_let_expression: $ => $.let_expression,

  cast: $ => seq($.casting_type, '\'', '(', $.expression, ')'),

  // A.8.5 Expression left-side values

  net_lvalue: $ => choice(
    seq(
      $.ps_or_hierarchical_net_identifier,
      optional($.constant_select1)
    ),
    seq('{', sep1(',', $.net_lvalue), '}'),
    seq(
      optional($.assignment_pattern_expression_type),
      $.assignment_pattern_net_lvalue
    )
  ),

  variable_lvalue: $ => choice(
    seq(
      optional(choice(
        seq($.implicit_class_handle, '.'),
        $.package_scope
      )),
      $.hierarchical_variable_identifier,
      optional($.select1)
    ),
    seq('{', sep1(',', $.variable_lvalue), '}'),
    seq(
      optional($.assignment_pattern_expression_type),
      $.assignment_pattern_variable_lvalue
    )
    // $.streaming_concatenation
  ),

  // nonrange_variable_lvalue
  //   = ( implicit_class_handle __ '.' / package_scope )? __
  //     hierarchical_variable_identifier __ nonrange_select

  // A.8.6 Operators

  unary_operator: $ => choice(
    '+', '-', '!', '~', '&', '~&', '|', '~|', '^', '~^', '^~'
  ),

  inc_or_dec_operator: $ => choice('++', '--'),

  // unary_module_path_operator = '~&' /
  //   '~|' /
  //   '~^' /
  //   '^~' /
  //   $('!'![ != ]) /
  //   $('~'!'=') /
  //   $('&'!'=') /
  //   $('|'!'=') /
  //   $('^'!'=')
  //
  // binary_module_path_operator = $('=='!'=') /
  //   $('!='!'=') /
  //   '&&' /
  //   '||' /
  //   $('&'!'=') /
  //   $('|'!'=') /
  //   $('^'!'=') /
  //   '^~' /
  //   '~^'

  /* A.8.7 Numbers */

  number: $ => choice($.integral_number, $.real_number),

  // integral_number: $ => token(/\d+/),

  integral_number: $ => choice(
    $.decimal_number,
    $.octal_number,
    $.binary_number,
    $.hex_number
  ),

  // decimal_number: $ => choice(
  //   $.unsigned_number,
  //   seq(optional($.size), $.decimal_base, $.unsigned_number),
  //   seq(optional($.size), $.decimal_base, $.x_digit, repeat('_')),
  //   seq(optional($.size), $.decimal_base, $.z_digit, repeat('_')),
  // ),

  // binary_number: $ => seq(optional($.size), $.binary_base, $.binary_value),
  //
  // octal_number: $ => seq(optional($.size), $.octal_base, $.octal_value),
  //
  // hex_number: $ => seq(optional($.size), $.hex_base, $.hex_value),

  decimal_number: $ => choice(
    $.unsigned_number,
    token(/[0-9]*'[sS]?[dD][0-9_]+/)
  ),

  binary_number: $ => token(/[0-9]*'[sS]?[bB][01_xXzZ?]+/),

  octal_number: $ => token(/[0-9]*'[sS]?[oO][0-7_xXzZ?]+/),

  hex_number: $ => token(/[0-9]*'[sS]?[hH][0-9a-fA-f_xXzZ?]+/),

  sign: $ => choice('+', '-'),

  // size: $ => $.non_zero_unsigned_number,

  non_zero_unsigned_number: $ => seq(
    $.non_zero_decimal_digit, repeat(choice('_', $.decimal_digit))
  ),

  real_number: $ => choice(
    $.fixed_point_number,
    seq(
      $.unsigned_number,
      optseq('.', $.unsigned_number),
      $.exp,
      optional($.sign),
      $.unsigned_number
    )
  ),

  // FIXME spec no space between dot and digits?
  fixed_point_number: $ => seq($.unsigned_number, '.', $.unsigned_number),

  exp: $ => choice('e', 'E'),

  unsigned_number: $ => token(/[0-9]+/), // prec.left(seq($.decimal_digit, repeat(choice('_', $.decimal_digit)))),

  // binary_value: $ => prec.left(seq($.binary_digit, repeat(choice('_', $.binary_digit)))),

  // octal_value: $ => prec.left(seq($.octal_digit, repeat(choice('_', $.octal_digit)))),

  // hex_value: $ => prec.left(seq($.hex_digit, repeat(choice('_', $.hex_digit)))),

  // decimal_base: $ => seq('\'', optional(choice('s', 'S')), choice('d', 'D')),

  // binary_base: $ => seq('\'', optional(choice('s', 'S')), choice('b', 'B')),

  // octal_base: $ => seq('\'', optional(choice('s', 'S')), choice('o', 'O')),

  // hex_base: $ => seq('\'', optional(choice('s', 'S')), choice('h', 'H')),

  non_zero_decimal_digit: $ => /[1-9]/,

  decimal_digit: $ => /[0-9]/,

  // binary_digit: $ => choice($.x_digit, $.z_digit, '0', '1'),

  // octal_digit: $ => choice($.x_digit, $.z_digit, /[0-7]/),

  // hex_digit: $ => choice($.x_digit, $.z_digit, /[0-9a-fA-F]/),

  // x_digit: $ => /[xX]/,

  // z_digit: $ => choice('z', 'Z', '?'),

  unbased_unsized_literal: $ => choice('\'0', '\'1', seq('\'', $.z_or_x)),

  /* A.9 General */

  /* A.9.1 Attributes */

  attribute_instance: $ => seq('(*', sep1(',', $.attr_spec), '*)'),

  attr_spec: $ => seq($.attr_name, optseq('=', $.constant_expression)),

  attr_name: $ => $.identifier,

  /* A.9.2 Comments */

  // comment: $ => one_line_comment | block_comment
  // one_line_comment: $ => // comment_text \n
  // block_comment: $ => /* comment_text */
  // comment_text: $ => { Any_ASCII_character }

  // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
  // from: https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js
  comment: $ => token(choice(
    seq('//', /.*/),
    seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )
  )),

  /* A.9.3 Identifiers */

  block_identifier: $ => alias($.identifier, $.block_identifier),
  array_identifier: $ => alias($.identifier, $.array_identifier),
  bin_identifier: $ => alias($.identifier, $.bin_identifier),
  c_identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
  cell_identifier: $ => alias($.identifier, $.cell_identifier),
  checker_identifier: $ => alias($.identifier, $.checker_identifier),
  class_identifier: $ => alias($.identifier, $.class_identifier),
  class_variable_identifier: $ => $.variable_identifier,
  clocking_identifier: $ => alias($.identifier, $.clocking_identifier),
  config_identifier: $ => alias($.identifier, $.config_identifier),
  const_identifier: $ => alias($.identifier, $.const_identifier),
  constraint_identifier: $ => alias($.identifier, $.constraint_identifier),

  covergroup_identifier: $ => alias($.identifier, $.covergroup_identifier),

  // covergroup_variable_identifier = variable_identifier
  cover_point_identifier: $ => alias($.identifier, $.cover_point_identifier),
  cross_identifier: $ => alias($.identifier, $.cross_identifier),
  dynamic_array_variable_identifier: $ => alias($.variable_identifier, $.dynamic_array_variable_identifier),
  enum_identifier: $ => alias($.identifier, $.enum_identifier),
  escaped_identifier: $ => seq('\\', /.*/),
  formal_identifier: $ => alias($.identifier, $.formal_identifier),
  formal_port_identifier: $ => alias($.identifier, $.formal_port_identifier),
  function_identifier: $ => alias($.identifier, $.function_identifier),
  generate_block_identifier: $ => alias($.identifier, $.generate_block_identifier),
  genvar_identifier: $ => alias($.identifier, $.genvar_identifier),
  hierarchical_array_identifier: $ => $.hierarchical_identifier,
  hierarchical_block_identifier: $ => $.hierarchical_identifier,
  hierarchical_event_identifier: $ => $.hierarchical_identifier,

  hierarchical_identifier: $ => prec.left(seq(
    optseq('$root', '.'),
    repseq($.identifier, optional($.constant_bit_select1), '.'),
    $.identifier
  )),

  hierarchical_net_identifier: $ => $.hierarchical_identifier,
  hierarchical_parameter_identifier: $ => $.hierarchical_identifier,
  hierarchical_property_identifier: $ => $.hierarchical_identifier,
  hierarchical_sequence_identifier: $ => $.hierarchical_identifier,
  hierarchical_task_identifier: $ => $.hierarchical_identifier,
  hierarchical_tf_identifier: $ => $.hierarchical_identifier,
  hierarchical_variable_identifier: $ => $.hierarchical_identifier,

  identifier: $ => choice(
    $.simple_identifier,
    $.escaped_identifier
  ),

  index_variable_identifier: $ => alias($.identifier, $.index_variable_identifier),
  interface_identifier: $ => alias($.identifier, $.interface_identifier),
  interface_instance_identifier: $ => alias($.identifier, $.interface_instance_identifier),
  inout_port_identifier: $ => alias($.identifier, $.inout_port_identifier),
  input_port_identifier: $ => alias($.identifier, $.input_port_identifier),
  instance_identifier: $ => alias($.identifier, $.instance_identifier),
  library_identifier: $ => alias($.identifier, $.library_identifier),
  member_identifier: $ => alias($.identifier, $.member_identifier),
  method_identifier: $ => alias($.identifier, $.method_identifier),
  modport_identifier: $ => alias($.identifier, $.modport_identifier),
  module_identifier: $ => alias($.identifier, $.module_identifier),
  net_identifier: $ => alias($.identifier, $.net_identifier),
  net_type_identifier: $ => alias($.identifier, $.net_type_identifier),
  output_port_identifier: $ => alias($.identifier, $.output_port_identifier),
  package_identifier: $ => alias($.identifier, $.package_identifier),

  package_scope: $ => choice(
    seq($.package_identifier, '::'),
    seq('$unit', '::')
  ),

  parameter_identifier: $ => alias($.identifier, $.parameter_identifier),
  port_identifier: $ => alias($.identifier, $.port_identifier),
  production_identifier: $ => alias($.identifier, $.production_identifier),
  program_identifier: $ => alias($.identifier, $.program_identifier),
  property_identifier: $ => alias($.identifier, $.property_identifier),

  ps_class_identifier: $ => seq(
    optional($.package_scope), $.class_identifier
  ),

  ps_covergroup_identifier: $ => seq(
    optional($.package_scope), $.covergroup_identifier
  ),

  ps_checker_identifier: $ => seq(
    optional($.package_scope), $.checker_identifier
  ),

  ps_identifier: $ => seq(
    optional($.package_scope), $.identifier
  ),

  ps_or_hierarchical_array_identifier: $ => seq(
    optional(choice(
      seq($.implicit_class_handle, '.'),
      $.class_scope,
      $.package_scope
    )),
    $.hierarchical_array_identifier
  ),

  ps_or_hierarchical_net_identifier: $ => choice(
    // seq(optional($.package_scope), $.net_identifier),
    $.hierarchical_net_identifier
  ),

  ps_or_hierarchical_property_identifier: $ => choice(
    seq(optional($.package_scope), $.property_identifier),
    $.hierarchical_property_identifier
  ),

  ps_or_hierarchical_sequence_identifier: $ => choice(
    seq(optional($.package_scope), $.sequence_identifier),
    $.hierarchical_sequence_identifier
  ),

  ps_or_hierarchical_tf_identifier: $ => choice(
    seq(optional($.package_scope), $.tf_identifier),
    $.hierarchical_tf_identifier
  ),

  ps_parameter_identifier: $ => choice(
    seq(
      optional(choice(
        $.package_scope,
        $.class_scope
      )),
      $.parameter_identifier
    ),
    seq(
      repseq(
        $.generate_block_identifier,
        optseq('[', $.constant_expression, ']'),
        '.'
      ),
      $.parameter_identifier
    )
  ),

  ps_type_identifier: $ => seq(
    optional(choice(
      seq('local', '::'),
      $.package_scope,
      $.class_scope
    )),
    $.type_identifier
  ),

  sequence_identifier: $ => $.identifier,

  // signal_identifier = identifier

  simple_identifier: $ => /[a-zA-Z_][a-zA-Z0-9_$]*/,

  specparam_identifier: $ => alias($.identifier, $.specparam_identifier),

  system_tf_identifier: $ => seq('$', /[a-zA-Z0-9_$]+/),

  task_identifier: $ => alias($.identifier, $.task_identifier),
  tf_identifier: $ => alias($.identifier, $.tf_identifier),
  terminal_identifier: $ => alias($.identifier, $.terminal_identifier),
  topmodule_identifier: $ => alias($.identifier, $.topmodule_identifier),
  type_identifier: $ => alias($.identifier, $.type_identifier),
  udp_identifier: $ => alias($.identifier, $.udp_identifier),
  variable_identifier: $ => alias($.identifier, $.variable_identifier)

  /* A.9.4 White space */

  // white_space: $ => space | tab | newline | eof};

};

module.exports = grammar({
  name: 'verilog',
  word: $ => $.simple_identifier,
  rules: rules,
  extras: $ => [/\s/, $.comment],
  inline: $ => [
    $.hierarchical_identifier,
    $.hierarchical_net_identifier,
    $.hierarchical_variable_identifier,
    $.hierarchical_tf_identifier,
    $.hierarchical_sequence_identifier,
    $.hierarchical_property_identifier,
    $.hierarchical_block_identifier,
    $.hierarchical_task_identifier,

    $.ps_or_hierarchical_net_identifier,
    $.ps_or_hierarchical_tf_identifier,
    $.ps_or_hierarchical_sequence_identifier,
    $.ps_or_hierarchical_property_identifier,

    $.ps_class_identifier,
    $.ps_covergroup_identifier,
    $.ps_parameter_identifier,
    $.ps_type_identifier,
    $.ps_checker_identifier,

    $.parameter_identifier,
    $.class_identifier,
    $.covergroup_identifier,
    $.enum_identifier,
    $.formal_port_identifier,
    $.genvar_identifier,
    $.specparam_identifier,
    $.tf_identifier,
    $.type_identifier,
    $.net_type_identifier,
    $.variable_identifier,
    $.package_identifier,
    $.dynamic_array_variable_identifier,
    $.class_variable_identifier,
    $.interface_instance_identifier,
    $.interface_identifier,
    $.module_identifier,
    $.let_identifier,
    $.sequence_identifier,
    $.net_identifier,
    $.program_identifier,
    $.checker_identifier,
    $.member_identifier,
    $.port_identifier,
    $.block_identifier,
    $.instance_identifier,
    $.property_identifier,
    // $.input_port_identifier,
    // $.output_port_identifier,
    // $.inout_port_identifier,
    // $.input_identifier,
    // $.output_identifier,
    $.cover_point_identifier,
    $.cross_identifier
  ],
  conflicts: $ => [
    [$.module_instantiation, $.interface_instantiation, $.program_instantiation],

    [$.net_lvalue, $.variable_lvalue],
    [$.primary, $.implicit_class_handle],
    [$.primary, $.constant_function_call],
    [$.primary, $.param_expression],
    [$.primary, $.constant_primary],
    [$.primary, $.constant_let_expression],

    [$._module_common_item, $.checker_or_generate_item],
    [$._module_common_item, $.checker_generate_item],
    [$.dpi_function_import_property, $.dpi_task_import_property],
    // [$.class_method, $.constraint_prototype_qualifier],
    [$._package_or_generate_item_declaration, $.checker_or_generate_item_declaration],
    [$.module_or_generate_item, $.interface_or_generate_item],
    // [$.class_method, $.method_qualifier],
    [$.unsigned_number, $.integral_number],
    [$.method_call_body, $.array_method_name],
    [$.class_qualifier, $.method_call_root],
    [$.structure_pattern_key, $.array_pattern_key],
    [$.pattern, $.structure_pattern_key],
    [$.constraint_set, $.empty_unpacked_array_concatenation],
    [$.interface_declaration, $.non_port_interface_item],
    [$.program_declaration, $.non_port_program_item],
    [$.list_of_ports, $.list_of_port_declarations],
    [$.mintypmax_expression, $.expression_or_dist],
    [$.class_constructor_declaration, $.implicit_class_handle],
    [$.statement_or_null, $.action_block],
    [$.sequence_actual_arg, $.event_expression],
    [$.expression_or_dist,                   $.event_expression],
    [$.expression_or_dist, $.let_actual_arg, $.event_expression],
    [$.expression_or_dist, $.let_actual_arg],

    [$.port_reference, $.ansi_port_declaration],
    [$.net_port_header1, $.variable_port_header],
    [$.ansi_port_declaration, $._variable_dimension],
    [$.unpacked_dimension, $.constant_part_select_range],
    [$.unpacked_dimension, $.constant_select1],
    [$.port, $.ansi_port_declaration],
    [$.module_ansi_header, $.module_declaration],

    [$.module_declaration, $._non_port_module_item],
    [$._module_or_generate_item_declaration, $.checker_or_generate_item_declaration],
    [$.expression_or_cond_pattern, $.tagged_union_expression],
    [$.pattern, $.tagged_union_expression],
    [$.covergroup_expression, $.cond_pattern],
    [$.mintypmax_expression, $.covergroup_expression],
    [$.concatenation, $.covergroup_expression],
    [$.decimal_number, $.real_number, $.fixed_point_number],
    [$.delay3, $.delay_control],
    [$.property_spec, $.property_expr],
    [$.property_expr, $.sequence_expr],

    [$.variable_lvalue, $.method_call_root, $.class_qualifier],
    [$.variable_lvalue, $.class_qualifier],

    [$.class_method, $.constraint_prototype_qualifier],
    [$.class_method, $.method_qualifier],
    [$.data_type, $.class_type, $.checker_instantiation, $.statement],

    [$.bind_target_scope, $.bind_target_instance],
    [$.class_type, $.package_scope],
    [$.variable_decl_assignment, $.packed_dimension, $._variable_dimension],
    [$.variable_decl_assignment, $._variable_dimension],

    [$.net_declaration, $.data_type, $.class_type],
    [$.net_declaration, $.data_type, $.interface_port_declaration, $.class_type, $.interface_instantiation, $.program_instantiation],
    [$.net_declaration, $.data_type, $.interface_port_declaration, $.class_type, $.checker_instantiation],
    [$.net_declaration, $.data_type, $.class_type, $.checker_instantiation],
    [$.net_declaration, $.data_type, $.class_type, $.interface_instantiation, $.program_instantiation],
    [$.net_declaration, $.data_type, $.class_type, $.module_instantiation, $.interface_instantiation, $.program_instantiation],
    [$.net_declaration, $.data_type, $.class_type, $.module_instantiation, $.interface_port_declaration, $.interface_instantiation, $.program_instantiation],
    [$.data_type, $.class_type],
    [$.net_type_declaration, $.data_type, $.class_type],
    [$.net_type_declaration, $.data_type],
    [$.net_port_type1, $.data_type, $.class_type],

    [$.constant_primary, $.data_type],
    [$.constant_primary, $.simple_type],
    [$.constant_primary, $.simple_type, $.data_type, $.assignment_pattern_expression_type, $.class_qualifier],
    [$.constant_primary, $.simple_type, $.let_expression, $.tf_call],
    [$.constant_primary, $.simple_type, $.assignment_pattern_expression_type, $.class_qualifier],
    [$.constant_primary, $.let_expression, $.tf_call],
    [$.constant_primary, $.simple_type, $.let_expression, $.structure_pattern_key, $.tf_call],
    [$.statement, $.assignment_pattern_expression_type],
    [$.data_type_or_implicit1, $._var_data_type],
    [$.list_of_port_identifiers, $.list_of_variable_identifiers],
    [$.list_of_port_identifiers, $.list_of_variable_port_identifiers],
    [$.program_instantiation, $.interface_instantiation],
    [$.list_of_interface_identifiers, $.net_decl_assignment],
    [$.data_type, $.class_type, $.checker_instantiation],
    [$.data_type, $.class_type, $.tf_port_item1],
    [$.net_port_type1, $.interface_port_header, $.data_type, $.class_type],
    [$.name_of_instance, $.sequence_instance, $.let_expression],
    [$.list_of_port_identifiers, $._variable_dimension],
    [$.unpacked_dimension, $.packed_dimension],
    [$.delay_control, $.param_expression],


    [$.sequence_instance, $.let_expression],
    [$.variable_lvalue, $.assignment_pattern_expression_type],
    [$.unpacked_dimension, $.packed_dimension, $.constant_part_select_range],
    [$.property_instance, $.sequence_instance, $.let_expression],
    [$.hierarchical_instance, $.checker_instantiation],
    [$.named_port_connection, $.checker_instantiation],
    [$.ordered_port_connection, $.expression_or_dist],
    [$.primary, $.queue_dimension],

    [$.packed_dimension, $._variable_dimension],
    [$.constant_range_expression, $.constant_select1],
    [$.constant_range_expression, $.constant_bit_select1, $.constant_select1],
    [$.packed_dimension, $.constant_part_select_range, $.part_select_range],
    [$.constant_part_select_range, $.part_select_range],
    [$.constant_part_select_range, $.packed_dimension],
    [$.constant_bit_select1, $.constant_select1],
    [$.constant_range_expression, $.unpacked_dimension, $.constant_bit_select1, $.constant_select1],
    [$.unpacked_dimension, $.packed_dimension, $.constant_part_select_range, $.part_select_range],
    [$.unpacked_dimension, $.constant_part_select_range, $.part_select_range],
    [$.constant_bit_select1, $.constant_select1, $.unpacked_dimension],
    [$.packed_dimension, $.part_select_range],

    [$.property_instance, $.sequence_instance],
    [$.simple_type, $.structure_pattern_key],

    [$.sequence_list_of_arguments, $.let_list_of_arguments],
    [$.named_port_connection, $.expression_or_dist],

    [$.output_port_identifier, $.inout_port_identifier],
    [$.input_port_identifier, $.inout_port_identifier],
    [$.input_port_identifier, $.output_port_identifier, $.inout_port_identifier],

    [$.input_identifier, $.output_identifier],

    [$.primary_literal, $.module_path_primary],
    [$.primary, $.module_path_primary, $.constant_function_call],
    [$.module_path_primary, $.constant_function_call],

    [$.constant_primary, $.path_delay_expression],
    [$.unary_operator, $.scalar_timing_check_condition],
    [$.mintypmax_expression, $.scalar_timing_check_condition],

    [$.sequence_instance, $.let_expression, $.terminal_identifier],
    [$.assignment_pattern_expression_type, $.terminal_identifier],

    [$.delayed_data, $.delayed_reference],
    [$.system_tf_call, $.list_of_arguments_parent],
    [$.class_item_qualifier, $.lifetime],
    [$.property_qualifier, $.method_qualifier],
    [$.class_property, $.data_type_or_implicit1],

    [$.list_of_arguments_parent, $.mintypmax_expression],

    [$.terminal_identifier, $.list_of_arguments_parent, $.sequence_instance, $.let_expression, $.tf_call],
    [$.terminal_identifier, $.sequence_instance, $.let_expression, $.tf_call],
    [$.terminal_identifier, $.list_of_arguments_parent, $.sequence_instance, $.let_expression],
    [$.list_of_arguments_parent, $.sequence_instance, $.let_expression],
    [$.list_of_arguments_parent, $.sequence_instance],
    [$.list_of_arguments_parent, $.let_expression],
    [$.variable_decl_assignment, $.tf_call],
    [$.module_path_primary, $.tf_call],

    [$.constant_expression, $.expression]

  ]
});

/* eslint camelcase: 0 */
/* eslint no-undef: 0 */
/* eslint no-unused-vars: 0 */
