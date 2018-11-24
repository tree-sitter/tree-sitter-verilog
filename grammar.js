function commaSep(rule) {
  return optional(sep1(',', rule))
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function sep1(separator, rule) {
  return prec.left(seq(
    rule,
    repeat(prec.left(seq(separator, rule)))
  ))
}

/*
    Verilog parser grammar based on IEEE Std 1800-2012.
*/

const rules = {
  source_file: $ => repeat($._description),

  /* A.1.2 SystemVerilog source text */

  _description: $ => choice(
    $.module_declaration
    // $.udp_declaration,
    // $.interface_declaration,
    // $.program_declaration,
    // $.package_declaration,
    // seq(repeat($.attribute_instance), $.package_item),
    // seq(repeat($.attribute_instance), $.bind_directive),
    // $.config_declaration,
  ),

  // module_nonansi_header ::=
  //   { attribute_instance } module_keyword [ lifetime ] module_identifier
  //     { package_import_declaration } [ parameter_port_list ] list_of_ports ';'
  //
  // module_ansi_header ::=
  //   { attribute_instance } module_keyword [ lifetime ] module_identifier
  //     { package_import_declaration } [ parameter_port_list ] [ list_of_port_declarations ] ';'
  //
  // module_declaration ::=
  //   module_nonansi_header [ timeunits_declaration ] { module_item }
  //     'endmodule' [ ':' module_identifier ]
  // | module_ansi_header [ timeunits_declaration ] { non_port_module_item }
  //     'endmodule' [ ':' module_identifier ]
  // | { attribute_instance } module_keyword [ lifetime ] module_identifier '(' '.*' ')' ';'
  //   [ timeunits_declaration ] { module_item } 'endmodule' [ ':' module_identifier ]
  // | 'extern' module_nonansi_header
  // | 'extern' module_ansi_header

  module_nonansi_header: $ => seq(
    // repeat($.attribute_instance),
    // $.module_keyword,
    // optional($.lifetime),
    // $.identifier, // module_identifier

    // package_import_declaration*
    // optional($.parameter_port_list),
    $.list_of_ports,
    ';'
  ),

  module_ansi_header: $ => seq(
    // repeat($.attribute_instance),
    // $.module_keyword,
    // optional($.lifetime),
    // $.identifier, // module_identifier

    //    package_import_declaration*

    // A.10 Footnotes (normative)
    // 1) A package_import_declaration in a module_ansi_header,
    //    interface_ansi_header, or program_ansi_header shall be followed
    //    by a parameter_port_list or list_of_port_declarations, or both.
    choice(
      seq(
        $.parameter_port_list,
        $.list_of_port_declarations
      ),
      $.list_of_port_declarations1,
    ),
    ';'
  ),

  module_header: $ => seq(
    repeat($.attribute_instance),
    $.module_keyword,
    optional($.lifetime),
    $.module_identifier,
    // optional($.parameter_port_list)
  ),

  module_declaration: $ => choice(
    seq(
      $.module_header,
      choice(
        // seq(
        //   '(', ')', ';',
        //   // timeunits_declaration?
        //   repeat($._module_item),
        // ),
        seq(
          '(', '.*', ')', ';',
          // timeunits_declaration?
          // repeat($._module_item),
        ),
        seq(
          $.module_nonansi_header,
          repeat($._module_item),
        ),
        seq(
          $.module_ansi_header,
          // timeunits_declaration?
          repeat($._non_port_module_item),
        ),
      ),
      'endmodule', optional(seq(':', $.module_identifier))
    ),
    seq('extern', $.module_header, choice(
      $.module_nonansi_header,
      $.module_ansi_header
    )),
  ),

  module_keyword: $ => choice('module', 'macromodule'),

  /* A.1.3 Module parameters and ports */

  parameter_port_list: $ => seq(
    '#', '(',
    optional(choice(
      seq($.list_of_param_assignments, repeat(seq(',', $.parameter_port_declaration))),
      sep1(',', $.parameter_port_declaration)
    )),
    ')'
  ),

  parameter_port_declaration: $ => choice(
    $.any_parameter_declaration,
    seq($.data_type, $.list_of_param_assignments),
    seq('type', $.list_of_type_assignments)
  ),

  list_of_ports: $ => seq('(', optional(sep1(',', $.port)), ')'),

  list_of_port_declarations: $ => seq(
    '(',
    optional(seq(
      repeat($.attribute_instance),
      $.ansi_port_declaration
    )),
    repeat(seq(
      ',',
      repeat($.attribute_instance),
      $.ansi_port_declaration
    )),
    ')'
  ),

  list_of_port_declarations1: $ => seq(
    '(',
    seq(
      repeat($.attribute_instance),
      $.ansi_port_declaration
    ),
    repeat(seq(
      ',',
      repeat($.attribute_instance),
      $.ansi_port_declaration
    )),
    ')'
  ),

  port_declaration: $ => seq(
    repeat($.attribute_instance),
    choice(
      $.inout_declaration,
      $.input_declaration,
      $.output_declaration,
      $.ref_declaration,
      // $.interface_port_declaration,
    )
  ),

  port: $ => choice(
    $._port_expression,
    seq('.', $.port_identifier, '(', optional($._port_expression), ')')
  ),

  _port_expression: $ => choice(
    $.port_reference,
    // seq('{', sep1(',', $.port_reference), '}')
  ),

  port_reference: $ => seq(
    $.port_identifier,
    optional($.constant_select1)
  ),

  port_direction: $ => choice(
    'input',
    'output',
    'inout',
    'ref'
  ),

  net_port_header: $ => seq(
    $.port_direction,
    optional($.net_port_type)
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
    optional(seq('.', $.modport_identifier))
  ),

  ansi_port_declaration: $ => choice(
    seq(
      // optional(choice($.net_port_header, $.interface_port_header)),
      $.net_port_header, // reordered : made net_port_header mandatory
      $.port_identifier,
      repeat($.unpacked_dimension),
      optional(seq('=', $.constant_expression))
    ),
    // seq(
    //   optional($.variable_port_header),
    //   $.port_identifier,
    //   repeat($._variable_dimension),
    //   optional('=', $.constant_expression)
    // ),
    // seq(
    //   optional($.port_direction),
    //   '.',
    //   $.port_identifier,
    //   '(',
    //   optional($.expression),
    //   ')'
    // )
  ),

  /*
  elaboration_system_task ::=
  $fatal [ ( finish_number [, list_of_arguments ] )| $error
   [ ( [ list_of_arguments ] ) ] ;
  | $warning [ ( [ list_of_arguments ] ) ] ;
  | $info [ ( [ list_of_arguments ] ) ] ;
  */

  finish_number: $ => choice('0', '1', '2'),

  _module_common_item: $ => choice(
    $._module_or_generate_item_declaration,
    //  $.interface_instantiation,
    //  $.program_instantiation,
    //  $.assertion_item,
    //  $.bind_directive,
    $.continuous_assign,
    //  $.net_alias,
    // $.initial_construct,
    //  $.final_construct,
    // $.always_construct
    //  $.loop_generate_construct,
    //  $.conditional_generate_construct,
    //  $.elaboration_system_task
  ),

  _module_item: $ => choice(
    // seq($.port_declaration, ';'),
    $._non_port_module_item
  ),

  module_or_generate_item: $ => seq(
    repeat($.attribute_instance),
    choice(
      $.parameter_override,
      // $.gate_instantiation,
      // $.udp_instantiation,
      $.module_instantiation,
      $._module_common_item
    )
  ),

  _module_or_generate_item_declaration: $ => choice(
    $._package_or_generate_item_declaration
    //  $.genvar_declaration
    //  $.clocking_declaration
    //  seq('default' __ 'clocking' __ clocking_identifier __ ';')
    //  seq('default' __ 'disable' __ 'iff' __ expression_or_dist __ ';')
  ),

  _non_port_module_item: $ => choice(
    //  $.generate_region
    $.module_or_generate_item,
    //  $.specify_block
    //  ( attribute_instance __ )* specparam_declaration
    //  $.program_declaration
    // $.module_declaration
    //  $.interface_declaration
    //  $.timeunits_declaration
  ),

  parameter_override: $ => seq(
    'defparam',
    $.list_of_defparam_assignments,
    ';'
  ),

  /*
  bind_directive
    = 'bind' __ bind_target_scope ( __ ':' __ bind_target_instance_list )? __
      bind_instantiation __ ';'
    / 'bind' __ bind_target_instance __ bind_instantiation __ ';'

  bind_target_scope
    = module_identifier
    / interface_identifier

  bind_target_instance
    = hierarchical_identifierconstant_bit_select

  bind_target_instance_list
    = bind_target_instance ( __ ',' __ bind_target_instance )*

  bind_instantiation
    = program_instantiation
    / module_instantiation
    / interface_instantiation
    / checker_instantiation
  */


  // A.1.11 Package items

  _package_item: $ => choice(
    $._package_or_generate_item_declaration
    //  / anonymous_program
    //  / package_export_declaration
    //  / timeunits_declaration
  ),

  _package_or_generate_item_declaration: $ => choice(
    $.net_declaration,
    $.data_declaration,
    //  / task_declaration
    //  / function_declaration
    //  / checker_declaration
    //  / dpi_import_export
    //  / extern_constraint_declaration
    //  / class_declaration
    //  / class_constructor_declaration
    seq($.any_parameter_declaration, ';'),
    //  / covergroup_declaration
    //  / overload_declaration
    //  / assertion_item_declaration
    ';'
  ),

  /*
  anonymous_program
    = 'program' __ ';' ( __ anonymous_program_item )* __ 'endprogram'

  anonymous_program_item
    = task_declaration
    / function_declaration
    / class_declaration
    / covergroup_declaration
    / class_constructor_declaration
    / ';'
  */

  /* A.2 Declarations */

  /* A.2.1 Declaration types */

  /* A.2.1.1 Module parameter declarations */

  /* combined:
    local_parameter_declaration
    parameter_declaration
  */
  any_parameter_declaration: $ => seq(
    choice('parameter', 'localparam'),
    choice(
      seq(
        optional($._data_type_or_implicit), // FIXED optional
        $.list_of_param_assignments
      ),
      seq('type', $.list_of_type_assignments)
    )
  ),

  specparam_declaration: $ => seq(
    'specparam',
    optional($.packed_dimension),
    $.list_of_specparam_assignments,
    ';'
  ),

  /* A.2.1.2 Port declarations */

  inout_declaration: $ => seq(
    'inout',
    $.net_port_type,
    $.list_of_port_identifiers
  ),

  input_declaration: $ => seq(
    'input', choice(
      seq($.net_port_type, $.list_of_port_identifiers),
      seq($.variable_port_type, $.list_of_variable_identifiers)
    )
  ),

  output_declaration: $ => seq(
    'output', choice(
      seq($.net_port_type, $.list_of_port_identifiers),
      seq($.variable_port_type, $.list_of_variable_identifiers)
    )
  ),

  interface_port_declaration: $ => seq(
    $.interface_identifier,
    optional(seq('.', $.modport_identifier)),
    $.list_of_interface_identifiers
  ),

  ref_declaration: $ => seq(
    'ref',
    $.variable_port_type,
    $.list_of_variable_identifiers
  ),

  // A.2.1.3 Type declarations

  data_declaration: $ => seq(
    optional('const'),
    optional('var'),
    optional($.lifetime),
    $._data_type_or_implicit,
    $.list_of_variable_decl_assignments,
    ';'
  ),

  //  / type_declaration
  //  / package_import_declaration __ net_type_declaration

  package_import_declaration: $ => seq(
    'import',
    sep1(',', $.package_import_item),
    ';'
  ),

  package_import_item: $ => seq(
    $.package_identifier,
    '::',
    choice(
      $.identifier,
      '*'
    )
  ),

  package_export_declaration: $ => seq(
    'export',
    choice(
      seq(
        '*::*',
        ';'
      ),
      seq(sep1(',', $.package_import_item), ';')
    )
  ),

  /*
  genvar_declaration
    = 'genvar' __ list_of_genvar_identifiers __ ';'

  */

  net_declaration: $ => choice(
    seq(
      $.net_type,
      optional(choice($.drive_strength, $.charge_strength)),
      optional(choice('vectored', 'scalared')),
      optional($._data_type_or_implicit), // <- optional
      optional($.delay3),
      $.list_of_net_decl_assignments,
      ';'
    ),
    // seq(
    //   $.net_type_identifier,
    //   optional($.delay_control),
    //   $.list_of_net_decl_assignments,
    //   ';'
    // ),
    // seq(
    //   'interconnect',
    //   $.implicit_data_type,
    //   optional(seq('#', $.delay_value)),
    //   sep1(',' , seq($.net_identifier, repeat($.unpacked_dimension))),
    //   ';'
    // )
  ),

  /*

  type_declaration ::=
  typedef data_type type_identifier { variable_dimension } ;
  | typedef interface_instance_identifier constant_bit_select . type_identifier
   type_identifier ;
  | typedef [ enum | struct | union | class | interface class ] type_identifier ;

  net_type_declaration ::=
  nettype data_type net_type_identifier
  [ with [ package_scope | class_scope ] tf_identifier ] ;
  | nettype [ package_scope | class_scope ] net_type_identifier
   net_type_identifier
  */

  lifetime: $ => choice('static', 'automatic'),


  /* A.2.2 Declaration data types */

  /* A.2.2.1 Net and variable types */

  _casting_type: $ => choice(
    $._simple_type,
    $.constant_primary,
    $._signing,
    'string',
    'const'
  ),

  data_type: $ => choice(
    seq($.integer_vector_type, optional($._signing), repeat($.packed_dimension)),
    // seq($.integer_atom_type, optional($._signing)),
    // $.non_integer_type,
    //  / struct_union ( 'packed' signing? )?
    //    '{' struct_union_member struct_union_member* '}'
    //    packed_dimension*
    /*/ 'enum' enum_base_type?*/
    /*'{' enum_name_declaration ( ',' enum_name_declaration )* '}'*/
    /*packed_dimension**/
    'string',
    'chandle',
    /*/ 'virtual' 'interface'? interface_identifier parameter_value_assignment?*/
    /*( '.' modport_identifier )?*/
    /*/ ( class_scope / package_scope )?*/
    /*type_identifier*/
    /*packed_dimension**/
    /*/ class_type*/
    'event',
    /*/ ps_covergroup_identifier*/
    // $.type_reference
  ),

  _data_type_or_implicit: $ => choice(
    $.data_type,
    // $.implicit_data_type
  ),

  implicit_data_type: $ => seq(
    optional($._signing),
    repeat1($.packed_dimension) // reordered : repeat -> repeat1
  ),

  _enum_base_type: $ => choice(
    seq(
      $.integer_atom_type,
      optional($._signing)
    ),
    seq(
      $.integer_vector_type,
      optional($._signing),
      /* packed_dimension* */
    ),
    // seq(
    //   /*/ type_identifier*/
    //   /*packed_dimension**/
    // )
  ),

  enum_name_declaration: $ => seq(
    $.enum_identifier, optional(seq(
      '[',
      $.integral_number,
      optional(seq(':', $.integral_number)),
      ']'
    )), optional(seq('=', $.constant_expression))
  ),

  // class_scope: $ => seq($.class_type, '::'),
  //
  // class_type: $ => seq(
  //   $.ps_class_identifier,
  //   optional($.parameter_value_assignment),
  //   repeat(seq(
  //     '::',
  //     $.class_identifier,
  //     optional($.parameter_value_assignment)
  //   ))
  // ),

  _integer_type: $ => choice(
    $.integer_vector_type,
    $.integer_atom_type
  ),

  integer_atom_type: $ => choice('byte', 'shortint', 'int', 'longint', 'integer', 'time'),

  integer_vector_type: $ => choice('bit', 'logic', 'reg'),

  non_integer_type: $ => choice('shortreal', 'real', 'realtime'),

  net_type: $ => choice('supply0', 'supply1', 'tri', 'triand', 'trior', 'trireg', 'tri0', 'tri1', 'uwire', 'wire', 'wand', 'wor'),

  net_port_type: $ => choice(
    seq(optional($.net_type), $._data_type_or_implicit),
    // $.net_type_identifier,
    // seq('interconnect', $.implicit_data_type)
  ),

  variable_port_type: $ => alias($._var_data_type, $._variable_port_type),

  _var_data_type: $ => choice(
    $.data_type,
    seq('var', $._data_type_or_implicit)
  ),

  _signing: $ => choice('signed', 'unsigned'),

  _simple_type: $ => choice(
    $._integer_type,
    $.non_integer_type,
    // $.ps_type_identifier
    $.ps_parameter_identifier
  ),

  /*
  struct_union_member
    = attribute_instance*
      random_qualifier?
      data_type_or_void
      list_of_variable_decl_assignments
      ';'
  */

  _data_type_or_void: $ => choice(
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
    // seq(
    //   '(',
    //   $.mintypmax_expression,
    //   optional(seq(
    //     $.mintypmax_expression,
    //     optional($.mintypmax_expression)
    //   )),
    //   ')'
    // )
  )),

  delay2: $ => seq('#', choice(
    $.delay_value,
    seq(
      '(',
      $.mintypmax_expression, optional(
        $.mintypmax_expression
      ),
      ')'
    )
  )),

  delay_value: $ => choice(
    $.unsigned_number,
    $.real_number,
    // $.ps_identifier,
    // $.time_literal,
    '1step'
  ),

  /*
    A.2.3 Declaration lists
  */

  list_of_defparam_assignments: $ => sep1(',', $.defparam_assignment),

  // list_of_genvar_identifiers = genvar_identifier { , genvar_identifier }

  list_of_interface_identifiers: $ => seq(
    $.interface_identifier,
    repeat($.unpacked_dimension),
    repeat(seq(
      ',',
      $.interface_identifier,
      repeat($.unpacked_dimension)
    ))
  ),

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
    optional(seq('=', $.expression))
  )),

  list_of_type_assignments: $ => sep1(',', $.type_assignment),

  list_of_variable_decl_assignments: $ => sep1(',', $.variable_decl_assignment),

  list_of_variable_identifiers: $ => sep1(',', seq(
    $.variable_identifier,
    optional($._variable_dimension)
  )),

  list_of_variable_port_identifiers: $ => sep1(',', seq(
    $.port_identifier,
    repeat($._variable_dimension),
    optional(seq('=', $.constant_expression))
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
    optional(seq('=', $.expression))
  ),

  param_assignment: $ => seq(
    $.parameter_identifier,
    repeat($.unpacked_dimension),
    optional(seq('=', $.constant_param_expression))
  ),

  specparam_assignment: $ => choice(
    seq($.specparam_identifier, '=', $.constant_mintypmax_expression),
    // $.pulse_control_specparam
  ),

  type_assignment: $ => seq(
    $.type_identifier,
    optional(seq('=', $.data_type))
  ),

  // pulse_control_specparam
  //   = PATHPULSE$ = ( reject_limit_value [ , error_limit_value ] )
  // | PATHPULSE$specify_input_terminal_descriptor
  // $specify_output_terminal_descriptor
  // = ( reject_limit_value [ , error_limit_value ] )

  error_limit_value: $ => $.limit_value,

  reject_limit_value: $ => $.limit_value,

  limit_value: $ => $.constant_mintypmax_expression,

  variable_decl_assignment: $ => choice(
    seq(
      $.variable_identifier,
      repeat($._variable_dimension),
      optional(seq('=', $.expression))
    ),
    // seq(
    //   $.dynamic_array_variable_identifier,
    //   $.unsized_dimension,
    //   repeat($._variable_dimension),
    //   optional(seq('=', $.dynamic_array_new))
    // ),
    // seq(
    //   $.class_variable_identifier
    //   optional(seq('=', $.class_new))
    // )
  ),

  // class_new: $ => choice(
  //   seq(
  //     $.class_scope,
  //     'new',
  //     optional(seq('(', $.list_of_arguments, ')'))
  //   ),
  //   seq('new', $.expression)
  // ),

  dynamic_array_new: $ => seq(
    'new', '[', $.expression, ']',
    optional(seq('(', $.expression, ')'))
  ),

  // A.2.5 Declaration ranges

  unpacked_dimension: $ => seq(
    '[', choice(
      $.constant_range,
      // $.constant_expression
    ), ']'
  ),

  packed_dimension: $ => choice(
    seq(
      '[',
      $.constant_range,
      ']'
    ),
    $.unsized_dimension
  ),

  associative_dimension: $ => seq('[', choice($.data_type, '*'), ']'),

  _variable_dimension: $ => choice(
    $.unsized_dimension,
    $.unpacked_dimension,
    $.associative_dimension,
    $.queue_dimension
  ),

  queue_dimension: $ => seq(
    '[', '$', optional(seq(':', $.constant_expression)), ']'
  ),

  unsized_dimension: $ => seq('[', ']'),

  // A.2.6 Function declarations
  /*
    function_data_type_or_implicit ::=
    data_type_or_void
    | implicit_data_type
    function_declaration ::= function [ lifetime ] function_body_declaration
    function_body_declaration ::=
    function_data_type_or_implicit
    [ interface_identifier . | class_scope ] function_identifier ;
    { tf_item_declaration }
    { function_statement_or_null }
    endfunction [ : function_identifier ]
    | function_data_type_or_implicit
    [ interface_identifier . | class_scope ]
      function_identifier ( [ tf_port_list ] ) ;
    { block_item_declaration }
    { function_statement_or_null }
    endfunction [ : function_identifier ]
    function_prototype
     ::= function data_type_or_void function_identifier [ ( [ tf_port_list ] ) ]
    dpi_import_export ::=
    import dpi_spec_string [ dpi_function_import_property ]
      [ c_identifier = ] dpi_function_proto ;
    | import dpi_spec_string [ dpi_task_import_property ]
      [ c_identifier = ] dpi_task_proto ;
    | export dpi_spec_string [ c_identifier = ] function function_identifier ;
    | export dpi_spec_string [ c_identifier = ] task task_identifier ;
    dpi_spec_string ::= 'DPI-C' | 'DPI'
    dpi_function_import_property ::= context | pure
    dpi_task_import_property ::= context
    dpi_function_proto21,22 ::= function_prototype
    dpi_task_proto22 ::= task_prototype
  */





  // A.2.7 Task declarations

  /*
  task_declaration ::= task [ lifetime ] task_body_declaration
  task_body_declaration ::=
  [ interface_identifier . | class_scope ] task_identifier ;
  { tf_item_declaration }
  { statement_or_null }
  endtask [ : task_identifier ]
  | [ interface_identifier . | class_scope ]
    task_identifier ( [ tf_port_list ] ) ;
  { block_item_declaration }
  { statement_or_null }
  endtask [ : task_identifier ]
  tf_item_declaration ::=
      block_item_declaration
  | tf_port_declaration
  tf_port_list ::=
  tf_port_item { , tf_port_item }
  tf_port_item23 ::=
  ( attribute_instance __ )*
  [ tf_port_direction ] [ var ] data_type_or_implicit
  [ port_identifier { variable_dimension } [ = expression ] ]
  tf_port_direction ::= port_direction | const ref
  tf_port_declaration ::=
  ( attribute_instance __ )* tf_port_direction [ var ] data_type_or_implicit
   list_of_tf_variable_identifiers ;
  task_prototype ::= task task_identifier [ ( [ tf_port_list ] ) ]
  */







  // A.2.8 Block item declarations

  block_item_declaration: $ => seq(
    repeat($.attribute_instance),
    choice(
      $.data_declaration,
      seq($.any_parameter_declaration, ';'),
      $.overload_declaration,
      // $.let_declaration
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

  // A.2.9 Interface declarations

  // modport_declaration ::= modport modport_item { , modport_item } ;
  // modport_item ::= modport_identifier ( modport_ports_declaration { , modport_ports_declaration } )
  // modport_ports_declaration ::=
  // { attribute_instance } modport_simple_ports_declaration
  // | { attribute_instance } modport_tf_ports_declaration
  // | { attribute_instance } modport_clocking_declaration
  // modport_clocking_declaration ::= clocking clocking_identifier
  // modport_simple_ports_declaration ::=
  // port_direction modport_simple_port { , modport_simple_port }
  // modport_simple_port ::=
  // port_identifier
  // | . port_identifier ( [ expression ] )
  // modport_tf_ports_declaration ::=
  // import_export modport_tf_port { , modport_tf_port }
  // modport_tf_port ::=
  // method_prototype
  // | tf_identifier
  // import_export ::= import | export

  // A.2.10 Assertion declarations

  // A.2.11 Covergroup declarations

  // A.3 Primitive instances

  // A.3.1 Primitive instantiation and instances

  // A.3.2 Primitive strengths

  // pulldown_strength ::=
  // ( strength0 , strength1 )
  // | ( strength1 , strength0 )
  // | ( strength0 )
  // pullup_strength ::=
  // ( strength0 , strength1 )
  // | ( strength1 , strength0 )
  // | ( strength1 )

  // A.3.3 Primitive terminals

  // enable_terminal ::= expression
  // inout_terminal ::= net_lvalue
  // input_terminal ::= expression
  // ncontrol_terminal ::= expression
  // output_terminal ::= net_lvalue
  // pcontrol_terminal ::= expression

  // A.3.4 Primitive gate and switch types

  // cmos_switchtype ::= cmos | rcmos
  // enable_gatetype ::= bufif0 | bufif1 | notif0 | notif1
  // mos_switchtype ::= nmos | pmos | rnmos | rpmos
  // n_input_gatetype ::= and | nand | or | nor | xor | xnor
  // n_output_gatetype ::= buf | not
  // pass_en_switchtype ::= tranif0 | tranif1 | rtranif1 | rtranif0
  // pass_switchtype ::= tran | rtran

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
    repeat1($.attribute_instance), // reordered : repeat -> repeat1
    optional($.expression)
  ),

  // from spec:
  // named_port_connection ::=
  // { attribute_instance } . port_identifier [ ( [ expression ] ) ]
  // | { attribute_instance } .*

  named_port_connection: $ => seq(
    repeat($.attribute_instance), choice(
      seq('.', $.port_identifier, optional(seq(
        '(', optional($.expression), ')'
      ))),
      '.*'
    )
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

  /* Annex B */

  ReservedWord: $ => choice(
    $.Keyword,
    $.SystemKeyword,
    // $.NullLiteral,
    // $.BooleanLiteral
  ),

  Keyword: $ => choice(
    'always',
    'and',
    'assert',
    'assign',
    'automatic',
    'begin',
    'bit',
    'break',
    'buf',
    'bufif0',
    'bufif1',
    'byte',
    'case',
    'casex',
    'casez',
    'chandle',
    'clocking',
    'const',
    'const-in-lex',
    'cmos',
    'context',
    'continue',
    'cover',
    'default',
    'defparam',
    'disable',
    'do',
    'edge',
    'else',
    'end',
    'endcase',
    'endclocking',
    'endfunction',
    'endgenerate',
    'endmodule',
    'endpackage',
    'endprimitive',
    'endprogram',
    'endproperty',
    'endspecify',
    'endtable',
    'endtask',
    'enum',
    'export',
    'final',
    'for',
    'forever',
    'function',
    'generate',
    'genvar',
    'global-then-clocking',
    'global-in-lex',
    'if',
    'iff',
    'import',
    'initial',
    'inout',
    'input',
    'int',
    'integer',
    'localparam',
    'logic',
    'longint',
    'module',
    'nand',
    'negedge',
    'nmos',
    'nor',
    'not',
    'notif0',
    'notif1',
    'or',
    'output',
    'package',
    'parameter',
    'pmos',
    'posedge',
    'primitive',
    'priority',
    'program',
    'property',
    'pulldown',
    'pullup',
    'pure',
    'rcmos',
    'real',
    'realtime',
    'reg',
    'repeat',
    'return',
    'rnmos',
    'rpmos',
    'rtran',
    'rtranif0',
    'rtranif1',
    'scalared',
    'shortint',
    'signed',
    'specify',
    'specparam',
    'static',
    'string',
    'supply0',
    'supply1',
    'table',
    'task',
    'time',
    'timeprecision',
    'timeunit',
    'tran',
    'tranif0',
    'tranif1',
    'tri',
    'tri0',
    'tri1',
    'true',
    'typedef',
    'unique',
    'unique0',
    'unsigned',
    'var',
    'vectored',
    'void',
    'while',
    'wire',
    'wreal',
    'xnor',
    'xor'
  ),

  SystemKeyword: $ => choice(
    '$bits',
    '$bitstoreal',
    '$c',
    '$ceil',
    '$clog2',
    '$countones',
    '$display',
    '$error',
    '$exp',
    '$fatal',
    '$fclose',
    '$fdisplay',
    '$feof',
    '$fflush',
    '$fgetc',
    '$fgets',
    '$finish',
    '$floor',
    '$fopen',
    '$fscanf',
    '$fwrite',
    '$info',
    '$isunknown',
    '$itor',
    '$ln',
    '$log10',
    '$onehot',
    '$onehot0',
    '$pow',
    '$random',
    '$readmemb',
    '$readmemh',
    '$realtime',
    '$realtobits',
    '$rtoi',
    '$sformat',
    '$signed',
    '$sqrt',
    '$sscanf',
    '$stime',
    '$stop',
    '$swrite',
    '$system',
    '$test$plusargs',
    '$time',
    '$unit',
    '$unsigned',
    '$value$plusargs',
    '$warning',
    '$write'
  ),

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
    'assign', choice(
      seq(
        optional($.drive_strength),
        optional($.delay3),
        $.list_of_net_assignments
      ),
      // seq(optional($.delay_control), $.list_of_variable_assignments)
    ), ';'
  ),

  list_of_net_assignments: $ => sep1(',', $.net_assignment),

  // list_of_variable_assignments = variable_assignment { , variable_assignment }
  // net_alias = alias net_lvalue = net_lvalue { = net_lvalue } ;

  net_assignment: $ => seq($.net_lvalue, '=', $.expression),

  // A.6.2 Procedural blocks and assignments

  initial_construct: $ => seq('initial', $.statement_or_null),

  always_construct: $ => seq($.always_keyword, $.statement),

  always_keyword: $ => choice(
    'always',
    'always_comb',
    'always_latch',
    'always_ff'
  ),

  // final_construct: $ => seq('final', $.function_statement),

  blocking_assignment: $ => choice(
    seq(
      $.variable_lvalue,
      '=', // !=,
      $.delay_or_event_control,
      $.expression
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
    $.variable_lvalue,
    $.assignment_operator,
    $.expression
  ),

  // reordered
  assignment_operator: $ => choice(
    '<<<=',
    '>>>=',
    '<<=',
    '>>=',
    '+=',
    '-=',
    '*=',
    '/=',
    '%=',
    '&=',
    '|=',
    '^=',
    '=' // !=
  ),

  nonblocking_assignment: $ => seq(
    $.variable_lvalue, '<=', optional($.delay_or_event_control), $.expression
  ),

  // procedural_continuous_assignment =
  // assign variable_assignment
  // | deassign variable_lvalue
  // | force variable_assignment
  // | force net_assignment
  // | release variable_lvalue
  // | release net_lvalue
  // variable_assignment = variable_lvalue = expression

  // A.6.3 Parallel and sequential blocks

  // action_block =
  // statement_or_null
  // | [ statement ] else statement_or_null

  seq_block: $ => seq(
    'begin', optional(':', $.block_identifier),
    repeat($.block_item_declaration),
    repeat($.statement_or_null),
    'end', optional(':', $.block_identifier)
  ),

  // par_block =
  // fork [ : block_identifier ] { block_item_declaration } { statement_or_null }
  // join_keyword [ : block_identifier ]
  // join_keyword = join | join_any | join_none

  // A.6.4 Statements

  statement_or_null: $ => choice(
    $.statement,
    seq(optional($.attribute_instance), ';')
  ),

  statement: $ => seq(
    optional($.block_identifier, ':'),
    repeat($.attribute_instance),
    $.statement_item
  ),

  statement_item: $ => choice(
    seq($.blocking_assignment, ';'),
    seq($.nonblocking_assignment, ';'),
    // seq($.procedural_continuous_assignment, ';'),
    $.case_statement,
    $.conditional_statement,
    seq($.inc_or_dec_expression, ';'),
    // $.subroutine_call_statement,
    // $.disable_statement,
    // $.event_trigger,
    // $.loop_statement,
    // $.jump_statement,
    // $.par_block,
    $.seq_block, // reordered
    $.procedural_timing_control_statement,
    // $.wait_statement,
    // $.procedural_assertion_statement,
    // $.clocking_drive ';',
    // $.randsequence_statement,
    // $.randcase_statement,
    // $.expect_property_statement,
  ),

  // function_statement_or_null =
  // function_statement
  // | ( attribute_instance __ )* ;
  // variable_identifier_list = variable_identifier { , variable_identifier }

  // statement_or_null1 = (attribute_instance __) * ';' /
  // statement1
  //
  // statement1 = (block_identifier __ ':'
  //   __) ? (attribute_instance __) * statement_item1
  //
  // statement_item1 'statement_item1' = blocking_assignment ';' /
  // nonblocking_assignment ';'
  // /*/ procedural_continuous_assignment ';'*/
  // /
  // case_statement /
  // conditional_statement
  // /*/ inc_or_dec_expression ';'*/
  // /*/ subroutine_call_statement*/
  // /*/ disable_statement*/
  // /*/ event_trigger*/
  // /*/ loop_statement*/
  // /*/ jump_statement*/
  // /*/ par_block*/
  // /
  // seq_block
  // /*/ procedural_timing_control_statement*/
  // /*/ wait_statement*/
  // /*/ procedural_assertion_statement*/
  // /*/ clocking_drive ';'*/
  // /*/ randsequence_statement*/
  // /*/ randcase_statement*/
  // /*/ expect_property_statement*/
  //
  // // function_statement_or_null =
  // // function_statement
  // // | ( attribute_instance __ )* ;
  // // variable_identifier_list = variable_identifier { , variable_identifier }


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

  event_control: $ => choice( // reordered
    '@*',
    seq('@', '(*)'),
    seq('@', $.hierarchical_event_identifier),
    seq('(', $.event_expression, ')'),
    // seq('@', $.ps_or_hierarchical_sequence_identifier)
  ),

  event_expression: $ => choice( // reordered : brake recursion
    seq($.event_expression, 'or', $.event_expression),
    seq($.event_expression, ',', $.event_expression),
    seq($.edge_identifier, $.expression), // reordered : help parser
    seq(
      optional($.edge_identifier),
      $.expression,
      optional(seq('iff', $.expression))
    ),
    // seq(
    //   $.sequence_instance,
    //   optional(seq('iff', $.expression))
    // ),
    seq('(', $.event_expression, ')')
  ),

  // event_expression_2: $ => choice( // reordered : help parser
  //   seq($.edge_identifier, $.expression), // reordered : help parser
  //   seq(
  //     optional($.edge_identifier),
  //     $.expression,
  //     optional(seq('iff', $.expression))
  //   ),
  //   // seq(
  //   //   $.sequence_instance,
  //   //   optional(seq('iff', $.expression))
  //   // ),
  //   seq('(', $.event_expression, ')')
  // ),

  _procedural_timing_control: $ => choice(
    $.delay_control,
    $.event_control,
    $.cycle_delay
  ),

  // jump_statement =
  // return [ expression ] ;
  // | break ;
  // | continue ;
  // wait_statement =
  // wait ( expression ) statement_or_null
  // | wait fork ;
  // | wait_order ( hierarchical_identifier { , hierarchical_identifier } )
  //    action_block
  // event_trigger =
  // -> hierarchical_event_identifier ;
  // |->> [ delay_or_event_control ] hierarchical_event_identifier ;
  // disable_statement =
  // disable hierarchical_task_identifier ;
  // | disable hierarchical_block_identifier ;
  // | disable fork ;
  //
  //
  //
  //
  //

  // A.6.6 Conditional statements

  conditional_statement: $ => seq(
    optional($.unique_priority),
    'if', '(', $.cond_predicate, ')',
    $.statement_or_null,
    repeat(seq('else', 'if', '(', $.cond_predicate, ')', $.statement_or_null)),
    optional(seq('else', $.statement_or_null))
  ),

  unique_priority: $ => choice('unique', 'unique0', 'priority'),

  cond_predicate: $ => sep1('&&&', $.expression_or_cond_pattern),

  expression_or_cond_pattern: $ => choice(
    $.expression,
    $.cond_pattern
  ),

  cond_pattern: $ => seq($.expression, 'matches', $.pattern),

  // A.6.7 Case statements

  case_statement: $ => seq(
    optional($.unique_priority),
    choice(
      seq($.case_keyword, '(', $.case_expression, ')', repeat1($.case_item), 'endcase'),
      // seq($.case_keyword, '(', $.case_expression, ')', 'matches', repeat1($.case_pattern_item), 'endcase'),
      // seq('case', '(', $.case_expression, ')', 'inside', repeat1($.case_inside_item), 'endcase')
    )
  ),

  case_keyword: $ => choice('case', 'casez', 'casex'),

  case_expression: $ => $.expression,

  case_item: $ => choice(
    seq(sep1(',', $.case_item_expression), ':', $.statement_or_null),
    seq('default', optional(':'), $.statement_or_null)
  ),

  // case_pattern_item =
  // pattern [ &&& expression ] : statement_or_null
  // | default [ : ] statement_or_null
  // case_inside_item =
  // open_range_list : statement_or_null
  // | default [ : ] statement_or_null

  case_item_expression: $ => $.expression,

  // randcase_statement =
  // randcase randcase_item { randcase_item } endcase
  // randcase_item = expression : statement_or_null
  // open_range_list = open_value_range { , open_value_range }
  // open_value_range = value_range25


  // A.6.7.1 Patterns

  pattern: $ => choice(
    seq('.', $.variable_identifier),
    '.*',
    $.constant_expression,
    seq('tagged', $.member_identifier, optional($.pattern)),
    seq('\'{', sep1(',', $.pattern), '}'),
    seq('\'{', sep1(',', seq($.member_identifier, ':', $.pattern)), '}')
  ),

  // assignment_pattern =
  // '{ expression { , expression } }
  // | '{ structure_pattern_key : expression
  //    { , structure_pattern_key : expression } }
  // | '{ array_pattern_key : expression { , array_pattern_key : expression } }
  // | '{ constant_expression { expression { , expression } } }
  // structure_pattern_key = member_identifier | assignment_pattern_key
  // array_pattern_key = constant_expression | assignment_pattern_key
  // assignment_pattern_key = simple_type | default


  // assignment_pattern_expression =
  // [ assignment_pattern_expression_type ] assignment_pattern

  assignment_pattern_expression_type: $ => choice(
    // ps_type_identifier
    $.ps_parameter_identifier,
    // integer_atom_type
    // type_reference
  ),

  // constant_assignment_pattern_expression = assignment_pattern_expression

  assignment_pattern_net_lvalue: $ => seq(
    '\'{', sep1(',', $.net_lvalue), '}'
  ),

  assignment_pattern_variable_lvalue: $ => seq(
    '\'{', sep1(',', $.variable_lvalue), '}'
  ),

  // A.6.8 Looping statements

  // loop_statement =
  // forever statement_or_null
  // | repeat ( expression ) statement_or_null
  // | while ( expression ) statement_or_null
  // | for ( [ for_initialization ] ; [ expression ] ; [ for_step ] )
  // statement_or_null
  // | do statement_or_null while ( expression ) ;
  // | foreach ( ps_or_hierarchical_array_identifier [ loop_variables ] )
  //    statement
  // for_initialization =
  // list_of_variable_assignments
  // | for_variable_declaration { , for_variable_declaration }
  // for_variable_declaration =
  // [ var ] data_type variable_identifier = expression
  //   { , variable_identifier = expression }14
  // for_step = for_step_assignment { , for_step_assignment }
  // for_step_assignment =
  // operator_assignment
  // | inc_or_dec_expression
  // | function_subroutine_call
  // loop_variables
  //   = [ index_variable_identifier ] { , [ index_variable_identifier ] }
  // A.6.9 Subroutine call statements
  // subroutine_call_statement =
  // subroutine_call ;
  // | void ' ( function_subroutine_call ) ;

  // A.6.9 Subroutine call statements

  // A.6.10 Assertion statements

  // assertion_item =
  // concurrent_assertion_item
  // | deferred_immediate_assertion_item
  // deferred_immediate_assertion_item
  //  = [ block_identifier : ] deferred_immediate_assertion_statement
  // procedural_assertion_statement =
  // concurrent_assertion_statement
  // | immediate_assertion_statement
  // | checker_instantiation
  // immediate_assertion_statement =
  // simple_immediate_assertion_statement
  // | deferred_immediate_assertion_statement
  // simple_immediate_assertion_statement =
  // simple_immediate_assert_statement
  // | simple_immediate_assume_statement
  // | simple_immediate_cover_statement
  // simple_immediate_assert_statement =
  // assert ( expression ) action_block
  // simple_immediate_assume_statement =
  // assume ( expression ) action_block
  // simple_immediate_cover_statement =
  // cover ( expression ) statement_or_null
  // deferred_immediate_assertion_statement =
  // deferred_immediate_assert_statement
  // | deferred_immediate_assume_statement
  // | deferred_immediate_cover_statement
  // deferred_immediate_assert_statement =
  // assert #0 ( expression ) action_block
  // | assert final ( expression ) action_block
  // deferred_immediate_assume_statement =
  // assume #0 ( expression ) action_block
  // | assume final ( expression ) action_block
  // deferred_immediate_cover_statement =
  // cover #0 ( expression ) statement_or_null
  // | cover final ( expression ) statement_or_null

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

  cycle_delay: $ => seq('##', choice(
    $.integral_number,
    $.identifier,
    seq('(', $.expression, ')')
  )),

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
  // specify_block = specify { specify_item } endspecify
  // specify_item =
  // specparam_declaration
  // | pulsestyle_declaration
  // | showcancelled_declaration
  // | path_declaration
  // | system_timing_check
  // pulsestyle_declaration =
  // pulsestyle_onevent list_of_path_outputs ;
  // | pulsestyle_ondetect list_of_path_outputs ;
  // showcancelled_declaration =
  // showcancelled list_of_path_outputs ;
  // | noshowcancelled list_of_path_outputs ;

  // A.7 Specify section

  // A.7.1 Specify block declaration

  // A.7.2 Specify path declarations

  // path_declaration =
  // simple_path_declaration ;
  // | edge_sensitive_path_declaration ;
  // | state_dependent_path_declaration ;
  // simple_path_declaration =
  // parallel_path_description = path_delay_value
  // | full_path_description = path_delay_value
  // parallel_path_description =
  // ( specify_input_terminal_descriptor [ polarity_operator ]
  //    => specify_output_terminal_descriptor )
  // full_path_description =
  // ( list_of_path_inputs [ polarity_operator ] *> list_of_path_outputs )
  // list_of_path_inputs =
  // specify_input_terminal_descriptor { , specify_input_terminal_descriptor }
  // list_of_path_outputs =
  // specify_output_terminal_descriptor { , specify_output_terminal_descriptor }
  // A.7.3 Specify block terminals
  // specify_input_terminal_descriptor =
  // input_identifier [ [ constant_range_expression ] ]
  // specify_output_terminal_descriptor =
  // output_identifier [ [ constant_range_expression ] ]
  // input_identifier
  //   = input_port_identifier | inout_port_identifier
  //  | interface_identifier.port_identifier
  // output_identifier = output_port_identifier | inout_port_identifier | interface_identifier.port_identifier

  // A.7.3 Specify block terminals

  // A.7.4 Specify path delays

  // path_delay_value =
  // list_of_path_delay_expressions
  // | ( list_of_path_delay_expressions )
  // list_of_path_delay_expressions =
  // t_path_delay_expression
  // | trise_path_delay_expression , tfall_path_delay_expression
  // | trise_path_delay_expression , tfall_path_delay_expression
  //   , tz_path_delay_expression
  // | t01_path_delay_expression , t10_path_delay_expression
  //   , t0z_path_delay_expression ,
  // tz1_path_delay_expression , t1z_path_delay_expression
  //   , tz0_path_delay_expression
  // | t01_path_delay_expression , t10_path_delay_expression
  //   , t0z_path_delay_expression ,
  // tz1_path_delay_expression , t1z_path_delay_expression
  //   , tz0_path_delay_expression ,
  // t0x_path_delay_expression , tx1_path_delay_expression
  //   , t1x_path_delay_expression ,
  // tx0_path_delay_expression , txz_path_delay_expression
  //   , tzx_path_delay_expression
  // t_path_delay_expression = path_delay_expression
  // trise_path_delay_expression = path_delay_expression
  // tfall_path_delay_expression = path_delay_expression
  // tz_path_delay_expression = path_delay_expression
  // t01_path_delay_expression = path_delay_expression
  // t10_path_delay_expression = path_delay_expression
  // t0z_path_delay_expression = path_delay_expression
  // tz1_path_delay_expression = path_delay_expression
  // t1z_path_delay_expression = path_delay_expression
  // tz0_path_delay_expression = path_delay_expression
  // t0x_path_delay_expression = path_delay_expression
  // tx1_path_delay_expression = path_delay_expression
  // t1x_path_delay_expression = path_delay_expression
  // tx0_path_delay_expression = path_delay_expression
  // txz_path_delay_expression = path_delay_expression
  // tzx_path_delay_expression = path_delay_expression
  // path_delay_expression = constant_mintypmax_expression
  // edge_sensitive_path_declaration =
  // parallel_edge_sensitive_path_description = path_delay_value
  // | full_edge_sensitive_path_description = path_delay_value
  // parallel_edge_sensitive_path_description =
  // ( [ edge_identifier ] specify_input_terminal_descriptor
  //  [ polarity_operator ] =>
  // ( specify_output_terminal_descriptor [ polarity_operator ]
  //   : data_source_expression ) )
  // full_edge_sensitive_path_description =
  // ( [ edge_identifier ] list_of_path_inputs [ polarity_operator ] *>
  // ( list_of_path_outputs [ polarity_operator ] : data_source_expression ) )
  // data_source_expression = expression

  edge_identifier: $ => choice('posedge', 'negedge', 'edge'),

  // state_dependent_path_declaration =
  // if ( module_path_expression ) simple_path_declaration
  // | if ( module_path_expression ) edge_sensitive_path_declaration
  // | ifnone simple_path_declaration
  // polarity_operator = + | -

  // A.7.5 System timing checks

  // A.7.5.1 System timing check commands

  // system_timing_check|||||||||||=
  // $setup_timing_check
  // $hold_timing_check
  // $setuphold_timing_check
  // $recovery_timing_check
  // $removal_timing_check
  // $recrem_timing_check
  // $skew_timing_check
  // $timeskew_timing_check
  // $fullskew_timing_check
  // $period_timing_check
  // $width_timing_check
  // $nochange_timing_check
  // $setup_timing_check =
  // $setup ( data_event , reference_event , timing_check_limit
  //  [ , [ notifier ] ] ) ;
  // $hold_timing_check =
  // $hold ( reference_event , data_event , timing_check_limit
  //  [ , [ notifier ] ] ) ;
  // $setuphold_timing_check =
  // $setuphold ( reference_event , data_event
  //   , timing_check_limit , timing_check_limit
  // [ , [ notifier ] [ , [ timestamp_condition ] [ , [ timecheck_condition ]
  // [ , [ delayed_reference ] [ , [ delayed_data ] ] ] ] ] ] ) ;
  // $recovery_timing_check =
  // $recovery ( reference_event , data_event , timing_check_limit
  //  [ , [ notifier ] ] ) ;
  // $removal_timing_check =
  // $removal ( reference_event , data_event , timing_check_limit
  //  [ , [ notifier ] ] ) ;
  // $recrem_timing_check =
  // $recrem ( reference_event , data_event ,
  //  timing_check_limit , timing_check_limit
  // [ , [ notifier ] [ , [ timestamp_condition ] [ , [ timecheck_condition ]
  // [ , [ delayed_reference ] [ , [ delayed_data ] ] ] ] ] ] ) ;
  // $skew_timing_check =
  // $skew ( reference_event , data_event , timing_check_limit
  //  [ , [ notifier ] ] ) ;
  // $timeskew_timing_check =
  // $timeskew ( reference_event , data_event , timing_check_limit
  // [ , [ notifier ] [ , [ event_based_flag ]
  //  [ , [ remain_active_flag ] ] ] ] ) ;
  // $fullskew_timing_check =
  // $fullskew ( reference_event , data_event
  //  , timing_check_limit , timing_check_limit
  // [ , [ notifier ] [ , [ event_based_flag ]
  //  [ , [ remain_active_flag ] ] ] ] ) ;
  // $period_timing_check =
  // $period ( controlled_reference_event , timing_check_limit
  //  [ , [ notifier ] ] ) ;
  // $width_timing_check =
  // $width ( controlled_reference_event , timing_check_limit
  //  , threshold [ , [ notifier ] ] ) ;
  // $nochange_timing_check =
  // $nochange ( reference_event , data_event
  //  , start_edge_offset , end_edge_offset [ , [ notifier ] ] );

  // A.7.5.2 System timing check command arguments

  // timecheck_condition = mintypmax_expression
  // controlled_reference_event = controlled_timing_check_event
  // data_event = timing_check_event
  // delayed_data =
  // terminal_identifier
  // | terminal_identifier [ constant_mintypmax_expression ]
  // delayed_reference =
  // terminal_identifier
  // | terminal_identifier [ constant_mintypmax_expression ]
  // end_edge_offset = mintypmax_expression
  // event_based_flag = constant_expression
  // notifier = variable_identifier
  // reference_event = timing_check_event
  // remain_active_flag = constant_mintypmax_expression
  // timestamp_condition = mintypmax_expression
  // start_edge_offset = mintypmax_expression
  // threshold = constant_expression
  // timing_check_limit = expression

  // A.7.5.3 System timing check event definitions

  // timing_check_event =
  // [timing_check_event_control] specify_terminal_descriptor
  //    [ &&& timing_check_condition ]
  // controlled_timing_check_event =
  // timing_check_event_control specify_terminal_descriptor
  //  [ &&& timing_check_condition ]
  // timing_check_event_control =
  // posedge
  // | negedge
  // | edge
  // | edge_control_specifier
  // specify_terminal_descriptor =
  // specify_input_terminal_descriptor
  // | specify_output_terminal_descriptor
  // edge_control_specifier = edge [ edge_descriptor { , edge_descriptor } ]
  // edge_descriptor33 = 01 | 10 | z_or_x zero_or_one | zero_or_one z_or_x
  // zero_or_one = 0 | 1
  // z_or_x = x | X | z | Z
  // timing_check_condition =
  // scalar_timing_check_condition
  // | ( scalar_timing_check_condition )
  // scalar_timing_check_condition =
  // expression
  // | ~ expression
  // | expression == scalar_constant
  // | expression === scalar_constant
  // | expression != scalar_constant
  // | expression !== scalar_constant
  // scalar_constant = 1'b0 | 1'b1 | 1'B0 | 1'B1 | 'b0 | 'b1 | 'B0 | 'B1 | 1 | 0
  //
  //
  //
  //
  // A.8 Expressions

  // A.8.1 Concatenations

  concatenation: $ => seq(
    '{', sep1(',', $.expression), '}'
  ),

  constant_concatenation: $ => seq(
    '{', sep1(',', $.constant_expression), '}'
  ),

  constant_multiple_concatenation: $ => seq(
    '{', $.constant_expression, $.constant_concatenation, '}'
  ),

  // module_path_concatenation
  //  = { module_path_expression { , module_path_expression } }
  // module_path_multiple_concatenation
  //  = { constant_expression module_path_concatenation }

  multiple_concatenation: $ => seq(
    '{', $.expression, $.concatenation, '}'
  ),

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
  // empty_queue35 = { }

  // A.8.2 Subroutine calls

  // constant_function_call = function_subroutine_call36
  // tf_call37 = ps_or_hierarchical_tf_identifier ( attribute_instance __ )*
  //  [ ( list_of_arguments ) ]
  // system_tf_call =
  // system_tf_identifier [ ( list_of_arguments ) ]
  //
  //
  // | system_tf_identifier ( data_type [ , expression ] )
  // subroutine_call =
  // tf_call
  // | system_tf_call
  // | method_call
  // | [ std:: ] randomize_call
  // function_subroutine_call = subroutine_call
  // list_of_arguments =
  // [ expression ] { , [ expression ] } { , . identifier ( [ expression ] ) }
  // | . identifier ( [ expression ] ) { , . identifier ( [ expression ] ) }
  // method_call = method_call_root . method_call_body
  // method_call_body =
  // method_identifier ( attribute_instance __ )* [ ( list_of_arguments ) ]
  // | built_in_method_call
  // built_in_method_call =
  // array_manipulation_call
  // | randomize_call
  // array_manipulation_call =
  // array_method_name ( attribute_instance __ )*
  // [ ( list_of_arguments ) ]
  // [ with ( expression ) ]
  // randomize_call =
  // randomize ( attribute_instance __ )*
  // [ ( [ variable_identifier_list | null ] ) ]
  // [ with [ ( [ identifier_list ] ) ] constraint_block ]38
  // method_call_root = primary | implicit_class_handle
  // array_method_name =
  // method_identifier | unique | and | or | xor
  //
  //





  // A.8.3 Expressions

  inc_or_dec_expression: $ => choice(
    seq($.inc_or_dec_operator, repeat($.attribute_instance), $.variable_lvalue),
    seq($.variable_lvalue, repeat($.attribute_instance), $.inc_or_dec_operator)
  ),

  conditional_expression: $ => seq(
    $.cond_predicate,
    '?',
    repeat($.attribute_instance), $.expression,
    ':',
    $.expression
  ),

  // Reordered from the original spec to satisfy the parser
  constant_expression: $ => choice(
    $.constant_primary,
    seq($.unary_operator, repeat($.attribute_instance), $.constant_primary),
    prec.left(seq(
      $.constant_expression,
      $.binary_operator,
      repeat($.attribute_instance),
      $.constant_expression
    )),
    prec.left(seq(
      $.constant_expression,
      '?',
      repeat($.attribute_instance),
      ':',
      $.constant_expression
    )),
  ),

  constant_mintypmax_expression: $ => seq(
    $.constant_expression,
    optional(seq(':', $.constant_expression, ':', $.constant_expression))
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
    $.number, // $.constant_expression, LOOP
    ':',
    $.constant_expression
  ),

  constant_indexed_range: $ => seq(
    $.constant_expression, choice('+:', '-:'), $.constant_expression
  ),

  expression: $ => choice( // reordered
    $.primary,
    seq($.unary_operator, repeat($.attribute_instance), $.primary),
    $.inc_or_dec_expression,
    // seq('(', $.operator_assignment, ')'),
    prec.left(seq($.expression, $.binary_operator, repeat($.attribute_instance), $.expression)),
    // $.conditional_expression,
    // $.inside_expression,
    // $.tagged_union_expression,
  ),

  tagged_union_expression: $ => seq(
    'tagged',
    $.member_identifier,
    optional($.expression)
  ),

  // inside_expression: $ => seq(
  //   $.expression, 'inside', '{', $.open_range_list, '}'
  // ),

  value_range: $ => choice(
    $.expression,
    seq('[', $.expression, ':', $.expression, ']')
  ),

  mintypmax_expression: $ => seq(
    $.expression,
    optional(seq(':', $.expression, ':', $.expression))
  ),

  module_path_conditional_expression: $ => seq(
    $.module_path_expression,
    '?',
    repeat($.attribute_instance), $.module_path_expression,
    ':',
    $.module_path_expression
  ),

  module_path_expression: $ => choice(
    $.module_path_primary,
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
    optional(seq(
      ':', $.module_path_expression,
      ':', $.module_path_expression
    ))
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

  constant_primary: $ => choice(
    $.primary_literal,
    seq(
      $.ps_parameter_identifier,
      optional($.constant_select1)
    ),
    // seq(
    //   $.specparam_identifier,
    //   optional('[', $.constant_range_expression, ']')
    // ),
    // $.genvar_identifier,
    // seq(
    //   $.formal_port_identifier,
    //   optional($.constant_select1)
    // ),
    // seq(
    //   optional(choice($.package_scope, $.class_scope)),
    //   $.enum_identifier
    // ),
    seq(
      $.constant_concatenation,
      optional(seq('[', $.constant_range_expression, ']'))
    ),
    seq(
      $.constant_multiple_concatenation,
      optional(seq('[', $.constant_range_expression, ']'))
    ),
    // $.constant_function_call,
    // $.constant_let_expression,
    seq('(', $.constant_mintypmax_expression, ')'),
    // $.constant_cast,
    // $.constant_assignment_pattern_expression,
    // $.type_reference
  ),

  module_path_primary: $ => choice(
    $.number,
    $.identifier,
    // $.module_path_concatenation,
    // $.module_path_multiple_concatenation,
    // $.function_subroutine_call,
    seq('(', $.module_path_mintypmax_expression, ')')
  ),

  primary: $ => choice(
    $.primary_literal,
    // $.identifier,
    seq(
      // optional(choice($.class_qualifier, $.package_scope)),
      $.hierarchical_identifier,
      optional($.select1)
    ),
    // $.empty_queue,
    seq($.concatenation, optional('[', $.range_expression, ']')),
    seq($.multiple_concatenation, optional('[', $.range_expression, ']')),
    // $.function_subroutine_call
    // $.let_expression
    seq('(', $.mintypmax_expression, ')'),
    // $.cast,
    // $.assignment_pattern_expression,
    // $.streaming_concatenation,
    // $.sequence_method_call,
    'this',
    // '$',
    'null'
  ),

  // class_qualifier = 'local::' ? (__ implicit_class_handle __ '.' / __ class_scope) ?
  //
  range_expression: $ => choice(
    $.expression,
    $.part_select_range
  ),
  //

  primary_literal: $ => choice(
    $.number,
    // $.time_literal,
    // $.unbased_unsized_literal,
    // $.string_literal
  ),

  //
  // time_literal: $ => unsigned_number time_unit /
  //   fixed_point_number time_unit
  //
  // time_unit = 's' / 'ms' / 'us' / 'ns' / 'ps' / 'fs'
  //
  // string_literal = '\'' [.] ? '\''
  //
  //
  // implicit_class_handle = 'this' / 'super' / 'this'
  // '.'
  // 'super'
  //



  // select1: $ => choice( // reordered -> non empty
  //   seq(
  //     repeat(seq('.', $.member_identifier, optional($.bit_select1))),
  //     '.', $.member_identifier,
  //     optional($.bit_select1),
  //     optional(seq('[', $.part_select_range, ']'))
  //   ),
  //   seq(
  //     $.bit_select1,
  //     optional(seq('[', $.part_select_range, ']'))
  //   ),
  //   seq('[', $.part_select_range, ']')
  // ),

  // bit_select1: $ => repeat1(seq( // reordered -> non empty
  //   '[', $.expression, ']')
  // ),

  select1: $ => choice( // reordered -> non empty
    seq(
      '[',
      repeat(seq($.expression, ']', '[')),
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
  //       repeat(seq('.', $.member_identifier, optional($.bit_select1))),
  //       '.', $.member_identifier
  //     ),
  //     optional($.bit_select1)
  //   ),
  //   $.bit_select1
  // ),

  constant_bit_select1: $ => repeat1(seq( // reordered -> non empty
    '[', $.constant_expression, ']')
  ),

  constant_select1: $ => choice( // reordered -> non empty
    seq(
      '[',
      repeat(seq($.constant_expression, ']', '[')),
      choice($.constant_expression, $.constant_part_select_range),
      ']'
    )
  ),

  // constant_select1: $ => choice( // reordered -> non empty
  //   // seq(
  //   //   repeat(seq('.', $.member_identifier, optional($.constant_bit_select1))),
  //   //   '.', $.member_identifier,
  //   //   optional($.constant_bit_select1),
  //   //   optional(seq('[', $.constant_part_select_range, ']'))
  //   // ),
  //   seq(
  //     $.constant_bit_select1,
  //     optional(seq('[', $.constant_part_select_range, ']'))
  //   ),
  //   seq('[', $.constant_part_select_range, ']'),
  // ),

  // constant_cast: $ => seq($.casting_type, '\'', '(', $.constant_expression, ')'),

  // constant_let_expression: $ => $.let_expression,

  // cast: $ => seq($.casting_type, '\'', '(', $.expression, ')'),

  // A.8.5 Expression left-side values

  net_lvalue: $ => choice(
    seq(
      $.ps_or_hierarchical_net_identifier,
      optional($.constant_select1)
    ),
    seq('{', sep1(',', $.net_lvalue), '}'),
    // seq(optional($.assignment_pattern_expression_type), $.assignment_pattern_net_lvalue)
  ),

  variable_lvalue: $ => choice(
    // ( implicit_class_handle __ '.' / package_scope )? ($.hierarchical_variable_identifier, $.select),
    seq('{', sep1(',', $.variable_lvalue), '}'),
    seq(optional($.assignment_pattern_expression_type), $.assignment_pattern_variable_lvalue),
    // $.streaming_concatenation
  ),

  // nonrange_variable_lvalue
  //   = ( implicit_class_handle __ '.' / package_scope )? __
  //     hierarchical_variable_identifier __ nonrange_select

  // A.8.6 Operators

  unary_operator: $ => choice(
    '~|', // !'=') /
    '~^', // !'=') /
    '~&', // !'=') /
    '^~',
    '+', // ![ += ]) /
    '-', // ![- >= ]) /
    '!', // ![ != ]) /
    '&', // ![ &= ]) /
    '|', // ![ |= ]) /
    '^', // ![ |= ]) /
    '~', // ![ | ^ &= ])
  ),


  binary_operator: $ => choice(
    '===',
    '!==',
    '==?',
    '!=?',
    '<->',
    '>>>', // !'='),
    '<<<', // !'='),
    '>>', // ![ >= ]),
    '<<', // ![ <= ]),

    '+', // ![ += ]),
    '-', // ![ -= ]),

    '*', // ![ *= ]),
    '/', // !'='),
    '%', // !'='),

    '==', // !'='),
    '!=', // !'='),
    '&&',
    '||',
    '**',
    '<=',
    '>=',
    '^~',
    '~^',
    '<', // ![ <= ]),
    '>', // ![ >= ]),
    '&', // ![ &= ]),
    '|', // ![ != ]),
    '^', // ![~ = ]),
    '->'
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

  integral_number: $ => token(/\d+/),

  // integral_number ::=
  // decimal_number
  // | octal_number
  // | binary_number
  // | hex_number

  // decimal_number ::=
  // unsigned_number
  // | [ size ] decimal_base unsigned_number
  // | [ size ] decimal_base x_digit { _ }
  // | [ size ] decimal_base z_digit { _ }
  // binary_number ::= [ size ] binary_base binary_value
  // octal_number ::= [ size ] octal_base octal_value
  // hex_number ::= [ size ] hex_base hex_value
  // sign ::= + | -
  // size ::= non_zero_unsigned_number
  // non_zero_unsigned_number ::= non_zero_decimal_digit { _ | decimal_digit}

  // real_number ::=
  // fixed_point_number
  // | unsigned_number [ . unsigned_number ] exp [ sign ] unsigned_number
  real_number: $ => token(/\d+(\.\d+)?/),

  // fixed_point_number ::= unsigned_number . unsigned_number
  // exp ::= e | E

  // unsigned_number ::= decimal_digit { _ | decimal_digit }
  unsigned_number: $ => token(/\d+/),

  // binary_value ::= binary_digit { _ | binary_digit }
  // octal_value ::= octal_digit { _ | octal_digit }
  // hex_value ::= hex_digit { _ | hex_digit }
  // decimal_base ::= '[ s|S]d | '[s|S]D
  // binary_base ::= '[s|S]b | '[s|S]B
  // octal_base ::= '[s|S]o | ' [s|S]O
  // hex_base ::= '[s|S]h | '[s|S]H
  // non_zero_decimal_digit ::= 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
  // decimal_digit ::= 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
  // binary_digit ::= x_digit | z_digit | 0 | 1
  // octal_digit ::= x_digit | z_digit | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7
  // hex_digit ::= x_digit | z_digit | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | a | b | c | d | e | f | A | B | C | D | E | F
  // x_digit ::= x | X
  // z_digit ::= z | Z | ?
  // unbased_unsized_literal ::= '0 | '1 | 'z_or_x

  /* A.9 General */

  /* A.9.1 Attributes */

  attribute_instance: $ => seq('(*', sep1(',', $.attr_spec), '*)'),

  attr_spec: $ => seq($.attr_name, optional('=', $.constant_expression)),

  attr_name: $ => $.identifier,

  /* A.9.2 Comments */

  // comment ::= one_line_comment | block_comment
  // one_line_comment ::= // comment_text \n
  // block_comment ::= /* comment_text */
  // comment_text ::= { Any_ASCII_character }

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

  block_identifier: $ => alias($.identifier, $._block_identifier),
  array_identifier: $ => alias($.identifier, $._array_identifier),
  bin_identifier: $ => alias($.identifier, $._bin_identifier),
  // c_identifier49 = [ a-zA-Z_ ] { [ a-zA-Z0-9_ ] }
  cell_identifier: $ => alias($.identifier, $._cell_identifier),
  checker_identifier: $ => alias($.identifier, $._checker_identifier),
  class_identifier: $ => alias($.identifier, $._class_identifier),
  // class_variable_identifier = variable_identifier
  clocking_identifier: $ => alias($.identifier, $._clocking_identifier),
  config_identifier: $ => alias($.identifier, $._config_identifier),
  const_identifier: $ => alias($.identifier, $._const_identifier),
  constraint_identifier: $ => alias($.identifier, $._constraint_identifier),
  covergroup_identifier: $ => alias($.identifier, $._covergroup_identifier),
  // covergroup_variable_identifier = variable_identifier
  cover_point_identifier: $ => alias($.identifier, $._cover_point_identifier),
  cross_identifier: $ => alias($.identifier, $._cross_identifier),
  dynamic_array_variable_identifier: $ => alias($.variable_identifier, $._dynamic_array_variable_identifier),
  enum_identifier: $ => alias($.identifier, $._enum_identifier),
  // escaped_identifier
  //  = \ {any_printable_ASCII_character_except_white_space} white_space
  formal_identifier: $ => alias($.identifier, $._formal_identifier),
  formal_port_identifier: $ => alias($.identifier, $._formal_port_identifier),
  function_identifier: $ => alias($.identifier, $._function_identifier),
  generate_block_identifier: $ => alias($.identifier, $._generate_block_identifier),
  genvar_identifier: $ => alias($.identifier, $._genvar_identifier),
  hierarchical_array_identifier: $ => $.hierarchical_identifier,
  hierarchical_block_identifier: $ => $.hierarchical_identifier,
  hierarchical_event_identifier: $ => $.hierarchical_identifier,

  hierarchical_identifier: $ => seq(
    // optional(seq('$root', '.')),
    // repeat1(seq($.identifier, $.constant_bit_select, '.')), // reordered : repeat -> repeat1
    // $.identifier
    $.identifier //, repeat(seq('.', $.identifier))
  ),

  hierarchical_net_identifier: $ => $.hierarchical_identifier,
  hierarchical_parameter_identifier: $ => $.hierarchical_identifier,
  hierarchical_property_identifier: $ => $.hierarchical_identifier,
  hierarchical_sequence_identifier: $ => $.hierarchical_identifier,
  hierarchical_task_identifier: $ => $.hierarchical_identifier,
  hierarchical_tf_identifier: $ => $.hierarchical_identifier,
  hierarchical_variable_identifier: $ => $.hierarchical_identifier,

  identifier: $ => choice(
    $.simple_identifier
    // $.escaped_identifier
  ),

  index_variable_identifier: $ => alias($.identifier, $._index_variable_identifier),
  interface_identifier: $ => alias($.identifier, $._interface_identifier),
  interface_instance_identifier: $ => alias($.identifier, $._interface_instance_identifier),
  inout_port_identifier: $ => alias($.identifier, $._inout_port_identifier),
  input_port_identifier: $ => alias($.identifier, $._input_port_identifier),
  instance_identifier: $ => alias($.identifier, $._instance_identifier),
  library_identifier: $ => alias($.identifier, $._library_identifier),
  member_identifier: $ => alias($.identifier, $._member_identifier),
  method_identifier: $ => alias($.identifier, $._method_identifier),
  modport_identifier: $ => alias($.identifier, $._modport_identifier),
  module_identifier: $ => alias($.identifier, $._module_identifier),
  net_identifier: $ => alias($.identifier, $._net_identifier),
  net_type_identifier: $ => alias($.identifier, $._net_type_identifier),
  output_port_identifier: $ => alias($.identifier, $._output_port_identifier),
  package_identifier: $ => alias($.identifier, $._package_identifier),

  package_scope: $ => choice(
    seq($.package_identifier, '::'),
    seq('$unit', '::')
  ),

  parameter_identifier: $ => alias($.identifier, $._parameter_identifier),
  port_identifier: $ => alias($.identifier, $._port_identifier),
  production_identifier: $ => alias($.identifier, $._production_identifier),
  program_identifier: $ => alias($.identifier, $._program_identifier),
  property_identifier: $ => alias($.identifier, $._property_identifier),

  /*
  ps_class_identifier = [ package_scope ] class_identifier
  ps_covergroup_identifier = [ package_scope ] covergroup_identifier
  ps_checker_identifier = [ package_scope ] checker_identifier
  ps_identifier = [ package_scope ] identifier
  ps_or_hierarchical_array_identifier
    = [ implicit_class_handle . | class_scope | package_scope ]
    hierarchical_array_identifier
  */

  ps_or_hierarchical_net_identifier: $ => choice(
    // seq(optional($.package_scope), $.net_identifier),
    $.hierarchical_net_identifier
  ),

  /*
  ps_or_hierarchical_property_identifier =
  [ package_scope ] property_identifier
  | hierarchical_property_identifier
  ps_or_hierarchical_sequence_identifier =
  [ package_scope ] sequence_identifier
  | hierarchical_sequence_identifier
  ps_or_hierarchical_tf_identifier =
  [ package_scope ] tf_identifier
  | hierarchical_tf_identifier
  */

  ps_parameter_identifier: $ => choice(
    // [ package_scope | class_scope ] parameter_identifier
    // | { generate_block_identifier [ [ constant_expression ] ] . }
    $.parameter_identifier
  ),

  /*
  43ps_type_identifier = [ local:: | package_scope ] type_identifier
  sequence_identifier = identifier
  signal_identifier = identifier
  */

  // simple_identifier ::= [ a-zA-Z_ ] { [ a-zA-Z0-9_$ ] }
  simple_identifier: $ => token(/[a-zA-Z_]\w*/),

  specparam_identifier: $ => alias($.identifier, $._specparam_identifier),

  // system_tf_identifier = $[ a-zA-Z0-9_$ ]{ [ a-zA-Z0-9_$ ] }

  task_identifier: $ => alias($.identifier, $._task_identifier),
  tf_identifier: $ => alias($.identifier, $._tf_identifier),
  terminal_identifier: $ => alias($.identifier, $._terminal_identifier),
  topmodule_identifier: $ => alias($.identifier, $._topmodule_identifier),
  type_identifier: $ => alias($.identifier, $._type_identifier),
  udp_identifier: $ => alias($.identifier, $._udp_identifier),
  variable_identifier: $ => alias($.identifier, $._variable_identifier),

  /* A.9.4 White space */

  // white_space ::= space | tab | newline | eof};

};

module.exports = grammar({
  name: 'verilog',
  rules: rules,
  extras: $ => [/\s/, $.comment]
});
