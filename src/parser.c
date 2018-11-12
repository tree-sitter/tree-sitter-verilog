#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 518
#define SYMBOL_COUNT 396
#define ALIAS_COUNT 6
#define TOKEN_COUNT 295
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LPAREN = 2,
  anon_sym_DOT_STAR = 3,
  anon_sym_RPAREN = 4,
  anon_sym_endmodule = 5,
  anon_sym_COLON = 6,
  anon_sym_extern = 7,
  anon_sym_module = 8,
  anon_sym_macromodule = 9,
  anon_sym_POUND = 10,
  anon_sym_COMMA = 11,
  anon_sym_input = 12,
  anon_sym_output = 13,
  anon_sym_inout = 14,
  anon_sym_ref = 15,
  anon_sym_DOT = 16,
  anon_sym_EQ = 17,
  anon_sym_0 = 18,
  anon_sym_1 = 19,
  anon_sym_2 = 20,
  anon_sym_defparam = 21,
  anon_sym_localparam = 22,
  anon_sym_type = 23,
  anon_sym_parameter = 24,
  anon_sym_specparam = 25,
  anon_sym_const = 26,
  anon_sym_var = 27,
  anon_sym_import = 28,
  anon_sym_COLON_COLON = 29,
  anon_sym_STAR = 30,
  anon_sym_export = 31,
  anon_sym_STAR_COLON_COLON_STAR = 32,
  anon_sym_vectored = 33,
  anon_sym_scalared = 34,
  anon_sym_static = 35,
  anon_sym_automatic = 36,
  anon_sym_string = 37,
  anon_sym_chandle = 38,
  anon_sym_event = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  anon_sym_byte = 42,
  anon_sym_shortint = 43,
  anon_sym_int = 44,
  anon_sym_longint = 45,
  anon_sym_integer = 46,
  anon_sym_time = 47,
  anon_sym_bit = 48,
  anon_sym_logic = 49,
  anon_sym_reg = 50,
  anon_sym_shortreal = 51,
  anon_sym_real = 52,
  anon_sym_realtime = 53,
  anon_sym_supply0 = 54,
  anon_sym_supply1 = 55,
  anon_sym_tri = 56,
  anon_sym_triand = 57,
  anon_sym_trior = 58,
  anon_sym_trireg = 59,
  anon_sym_tri0 = 60,
  anon_sym_tri1 = 61,
  anon_sym_uwire = 62,
  anon_sym_wire = 63,
  anon_sym_wand = 64,
  anon_sym_wor = 65,
  anon_sym_signed = 66,
  anon_sym_unsigned = 67,
  anon_sym_void = 68,
  anon_sym_struct = 69,
  anon_sym_union = 70,
  anon_sym_tagged = 71,
  anon_sym_highz1 = 72,
  anon_sym_highz0 = 73,
  anon_sym_strong0 = 74,
  anon_sym_pull0 = 75,
  anon_sym_weak0 = 76,
  anon_sym_strong1 = 77,
  anon_sym_pull1 = 78,
  anon_sym_weak1 = 79,
  anon_sym_small = 80,
  anon_sym_medium = 81,
  anon_sym_large = 82,
  anon_sym_1step = 83,
  anon_sym_new = 84,
  anon_sym_DOLLAR = 85,
  anon_sym_bind = 86,
  anon_sym_function = 87,
  anon_sym_PLUS = 88,
  anon_sym_PLUS_PLUS = 89,
  anon_sym_ = 90,
  anon_sym_3 = 91,
  anon_sym_STAR_STAR = 92,
  anon_sym_SLASH = 93,
  anon_sym_PERCENT = 94,
  anon_sym_EQ_EQ = 95,
  anon_sym_BANG_EQ = 96,
  anon_sym_LT = 97,
  anon_sym_LT_EQ = 98,
  anon_sym_GT = 99,
  anon_sym_GT_EQ = 100,
  anon_sym_always = 101,
  anon_sym_and = 102,
  anon_sym_assert = 103,
  anon_sym_assign = 104,
  anon_sym_begin = 105,
  anon_sym_break = 106,
  anon_sym_buf = 107,
  anon_sym_bufif0 = 108,
  anon_sym_bufif1 = 109,
  anon_sym_case = 110,
  anon_sym_casex = 111,
  anon_sym_casez = 112,
  anon_sym_clocking = 113,
  anon_sym_const_DASHin_DASHlex = 114,
  anon_sym_cmos = 115,
  anon_sym_context = 116,
  anon_sym_continue = 117,
  anon_sym_cover = 118,
  anon_sym_default = 119,
  anon_sym_disable = 120,
  anon_sym_do = 121,
  anon_sym_edge = 122,
  anon_sym_else = 123,
  anon_sym_end = 124,
  anon_sym_endcase = 125,
  anon_sym_endclocking = 126,
  anon_sym_endfunction = 127,
  anon_sym_endgenerate = 128,
  anon_sym_endpackage = 129,
  anon_sym_endprimitive = 130,
  anon_sym_endprogram = 131,
  anon_sym_endproperty = 132,
  anon_sym_endspecify = 133,
  anon_sym_endtable = 134,
  anon_sym_endtask = 135,
  anon_sym_enum = 136,
  anon_sym_final = 137,
  anon_sym_for = 138,
  anon_sym_forever = 139,
  anon_sym_generate = 140,
  anon_sym_genvar = 141,
  anon_sym_global_DASHthen_DASHclocking = 142,
  anon_sym_global_DASHin_DASHlex = 143,
  anon_sym_if = 144,
  anon_sym_iff = 145,
  anon_sym_initial = 146,
  anon_sym_nand = 147,
  anon_sym_negedge = 148,
  anon_sym_nmos = 149,
  anon_sym_nor = 150,
  anon_sym_not = 151,
  anon_sym_notif0 = 152,
  anon_sym_notif1 = 153,
  anon_sym_or = 154,
  anon_sym_package = 155,
  anon_sym_pmos = 156,
  anon_sym_posedge = 157,
  anon_sym_primitive = 158,
  anon_sym_priority = 159,
  anon_sym_program = 160,
  anon_sym_property = 161,
  anon_sym_pulldown = 162,
  anon_sym_pullup = 163,
  anon_sym_pure = 164,
  anon_sym_rcmos = 165,
  anon_sym_repeat = 166,
  anon_sym_return = 167,
  anon_sym_rnmos = 168,
  anon_sym_rpmos = 169,
  anon_sym_rtran = 170,
  anon_sym_rtranif0 = 171,
  anon_sym_rtranif1 = 172,
  anon_sym_specify = 173,
  anon_sym_table = 174,
  anon_sym_task = 175,
  anon_sym_tran = 176,
  anon_sym_tranif0 = 177,
  anon_sym_tranif1 = 178,
  anon_sym_true = 179,
  anon_sym_typedef = 180,
  anon_sym_unique = 181,
  anon_sym_unique0 = 182,
  anon_sym_while = 183,
  anon_sym_wreal = 184,
  anon_sym_xnor = 185,
  anon_sym_xor = 186,
  anon_sym_DOLLARbits = 187,
  anon_sym_DOLLARbitstoreal = 188,
  anon_sym_DOLLARc = 189,
  anon_sym_DOLLARceil = 190,
  anon_sym_DOLLARclog2 = 191,
  anon_sym_DOLLARcountones = 192,
  anon_sym_DOLLARdisplay = 193,
  anon_sym_DOLLARerror = 194,
  anon_sym_DOLLARexp = 195,
  anon_sym_DOLLARfatal = 196,
  anon_sym_DOLLARfclose = 197,
  anon_sym_DOLLARfdisplay = 198,
  anon_sym_DOLLARfeof = 199,
  anon_sym_DOLLARfflush = 200,
  anon_sym_DOLLARfgetc = 201,
  anon_sym_DOLLARfgets = 202,
  anon_sym_DOLLARfinish = 203,
  anon_sym_DOLLARfloor = 204,
  anon_sym_DOLLARfopen = 205,
  anon_sym_DOLLARfscanf = 206,
  anon_sym_DOLLARfwrite = 207,
  anon_sym_DOLLARinfo = 208,
  anon_sym_DOLLARisunknown = 209,
  anon_sym_DOLLARitor = 210,
  anon_sym_DOLLARln = 211,
  anon_sym_DOLLARlog10 = 212,
  anon_sym_DOLLARonehot = 213,
  anon_sym_DOLLARonehot0 = 214,
  anon_sym_DOLLARpow = 215,
  anon_sym_DOLLARrandom = 216,
  anon_sym_DOLLARreadmemb = 217,
  anon_sym_DOLLARreadmemh = 218,
  anon_sym_DOLLARrealtime = 219,
  anon_sym_DOLLARrealtobits = 220,
  anon_sym_DOLLARrtoi = 221,
  anon_sym_DOLLARsformat = 222,
  anon_sym_DOLLARsigned = 223,
  anon_sym_DOLLARsqrt = 224,
  anon_sym_DOLLARsscanf = 225,
  anon_sym_DOLLARstime = 226,
  anon_sym_DOLLARstop = 227,
  anon_sym_DOLLARswrite = 228,
  anon_sym_DOLLARsystem = 229,
  anon_sym_DOLLARtest_DOLLARplusargs = 230,
  anon_sym_DOLLARtime = 231,
  anon_sym_DOLLARunit = 232,
  anon_sym_DOLLARunsigned = 233,
  anon_sym_DOLLARvalue_DOLLARplusargs = 234,
  anon_sym_DOLLARwarning = 235,
  anon_sym_DOLLARwrite = 236,
  anon_sym_always_comb = 237,
  anon_sym_always_latch = 238,
  anon_sym_always_ff = 239,
  anon_sym_LT_LT_LT_EQ = 240,
  anon_sym_GT_GT_GT_EQ = 241,
  anon_sym_LT_LT_EQ = 242,
  anon_sym_GT_GT_EQ = 243,
  anon_sym_PLUS_EQ = 244,
  anon_sym_DASH_EQ = 245,
  anon_sym_STAR_EQ = 246,
  anon_sym_SLASH_EQ = 247,
  anon_sym_PERCENT_EQ = 248,
  anon_sym_AMP_EQ = 249,
  anon_sym_PIPE_EQ = 250,
  anon_sym_CARET_EQ = 251,
  anon_sym_AT_STAR = 252,
  anon_sym_AT = 253,
  anon_sym_LPAREN_STAR_RPAREN = 254,
  anon_sym_matches = 255,
  anon_sym_SQUOTE_LBRACE = 256,
  anon_sym_RBRACE = 257,
  anon_sym_POUND_POUND = 258,
  anon_sym_LBRACE = 259,
  anon_sym_QMARK = 260,
  anon_sym_PLUS_COLON = 261,
  anon_sym_DASH_COLON = 262,
  anon_sym_this = 263,
  anon_sym_null = 264,
  anon_sym_TILDE_PIPE = 265,
  anon_sym_TILDE_CARET = 266,
  anon_sym_TILDE_AMP = 267,
  anon_sym_CARET_TILDE = 268,
  anon_sym_DASH = 269,
  anon_sym_BANG = 270,
  anon_sym_AMP = 271,
  anon_sym_PIPE = 272,
  anon_sym_CARET = 273,
  anon_sym_TILDE = 274,
  anon_sym_EQ_EQ_EQ = 275,
  anon_sym_BANG_EQ_EQ = 276,
  anon_sym_EQ_EQ_QMARK = 277,
  anon_sym_BANG_EQ_QMARK = 278,
  anon_sym_LT_DASH_GT = 279,
  anon_sym_GT_GT_GT = 280,
  anon_sym_LT_LT_LT = 281,
  anon_sym_GT_GT = 282,
  anon_sym_LT_LT = 283,
  anon_sym_AMP_AMP = 284,
  anon_sym_PIPE_PIPE = 285,
  anon_sym_DASH_GT = 286,
  anon_sym_DASH_DASH = 287,
  aux_sym_SLASH_BSLASHd_PLUS_SLASH = 288,
  sym_real_number = 289,
  anon_sym_LPAREN_STAR = 290,
  anon_sym_STAR_RPAREN = 291,
  sym_comment = 292,
  anon_sym_DOLLARroot = 293,
  sym_simple_identifier = 294,
  sym_source_file = 295,
  sym__description = 296,
  sym_module_nonansi_header = 297,
  sym_module_ansi_header = 298,
  sym_module_header = 299,
  sym_module_declaration = 300,
  sym_module_keyword = 301,
  sym_parameter_port_list = 302,
  sym_list_of_ports = 303,
  sym_list_of_port_declarations = 304,
  sym_port = 305,
  sym__port_expression = 306,
  sym_port_reference = 307,
  sym_port_direction = 308,
  sym_net_port_header = 309,
  sym_ansi_port_declaration = 310,
  sym__module_common_item = 311,
  sym_module_or_generate_item = 312,
  sym__non_port_module_item = 313,
  sym_parameter_override = 314,
  sym_lifetime = 315,
  sym_data_type = 316,
  sym__data_type_or_implicit = 317,
  sym_implicit_data_type = 318,
  sym_integer_atom_type = 319,
  sym_integer_vector_type = 320,
  sym_non_integer_type = 321,
  sym_net_type = 322,
  sym_net_port_type = 323,
  sym__signing = 324,
  sym_list_of_defparam_assignments = 325,
  sym_defparam_assignment = 326,
  sym_unpacked_dimension = 327,
  sym_packed_dimension = 328,
  sym_unsized_dimension = 329,
  sym_module_instantiation = 330,
  sym_parameter_value_assignment = 331,
  sym_list_of_parameter_assignments = 332,
  sym_ordered_parameter_assignment = 333,
  sym_named_parameter_assignment = 334,
  sym_hierarchical_instance = 335,
  sym_name_of_instance = 336,
  sym_list_of_port_connections = 337,
  sym_ordered_port_connection = 338,
  sym_named_port_connection = 339,
  sym_assignment_pattern_expression_type = 340,
  sym_assignment_pattern_variable_lvalue = 341,
  sym_concatenation = 342,
  sym_constant_concatenation = 343,
  sym_constant_multiple_concatenation = 344,
  sym_multiple_concatenation = 345,
  sym_inc_or_dec_expression = 346,
  sym_constant_expression = 347,
  sym_constant_mintypmax_expression = 348,
  sym_param_expression = 349,
  sym_constant_range = 350,
  sym_expression = 351,
  sym_mintypmax_expression = 352,
  sym_constant_primary = 353,
  sym_primary = 354,
  sym_primary_literal = 355,
  sym_constant_bit_select = 356,
  sym_constant_select = 357,
  sym_variable_lvalue = 358,
  sym_unary_operator = 359,
  sym_binary_operator = 360,
  sym_inc_or_dec_operator = 361,
  sym_number = 362,
  sym_integral_number = 363,
  sym_attribute_instance = 364,
  sym_attr_spec = 365,
  sym_attr_name = 366,
  sym_hierarchical_identifier = 367,
  sym_hierarchical_parameter_identifier = 368,
  sym_identifier = 369,
  sym_instance_identifier = 370,
  sym_member_identifier = 371,
  sym_module_identifier = 372,
  sym_parameter_identifier = 373,
  sym_port_identifier = 374,
  sym_ps_parameter_identifier = 375,
  aux_sym_source_file_repeat1 = 376,
  aux_sym_module_header_repeat1 = 377,
  aux_sym_module_declaration_repeat1 = 378,
  aux_sym_list_of_ports_repeat1 = 379,
  aux_sym_list_of_port_declarations_repeat1 = 380,
  aux_sym_ansi_port_declaration_repeat1 = 381,
  aux_sym_data_type_repeat1 = 382,
  aux_sym_list_of_defparam_assignments_repeat1 = 383,
  aux_sym_module_instantiation_repeat1 = 384,
  aux_sym_list_of_parameter_assignments_repeat1 = 385,
  aux_sym_list_of_parameter_assignments_repeat2 = 386,
  aux_sym_list_of_port_connections_repeat1 = 387,
  aux_sym_list_of_port_connections_repeat2 = 388,
  aux_sym_assignment_pattern_variable_lvalue_repeat1 = 389,
  aux_sym_concatenation_repeat1 = 390,
  aux_sym_constant_concatenation_repeat1 = 391,
  aux_sym_constant_expression_repeat1 = 392,
  aux_sym_constant_select_repeat1 = 393,
  aux_sym_attribute_instance_repeat1 = 394,
  aux_sym_hierarchical_identifier_repeat1 = 395,
  alias_sym__instance_identifier = 396,
  alias_sym__member_identifier = 397,
  alias_sym__module_identifier = 398,
  alias_sym__ordered_parameter_assignment = 399,
  alias_sym__parameter_identifier = 400,
  alias_sym__port_identifier = 401,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_RPAREN] = ")",
  [anon_sym_endmodule] = "endmodule",
  [anon_sym_COLON] = ":",
  [anon_sym_extern] = "extern",
  [anon_sym_module] = "module",
  [anon_sym_macromodule] = "macromodule",
  [anon_sym_POUND] = "#",
  [anon_sym_COMMA] = ",",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_inout] = "inout",
  [anon_sym_ref] = "ref",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_defparam] = "defparam",
  [anon_sym_localparam] = "localparam",
  [anon_sym_type] = "type",
  [anon_sym_parameter] = "parameter",
  [anon_sym_specparam] = "specparam",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_import] = "import",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_STAR] = "*",
  [anon_sym_export] = "export",
  [anon_sym_STAR_COLON_COLON_STAR] = "*::*",
  [anon_sym_vectored] = "vectored",
  [anon_sym_scalared] = "scalared",
  [anon_sym_static] = "static",
  [anon_sym_automatic] = "automatic",
  [anon_sym_string] = "string",
  [anon_sym_chandle] = "chandle",
  [anon_sym_event] = "event",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_byte] = "byte",
  [anon_sym_shortint] = "shortint",
  [anon_sym_int] = "int",
  [anon_sym_longint] = "longint",
  [anon_sym_integer] = "integer",
  [anon_sym_time] = "time",
  [anon_sym_bit] = "bit",
  [anon_sym_logic] = "logic",
  [anon_sym_reg] = "reg",
  [anon_sym_shortreal] = "shortreal",
  [anon_sym_real] = "real",
  [anon_sym_realtime] = "realtime",
  [anon_sym_supply0] = "supply0",
  [anon_sym_supply1] = "supply1",
  [anon_sym_tri] = "tri",
  [anon_sym_triand] = "triand",
  [anon_sym_trior] = "trior",
  [anon_sym_trireg] = "trireg",
  [anon_sym_tri0] = "tri0",
  [anon_sym_tri1] = "tri1",
  [anon_sym_uwire] = "uwire",
  [anon_sym_wire] = "wire",
  [anon_sym_wand] = "wand",
  [anon_sym_wor] = "wor",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_void] = "void",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_tagged] = "tagged",
  [anon_sym_highz1] = "highz1",
  [anon_sym_highz0] = "highz0",
  [anon_sym_strong0] = "strong0",
  [anon_sym_pull0] = "pull0",
  [anon_sym_weak0] = "weak0",
  [anon_sym_strong1] = "strong1",
  [anon_sym_pull1] = "pull1",
  [anon_sym_weak1] = "weak1",
  [anon_sym_small] = "small",
  [anon_sym_medium] = "medium",
  [anon_sym_large] = "large",
  [anon_sym_1step] = "1step",
  [anon_sym_new] = "new",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_bind] = "bind",
  [anon_sym_function] = "function",
  [anon_sym_PLUS] = "+",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_] = "–",
  [anon_sym_3] = "––",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_always] = "always",
  [anon_sym_and] = "and",
  [anon_sym_assert] = "assert",
  [anon_sym_assign] = "assign",
  [anon_sym_begin] = "begin",
  [anon_sym_break] = "break",
  [anon_sym_buf] = "buf",
  [anon_sym_bufif0] = "bufif0",
  [anon_sym_bufif1] = "bufif1",
  [anon_sym_case] = "case",
  [anon_sym_casex] = "casex",
  [anon_sym_casez] = "casez",
  [anon_sym_clocking] = "clocking",
  [anon_sym_const_DASHin_DASHlex] = "const-in-lex",
  [anon_sym_cmos] = "cmos",
  [anon_sym_context] = "context",
  [anon_sym_continue] = "continue",
  [anon_sym_cover] = "cover",
  [anon_sym_default] = "default",
  [anon_sym_disable] = "disable",
  [anon_sym_do] = "do",
  [anon_sym_edge] = "edge",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_endcase] = "endcase",
  [anon_sym_endclocking] = "endclocking",
  [anon_sym_endfunction] = "endfunction",
  [anon_sym_endgenerate] = "endgenerate",
  [anon_sym_endpackage] = "endpackage",
  [anon_sym_endprimitive] = "endprimitive",
  [anon_sym_endprogram] = "endprogram",
  [anon_sym_endproperty] = "endproperty",
  [anon_sym_endspecify] = "endspecify",
  [anon_sym_endtable] = "endtable",
  [anon_sym_endtask] = "endtask",
  [anon_sym_enum] = "enum",
  [anon_sym_final] = "final",
  [anon_sym_for] = "for",
  [anon_sym_forever] = "forever",
  [anon_sym_generate] = "generate",
  [anon_sym_genvar] = "genvar",
  [anon_sym_global_DASHthen_DASHclocking] = "global-then-clocking",
  [anon_sym_global_DASHin_DASHlex] = "global-in-lex",
  [anon_sym_if] = "if",
  [anon_sym_iff] = "iff",
  [anon_sym_initial] = "initial",
  [anon_sym_nand] = "nand",
  [anon_sym_negedge] = "negedge",
  [anon_sym_nmos] = "nmos",
  [anon_sym_nor] = "nor",
  [anon_sym_not] = "not",
  [anon_sym_notif0] = "notif0",
  [anon_sym_notif1] = "notif1",
  [anon_sym_or] = "or",
  [anon_sym_package] = "package",
  [anon_sym_pmos] = "pmos",
  [anon_sym_posedge] = "posedge",
  [anon_sym_primitive] = "primitive",
  [anon_sym_priority] = "priority",
  [anon_sym_program] = "program",
  [anon_sym_property] = "property",
  [anon_sym_pulldown] = "pulldown",
  [anon_sym_pullup] = "pullup",
  [anon_sym_pure] = "pure",
  [anon_sym_rcmos] = "rcmos",
  [anon_sym_repeat] = "repeat",
  [anon_sym_return] = "return",
  [anon_sym_rnmos] = "rnmos",
  [anon_sym_rpmos] = "rpmos",
  [anon_sym_rtran] = "rtran",
  [anon_sym_rtranif0] = "rtranif0",
  [anon_sym_rtranif1] = "rtranif1",
  [anon_sym_specify] = "specify",
  [anon_sym_table] = "table",
  [anon_sym_task] = "task",
  [anon_sym_tran] = "tran",
  [anon_sym_tranif0] = "tranif0",
  [anon_sym_tranif1] = "tranif1",
  [anon_sym_true] = "true",
  [anon_sym_typedef] = "typedef",
  [anon_sym_unique] = "unique",
  [anon_sym_unique0] = "unique0",
  [anon_sym_while] = "while",
  [anon_sym_wreal] = "wreal",
  [anon_sym_xnor] = "xnor",
  [anon_sym_xor] = "xor",
  [anon_sym_DOLLARbits] = "$bits",
  [anon_sym_DOLLARbitstoreal] = "$bitstoreal",
  [anon_sym_DOLLARc] = "$c",
  [anon_sym_DOLLARceil] = "$ceil",
  [anon_sym_DOLLARclog2] = "$clog2",
  [anon_sym_DOLLARcountones] = "$countones",
  [anon_sym_DOLLARdisplay] = "$display",
  [anon_sym_DOLLARerror] = "$error",
  [anon_sym_DOLLARexp] = "$exp",
  [anon_sym_DOLLARfatal] = "$fatal",
  [anon_sym_DOLLARfclose] = "$fclose",
  [anon_sym_DOLLARfdisplay] = "$fdisplay",
  [anon_sym_DOLLARfeof] = "$feof",
  [anon_sym_DOLLARfflush] = "$fflush",
  [anon_sym_DOLLARfgetc] = "$fgetc",
  [anon_sym_DOLLARfgets] = "$fgets",
  [anon_sym_DOLLARfinish] = "$finish",
  [anon_sym_DOLLARfloor] = "$floor",
  [anon_sym_DOLLARfopen] = "$fopen",
  [anon_sym_DOLLARfscanf] = "$fscanf",
  [anon_sym_DOLLARfwrite] = "$fwrite",
  [anon_sym_DOLLARinfo] = "$info",
  [anon_sym_DOLLARisunknown] = "$isunknown",
  [anon_sym_DOLLARitor] = "$itor",
  [anon_sym_DOLLARln] = "$ln",
  [anon_sym_DOLLARlog10] = "$log10",
  [anon_sym_DOLLARonehot] = "$onehot",
  [anon_sym_DOLLARonehot0] = "$onehot0",
  [anon_sym_DOLLARpow] = "$pow",
  [anon_sym_DOLLARrandom] = "$random",
  [anon_sym_DOLLARreadmemb] = "$readmemb",
  [anon_sym_DOLLARreadmemh] = "$readmemh",
  [anon_sym_DOLLARrealtime] = "$realtime",
  [anon_sym_DOLLARrealtobits] = "$realtobits",
  [anon_sym_DOLLARrtoi] = "$rtoi",
  [anon_sym_DOLLARsformat] = "$sformat",
  [anon_sym_DOLLARsigned] = "$signed",
  [anon_sym_DOLLARsqrt] = "$sqrt",
  [anon_sym_DOLLARsscanf] = "$sscanf",
  [anon_sym_DOLLARstime] = "$stime",
  [anon_sym_DOLLARstop] = "$stop",
  [anon_sym_DOLLARswrite] = "$swrite",
  [anon_sym_DOLLARsystem] = "$system",
  [anon_sym_DOLLARtest_DOLLARplusargs] = "$test$plusargs",
  [anon_sym_DOLLARtime] = "$time",
  [anon_sym_DOLLARunit] = "$unit",
  [anon_sym_DOLLARunsigned] = "$unsigned",
  [anon_sym_DOLLARvalue_DOLLARplusargs] = "$value$plusargs",
  [anon_sym_DOLLARwarning] = "$warning",
  [anon_sym_DOLLARwrite] = "$write",
  [anon_sym_always_comb] = "always_comb",
  [anon_sym_always_latch] = "always_latch",
  [anon_sym_always_ff] = "always_ff",
  [anon_sym_LT_LT_LT_EQ] = "<<<=",
  [anon_sym_GT_GT_GT_EQ] = ">>>=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_AT_STAR] = "@*",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN_STAR_RPAREN] = "(*)",
  [anon_sym_matches] = "matches",
  [anon_sym_SQUOTE_LBRACE] = "'{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_LBRACE] = "{",
  [anon_sym_QMARK] = "?",
  [anon_sym_PLUS_COLON] = "+:",
  [anon_sym_DASH_COLON] = "-:",
  [anon_sym_this] = "this",
  [anon_sym_null] = "null",
  [anon_sym_TILDE_PIPE] = "~|",
  [anon_sym_TILDE_CARET] = "~^",
  [anon_sym_TILDE_AMP] = "~&",
  [anon_sym_CARET_TILDE] = "^~",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [anon_sym_EQ_EQ_QMARK] = "==?",
  [anon_sym_BANG_EQ_QMARK] = "!=?",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = "/\\d+/",
  [sym_real_number] = "real_number",
  [anon_sym_LPAREN_STAR] = "(*",
  [anon_sym_STAR_RPAREN] = "*)",
  [sym_comment] = "comment",
  [anon_sym_DOLLARroot] = "$root",
  [sym_simple_identifier] = "simple_identifier",
  [sym_source_file] = "source_file",
  [sym__description] = "_description",
  [sym_module_nonansi_header] = "module_nonansi_header",
  [sym_module_ansi_header] = "module_ansi_header",
  [sym_module_header] = "module_header",
  [sym_module_declaration] = "module_declaration",
  [sym_module_keyword] = "module_keyword",
  [sym_parameter_port_list] = "parameter_port_list",
  [sym_list_of_ports] = "list_of_ports",
  [sym_list_of_port_declarations] = "list_of_port_declarations",
  [sym_port] = "port",
  [sym__port_expression] = "_port_expression",
  [sym_port_reference] = "port_reference",
  [sym_port_direction] = "port_direction",
  [sym_net_port_header] = "net_port_header",
  [sym_ansi_port_declaration] = "ansi_port_declaration",
  [sym__module_common_item] = "_module_common_item",
  [sym_module_or_generate_item] = "module_or_generate_item",
  [sym__non_port_module_item] = "_non_port_module_item",
  [sym_parameter_override] = "parameter_override",
  [sym_lifetime] = "lifetime",
  [sym_data_type] = "data_type",
  [sym__data_type_or_implicit] = "_data_type_or_implicit",
  [sym_implicit_data_type] = "implicit_data_type",
  [sym_integer_atom_type] = "integer_atom_type",
  [sym_integer_vector_type] = "integer_vector_type",
  [sym_non_integer_type] = "non_integer_type",
  [sym_net_type] = "net_type",
  [sym_net_port_type] = "net_port_type",
  [sym__signing] = "_signing",
  [sym_list_of_defparam_assignments] = "list_of_defparam_assignments",
  [sym_defparam_assignment] = "defparam_assignment",
  [sym_unpacked_dimension] = "unpacked_dimension",
  [sym_packed_dimension] = "packed_dimension",
  [sym_unsized_dimension] = "unsized_dimension",
  [sym_module_instantiation] = "module_instantiation",
  [sym_parameter_value_assignment] = "parameter_value_assignment",
  [sym_list_of_parameter_assignments] = "list_of_parameter_assignments",
  [sym_ordered_parameter_assignment] = "ordered_parameter_assignment",
  [sym_named_parameter_assignment] = "named_parameter_assignment",
  [sym_hierarchical_instance] = "hierarchical_instance",
  [sym_name_of_instance] = "name_of_instance",
  [sym_list_of_port_connections] = "list_of_port_connections",
  [sym_ordered_port_connection] = "ordered_port_connection",
  [sym_named_port_connection] = "named_port_connection",
  [sym_assignment_pattern_expression_type] = "assignment_pattern_expression_type",
  [sym_assignment_pattern_variable_lvalue] = "assignment_pattern_variable_lvalue",
  [sym_concatenation] = "concatenation",
  [sym_constant_concatenation] = "constant_concatenation",
  [sym_constant_multiple_concatenation] = "constant_multiple_concatenation",
  [sym_multiple_concatenation] = "multiple_concatenation",
  [sym_inc_or_dec_expression] = "inc_or_dec_expression",
  [sym_constant_expression] = "constant_expression",
  [sym_constant_mintypmax_expression] = "constant_mintypmax_expression",
  [sym_param_expression] = "param_expression",
  [sym_constant_range] = "constant_range",
  [sym_expression] = "expression",
  [sym_mintypmax_expression] = "mintypmax_expression",
  [sym_constant_primary] = "constant_primary",
  [sym_primary] = "primary",
  [sym_primary_literal] = "primary_literal",
  [sym_constant_bit_select] = "constant_bit_select",
  [sym_constant_select] = "constant_select",
  [sym_variable_lvalue] = "variable_lvalue",
  [sym_unary_operator] = "unary_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_inc_or_dec_operator] = "inc_or_dec_operator",
  [sym_number] = "number",
  [sym_integral_number] = "integral_number",
  [sym_attribute_instance] = "attribute_instance",
  [sym_attr_spec] = "attr_spec",
  [sym_attr_name] = "attr_name",
  [sym_hierarchical_identifier] = "hierarchical_identifier",
  [sym_hierarchical_parameter_identifier] = "hierarchical_parameter_identifier",
  [sym_identifier] = "identifier",
  [sym_instance_identifier] = "instance_identifier",
  [sym_member_identifier] = "member_identifier",
  [sym_module_identifier] = "module_identifier",
  [sym_parameter_identifier] = "parameter_identifier",
  [sym_port_identifier] = "port_identifier",
  [sym_ps_parameter_identifier] = "ps_parameter_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_header_repeat1] = "module_header_repeat1",
  [aux_sym_module_declaration_repeat1] = "module_declaration_repeat1",
  [aux_sym_list_of_ports_repeat1] = "list_of_ports_repeat1",
  [aux_sym_list_of_port_declarations_repeat1] = "list_of_port_declarations_repeat1",
  [aux_sym_ansi_port_declaration_repeat1] = "ansi_port_declaration_repeat1",
  [aux_sym_data_type_repeat1] = "data_type_repeat1",
  [aux_sym_list_of_defparam_assignments_repeat1] = "list_of_defparam_assignments_repeat1",
  [aux_sym_module_instantiation_repeat1] = "module_instantiation_repeat1",
  [aux_sym_list_of_parameter_assignments_repeat1] = "list_of_parameter_assignments_repeat1",
  [aux_sym_list_of_parameter_assignments_repeat2] = "list_of_parameter_assignments_repeat2",
  [aux_sym_list_of_port_connections_repeat1] = "list_of_port_connections_repeat1",
  [aux_sym_list_of_port_connections_repeat2] = "list_of_port_connections_repeat2",
  [aux_sym_assignment_pattern_variable_lvalue_repeat1] = "assignment_pattern_variable_lvalue_repeat1",
  [aux_sym_concatenation_repeat1] = "concatenation_repeat1",
  [aux_sym_constant_concatenation_repeat1] = "constant_concatenation_repeat1",
  [aux_sym_constant_expression_repeat1] = "constant_expression_repeat1",
  [aux_sym_constant_select_repeat1] = "constant_select_repeat1",
  [aux_sym_attribute_instance_repeat1] = "attribute_instance_repeat1",
  [aux_sym_hierarchical_identifier_repeat1] = "hierarchical_identifier_repeat1",
  [alias_sym__instance_identifier] = "_instance_identifier",
  [alias_sym__member_identifier] = "_member_identifier",
  [alias_sym__module_identifier] = "_module_identifier",
  [alias_sym__ordered_parameter_assignment] = "_ordered_parameter_assignment",
  [alias_sym__parameter_identifier] = "_parameter_identifier",
  [alias_sym__port_identifier] = "_port_identifier",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macromodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_localparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_specparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_COLON_COLON_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vectored] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scalared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_automatic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chandle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shortint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shortreal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_realtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_supply0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_supply1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_triand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trior] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trireg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tri0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tri1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uwire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tagged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_highz1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_highz0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strong0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pull0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strong1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pull1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_small] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_medium] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_large] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1step] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bufif0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bufif1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_casex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_casez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clocking] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_DASHin_DASHlex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endclocking] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endgenerate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endprimitive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endproperty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endspecify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forever] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_genvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global_DASHthen_DASHclocking] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global_DASHin_DASHlex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_negedge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nmos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notif0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notif1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_posedge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primitive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priority] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_program] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pulldown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pullup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rcmos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rnmos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpmos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rtran] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rtranif0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rtranif1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_specify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_task] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tran] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tranif0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tranif1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unique0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wreal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xnor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARbits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARbitstoreal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARceil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARclog2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARcountones] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARdisplay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARexp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfatal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfclose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfdisplay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfflush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfgetc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfgets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfinish] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfloor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfopen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfscanf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARinfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARisunknown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARitor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARln] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARlog10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARonehot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARonehot0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARpow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARrandom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARreadmemb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARreadmemh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARrealtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARrealtobits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARrtoi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARsformat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARsqrt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARsscanf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARstime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARstop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARswrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARsystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARtest_DOLLARplusargs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARunit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARunsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARvalue_DOLLARplusargs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARwarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always_comb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always_latch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always_ff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_real_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLARroot] = {
    .visible = true,
    .named = false,
  },
  [sym_simple_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__description] = {
    .visible = false,
    .named = true,
  },
  [sym_module_nonansi_header] = {
    .visible = true,
    .named = true,
  },
  [sym_module_ansi_header] = {
    .visible = true,
    .named = true,
  },
  [sym_module_header] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_port_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_ports] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_port_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym__port_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_port_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_port_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_net_port_header] = {
    .visible = true,
    .named = true,
  },
  [sym_ansi_port_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__module_common_item] = {
    .visible = false,
    .named = true,
  },
  [sym_module_or_generate_item] = {
    .visible = true,
    .named = true,
  },
  [sym__non_port_module_item] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_override] = {
    .visible = true,
    .named = true,
  },
  [sym_lifetime] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym__data_type_or_implicit] = {
    .visible = false,
    .named = true,
  },
  [sym_implicit_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_atom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_vector_type] = {
    .visible = true,
    .named = true,
  },
  [sym_non_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_net_type] = {
    .visible = true,
    .named = true,
  },
  [sym_net_port_type] = {
    .visible = true,
    .named = true,
  },
  [sym__signing] = {
    .visible = false,
    .named = true,
  },
  [sym_list_of_defparam_assignments] = {
    .visible = true,
    .named = true,
  },
  [sym_defparam_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_unpacked_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_packed_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_unsized_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_module_instantiation] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_value_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_parameter_assignments] = {
    .visible = true,
    .named = true,
  },
  [sym_ordered_parameter_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_named_parameter_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_hierarchical_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_name_of_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_port_connections] = {
    .visible = true,
    .named = true,
  },
  [sym_ordered_port_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_named_port_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_pattern_expression_type] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_pattern_variable_lvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_multiple_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_multiple_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_inc_or_dec_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_mintypmax_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_param_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_range] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_mintypmax_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_bit_select] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_select] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_lvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_inc_or_dec_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_integral_number] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_name] = {
    .visible = true,
    .named = true,
  },
  [sym_hierarchical_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_hierarchical_parameter_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_member_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_port_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_ps_parameter_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_ports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_port_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ansi_port_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_defparam_assignments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_instantiation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_parameter_assignments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_parameter_assignments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_port_connections_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_port_connections_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_pattern_variable_lvalue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_select_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hierarchical_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym__instance_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym__member_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym__module_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym__ordered_parameter_assignment] = {
    .visible = true,
    .named = true,
  },
  [alias_sym__parameter_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym__port_identifier] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym__module_identifier,
  },
  [2] = {
    [0] = alias_sym__port_identifier,
  },
  [3] = {
    [0] = alias_sym__parameter_identifier,
  },
  [4] = {
    [0] = alias_sym__instance_identifier,
  },
  [5] = {
    [0] = alias_sym__member_identifier,
  },
  [6] = {
    [0] = alias_sym__ordered_parameter_assignment,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '%')
        ADVANCE(250);
      if (lookahead == '&')
        ADVANCE(252);
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(257);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '*')
        ADVANCE(261);
      if (lookahead == '+')
        ADVANCE(268);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(273);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == '/')
        ADVANCE(280);
      if (lookahead == '0')
        ADVANCE(286);
      if (lookahead == '1')
        ADVANCE(290);
      if (lookahead == '2')
        ADVANCE(295);
      if (lookahead == ':')
        ADVANCE(296);
      if (lookahead == ';')
        ADVANCE(298);
      if (lookahead == '<')
        ADVANCE(299);
      if (lookahead == '=')
        ADVANCE(307);
      if (lookahead == '>')
        ADVANCE(311);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '@')
        ADVANCE(318);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(321);
      if (lookahead == '^')
        ADVANCE(322);
      if (lookahead == 'a')
        ADVANCE(325);
      if (lookahead == 'b')
        ADVANCE(362);
      if (lookahead == 'c')
        ADVANCE(384);
      if (lookahead == 'd')
        ADVANCE(428);
      if (lookahead == 'e')
        ADVANCE(447);
      if (lookahead == 'f')
        ADVANCE(543);
      if (lookahead == 'g')
        ADVANCE(561);
      if (lookahead == 'h')
        ADVANCE(597);
      if (lookahead == 'i')
        ADVANCE(604);
      if (lookahead == 'l')
        ADVANCE(629);
      if (lookahead == 'm')
        ADVANCE(651);
      if (lookahead == 'n')
        ADVANCE(677);
      if (lookahead == 'o')
        ADVANCE(701);
      if (lookahead == 'p')
        ADVANCE(708);
      if (lookahead == 'r')
        ADVANCE(767);
      if (lookahead == 's')
        ADVANCE(805);
      if (lookahead == 't')
        ADVANCE(868);
      if (lookahead == 'u')
        ADVANCE(911);
      if (lookahead == 'v')
        ADVANCE(930);
      if (lookahead == 'w')
        ADVANCE(943);
      if (lookahead == 'x')
        ADVANCE(965);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(972);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '~')
        ADVANCE(976);
      if (lookahead == 8211)
        ADVANCE(980);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('3' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '?')
        ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_QMARK);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == 'b')
        ADVANCE(9);
      if (lookahead == 'c')
        ADVANCE(19);
      if (lookahead == 'd')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(42);
      if (lookahead == 'f')
        ADVANCE(49);
      if (lookahead == 'i')
        ADVANCE(102);
      if (lookahead == 'l')
        ADVANCE(117);
      if (lookahead == 'o')
        ADVANCE(123);
      if (lookahead == 'p')
        ADVANCE(130);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 's')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(199);
      if (lookahead == 'u')
        ADVANCE(215);
      if (lookahead == 'v')
        ADVANCE(225);
      if (lookahead == 'w')
        ADVANCE(239);
      END_STATE();
    case 9:
      if (lookahead == 'i')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 's')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOLLARbits);
      if (lookahead == 't')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'o')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'r')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'e')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'a')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'l')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOLLARbitstoreal);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOLLARc);
      if (lookahead == 'e')
        ADVANCE(20);
      if (lookahead == 'l')
        ADVANCE(23);
      if (lookahead == 'o')
        ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'i')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'l')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOLLARceil);
      END_STATE();
    case 23:
      if (lookahead == 'o')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'g')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '2')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOLLARclog2);
      END_STATE();
    case 27:
      if (lookahead == 'u')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'n')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 't')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'o')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'n')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'e')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 's')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOLLARcountones);
      END_STATE();
    case 35:
      if (lookahead == 'i')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 's')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'p')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'l')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'a')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'y')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOLLARdisplay);
      END_STATE();
    case 42:
      if (lookahead == 'r')
        ADVANCE(43);
      if (lookahead == 'x')
        ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'r')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'o')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'r')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOLLARerror);
      END_STATE();
    case 47:
      if (lookahead == 'p')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOLLARexp);
      END_STATE();
    case 49:
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'c')
        ADVANCE(54);
      if (lookahead == 'd')
        ADVANCE(59);
      if (lookahead == 'e')
        ADVANCE(66);
      if (lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(79);
      if (lookahead == 'l')
        ADVANCE(84);
      if (lookahead == 'o')
        ADVANCE(88);
      if (lookahead == 's')
        ADVANCE(92);
      if (lookahead == 'w')
        ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 't')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'l')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOLLARfatal);
      END_STATE();
    case 54:
      if (lookahead == 'l')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'o')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 's')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOLLARfclose);
      END_STATE();
    case 59:
      if (lookahead == 'i')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 's')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'p')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'l')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'a')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'y')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOLLARfdisplay);
      END_STATE();
    case 66:
      if (lookahead == 'o')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'f')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLARfeof);
      END_STATE();
    case 69:
      if (lookahead == 'l')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'u')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 's')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'h')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOLLARfflush);
      END_STATE();
    case 74:
      if (lookahead == 'e')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'c')
        ADVANCE(77);
      if (lookahead == 's')
        ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOLLARfgetc);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOLLARfgets);
      END_STATE();
    case 79:
      if (lookahead == 'n')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'i')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 's')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'h')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOLLARfinish);
      END_STATE();
    case 84:
      if (lookahead == 'o')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'o')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'r')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOLLARfloor);
      END_STATE();
    case 88:
      if (lookahead == 'p')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'e')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'n')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOLLARfopen);
      END_STATE();
    case 92:
      if (lookahead == 'c')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'a')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'n')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'f')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOLLARfscanf);
      END_STATE();
    case 97:
      if (lookahead == 'r')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'i')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 't')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'e')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOLLARfwrite);
      END_STATE();
    case 102:
      if (lookahead == 'n')
        ADVANCE(103);
      if (lookahead == 's')
        ADVANCE(106);
      if (lookahead == 't')
        ADVANCE(114);
      END_STATE();
    case 103:
      if (lookahead == 'f')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'o')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOLLARinfo);
      END_STATE();
    case 106:
      if (lookahead == 'u')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'n')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'k')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'n')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'o')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'w')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'n')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOLLARisunknown);
      END_STATE();
    case 114:
      if (lookahead == 'o')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOLLARitor);
      END_STATE();
    case 117:
      if (lookahead == 'n')
        ADVANCE(118);
      if (lookahead == 'o')
        ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOLLARln);
      END_STATE();
    case 119:
      if (lookahead == 'g')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == '1')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == '0')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOLLARlog10);
      END_STATE();
    case 123:
      if (lookahead == 'n')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'h')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'o')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 't')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOLLARonehot);
      if (lookahead == '0')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOLLARonehot0);
      END_STATE();
    case 130:
      if (lookahead == 'o')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'w')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOLLARpow);
      END_STATE();
    case 133:
      if (lookahead == 'a')
        ADVANCE(134);
      if (lookahead == 'e')
        ADVANCE(139);
      if (lookahead == 'o')
        ADVANCE(157);
      if (lookahead == 't')
        ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'n')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'd')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'm')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOLLARrandom);
      END_STATE();
    case 139:
      if (lookahead == 'a')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'd')
        ADVANCE(141);
      if (lookahead == 'l')
        ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 'm')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'e')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'm')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'b')
        ADVANCE(145);
      if (lookahead == 'h')
        ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOLLARreadmemb);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOLLARreadmemh);
      END_STATE();
    case 147:
      if (lookahead == 't')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'i')
        ADVANCE(149);
      if (lookahead == 'o')
        ADVANCE(152);
      END_STATE();
    case 149:
      if (lookahead == 'm')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'e')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOLLARrealtime);
      END_STATE();
    case 152:
      if (lookahead == 'b')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'i')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 't')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 's')
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOLLARrealtobits);
      END_STATE();
    case 157:
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 't')
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOLLARroot);
      END_STATE();
    case 160:
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'i')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOLLARrtoi);
      END_STATE();
    case 163:
      if (lookahead == 'f')
        ADVANCE(164);
      if (lookahead == 'i')
        ADVANCE(170);
      if (lookahead == 'q')
        ADVANCE(175);
      if (lookahead == 's')
        ADVANCE(178);
      if (lookahead == 't')
        ADVANCE(183);
      if (lookahead == 'w')
        ADVANCE(189);
      if (lookahead == 'y')
        ADVANCE(194);
      END_STATE();
    case 164:
      if (lookahead == 'o')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'r')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'm')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'a')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 't')
        ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOLLARsformat);
      END_STATE();
    case 170:
      if (lookahead == 'g')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'n')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'e')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'd')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOLLARsigned);
      END_STATE();
    case 175:
      if (lookahead == 'r')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOLLARsqrt);
      END_STATE();
    case 178:
      if (lookahead == 'c')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'a')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'n')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'f')
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOLLARsscanf);
      END_STATE();
    case 183:
      if (lookahead == 'i')
        ADVANCE(184);
      if (lookahead == 'o')
        ADVANCE(187);
      END_STATE();
    case 184:
      if (lookahead == 'm')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'e')
        ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOLLARstime);
      END_STATE();
    case 187:
      if (lookahead == 'p')
        ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOLLARstop);
      END_STATE();
    case 189:
      if (lookahead == 'r')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'i')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 't')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOLLARswrite);
      END_STATE();
    case 194:
      if (lookahead == 's')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 't')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'e')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'm')
        ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOLLARsystem);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(200);
      if (lookahead == 'i')
        ADVANCE(212);
      END_STATE();
    case 200:
      if (lookahead == 's')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 't')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == '$')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'p')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'l')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'u')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 's')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'a')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'r')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'g')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 's')
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOLLARtest_DOLLARplusargs);
      END_STATE();
    case 212:
      if (lookahead == 'm')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'e')
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOLLARtime);
      END_STATE();
    case 215:
      if (lookahead == 'n')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 's')
        ADVANCE(219);
      END_STATE();
    case 217:
      if (lookahead == 't')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DOLLARunit);
      END_STATE();
    case 219:
      if (lookahead == 'i')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'g')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'n')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'd')
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOLLARunsigned);
      END_STATE();
    case 225:
      if (lookahead == 'a')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'l')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'u')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'e')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == '$')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'p')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'l')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'u')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 's')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'a')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'r')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'g')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 's')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DOLLARvalue_DOLLARplusargs);
      END_STATE();
    case 239:
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead == 'r')
        ADVANCE(246);
      END_STATE();
    case 240:
      if (lookahead == 'r')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'n')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'i')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'n')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'g')
        ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DOLLARwarning);
      END_STATE();
    case 246:
      if (lookahead == 'i')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 't')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'e')
        ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DOLLARwrite);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(253);
      if (lookahead == '=')
        ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 255:
      if (lookahead == '{')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*')
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      if (lookahead == ')')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')')
        ADVANCE(262);
      if (lookahead == '*')
        ADVANCE(263);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 264:
      if (lookahead == ':')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == '*')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_STAR_COLON_COLON_STAR);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(269);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_PLUS_COLON);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == ':')
        ADVANCE(275);
      if (lookahead == '=')
        ADVANCE(276);
      if (lookahead == '>')
        ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DASH_COLON);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*')
        ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(285);
      END_STATE();
    case 281:
      if (lookahead == '*')
        ADVANCE(282);
      if (lookahead != 0)
        ADVANCE(281);
      END_STATE();
    case 282:
      if (lookahead == '*')
        ADVANCE(282);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead != 0)
        ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_real_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.')
        ADVANCE(287);
      if (lookahead == 's')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      END_STATE();
    case 291:
      if (lookahead == 't')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'e')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'p')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_1step);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '.')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(300);
      if (lookahead == '<')
        ADVANCE(302);
      if (lookahead == '=')
        ADVANCE(306);
      END_STATE();
    case 300:
      if (lookahead == '>')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<')
        ADVANCE(303);
      if (lookahead == '=')
        ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      if (lookahead == '=')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_EQ);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(309);
      if (lookahead == '?')
        ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_QMARK);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(312);
      if (lookahead == '>')
        ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(314);
      if (lookahead == '>')
        ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '*')
        ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(323);
      if (lookahead == '~')
        ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_CARET_TILDE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 's')
        ADVANCE(346);
      if (lookahead == 'u')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'w')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'y')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '_')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(332);
      if (lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'l')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'b')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_always_comb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_always_ff);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_always_latch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(348);
      if (lookahead == 'i')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_assign);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_automatic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(363);
      if (lookahead == 'i')
        ADVANCE(367);
      if (lookahead == 'r')
        ADVANCE(371);
      if (lookahead == 'u')
        ADVANCE(375);
      if (lookahead == 'y')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 't')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_bind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_buf);
      if (lookahead == 'i')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '0')
        ADVANCE(379);
      if (lookahead == '1')
        ADVANCE(380);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_bufif0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_bufif1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(385);
      if (lookahead == 'h')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(396);
      if (lookahead == 'm')
        ADVANCE(403);
      if (lookahead == 'o')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == 'x')
        ADVANCE(388);
      if (lookahead == 'z')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(336);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_casex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_casez);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_chandle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_clocking);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_cmos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(407);
      if (lookahead == 'v')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(408);
      if (lookahead == 't')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '-')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 410:
      if (lookahead == 'i')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'n')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == '-')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'l')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'e')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'x')
        ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_const_DASHin_DASHlex);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(418);
      if (lookahead == 'i')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'x')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_context);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_cover);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(429);
      if (lookahead == 'i')
        ADVANCE(440);
      if (lookahead == 'o')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(431);
      if (lookahead == 'p')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_defparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'b')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_disable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(448);
      if (lookahead == 'l')
        ADVANCE(451);
      if (lookahead == 'n')
        ADVANCE(454);
      if (lookahead == 'v')
        ADVANCE(530);
      if (lookahead == 'x')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_edge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(455);
      if (lookahead == 'u')
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'c')
        ADVANCE(456);
      if (lookahead == 'f')
        ADVANCE(467);
      if (lookahead == 'g')
        ADVANCE(475);
      if (lookahead == 'm')
        ADVANCE(483);
      if (lookahead == 'p')
        ADVANCE(489);
      if (lookahead == 's')
        ADVANCE(514);
      if (lookahead == 't')
        ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(457);
      if (lookahead == 'l')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_endcase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_endclocking);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_endfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_endgenerate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_endmodule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(490);
      if (lookahead == 'r')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_endpackage);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(497);
      if (lookahead == 'o')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'v')
        ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_endprimitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(505);
      if (lookahead == 'p')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_endprogram);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'y')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_endproperty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'y')
        ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_endspecify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'b')
        ADVANCE(523);
      if (lookahead == 's')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_endtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k')
        ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_endtask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_event);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(535);
      if (lookahead == 't')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(544);
      if (lookahead == 'o')
        ADVANCE(548);
      if (lookahead == 'u')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'v')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_forever);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(562);
      if (lookahead == 'l')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(564);
      if (lookahead == 'v')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_generate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_genvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'b')
        ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '-')
        ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 577:
      if (lookahead == 'i')
        ADVANCE(578);
      if (lookahead == 't')
        ADVANCE(584);
      END_STATE();
    case 578:
      if (lookahead == 'n')
        ADVANCE(579);
      END_STATE();
    case 579:
      if (lookahead == '-')
        ADVANCE(580);
      END_STATE();
    case 580:
      if (lookahead == 'l')
        ADVANCE(581);
      END_STATE();
    case 581:
      if (lookahead == 'e')
        ADVANCE(582);
      END_STATE();
    case 582:
      if (lookahead == 'x')
        ADVANCE(583);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_global_DASHin_DASHlex);
      END_STATE();
    case 584:
      if (lookahead == 'h')
        ADVANCE(585);
      END_STATE();
    case 585:
      if (lookahead == 'e')
        ADVANCE(586);
      END_STATE();
    case 586:
      if (lookahead == 'n')
        ADVANCE(587);
      END_STATE();
    case 587:
      if (lookahead == '-')
        ADVANCE(588);
      END_STATE();
    case 588:
      if (lookahead == 'c')
        ADVANCE(589);
      END_STATE();
    case 589:
      if (lookahead == 'l')
        ADVANCE(590);
      END_STATE();
    case 590:
      if (lookahead == 'o')
        ADVANCE(591);
      END_STATE();
    case 591:
      if (lookahead == 'c')
        ADVANCE(592);
      END_STATE();
    case 592:
      if (lookahead == 'k')
        ADVANCE(593);
      END_STATE();
    case 593:
      if (lookahead == 'i')
        ADVANCE(594);
      END_STATE();
    case 594:
      if (lookahead == 'n')
        ADVANCE(595);
      END_STATE();
    case 595:
      if (lookahead == 'g')
        ADVANCE(596);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_global_DASHthen_DASHclocking);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'z')
        ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(336);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '0')
        ADVANCE(602);
      if (lookahead == '1')
        ADVANCE(603);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_highz0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_highz1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(605);
      if (lookahead == 'm')
        ADVANCE(607);
      if (lookahead == 'n')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'f')
        ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_iff);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(613);
      if (lookahead == 'o')
        ADVANCE(618);
      if (lookahead == 'p')
        ADVANCE(621);
      if (lookahead == 't')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_initial);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_inout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_input);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(630);
      if (lookahead == 'o')
        ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_large);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(635);
      if (lookahead == 'g')
        ADVANCE(643);
      if (lookahead == 'n')
        ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_localparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_logic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_longint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(652);
      if (lookahead == 'e')
        ADVANCE(667);
      if (lookahead == 'o')
        ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(653);
      if (lookahead == 't')
        ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_macromodule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_matches);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_medium);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(678);
      if (lookahead == 'e')
        ADVANCE(681);
      if (lookahead == 'm')
        ADVANCE(688);
      if (lookahead == 'o')
        ADVANCE(691);
      if (lookahead == 'u')
        ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_nand);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(682);
      if (lookahead == 'w')
        ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_negedge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_nmos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(692);
      if (lookahead == 't')
        ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_nor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'i')
        ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '0')
        ADVANCE(696);
      if (lookahead == '1')
        ADVANCE(697);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_notif0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_notif1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(702);
      if (lookahead == 'u')
        ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(709);
      if (lookahead == 'm')
        ADVANCE(722);
      if (lookahead == 'o')
        ADVANCE(725);
      if (lookahead == 'r')
        ADVANCE(731);
      if (lookahead == 'u')
        ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(710);
      if (lookahead == 'r')
        ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k')
        ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_pmos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_posedge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(732);
      if (lookahead == 'o')
        ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(733);
      if (lookahead == 'o')
        ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'v')
        ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_primitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'y')
        ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_priority);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(745);
      if (lookahead == 'p')
        ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_program);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'y')
        ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_property);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(755);
      if (lookahead == 'r')
        ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '0')
        ADVANCE(757);
      if (lookahead == '1')
        ADVANCE(758);
      if (lookahead == 'd')
        ADVANCE(759);
      if (lookahead == 'u')
        ADVANCE(763);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_pull0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_pull1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'w')
        ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_pulldown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_pullup);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_pure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(768);
      if (lookahead == 'e')
        ADVANCE(772);
      if (lookahead == 'n')
        ADVANCE(789);
      if (lookahead == 'p')
        ADVANCE(793);
      if (lookahead == 't')
        ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_rcmos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(773);
      if (lookahead == 'f')
        ADVANCE(779);
      if (lookahead == 'g')
        ADVANCE(780);
      if (lookahead == 'p')
        ADVANCE(781);
      if (lookahead == 't')
        ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == 't')
        ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_realtime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_rnmos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_rpmos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_rtran);
      if (lookahead == 'i')
        ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '0')
        ADVANCE(803);
      if (lookahead == '1')
        ADVANCE(804);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_rtranif0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_rtranif1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(806);
      if (lookahead == 'h')
        ADVANCE(813);
      if (lookahead == 'i')
        ADVANCE(824);
      if (lookahead == 'm')
        ADVANCE(829);
      if (lookahead == 'p')
        ADVANCE(833);
      if (lookahead == 't')
        ADVANCE(844);
      if (lookahead == 'u')
        ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_scalared);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(817);
      if (lookahead == 'r')
        ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_shortint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_shortreal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_signed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_small);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(836);
      if (lookahead == 'p')
        ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'y')
        ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_specify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_specparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(845);
      if (lookahead == 'r')
        ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(850);
      if (lookahead == 'o')
        ADVANCE(853);
      if (lookahead == 'u')
        ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '0')
        ADVANCE(856);
      if (lookahead == '1')
        ADVANCE(857);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_strong0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_strong1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'y')
        ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '0')
        ADVANCE(866);
      if (lookahead == '1')
        ADVANCE(867);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_supply0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_supply1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(869);
      if (lookahead == 'h')
        ADVANCE(879);
      if (lookahead == 'i')
        ADVANCE(882);
      if (lookahead == 'r')
        ADVANCE(885);
      if (lookahead == 'y')
        ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'b')
        ADVANCE(870);
      if (lookahead == 'g')
        ADVANCE(873);
      if (lookahead == 's')
        ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_tagged);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k')
        ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_task);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_time);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(886);
      if (lookahead == 'i')
        ADVANCE(892);
      if (lookahead == 'u')
        ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_tran);
      if (lookahead == 'i')
        ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '0')
        ADVANCE(890);
      if (lookahead == '1')
        ADVANCE(891);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_tranif0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_tranif1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_tri);
      if (lookahead == '0')
        ADVANCE(893);
      if (lookahead == '1')
        ADVANCE(894);
      if (lookahead == 'a')
        ADVANCE(895);
      if (lookahead == 'o')
        ADVANCE(898);
      if (lookahead == 'r')
        ADVANCE(900);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_tri0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_tri1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_triand);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_trior);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_trireg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == 'd')
        ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(912);
      if (lookahead == 'w')
        ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(913);
      if (lookahead == 's')
        ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(914);
      if (lookahead == 'q')
        ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_unique);
      if (lookahead == '0')
        ADVANCE(919);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_unique0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_uwire);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(931);
      if (lookahead == 'e')
        ADVANCE(933);
      if (lookahead == 'o')
        ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_vectored);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(944);
      if (lookahead == 'e')
        ADVANCE(947);
      if (lookahead == 'h')
        ADVANCE(952);
      if (lookahead == 'i')
        ADVANCE(956);
      if (lookahead == 'o')
        ADVANCE(959);
      if (lookahead == 'r')
        ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_wand);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'k')
        ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == '0')
        ADVANCE(950);
      if (lookahead == '1')
        ADVANCE(951);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_weak0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_weak1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_wire);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_wor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'l')
        ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_wreal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(966);
      if (lookahead == 'o')
        ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_xnor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(973);
      if (lookahead == '|')
        ADVANCE(974);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '&')
        ADVANCE(977);
      if (lookahead == '^')
        ADVANCE(978);
      if (lookahead == '|')
        ADVANCE(979);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_TILDE_AMP);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_TILDE_CARET);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_TILDE_PIPE);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 8211)
        ADVANCE(981);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 982:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == 'e')
        ADVANCE(985);
      if (lookahead == 'm')
        ADVANCE(991);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(982);
      END_STATE();
    case 983:
      if (lookahead == '*')
        ADVANCE(984);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 985:
      if (lookahead == 'x')
        ADVANCE(986);
      END_STATE();
    case 986:
      if (lookahead == 't')
        ADVANCE(987);
      END_STATE();
    case 987:
      if (lookahead == 'e')
        ADVANCE(988);
      END_STATE();
    case 988:
      if (lookahead == 'r')
        ADVANCE(989);
      END_STATE();
    case 989:
      if (lookahead == 'n')
        ADVANCE(990);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 991:
      if (lookahead == 'a')
        ADVANCE(992);
      if (lookahead == 'o')
        ADVANCE(1002);
      END_STATE();
    case 992:
      if (lookahead == 'c')
        ADVANCE(993);
      END_STATE();
    case 993:
      if (lookahead == 'r')
        ADVANCE(994);
      END_STATE();
    case 994:
      if (lookahead == 'o')
        ADVANCE(995);
      END_STATE();
    case 995:
      if (lookahead == 'm')
        ADVANCE(996);
      END_STATE();
    case 996:
      if (lookahead == 'o')
        ADVANCE(997);
      END_STATE();
    case 997:
      if (lookahead == 'd')
        ADVANCE(998);
      END_STATE();
    case 998:
      if (lookahead == 'u')
        ADVANCE(999);
      END_STATE();
    case 999:
      if (lookahead == 'l')
        ADVANCE(1000);
      END_STATE();
    case 1000:
      if (lookahead == 'e')
        ADVANCE(1001);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_macromodule);
      END_STATE();
    case 1002:
      if (lookahead == 'd')
        ADVANCE(1003);
      END_STATE();
    case 1003:
      if (lookahead == 'u')
        ADVANCE(1004);
      END_STATE();
    case 1004:
      if (lookahead == 'l')
        ADVANCE(1005);
      END_STATE();
    case 1005:
      if (lookahead == 'e')
        ADVANCE(1006);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 1007:
      if (lookahead == 'a')
        ADVANCE(1008);
      if (lookahead == 's')
        ADVANCE(1009);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1007);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1011:
      if (lookahead == '#')
        ADVANCE(1012);
      if (lookahead == '(')
        ADVANCE(1013);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1011);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1014:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1014);
      END_STATE();
    case 1015:
      if (lookahead == '#')
        ADVANCE(1012);
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(1013);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '*')
        ADVANCE(1016);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '.')
        ADVANCE(1017);
      if (lookahead == '=')
        ADVANCE(1018);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1015);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1016:
      if (lookahead == ')')
        ADVANCE(262);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1019:
      if (lookahead == '*')
        ADVANCE(1016);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(1018);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1019);
      END_STATE();
    case 1020:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(1021);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 'b')
        ADVANCE(1022);
      if (lookahead == 'c')
        ADVANCE(1024);
      if (lookahead == 'e')
        ADVANCE(1025);
      if (lookahead == 'i')
        ADVANCE(1026);
      if (lookahead == 'l')
        ADVANCE(1028);
      if (lookahead == 'o')
        ADVANCE(1030);
      if (lookahead == 'r')
        ADVANCE(1031);
      if (lookahead == 's')
        ADVANCE(1033);
      if (lookahead == 't')
        ADVANCE(1036);
      if (lookahead == 'u')
        ADVANCE(1038);
      if (lookahead == 'w')
        ADVANCE(1040);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1020);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1021:
      if (lookahead == '*')
        ADVANCE(279);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(1023);
      if (lookahead == 'y')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'v')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(618);
      if (lookahead == 'p')
        ADVANCE(621);
      if (lookahead == 't')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'g')
        ADVANCE(643);
      if (lookahead == 'n')
        ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(773);
      if (lookahead == 'f')
        ADVANCE(779);
      if (lookahead == 'g')
        ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(813);
      if (lookahead == 'i')
        ADVANCE(824);
      if (lookahead == 't')
        ADVANCE(1034);
      if (lookahead == 'u')
        ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(882);
      if (lookahead == 'r')
        ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1039);
      if (lookahead == 'w')
        ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(944);
      if (lookahead == 'i')
        ADVANCE(956);
      if (lookahead == 'o')
        ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1041:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == 'e')
        ADVANCE(1042);
      if (lookahead == 'm')
        ADVANCE(991);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1041);
      END_STATE();
    case 1042:
      if (lookahead == 'n')
        ADVANCE(1043);
      if (lookahead == 'x')
        ADVANCE(986);
      END_STATE();
    case 1043:
      if (lookahead == 'd')
        ADVANCE(1044);
      END_STATE();
    case 1044:
      if (lookahead == 'm')
        ADVANCE(1045);
      END_STATE();
    case 1045:
      if (lookahead == 'o')
        ADVANCE(1046);
      END_STATE();
    case 1046:
      if (lookahead == 'd')
        ADVANCE(1047);
      END_STATE();
    case 1047:
      if (lookahead == 'u')
        ADVANCE(1048);
      END_STATE();
    case 1048:
      if (lookahead == 'l')
        ADVANCE(1049);
      END_STATE();
    case 1049:
      if (lookahead == 'e')
        ADVANCE(1050);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_endmodule);
      END_STATE();
    case 1051:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == 'd')
        ADVANCE(1053);
      if (lookahead == 'e')
        ADVANCE(1056);
      if (lookahead == 'm')
        ADVANCE(1060);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1051);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1057);
      if (lookahead == 'x')
        ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(1061);
      if (lookahead == 'o')
        ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1062:
      if (lookahead == '!')
        ADVANCE(1063);
      if (lookahead == '%')
        ADVANCE(1064);
      if (lookahead == '&')
        ADVANCE(1065);
      if (lookahead == '*')
        ADVANCE(1066);
      if (lookahead == '+')
        ADVANCE(1067);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1068);
      if (lookahead == '/')
        ADVANCE(1069);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == ';')
        ADVANCE(298);
      if (lookahead == '<')
        ADVANCE(1070);
      if (lookahead == '=')
        ADVANCE(1073);
      if (lookahead == '>')
        ADVANCE(1074);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == '|')
        ADVANCE(1078);
      if (lookahead == '~')
        ADVANCE(1079);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1062);
      END_STATE();
    case 1063:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(253);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(263);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(277);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(300);
      if (lookahead == '<')
        ADVANCE(1071);
      if (lookahead == '=')
        ADVANCE(306);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<')
        ADVANCE(1072);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 1073:
      if (lookahead == '=')
        ADVANCE(308);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(312);
      if (lookahead == '>')
        ADVANCE(1075);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(1076);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '~')
        ADVANCE(324);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(974);
      END_STATE();
    case 1079:
      if (lookahead == '^')
        ADVANCE(978);
      END_STATE();
    case 1080:
      if (lookahead == '(')
        ADVANCE(1081);
      if (lookahead == '+')
        ADVANCE(1082);
      if (lookahead == '-')
        ADVANCE(1083);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 'b')
        ADVANCE(1084);
      if (lookahead == 'c')
        ADVANCE(1090);
      if (lookahead == 'e')
        ADVANCE(1097);
      if (lookahead == 'i')
        ADVANCE(1102);
      if (lookahead == 'l')
        ADVANCE(1115);
      if (lookahead == 'm')
        ADVANCE(991);
      if (lookahead == 'n')
        ADVANCE(1125);
      if (lookahead == 'o')
        ADVANCE(1129);
      if (lookahead == 'r')
        ADVANCE(1135);
      if (lookahead == 's')
        ADVANCE(1145);
      if (lookahead == 't')
        ADVANCE(1174);
      if (lookahead == 'u')
        ADVANCE(1193);
      if (lookahead == 'w')
        ADVANCE(1205);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1080);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*')
        ADVANCE(984);
      END_STATE();
    case 1082:
      if (lookahead == '+')
        ADVANCE(269);
      END_STATE();
    case 1083:
      if (lookahead == '-')
        ADVANCE(274);
      END_STATE();
    case 1084:
      if (lookahead == 'i')
        ADVANCE(1085);
      if (lookahead == 'y')
        ADVANCE(1087);
      END_STATE();
    case 1085:
      if (lookahead == 't')
        ADVANCE(1086);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 1087:
      if (lookahead == 't')
        ADVANCE(1088);
      END_STATE();
    case 1088:
      if (lookahead == 'e')
        ADVANCE(1089);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 1090:
      if (lookahead == 'h')
        ADVANCE(1091);
      END_STATE();
    case 1091:
      if (lookahead == 'a')
        ADVANCE(1092);
      END_STATE();
    case 1092:
      if (lookahead == 'n')
        ADVANCE(1093);
      END_STATE();
    case 1093:
      if (lookahead == 'd')
        ADVANCE(1094);
      END_STATE();
    case 1094:
      if (lookahead == 'l')
        ADVANCE(1095);
      END_STATE();
    case 1095:
      if (lookahead == 'e')
        ADVANCE(1096);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_chandle);
      END_STATE();
    case 1097:
      if (lookahead == 'v')
        ADVANCE(1098);
      END_STATE();
    case 1098:
      if (lookahead == 'e')
        ADVANCE(1099);
      END_STATE();
    case 1099:
      if (lookahead == 'n')
        ADVANCE(1100);
      END_STATE();
    case 1100:
      if (lookahead == 't')
        ADVANCE(1101);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 1102:
      if (lookahead == 'n')
        ADVANCE(1103);
      END_STATE();
    case 1103:
      if (lookahead == 'o')
        ADVANCE(1104);
      if (lookahead == 'p')
        ADVANCE(1107);
      if (lookahead == 't')
        ADVANCE(1110);
      END_STATE();
    case 1104:
      if (lookahead == 'u')
        ADVANCE(1105);
      END_STATE();
    case 1105:
      if (lookahead == 't')
        ADVANCE(1106);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 1107:
      if (lookahead == 'u')
        ADVANCE(1108);
      END_STATE();
    case 1108:
      if (lookahead == 't')
        ADVANCE(1109);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(1111);
      END_STATE();
    case 1111:
      if (lookahead == 'g')
        ADVANCE(1112);
      END_STATE();
    case 1112:
      if (lookahead == 'e')
        ADVANCE(1113);
      END_STATE();
    case 1113:
      if (lookahead == 'r')
        ADVANCE(1114);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1115:
      if (lookahead == 'o')
        ADVANCE(1116);
      END_STATE();
    case 1116:
      if (lookahead == 'g')
        ADVANCE(1117);
      if (lookahead == 'n')
        ADVANCE(1120);
      END_STATE();
    case 1117:
      if (lookahead == 'i')
        ADVANCE(1118);
      END_STATE();
    case 1118:
      if (lookahead == 'c')
        ADVANCE(1119);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_logic);
      END_STATE();
    case 1120:
      if (lookahead == 'g')
        ADVANCE(1121);
      END_STATE();
    case 1121:
      if (lookahead == 'i')
        ADVANCE(1122);
      END_STATE();
    case 1122:
      if (lookahead == 'n')
        ADVANCE(1123);
      END_STATE();
    case 1123:
      if (lookahead == 't')
        ADVANCE(1124);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_longint);
      END_STATE();
    case 1125:
      if (lookahead == 'u')
        ADVANCE(1126);
      END_STATE();
    case 1126:
      if (lookahead == 'l')
        ADVANCE(1127);
      END_STATE();
    case 1127:
      if (lookahead == 'l')
        ADVANCE(1128);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 1129:
      if (lookahead == 'u')
        ADVANCE(1130);
      END_STATE();
    case 1130:
      if (lookahead == 't')
        ADVANCE(1131);
      END_STATE();
    case 1131:
      if (lookahead == 'p')
        ADVANCE(1132);
      END_STATE();
    case 1132:
      if (lookahead == 'u')
        ADVANCE(1133);
      END_STATE();
    case 1133:
      if (lookahead == 't')
        ADVANCE(1134);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1135:
      if (lookahead == 'e')
        ADVANCE(1136);
      END_STATE();
    case 1136:
      if (lookahead == 'a')
        ADVANCE(1137);
      if (lookahead == 'f')
        ADVANCE(1143);
      if (lookahead == 'g')
        ADVANCE(1144);
      END_STATE();
    case 1137:
      if (lookahead == 'l')
        ADVANCE(1138);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == 't')
        ADVANCE(1139);
      END_STATE();
    case 1139:
      if (lookahead == 'i')
        ADVANCE(1140);
      END_STATE();
    case 1140:
      if (lookahead == 'm')
        ADVANCE(1141);
      END_STATE();
    case 1141:
      if (lookahead == 'e')
        ADVANCE(1142);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_realtime);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 1145:
      if (lookahead == 'h')
        ADVANCE(1146);
      if (lookahead == 'i')
        ADVANCE(1157);
      if (lookahead == 't')
        ADVANCE(1162);
      if (lookahead == 'u')
        ADVANCE(1167);
      END_STATE();
    case 1146:
      if (lookahead == 'o')
        ADVANCE(1147);
      END_STATE();
    case 1147:
      if (lookahead == 'r')
        ADVANCE(1148);
      END_STATE();
    case 1148:
      if (lookahead == 't')
        ADVANCE(1149);
      END_STATE();
    case 1149:
      if (lookahead == 'i')
        ADVANCE(1150);
      if (lookahead == 'r')
        ADVANCE(1153);
      END_STATE();
    case 1150:
      if (lookahead == 'n')
        ADVANCE(1151);
      END_STATE();
    case 1151:
      if (lookahead == 't')
        ADVANCE(1152);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_shortint);
      END_STATE();
    case 1153:
      if (lookahead == 'e')
        ADVANCE(1154);
      END_STATE();
    case 1154:
      if (lookahead == 'a')
        ADVANCE(1155);
      END_STATE();
    case 1155:
      if (lookahead == 'l')
        ADVANCE(1156);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_shortreal);
      END_STATE();
    case 1157:
      if (lookahead == 'g')
        ADVANCE(1158);
      END_STATE();
    case 1158:
      if (lookahead == 'n')
        ADVANCE(1159);
      END_STATE();
    case 1159:
      if (lookahead == 'e')
        ADVANCE(1160);
      END_STATE();
    case 1160:
      if (lookahead == 'd')
        ADVANCE(1161);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 1162:
      if (lookahead == 'r')
        ADVANCE(1163);
      END_STATE();
    case 1163:
      if (lookahead == 'i')
        ADVANCE(1164);
      END_STATE();
    case 1164:
      if (lookahead == 'n')
        ADVANCE(1165);
      END_STATE();
    case 1165:
      if (lookahead == 'g')
        ADVANCE(1166);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 1167:
      if (lookahead == 'p')
        ADVANCE(1168);
      END_STATE();
    case 1168:
      if (lookahead == 'p')
        ADVANCE(1169);
      END_STATE();
    case 1169:
      if (lookahead == 'l')
        ADVANCE(1170);
      END_STATE();
    case 1170:
      if (lookahead == 'y')
        ADVANCE(1171);
      END_STATE();
    case 1171:
      if (lookahead == '0')
        ADVANCE(1172);
      if (lookahead == '1')
        ADVANCE(1173);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_supply0);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_supply1);
      END_STATE();
    case 1174:
      if (lookahead == 'h')
        ADVANCE(1175);
      if (lookahead == 'i')
        ADVANCE(1178);
      if (lookahead == 'r')
        ADVANCE(1181);
      END_STATE();
    case 1175:
      if (lookahead == 'i')
        ADVANCE(1176);
      END_STATE();
    case 1176:
      if (lookahead == 's')
        ADVANCE(1177);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 1178:
      if (lookahead == 'm')
        ADVANCE(1179);
      END_STATE();
    case 1179:
      if (lookahead == 'e')
        ADVANCE(1180);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 1181:
      if (lookahead == 'i')
        ADVANCE(1182);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_tri);
      if (lookahead == '0')
        ADVANCE(1183);
      if (lookahead == '1')
        ADVANCE(1184);
      if (lookahead == 'a')
        ADVANCE(1185);
      if (lookahead == 'o')
        ADVANCE(1188);
      if (lookahead == 'r')
        ADVANCE(1190);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_tri0);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_tri1);
      END_STATE();
    case 1185:
      if (lookahead == 'n')
        ADVANCE(1186);
      END_STATE();
    case 1186:
      if (lookahead == 'd')
        ADVANCE(1187);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_triand);
      END_STATE();
    case 1188:
      if (lookahead == 'r')
        ADVANCE(1189);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_trior);
      END_STATE();
    case 1190:
      if (lookahead == 'e')
        ADVANCE(1191);
      END_STATE();
    case 1191:
      if (lookahead == 'g')
        ADVANCE(1192);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_trireg);
      END_STATE();
    case 1193:
      if (lookahead == 'n')
        ADVANCE(1194);
      if (lookahead == 'w')
        ADVANCE(1201);
      END_STATE();
    case 1194:
      if (lookahead == 's')
        ADVANCE(1195);
      END_STATE();
    case 1195:
      if (lookahead == 'i')
        ADVANCE(1196);
      END_STATE();
    case 1196:
      if (lookahead == 'g')
        ADVANCE(1197);
      END_STATE();
    case 1197:
      if (lookahead == 'n')
        ADVANCE(1198);
      END_STATE();
    case 1198:
      if (lookahead == 'e')
        ADVANCE(1199);
      END_STATE();
    case 1199:
      if (lookahead == 'd')
        ADVANCE(1200);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1201:
      if (lookahead == 'i')
        ADVANCE(1202);
      END_STATE();
    case 1202:
      if (lookahead == 'r')
        ADVANCE(1203);
      END_STATE();
    case 1203:
      if (lookahead == 'e')
        ADVANCE(1204);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_uwire);
      END_STATE();
    case 1205:
      if (lookahead == 'a')
        ADVANCE(1206);
      if (lookahead == 'i')
        ADVANCE(1209);
      if (lookahead == 'o')
        ADVANCE(1212);
      END_STATE();
    case 1206:
      if (lookahead == 'n')
        ADVANCE(1207);
      END_STATE();
    case 1207:
      if (lookahead == 'd')
        ADVANCE(1208);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_wand);
      END_STATE();
    case 1209:
      if (lookahead == 'r')
        ADVANCE(1210);
      END_STATE();
    case 1210:
      if (lookahead == 'e')
        ADVANCE(1211);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_wire);
      END_STATE();
    case 1212:
      if (lookahead == 'r')
        ADVANCE(1213);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_wor);
      END_STATE();
    case 1214:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 'b')
        ADVANCE(1084);
      if (lookahead == 'c')
        ADVANCE(1090);
      if (lookahead == 'e')
        ADVANCE(1097);
      if (lookahead == 'i')
        ADVANCE(1102);
      if (lookahead == 'l')
        ADVANCE(1115);
      if (lookahead == 'o')
        ADVANCE(1129);
      if (lookahead == 'r')
        ADVANCE(1135);
      if (lookahead == 's')
        ADVANCE(1145);
      if (lookahead == 't')
        ADVANCE(1215);
      if (lookahead == 'u')
        ADVANCE(1193);
      if (lookahead == 'w')
        ADVANCE(1205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1214);
      END_STATE();
    case 1215:
      if (lookahead == 'i')
        ADVANCE(1178);
      if (lookahead == 'r')
        ADVANCE(1181);
      END_STATE();
    case 1216:
      if (lookahead == '(')
        ADVANCE(1081);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1217:
      if (lookahead == '!')
        ADVANCE(1218);
      if (lookahead == '&')
        ADVANCE(1219);
      if (lookahead == '+')
        ADVANCE(1067);
      if (lookahead == '-')
        ADVANCE(1220);
      if (lookahead == ']')
        ADVANCE(321);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1221);
      if (lookahead == '~')
        ADVANCE(976);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1217);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1222:
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 's')
        ADVANCE(1223);
      if (lookahead == 'u')
        ADVANCE(1224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1225:
      if (lookahead == '(')
        ADVANCE(1013);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '.')
        ADVANCE(1017);
      if (lookahead == '=')
        ADVANCE(1018);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1225);
      END_STATE();
    case 1226:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == 'e')
        ADVANCE(985);
      if (lookahead == 'm')
        ADVANCE(991);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1226);
      END_STATE();
    case 1227:
      if (lookahead == '$')
        ADVANCE(1228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1228:
      if (lookahead == 'r')
        ADVANCE(1229);
      END_STATE();
    case 1229:
      if (lookahead == 'o')
        ADVANCE(157);
      END_STATE();
    case 1230:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == 'd')
        ADVANCE(1053);
      if (lookahead == 'm')
        ADVANCE(1060);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1231:
      if (lookahead == '!')
        ADVANCE(1218);
      if (lookahead == '&')
        ADVANCE(1219);
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == '+')
        ADVANCE(1067);
      if (lookahead == '-')
        ADVANCE(1220);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1221);
      if (lookahead == '~')
        ADVANCE(976);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1231);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1232:
      if (lookahead == '!')
        ADVANCE(1063);
      if (lookahead == '%')
        ADVANCE(1064);
      if (lookahead == '&')
        ADVANCE(1065);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '*')
        ADVANCE(1066);
      if (lookahead == '+')
        ADVANCE(1067);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1068);
      if (lookahead == '/')
        ADVANCE(1069);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == ';')
        ADVANCE(298);
      if (lookahead == '<')
        ADVANCE(1070);
      if (lookahead == '=')
        ADVANCE(1073);
      if (lookahead == '>')
        ADVANCE(1074);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(321);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1078);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '~')
        ADVANCE(1079);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1232);
      END_STATE();
    case 1233:
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(1013);
      if (lookahead == '.')
        ADVANCE(1017);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1233);
      END_STATE();
    case 1234:
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(1018);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1234);
      END_STATE();
    case 1235:
      if (lookahead == '!')
        ADVANCE(1063);
      if (lookahead == '%')
        ADVANCE(1064);
      if (lookahead == '&')
        ADVANCE(1065);
      if (lookahead == '*')
        ADVANCE(1066);
      if (lookahead == '+')
        ADVANCE(1067);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1068);
      if (lookahead == '/')
        ADVANCE(1069);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == '<')
        ADVANCE(1070);
      if (lookahead == '=')
        ADVANCE(1073);
      if (lookahead == '>')
        ADVANCE(1074);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1078);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '~')
        ADVANCE(1079);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1235);
      END_STATE();
    case 1236:
      if (lookahead == '!')
        ADVANCE(1063);
      if (lookahead == '%')
        ADVANCE(1064);
      if (lookahead == '&')
        ADVANCE(1065);
      if (lookahead == '*')
        ADVANCE(1066);
      if (lookahead == '+')
        ADVANCE(1067);
      if (lookahead == '-')
        ADVANCE(1068);
      if (lookahead == '/')
        ADVANCE(1069);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == '<')
        ADVANCE(1070);
      if (lookahead == '=')
        ADVANCE(1073);
      if (lookahead == '>')
        ADVANCE(1074);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == ']')
        ADVANCE(321);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == '|')
        ADVANCE(1078);
      if (lookahead == '~')
        ADVANCE(1079);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1236);
      END_STATE();
    case 1237:
      if (lookahead == '!')
        ADVANCE(1218);
      if (lookahead == '$')
        ADVANCE(1238);
      if (lookahead == '&')
        ADVANCE(1219);
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(1013);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '+')
        ADVANCE(1239);
      if (lookahead == '-')
        ADVANCE(1240);
      if (lookahead == '.')
        ADVANCE(1017);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == 'b')
        ADVANCE(1022);
      if (lookahead == 'c')
        ADVANCE(1024);
      if (lookahead == 'e')
        ADVANCE(1025);
      if (lookahead == 'i')
        ADVANCE(1241);
      if (lookahead == 'l')
        ADVANCE(1028);
      if (lookahead == 'n')
        ADVANCE(1243);
      if (lookahead == 'r')
        ADVANCE(1244);
      if (lookahead == 's')
        ADVANCE(1246);
      if (lookahead == 't')
        ADVANCE(1247);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1221);
      if (lookahead == '~')
        ADVANCE(976);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1237);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(269);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(274);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(773);
      if (lookahead == 'g')
        ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(813);
      if (lookahead == 't')
        ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(879);
      if (lookahead == 'i')
        ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1248:
      if (lookahead == '!')
        ADVANCE(1063);
      if (lookahead == '%')
        ADVANCE(1064);
      if (lookahead == '&')
        ADVANCE(1065);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '*')
        ADVANCE(1066);
      if (lookahead == '+')
        ADVANCE(1067);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1068);
      if (lookahead == '/')
        ADVANCE(1069);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == '<')
        ADVANCE(1070);
      if (lookahead == '=')
        ADVANCE(1073);
      if (lookahead == '>')
        ADVANCE(1074);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == '|')
        ADVANCE(1078);
      if (lookahead == '~')
        ADVANCE(1079);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1248);
      END_STATE();
    case 1249:
      if (lookahead == '!')
        ADVANCE(1063);
      if (lookahead == '%')
        ADVANCE(1064);
      if (lookahead == '&')
        ADVANCE(1065);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '*')
        ADVANCE(1066);
      if (lookahead == '+')
        ADVANCE(1067);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1068);
      if (lookahead == '.')
        ADVANCE(1017);
      if (lookahead == '/')
        ADVANCE(1069);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == ';')
        ADVANCE(298);
      if (lookahead == '<')
        ADVANCE(1070);
      if (lookahead == '=')
        ADVANCE(1073);
      if (lookahead == '>')
        ADVANCE(1074);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(321);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1078);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '~')
        ADVANCE(1079);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1249);
      END_STATE();
    case 1250:
      if (lookahead == '!')
        ADVANCE(1218);
      if (lookahead == '&')
        ADVANCE(1219);
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(1081);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '+')
        ADVANCE(1239);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1240);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == '^')
        ADVANCE(1077);
      if (lookahead == 'n')
        ADVANCE(1243);
      if (lookahead == 't')
        ADVANCE(1251);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1221);
      if (lookahead == '~')
        ADVANCE(976);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1252:
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 's')
        ADVANCE(1253);
      if (lookahead == 'u')
        ADVANCE(1254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1252);
      END_STATE();
    case 1253:
      if (lookahead == 'i')
        ADVANCE(1157);
      END_STATE();
    case 1254:
      if (lookahead == 'n')
        ADVANCE(1194);
      END_STATE();
    case 1255:
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1256:
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1256);
      END_STATE();
    case 1257:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '+')
        ADVANCE(1082);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1083);
      if (lookahead == ':')
        ADVANCE(1052);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1257);
      END_STATE();
    case 1258:
      if (lookahead == '(')
        ADVANCE(1013);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(1018);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1258);
      END_STATE();
    case 1259:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == '+')
        ADVANCE(1082);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1083);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1259);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 982},
  [2] = {.lex_state = 982},
  [3] = {.lex_state = 1007},
  [4] = {.lex_state = 1011},
  [5] = {.lex_state = 1014},
  [6] = {.lex_state = 1011},
  [7] = {.lex_state = 1007},
  [8] = {.lex_state = 982},
  [9] = {.lex_state = 982},
  [10] = {.lex_state = 1011},
  [11] = {.lex_state = 1015},
  [12] = {.lex_state = 1019},
  [13] = {.lex_state = 1019},
  [14] = {.lex_state = 1019},
  [15] = {.lex_state = 1020},
  [16] = {.lex_state = 1041},
  [17] = {.lex_state = 1051},
  [18] = {.lex_state = 1062},
  [19] = {.lex_state = 1062},
  [20] = {.lex_state = 1011},
  [21] = {.lex_state = 1011},
  [22] = {.lex_state = 1011},
  [23] = {.lex_state = 1011},
  [24] = {.lex_state = 982},
  [25] = {.lex_state = 1007},
  [26] = {.lex_state = 982},
  [27] = {.lex_state = 1020},
  [28] = {.lex_state = 982},
  [29] = {.lex_state = 1062},
  [30] = {.lex_state = 1011},
  [31] = {.lex_state = 1080},
  [32] = {.lex_state = 1019},
  [33] = {.lex_state = 1019},
  [34] = {.lex_state = 1020},
  [35] = {.lex_state = 1062},
  [36] = {.lex_state = 1214},
  [37] = {.lex_state = 1216},
  [38] = {.lex_state = 1217},
  [39] = {.lex_state = 1222},
  [40] = {.lex_state = 1222},
  [41] = {.lex_state = 1216},
  [42] = {.lex_state = 1214},
  [43] = {.lex_state = 1216},
  [44] = {.lex_state = 1216},
  [45] = {.lex_state = 1214},
  [46] = {.lex_state = 1011},
  [47] = {.lex_state = 1216},
  [48] = {.lex_state = 1011},
  [49] = {.lex_state = 1222},
  [50] = {.lex_state = 1222},
  [51] = {.lex_state = 1214},
  [52] = {.lex_state = 1011},
  [53] = {.lex_state = 1020},
  [54] = {.lex_state = 1216},
  [55] = {.lex_state = 1225},
  [56] = {.lex_state = 1216},
  [57] = {.lex_state = 1214},
  [58] = {.lex_state = 1216},
  [59] = {.lex_state = 1226},
  [60] = {.lex_state = 982},
  [61] = {.lex_state = 1227},
  [62] = {.lex_state = 1011},
  [63] = {.lex_state = 1011},
  [64] = {.lex_state = 1051},
  [65] = {.lex_state = 1011},
  [66] = {.lex_state = 1230},
  [67] = {.lex_state = 1051},
  [68] = {.lex_state = 1041},
  [69] = {.lex_state = 1051},
  [70] = {.lex_state = 1011},
  [71] = {.lex_state = 1011},
  [72] = {.lex_state = 1011},
  [73] = {.lex_state = 1011},
  [74] = {.lex_state = 982},
  [75] = {.lex_state = 1019},
  [76] = {.lex_state = 1080},
  [77] = {.lex_state = 1019},
  [78] = {.lex_state = 1062},
  [79] = {.lex_state = 1216},
  [80] = {.lex_state = 1231},
  [81] = {.lex_state = 1217},
  [82] = {.lex_state = 1232},
  [83] = {.lex_state = 1232},
  [84] = {.lex_state = 1232},
  [85] = {.lex_state = 1062},
  [86] = {.lex_state = 1217},
  [87] = {.lex_state = 1232},
  [88] = {.lex_state = 1232},
  [89] = {.lex_state = 1231},
  [90] = {.lex_state = 1232},
  [91] = {.lex_state = 1233},
  [92] = {.lex_state = 1233},
  [93] = {.lex_state = 1216},
  [94] = {.lex_state = 1062},
  [95] = {.lex_state = 1011},
  [96] = {.lex_state = 1216},
  [97] = {.lex_state = 1011},
  [98] = {.lex_state = 1234},
  [99] = {.lex_state = 1062},
  [100] = {.lex_state = 1214},
  [101] = {.lex_state = 1216},
  [102] = {.lex_state = 1216},
  [103] = {.lex_state = 1216},
  [104] = {.lex_state = 1216},
  [105] = {.lex_state = 1011},
  [106] = {.lex_state = 1216},
  [107] = {.lex_state = 1011},
  [108] = {.lex_state = 1217},
  [109] = {.lex_state = 1232},
  [110] = {.lex_state = 1216},
  [111] = {.lex_state = 1216},
  [112] = {.lex_state = 1216},
  [113] = {.lex_state = 1214},
  [114] = {.lex_state = 1216},
  [115] = {.lex_state = 1011},
  [116] = {.lex_state = 1011},
  [117] = {.lex_state = 1216},
  [118] = {.lex_state = 1062},
  [119] = {.lex_state = 1062},
  [120] = {.lex_state = 1019},
  [121] = {.lex_state = 1019},
  [122] = {.lex_state = 1020},
  [123] = {.lex_state = 1011},
  [124] = {.lex_state = 1019},
  [125] = {.lex_state = 1020},
  [126] = {.lex_state = 1041},
  [127] = {.lex_state = 1051},
  [128] = {.lex_state = 1011},
  [129] = {.lex_state = 1011},
  [130] = {.lex_state = 1062},
  [131] = {.lex_state = 1011},
  [132] = {.lex_state = 1216},
  [133] = {.lex_state = 1216},
  [134] = {.lex_state = 1051},
  [135] = {.lex_state = 1230},
  [136] = {.lex_state = 1226},
  [137] = {.lex_state = 1051},
  [138] = {.lex_state = 1011},
  [139] = {.lex_state = 1020},
  [140] = {.lex_state = 1011},
  [141] = {.lex_state = 1041},
  [142] = {.lex_state = 1235},
  [143] = {.lex_state = 1232},
  [144] = {.lex_state = 1217},
  [145] = {.lex_state = 1231},
  [146] = {.lex_state = 1231},
  [147] = {.lex_state = 1231},
  [148] = {.lex_state = 1216},
  [149] = {.lex_state = 1011},
  [150] = {.lex_state = 1232},
  [151] = {.lex_state = 1231},
  [152] = {.lex_state = 1216},
  [153] = {.lex_state = 1062},
  [154] = {.lex_state = 1216},
  [155] = {.lex_state = 1217},
  [156] = {.lex_state = 1217},
  [157] = {.lex_state = 1234},
  [158] = {.lex_state = 1216},
  [159] = {.lex_state = 1214},
  [160] = {.lex_state = 1062},
  [161] = {.lex_state = 1216},
  [162] = {.lex_state = 1216},
  [163] = {.lex_state = 1216},
  [164] = {.lex_state = 1216},
  [165] = {.lex_state = 1236},
  [166] = {.lex_state = 1232},
  [167] = {.lex_state = 1232},
  [168] = {.lex_state = 1216},
  [169] = {.lex_state = 1216},
  [170] = {.lex_state = 982},
  [171] = {.lex_state = 982},
  [172] = {.lex_state = 982},
  [173] = {.lex_state = 1051},
  [174] = {.lex_state = 1062},
  [175] = {.lex_state = 1011},
  [176] = {.lex_state = 1051},
  [177] = {.lex_state = 1227},
  [178] = {.lex_state = 1062},
  [179] = {.lex_state = 1217},
  [180] = {.lex_state = 1216},
  [181] = {.lex_state = 1234},
  [182] = {.lex_state = 1011},
  [183] = {.lex_state = 1230},
  [184] = {.lex_state = 1019},
  [185] = {.lex_state = 1020},
  [186] = {.lex_state = 1051},
  [187] = {.lex_state = 1051},
  [188] = {.lex_state = 1237},
  [189] = {.lex_state = 1062},
  [190] = {.lex_state = 1051},
  [191] = {.lex_state = 1011},
  [192] = {.lex_state = 1062},
  [193] = {.lex_state = 1216},
  [194] = {.lex_state = 1216},
  [195] = {.lex_state = 1011},
  [196] = {.lex_state = 1011},
  [197] = {.lex_state = 1011},
  [198] = {.lex_state = 1226},
  [199] = {.lex_state = 1217},
  [200] = {.lex_state = 1232},
  [201] = {.lex_state = 1217},
  [202] = {.lex_state = 1231},
  [203] = {.lex_state = 1235},
  [204] = {.lex_state = 1231},
  [205] = {.lex_state = 1235},
  [206] = {.lex_state = 1236},
  [207] = {.lex_state = 1062},
  [208] = {.lex_state = 1231},
  [209] = {.lex_state = 1062},
  [210] = {.lex_state = 1231},
  [211] = {.lex_state = 1019},
  [212] = {.lex_state = 1232},
  [213] = {.lex_state = 1231},
  [214] = {.lex_state = 1248},
  [215] = {.lex_state = 1217},
  [216] = {.lex_state = 1217},
  [217] = {.lex_state = 1234},
  [218] = {.lex_state = 1216},
  [219] = {.lex_state = 1216},
  [220] = {.lex_state = 1249},
  [221] = {.lex_state = 1231},
  [222] = {.lex_state = 1231},
  [223] = {.lex_state = 1232},
  [224] = {.lex_state = 1062},
  [225] = {.lex_state = 1051},
  [226] = {.lex_state = 1011},
  [227] = {.lex_state = 1062},
  [228] = {.lex_state = 1062},
  [229] = {.lex_state = 1062},
  [230] = {.lex_state = 1062},
  [231] = {.lex_state = 1011},
  [232] = {.lex_state = 1230},
  [233] = {.lex_state = 1062},
  [234] = {.lex_state = 1011},
  [235] = {.lex_state = 1051},
  [236] = {.lex_state = 1250},
  [237] = {.lex_state = 1011},
  [238] = {.lex_state = 1011},
  [239] = {.lex_state = 1252},
  [240] = {.lex_state = 1252},
  [241] = {.lex_state = 1216},
  [242] = {.lex_state = 1250},
  [243] = {.lex_state = 1255},
  [244] = {.lex_state = 1231},
  [245] = {.lex_state = 1250},
  [246] = {.lex_state = 1256},
  [247] = {.lex_state = 1252},
  [248] = {.lex_state = 1252},
  [249] = {.lex_state = 1020},
  [250] = {.lex_state = 1216},
  [251] = {.lex_state = 1216},
  [252] = {.lex_state = 1231},
  [253] = {.lex_state = 1257},
  [254] = {.lex_state = 1256},
  [255] = {.lex_state = 1256},
  [256] = {.lex_state = 1216},
  [257] = {.lex_state = 1248},
  [258] = {.lex_state = 1250},
  [259] = {.lex_state = 1250},
  [260] = {.lex_state = 1231},
  [261] = {.lex_state = 1231},
  [262] = {.lex_state = 1051},
  [263] = {.lex_state = 1062},
  [264] = {.lex_state = 1062},
  [265] = {.lex_state = 1062},
  [266] = {.lex_state = 1216},
  [267] = {.lex_state = 1062},
  [268] = {.lex_state = 1011},
  [269] = {.lex_state = 1011},
  [270] = {.lex_state = 1020},
  [271] = {.lex_state = 1216},
  [272] = {.lex_state = 1216},
  [273] = {.lex_state = 1250},
  [274] = {.lex_state = 1216},
  [275] = {.lex_state = 982},
  [276] = {.lex_state = 1011},
  [277] = {.lex_state = 1235},
  [278] = {.lex_state = 1235},
  [279] = {.lex_state = 1235},
  [280] = {.lex_state = 1231},
  [281] = {.lex_state = 1232},
  [282] = {.lex_state = 1235},
  [283] = {.lex_state = 1231},
  [284] = {.lex_state = 1232},
  [285] = {.lex_state = 1235},
  [286] = {.lex_state = 1217},
  [287] = {.lex_state = 1062},
  [288] = {.lex_state = 1062},
  [289] = {.lex_state = 1231},
  [290] = {.lex_state = 1062},
  [291] = {.lex_state = 1231},
  [292] = {.lex_state = 1019},
  [293] = {.lex_state = 1231},
  [294] = {.lex_state = 1231},
  [295] = {.lex_state = 1258},
  [296] = {.lex_state = 1248},
  [297] = {.lex_state = 1236},
  [298] = {.lex_state = 1231},
  [299] = {.lex_state = 1236},
  [300] = {.lex_state = 1231},
  [301] = {.lex_state = 1234},
  [302] = {.lex_state = 1217},
  [303] = {.lex_state = 1231},
  [304] = {.lex_state = 1231},
  [305] = {.lex_state = 1041},
  [306] = {.lex_state = 1051},
  [307] = {.lex_state = 1051},
  [308] = {.lex_state = 1051},
  [309] = {.lex_state = 1011},
  [310] = {.lex_state = 1020},
  [311] = {.lex_state = 1011},
  [312] = {.lex_state = 1231},
  [313] = {.lex_state = 1235},
  [314] = {.lex_state = 1235},
  [315] = {.lex_state = 1259},
  [316] = {.lex_state = 1216},
  [317] = {.lex_state = 1216},
  [318] = {.lex_state = 1011},
  [319] = {.lex_state = 1237},
  [320] = {.lex_state = 1216},
  [321] = {.lex_state = 1216},
  [322] = {.lex_state = 1216},
  [323] = {.lex_state = 1257},
  [324] = {.lex_state = 1256},
  [325] = {.lex_state = 1250},
  [326] = {.lex_state = 1256},
  [327] = {.lex_state = 1250},
  [328] = {.lex_state = 1250},
  [329] = {.lex_state = 1256},
  [330] = {.lex_state = 1250},
  [331] = {.lex_state = 1231},
  [332] = {.lex_state = 1051},
  [333] = {.lex_state = 1216},
  [334] = {.lex_state = 1019},
  [335] = {.lex_state = 1062},
  [336] = {.lex_state = 982},
  [337] = {.lex_state = 1216},
  [338] = {.lex_state = 1216},
  [339] = {.lex_state = 1216},
  [340] = {.lex_state = 1216},
  [341] = {.lex_state = 1011},
  [342] = {.lex_state = 1216},
  [343] = {.lex_state = 1250},
  [344] = {.lex_state = 982},
  [345] = {.lex_state = 1231},
  [346] = {.lex_state = 1231},
  [347] = {.lex_state = 1217},
  [348] = {.lex_state = 1231},
  [349] = {.lex_state = 1231},
  [350] = {.lex_state = 1235},
  [351] = {.lex_state = 1235},
  [352] = {.lex_state = 1235},
  [353] = {.lex_state = 1062},
  [354] = {.lex_state = 1062},
  [355] = {.lex_state = 1062},
  [356] = {.lex_state = 1231},
  [357] = {.lex_state = 1248},
  [358] = {.lex_state = 1231},
  [359] = {.lex_state = 1248},
  [360] = {.lex_state = 1231},
  [361] = {.lex_state = 1217},
  [362] = {.lex_state = 1231},
  [363] = {.lex_state = 1231},
  [364] = {.lex_state = 1236},
  [365] = {.lex_state = 1236},
  [366] = {.lex_state = 1236},
  [367] = {.lex_state = 1062},
  [368] = {.lex_state = 1062},
  [369] = {.lex_state = 1231},
  [370] = {.lex_state = 1062},
  [371] = {.lex_state = 1231},
  [372] = {.lex_state = 1051},
  [373] = {.lex_state = 1051},
  [374] = {.lex_state = 1256},
  [375] = {.lex_state = 1237},
  [376] = {.lex_state = 1235},
  [377] = {.lex_state = 1231},
  [378] = {.lex_state = 1257},
  [379] = {.lex_state = 1235},
  [380] = {.lex_state = 1250},
  [381] = {.lex_state = 1256},
  [382] = {.lex_state = 1250},
  [383] = {.lex_state = 1235},
  [384] = {.lex_state = 1235},
  [385] = {.lex_state = 1257},
  [386] = {.lex_state = 1235},
  [387] = {.lex_state = 1216},
  [388] = {.lex_state = 1216},
  [389] = {.lex_state = 1216},
  [390] = {.lex_state = 1216},
  [391] = {.lex_state = 1216},
  [392] = {.lex_state = 1216},
  [393] = {.lex_state = 1051},
  [394] = {.lex_state = 1256},
  [395] = {.lex_state = 1250},
  [396] = {.lex_state = 1256},
  [397] = {.lex_state = 1250},
  [398] = {.lex_state = 1231},
  [399] = {.lex_state = 1250},
  [400] = {.lex_state = 1250},
  [401] = {.lex_state = 1019},
  [402] = {.lex_state = 1216},
  [403] = {.lex_state = 1250},
  [404] = {.lex_state = 1216},
  [405] = {.lex_state = 1216},
  [406] = {.lex_state = 1216},
  [407] = {.lex_state = 1216},
  [408] = {.lex_state = 1216},
  [409] = {.lex_state = 1235},
  [410] = {.lex_state = 1231},
  [411] = {.lex_state = 1235},
  [412] = {.lex_state = 1231},
  [413] = {.lex_state = 1235},
  [414] = {.lex_state = 1235},
  [415] = {.lex_state = 1231},
  [416] = {.lex_state = 1235},
  [417] = {.lex_state = 1231},
  [418] = {.lex_state = 1235},
  [419] = {.lex_state = 1235},
  [420] = {.lex_state = 1217},
  [421] = {.lex_state = 1231},
  [422] = {.lex_state = 1231},
  [423] = {.lex_state = 1248},
  [424] = {.lex_state = 1248},
  [425] = {.lex_state = 1248},
  [426] = {.lex_state = 1236},
  [427] = {.lex_state = 1236},
  [428] = {.lex_state = 1231},
  [429] = {.lex_state = 1236},
  [430] = {.lex_state = 1231},
  [431] = {.lex_state = 1236},
  [432] = {.lex_state = 1236},
  [433] = {.lex_state = 1217},
  [434] = {.lex_state = 1217},
  [435] = {.lex_state = 1062},
  [436] = {.lex_state = 1062},
  [437] = {.lex_state = 1062},
  [438] = {.lex_state = 1011},
  [439] = {.lex_state = 1216},
  [440] = {.lex_state = 1214},
  [441] = {.lex_state = 1020},
  [442] = {.lex_state = 1235},
  [443] = {.lex_state = 1257},
  [444] = {.lex_state = 1235},
  [445] = {.lex_state = 1235},
  [446] = {.lex_state = 1235},
  [447] = {.lex_state = 1256},
  [448] = {.lex_state = 1256},
  [449] = {.lex_state = 1235},
  [450] = {.lex_state = 1257},
  [451] = {.lex_state = 1250},
  [452] = {.lex_state = 1216},
  [453] = {.lex_state = 1020},
  [454] = {.lex_state = 1250},
  [455] = {.lex_state = 1250},
  [456] = {.lex_state = 1216},
  [457] = {.lex_state = 1250},
  [458] = {.lex_state = 1217},
  [459] = {.lex_state = 1231},
  [460] = {.lex_state = 1231},
  [461] = {.lex_state = 1235},
  [462] = {.lex_state = 1235},
  [463] = {.lex_state = 1235},
  [464] = {.lex_state = 1235},
  [465] = {.lex_state = 1235},
  [466] = {.lex_state = 1235},
  [467] = {.lex_state = 1248},
  [468] = {.lex_state = 1248},
  [469] = {.lex_state = 1231},
  [470] = {.lex_state = 1248},
  [471] = {.lex_state = 1231},
  [472] = {.lex_state = 1248},
  [473] = {.lex_state = 1248},
  [474] = {.lex_state = 1236},
  [475] = {.lex_state = 1236},
  [476] = {.lex_state = 1236},
  [477] = {.lex_state = 1062},
  [478] = {.lex_state = 1062},
  [479] = {.lex_state = 1062},
  [480] = {.lex_state = 1062},
  [481] = {.lex_state = 1051},
  [482] = {.lex_state = 1020},
  [483] = {.lex_state = 1020},
  [484] = {.lex_state = 1216},
  [485] = {.lex_state = 1216},
  [486] = {.lex_state = 1216},
  [487] = {.lex_state = 1020},
  [488] = {.lex_state = 1235},
  [489] = {.lex_state = 1235},
  [490] = {.lex_state = 1231},
  [491] = {.lex_state = 1235},
  [492] = {.lex_state = 1231},
  [493] = {.lex_state = 1235},
  [494] = {.lex_state = 1235},
  [495] = {.lex_state = 1235},
  [496] = {.lex_state = 1248},
  [497] = {.lex_state = 1248},
  [498] = {.lex_state = 1248},
  [499] = {.lex_state = 1236},
  [500] = {.lex_state = 1231},
  [501] = {.lex_state = 1231},
  [502] = {.lex_state = 1020},
  [503] = {.lex_state = 1020},
  [504] = {.lex_state = 1216},
  [505] = {.lex_state = 1235},
  [506] = {.lex_state = 1235},
  [507] = {.lex_state = 1235},
  [508] = {.lex_state = 1248},
  [509] = {.lex_state = 1062},
  [510] = {.lex_state = 1231},
  [511] = {.lex_state = 1062},
  [512] = {.lex_state = 1231},
  [513] = {.lex_state = 1235},
  [514] = {.lex_state = 1062},
  [515] = {.lex_state = 1062},
  [516] = {.lex_state = 1062},
  [517] = {.lex_state = 1062},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_endmodule] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_extern] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(3),
    [anon_sym_macromodule] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(3),
    [anon_sym_output] = ACTIONS(3),
    [anon_sym_inout] = ACTIONS(3),
    [anon_sym_ref] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_0] = ACTIONS(3),
    [anon_sym_1] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(3),
    [anon_sym_defparam] = ACTIONS(3),
    [anon_sym_localparam] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(3),
    [anon_sym_parameter] = ACTIONS(3),
    [anon_sym_specparam] = ACTIONS(3),
    [anon_sym_const] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(3),
    [anon_sym_STAR_COLON_COLON_STAR] = ACTIONS(1),
    [anon_sym_vectored] = ACTIONS(3),
    [anon_sym_scalared] = ACTIONS(3),
    [anon_sym_static] = ACTIONS(3),
    [anon_sym_automatic] = ACTIONS(3),
    [anon_sym_string] = ACTIONS(3),
    [anon_sym_chandle] = ACTIONS(3),
    [anon_sym_event] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(3),
    [anon_sym_shortint] = ACTIONS(3),
    [anon_sym_int] = ACTIONS(3),
    [anon_sym_longint] = ACTIONS(3),
    [anon_sym_integer] = ACTIONS(3),
    [anon_sym_time] = ACTIONS(3),
    [anon_sym_bit] = ACTIONS(3),
    [anon_sym_logic] = ACTIONS(3),
    [anon_sym_reg] = ACTIONS(3),
    [anon_sym_shortreal] = ACTIONS(3),
    [anon_sym_real] = ACTIONS(3),
    [anon_sym_realtime] = ACTIONS(3),
    [anon_sym_supply0] = ACTIONS(3),
    [anon_sym_supply1] = ACTIONS(3),
    [anon_sym_tri] = ACTIONS(3),
    [anon_sym_triand] = ACTIONS(3),
    [anon_sym_trior] = ACTIONS(3),
    [anon_sym_trireg] = ACTIONS(3),
    [anon_sym_tri0] = ACTIONS(3),
    [anon_sym_tri1] = ACTIONS(3),
    [anon_sym_uwire] = ACTIONS(3),
    [anon_sym_wire] = ACTIONS(3),
    [anon_sym_wand] = ACTIONS(3),
    [anon_sym_wor] = ACTIONS(3),
    [anon_sym_signed] = ACTIONS(3),
    [anon_sym_unsigned] = ACTIONS(3),
    [anon_sym_void] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(3),
    [anon_sym_union] = ACTIONS(3),
    [anon_sym_tagged] = ACTIONS(3),
    [anon_sym_highz1] = ACTIONS(3),
    [anon_sym_highz0] = ACTIONS(3),
    [anon_sym_strong0] = ACTIONS(3),
    [anon_sym_pull0] = ACTIONS(3),
    [anon_sym_weak0] = ACTIONS(3),
    [anon_sym_strong1] = ACTIONS(3),
    [anon_sym_pull1] = ACTIONS(3),
    [anon_sym_weak1] = ACTIONS(3),
    [anon_sym_small] = ACTIONS(3),
    [anon_sym_medium] = ACTIONS(3),
    [anon_sym_large] = ACTIONS(3),
    [anon_sym_1step] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_bind] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_always] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym_assert] = ACTIONS(3),
    [anon_sym_assign] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(3),
    [anon_sym_buf] = ACTIONS(3),
    [anon_sym_bufif0] = ACTIONS(3),
    [anon_sym_bufif1] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(3),
    [anon_sym_casex] = ACTIONS(3),
    [anon_sym_casez] = ACTIONS(3),
    [anon_sym_clocking] = ACTIONS(3),
    [anon_sym_const_DASHin_DASHlex] = ACTIONS(1),
    [anon_sym_cmos] = ACTIONS(3),
    [anon_sym_context] = ACTIONS(3),
    [anon_sym_continue] = ACTIONS(3),
    [anon_sym_cover] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(3),
    [anon_sym_disable] = ACTIONS(3),
    [anon_sym_do] = ACTIONS(3),
    [anon_sym_edge] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_endcase] = ACTIONS(3),
    [anon_sym_endclocking] = ACTIONS(3),
    [anon_sym_endfunction] = ACTIONS(3),
    [anon_sym_endgenerate] = ACTIONS(3),
    [anon_sym_endpackage] = ACTIONS(3),
    [anon_sym_endprimitive] = ACTIONS(3),
    [anon_sym_endprogram] = ACTIONS(3),
    [anon_sym_endproperty] = ACTIONS(3),
    [anon_sym_endspecify] = ACTIONS(3),
    [anon_sym_endtable] = ACTIONS(3),
    [anon_sym_endtask] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(3),
    [anon_sym_final] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(3),
    [anon_sym_forever] = ACTIONS(3),
    [anon_sym_generate] = ACTIONS(3),
    [anon_sym_genvar] = ACTIONS(3),
    [anon_sym_global_DASHthen_DASHclocking] = ACTIONS(1),
    [anon_sym_global_DASHin_DASHlex] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_iff] = ACTIONS(3),
    [anon_sym_initial] = ACTIONS(3),
    [anon_sym_nand] = ACTIONS(3),
    [anon_sym_negedge] = ACTIONS(3),
    [anon_sym_nmos] = ACTIONS(3),
    [anon_sym_nor] = ACTIONS(3),
    [anon_sym_not] = ACTIONS(3),
    [anon_sym_notif0] = ACTIONS(3),
    [anon_sym_notif1] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(3),
    [anon_sym_pmos] = ACTIONS(3),
    [anon_sym_posedge] = ACTIONS(3),
    [anon_sym_primitive] = ACTIONS(3),
    [anon_sym_priority] = ACTIONS(3),
    [anon_sym_program] = ACTIONS(3),
    [anon_sym_property] = ACTIONS(3),
    [anon_sym_pulldown] = ACTIONS(3),
    [anon_sym_pullup] = ACTIONS(3),
    [anon_sym_pure] = ACTIONS(3),
    [anon_sym_rcmos] = ACTIONS(3),
    [anon_sym_repeat] = ACTIONS(3),
    [anon_sym_return] = ACTIONS(3),
    [anon_sym_rnmos] = ACTIONS(3),
    [anon_sym_rpmos] = ACTIONS(3),
    [anon_sym_rtran] = ACTIONS(3),
    [anon_sym_rtranif0] = ACTIONS(3),
    [anon_sym_rtranif1] = ACTIONS(3),
    [anon_sym_specify] = ACTIONS(3),
    [anon_sym_table] = ACTIONS(3),
    [anon_sym_task] = ACTIONS(3),
    [anon_sym_tran] = ACTIONS(3),
    [anon_sym_tranif0] = ACTIONS(3),
    [anon_sym_tranif1] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_typedef] = ACTIONS(3),
    [anon_sym_unique] = ACTIONS(3),
    [anon_sym_unique0] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_wreal] = ACTIONS(3),
    [anon_sym_xnor] = ACTIONS(3),
    [anon_sym_xor] = ACTIONS(3),
    [anon_sym_DOLLARbits] = ACTIONS(3),
    [anon_sym_DOLLARbitstoreal] = ACTIONS(1),
    [anon_sym_DOLLARc] = ACTIONS(3),
    [anon_sym_DOLLARceil] = ACTIONS(1),
    [anon_sym_DOLLARclog2] = ACTIONS(1),
    [anon_sym_DOLLARcountones] = ACTIONS(1),
    [anon_sym_DOLLARdisplay] = ACTIONS(1),
    [anon_sym_DOLLARerror] = ACTIONS(1),
    [anon_sym_DOLLARexp] = ACTIONS(1),
    [anon_sym_DOLLARfatal] = ACTIONS(1),
    [anon_sym_DOLLARfclose] = ACTIONS(1),
    [anon_sym_DOLLARfdisplay] = ACTIONS(1),
    [anon_sym_DOLLARfeof] = ACTIONS(1),
    [anon_sym_DOLLARfflush] = ACTIONS(1),
    [anon_sym_DOLLARfgetc] = ACTIONS(1),
    [anon_sym_DOLLARfgets] = ACTIONS(1),
    [anon_sym_DOLLARfinish] = ACTIONS(1),
    [anon_sym_DOLLARfloor] = ACTIONS(1),
    [anon_sym_DOLLARfopen] = ACTIONS(1),
    [anon_sym_DOLLARfscanf] = ACTIONS(1),
    [anon_sym_DOLLARfwrite] = ACTIONS(1),
    [anon_sym_DOLLARinfo] = ACTIONS(1),
    [anon_sym_DOLLARisunknown] = ACTIONS(1),
    [anon_sym_DOLLARitor] = ACTIONS(1),
    [anon_sym_DOLLARln] = ACTIONS(1),
    [anon_sym_DOLLARlog10] = ACTIONS(1),
    [anon_sym_DOLLARonehot] = ACTIONS(3),
    [anon_sym_DOLLARonehot0] = ACTIONS(1),
    [anon_sym_DOLLARpow] = ACTIONS(1),
    [anon_sym_DOLLARrandom] = ACTIONS(1),
    [anon_sym_DOLLARreadmemb] = ACTIONS(1),
    [anon_sym_DOLLARreadmemh] = ACTIONS(1),
    [anon_sym_DOLLARrealtime] = ACTIONS(1),
    [anon_sym_DOLLARrealtobits] = ACTIONS(1),
    [anon_sym_DOLLARrtoi] = ACTIONS(1),
    [anon_sym_DOLLARsformat] = ACTIONS(1),
    [anon_sym_DOLLARsigned] = ACTIONS(1),
    [anon_sym_DOLLARsqrt] = ACTIONS(1),
    [anon_sym_DOLLARsscanf] = ACTIONS(1),
    [anon_sym_DOLLARstime] = ACTIONS(1),
    [anon_sym_DOLLARstop] = ACTIONS(1),
    [anon_sym_DOLLARswrite] = ACTIONS(1),
    [anon_sym_DOLLARsystem] = ACTIONS(1),
    [anon_sym_DOLLARtest_DOLLARplusargs] = ACTIONS(1),
    [anon_sym_DOLLARtime] = ACTIONS(1),
    [anon_sym_DOLLARunit] = ACTIONS(1),
    [anon_sym_DOLLARunsigned] = ACTIONS(1),
    [anon_sym_DOLLARvalue_DOLLARplusargs] = ACTIONS(1),
    [anon_sym_DOLLARwarning] = ACTIONS(1),
    [anon_sym_DOLLARwrite] = ACTIONS(1),
    [anon_sym_always_comb] = ACTIONS(3),
    [anon_sym_always_latch] = ACTIONS(3),
    [anon_sym_always_ff] = ACTIONS(3),
    [anon_sym_LT_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_AT_STAR] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym_LPAREN_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_matches] = ACTIONS(3),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS_COLON] = ACTIONS(1),
    [anon_sym_DASH_COLON] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(3),
    [anon_sym_null] = ACTIONS(3),
    [anon_sym_TILDE_PIPE] = ACTIONS(1),
    [anon_sym_TILDE_CARET] = ACTIONS(1),
    [anon_sym_TILDE_AMP] = ACTIONS(1),
    [anon_sym_CARET_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(1),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(3),
    [anon_sym_LT_LT_LT] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(3),
    [sym_real_number] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(3),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DOLLARroot] = ACTIONS(1),
    [sym_simple_identifier] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym__description] = STATE(8),
    [sym_module_header] = STATE(6),
    [sym_module_declaration] = STATE(8),
    [sym_module_keyword] = STATE(7),
    [sym_attribute_instance] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_module_header_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_macromodule] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [2] = {
    [sym_module_header] = STATE(10),
    [sym_module_keyword] = STATE(7),
    [sym_attribute_instance] = STATE(9),
    [aux_sym_module_header_repeat1] = STATE(9),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_macromodule] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [3] = {
    [anon_sym_static] = ACTIONS(13),
    [anon_sym_automatic] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(13),
  },
  [4] = {
    [sym_attr_spec] = STATE(12),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [6] = {
    [sym_module_nonansi_header] = STATE(16),
    [sym_module_ansi_header] = STATE(17),
    [sym_list_of_ports] = STATE(18),
    [sym_list_of_port_declarations] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(19),
  },
  [7] = {
    [sym_lifetime] = STATE(21),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(23),
    [anon_sym_static] = ACTIONS(21),
    [anon_sym_automatic] = ACTIONS(21),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [8] = {
    [sym__description] = STATE(24),
    [sym_module_header] = STATE(6),
    [sym_module_declaration] = STATE(24),
    [sym_module_keyword] = STATE(7),
    [sym_attribute_instance] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym_module_header_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_macromodule] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [9] = {
    [sym_module_keyword] = STATE(25),
    [sym_attribute_instance] = STATE(26),
    [aux_sym_module_header_repeat1] = STATE(26),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_macromodule] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [10] = {
    [sym_module_nonansi_header] = STATE(28),
    [sym_module_ansi_header] = STATE(28),
    [sym_list_of_ports] = STATE(18),
    [sym_list_of_port_declarations] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(27),
  },
  [11] = {
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(29),
    [anon_sym_STAR_RPAREN] = ACTIONS(29),
    [sym_simple_identifier] = ACTIONS(29),
  },
  [12] = {
    [aux_sym_attribute_instance_repeat1] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_STAR_RPAREN] = ACTIONS(33),
  },
  [13] = {
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_STAR_RPAREN] = ACTIONS(35),
  },
  [14] = {
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_STAR_RPAREN] = ACTIONS(39),
  },
  [15] = {
    [sym_port] = STATE(43),
    [sym__port_expression] = STATE(44),
    [sym_port_reference] = STATE(44),
    [sym_port_direction] = STATE(45),
    [sym_net_port_header] = STATE(46),
    [sym_ansi_port_declaration] = STATE(47),
    [sym_data_type] = STATE(48),
    [sym__data_type_or_implicit] = STATE(48),
    [sym_implicit_data_type] = STATE(48),
    [sym_integer_atom_type] = STATE(49),
    [sym_integer_vector_type] = STATE(50),
    [sym_non_integer_type] = STATE(37),
    [sym_net_type] = STATE(51),
    [sym_net_port_type] = STATE(52),
    [sym__signing] = STATE(53),
    [sym_packed_dimension] = STATE(58),
    [sym_unsized_dimension] = STATE(54),
    [sym_attribute_instance] = STATE(57),
    [sym_identifier] = STATE(55),
    [sym_port_identifier] = STATE(56),
    [aux_sym_module_header_repeat1] = STATE(57),
    [aux_sym_data_type_repeat1] = STATE(58),
    [anon_sym_DOT_STAR] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_input] = ACTIONS(45),
    [anon_sym_output] = ACTIONS(45),
    [anon_sym_inout] = ACTIONS(45),
    [anon_sym_ref] = ACTIONS(45),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_chandle] = ACTIONS(47),
    [anon_sym_event] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(51),
    [anon_sym_shortint] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_longint] = ACTIONS(51),
    [anon_sym_integer] = ACTIONS(51),
    [anon_sym_time] = ACTIONS(51),
    [anon_sym_bit] = ACTIONS(53),
    [anon_sym_logic] = ACTIONS(53),
    [anon_sym_reg] = ACTIONS(53),
    [anon_sym_shortreal] = ACTIONS(55),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(55),
    [anon_sym_supply0] = ACTIONS(57),
    [anon_sym_supply1] = ACTIONS(57),
    [anon_sym_tri] = ACTIONS(57),
    [anon_sym_triand] = ACTIONS(57),
    [anon_sym_trior] = ACTIONS(57),
    [anon_sym_trireg] = ACTIONS(57),
    [anon_sym_tri0] = ACTIONS(57),
    [anon_sym_tri1] = ACTIONS(57),
    [anon_sym_uwire] = ACTIONS(57),
    [anon_sym_wire] = ACTIONS(57),
    [anon_sym_wand] = ACTIONS(57),
    [anon_sym_wor] = ACTIONS(57),
    [anon_sym_signed] = ACTIONS(59),
    [anon_sym_unsigned] = ACTIONS(59),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [16] = {
    [anon_sym_endmodule] = ACTIONS(61),
  },
  [17] = {
    [sym_module_header] = STATE(63),
    [sym_module_declaration] = STATE(67),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(64),
    [sym_module_or_generate_item] = STATE(67),
    [sym__non_port_module_item] = STATE(67),
    [sym_parameter_override] = STATE(64),
    [sym_module_instantiation] = STATE(64),
    [sym_attribute_instance] = STATE(66),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(65),
    [aux_sym_module_header_repeat1] = STATE(66),
    [aux_sym_module_declaration_repeat1] = STATE(67),
    [anon_sym_endmodule] = ACTIONS(63),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [18] = {
    [anon_sym_SEMI] = ACTIONS(73),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(75),
  },
  [20] = {
    [sym_simple_identifier] = ACTIONS(77),
  },
  [21] = {
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(70),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [22] = {
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
    [sym_simple_identifier] = ACTIONS(79),
  },
  [23] = {
    [sym_parameter_port_list] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(83),
  },
  [24] = {
    [sym__description] = STATE(24),
    [sym_module_header] = STATE(6),
    [sym_module_declaration] = STATE(24),
    [sym_module_keyword] = STATE(7),
    [sym_attribute_instance] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym_module_header_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_extern] = ACTIONS(87),
    [anon_sym_module] = ACTIONS(90),
    [anon_sym_macromodule] = ACTIONS(90),
    [anon_sym_LPAREN_STAR] = ACTIONS(93),
  },
  [25] = {
    [sym_lifetime] = STATE(73),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(70),
    [anon_sym_static] = ACTIONS(21),
    [anon_sym_automatic] = ACTIONS(21),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [26] = {
    [sym_attribute_instance] = STATE(26),
    [aux_sym_module_header_repeat1] = STATE(26),
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_macromodule] = ACTIONS(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(98),
  },
  [27] = {
    [sym_port] = STATE(43),
    [sym__port_expression] = STATE(44),
    [sym_port_reference] = STATE(44),
    [sym_port_direction] = STATE(45),
    [sym_net_port_header] = STATE(46),
    [sym_ansi_port_declaration] = STATE(47),
    [sym_data_type] = STATE(48),
    [sym__data_type_or_implicit] = STATE(48),
    [sym_implicit_data_type] = STATE(48),
    [sym_integer_atom_type] = STATE(49),
    [sym_integer_vector_type] = STATE(50),
    [sym_non_integer_type] = STATE(37),
    [sym_net_type] = STATE(51),
    [sym_net_port_type] = STATE(52),
    [sym__signing] = STATE(53),
    [sym_packed_dimension] = STATE(58),
    [sym_unsized_dimension] = STATE(54),
    [sym_attribute_instance] = STATE(57),
    [sym_identifier] = STATE(55),
    [sym_port_identifier] = STATE(56),
    [aux_sym_module_header_repeat1] = STATE(57),
    [aux_sym_data_type_repeat1] = STATE(58),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_input] = ACTIONS(45),
    [anon_sym_output] = ACTIONS(45),
    [anon_sym_inout] = ACTIONS(45),
    [anon_sym_ref] = ACTIONS(45),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_chandle] = ACTIONS(47),
    [anon_sym_event] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(51),
    [anon_sym_shortint] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_longint] = ACTIONS(51),
    [anon_sym_integer] = ACTIONS(51),
    [anon_sym_time] = ACTIONS(51),
    [anon_sym_bit] = ACTIONS(53),
    [anon_sym_logic] = ACTIONS(53),
    [anon_sym_reg] = ACTIONS(53),
    [anon_sym_shortreal] = ACTIONS(55),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(55),
    [anon_sym_supply0] = ACTIONS(57),
    [anon_sym_supply1] = ACTIONS(57),
    [anon_sym_tri] = ACTIONS(57),
    [anon_sym_triand] = ACTIONS(57),
    [anon_sym_trior] = ACTIONS(57),
    [anon_sym_trireg] = ACTIONS(57),
    [anon_sym_tri0] = ACTIONS(57),
    [anon_sym_tri1] = ACTIONS(57),
    [anon_sym_uwire] = ACTIONS(57),
    [anon_sym_wire] = ACTIONS(57),
    [anon_sym_wand] = ACTIONS(57),
    [anon_sym_wor] = ACTIONS(57),
    [anon_sym_signed] = ACTIONS(59),
    [anon_sym_unsigned] = ACTIONS(59),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_extern] = ACTIONS(101),
    [anon_sym_module] = ACTIONS(101),
    [anon_sym_macromodule] = ACTIONS(101),
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
  },
  [29] = {
    [anon_sym_SEMI] = ACTIONS(103),
  },
  [30] = {
    [sym_attr_spec] = STATE(75),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [31] = {
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_DOT_STAR] = ACTIONS(107),
    [anon_sym_module] = ACTIONS(107),
    [anon_sym_macromodule] = ACTIONS(107),
    [anon_sym_input] = ACTIONS(107),
    [anon_sym_output] = ACTIONS(107),
    [anon_sym_inout] = ACTIONS(107),
    [anon_sym_ref] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_string] = ACTIONS(107),
    [anon_sym_chandle] = ACTIONS(107),
    [anon_sym_event] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_byte] = ACTIONS(107),
    [anon_sym_shortint] = ACTIONS(107),
    [anon_sym_int] = ACTIONS(105),
    [anon_sym_longint] = ACTIONS(107),
    [anon_sym_integer] = ACTIONS(107),
    [anon_sym_time] = ACTIONS(107),
    [anon_sym_bit] = ACTIONS(107),
    [anon_sym_logic] = ACTIONS(107),
    [anon_sym_reg] = ACTIONS(107),
    [anon_sym_shortreal] = ACTIONS(107),
    [anon_sym_real] = ACTIONS(105),
    [anon_sym_realtime] = ACTIONS(107),
    [anon_sym_supply0] = ACTIONS(107),
    [anon_sym_supply1] = ACTIONS(107),
    [anon_sym_tri] = ACTIONS(105),
    [anon_sym_triand] = ACTIONS(107),
    [anon_sym_trior] = ACTIONS(107),
    [anon_sym_trireg] = ACTIONS(107),
    [anon_sym_tri0] = ACTIONS(107),
    [anon_sym_tri1] = ACTIONS(107),
    [anon_sym_uwire] = ACTIONS(107),
    [anon_sym_wire] = ACTIONS(107),
    [anon_sym_wand] = ACTIONS(107),
    [anon_sym_wor] = ACTIONS(107),
    [anon_sym_signed] = ACTIONS(107),
    [anon_sym_unsigned] = ACTIONS(107),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_this] = ACTIONS(107),
    [anon_sym_null] = ACTIONS(107),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(105),
    [sym_real_number] = ACTIONS(105),
    [anon_sym_LPAREN_STAR] = ACTIONS(107),
  },
  [32] = {
    [aux_sym_attribute_instance_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_STAR_RPAREN] = ACTIONS(109),
  },
  [33] = {
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_STAR_RPAREN] = ACTIONS(111),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(113),
  },
  [35] = {
    [anon_sym_SEMI] = ACTIONS(115),
  },
  [36] = {
    [anon_sym_string] = ACTIONS(117),
    [anon_sym_chandle] = ACTIONS(117),
    [anon_sym_event] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_byte] = ACTIONS(117),
    [anon_sym_shortint] = ACTIONS(117),
    [anon_sym_int] = ACTIONS(119),
    [anon_sym_longint] = ACTIONS(117),
    [anon_sym_integer] = ACTIONS(117),
    [anon_sym_time] = ACTIONS(117),
    [anon_sym_bit] = ACTIONS(117),
    [anon_sym_logic] = ACTIONS(117),
    [anon_sym_reg] = ACTIONS(117),
    [anon_sym_shortreal] = ACTIONS(117),
    [anon_sym_real] = ACTIONS(119),
    [anon_sym_realtime] = ACTIONS(117),
    [anon_sym_supply0] = ACTIONS(117),
    [anon_sym_supply1] = ACTIONS(117),
    [anon_sym_tri] = ACTIONS(119),
    [anon_sym_triand] = ACTIONS(117),
    [anon_sym_trior] = ACTIONS(117),
    [anon_sym_trireg] = ACTIONS(117),
    [anon_sym_tri0] = ACTIONS(117),
    [anon_sym_tri1] = ACTIONS(117),
    [anon_sym_uwire] = ACTIONS(117),
    [anon_sym_wire] = ACTIONS(117),
    [anon_sym_wand] = ACTIONS(117),
    [anon_sym_wor] = ACTIONS(117),
    [anon_sym_signed] = ACTIONS(117),
    [anon_sym_unsigned] = ACTIONS(117),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [sym_simple_identifier] = ACTIONS(121),
  },
  [38] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(85),
    [sym_constant_range] = STATE(86),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [39] = {
    [anon_sym_signed] = ACTIONS(135),
    [anon_sym_unsigned] = ACTIONS(135),
    [sym_simple_identifier] = ACTIONS(135),
  },
  [40] = {
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_signed] = ACTIONS(139),
    [anon_sym_unsigned] = ACTIONS(139),
    [sym_simple_identifier] = ACTIONS(139),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(141),
    [sym_simple_identifier] = ACTIONS(141),
  },
  [42] = {
    [anon_sym_string] = ACTIONS(143),
    [anon_sym_chandle] = ACTIONS(143),
    [anon_sym_event] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_byte] = ACTIONS(143),
    [anon_sym_shortint] = ACTIONS(143),
    [anon_sym_int] = ACTIONS(145),
    [anon_sym_longint] = ACTIONS(143),
    [anon_sym_integer] = ACTIONS(143),
    [anon_sym_time] = ACTIONS(143),
    [anon_sym_bit] = ACTIONS(143),
    [anon_sym_logic] = ACTIONS(143),
    [anon_sym_reg] = ACTIONS(143),
    [anon_sym_shortreal] = ACTIONS(143),
    [anon_sym_real] = ACTIONS(145),
    [anon_sym_realtime] = ACTIONS(143),
    [anon_sym_signed] = ACTIONS(143),
    [anon_sym_unsigned] = ACTIONS(143),
  },
  [43] = {
    [aux_sym_list_of_ports_repeat1] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(149),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
  },
  [45] = {
    [sym_data_type] = STATE(48),
    [sym__data_type_or_implicit] = STATE(48),
    [sym_implicit_data_type] = STATE(48),
    [sym_integer_atom_type] = STATE(49),
    [sym_integer_vector_type] = STATE(50),
    [sym_non_integer_type] = STATE(37),
    [sym_net_type] = STATE(51),
    [sym_net_port_type] = STATE(97),
    [sym__signing] = STATE(53),
    [sym_packed_dimension] = STATE(58),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(58),
    [anon_sym_string] = ACTIONS(153),
    [anon_sym_chandle] = ACTIONS(153),
    [anon_sym_event] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(155),
    [anon_sym_shortint] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_longint] = ACTIONS(155),
    [anon_sym_integer] = ACTIONS(155),
    [anon_sym_time] = ACTIONS(155),
    [anon_sym_bit] = ACTIONS(157),
    [anon_sym_logic] = ACTIONS(157),
    [anon_sym_reg] = ACTIONS(157),
    [anon_sym_shortreal] = ACTIONS(159),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(159),
    [anon_sym_supply0] = ACTIONS(161),
    [anon_sym_supply1] = ACTIONS(161),
    [anon_sym_tri] = ACTIONS(57),
    [anon_sym_triand] = ACTIONS(161),
    [anon_sym_trior] = ACTIONS(161),
    [anon_sym_trireg] = ACTIONS(161),
    [anon_sym_tri0] = ACTIONS(161),
    [anon_sym_tri1] = ACTIONS(161),
    [anon_sym_uwire] = ACTIONS(161),
    [anon_sym_wire] = ACTIONS(161),
    [anon_sym_wand] = ACTIONS(161),
    [anon_sym_wor] = ACTIONS(161),
    [anon_sym_signed] = ACTIONS(163),
    [anon_sym_unsigned] = ACTIONS(163),
  },
  [46] = {
    [sym_identifier] = STATE(55),
    [sym_port_identifier] = STATE(98),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [47] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
  },
  [48] = {
    [sym_simple_identifier] = ACTIONS(169),
  },
  [49] = {
    [sym__signing] = STATE(102),
    [anon_sym_signed] = ACTIONS(171),
    [anon_sym_unsigned] = ACTIONS(171),
    [sym_simple_identifier] = ACTIONS(173),
  },
  [50] = {
    [sym__signing] = STATE(103),
    [sym_packed_dimension] = STATE(104),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(104),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_signed] = ACTIONS(175),
    [anon_sym_unsigned] = ACTIONS(175),
    [sym_simple_identifier] = ACTIONS(173),
  },
  [51] = {
    [sym_data_type] = STATE(105),
    [sym__data_type_or_implicit] = STATE(105),
    [sym_implicit_data_type] = STATE(105),
    [sym_integer_atom_type] = STATE(49),
    [sym_integer_vector_type] = STATE(50),
    [sym_non_integer_type] = STATE(37),
    [sym__signing] = STATE(53),
    [sym_packed_dimension] = STATE(58),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(58),
    [anon_sym_string] = ACTIONS(153),
    [anon_sym_chandle] = ACTIONS(153),
    [anon_sym_event] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(155),
    [anon_sym_shortint] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_longint] = ACTIONS(155),
    [anon_sym_integer] = ACTIONS(155),
    [anon_sym_time] = ACTIONS(155),
    [anon_sym_bit] = ACTIONS(157),
    [anon_sym_logic] = ACTIONS(157),
    [anon_sym_reg] = ACTIONS(157),
    [anon_sym_shortreal] = ACTIONS(159),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(159),
    [anon_sym_signed] = ACTIONS(163),
    [anon_sym_unsigned] = ACTIONS(163),
  },
  [52] = {
    [sym_simple_identifier] = ACTIONS(177),
  },
  [53] = {
    [sym_packed_dimension] = STATE(106),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(106),
    [anon_sym_LBRACK] = ACTIONS(49),
  },
  [54] = {
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym_simple_identifier] = ACTIONS(179),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
  },
  [56] = {
    [sym_constant_bit_select] = STATE(109),
    [sym_constant_select] = STATE(110),
    [aux_sym_constant_select_repeat1] = STATE(111),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
  },
  [57] = {
    [sym_port_direction] = STATE(45),
    [sym_net_port_header] = STATE(46),
    [sym_ansi_port_declaration] = STATE(112),
    [sym_data_type] = STATE(48),
    [sym__data_type_or_implicit] = STATE(48),
    [sym_implicit_data_type] = STATE(48),
    [sym_integer_atom_type] = STATE(49),
    [sym_integer_vector_type] = STATE(50),
    [sym_non_integer_type] = STATE(37),
    [sym_net_type] = STATE(51),
    [sym_net_port_type] = STATE(52),
    [sym__signing] = STATE(53),
    [sym_packed_dimension] = STATE(58),
    [sym_unsized_dimension] = STATE(54),
    [sym_attribute_instance] = STATE(113),
    [aux_sym_module_header_repeat1] = STATE(113),
    [aux_sym_data_type_repeat1] = STATE(58),
    [anon_sym_input] = ACTIONS(189),
    [anon_sym_output] = ACTIONS(189),
    [anon_sym_inout] = ACTIONS(189),
    [anon_sym_ref] = ACTIONS(189),
    [anon_sym_string] = ACTIONS(153),
    [anon_sym_chandle] = ACTIONS(153),
    [anon_sym_event] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(155),
    [anon_sym_shortint] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_longint] = ACTIONS(155),
    [anon_sym_integer] = ACTIONS(155),
    [anon_sym_time] = ACTIONS(155),
    [anon_sym_bit] = ACTIONS(157),
    [anon_sym_logic] = ACTIONS(157),
    [anon_sym_reg] = ACTIONS(157),
    [anon_sym_shortreal] = ACTIONS(159),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(159),
    [anon_sym_supply0] = ACTIONS(161),
    [anon_sym_supply1] = ACTIONS(161),
    [anon_sym_tri] = ACTIONS(57),
    [anon_sym_triand] = ACTIONS(161),
    [anon_sym_trior] = ACTIONS(161),
    [anon_sym_trireg] = ACTIONS(161),
    [anon_sym_tri0] = ACTIONS(161),
    [anon_sym_tri1] = ACTIONS(161),
    [anon_sym_uwire] = ACTIONS(161),
    [anon_sym_wire] = ACTIONS(161),
    [anon_sym_wand] = ACTIONS(161),
    [anon_sym_wor] = ACTIONS(161),
    [anon_sym_signed] = ACTIONS(163),
    [anon_sym_unsigned] = ACTIONS(163),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [58] = {
    [sym_packed_dimension] = STATE(114),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_simple_identifier] = ACTIONS(191),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_extern] = ACTIONS(101),
    [anon_sym_module] = ACTIONS(101),
    [anon_sym_macromodule] = ACTIONS(101),
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
  },
  [60] = {
    [sym_module_header] = STATE(116),
    [sym_module_keyword] = STATE(7),
    [sym_attribute_instance] = STATE(9),
    [aux_sym_module_header_repeat1] = STATE(9),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_macromodule] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [61] = {
    [sym_list_of_defparam_assignments] = STATE(118),
    [sym_defparam_assignment] = STATE(119),
    [sym_hierarchical_identifier] = STATE(120),
    [sym_hierarchical_parameter_identifier] = STATE(121),
    [sym_identifier] = STATE(122),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(123),
    [anon_sym_DOLLARroot] = ACTIONS(195),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [62] = {
    [sym_attr_spec] = STATE(124),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [63] = {
    [sym_module_nonansi_header] = STATE(126),
    [sym_module_ansi_header] = STATE(127),
    [sym_list_of_ports] = STATE(18),
    [sym_list_of_port_declarations] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(197),
  },
  [64] = {
    [anon_sym_endmodule] = ACTIONS(199),
    [anon_sym_extern] = ACTIONS(199),
    [anon_sym_module] = ACTIONS(199),
    [anon_sym_macromodule] = ACTIONS(199),
    [anon_sym_defparam] = ACTIONS(199),
    [anon_sym_LPAREN_STAR] = ACTIONS(201),
    [sym_simple_identifier] = ACTIONS(199),
  },
  [65] = {
    [sym_parameter_value_assignment] = STATE(129),
    [sym_hierarchical_instance] = STATE(130),
    [sym_name_of_instance] = STATE(131),
    [sym_identifier] = STATE(132),
    [sym_instance_identifier] = STATE(133),
    [anon_sym_POUND] = ACTIONS(203),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [66] = {
    [sym_module_keyword] = STATE(25),
    [sym__module_common_item] = STATE(134),
    [sym_parameter_override] = STATE(134),
    [sym_module_instantiation] = STATE(134),
    [sym_attribute_instance] = STATE(135),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(65),
    [aux_sym_module_header_repeat1] = STATE(135),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [67] = {
    [sym_module_header] = STATE(63),
    [sym_module_declaration] = STATE(137),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(64),
    [sym_module_or_generate_item] = STATE(137),
    [sym__non_port_module_item] = STATE(137),
    [sym_parameter_override] = STATE(64),
    [sym_module_instantiation] = STATE(64),
    [sym_attribute_instance] = STATE(66),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(65),
    [aux_sym_module_header_repeat1] = STATE(66),
    [aux_sym_module_declaration_repeat1] = STATE(137),
    [anon_sym_endmodule] = ACTIONS(205),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_endmodule] = ACTIONS(207),
    [anon_sym_extern] = ACTIONS(207),
    [anon_sym_module] = ACTIONS(207),
    [anon_sym_macromodule] = ACTIONS(207),
    [anon_sym_LPAREN_STAR] = ACTIONS(207),
  },
  [69] = {
    [anon_sym_endmodule] = ACTIONS(209),
    [anon_sym_extern] = ACTIONS(209),
    [anon_sym_module] = ACTIONS(209),
    [anon_sym_macromodule] = ACTIONS(209),
    [anon_sym_defparam] = ACTIONS(209),
    [anon_sym_LPAREN_STAR] = ACTIONS(211),
    [sym_simple_identifier] = ACTIONS(209),
  },
  [70] = {
    [sym_parameter_port_list] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_POUND] = ACTIONS(83),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(215),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(213),
  },
  [73] = {
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(140),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_extern] = ACTIONS(211),
    [anon_sym_module] = ACTIONS(211),
    [anon_sym_macromodule] = ACTIONS(211),
    [anon_sym_LPAREN_STAR] = ACTIONS(211),
  },
  [75] = {
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_STAR_RPAREN] = ACTIONS(217),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_DOT_STAR] = ACTIONS(221),
    [anon_sym_module] = ACTIONS(221),
    [anon_sym_macromodule] = ACTIONS(221),
    [anon_sym_input] = ACTIONS(221),
    [anon_sym_output] = ACTIONS(221),
    [anon_sym_inout] = ACTIONS(221),
    [anon_sym_ref] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_string] = ACTIONS(221),
    [anon_sym_chandle] = ACTIONS(221),
    [anon_sym_event] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_byte] = ACTIONS(221),
    [anon_sym_shortint] = ACTIONS(221),
    [anon_sym_int] = ACTIONS(219),
    [anon_sym_longint] = ACTIONS(221),
    [anon_sym_integer] = ACTIONS(221),
    [anon_sym_time] = ACTIONS(221),
    [anon_sym_bit] = ACTIONS(221),
    [anon_sym_logic] = ACTIONS(221),
    [anon_sym_reg] = ACTIONS(221),
    [anon_sym_shortreal] = ACTIONS(221),
    [anon_sym_real] = ACTIONS(219),
    [anon_sym_realtime] = ACTIONS(221),
    [anon_sym_supply0] = ACTIONS(221),
    [anon_sym_supply1] = ACTIONS(221),
    [anon_sym_tri] = ACTIONS(219),
    [anon_sym_triand] = ACTIONS(221),
    [anon_sym_trior] = ACTIONS(221),
    [anon_sym_trireg] = ACTIONS(221),
    [anon_sym_tri0] = ACTIONS(221),
    [anon_sym_tri1] = ACTIONS(221),
    [anon_sym_uwire] = ACTIONS(221),
    [anon_sym_wire] = ACTIONS(221),
    [anon_sym_wand] = ACTIONS(221),
    [anon_sym_wor] = ACTIONS(221),
    [anon_sym_signed] = ACTIONS(221),
    [anon_sym_unsigned] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_this] = ACTIONS(221),
    [anon_sym_null] = ACTIONS(221),
    [anon_sym_DASH_DASH] = ACTIONS(221),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(219),
    [sym_real_number] = ACTIONS(219),
    [anon_sym_LPAREN_STAR] = ACTIONS(221),
  },
  [77] = {
    [aux_sym_attribute_instance_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_STAR_RPAREN] = ACTIONS(217),
  },
  [78] = {
    [anon_sym_SEMI] = ACTIONS(226),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(228),
    [sym_simple_identifier] = ACTIONS(228),
  },
  [80] = {
    [anon_sym_LBRACE] = ACTIONS(230),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [sym_real_number] = ACTIONS(232),
    [anon_sym_LPAREN_STAR] = ACTIONS(230),
    [sym_simple_identifier] = ACTIONS(230),
  },
  [81] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(142),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [82] = {
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_COLON] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_RBRACK] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_PERCENT] = ACTIONS(234),
    [anon_sym_EQ_EQ] = ACTIONS(236),
    [anon_sym_BANG_EQ] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(234),
    [anon_sym_GT] = ACTIONS(236),
    [anon_sym_GT_EQ] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_QMARK] = ACTIONS(234),
    [anon_sym_TILDE_CARET] = ACTIONS(234),
    [anon_sym_CARET_TILDE] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_AMP] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_CARET] = ACTIONS(236),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(234),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(234),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(234),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(234),
    [anon_sym_LT_DASH_GT] = ACTIONS(234),
    [anon_sym_GT_GT_GT] = ACTIONS(234),
    [anon_sym_LT_LT_LT] = ACTIONS(234),
    [anon_sym_GT_GT] = ACTIONS(236),
    [anon_sym_LT_LT] = ACTIONS(236),
    [anon_sym_AMP_AMP] = ACTIONS(234),
    [anon_sym_PIPE_PIPE] = ACTIONS(234),
    [anon_sym_DASH_GT] = ACTIONS(234),
  },
  [83] = {
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(238),
    [anon_sym_QMARK] = ACTIONS(238),
    [anon_sym_TILDE_CARET] = ACTIONS(238),
    [anon_sym_CARET_TILDE] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_CARET] = ACTIONS(240),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(238),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(238),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(238),
    [anon_sym_LT_DASH_GT] = ACTIONS(238),
    [anon_sym_GT_GT_GT] = ACTIONS(238),
    [anon_sym_LT_LT_LT] = ACTIONS(238),
    [anon_sym_GT_GT] = ACTIONS(240),
    [anon_sym_LT_LT] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [anon_sym_DASH_GT] = ACTIONS(238),
  },
  [84] = {
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_RBRACK] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_STAR_STAR] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(242),
    [anon_sym_EQ_EQ] = ACTIONS(244),
    [anon_sym_BANG_EQ] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(244),
    [anon_sym_LT_EQ] = ACTIONS(242),
    [anon_sym_GT] = ACTIONS(244),
    [anon_sym_GT_EQ] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(242),
    [anon_sym_TILDE_CARET] = ACTIONS(242),
    [anon_sym_CARET_TILDE] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_CARET] = ACTIONS(244),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(242),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(242),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(242),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(242),
    [anon_sym_LT_DASH_GT] = ACTIONS(242),
    [anon_sym_GT_GT_GT] = ACTIONS(242),
    [anon_sym_LT_LT_LT] = ACTIONS(242),
    [anon_sym_GT_GT] = ACTIONS(244),
    [anon_sym_LT_LT] = ACTIONS(244),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(242),
    [anon_sym_DASH_GT] = ACTIONS(242),
  },
  [85] = {
    [sym_binary_operator] = STATE(147),
    [anon_sym_COLON] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [86] = {
    [anon_sym_RBRACK] = ACTIONS(256),
  },
  [87] = {
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_COLON] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(260),
    [anon_sym_RBRACK] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(258),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(260),
    [anon_sym_LT_EQ] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_QMARK] = ACTIONS(258),
    [anon_sym_TILDE_CARET] = ACTIONS(258),
    [anon_sym_CARET_TILDE] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_CARET] = ACTIONS(260),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(258),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(258),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(258),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(258),
    [anon_sym_LT_DASH_GT] = ACTIONS(258),
    [anon_sym_GT_GT_GT] = ACTIONS(258),
    [anon_sym_LT_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(260),
    [anon_sym_AMP_AMP] = ACTIONS(258),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_DASH_GT] = ACTIONS(258),
  },
  [88] = {
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_RBRACK] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_STAR_STAR] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(242),
    [anon_sym_EQ_EQ] = ACTIONS(244),
    [anon_sym_BANG_EQ] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(244),
    [anon_sym_LT_EQ] = ACTIONS(242),
    [anon_sym_GT] = ACTIONS(244),
    [anon_sym_GT_EQ] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(242),
    [anon_sym_TILDE_CARET] = ACTIONS(242),
    [anon_sym_CARET_TILDE] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_CARET] = ACTIONS(244),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(242),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(242),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(242),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(242),
    [anon_sym_LT_DASH_GT] = ACTIONS(242),
    [anon_sym_GT_GT_GT] = ACTIONS(242),
    [anon_sym_LT_LT_LT] = ACTIONS(242),
    [anon_sym_GT_GT] = ACTIONS(244),
    [anon_sym_LT_LT] = ACTIONS(244),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(242),
    [anon_sym_DASH_GT] = ACTIONS(242),
  },
  [89] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_primary] = STATE(150),
    [sym_primary_literal] = STATE(88),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(151),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(151),
    [anon_sym_LBRACE] = ACTIONS(127),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [90] = {
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_COLON] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_STAR_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_QMARK] = ACTIONS(264),
    [anon_sym_TILDE_CARET] = ACTIONS(264),
    [anon_sym_CARET_TILDE] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(266),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(264),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(264),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(264),
    [anon_sym_LT_DASH_GT] = ACTIONS(264),
    [anon_sym_GT_GT_GT] = ACTIONS(264),
    [anon_sym_LT_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(264),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_DASH_GT] = ACTIONS(264),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_DOT] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(268),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(268),
  },
  [92] = {
    [anon_sym_DOT] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(270),
  },
  [93] = {
    [sym_constant_bit_select] = STATE(109),
    [sym_constant_select] = STATE(143),
    [aux_sym_constant_select_repeat1] = STATE(111),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
  },
  [94] = {
    [anon_sym_SEMI] = ACTIONS(272),
  },
  [95] = {
    [sym_port] = STATE(152),
    [sym__port_expression] = STATE(44),
    [sym_port_reference] = STATE(44),
    [sym_identifier] = STATE(55),
    [sym_port_identifier] = STATE(56),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [96] = {
    [aux_sym_list_of_ports_repeat1] = STATE(154),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(149),
  },
  [97] = {
    [sym_simple_identifier] = ACTIONS(276),
  },
  [98] = {
    [sym_unpacked_dimension] = STATE(157),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(157),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_EQ] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(282),
  },
  [99] = {
    [anon_sym_SEMI] = ACTIONS(284),
  },
  [100] = {
    [sym_port_direction] = STATE(45),
    [sym_net_port_header] = STATE(46),
    [sym_ansi_port_declaration] = STATE(158),
    [sym_data_type] = STATE(48),
    [sym__data_type_or_implicit] = STATE(48),
    [sym_implicit_data_type] = STATE(48),
    [sym_integer_atom_type] = STATE(49),
    [sym_integer_vector_type] = STATE(50),
    [sym_non_integer_type] = STATE(37),
    [sym_net_type] = STATE(51),
    [sym_net_port_type] = STATE(52),
    [sym__signing] = STATE(53),
    [sym_packed_dimension] = STATE(58),
    [sym_unsized_dimension] = STATE(54),
    [sym_attribute_instance] = STATE(159),
    [aux_sym_module_header_repeat1] = STATE(159),
    [aux_sym_data_type_repeat1] = STATE(58),
    [anon_sym_input] = ACTIONS(189),
    [anon_sym_output] = ACTIONS(189),
    [anon_sym_inout] = ACTIONS(189),
    [anon_sym_ref] = ACTIONS(189),
    [anon_sym_string] = ACTIONS(153),
    [anon_sym_chandle] = ACTIONS(153),
    [anon_sym_event] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(155),
    [anon_sym_shortint] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_longint] = ACTIONS(155),
    [anon_sym_integer] = ACTIONS(155),
    [anon_sym_time] = ACTIONS(155),
    [anon_sym_bit] = ACTIONS(157),
    [anon_sym_logic] = ACTIONS(157),
    [anon_sym_reg] = ACTIONS(157),
    [anon_sym_shortreal] = ACTIONS(159),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(159),
    [anon_sym_supply0] = ACTIONS(161),
    [anon_sym_supply1] = ACTIONS(161),
    [anon_sym_tri] = ACTIONS(57),
    [anon_sym_triand] = ACTIONS(161),
    [anon_sym_trior] = ACTIONS(161),
    [anon_sym_trireg] = ACTIONS(161),
    [anon_sym_tri0] = ACTIONS(161),
    [anon_sym_tri1] = ACTIONS(161),
    [anon_sym_uwire] = ACTIONS(161),
    [anon_sym_wire] = ACTIONS(161),
    [anon_sym_wand] = ACTIONS(161),
    [anon_sym_wor] = ACTIONS(161),
    [anon_sym_signed] = ACTIONS(163),
    [anon_sym_unsigned] = ACTIONS(163),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [101] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(161),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(167),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_simple_identifier] = ACTIONS(288),
  },
  [103] = {
    [sym_packed_dimension] = STATE(162),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(162),
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_simple_identifier] = ACTIONS(288),
  },
  [104] = {
    [sym_packed_dimension] = STATE(114),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_simple_identifier] = ACTIONS(288),
  },
  [105] = {
    [sym_simple_identifier] = ACTIONS(290),
  },
  [106] = {
    [sym_packed_dimension] = STATE(114),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_simple_identifier] = ACTIONS(292),
  },
  [107] = {
    [sym_identifier] = STATE(163),
    [sym_member_identifier] = STATE(164),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [108] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(165),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [109] = {
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_STAR_STAR] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(294),
    [anon_sym_EQ_EQ] = ACTIONS(296),
    [anon_sym_BANG_EQ] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LT_EQ] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_GT_EQ] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_TILDE_CARET] = ACTIONS(294),
    [anon_sym_CARET_TILDE] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(294),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(294),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(294),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(294),
    [anon_sym_LT_DASH_GT] = ACTIONS(294),
    [anon_sym_GT_GT_GT] = ACTIONS(294),
    [anon_sym_LT_LT_LT] = ACTIONS(294),
    [anon_sym_GT_GT] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_DASH_GT] = ACTIONS(294),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(300),
  },
  [111] = {
    [sym_constant_bit_select] = STATE(167),
    [aux_sym_constant_select_repeat1] = STATE(168),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
  },
  [112] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(169),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(167),
  },
  [113] = {
    [sym_attribute_instance] = STATE(113),
    [aux_sym_module_header_repeat1] = STATE(113),
    [anon_sym_input] = ACTIONS(96),
    [anon_sym_output] = ACTIONS(96),
    [anon_sym_inout] = ACTIONS(96),
    [anon_sym_ref] = ACTIONS(96),
    [anon_sym_string] = ACTIONS(96),
    [anon_sym_chandle] = ACTIONS(96),
    [anon_sym_event] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_byte] = ACTIONS(96),
    [anon_sym_shortint] = ACTIONS(96),
    [anon_sym_int] = ACTIONS(302),
    [anon_sym_longint] = ACTIONS(96),
    [anon_sym_integer] = ACTIONS(96),
    [anon_sym_time] = ACTIONS(96),
    [anon_sym_bit] = ACTIONS(96),
    [anon_sym_logic] = ACTIONS(96),
    [anon_sym_reg] = ACTIONS(96),
    [anon_sym_shortreal] = ACTIONS(96),
    [anon_sym_real] = ACTIONS(302),
    [anon_sym_realtime] = ACTIONS(96),
    [anon_sym_supply0] = ACTIONS(96),
    [anon_sym_supply1] = ACTIONS(96),
    [anon_sym_tri] = ACTIONS(302),
    [anon_sym_triand] = ACTIONS(96),
    [anon_sym_trior] = ACTIONS(96),
    [anon_sym_trireg] = ACTIONS(96),
    [anon_sym_tri0] = ACTIONS(96),
    [anon_sym_tri1] = ACTIONS(96),
    [anon_sym_uwire] = ACTIONS(96),
    [anon_sym_wire] = ACTIONS(96),
    [anon_sym_wand] = ACTIONS(96),
    [anon_sym_wor] = ACTIONS(96),
    [anon_sym_signed] = ACTIONS(96),
    [anon_sym_unsigned] = ACTIONS(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(98),
  },
  [114] = {
    [sym_packed_dimension] = STATE(114),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(304),
    [sym_simple_identifier] = ACTIONS(307),
  },
  [115] = {
    [sym_identifier] = STATE(171),
    [sym_module_identifier] = STATE(172),
    [sym_simple_identifier] = ACTIONS(309),
  },
  [116] = {
    [sym_module_nonansi_header] = STATE(173),
    [sym_module_ansi_header] = STATE(173),
    [sym_list_of_ports] = STATE(174),
    [sym_list_of_port_declarations] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(27),
  },
  [117] = {
    [anon_sym_DOT] = ACTIONS(311),
  },
  [118] = {
    [anon_sym_SEMI] = ACTIONS(313),
  },
  [119] = {
    [aux_sym_list_of_defparam_assignments_repeat1] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(317),
  },
  [120] = {
    [anon_sym_EQ] = ACTIONS(319),
  },
  [121] = {
    [anon_sym_EQ] = ACTIONS(321),
  },
  [122] = {
    [sym_constant_bit_select] = STATE(180),
    [anon_sym_LBRACK] = ACTIONS(187),
  },
  [123] = {
    [sym_identifier] = STATE(181),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(182),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [124] = {
    [aux_sym_attribute_instance_repeat1] = STATE(184),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_STAR_RPAREN] = ACTIONS(323),
  },
  [125] = {
    [sym_port] = STATE(43),
    [sym__port_expression] = STATE(44),
    [sym_port_reference] = STATE(44),
    [sym_port_direction] = STATE(45),
    [sym_net_port_header] = STATE(46),
    [sym_ansi_port_declaration] = STATE(47),
    [sym_data_type] = STATE(48),
    [sym__data_type_or_implicit] = STATE(48),
    [sym_implicit_data_type] = STATE(48),
    [sym_integer_atom_type] = STATE(49),
    [sym_integer_vector_type] = STATE(50),
    [sym_non_integer_type] = STATE(37),
    [sym_net_type] = STATE(51),
    [sym_net_port_type] = STATE(52),
    [sym__signing] = STATE(53),
    [sym_packed_dimension] = STATE(58),
    [sym_unsized_dimension] = STATE(54),
    [sym_attribute_instance] = STATE(57),
    [sym_identifier] = STATE(55),
    [sym_port_identifier] = STATE(56),
    [aux_sym_module_header_repeat1] = STATE(57),
    [aux_sym_data_type_repeat1] = STATE(58),
    [anon_sym_DOT_STAR] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_input] = ACTIONS(45),
    [anon_sym_output] = ACTIONS(45),
    [anon_sym_inout] = ACTIONS(45),
    [anon_sym_ref] = ACTIONS(45),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_chandle] = ACTIONS(47),
    [anon_sym_event] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(51),
    [anon_sym_shortint] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_longint] = ACTIONS(51),
    [anon_sym_integer] = ACTIONS(51),
    [anon_sym_time] = ACTIONS(51),
    [anon_sym_bit] = ACTIONS(53),
    [anon_sym_logic] = ACTIONS(53),
    [anon_sym_reg] = ACTIONS(53),
    [anon_sym_shortreal] = ACTIONS(55),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(55),
    [anon_sym_supply0] = ACTIONS(57),
    [anon_sym_supply1] = ACTIONS(57),
    [anon_sym_tri] = ACTIONS(57),
    [anon_sym_triand] = ACTIONS(57),
    [anon_sym_trior] = ACTIONS(57),
    [anon_sym_trireg] = ACTIONS(57),
    [anon_sym_tri0] = ACTIONS(57),
    [anon_sym_tri1] = ACTIONS(57),
    [anon_sym_uwire] = ACTIONS(57),
    [anon_sym_wire] = ACTIONS(57),
    [anon_sym_wand] = ACTIONS(57),
    [anon_sym_wor] = ACTIONS(57),
    [anon_sym_signed] = ACTIONS(59),
    [anon_sym_unsigned] = ACTIONS(59),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [126] = {
    [anon_sym_endmodule] = ACTIONS(327),
  },
  [127] = {
    [sym_module_header] = STATE(63),
    [sym_module_declaration] = STATE(187),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(64),
    [sym_module_or_generate_item] = STATE(187),
    [sym__non_port_module_item] = STATE(187),
    [sym_parameter_override] = STATE(64),
    [sym_module_instantiation] = STATE(64),
    [sym_attribute_instance] = STATE(66),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(65),
    [aux_sym_module_header_repeat1] = STATE(66),
    [aux_sym_module_declaration_repeat1] = STATE(187),
    [anon_sym_endmodule] = ACTIONS(329),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [128] = {
    [anon_sym_LPAREN] = ACTIONS(331),
  },
  [129] = {
    [sym_hierarchical_instance] = STATE(189),
    [sym_name_of_instance] = STATE(131),
    [sym_identifier] = STATE(132),
    [sym_instance_identifier] = STATE(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [130] = {
    [aux_sym_module_instantiation_repeat1] = STATE(192),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(335),
  },
  [131] = {
    [anon_sym_LPAREN] = ACTIONS(337),
  },
  [132] = {
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
  },
  [133] = {
    [sym_unpacked_dimension] = STATE(194),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(194),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(282),
  },
  [134] = {
    [anon_sym_endmodule] = ACTIONS(343),
    [anon_sym_extern] = ACTIONS(343),
    [anon_sym_module] = ACTIONS(343),
    [anon_sym_macromodule] = ACTIONS(343),
    [anon_sym_defparam] = ACTIONS(343),
    [anon_sym_LPAREN_STAR] = ACTIONS(345),
    [sym_simple_identifier] = ACTIONS(343),
  },
  [135] = {
    [sym_attribute_instance] = STATE(135),
    [aux_sym_module_header_repeat1] = STATE(135),
    [anon_sym_module] = ACTIONS(302),
    [anon_sym_macromodule] = ACTIONS(302),
    [anon_sym_defparam] = ACTIONS(302),
    [anon_sym_LPAREN_STAR] = ACTIONS(347),
    [sym_simple_identifier] = ACTIONS(302),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_COLON] = ACTIONS(352),
    [anon_sym_extern] = ACTIONS(350),
    [anon_sym_module] = ACTIONS(350),
    [anon_sym_macromodule] = ACTIONS(350),
    [anon_sym_LPAREN_STAR] = ACTIONS(350),
  },
  [137] = {
    [sym_module_header] = STATE(63),
    [sym_module_declaration] = STATE(137),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(64),
    [sym_module_or_generate_item] = STATE(137),
    [sym__non_port_module_item] = STATE(137),
    [sym_parameter_override] = STATE(64),
    [sym_module_instantiation] = STATE(64),
    [sym_attribute_instance] = STATE(66),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(65),
    [aux_sym_module_header_repeat1] = STATE(66),
    [aux_sym_module_declaration_repeat1] = STATE(137),
    [anon_sym_endmodule] = ACTIONS(354),
    [anon_sym_extern] = ACTIONS(356),
    [anon_sym_module] = ACTIONS(359),
    [anon_sym_macromodule] = ACTIONS(359),
    [anon_sym_defparam] = ACTIONS(362),
    [anon_sym_LPAREN_STAR] = ACTIONS(365),
    [sym_simple_identifier] = ACTIONS(368),
  },
  [138] = {
    [anon_sym_LPAREN] = ACTIONS(371),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(373),
  },
  [140] = {
    [sym_parameter_port_list] = STATE(197),
    [anon_sym_LPAREN] = ACTIONS(371),
    [anon_sym_POUND] = ACTIONS(83),
  },
  [141] = {
    [anon_sym_endmodule] = ACTIONS(375),
  },
  [142] = {
    [sym_constant_concatenation] = STATE(203),
    [sym_binary_operator] = STATE(204),
    [aux_sym_constant_concatenation_repeat1] = STATE(205),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [143] = {
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_STAR] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
    [anon_sym_EQ_EQ] = ACTIONS(387),
    [anon_sym_BANG_EQ] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_QMARK] = ACTIONS(385),
    [anon_sym_TILDE_CARET] = ACTIONS(385),
    [anon_sym_CARET_TILDE] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(387),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(385),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(385),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(385),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(385),
    [anon_sym_LT_DASH_GT] = ACTIONS(385),
    [anon_sym_GT_GT_GT] = ACTIONS(385),
    [anon_sym_LT_LT_LT] = ACTIONS(385),
    [anon_sym_GT_GT] = ACTIONS(387),
    [anon_sym_LT_LT] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(385),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_DASH_GT] = ACTIONS(385),
  },
  [144] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(206),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [145] = {
    [anon_sym_PLUS] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_TILDE_PIPE] = ACTIONS(389),
    [anon_sym_TILDE_CARET] = ACTIONS(389),
    [anon_sym_TILDE_AMP] = ACTIONS(389),
    [anon_sym_CARET_TILDE] = ACTIONS(389),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_CARET] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(391),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(391),
    [sym_real_number] = ACTIONS(391),
    [anon_sym_LPAREN_STAR] = ACTIONS(389),
    [sym_simple_identifier] = ACTIONS(389),
  },
  [146] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(207),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(208),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(208),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [147] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(209),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(210),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(210),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym_simple_identifier] = ACTIONS(393),
  },
  [149] = {
    [sym_attr_spec] = STATE(211),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [150] = {
    [anon_sym_SEMI] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_EQ_EQ] = ACTIONS(397),
    [anon_sym_BANG_EQ] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_LT_EQ] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_EQ] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_QMARK] = ACTIONS(395),
    [anon_sym_TILDE_CARET] = ACTIONS(395),
    [anon_sym_CARET_TILDE] = ACTIONS(395),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(395),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(395),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(395),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(395),
    [anon_sym_LT_DASH_GT] = ACTIONS(395),
    [anon_sym_GT_GT_GT] = ACTIONS(395),
    [anon_sym_LT_LT_LT] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_AMP_AMP] = ACTIONS(395),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_DASH_GT] = ACTIONS(395),
  },
  [151] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_primary] = STATE(212),
    [sym_primary_literal] = STATE(88),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(213),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(213),
    [anon_sym_LBRACE] = ACTIONS(127),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_COMMA] = ACTIONS(399),
  },
  [153] = {
    [anon_sym_SEMI] = ACTIONS(401),
  },
  [154] = {
    [aux_sym_list_of_ports_repeat1] = STATE(154),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_COMMA] = ACTIONS(403),
  },
  [155] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(214),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [156] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(85),
    [sym_constant_range] = STATE(215),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [157] = {
    [sym_unpacked_dimension] = STATE(217),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(217),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_EQ] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(282),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(410),
  },
  [159] = {
    [sym_port_direction] = STATE(45),
    [sym_net_port_header] = STATE(46),
    [sym_ansi_port_declaration] = STATE(218),
    [sym_data_type] = STATE(48),
    [sym__data_type_or_implicit] = STATE(48),
    [sym_implicit_data_type] = STATE(48),
    [sym_integer_atom_type] = STATE(49),
    [sym_integer_vector_type] = STATE(50),
    [sym_non_integer_type] = STATE(37),
    [sym_net_type] = STATE(51),
    [sym_net_port_type] = STATE(52),
    [sym__signing] = STATE(53),
    [sym_packed_dimension] = STATE(58),
    [sym_unsized_dimension] = STATE(54),
    [sym_attribute_instance] = STATE(113),
    [aux_sym_module_header_repeat1] = STATE(113),
    [aux_sym_data_type_repeat1] = STATE(58),
    [anon_sym_input] = ACTIONS(189),
    [anon_sym_output] = ACTIONS(189),
    [anon_sym_inout] = ACTIONS(189),
    [anon_sym_ref] = ACTIONS(189),
    [anon_sym_string] = ACTIONS(153),
    [anon_sym_chandle] = ACTIONS(153),
    [anon_sym_event] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(155),
    [anon_sym_shortint] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_longint] = ACTIONS(155),
    [anon_sym_integer] = ACTIONS(155),
    [anon_sym_time] = ACTIONS(155),
    [anon_sym_bit] = ACTIONS(157),
    [anon_sym_logic] = ACTIONS(157),
    [anon_sym_reg] = ACTIONS(157),
    [anon_sym_shortreal] = ACTIONS(159),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(159),
    [anon_sym_supply0] = ACTIONS(161),
    [anon_sym_supply1] = ACTIONS(161),
    [anon_sym_tri] = ACTIONS(57),
    [anon_sym_triand] = ACTIONS(161),
    [anon_sym_trior] = ACTIONS(161),
    [anon_sym_trireg] = ACTIONS(161),
    [anon_sym_tri0] = ACTIONS(161),
    [anon_sym_tri1] = ACTIONS(161),
    [anon_sym_uwire] = ACTIONS(161),
    [anon_sym_wire] = ACTIONS(161),
    [anon_sym_wand] = ACTIONS(161),
    [anon_sym_wor] = ACTIONS(161),
    [anon_sym_signed] = ACTIONS(163),
    [anon_sym_unsigned] = ACTIONS(163),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [160] = {
    [anon_sym_SEMI] = ACTIONS(412),
  },
  [161] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(161),
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(414),
  },
  [162] = {
    [sym_packed_dimension] = STATE(114),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_simple_identifier] = ACTIONS(417),
  },
  [163] = {
    [anon_sym_DOT] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
  },
  [164] = {
    [sym_constant_bit_select] = STATE(219),
    [anon_sym_DOT] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(423),
  },
  [165] = {
    [sym_binary_operator] = STATE(222),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(426),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [166] = {
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_STAR_STAR] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_GT_EQ] = ACTIONS(430),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(430),
    [anon_sym_TILDE_CARET] = ACTIONS(430),
    [anon_sym_CARET_TILDE] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(432),
    [anon_sym_CARET] = ACTIONS(432),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(430),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(430),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(430),
    [anon_sym_LT_DASH_GT] = ACTIONS(430),
    [anon_sym_GT_GT_GT] = ACTIONS(430),
    [anon_sym_LT_LT_LT] = ACTIONS(430),
    [anon_sym_GT_GT] = ACTIONS(432),
    [anon_sym_LT_LT] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_DASH_GT] = ACTIONS(430),
  },
  [167] = {
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_RBRACK] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_STAR_STAR] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_GT_EQ] = ACTIONS(430),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(430),
    [anon_sym_TILDE_CARET] = ACTIONS(430),
    [anon_sym_CARET_TILDE] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(432),
    [anon_sym_CARET] = ACTIONS(432),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(430),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(430),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(430),
    [anon_sym_LT_DASH_GT] = ACTIONS(430),
    [anon_sym_GT_GT_GT] = ACTIONS(430),
    [anon_sym_LT_LT_LT] = ACTIONS(430),
    [anon_sym_GT_GT] = ACTIONS(432),
    [anon_sym_LT_LT] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_DASH_GT] = ACTIONS(430),
  },
  [168] = {
    [aux_sym_constant_select_repeat1] = STATE(168),
    [anon_sym_DOT] = ACTIONS(436),
    [anon_sym_LBRACK] = ACTIONS(421),
  },
  [169] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(161),
    [anon_sym_RPAREN] = ACTIONS(439),
    [anon_sym_COMMA] = ACTIONS(167),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_extern] = ACTIONS(29),
    [anon_sym_module] = ACTIONS(29),
    [anon_sym_macromodule] = ACTIONS(29),
    [anon_sym_LPAREN_STAR] = ACTIONS(29),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_extern] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
    [anon_sym_macromodule] = ACTIONS(79),
    [anon_sym_LPAREN_STAR] = ACTIONS(79),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_extern] = ACTIONS(441),
    [anon_sym_module] = ACTIONS(441),
    [anon_sym_macromodule] = ACTIONS(441),
    [anon_sym_LPAREN_STAR] = ACTIONS(441),
  },
  [173] = {
    [anon_sym_endmodule] = ACTIONS(443),
    [anon_sym_extern] = ACTIONS(443),
    [anon_sym_module] = ACTIONS(443),
    [anon_sym_macromodule] = ACTIONS(443),
    [anon_sym_defparam] = ACTIONS(443),
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [sym_simple_identifier] = ACTIONS(443),
  },
  [174] = {
    [anon_sym_SEMI] = ACTIONS(445),
  },
  [175] = {
    [sym_identifier] = STATE(122),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(226),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [176] = {
    [anon_sym_endmodule] = ACTIONS(447),
    [anon_sym_extern] = ACTIONS(447),
    [anon_sym_module] = ACTIONS(447),
    [anon_sym_macromodule] = ACTIONS(447),
    [anon_sym_defparam] = ACTIONS(447),
    [anon_sym_LPAREN_STAR] = ACTIONS(449),
    [sym_simple_identifier] = ACTIONS(447),
  },
  [177] = {
    [sym_defparam_assignment] = STATE(227),
    [sym_hierarchical_identifier] = STATE(120),
    [sym_hierarchical_parameter_identifier] = STATE(121),
    [sym_identifier] = STATE(122),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(123),
    [anon_sym_DOLLARroot] = ACTIONS(195),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [178] = {
    [aux_sym_list_of_defparam_assignments_repeat1] = STATE(228),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_COMMA] = ACTIONS(317),
  },
  [179] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(229),
    [sym_constant_mintypmax_expression] = STATE(230),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [180] = {
    [anon_sym_DOT] = ACTIONS(453),
  },
  [181] = {
    [sym_constant_bit_select] = STATE(180),
    [anon_sym_EQ] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(187),
  },
  [182] = {
    [sym_identifier] = STATE(122),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(182),
    [sym_simple_identifier] = ACTIONS(457),
  },
  [183] = {
    [anon_sym_module] = ACTIONS(105),
    [anon_sym_macromodule] = ACTIONS(105),
    [anon_sym_defparam] = ACTIONS(105),
    [anon_sym_LPAREN_STAR] = ACTIONS(107),
    [sym_simple_identifier] = ACTIONS(105),
  },
  [184] = {
    [aux_sym_attribute_instance_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_STAR_RPAREN] = ACTIONS(460),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(462),
  },
  [186] = {
    [anon_sym_endmodule] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_extern] = ACTIONS(443),
    [anon_sym_module] = ACTIONS(443),
    [anon_sym_macromodule] = ACTIONS(443),
    [anon_sym_defparam] = ACTIONS(443),
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [sym_simple_identifier] = ACTIONS(443),
  },
  [187] = {
    [sym_module_header] = STATE(63),
    [sym_module_declaration] = STATE(137),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(64),
    [sym_module_or_generate_item] = STATE(137),
    [sym__non_port_module_item] = STATE(137),
    [sym_parameter_override] = STATE(64),
    [sym_module_instantiation] = STATE(64),
    [sym_attribute_instance] = STATE(66),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(65),
    [aux_sym_module_header_repeat1] = STATE(66),
    [aux_sym_module_declaration_repeat1] = STATE(137),
    [anon_sym_endmodule] = ACTIONS(466),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [188] = {
    [sym_data_type] = STATE(241),
    [sym_integer_atom_type] = STATE(247),
    [sym_integer_vector_type] = STATE(248),
    [sym_non_integer_type] = STATE(37),
    [sym_list_of_parameter_assignments] = STATE(249),
    [sym_ordered_parameter_assignment] = STATE(250),
    [sym_named_parameter_assignment] = STATE(251),
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_param_expression] = STATE(256),
    [sym_expression] = STATE(257),
    [sym_mintypmax_expression] = STATE(241),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(472),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_chandle] = ACTIONS(47),
    [anon_sym_event] = ACTIONS(47),
    [anon_sym_byte] = ACTIONS(474),
    [anon_sym_shortint] = ACTIONS(474),
    [anon_sym_int] = ACTIONS(474),
    [anon_sym_longint] = ACTIONS(474),
    [anon_sym_integer] = ACTIONS(474),
    [anon_sym_time] = ACTIONS(474),
    [anon_sym_bit] = ACTIONS(476),
    [anon_sym_logic] = ACTIONS(476),
    [anon_sym_reg] = ACTIONS(476),
    [anon_sym_shortreal] = ACTIONS(55),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [189] = {
    [aux_sym_module_instantiation_repeat1] = STATE(263),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(335),
  },
  [190] = {
    [anon_sym_endmodule] = ACTIONS(494),
    [anon_sym_extern] = ACTIONS(494),
    [anon_sym_module] = ACTIONS(494),
    [anon_sym_macromodule] = ACTIONS(494),
    [anon_sym_defparam] = ACTIONS(494),
    [anon_sym_LPAREN_STAR] = ACTIONS(496),
    [sym_simple_identifier] = ACTIONS(494),
  },
  [191] = {
    [sym_hierarchical_instance] = STATE(264),
    [sym_name_of_instance] = STATE(131),
    [sym_identifier] = STATE(132),
    [sym_instance_identifier] = STATE(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [192] = {
    [aux_sym_module_instantiation_repeat1] = STATE(265),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(335),
  },
  [193] = {
    [sym_list_of_port_connections] = STATE(270),
    [sym_ordered_port_connection] = STATE(271),
    [sym_named_port_connection] = STATE(272),
    [sym_attribute_instance] = STATE(273),
    [aux_sym_module_header_repeat1] = STATE(273),
    [anon_sym_DOT_STAR] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_LPAREN_STAR] = ACTIONS(504),
  },
  [194] = {
    [sym_unpacked_dimension] = STATE(274),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(274),
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_LBRACK] = ACTIONS(282),
  },
  [195] = {
    [sym_identifier] = STATE(171),
    [sym_module_identifier] = STATE(275),
    [sym_simple_identifier] = ACTIONS(309),
  },
  [196] = {
    [anon_sym_LPAREN] = ACTIONS(508),
  },
  [197] = {
    [anon_sym_LPAREN] = ACTIONS(510),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_extern] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_macromodule] = ACTIONS(512),
    [anon_sym_LPAREN_STAR] = ACTIONS(512),
  },
  [199] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(277),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [200] = {
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
    [anon_sym_COLON] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_STAR] = ACTIONS(518),
    [anon_sym_LBRACK] = ACTIONS(516),
    [anon_sym_RBRACK] = ACTIONS(516),
    [anon_sym_PLUS] = ACTIONS(516),
    [anon_sym_STAR_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_EQ_EQ] = ACTIONS(518),
    [anon_sym_BANG_EQ] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(518),
    [anon_sym_LT_EQ] = ACTIONS(516),
    [anon_sym_GT] = ACTIONS(518),
    [anon_sym_GT_EQ] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(516),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(516),
    [anon_sym_TILDE_CARET] = ACTIONS(516),
    [anon_sym_CARET_TILDE] = ACTIONS(516),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_CARET] = ACTIONS(518),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(516),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(516),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(516),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(516),
    [anon_sym_LT_DASH_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_LT_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(518),
    [anon_sym_LT_LT] = ACTIONS(518),
    [anon_sym_AMP_AMP] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(516),
    [anon_sym_DASH_GT] = ACTIONS(516),
  },
  [201] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(278),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [202] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(279),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(280),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(280),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [203] = {
    [anon_sym_RBRACE] = ACTIONS(520),
  },
  [204] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(282),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(283),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(283),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [205] = {
    [aux_sym_constant_concatenation_repeat1] = STATE(285),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(522),
  },
  [206] = {
    [sym_binary_operator] = STATE(222),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [207] = {
    [sym_binary_operator] = STATE(147),
    [aux_sym_constant_expression_repeat1] = STATE(287),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [208] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(288),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [209] = {
    [sym_binary_operator] = STATE(147),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [210] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(290),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [211] = {
    [aux_sym_attribute_instance_repeat1] = STATE(292),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_STAR_RPAREN] = ACTIONS(530),
  },
  [212] = {
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [213] = {
    [sym_attribute_instance] = STATE(213),
    [aux_sym_module_header_repeat1] = STATE(213),
    [anon_sym_LBRACE] = ACTIONS(96),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [sym_real_number] = ACTIONS(302),
    [anon_sym_LPAREN_STAR] = ACTIONS(532),
    [sym_simple_identifier] = ACTIONS(96),
  },
  [214] = {
    [sym_binary_operator] = STATE(294),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(537),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [215] = {
    [anon_sym_RBRACK] = ACTIONS(539),
  },
  [216] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(296),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [217] = {
    [sym_unpacked_dimension] = STATE(217),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(217),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(543),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(546),
  },
  [219] = {
    [anon_sym_DOT] = ACTIONS(548),
    [anon_sym_LBRACK] = ACTIONS(548),
  },
  [220] = {
    [anon_sym_SEMI] = ACTIONS(550),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_COLON] = ACTIONS(550),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_DOT] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(550),
    [anon_sym_RBRACK] = ACTIONS(550),
    [anon_sym_PLUS] = ACTIONS(550),
    [anon_sym_STAR_STAR] = ACTIONS(550),
    [anon_sym_SLASH] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(550),
    [anon_sym_EQ_EQ] = ACTIONS(552),
    [anon_sym_BANG_EQ] = ACTIONS(552),
    [anon_sym_LT] = ACTIONS(552),
    [anon_sym_LT_EQ] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(552),
    [anon_sym_GT_EQ] = ACTIONS(550),
    [anon_sym_RBRACE] = ACTIONS(550),
    [anon_sym_LBRACE] = ACTIONS(550),
    [anon_sym_QMARK] = ACTIONS(550),
    [anon_sym_TILDE_CARET] = ACTIONS(550),
    [anon_sym_CARET_TILDE] = ACTIONS(550),
    [anon_sym_DASH] = ACTIONS(552),
    [anon_sym_AMP] = ACTIONS(552),
    [anon_sym_PIPE] = ACTIONS(552),
    [anon_sym_CARET] = ACTIONS(552),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(550),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(550),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(550),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(550),
    [anon_sym_LT_DASH_GT] = ACTIONS(550),
    [anon_sym_GT_GT_GT] = ACTIONS(550),
    [anon_sym_LT_LT_LT] = ACTIONS(550),
    [anon_sym_GT_GT] = ACTIONS(552),
    [anon_sym_LT_LT] = ACTIONS(552),
    [anon_sym_AMP_AMP] = ACTIONS(550),
    [anon_sym_PIPE_PIPE] = ACTIONS(550),
    [anon_sym_DASH_GT] = ACTIONS(550),
  },
  [221] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(297),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(298),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(298),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [222] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(299),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(300),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(300),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [223] = {
    [anon_sym_SEMI] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(554),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_STAR] = ACTIONS(556),
    [anon_sym_RBRACK] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(554),
    [anon_sym_STAR_STAR] = ACTIONS(554),
    [anon_sym_SLASH] = ACTIONS(554),
    [anon_sym_PERCENT] = ACTIONS(554),
    [anon_sym_EQ_EQ] = ACTIONS(556),
    [anon_sym_BANG_EQ] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_LT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_GT_EQ] = ACTIONS(554),
    [anon_sym_RBRACE] = ACTIONS(554),
    [anon_sym_LBRACE] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_TILDE_CARET] = ACTIONS(554),
    [anon_sym_CARET_TILDE] = ACTIONS(554),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(554),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(554),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(554),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(554),
    [anon_sym_LT_DASH_GT] = ACTIONS(554),
    [anon_sym_GT_GT_GT] = ACTIONS(554),
    [anon_sym_LT_LT_LT] = ACTIONS(554),
    [anon_sym_GT_GT] = ACTIONS(556),
    [anon_sym_LT_LT] = ACTIONS(556),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_DASH_GT] = ACTIONS(554),
  },
  [224] = {
    [anon_sym_SEMI] = ACTIONS(558),
  },
  [225] = {
    [anon_sym_endmodule] = ACTIONS(560),
    [anon_sym_extern] = ACTIONS(560),
    [anon_sym_module] = ACTIONS(560),
    [anon_sym_macromodule] = ACTIONS(560),
    [anon_sym_defparam] = ACTIONS(560),
    [anon_sym_LPAREN_STAR] = ACTIONS(207),
    [sym_simple_identifier] = ACTIONS(560),
  },
  [226] = {
    [sym_identifier] = STATE(301),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(182),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [227] = {
    [anon_sym_SEMI] = ACTIONS(562),
    [anon_sym_COMMA] = ACTIONS(562),
  },
  [228] = {
    [aux_sym_list_of_defparam_assignments_repeat1] = STATE(228),
    [anon_sym_SEMI] = ACTIONS(562),
    [anon_sym_COMMA] = ACTIONS(564),
  },
  [229] = {
    [sym_binary_operator] = STATE(304),
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_COLON] = ACTIONS(569),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [230] = {
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(573),
  },
  [231] = {
    [sym_simple_identifier] = ACTIONS(575),
  },
  [232] = {
    [anon_sym_module] = ACTIONS(219),
    [anon_sym_macromodule] = ACTIONS(219),
    [anon_sym_defparam] = ACTIONS(219),
    [anon_sym_LPAREN_STAR] = ACTIONS(221),
    [sym_simple_identifier] = ACTIONS(219),
  },
  [233] = {
    [anon_sym_SEMI] = ACTIONS(577),
  },
  [234] = {
    [sym_identifier] = STATE(307),
    [sym_module_identifier] = STATE(308),
    [sym_simple_identifier] = ACTIONS(579),
  },
  [235] = {
    [anon_sym_endmodule] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_extern] = ACTIONS(581),
    [anon_sym_module] = ACTIONS(581),
    [anon_sym_macromodule] = ACTIONS(581),
    [anon_sym_defparam] = ACTIONS(581),
    [anon_sym_LPAREN_STAR] = ACTIONS(350),
    [sym_simple_identifier] = ACTIONS(581),
  },
  [236] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(257),
    [sym_mintypmax_expression] = STATE(310),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [237] = {
    [sym_simple_identifier] = ACTIONS(585),
  },
  [238] = {
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(311),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [239] = {
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_signed] = ACTIONS(587),
    [anon_sym_unsigned] = ACTIONS(587),
  },
  [240] = {
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_signed] = ACTIONS(137),
    [anon_sym_unsigned] = ACTIONS(137),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_COMMA] = ACTIONS(589),
  },
  [242] = {
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_this] = ACTIONS(230),
    [anon_sym_null] = ACTIONS(230),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [sym_real_number] = ACTIONS(232),
    [anon_sym_LPAREN_STAR] = ACTIONS(230),
  },
  [243] = {
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
    [anon_sym_COMMA] = ACTIONS(591),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_LPAREN_STAR] = ACTIONS(591),
    [sym_simple_identifier] = ACTIONS(591),
  },
  [244] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_variable_lvalue] = STATE(313),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(593),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [245] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(314),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(315),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [246] = {
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_COLON] = ACTIONS(595),
    [anon_sym_COMMA] = ACTIONS(595),
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_LBRACE] = ACTIONS(595),
  },
  [247] = {
    [sym__signing] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_signed] = ACTIONS(597),
    [anon_sym_unsigned] = ACTIONS(597),
  },
  [248] = {
    [sym__signing] = STATE(316),
    [sym_packed_dimension] = STATE(317),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(317),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_signed] = ACTIONS(599),
    [anon_sym_unsigned] = ACTIONS(599),
  },
  [249] = {
    [anon_sym_RPAREN] = ACTIONS(601),
  },
  [250] = {
    [aux_sym_list_of_parameter_assignments_repeat1] = STATE(320),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_COMMA] = ACTIONS(605),
  },
  [251] = {
    [aux_sym_list_of_parameter_assignments_repeat2] = STATE(322),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_COMMA] = ACTIONS(607),
  },
  [252] = {
    [sym_assignment_pattern_variable_lvalue] = STATE(323),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
  },
  [253] = {
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_PLUS_PLUS] = ACTIONS(609),
    [anon_sym_RBRACE] = ACTIONS(609),
    [anon_sym_LBRACE] = ACTIONS(609),
    [anon_sym_DASH_DASH] = ACTIONS(609),
    [anon_sym_LPAREN_STAR] = ACTIONS(609),
  },
  [254] = {
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_COLON] = ACTIONS(595),
    [anon_sym_COMMA] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(611),
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_LBRACE] = ACTIONS(595),
  },
  [255] = {
    [anon_sym_RPAREN] = ACTIONS(613),
    [anon_sym_COLON] = ACTIONS(613),
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_RBRACE] = ACTIONS(613),
    [anon_sym_LBRACE] = ACTIONS(613),
  },
  [256] = {
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(615),
  },
  [257] = {
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(617),
  },
  [258] = {
    [sym_inc_or_dec_operator] = STATE(326),
    [sym_attribute_instance] = STATE(327),
    [aux_sym_module_header_repeat1] = STATE(327),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [259] = {
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_primary] = STATE(329),
    [sym_primary_literal] = STATE(246),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(330),
    [aux_sym_module_header_repeat1] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_LBRACE] = ACTIONS(623),
    [anon_sym_this] = ACTIONS(625),
    [anon_sym_null] = ACTIONS(625),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [260] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_variable_lvalue] = STATE(326),
    [sym_attribute_instance] = STATE(331),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [aux_sym_module_header_repeat1] = STATE(331),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(593),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [261] = {
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(627),
  },
  [262] = {
    [anon_sym_endmodule] = ACTIONS(629),
    [anon_sym_extern] = ACTIONS(629),
    [anon_sym_module] = ACTIONS(629),
    [anon_sym_macromodule] = ACTIONS(629),
    [anon_sym_defparam] = ACTIONS(629),
    [anon_sym_LPAREN_STAR] = ACTIONS(631),
    [sym_simple_identifier] = ACTIONS(629),
  },
  [263] = {
    [aux_sym_module_instantiation_repeat1] = STATE(265),
    [anon_sym_SEMI] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(335),
  },
  [264] = {
    [anon_sym_SEMI] = ACTIONS(635),
    [anon_sym_COMMA] = ACTIONS(635),
  },
  [265] = {
    [aux_sym_module_instantiation_repeat1] = STATE(265),
    [anon_sym_SEMI] = ACTIONS(635),
    [anon_sym_COMMA] = ACTIONS(637),
  },
  [266] = {
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_COMMA] = ACTIONS(640),
  },
  [267] = {
    [anon_sym_SEMI] = ACTIONS(642),
    [anon_sym_COMMA] = ACTIONS(642),
  },
  [268] = {
    [sym_identifier] = STATE(55),
    [sym_port_identifier] = STATE(333),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [269] = {
    [sym_attr_spec] = STATE(334),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [270] = {
    [anon_sym_RPAREN] = ACTIONS(644),
  },
  [271] = {
    [aux_sym_list_of_port_connections_repeat2] = STATE(337),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_COMMA] = ACTIONS(648),
  },
  [272] = {
    [aux_sym_list_of_port_connections_repeat1] = STATE(339),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_COMMA] = ACTIONS(650),
  },
  [273] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(342),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(343),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [aux_sym_module_header_repeat1] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_DOT_STAR] = ACTIONS(652),
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(504),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [274] = {
    [sym_unpacked_dimension] = STATE(274),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(274),
    [anon_sym_LPAREN] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(543),
  },
  [275] = {
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_extern] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_macromodule] = ACTIONS(512),
    [anon_sym_LPAREN_STAR] = ACTIONS(512),
  },
  [276] = {
    [sym_identifier] = STATE(171),
    [sym_module_identifier] = STATE(344),
    [sym_simple_identifier] = ACTIONS(309),
  },
  [277] = {
    [sym_binary_operator] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(658),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(658),
    [anon_sym_QMARK] = ACTIONS(660),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [278] = {
    [sym_binary_operator] = STATE(346),
    [aux_sym_constant_concatenation_repeat1] = STATE(205),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_QMARK] = ACTIONS(660),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [279] = {
    [sym_binary_operator] = STATE(349),
    [aux_sym_constant_expression_repeat1] = STATE(350),
    [anon_sym_COLON] = ACTIONS(662),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [280] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(351),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [281] = {
    [anon_sym_SEMI] = ACTIONS(664),
    [anon_sym_RPAREN] = ACTIONS(664),
    [anon_sym_COLON] = ACTIONS(664),
    [anon_sym_COMMA] = ACTIONS(664),
    [anon_sym_STAR] = ACTIONS(666),
    [anon_sym_LBRACK] = ACTIONS(664),
    [anon_sym_RBRACK] = ACTIONS(664),
    [anon_sym_PLUS] = ACTIONS(664),
    [anon_sym_STAR_STAR] = ACTIONS(664),
    [anon_sym_SLASH] = ACTIONS(664),
    [anon_sym_PERCENT] = ACTIONS(664),
    [anon_sym_EQ_EQ] = ACTIONS(666),
    [anon_sym_BANG_EQ] = ACTIONS(666),
    [anon_sym_LT] = ACTIONS(666),
    [anon_sym_LT_EQ] = ACTIONS(664),
    [anon_sym_GT] = ACTIONS(666),
    [anon_sym_GT_EQ] = ACTIONS(664),
    [anon_sym_RBRACE] = ACTIONS(664),
    [anon_sym_LBRACE] = ACTIONS(664),
    [anon_sym_QMARK] = ACTIONS(664),
    [anon_sym_TILDE_CARET] = ACTIONS(664),
    [anon_sym_CARET_TILDE] = ACTIONS(664),
    [anon_sym_DASH] = ACTIONS(666),
    [anon_sym_AMP] = ACTIONS(666),
    [anon_sym_PIPE] = ACTIONS(666),
    [anon_sym_CARET] = ACTIONS(666),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(664),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(664),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(664),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(664),
    [anon_sym_LT_DASH_GT] = ACTIONS(664),
    [anon_sym_GT_GT_GT] = ACTIONS(664),
    [anon_sym_LT_LT_LT] = ACTIONS(664),
    [anon_sym_GT_GT] = ACTIONS(666),
    [anon_sym_LT_LT] = ACTIONS(666),
    [anon_sym_AMP_AMP] = ACTIONS(664),
    [anon_sym_PIPE_PIPE] = ACTIONS(664),
    [anon_sym_DASH_GT] = ACTIONS(664),
  },
  [282] = {
    [sym_binary_operator] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [283] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(352),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [284] = {
    [anon_sym_SEMI] = ACTIONS(668),
    [anon_sym_RPAREN] = ACTIONS(668),
    [anon_sym_COLON] = ACTIONS(668),
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_STAR] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(668),
    [anon_sym_RBRACK] = ACTIONS(668),
    [anon_sym_PLUS] = ACTIONS(668),
    [anon_sym_STAR_STAR] = ACTIONS(668),
    [anon_sym_SLASH] = ACTIONS(668),
    [anon_sym_PERCENT] = ACTIONS(668),
    [anon_sym_EQ_EQ] = ACTIONS(670),
    [anon_sym_BANG_EQ] = ACTIONS(670),
    [anon_sym_LT] = ACTIONS(670),
    [anon_sym_LT_EQ] = ACTIONS(668),
    [anon_sym_GT] = ACTIONS(670),
    [anon_sym_GT_EQ] = ACTIONS(668),
    [anon_sym_RBRACE] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(668),
    [anon_sym_QMARK] = ACTIONS(668),
    [anon_sym_TILDE_CARET] = ACTIONS(668),
    [anon_sym_CARET_TILDE] = ACTIONS(668),
    [anon_sym_DASH] = ACTIONS(670),
    [anon_sym_AMP] = ACTIONS(670),
    [anon_sym_PIPE] = ACTIONS(670),
    [anon_sym_CARET] = ACTIONS(670),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(668),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(668),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(668),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(668),
    [anon_sym_LT_DASH_GT] = ACTIONS(668),
    [anon_sym_GT_GT_GT] = ACTIONS(668),
    [anon_sym_LT_LT_LT] = ACTIONS(668),
    [anon_sym_GT_GT] = ACTIONS(670),
    [anon_sym_LT_LT] = ACTIONS(670),
    [anon_sym_AMP_AMP] = ACTIONS(668),
    [anon_sym_PIPE_PIPE] = ACTIONS(668),
    [anon_sym_DASH_GT] = ACTIONS(668),
  },
  [285] = {
    [aux_sym_constant_concatenation_repeat1] = STATE(285),
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RBRACE] = ACTIONS(658),
  },
  [286] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(353),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [287] = {
    [aux_sym_constant_expression_repeat1] = STATE(354),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [288] = {
    [sym_binary_operator] = STATE(147),
    [aux_sym_constant_expression_repeat1] = STATE(355),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [289] = {
    [sym_attribute_instance] = STATE(289),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_TILDE_PIPE] = ACTIONS(96),
    [anon_sym_TILDE_CARET] = ACTIONS(96),
    [anon_sym_TILDE_AMP] = ACTIONS(96),
    [anon_sym_CARET_TILDE] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [sym_real_number] = ACTIONS(302),
    [anon_sym_LPAREN_STAR] = ACTIONS(532),
    [sym_simple_identifier] = ACTIONS(96),
  },
  [290] = {
    [sym_binary_operator] = STATE(147),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [291] = {
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_TILDE_PIPE] = ACTIONS(107),
    [anon_sym_TILDE_CARET] = ACTIONS(107),
    [anon_sym_TILDE_AMP] = ACTIONS(107),
    [anon_sym_CARET_TILDE] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(105),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(105),
    [sym_real_number] = ACTIONS(105),
    [anon_sym_LPAREN_STAR] = ACTIONS(107),
    [sym_simple_identifier] = ACTIONS(107),
  },
  [292] = {
    [aux_sym_attribute_instance_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_STAR_RPAREN] = ACTIONS(679),
  },
  [293] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(357),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(358),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(358),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [294] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(359),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(360),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(360),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [295] = {
    [anon_sym_LPAREN] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(681),
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_EQ] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
  },
  [296] = {
    [sym_binary_operator] = STATE(294),
    [anon_sym_RPAREN] = ACTIONS(683),
    [anon_sym_COMMA] = ACTIONS(683),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(537),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [297] = {
    [sym_binary_operator] = STATE(363),
    [aux_sym_constant_expression_repeat1] = STATE(364),
    [anon_sym_COLON] = ACTIONS(685),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [298] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(365),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [299] = {
    [sym_binary_operator] = STATE(222),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [300] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(366),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [301] = {
    [sym_constant_bit_select] = STATE(180),
    [anon_sym_EQ] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(187),
  },
  [302] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(367),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [303] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(368),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(369),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(369),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [304] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(370),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(371),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(371),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [305] = {
    [anon_sym_endmodule] = ACTIONS(689),
  },
  [306] = {
    [anon_sym_endmodule] = ACTIONS(691),
    [anon_sym_extern] = ACTIONS(691),
    [anon_sym_module] = ACTIONS(691),
    [anon_sym_macromodule] = ACTIONS(691),
    [anon_sym_defparam] = ACTIONS(691),
    [anon_sym_LPAREN_STAR] = ACTIONS(29),
    [sym_simple_identifier] = ACTIONS(691),
  },
  [307] = {
    [anon_sym_endmodule] = ACTIONS(693),
    [anon_sym_extern] = ACTIONS(693),
    [anon_sym_module] = ACTIONS(693),
    [anon_sym_macromodule] = ACTIONS(693),
    [anon_sym_defparam] = ACTIONS(693),
    [anon_sym_LPAREN_STAR] = ACTIONS(79),
    [sym_simple_identifier] = ACTIONS(693),
  },
  [308] = {
    [anon_sym_endmodule] = ACTIONS(695),
    [anon_sym_extern] = ACTIONS(695),
    [anon_sym_module] = ACTIONS(695),
    [anon_sym_macromodule] = ACTIONS(695),
    [anon_sym_defparam] = ACTIONS(695),
    [anon_sym_LPAREN_STAR] = ACTIONS(441),
    [sym_simple_identifier] = ACTIONS(695),
  },
  [309] = {
    [sym_identifier] = STATE(307),
    [sym_module_identifier] = STATE(373),
    [sym_simple_identifier] = ACTIONS(579),
  },
  [310] = {
    [anon_sym_RPAREN] = ACTIONS(697),
  },
  [311] = {
    [anon_sym_LPAREN] = ACTIONS(699),
  },
  [312] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_variable_lvalue] = STATE(376),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(593),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [313] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(379),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(703),
  },
  [314] = {
    [sym_concatenation] = STATE(383),
    [aux_sym_concatenation_repeat1] = STATE(384),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RBRACE] = ACTIONS(707),
    [anon_sym_LBRACE] = ACTIONS(709),
  },
  [315] = {
    [sym_inc_or_dec_operator] = STATE(326),
    [sym_attribute_instance] = STATE(327),
    [aux_sym_module_header_repeat1] = STATE(327),
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(386),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_RBRACE] = ACTIONS(711),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [316] = {
    [sym_packed_dimension] = STATE(387),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(387),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(49),
  },
  [317] = {
    [sym_packed_dimension] = STATE(388),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(388),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(49),
  },
  [318] = {
    [sym_simple_identifier] = ACTIONS(713),
  },
  [319] = {
    [sym_data_type] = STATE(241),
    [sym_integer_atom_type] = STATE(247),
    [sym_integer_vector_type] = STATE(248),
    [sym_non_integer_type] = STATE(37),
    [sym_ordered_parameter_assignment] = STATE(389),
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_param_expression] = STATE(256),
    [sym_expression] = STATE(257),
    [sym_mintypmax_expression] = STATE(241),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_chandle] = ACTIONS(47),
    [anon_sym_event] = ACTIONS(47),
    [anon_sym_byte] = ACTIONS(474),
    [anon_sym_shortint] = ACTIONS(474),
    [anon_sym_int] = ACTIONS(474),
    [anon_sym_longint] = ACTIONS(474),
    [anon_sym_integer] = ACTIONS(474),
    [anon_sym_time] = ACTIONS(474),
    [anon_sym_bit] = ACTIONS(476),
    [anon_sym_logic] = ACTIONS(476),
    [anon_sym_reg] = ACTIONS(476),
    [anon_sym_shortreal] = ACTIONS(55),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [320] = {
    [aux_sym_list_of_parameter_assignments_repeat1] = STATE(390),
    [anon_sym_RPAREN] = ACTIONS(715),
    [anon_sym_COMMA] = ACTIONS(605),
  },
  [321] = {
    [sym_named_parameter_assignment] = STATE(391),
    [anon_sym_DOT] = ACTIONS(472),
  },
  [322] = {
    [aux_sym_list_of_parameter_assignments_repeat2] = STATE(392),
    [anon_sym_RPAREN] = ACTIONS(715),
    [anon_sym_COMMA] = ACTIONS(607),
  },
  [323] = {
    [anon_sym_RPAREN] = ACTIONS(717),
    [anon_sym_COLON] = ACTIONS(717),
    [anon_sym_COMMA] = ACTIONS(717),
    [anon_sym_PLUS_PLUS] = ACTIONS(717),
    [anon_sym_RBRACE] = ACTIONS(717),
    [anon_sym_LBRACE] = ACTIONS(717),
    [anon_sym_DASH_DASH] = ACTIONS(717),
    [anon_sym_LPAREN_STAR] = ACTIONS(717),
  },
  [324] = {
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_COLON] = ACTIONS(719),
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_LBRACE] = ACTIONS(719),
  },
  [325] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(393),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [326] = {
    [anon_sym_RPAREN] = ACTIONS(721),
    [anon_sym_COLON] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RBRACE] = ACTIONS(721),
    [anon_sym_LBRACE] = ACTIONS(721),
  },
  [327] = {
    [sym_inc_or_dec_operator] = STATE(394),
    [sym_attribute_instance] = STATE(395),
    [aux_sym_module_header_repeat1] = STATE(395),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [328] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(314),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [329] = {
    [anon_sym_RPAREN] = ACTIONS(723),
    [anon_sym_COLON] = ACTIONS(723),
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_LBRACE] = ACTIONS(723),
  },
  [330] = {
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_primary] = STATE(396),
    [sym_primary_literal] = STATE(246),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(397),
    [aux_sym_module_header_repeat1] = STATE(397),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_LBRACE] = ACTIONS(623),
    [anon_sym_this] = ACTIONS(625),
    [anon_sym_null] = ACTIONS(625),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [331] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_variable_lvalue] = STATE(394),
    [sym_attribute_instance] = STATE(398),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [aux_sym_module_header_repeat1] = STATE(398),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(593),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [332] = {
    [anon_sym_endmodule] = ACTIONS(725),
    [anon_sym_extern] = ACTIONS(725),
    [anon_sym_module] = ACTIONS(725),
    [anon_sym_macromodule] = ACTIONS(725),
    [anon_sym_defparam] = ACTIONS(725),
    [anon_sym_LPAREN_STAR] = ACTIONS(727),
    [sym_simple_identifier] = ACTIONS(725),
  },
  [333] = {
    [anon_sym_LPAREN] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(731),
    [anon_sym_COMMA] = ACTIONS(731),
  },
  [334] = {
    [aux_sym_attribute_instance_repeat1] = STATE(401),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_STAR_RPAREN] = ACTIONS(733),
  },
  [335] = {
    [anon_sym_SEMI] = ACTIONS(735),
    [anon_sym_COMMA] = ACTIONS(735),
  },
  [336] = {
    [sym_ordered_port_connection] = STATE(402),
    [sym_attribute_instance] = STATE(403),
    [aux_sym_module_header_repeat1] = STATE(403),
    [anon_sym_LPAREN_STAR] = ACTIONS(504),
  },
  [337] = {
    [aux_sym_list_of_port_connections_repeat2] = STATE(404),
    [anon_sym_RPAREN] = ACTIONS(737),
    [anon_sym_COMMA] = ACTIONS(648),
  },
  [338] = {
    [sym_named_port_connection] = STATE(405),
    [sym_attribute_instance] = STATE(406),
    [aux_sym_module_header_repeat1] = STATE(406),
    [anon_sym_DOT_STAR] = ACTIONS(498),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [339] = {
    [aux_sym_list_of_port_connections_repeat1] = STATE(407),
    [anon_sym_RPAREN] = ACTIONS(737),
    [anon_sym_COMMA] = ACTIONS(650),
  },
  [340] = {
    [anon_sym_RPAREN] = ACTIONS(731),
    [anon_sym_COMMA] = ACTIONS(731),
  },
  [341] = {
    [sym_identifier] = STATE(55),
    [sym_port_identifier] = STATE(408),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [342] = {
    [anon_sym_RPAREN] = ACTIONS(739),
    [anon_sym_COMMA] = ACTIONS(739),
  },
  [343] = {
    [sym_attribute_instance] = STATE(343),
    [aux_sym_module_header_repeat1] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_DOT_STAR] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_this] = ACTIONS(302),
    [anon_sym_null] = ACTIONS(302),
    [anon_sym_TILDE_PIPE] = ACTIONS(96),
    [anon_sym_TILDE_CARET] = ACTIONS(96),
    [anon_sym_TILDE_AMP] = ACTIONS(96),
    [anon_sym_CARET_TILDE] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [sym_real_number] = ACTIONS(302),
    [anon_sym_LPAREN_STAR] = ACTIONS(741),
    [sym_simple_identifier] = ACTIONS(302),
  },
  [344] = {
    [ts_builtin_sym_end] = ACTIONS(744),
    [anon_sym_extern] = ACTIONS(744),
    [anon_sym_module] = ACTIONS(744),
    [anon_sym_macromodule] = ACTIONS(744),
    [anon_sym_LPAREN_STAR] = ACTIONS(744),
  },
  [345] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(409),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(410),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(410),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [346] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(411),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(412),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(412),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [347] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(413),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [348] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(414),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(415),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(415),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [349] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(416),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(417),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(417),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [350] = {
    [aux_sym_constant_expression_repeat1] = STATE(418),
    [anon_sym_COLON] = ACTIONS(662),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_LBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [351] = {
    [sym_binary_operator] = STATE(349),
    [aux_sym_constant_expression_repeat1] = STATE(419),
    [anon_sym_COLON] = ACTIONS(662),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_LBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [352] = {
    [sym_binary_operator] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_LBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [353] = {
    [sym_binary_operator] = STATE(147),
    [anon_sym_COLON] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [354] = {
    [aux_sym_constant_expression_repeat1] = STATE(354),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [355] = {
    [aux_sym_constant_expression_repeat1] = STATE(354),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [356] = {
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_TILDE_PIPE] = ACTIONS(221),
    [anon_sym_TILDE_CARET] = ACTIONS(221),
    [anon_sym_TILDE_AMP] = ACTIONS(221),
    [anon_sym_CARET_TILDE] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(219),
    [sym_real_number] = ACTIONS(219),
    [anon_sym_LPAREN_STAR] = ACTIONS(221),
    [sym_simple_identifier] = ACTIONS(221),
  },
  [357] = {
    [sym_binary_operator] = STATE(422),
    [aux_sym_constant_expression_repeat1] = STATE(423),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(757),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [358] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(424),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [359] = {
    [sym_binary_operator] = STATE(294),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [360] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(425),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [361] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(426),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [362] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(427),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(428),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(428),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [363] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(429),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(430),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(430),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [364] = {
    [aux_sym_constant_expression_repeat1] = STATE(431),
    [anon_sym_COLON] = ACTIONS(685),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(675),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [365] = {
    [sym_binary_operator] = STATE(363),
    [aux_sym_constant_expression_repeat1] = STATE(432),
    [anon_sym_COLON] = ACTIONS(685),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(675),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [366] = {
    [sym_binary_operator] = STATE(222),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(675),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [367] = {
    [sym_binary_operator] = STATE(147),
    [anon_sym_COLON] = ACTIONS(759),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [368] = {
    [sym_binary_operator] = STATE(304),
    [aux_sym_constant_expression_repeat1] = STATE(435),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [369] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(436),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [370] = {
    [sym_binary_operator] = STATE(304),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [371] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(437),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [372] = {
    [anon_sym_endmodule] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(763),
    [anon_sym_extern] = ACTIONS(761),
    [anon_sym_module] = ACTIONS(761),
    [anon_sym_macromodule] = ACTIONS(761),
    [anon_sym_defparam] = ACTIONS(761),
    [anon_sym_LPAREN_STAR] = ACTIONS(512),
    [sym_simple_identifier] = ACTIONS(761),
  },
  [373] = {
    [anon_sym_endmodule] = ACTIONS(761),
    [anon_sym_extern] = ACTIONS(761),
    [anon_sym_module] = ACTIONS(761),
    [anon_sym_macromodule] = ACTIONS(761),
    [anon_sym_defparam] = ACTIONS(761),
    [anon_sym_LPAREN_STAR] = ACTIONS(512),
    [sym_simple_identifier] = ACTIONS(761),
  },
  [374] = {
    [anon_sym_RPAREN] = ACTIONS(765),
    [anon_sym_COLON] = ACTIONS(765),
    [anon_sym_COMMA] = ACTIONS(765),
    [anon_sym_RBRACE] = ACTIONS(765),
    [anon_sym_LBRACE] = ACTIONS(765),
  },
  [375] = {
    [sym_data_type] = STATE(241),
    [sym_integer_atom_type] = STATE(247),
    [sym_integer_vector_type] = STATE(440),
    [sym_non_integer_type] = STATE(37),
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_param_expression] = STATE(441),
    [sym_expression] = STATE(257),
    [sym_mintypmax_expression] = STATE(241),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_chandle] = ACTIONS(47),
    [anon_sym_event] = ACTIONS(47),
    [anon_sym_byte] = ACTIONS(474),
    [anon_sym_shortint] = ACTIONS(474),
    [anon_sym_int] = ACTIONS(474),
    [anon_sym_longint] = ACTIONS(474),
    [anon_sym_integer] = ACTIONS(474),
    [anon_sym_time] = ACTIONS(474),
    [anon_sym_bit] = ACTIONS(476),
    [anon_sym_logic] = ACTIONS(476),
    [anon_sym_reg] = ACTIONS(476),
    [anon_sym_shortreal] = ACTIONS(55),
    [anon_sym_real] = ACTIONS(55),
    [anon_sym_realtime] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [376] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(386),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(711),
  },
  [377] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_variable_lvalue] = STATE(442),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(593),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [378] = {
    [anon_sym_RPAREN] = ACTIONS(769),
    [anon_sym_COLON] = ACTIONS(769),
    [anon_sym_COMMA] = ACTIONS(769),
    [anon_sym_PLUS_PLUS] = ACTIONS(769),
    [anon_sym_RBRACE] = ACTIONS(769),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_DASH_DASH] = ACTIONS(769),
    [anon_sym_LPAREN_STAR] = ACTIONS(769),
  },
  [379] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(444),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(771),
  },
  [380] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(445),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [381] = {
    [anon_sym_RPAREN] = ACTIONS(773),
    [anon_sym_COLON] = ACTIONS(773),
    [anon_sym_COMMA] = ACTIONS(773),
    [anon_sym_LBRACK] = ACTIONS(773),
    [anon_sym_RBRACE] = ACTIONS(773),
    [anon_sym_LBRACE] = ACTIONS(773),
  },
  [382] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(446),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [383] = {
    [anon_sym_RBRACE] = ACTIONS(775),
  },
  [384] = {
    [aux_sym_concatenation_repeat1] = STATE(449),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RBRACE] = ACTIONS(777),
  },
  [385] = {
    [anon_sym_RPAREN] = ACTIONS(779),
    [anon_sym_COLON] = ACTIONS(779),
    [anon_sym_COMMA] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(779),
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_LBRACE] = ACTIONS(779),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_LPAREN_STAR] = ACTIONS(779),
  },
  [386] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(444),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(781),
  },
  [387] = {
    [sym_packed_dimension] = STATE(388),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(388),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(49),
  },
  [388] = {
    [sym_packed_dimension] = STATE(388),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(388),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(304),
  },
  [389] = {
    [anon_sym_RPAREN] = ACTIONS(783),
    [anon_sym_COMMA] = ACTIONS(783),
  },
  [390] = {
    [aux_sym_list_of_parameter_assignments_repeat1] = STATE(390),
    [anon_sym_RPAREN] = ACTIONS(783),
    [anon_sym_COMMA] = ACTIONS(785),
  },
  [391] = {
    [anon_sym_RPAREN] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(788),
  },
  [392] = {
    [aux_sym_list_of_parameter_assignments_repeat2] = STATE(392),
    [anon_sym_RPAREN] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(790),
  },
  [393] = {
    [anon_sym_COLON] = ACTIONS(793),
  },
  [394] = {
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_COLON] = ACTIONS(795),
    [anon_sym_COMMA] = ACTIONS(795),
    [anon_sym_RBRACE] = ACTIONS(795),
    [anon_sym_LBRACE] = ACTIONS(795),
  },
  [395] = {
    [sym_attribute_instance] = STATE(395),
    [aux_sym_module_header_repeat1] = STATE(395),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(98),
  },
  [396] = {
    [anon_sym_RPAREN] = ACTIONS(797),
    [anon_sym_COLON] = ACTIONS(797),
    [anon_sym_COMMA] = ACTIONS(797),
    [anon_sym_RBRACE] = ACTIONS(797),
    [anon_sym_LBRACE] = ACTIONS(797),
  },
  [397] = {
    [sym_attribute_instance] = STATE(397),
    [aux_sym_module_header_repeat1] = STATE(397),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_this] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(96),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [sym_real_number] = ACTIONS(302),
    [anon_sym_LPAREN_STAR] = ACTIONS(98),
  },
  [398] = {
    [sym_attribute_instance] = STATE(398),
    [aux_sym_module_header_repeat1] = STATE(398),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(532),
    [sym_simple_identifier] = ACTIONS(96),
  },
  [399] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(453),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(799),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [400] = {
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_DOT_STAR] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_this] = ACTIONS(105),
    [anon_sym_null] = ACTIONS(105),
    [anon_sym_TILDE_PIPE] = ACTIONS(107),
    [anon_sym_TILDE_CARET] = ACTIONS(107),
    [anon_sym_TILDE_AMP] = ACTIONS(107),
    [anon_sym_CARET_TILDE] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(105),
    [sym_real_number] = ACTIONS(105),
    [anon_sym_LPAREN_STAR] = ACTIONS(107),
    [sym_simple_identifier] = ACTIONS(105),
  },
  [401] = {
    [aux_sym_attribute_instance_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_STAR_RPAREN] = ACTIONS(801),
  },
  [402] = {
    [anon_sym_RPAREN] = ACTIONS(803),
    [anon_sym_COMMA] = ACTIONS(803),
  },
  [403] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(342),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(455),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [aux_sym_module_header_repeat1] = STATE(455),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(504),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [404] = {
    [aux_sym_list_of_port_connections_repeat2] = STATE(404),
    [anon_sym_RPAREN] = ACTIONS(803),
    [anon_sym_COMMA] = ACTIONS(805),
  },
  [405] = {
    [anon_sym_RPAREN] = ACTIONS(808),
    [anon_sym_COMMA] = ACTIONS(808),
  },
  [406] = {
    [sym_attribute_instance] = STATE(456),
    [aux_sym_module_header_repeat1] = STATE(456),
    [anon_sym_DOT_STAR] = ACTIONS(652),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
  },
  [407] = {
    [aux_sym_list_of_port_connections_repeat1] = STATE(407),
    [anon_sym_RPAREN] = ACTIONS(808),
    [anon_sym_COMMA] = ACTIONS(810),
  },
  [408] = {
    [anon_sym_LPAREN] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(815),
    [anon_sym_COMMA] = ACTIONS(815),
  },
  [409] = {
    [sym_binary_operator] = STATE(460),
    [aux_sym_constant_expression_repeat1] = STATE(461),
    [anon_sym_COLON] = ACTIONS(817),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [410] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(462),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [411] = {
    [sym_binary_operator] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [412] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(463),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [413] = {
    [sym_binary_operator] = STATE(349),
    [anon_sym_COLON] = ACTIONS(746),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_RBRACE] = ACTIONS(746),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [414] = {
    [sym_binary_operator] = STATE(349),
    [aux_sym_constant_expression_repeat1] = STATE(464),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [415] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(465),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [416] = {
    [sym_binary_operator] = STATE(349),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [417] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(466),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [418] = {
    [aux_sym_constant_expression_repeat1] = STATE(418),
    [anon_sym_COLON] = ACTIONS(819),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_RBRACE] = ACTIONS(746),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [419] = {
    [aux_sym_constant_expression_repeat1] = STATE(418),
    [anon_sym_COLON] = ACTIONS(662),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_RBRACE] = ACTIONS(753),
    [anon_sym_LBRACE] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [420] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(467),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [421] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(468),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(469),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(469),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [422] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(470),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(471),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(471),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [423] = {
    [aux_sym_constant_expression_repeat1] = STATE(472),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(757),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [424] = {
    [sym_binary_operator] = STATE(422),
    [aux_sym_constant_expression_repeat1] = STATE(473),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(757),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [425] = {
    [sym_binary_operator] = STATE(294),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [426] = {
    [sym_binary_operator] = STATE(363),
    [anon_sym_COLON] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_RBRACK] = ACTIONS(746),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [427] = {
    [sym_binary_operator] = STATE(363),
    [aux_sym_constant_expression_repeat1] = STATE(474),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [428] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(475),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [429] = {
    [sym_binary_operator] = STATE(363),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [430] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(476),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [431] = {
    [aux_sym_constant_expression_repeat1] = STATE(431),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_RBRACK] = ACTIONS(746),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [432] = {
    [aux_sym_constant_expression_repeat1] = STATE(431),
    [anon_sym_COLON] = ACTIONS(685),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_RBRACK] = ACTIONS(753),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [433] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(477),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [434] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(478),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [435] = {
    [aux_sym_constant_expression_repeat1] = STATE(479),
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [436] = {
    [sym_binary_operator] = STATE(304),
    [aux_sym_constant_expression_repeat1] = STATE(480),
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [437] = {
    [sym_binary_operator] = STATE(304),
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [438] = {
    [sym_identifier] = STATE(307),
    [sym_module_identifier] = STATE(481),
    [sym_simple_identifier] = ACTIONS(579),
  },
  [439] = {
    [anon_sym_RPAREN] = ACTIONS(825),
    [anon_sym_COMMA] = ACTIONS(825),
  },
  [440] = {
    [sym__signing] = STATE(482),
    [sym_packed_dimension] = STATE(483),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(483),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_signed] = ACTIONS(827),
    [anon_sym_unsigned] = ACTIONS(827),
  },
  [441] = {
    [anon_sym_RPAREN] = ACTIONS(829),
  },
  [442] = {
    [anon_sym_COMMA] = ACTIONS(831),
    [anon_sym_RBRACE] = ACTIONS(831),
  },
  [443] = {
    [anon_sym_RPAREN] = ACTIONS(833),
    [anon_sym_COLON] = ACTIONS(833),
    [anon_sym_COMMA] = ACTIONS(833),
    [anon_sym_PLUS_PLUS] = ACTIONS(833),
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_LBRACE] = ACTIONS(833),
    [anon_sym_DASH_DASH] = ACTIONS(833),
    [anon_sym_LPAREN_STAR] = ACTIONS(833),
  },
  [444] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(444),
    [anon_sym_COMMA] = ACTIONS(835),
    [anon_sym_RBRACE] = ACTIONS(831),
  },
  [445] = {
    [anon_sym_COMMA] = ACTIONS(838),
    [anon_sym_RBRACE] = ACTIONS(838),
  },
  [446] = {
    [aux_sym_concatenation_repeat1] = STATE(384),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RBRACE] = ACTIONS(707),
  },
  [447] = {
    [anon_sym_RPAREN] = ACTIONS(840),
    [anon_sym_COLON] = ACTIONS(840),
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_LBRACK] = ACTIONS(840),
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_LBRACE] = ACTIONS(840),
  },
  [448] = {
    [anon_sym_RPAREN] = ACTIONS(842),
    [anon_sym_COLON] = ACTIONS(842),
    [anon_sym_COMMA] = ACTIONS(842),
    [anon_sym_LBRACK] = ACTIONS(842),
    [anon_sym_RBRACE] = ACTIONS(842),
    [anon_sym_LBRACE] = ACTIONS(842),
  },
  [449] = {
    [aux_sym_concatenation_repeat1] = STATE(449),
    [anon_sym_COMMA] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(838),
  },
  [450] = {
    [anon_sym_RPAREN] = ACTIONS(847),
    [anon_sym_COLON] = ACTIONS(847),
    [anon_sym_COMMA] = ACTIONS(847),
    [anon_sym_PLUS_PLUS] = ACTIONS(847),
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [anon_sym_DASH_DASH] = ACTIONS(847),
    [anon_sym_LPAREN_STAR] = ACTIONS(847),
  },
  [451] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(485),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [452] = {
    [anon_sym_RPAREN] = ACTIONS(849),
    [anon_sym_COMMA] = ACTIONS(849),
  },
  [453] = {
    [anon_sym_RPAREN] = ACTIONS(851),
  },
  [454] = {
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_DOT_STAR] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_PLUS_PLUS] = ACTIONS(221),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_this] = ACTIONS(219),
    [anon_sym_null] = ACTIONS(219),
    [anon_sym_TILDE_PIPE] = ACTIONS(221),
    [anon_sym_TILDE_CARET] = ACTIONS(221),
    [anon_sym_TILDE_AMP] = ACTIONS(221),
    [anon_sym_CARET_TILDE] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_DASH_DASH] = ACTIONS(221),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(219),
    [sym_real_number] = ACTIONS(219),
    [anon_sym_LPAREN_STAR] = ACTIONS(221),
    [sym_simple_identifier] = ACTIONS(219),
  },
  [455] = {
    [sym_attribute_instance] = STATE(455),
    [aux_sym_module_header_repeat1] = STATE(455),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_this] = ACTIONS(302),
    [anon_sym_null] = ACTIONS(302),
    [anon_sym_TILDE_PIPE] = ACTIONS(96),
    [anon_sym_TILDE_CARET] = ACTIONS(96),
    [anon_sym_TILDE_AMP] = ACTIONS(96),
    [anon_sym_CARET_TILDE] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [sym_real_number] = ACTIONS(302),
    [anon_sym_LPAREN_STAR] = ACTIONS(741),
    [sym_simple_identifier] = ACTIONS(302),
  },
  [456] = {
    [sym_attribute_instance] = STATE(456),
    [aux_sym_module_header_repeat1] = STATE(456),
    [anon_sym_DOT_STAR] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(302),
    [anon_sym_LPAREN_STAR] = ACTIONS(98),
  },
  [457] = {
    [sym_assignment_pattern_expression_type] = STATE(252),
    [sym_assignment_pattern_variable_lvalue] = STATE(253),
    [sym_concatenation] = STATE(254),
    [sym_multiple_concatenation] = STATE(254),
    [sym_inc_or_dec_expression] = STATE(255),
    [sym_expression] = STATE(487),
    [sym_primary] = STATE(255),
    [sym_primary_literal] = STATE(246),
    [sym_variable_lvalue] = STATE(258),
    [sym_unary_operator] = STATE(259),
    [sym_inc_or_dec_operator] = STATE(260),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(261),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(851),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_this] = ACTIONS(488),
    [anon_sym_null] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_TILDE_CARET] = ACTIONS(490),
    [anon_sym_TILDE_AMP] = ACTIONS(490),
    [anon_sym_CARET_TILDE] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_DASH_DASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(23),
  },
  [458] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(488),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [459] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(489),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(490),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(490),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [460] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(491),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(492),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(492),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [461] = {
    [aux_sym_constant_expression_repeat1] = STATE(493),
    [anon_sym_COLON] = ACTIONS(817),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [462] = {
    [sym_binary_operator] = STATE(460),
    [aux_sym_constant_expression_repeat1] = STATE(494),
    [anon_sym_COLON] = ACTIONS(817),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [463] = {
    [sym_binary_operator] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [464] = {
    [aux_sym_constant_expression_repeat1] = STATE(418),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_LBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [465] = {
    [sym_binary_operator] = STATE(349),
    [aux_sym_constant_expression_repeat1] = STATE(495),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_LBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [466] = {
    [sym_binary_operator] = STATE(349),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_LBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [467] = {
    [sym_binary_operator] = STATE(422),
    [anon_sym_RPAREN] = ACTIONS(746),
    [anon_sym_COLON] = ACTIONS(746),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [468] = {
    [sym_binary_operator] = STATE(422),
    [aux_sym_constant_expression_repeat1] = STATE(496),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [469] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(497),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [470] = {
    [sym_binary_operator] = STATE(422),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [471] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(498),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [472] = {
    [aux_sym_constant_expression_repeat1] = STATE(472),
    [anon_sym_RPAREN] = ACTIONS(746),
    [anon_sym_COLON] = ACTIONS(853),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [473] = {
    [aux_sym_constant_expression_repeat1] = STATE(472),
    [anon_sym_RPAREN] = ACTIONS(753),
    [anon_sym_COLON] = ACTIONS(757),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [474] = {
    [aux_sym_constant_expression_repeat1] = STATE(431),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(675),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [475] = {
    [sym_binary_operator] = STATE(363),
    [aux_sym_constant_expression_repeat1] = STATE(499),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(675),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [476] = {
    [sym_binary_operator] = STATE(363),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(675),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [477] = {
    [sym_binary_operator] = STATE(501),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_COMMA] = ACTIONS(856),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(858),
    [anon_sym_TILDE_CARET] = ACTIONS(252),
    [anon_sym_CARET_TILDE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(252),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
  },
  [478] = {
    [sym_binary_operator] = STATE(304),
    [anon_sym_SEMI] = ACTIONS(746),
    [anon_sym_COLON] = ACTIONS(746),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [479] = {
    [aux_sym_constant_expression_repeat1] = STATE(479),
    [anon_sym_SEMI] = ACTIONS(746),
    [anon_sym_COLON] = ACTIONS(860),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [480] = {
    [aux_sym_constant_expression_repeat1] = STATE(479),
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [481] = {
    [anon_sym_endmodule] = ACTIONS(863),
    [anon_sym_extern] = ACTIONS(863),
    [anon_sym_module] = ACTIONS(863),
    [anon_sym_macromodule] = ACTIONS(863),
    [anon_sym_defparam] = ACTIONS(863),
    [anon_sym_LPAREN_STAR] = ACTIONS(744),
    [sym_simple_identifier] = ACTIONS(863),
  },
  [482] = {
    [sym_packed_dimension] = STATE(502),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(502),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(49),
  },
  [483] = {
    [sym_packed_dimension] = STATE(503),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(503),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(49),
  },
  [484] = {
    [anon_sym_RPAREN] = ACTIONS(865),
    [anon_sym_COMMA] = ACTIONS(865),
  },
  [485] = {
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_COMMA] = ACTIONS(867),
  },
  [486] = {
    [anon_sym_RPAREN] = ACTIONS(869),
    [anon_sym_COMMA] = ACTIONS(869),
  },
  [487] = {
    [anon_sym_RPAREN] = ACTIONS(871),
  },
  [488] = {
    [sym_binary_operator] = STATE(460),
    [anon_sym_COLON] = ACTIONS(746),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_RBRACE] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [489] = {
    [sym_binary_operator] = STATE(460),
    [aux_sym_constant_expression_repeat1] = STATE(505),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [490] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(506),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [491] = {
    [sym_binary_operator] = STATE(460),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [492] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(507),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [493] = {
    [aux_sym_constant_expression_repeat1] = STATE(493),
    [anon_sym_COLON] = ACTIONS(873),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_STAR_STAR] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_EQ_EQ] = ACTIONS(748),
    [anon_sym_BANG_EQ] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LT_EQ] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_GT_EQ] = ACTIONS(746),
    [anon_sym_RBRACE] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_TILDE_CARET] = ACTIONS(746),
    [anon_sym_CARET_TILDE] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(746),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(746),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(746),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(746),
    [anon_sym_LT_DASH_GT] = ACTIONS(746),
    [anon_sym_GT_GT_GT] = ACTIONS(746),
    [anon_sym_LT_LT_LT] = ACTIONS(746),
    [anon_sym_GT_GT] = ACTIONS(748),
    [anon_sym_LT_LT] = ACTIONS(748),
    [anon_sym_AMP_AMP] = ACTIONS(746),
    [anon_sym_PIPE_PIPE] = ACTIONS(746),
    [anon_sym_DASH_GT] = ACTIONS(746),
  },
  [494] = {
    [aux_sym_constant_expression_repeat1] = STATE(493),
    [anon_sym_COLON] = ACTIONS(817),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_RBRACE] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [495] = {
    [aux_sym_constant_expression_repeat1] = STATE(418),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_RBRACE] = ACTIONS(753),
    [anon_sym_LBRACE] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [496] = {
    [aux_sym_constant_expression_repeat1] = STATE(472),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [497] = {
    [sym_binary_operator] = STATE(422),
    [aux_sym_constant_expression_repeat1] = STATE(508),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [498] = {
    [sym_binary_operator] = STATE(422),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [499] = {
    [aux_sym_constant_expression_repeat1] = STATE(431),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_RBRACK] = ACTIONS(753),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [500] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(509),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(510),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(510),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [501] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(511),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(512),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(512),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [502] = {
    [sym_packed_dimension] = STATE(503),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(503),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(49),
  },
  [503] = {
    [sym_packed_dimension] = STATE(503),
    [sym_unsized_dimension] = STATE(54),
    [aux_sym_data_type_repeat1] = STATE(503),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(304),
  },
  [504] = {
    [anon_sym_RPAREN] = ACTIONS(876),
    [anon_sym_COMMA] = ACTIONS(876),
  },
  [505] = {
    [aux_sym_constant_expression_repeat1] = STATE(493),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [506] = {
    [sym_binary_operator] = STATE(460),
    [aux_sym_constant_expression_repeat1] = STATE(513),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [507] = {
    [sym_binary_operator] = STATE(460),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [508] = {
    [aux_sym_constant_expression_repeat1] = STATE(472),
    [anon_sym_RPAREN] = ACTIONS(753),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [509] = {
    [sym_binary_operator] = STATE(304),
    [aux_sym_constant_expression_repeat1] = STATE(514),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(878),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [510] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(515),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [511] = {
    [sym_binary_operator] = STATE(501),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_STAR_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_TILDE_CARET] = ACTIONS(526),
    [anon_sym_CARET_TILDE] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(526),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(526),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(526),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_LT_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_DASH_GT] = ACTIONS(526),
  },
  [512] = {
    [sym_constant_concatenation] = STATE(84),
    [sym_constant_multiple_concatenation] = STATE(84),
    [sym_constant_expression] = STATE(516),
    [sym_constant_primary] = STATE(87),
    [sym_primary_literal] = STATE(88),
    [sym_unary_operator] = STATE(89),
    [sym_number] = STATE(90),
    [sym_integral_number] = STATE(83),
    [sym_attribute_instance] = STATE(289),
    [sym_identifier] = STATE(91),
    [sym_parameter_identifier] = STATE(92),
    [sym_ps_parameter_identifier] = STATE(93),
    [aux_sym_module_header_repeat1] = STATE(289),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_TILDE_PIPE] = ACTIONS(125),
    [anon_sym_TILDE_CARET] = ACTIONS(125),
    [anon_sym_TILDE_AMP] = ACTIONS(125),
    [anon_sym_CARET_TILDE] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [sym_real_number] = ACTIONS(133),
    [anon_sym_LPAREN_STAR] = ACTIONS(262),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [513] = {
    [aux_sym_constant_expression_repeat1] = STATE(493),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_RBRACE] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
  [514] = {
    [aux_sym_constant_expression_repeat1] = STATE(479),
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(878),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [515] = {
    [sym_binary_operator] = STATE(304),
    [aux_sym_constant_expression_repeat1] = STATE(517),
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(878),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [516] = {
    [sym_binary_operator] = STATE(501),
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_STAR_STAR] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(675),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(675),
    [anon_sym_CARET_TILDE] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(675),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(675),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(675),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(675),
    [anon_sym_LT_DASH_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(675),
    [anon_sym_LT_LT_LT] = ACTIONS(675),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(675),
  },
  [517] = {
    [aux_sym_constant_expression_repeat1] = STATE(479),
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_COLON] = ACTIONS(878),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_LT_EQ] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_EQ] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_TILDE_CARET] = ACTIONS(753),
    [anon_sym_CARET_TILDE] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_CARET] = ACTIONS(755),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(753),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(753),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(753),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(753),
    [anon_sym_LT_DASH_GT] = ACTIONS(753),
    [anon_sym_GT_GT_GT] = ACTIONS(753),
    [anon_sym_LT_LT_LT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_DASH_GT] = ACTIONS(753),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, REDUCE(sym_module_keyword, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(11),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, SHIFT(15),
  [21] = {.count = 1, .reusable = false}, SHIFT(20),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(27),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(30),
  [33] = {.count = 1, .reusable = true}, SHIFT(31),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_attr_spec, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(33),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_attr_name, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(34),
  [43] = {.count = 1, .reusable = true}, SHIFT(35),
  [45] = {.count = 1, .reusable = false}, SHIFT(36),
  [47] = {.count = 1, .reusable = false}, SHIFT(37),
  [49] = {.count = 1, .reusable = true}, SHIFT(38),
  [51] = {.count = 1, .reusable = false}, SHIFT(39),
  [53] = {.count = 1, .reusable = false}, SHIFT(40),
  [55] = {.count = 1, .reusable = false}, SHIFT(41),
  [57] = {.count = 1, .reusable = false}, SHIFT(42),
  [59] = {.count = 1, .reusable = false}, SHIFT(53),
  [61] = {.count = 1, .reusable = true}, SHIFT(59),
  [63] = {.count = 1, .reusable = false}, SHIFT(59),
  [65] = {.count = 1, .reusable = false}, SHIFT(60),
  [67] = {.count = 1, .reusable = false}, SHIFT(3),
  [69] = {.count = 1, .reusable = false}, SHIFT(61),
  [71] = {.count = 1, .reusable = true}, SHIFT(62),
  [73] = {.count = 1, .reusable = true}, SHIFT(68),
  [75] = {.count = 1, .reusable = true}, SHIFT(69),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_lifetime, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_module_identifier, 1, .alias_sequence_id = 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(71),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2), SHIFT_REPEAT(4),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 3),
  [103] = {.count = 1, .reusable = true}, SHIFT(74),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_instance, 3),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_instance, 3),
  [109] = {.count = 1, .reusable = true}, SHIFT(76),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_attr_spec, 2),
  [113] = {.count = 1, .reusable = true}, SHIFT(78),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_ports, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_port_direction, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_port_direction, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_data_type, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(79),
  [125] = {.count = 1, .reusable = true}, SHIFT(80),
  [127] = {.count = 1, .reusable = true}, SHIFT(81),
  [129] = {.count = 1, .reusable = false}, SHIFT(80),
  [131] = {.count = 1, .reusable = false}, SHIFT(82),
  [133] = {.count = 1, .reusable = false}, SHIFT(83),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_integer_atom_type, 1),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_integer_vector_type, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_integer_vector_type, 1),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_non_integer_type, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_net_type, 1),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_net_type, 1),
  [147] = {.count = 1, .reusable = true}, SHIFT(94),
  [149] = {.count = 1, .reusable = true}, SHIFT(95),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [153] = {.count = 1, .reusable = true}, SHIFT(37),
  [155] = {.count = 1, .reusable = true}, SHIFT(39),
  [157] = {.count = 1, .reusable = true}, SHIFT(40),
  [159] = {.count = 1, .reusable = true}, SHIFT(41),
  [161] = {.count = 1, .reusable = true}, SHIFT(42),
  [163] = {.count = 1, .reusable = true}, SHIFT(53),
  [165] = {.count = 1, .reusable = true}, SHIFT(99),
  [167] = {.count = 1, .reusable = true}, SHIFT(100),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_net_port_type, 1),
  [171] = {.count = 1, .reusable = false}, SHIFT(102),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_data_type, 1),
  [175] = {.count = 1, .reusable = false}, SHIFT(103),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_net_port_header, 1),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_packed_dimension, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_port_identifier, 1, .alias_sequence_id = 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_port_reference, 1),
  [185] = {.count = 1, .reusable = true}, SHIFT(107),
  [187] = {.count = 1, .reusable = true}, SHIFT(108),
  [189] = {.count = 1, .reusable = true}, SHIFT(36),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_data_type, 1),
  [193] = {.count = 1, .reusable = true}, SHIFT(115),
  [195] = {.count = 1, .reusable = true}, SHIFT(117),
  [197] = {.count = 1, .reusable = true}, SHIFT(125),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_module_or_generate_item, 1),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_module_or_generate_item, 1),
  [203] = {.count = 1, .reusable = true}, SHIFT(128),
  [205] = {.count = 1, .reusable = false}, SHIFT(136),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_module_nonansi_header, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_module_ansi_header, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_module_ansi_header, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 3),
  [215] = {.count = 1, .reusable = true}, SHIFT(139),
  [217] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_instance_repeat1, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_instance, 4),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_instance, 4),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_instance_repeat1, 2), SHIFT_REPEAT(30),
  [226] = {.count = 1, .reusable = true}, SHIFT(141),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_unsized_dimension, 2),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 1),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 1),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_integral_number, 1),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_integral_number, 1),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_constant_primary, 1),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_constant_primary, 1),
  [246] = {.count = 1, .reusable = true}, SHIFT(143),
  [248] = {.count = 1, .reusable = true}, SHIFT(144),
  [250] = {.count = 1, .reusable = false}, SHIFT(145),
  [252] = {.count = 1, .reusable = true}, SHIFT(145),
  [254] = {.count = 1, .reusable = true}, SHIFT(146),
  [256] = {.count = 1, .reusable = true}, SHIFT(148),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 1),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 1),
  [262] = {.count = 1, .reusable = true}, SHIFT(149),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_primary_literal, 1),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_primary_literal, 1),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_identifier, 1, .alias_sequence_id = 3),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_ps_parameter_identifier, 1),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_ports, 3),
  [274] = {.count = 1, .reusable = true}, SHIFT(153),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_net_port_header, 2),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_ansi_port_declaration, 2),
  [280] = {.count = 1, .reusable = true}, SHIFT(155),
  [282] = {.count = 1, .reusable = true}, SHIFT(156),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_declarations, 3),
  [286] = {.count = 1, .reusable = true}, SHIFT(160),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_data_type, 2),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_net_port_type, 2),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_data_type, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_constant_select, 1),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_constant_select, 1),
  [298] = {.count = 1, .reusable = true}, SHIFT(166),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_port_reference, 2),
  [302] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_header_repeat1, 2),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_type_repeat1, 2), SHIFT_REPEAT(38),
  [307] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_type_repeat1, 2),
  [309] = {.count = 1, .reusable = true}, SHIFT(170),
  [311] = {.count = 1, .reusable = true}, SHIFT(175),
  [313] = {.count = 1, .reusable = true}, SHIFT(176),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_defparam_assignments, 1),
  [317] = {.count = 1, .reusable = true}, SHIFT(177),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_parameter_identifier, 1),
  [321] = {.count = 1, .reusable = true}, SHIFT(179),
  [323] = {.count = 1, .reusable = true}, SHIFT(183),
  [325] = {.count = 1, .reusable = true}, SHIFT(185),
  [327] = {.count = 1, .reusable = true}, SHIFT(186),
  [329] = {.count = 1, .reusable = false}, SHIFT(186),
  [331] = {.count = 1, .reusable = true}, SHIFT(188),
  [333] = {.count = 1, .reusable = true}, SHIFT(190),
  [335] = {.count = 1, .reusable = true}, SHIFT(191),
  [337] = {.count = 1, .reusable = true}, SHIFT(193),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_instance_identifier, 1, .alias_sequence_id = 4),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_name_of_instance, 1),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_module_or_generate_item, 2),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_module_or_generate_item, 2),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2), SHIFT_REPEAT(62),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 4),
  [352] = {.count = 1, .reusable = true}, SHIFT(195),
  [354] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [356] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(60),
  [359] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(3),
  [362] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(61),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(62),
  [368] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(11),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 4),
  [373] = {.count = 1, .reusable = true}, SHIFT(196),
  [375] = {.count = 1, .reusable = true}, SHIFT(198),
  [377] = {.count = 1, .reusable = true}, SHIFT(199),
  [379] = {.count = 1, .reusable = true}, SHIFT(200),
  [381] = {.count = 1, .reusable = true}, SHIFT(201),
  [383] = {.count = 1, .reusable = true}, SHIFT(202),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_constant_primary, 2),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_constant_primary, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 1),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 1),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_packed_dimension, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 2),
  [399] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_ports_repeat1, 2),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_ports, 4),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_ports_repeat1, 2), SHIFT_REPEAT(95),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_ansi_port_declaration, 3),
  [408] = {.count = 1, .reusable = true}, SHIFT(216),
  [410] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_port_declarations_repeat1, 2),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_declarations, 4),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_port_declarations_repeat1, 2), SHIFT_REPEAT(100),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_data_type, 3),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_member_identifier, 1, .alias_sequence_id = 5),
  [421] = {.count = 1, .reusable = true}, REDUCE(aux_sym_constant_select_repeat1, 2),
  [423] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_select_repeat1, 2), SHIFT_REPEAT(108),
  [426] = {.count = 1, .reusable = true}, SHIFT(220),
  [428] = {.count = 1, .reusable = true}, SHIFT(221),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_constant_select, 2),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_constant_select, 2),
  [434] = {.count = 1, .reusable = true}, SHIFT(223),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_select_repeat1, 2), SHIFT_REPEAT(107),
  [439] = {.count = 1, .reusable = true}, SHIFT(224),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 5),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 3),
  [445] = {.count = 1, .reusable = true}, SHIFT(225),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_override, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_override, 3),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_defparam_assignments, 2),
  [453] = {.count = 1, .reusable = true}, SHIFT(231),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_identifier, 2),
  [457] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hierarchical_identifier_repeat1, 2), SHIFT_REPEAT(11),
  [460] = {.count = 1, .reusable = true}, SHIFT(232),
  [462] = {.count = 1, .reusable = true}, SHIFT(233),
  [464] = {.count = 1, .reusable = true}, SHIFT(234),
  [466] = {.count = 1, .reusable = false}, SHIFT(235),
  [468] = {.count = 1, .reusable = true}, SHIFT(236),
  [470] = {.count = 1, .reusable = true}, SHIFT(237),
  [472] = {.count = 1, .reusable = true}, SHIFT(238),
  [474] = {.count = 1, .reusable = false}, SHIFT(239),
  [476] = {.count = 1, .reusable = false}, SHIFT(240),
  [478] = {.count = 1, .reusable = true}, SHIFT(241),
  [480] = {.count = 1, .reusable = false}, SHIFT(242),
  [482] = {.count = 1, .reusable = true}, SHIFT(243),
  [484] = {.count = 1, .reusable = true}, SHIFT(244),
  [486] = {.count = 1, .reusable = true}, SHIFT(245),
  [488] = {.count = 1, .reusable = false}, SHIFT(246),
  [490] = {.count = 1, .reusable = true}, SHIFT(242),
  [492] = {.count = 1, .reusable = true}, SHIFT(262),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_module_instantiation, 3),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_module_instantiation, 3),
  [498] = {.count = 1, .reusable = true}, SHIFT(266),
  [500] = {.count = 1, .reusable = true}, SHIFT(267),
  [502] = {.count = 1, .reusable = false}, SHIFT(268),
  [504] = {.count = 1, .reusable = true}, SHIFT(269),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_name_of_instance, 2),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_port_list, 3),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 5),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 6),
  [514] = {.count = 1, .reusable = true}, SHIFT(276),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_constant_concatenation, 3),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym_constant_concatenation, 3),
  [520] = {.count = 1, .reusable = true}, SHIFT(281),
  [522] = {.count = 1, .reusable = true}, SHIFT(284),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_constant_range, 3),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 3),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 3),
  [530] = {.count = 1, .reusable = true}, SHIFT(291),
  [532] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2), SHIFT_REPEAT(149),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_ansi_port_declaration, 4),
  [537] = {.count = 1, .reusable = true}, SHIFT(293),
  [539] = {.count = 1, .reusable = true}, SHIFT(295),
  [541] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ansi_port_declaration_repeat1, 2),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ansi_port_declaration_repeat1, 2), SHIFT_REPEAT(156),
  [546] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_port_declarations_repeat1, 3),
  [548] = {.count = 1, .reusable = true}, REDUCE(aux_sym_constant_select_repeat1, 3),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_constant_bit_select, 3),
  [552] = {.count = 1, .reusable = false}, REDUCE(sym_constant_bit_select, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_constant_select, 3),
  [556] = {.count = 1, .reusable = false}, REDUCE(sym_constant_select, 3),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_declarations, 5),
  [560] = {.count = 1, .reusable = false}, REDUCE(sym_module_nonansi_header, 2),
  [562] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_defparam_assignments_repeat1, 2),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_defparam_assignments_repeat1, 2), SHIFT_REPEAT(177),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_constant_mintypmax_expression, 1),
  [569] = {.count = 1, .reusable = true}, SHIFT(302),
  [571] = {.count = 1, .reusable = true}, SHIFT(303),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_defparam_assignment, 3),
  [575] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hierarchical_identifier_repeat1, 3),
  [577] = {.count = 1, .reusable = true}, SHIFT(305),
  [579] = {.count = 1, .reusable = true}, SHIFT(306),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 4),
  [583] = {.count = 1, .reusable = true}, SHIFT(309),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_value_assignment, 3),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_integer_atom_type, 1),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_param_expression, 1),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_inc_or_dec_operator, 1),
  [593] = {.count = 1, .reusable = true}, SHIFT(312),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_primary, 1),
  [597] = {.count = 1, .reusable = true}, SHIFT(102),
  [599] = {.count = 1, .reusable = true}, SHIFT(316),
  [601] = {.count = 1, .reusable = true}, SHIFT(318),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_parameter_assignments, 1),
  [605] = {.count = 1, .reusable = true}, SHIFT(319),
  [607] = {.count = 1, .reusable = true}, SHIFT(321),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_variable_lvalue, 1),
  [611] = {.count = 1, .reusable = true}, SHIFT(324),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_ordered_parameter_assignment, 1, .alias_sequence_id = 6),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_mintypmax_expression, 1),
  [619] = {.count = 1, .reusable = true}, SHIFT(325),
  [621] = {.count = 1, .reusable = false}, SHIFT(236),
  [623] = {.count = 1, .reusable = true}, SHIFT(328),
  [625] = {.count = 1, .reusable = true}, SHIFT(246),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_pattern_expression_type, 1),
  [629] = {.count = 1, .reusable = false}, REDUCE(sym_module_instantiation, 4),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_module_instantiation, 4),
  [633] = {.count = 1, .reusable = true}, SHIFT(332),
  [635] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_instantiation_repeat1, 2),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_instantiation_repeat1, 2), SHIFT_REPEAT(191),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 1),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_instance, 3),
  [644] = {.count = 1, .reusable = true}, SHIFT(335),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_connections, 1),
  [648] = {.count = 1, .reusable = true}, SHIFT(336),
  [650] = {.count = 1, .reusable = true}, SHIFT(338),
  [652] = {.count = 1, .reusable = true}, SHIFT(340),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_ordered_port_connection, 1),
  [656] = {.count = 1, .reusable = false}, SHIFT(341),
  [658] = {.count = 1, .reusable = true}, REDUCE(aux_sym_constant_concatenation_repeat1, 2),
  [660] = {.count = 1, .reusable = true}, SHIFT(345),
  [662] = {.count = 1, .reusable = true}, SHIFT(347),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_constant_multiple_concatenation, 4),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym_constant_multiple_concatenation, 4),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_constant_concatenation, 4),
  [670] = {.count = 1, .reusable = false}, REDUCE(sym_constant_concatenation, 4),
  [672] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_concatenation_repeat1, 2), SHIFT_REPEAT(199),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 4),
  [677] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 4),
  [679] = {.count = 1, .reusable = true}, SHIFT(356),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_unpacked_dimension, 3),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_ansi_port_declaration, 5),
  [685] = {.count = 1, .reusable = true}, SHIFT(361),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_identifier, 4),
  [689] = {.count = 1, .reusable = true}, SHIFT(372),
  [691] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_module_identifier, 1, .alias_sequence_id = 1),
  [695] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 5),
  [697] = {.count = 1, .reusable = true}, SHIFT(374),
  [699] = {.count = 1, .reusable = true}, SHIFT(375),
  [701] = {.count = 1, .reusable = true}, SHIFT(377),
  [703] = {.count = 1, .reusable = true}, SHIFT(378),
  [705] = {.count = 1, .reusable = true}, SHIFT(380),
  [707] = {.count = 1, .reusable = true}, SHIFT(381),
  [709] = {.count = 1, .reusable = true}, SHIFT(382),
  [711] = {.count = 1, .reusable = true}, SHIFT(385),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_value_assignment, 4),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_parameter_assignments, 2),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_variable_lvalue, 2),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_primary, 2),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym_inc_or_dec_expression, 2),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [725] = {.count = 1, .reusable = false}, REDUCE(sym_module_instantiation, 5),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym_module_instantiation, 5),
  [729] = {.count = 1, .reusable = true}, SHIFT(399),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 2),
  [733] = {.count = 1, .reusable = true}, SHIFT(400),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_instance, 4),
  [737] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_connections, 2),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_ordered_port_connection, 2),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2), SHIFT_REPEAT(269),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 8),
  [746] = {.count = 1, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2),
  [748] = {.count = 1, .reusable = false}, REDUCE(aux_sym_constant_expression_repeat1, 2),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(286),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 5),
  [755] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 5),
  [757] = {.count = 1, .reusable = true}, SHIFT(420),
  [759] = {.count = 1, .reusable = true}, SHIFT(433),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 6),
  [763] = {.count = 1, .reusable = true}, SHIFT(438),
  [765] = {.count = 1, .reusable = true}, REDUCE(sym_primary, 3),
  [767] = {.count = 1, .reusable = true}, SHIFT(439),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_pattern_variable_lvalue, 3),
  [771] = {.count = 1, .reusable = true}, SHIFT(443),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 3),
  [775] = {.count = 1, .reusable = true}, SHIFT(447),
  [777] = {.count = 1, .reusable = true}, SHIFT(448),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_variable_lvalue, 3),
  [781] = {.count = 1, .reusable = true}, SHIFT(450),
  [783] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_parameter_assignments_repeat1, 2),
  [785] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_parameter_assignments_repeat1, 2), SHIFT_REPEAT(319),
  [788] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_parameter_assignments_repeat2, 2),
  [790] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_parameter_assignments_repeat2, 2), SHIFT_REPEAT(321),
  [793] = {.count = 1, .reusable = true}, SHIFT(451),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_inc_or_dec_expression, 3),
  [797] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [799] = {.count = 1, .reusable = true}, SHIFT(452),
  [801] = {.count = 1, .reusable = true}, SHIFT(454),
  [803] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_port_connections_repeat2, 2),
  [805] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_port_connections_repeat2, 2), SHIFT_REPEAT(336),
  [808] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_port_connections_repeat1, 2),
  [810] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_port_connections_repeat1, 2), SHIFT_REPEAT(338),
  [813] = {.count = 1, .reusable = true}, SHIFT(457),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 3),
  [817] = {.count = 1, .reusable = true}, SHIFT(458),
  [819] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(347),
  [822] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(361),
  [825] = {.count = 1, .reusable = true}, REDUCE(sym_named_parameter_assignment, 4),
  [827] = {.count = 1, .reusable = true}, SHIFT(482),
  [829] = {.count = 1, .reusable = true}, SHIFT(484),
  [831] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assignment_pattern_variable_lvalue_repeat1, 2),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_pattern_variable_lvalue, 4),
  [835] = {.count = 2, .reusable = true}, REDUCE(aux_sym_assignment_pattern_variable_lvalue_repeat1, 2), SHIFT_REPEAT(377),
  [838] = {.count = 1, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_multiple_concatenation, 4),
  [842] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 4),
  [844] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(380),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_variable_lvalue, 4),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 4),
  [851] = {.count = 1, .reusable = true}, SHIFT(486),
  [853] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(420),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_constant_mintypmax_expression, 5),
  [858] = {.count = 1, .reusable = true}, SHIFT(500),
  [860] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(434),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 8),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_named_parameter_assignment, 5),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_mintypmax_expression, 5),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 5),
  [871] = {.count = 1, .reusable = true}, SHIFT(504),
  [873] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(458),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 6),
  [878] = {.count = 1, .reusable = true}, SHIFT(434),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_verilog() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
