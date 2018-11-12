#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 521
#define SYMBOL_COUNT 398
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
  sym__module_item = 312,
  sym_module_or_generate_item = 313,
  sym__non_port_module_item = 314,
  sym_parameter_override = 315,
  sym_lifetime = 316,
  sym_data_type = 317,
  sym__data_type_or_implicit = 318,
  sym_implicit_data_type = 319,
  sym_integer_atom_type = 320,
  sym_integer_vector_type = 321,
  sym_non_integer_type = 322,
  sym_net_type = 323,
  sym_net_port_type = 324,
  sym__signing = 325,
  sym_list_of_defparam_assignments = 326,
  sym_defparam_assignment = 327,
  sym_unpacked_dimension = 328,
  sym_packed_dimension = 329,
  sym_unsized_dimension = 330,
  sym_module_instantiation = 331,
  sym_parameter_value_assignment = 332,
  sym_list_of_parameter_assignments = 333,
  sym_ordered_parameter_assignment = 334,
  sym_named_parameter_assignment = 335,
  sym_hierarchical_instance = 336,
  sym_name_of_instance = 337,
  sym_list_of_port_connections = 338,
  sym_ordered_port_connection = 339,
  sym_named_port_connection = 340,
  sym_assignment_pattern_expression_type = 341,
  sym_assignment_pattern_variable_lvalue = 342,
  sym_concatenation = 343,
  sym_constant_concatenation = 344,
  sym_constant_multiple_concatenation = 345,
  sym_multiple_concatenation = 346,
  sym_inc_or_dec_expression = 347,
  sym_constant_expression = 348,
  sym_constant_mintypmax_expression = 349,
  sym_param_expression = 350,
  sym_constant_range = 351,
  sym_expression = 352,
  sym_mintypmax_expression = 353,
  sym_constant_primary = 354,
  sym_primary = 355,
  sym_primary_literal = 356,
  sym_constant_bit_select = 357,
  sym_constant_select = 358,
  sym_variable_lvalue = 359,
  sym_unary_operator = 360,
  sym_binary_operator = 361,
  sym_inc_or_dec_operator = 362,
  sym_number = 363,
  sym_integral_number = 364,
  sym_attribute_instance = 365,
  sym_attr_spec = 366,
  sym_attr_name = 367,
  sym_hierarchical_identifier = 368,
  sym_hierarchical_parameter_identifier = 369,
  sym_identifier = 370,
  sym_instance_identifier = 371,
  sym_member_identifier = 372,
  sym_module_identifier = 373,
  sym_parameter_identifier = 374,
  sym_port_identifier = 375,
  sym_ps_parameter_identifier = 376,
  aux_sym_source_file_repeat1 = 377,
  aux_sym_module_header_repeat1 = 378,
  aux_sym_module_declaration_repeat1 = 379,
  aux_sym_module_declaration_repeat2 = 380,
  aux_sym_list_of_ports_repeat1 = 381,
  aux_sym_list_of_port_declarations_repeat1 = 382,
  aux_sym_ansi_port_declaration_repeat1 = 383,
  aux_sym_data_type_repeat1 = 384,
  aux_sym_list_of_defparam_assignments_repeat1 = 385,
  aux_sym_module_instantiation_repeat1 = 386,
  aux_sym_list_of_parameter_assignments_repeat1 = 387,
  aux_sym_list_of_parameter_assignments_repeat2 = 388,
  aux_sym_list_of_port_connections_repeat1 = 389,
  aux_sym_list_of_port_connections_repeat2 = 390,
  aux_sym_assignment_pattern_variable_lvalue_repeat1 = 391,
  aux_sym_concatenation_repeat1 = 392,
  aux_sym_constant_concatenation_repeat1 = 393,
  aux_sym_constant_expression_repeat1 = 394,
  aux_sym_constant_select_repeat1 = 395,
  aux_sym_attribute_instance_repeat1 = 396,
  aux_sym_hierarchical_identifier_repeat1 = 397,
  alias_sym__instance_identifier = 398,
  alias_sym__member_identifier = 399,
  alias_sym__module_identifier = 400,
  alias_sym__ordered_parameter_assignment = 401,
  alias_sym__parameter_identifier = 402,
  alias_sym__port_identifier = 403,
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
  [sym__module_item] = "_module_item",
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
  [aux_sym_module_declaration_repeat2] = "module_declaration_repeat2",
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
  [sym__module_item] = {
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
  [aux_sym_module_declaration_repeat2] = {
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
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == 'e')
        ADVANCE(986);
      if (lookahead == 'm')
        ADVANCE(992);
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
      if (lookahead == '*')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(284);
      END_STATE();
    case 986:
      if (lookahead == 'x')
        ADVANCE(987);
      END_STATE();
    case 987:
      if (lookahead == 't')
        ADVANCE(988);
      END_STATE();
    case 988:
      if (lookahead == 'e')
        ADVANCE(989);
      END_STATE();
    case 989:
      if (lookahead == 'r')
        ADVANCE(990);
      END_STATE();
    case 990:
      if (lookahead == 'n')
        ADVANCE(991);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 992:
      if (lookahead == 'a')
        ADVANCE(993);
      if (lookahead == 'o')
        ADVANCE(1003);
      END_STATE();
    case 993:
      if (lookahead == 'c')
        ADVANCE(994);
      END_STATE();
    case 994:
      if (lookahead == 'r')
        ADVANCE(995);
      END_STATE();
    case 995:
      if (lookahead == 'o')
        ADVANCE(996);
      END_STATE();
    case 996:
      if (lookahead == 'm')
        ADVANCE(997);
      END_STATE();
    case 997:
      if (lookahead == 'o')
        ADVANCE(998);
      END_STATE();
    case 998:
      if (lookahead == 'd')
        ADVANCE(999);
      END_STATE();
    case 999:
      if (lookahead == 'u')
        ADVANCE(1000);
      END_STATE();
    case 1000:
      if (lookahead == 'l')
        ADVANCE(1001);
      END_STATE();
    case 1001:
      if (lookahead == 'e')
        ADVANCE(1002);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_macromodule);
      END_STATE();
    case 1003:
      if (lookahead == 'd')
        ADVANCE(1004);
      END_STATE();
    case 1004:
      if (lookahead == 'u')
        ADVANCE(1005);
      END_STATE();
    case 1005:
      if (lookahead == 'l')
        ADVANCE(1006);
      END_STATE();
    case 1006:
      if (lookahead == 'e')
        ADVANCE(1007);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 1008:
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == 'a')
        ADVANCE(1009);
      if (lookahead == 's')
        ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1008);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1012:
      if (lookahead == '#')
        ADVANCE(1013);
      if (lookahead == '(')
        ADVANCE(1014);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1012);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1015:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1015);
      END_STATE();
    case 1016:
      if (lookahead == '#')
        ADVANCE(1013);
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(1014);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '*')
        ADVANCE(1017);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '.')
        ADVANCE(1018);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '=')
        ADVANCE(1019);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1016);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1017:
      if (lookahead == ')')
        ADVANCE(262);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1020:
      if (lookahead == '*')
        ADVANCE(1017);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '=')
        ADVANCE(1019);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1020);
      END_STATE();
    case 1021:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(1022);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 'b')
        ADVANCE(1023);
      if (lookahead == 'c')
        ADVANCE(1025);
      if (lookahead == 'e')
        ADVANCE(1026);
      if (lookahead == 'i')
        ADVANCE(1027);
      if (lookahead == 'l')
        ADVANCE(1029);
      if (lookahead == 'o')
        ADVANCE(1031);
      if (lookahead == 'r')
        ADVANCE(1032);
      if (lookahead == 's')
        ADVANCE(1034);
      if (lookahead == 't')
        ADVANCE(1037);
      if (lookahead == 'u')
        ADVANCE(1039);
      if (lookahead == 'w')
        ADVANCE(1041);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1021);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1022:
      if (lookahead == '*')
        ADVANCE(279);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(1024);
      if (lookahead == 'y')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'v')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1028:
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
    case 1029:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1030:
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
    case 1031:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1033:
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
    case 1034:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(813);
      if (lookahead == 'i')
        ADVANCE(824);
      if (lookahead == 't')
        ADVANCE(1035);
      if (lookahead == 'u')
        ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'r')
        ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(882);
      if (lookahead == 'r')
        ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1040);
      if (lookahead == 'w')
        ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 's')
        ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1041:
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
    case 1042:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == 'd')
        ADVANCE(1044);
      if (lookahead == 'e')
        ADVANCE(1047);
      if (lookahead == 'm')
        ADVANCE(1051);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1042);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'f')
        ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'p')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1048);
      if (lookahead == 'x')
        ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'd')
        ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(1052);
      if (lookahead == 'o')
        ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1053:
      if (lookahead == '!')
        ADVANCE(1054);
      if (lookahead == '%')
        ADVANCE(1055);
      if (lookahead == '&')
        ADVANCE(1056);
      if (lookahead == '*')
        ADVANCE(1057);
      if (lookahead == '+')
        ADVANCE(1058);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1059);
      if (lookahead == '/')
        ADVANCE(1060);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == ';')
        ADVANCE(298);
      if (lookahead == '<')
        ADVANCE(1061);
      if (lookahead == '=')
        ADVANCE(1064);
      if (lookahead == '>')
        ADVANCE(1065);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == '|')
        ADVANCE(1069);
      if (lookahead == '~')
        ADVANCE(1070);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1053);
      END_STATE();
    case 1054:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(253);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(263);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(277);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(284);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(300);
      if (lookahead == '<')
        ADVANCE(1062);
      if (lookahead == '=')
        ADVANCE(306);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<')
        ADVANCE(1063);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 1064:
      if (lookahead == '=')
        ADVANCE(308);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(312);
      if (lookahead == '>')
        ADVANCE(1066);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(1067);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '~')
        ADVANCE(324);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(974);
      END_STATE();
    case 1070:
      if (lookahead == '^')
        ADVANCE(978);
      END_STATE();
    case 1071:
      if (lookahead == '(')
        ADVANCE(1072);
      if (lookahead == '+')
        ADVANCE(1073);
      if (lookahead == '-')
        ADVANCE(1074);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 'b')
        ADVANCE(1075);
      if (lookahead == 'c')
        ADVANCE(1081);
      if (lookahead == 'e')
        ADVANCE(1088);
      if (lookahead == 'i')
        ADVANCE(1093);
      if (lookahead == 'l')
        ADVANCE(1106);
      if (lookahead == 'm')
        ADVANCE(992);
      if (lookahead == 'n')
        ADVANCE(1116);
      if (lookahead == 'o')
        ADVANCE(1120);
      if (lookahead == 'r')
        ADVANCE(1126);
      if (lookahead == 's')
        ADVANCE(1136);
      if (lookahead == 't')
        ADVANCE(1165);
      if (lookahead == 'u')
        ADVANCE(1184);
      if (lookahead == 'w')
        ADVANCE(1196);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1071);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*')
        ADVANCE(984);
      END_STATE();
    case 1073:
      if (lookahead == '+')
        ADVANCE(269);
      END_STATE();
    case 1074:
      if (lookahead == '-')
        ADVANCE(274);
      END_STATE();
    case 1075:
      if (lookahead == 'i')
        ADVANCE(1076);
      if (lookahead == 'y')
        ADVANCE(1078);
      END_STATE();
    case 1076:
      if (lookahead == 't')
        ADVANCE(1077);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 1078:
      if (lookahead == 't')
        ADVANCE(1079);
      END_STATE();
    case 1079:
      if (lookahead == 'e')
        ADVANCE(1080);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 1081:
      if (lookahead == 'h')
        ADVANCE(1082);
      END_STATE();
    case 1082:
      if (lookahead == 'a')
        ADVANCE(1083);
      END_STATE();
    case 1083:
      if (lookahead == 'n')
        ADVANCE(1084);
      END_STATE();
    case 1084:
      if (lookahead == 'd')
        ADVANCE(1085);
      END_STATE();
    case 1085:
      if (lookahead == 'l')
        ADVANCE(1086);
      END_STATE();
    case 1086:
      if (lookahead == 'e')
        ADVANCE(1087);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_chandle);
      END_STATE();
    case 1088:
      if (lookahead == 'v')
        ADVANCE(1089);
      END_STATE();
    case 1089:
      if (lookahead == 'e')
        ADVANCE(1090);
      END_STATE();
    case 1090:
      if (lookahead == 'n')
        ADVANCE(1091);
      END_STATE();
    case 1091:
      if (lookahead == 't')
        ADVANCE(1092);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 1093:
      if (lookahead == 'n')
        ADVANCE(1094);
      END_STATE();
    case 1094:
      if (lookahead == 'o')
        ADVANCE(1095);
      if (lookahead == 'p')
        ADVANCE(1098);
      if (lookahead == 't')
        ADVANCE(1101);
      END_STATE();
    case 1095:
      if (lookahead == 'u')
        ADVANCE(1096);
      END_STATE();
    case 1096:
      if (lookahead == 't')
        ADVANCE(1097);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 1098:
      if (lookahead == 'u')
        ADVANCE(1099);
      END_STATE();
    case 1099:
      if (lookahead == 't')
        ADVANCE(1100);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(1102);
      END_STATE();
    case 1102:
      if (lookahead == 'g')
        ADVANCE(1103);
      END_STATE();
    case 1103:
      if (lookahead == 'e')
        ADVANCE(1104);
      END_STATE();
    case 1104:
      if (lookahead == 'r')
        ADVANCE(1105);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1106:
      if (lookahead == 'o')
        ADVANCE(1107);
      END_STATE();
    case 1107:
      if (lookahead == 'g')
        ADVANCE(1108);
      if (lookahead == 'n')
        ADVANCE(1111);
      END_STATE();
    case 1108:
      if (lookahead == 'i')
        ADVANCE(1109);
      END_STATE();
    case 1109:
      if (lookahead == 'c')
        ADVANCE(1110);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_logic);
      END_STATE();
    case 1111:
      if (lookahead == 'g')
        ADVANCE(1112);
      END_STATE();
    case 1112:
      if (lookahead == 'i')
        ADVANCE(1113);
      END_STATE();
    case 1113:
      if (lookahead == 'n')
        ADVANCE(1114);
      END_STATE();
    case 1114:
      if (lookahead == 't')
        ADVANCE(1115);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_longint);
      END_STATE();
    case 1116:
      if (lookahead == 'u')
        ADVANCE(1117);
      END_STATE();
    case 1117:
      if (lookahead == 'l')
        ADVANCE(1118);
      END_STATE();
    case 1118:
      if (lookahead == 'l')
        ADVANCE(1119);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 1120:
      if (lookahead == 'u')
        ADVANCE(1121);
      END_STATE();
    case 1121:
      if (lookahead == 't')
        ADVANCE(1122);
      END_STATE();
    case 1122:
      if (lookahead == 'p')
        ADVANCE(1123);
      END_STATE();
    case 1123:
      if (lookahead == 'u')
        ADVANCE(1124);
      END_STATE();
    case 1124:
      if (lookahead == 't')
        ADVANCE(1125);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1126:
      if (lookahead == 'e')
        ADVANCE(1127);
      END_STATE();
    case 1127:
      if (lookahead == 'a')
        ADVANCE(1128);
      if (lookahead == 'f')
        ADVANCE(1134);
      if (lookahead == 'g')
        ADVANCE(1135);
      END_STATE();
    case 1128:
      if (lookahead == 'l')
        ADVANCE(1129);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == 't')
        ADVANCE(1130);
      END_STATE();
    case 1130:
      if (lookahead == 'i')
        ADVANCE(1131);
      END_STATE();
    case 1131:
      if (lookahead == 'm')
        ADVANCE(1132);
      END_STATE();
    case 1132:
      if (lookahead == 'e')
        ADVANCE(1133);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_realtime);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 1136:
      if (lookahead == 'h')
        ADVANCE(1137);
      if (lookahead == 'i')
        ADVANCE(1148);
      if (lookahead == 't')
        ADVANCE(1153);
      if (lookahead == 'u')
        ADVANCE(1158);
      END_STATE();
    case 1137:
      if (lookahead == 'o')
        ADVANCE(1138);
      END_STATE();
    case 1138:
      if (lookahead == 'r')
        ADVANCE(1139);
      END_STATE();
    case 1139:
      if (lookahead == 't')
        ADVANCE(1140);
      END_STATE();
    case 1140:
      if (lookahead == 'i')
        ADVANCE(1141);
      if (lookahead == 'r')
        ADVANCE(1144);
      END_STATE();
    case 1141:
      if (lookahead == 'n')
        ADVANCE(1142);
      END_STATE();
    case 1142:
      if (lookahead == 't')
        ADVANCE(1143);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_shortint);
      END_STATE();
    case 1144:
      if (lookahead == 'e')
        ADVANCE(1145);
      END_STATE();
    case 1145:
      if (lookahead == 'a')
        ADVANCE(1146);
      END_STATE();
    case 1146:
      if (lookahead == 'l')
        ADVANCE(1147);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_shortreal);
      END_STATE();
    case 1148:
      if (lookahead == 'g')
        ADVANCE(1149);
      END_STATE();
    case 1149:
      if (lookahead == 'n')
        ADVANCE(1150);
      END_STATE();
    case 1150:
      if (lookahead == 'e')
        ADVANCE(1151);
      END_STATE();
    case 1151:
      if (lookahead == 'd')
        ADVANCE(1152);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 1153:
      if (lookahead == 'r')
        ADVANCE(1154);
      END_STATE();
    case 1154:
      if (lookahead == 'i')
        ADVANCE(1155);
      END_STATE();
    case 1155:
      if (lookahead == 'n')
        ADVANCE(1156);
      END_STATE();
    case 1156:
      if (lookahead == 'g')
        ADVANCE(1157);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 1158:
      if (lookahead == 'p')
        ADVANCE(1159);
      END_STATE();
    case 1159:
      if (lookahead == 'p')
        ADVANCE(1160);
      END_STATE();
    case 1160:
      if (lookahead == 'l')
        ADVANCE(1161);
      END_STATE();
    case 1161:
      if (lookahead == 'y')
        ADVANCE(1162);
      END_STATE();
    case 1162:
      if (lookahead == '0')
        ADVANCE(1163);
      if (lookahead == '1')
        ADVANCE(1164);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_supply0);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_supply1);
      END_STATE();
    case 1165:
      if (lookahead == 'h')
        ADVANCE(1166);
      if (lookahead == 'i')
        ADVANCE(1169);
      if (lookahead == 'r')
        ADVANCE(1172);
      END_STATE();
    case 1166:
      if (lookahead == 'i')
        ADVANCE(1167);
      END_STATE();
    case 1167:
      if (lookahead == 's')
        ADVANCE(1168);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 1169:
      if (lookahead == 'm')
        ADVANCE(1170);
      END_STATE();
    case 1170:
      if (lookahead == 'e')
        ADVANCE(1171);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 1172:
      if (lookahead == 'i')
        ADVANCE(1173);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_tri);
      if (lookahead == '0')
        ADVANCE(1174);
      if (lookahead == '1')
        ADVANCE(1175);
      if (lookahead == 'a')
        ADVANCE(1176);
      if (lookahead == 'o')
        ADVANCE(1179);
      if (lookahead == 'r')
        ADVANCE(1181);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_tri0);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_tri1);
      END_STATE();
    case 1176:
      if (lookahead == 'n')
        ADVANCE(1177);
      END_STATE();
    case 1177:
      if (lookahead == 'd')
        ADVANCE(1178);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_triand);
      END_STATE();
    case 1179:
      if (lookahead == 'r')
        ADVANCE(1180);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_trior);
      END_STATE();
    case 1181:
      if (lookahead == 'e')
        ADVANCE(1182);
      END_STATE();
    case 1182:
      if (lookahead == 'g')
        ADVANCE(1183);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_trireg);
      END_STATE();
    case 1184:
      if (lookahead == 'n')
        ADVANCE(1185);
      if (lookahead == 'w')
        ADVANCE(1192);
      END_STATE();
    case 1185:
      if (lookahead == 's')
        ADVANCE(1186);
      END_STATE();
    case 1186:
      if (lookahead == 'i')
        ADVANCE(1187);
      END_STATE();
    case 1187:
      if (lookahead == 'g')
        ADVANCE(1188);
      END_STATE();
    case 1188:
      if (lookahead == 'n')
        ADVANCE(1189);
      END_STATE();
    case 1189:
      if (lookahead == 'e')
        ADVANCE(1190);
      END_STATE();
    case 1190:
      if (lookahead == 'd')
        ADVANCE(1191);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1192:
      if (lookahead == 'i')
        ADVANCE(1193);
      END_STATE();
    case 1193:
      if (lookahead == 'r')
        ADVANCE(1194);
      END_STATE();
    case 1194:
      if (lookahead == 'e')
        ADVANCE(1195);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_uwire);
      END_STATE();
    case 1196:
      if (lookahead == 'a')
        ADVANCE(1197);
      if (lookahead == 'i')
        ADVANCE(1200);
      if (lookahead == 'o')
        ADVANCE(1203);
      END_STATE();
    case 1197:
      if (lookahead == 'n')
        ADVANCE(1198);
      END_STATE();
    case 1198:
      if (lookahead == 'd')
        ADVANCE(1199);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_wand);
      END_STATE();
    case 1200:
      if (lookahead == 'r')
        ADVANCE(1201);
      END_STATE();
    case 1201:
      if (lookahead == 'e')
        ADVANCE(1202);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_wire);
      END_STATE();
    case 1203:
      if (lookahead == 'r')
        ADVANCE(1204);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_wor);
      END_STATE();
    case 1205:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 'b')
        ADVANCE(1075);
      if (lookahead == 'c')
        ADVANCE(1081);
      if (lookahead == 'e')
        ADVANCE(1088);
      if (lookahead == 'i')
        ADVANCE(1093);
      if (lookahead == 'l')
        ADVANCE(1106);
      if (lookahead == 'o')
        ADVANCE(1120);
      if (lookahead == 'r')
        ADVANCE(1126);
      if (lookahead == 's')
        ADVANCE(1136);
      if (lookahead == 't')
        ADVANCE(1206);
      if (lookahead == 'u')
        ADVANCE(1184);
      if (lookahead == 'w')
        ADVANCE(1196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1205);
      END_STATE();
    case 1206:
      if (lookahead == 'i')
        ADVANCE(1169);
      if (lookahead == 'r')
        ADVANCE(1172);
      END_STATE();
    case 1207:
      if (lookahead == '(')
        ADVANCE(1072);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1208:
      if (lookahead == '!')
        ADVANCE(1209);
      if (lookahead == '&')
        ADVANCE(1210);
      if (lookahead == '+')
        ADVANCE(1058);
      if (lookahead == '-')
        ADVANCE(1211);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == ']')
        ADVANCE(321);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1212);
      if (lookahead == '~')
        ADVANCE(976);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1208);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1213:
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 's')
        ADVANCE(1214);
      if (lookahead == 'u')
        ADVANCE(1215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1216:
      if (lookahead == '(')
        ADVANCE(1014);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '.')
        ADVANCE(1018);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '=')
        ADVANCE(1019);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1216);
      END_STATE();
    case 1217:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == 'e')
        ADVANCE(986);
      if (lookahead == 'm')
        ADVANCE(992);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1217);
      END_STATE();
    case 1218:
      if (lookahead == '$')
        ADVANCE(1219);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1219:
      if (lookahead == 'r')
        ADVANCE(1220);
      END_STATE();
    case 1220:
      if (lookahead == 'o')
        ADVANCE(157);
      END_STATE();
    case 1221:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == 'd')
        ADVANCE(1044);
      if (lookahead == 'm')
        ADVANCE(1051);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1222:
      if (lookahead == '!')
        ADVANCE(1209);
      if (lookahead == '&')
        ADVANCE(1210);
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == '+')
        ADVANCE(1058);
      if (lookahead == '-')
        ADVANCE(1211);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1212);
      if (lookahead == '~')
        ADVANCE(976);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1222);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1223:
      if (lookahead == '!')
        ADVANCE(1054);
      if (lookahead == '%')
        ADVANCE(1055);
      if (lookahead == '&')
        ADVANCE(1056);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '*')
        ADVANCE(1057);
      if (lookahead == '+')
        ADVANCE(1058);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1059);
      if (lookahead == '/')
        ADVANCE(1060);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == ';')
        ADVANCE(298);
      if (lookahead == '<')
        ADVANCE(1061);
      if (lookahead == '=')
        ADVANCE(1064);
      if (lookahead == '>')
        ADVANCE(1065);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(321);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1069);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '~')
        ADVANCE(1070);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1223);
      END_STATE();
    case 1224:
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(1014);
      if (lookahead == '.')
        ADVANCE(1018);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1224);
      END_STATE();
    case 1225:
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '=')
        ADVANCE(1019);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1225);
      END_STATE();
    case 1226:
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == 'e')
        ADVANCE(1227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1226);
      END_STATE();
    case 1227:
      if (lookahead == 'n')
        ADVANCE(1228);
      END_STATE();
    case 1228:
      if (lookahead == 'd')
        ADVANCE(1229);
      END_STATE();
    case 1229:
      if (lookahead == 'm')
        ADVANCE(1230);
      END_STATE();
    case 1230:
      if (lookahead == 'o')
        ADVANCE(1231);
      END_STATE();
    case 1231:
      if (lookahead == 'd')
        ADVANCE(1232);
      END_STATE();
    case 1232:
      if (lookahead == 'u')
        ADVANCE(1233);
      END_STATE();
    case 1233:
      if (lookahead == 'l')
        ADVANCE(1234);
      END_STATE();
    case 1234:
      if (lookahead == 'e')
        ADVANCE(1235);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_endmodule);
      END_STATE();
    case 1236:
      if (lookahead == '!')
        ADVANCE(1054);
      if (lookahead == '%')
        ADVANCE(1055);
      if (lookahead == '&')
        ADVANCE(1056);
      if (lookahead == '*')
        ADVANCE(1057);
      if (lookahead == '+')
        ADVANCE(1058);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1059);
      if (lookahead == '/')
        ADVANCE(1060);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == '<')
        ADVANCE(1061);
      if (lookahead == '=')
        ADVANCE(1064);
      if (lookahead == '>')
        ADVANCE(1065);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1069);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '~')
        ADVANCE(1070);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1236);
      END_STATE();
    case 1237:
      if (lookahead == '!')
        ADVANCE(1054);
      if (lookahead == '%')
        ADVANCE(1055);
      if (lookahead == '&')
        ADVANCE(1056);
      if (lookahead == '*')
        ADVANCE(1057);
      if (lookahead == '+')
        ADVANCE(1058);
      if (lookahead == '-')
        ADVANCE(1059);
      if (lookahead == '/')
        ADVANCE(1060);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == '<')
        ADVANCE(1061);
      if (lookahead == '=')
        ADVANCE(1064);
      if (lookahead == '>')
        ADVANCE(1065);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == ']')
        ADVANCE(321);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == '|')
        ADVANCE(1069);
      if (lookahead == '~')
        ADVANCE(1070);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1237);
      END_STATE();
    case 1238:
      if (lookahead == '!')
        ADVANCE(1209);
      if (lookahead == '$')
        ADVANCE(1239);
      if (lookahead == '&')
        ADVANCE(1210);
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(1014);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '+')
        ADVANCE(1240);
      if (lookahead == '-')
        ADVANCE(1241);
      if (lookahead == '.')
        ADVANCE(1018);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == 'b')
        ADVANCE(1023);
      if (lookahead == 'c')
        ADVANCE(1025);
      if (lookahead == 'e')
        ADVANCE(1026);
      if (lookahead == 'i')
        ADVANCE(1242);
      if (lookahead == 'l')
        ADVANCE(1029);
      if (lookahead == 'n')
        ADVANCE(1244);
      if (lookahead == 'r')
        ADVANCE(1245);
      if (lookahead == 's')
        ADVANCE(1247);
      if (lookahead == 't')
        ADVANCE(1248);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1212);
      if (lookahead == '~')
        ADVANCE(976);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1238);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(269);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(274);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'n')
        ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'e')
        ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1246:
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
    case 1247:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(813);
      if (lookahead == 't')
        ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1248:
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
    case 1249:
      if (lookahead == '!')
        ADVANCE(1054);
      if (lookahead == '%')
        ADVANCE(1055);
      if (lookahead == '&')
        ADVANCE(1056);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '*')
        ADVANCE(1057);
      if (lookahead == '+')
        ADVANCE(1058);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1059);
      if (lookahead == '/')
        ADVANCE(1060);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == '<')
        ADVANCE(1061);
      if (lookahead == '=')
        ADVANCE(1064);
      if (lookahead == '>')
        ADVANCE(1065);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == '|')
        ADVANCE(1069);
      if (lookahead == '~')
        ADVANCE(1070);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1249);
      END_STATE();
    case 1250:
      if (lookahead == '!')
        ADVANCE(1054);
      if (lookahead == '%')
        ADVANCE(1055);
      if (lookahead == '&')
        ADVANCE(1056);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '*')
        ADVANCE(1057);
      if (lookahead == '+')
        ADVANCE(1058);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1059);
      if (lookahead == '.')
        ADVANCE(1018);
      if (lookahead == '/')
        ADVANCE(1060);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == ';')
        ADVANCE(298);
      if (lookahead == '<')
        ADVANCE(1061);
      if (lookahead == '=')
        ADVANCE(1064);
      if (lookahead == '>')
        ADVANCE(1065);
      if (lookahead == '?')
        ADVANCE(317);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(321);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1069);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '~')
        ADVANCE(1070);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1250);
      END_STATE();
    case 1251:
      if (lookahead == '!')
        ADVANCE(1209);
      if (lookahead == '&')
        ADVANCE(1210);
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(1072);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '+')
        ADVANCE(1240);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1241);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '^')
        ADVANCE(1068);
      if (lookahead == 'n')
        ADVANCE(1244);
      if (lookahead == 't')
        ADVANCE(1252);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '|')
        ADVANCE(1212);
      if (lookahead == '~')
        ADVANCE(976);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1251);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'h')
        ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1253:
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == 's')
        ADVANCE(1254);
      if (lookahead == 'u')
        ADVANCE(1255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1253);
      END_STATE();
    case 1254:
      if (lookahead == 'i')
        ADVANCE(1148);
      END_STATE();
    case 1255:
      if (lookahead == 'n')
        ADVANCE(1185);
      END_STATE();
    case 1256:
      if (lookahead == '\'')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      END_STATE();
    case 1257:
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == ':')
        ADVANCE(1043);
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
        SKIP(1257);
      END_STATE();
    case 1258:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == '+')
        ADVANCE(1073);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1074);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == ':')
        ADVANCE(1043);
      if (lookahead == '{')
        ADVANCE(971);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1258);
      END_STATE();
    case 1259:
      if (lookahead == '(')
        ADVANCE(1014);
      if (lookahead == ')')
        ADVANCE(260);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '=')
        ADVANCE(1019);
      if (lookahead == '[')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1259);
      END_STATE();
    case 1260:
      if (lookahead == '(')
        ADVANCE(983);
      if (lookahead == '+')
        ADVANCE(1073);
      if (lookahead == ',')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(1074);
      if (lookahead == '/')
        ADVANCE(985);
      if (lookahead == '}')
        ADVANCE(975);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1260);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 982},
  [2] = {.lex_state = 982},
  [3] = {.lex_state = 1008},
  [4] = {.lex_state = 1012},
  [5] = {.lex_state = 1015},
  [6] = {.lex_state = 1012},
  [7] = {.lex_state = 1008},
  [8] = {.lex_state = 982},
  [9] = {.lex_state = 982},
  [10] = {.lex_state = 1012},
  [11] = {.lex_state = 1016},
  [12] = {.lex_state = 1020},
  [13] = {.lex_state = 1020},
  [14] = {.lex_state = 1020},
  [15] = {.lex_state = 1021},
  [16] = {.lex_state = 1042},
  [17] = {.lex_state = 1042},
  [18] = {.lex_state = 1053},
  [19] = {.lex_state = 1053},
  [20] = {.lex_state = 1012},
  [21] = {.lex_state = 1012},
  [22] = {.lex_state = 1012},
  [23] = {.lex_state = 1012},
  [24] = {.lex_state = 982},
  [25] = {.lex_state = 1008},
  [26] = {.lex_state = 982},
  [27] = {.lex_state = 1021},
  [28] = {.lex_state = 982},
  [29] = {.lex_state = 1053},
  [30] = {.lex_state = 1053},
  [31] = {.lex_state = 1012},
  [32] = {.lex_state = 1071},
  [33] = {.lex_state = 1020},
  [34] = {.lex_state = 1020},
  [35] = {.lex_state = 1021},
  [36] = {.lex_state = 1053},
  [37] = {.lex_state = 1205},
  [38] = {.lex_state = 1207},
  [39] = {.lex_state = 1208},
  [40] = {.lex_state = 1213},
  [41] = {.lex_state = 1213},
  [42] = {.lex_state = 1207},
  [43] = {.lex_state = 1205},
  [44] = {.lex_state = 1207},
  [45] = {.lex_state = 1207},
  [46] = {.lex_state = 1205},
  [47] = {.lex_state = 1012},
  [48] = {.lex_state = 1207},
  [49] = {.lex_state = 1012},
  [50] = {.lex_state = 1213},
  [51] = {.lex_state = 1213},
  [52] = {.lex_state = 1205},
  [53] = {.lex_state = 1012},
  [54] = {.lex_state = 1021},
  [55] = {.lex_state = 1207},
  [56] = {.lex_state = 1216},
  [57] = {.lex_state = 1207},
  [58] = {.lex_state = 1205},
  [59] = {.lex_state = 1207},
  [60] = {.lex_state = 1217},
  [61] = {.lex_state = 982},
  [62] = {.lex_state = 1218},
  [63] = {.lex_state = 1012},
  [64] = {.lex_state = 1012},
  [65] = {.lex_state = 1042},
  [66] = {.lex_state = 1012},
  [67] = {.lex_state = 1221},
  [68] = {.lex_state = 1042},
  [69] = {.lex_state = 1042},
  [70] = {.lex_state = 1042},
  [71] = {.lex_state = 1042},
  [72] = {.lex_state = 1012},
  [73] = {.lex_state = 1012},
  [74] = {.lex_state = 1012},
  [75] = {.lex_state = 1012},
  [76] = {.lex_state = 982},
  [77] = {.lex_state = 982},
  [78] = {.lex_state = 1020},
  [79] = {.lex_state = 1071},
  [80] = {.lex_state = 1020},
  [81] = {.lex_state = 1053},
  [82] = {.lex_state = 1207},
  [83] = {.lex_state = 1222},
  [84] = {.lex_state = 1208},
  [85] = {.lex_state = 1223},
  [86] = {.lex_state = 1223},
  [87] = {.lex_state = 1223},
  [88] = {.lex_state = 1053},
  [89] = {.lex_state = 1208},
  [90] = {.lex_state = 1223},
  [91] = {.lex_state = 1223},
  [92] = {.lex_state = 1222},
  [93] = {.lex_state = 1223},
  [94] = {.lex_state = 1224},
  [95] = {.lex_state = 1224},
  [96] = {.lex_state = 1207},
  [97] = {.lex_state = 1053},
  [98] = {.lex_state = 1012},
  [99] = {.lex_state = 1207},
  [100] = {.lex_state = 1012},
  [101] = {.lex_state = 1225},
  [102] = {.lex_state = 1053},
  [103] = {.lex_state = 1205},
  [104] = {.lex_state = 1207},
  [105] = {.lex_state = 1207},
  [106] = {.lex_state = 1207},
  [107] = {.lex_state = 1207},
  [108] = {.lex_state = 1012},
  [109] = {.lex_state = 1207},
  [110] = {.lex_state = 1012},
  [111] = {.lex_state = 1208},
  [112] = {.lex_state = 1223},
  [113] = {.lex_state = 1207},
  [114] = {.lex_state = 1207},
  [115] = {.lex_state = 1207},
  [116] = {.lex_state = 1205},
  [117] = {.lex_state = 1207},
  [118] = {.lex_state = 1012},
  [119] = {.lex_state = 1012},
  [120] = {.lex_state = 1207},
  [121] = {.lex_state = 1053},
  [122] = {.lex_state = 1053},
  [123] = {.lex_state = 1020},
  [124] = {.lex_state = 1020},
  [125] = {.lex_state = 1021},
  [126] = {.lex_state = 1012},
  [127] = {.lex_state = 1020},
  [128] = {.lex_state = 1021},
  [129] = {.lex_state = 1042},
  [130] = {.lex_state = 1042},
  [131] = {.lex_state = 1012},
  [132] = {.lex_state = 1012},
  [133] = {.lex_state = 1053},
  [134] = {.lex_state = 1012},
  [135] = {.lex_state = 1207},
  [136] = {.lex_state = 1207},
  [137] = {.lex_state = 1042},
  [138] = {.lex_state = 1221},
  [139] = {.lex_state = 1217},
  [140] = {.lex_state = 1042},
  [141] = {.lex_state = 1042},
  [142] = {.lex_state = 1012},
  [143] = {.lex_state = 1021},
  [144] = {.lex_state = 1012},
  [145] = {.lex_state = 1226},
  [146] = {.lex_state = 1236},
  [147] = {.lex_state = 1223},
  [148] = {.lex_state = 1208},
  [149] = {.lex_state = 1222},
  [150] = {.lex_state = 1222},
  [151] = {.lex_state = 1222},
  [152] = {.lex_state = 1207},
  [153] = {.lex_state = 1012},
  [154] = {.lex_state = 1223},
  [155] = {.lex_state = 1222},
  [156] = {.lex_state = 1207},
  [157] = {.lex_state = 1053},
  [158] = {.lex_state = 1207},
  [159] = {.lex_state = 1208},
  [160] = {.lex_state = 1208},
  [161] = {.lex_state = 1225},
  [162] = {.lex_state = 1207},
  [163] = {.lex_state = 1205},
  [164] = {.lex_state = 1053},
  [165] = {.lex_state = 1207},
  [166] = {.lex_state = 1207},
  [167] = {.lex_state = 1207},
  [168] = {.lex_state = 1207},
  [169] = {.lex_state = 1237},
  [170] = {.lex_state = 1223},
  [171] = {.lex_state = 1223},
  [172] = {.lex_state = 1207},
  [173] = {.lex_state = 1207},
  [174] = {.lex_state = 982},
  [175] = {.lex_state = 982},
  [176] = {.lex_state = 982},
  [177] = {.lex_state = 1042},
  [178] = {.lex_state = 1012},
  [179] = {.lex_state = 1042},
  [180] = {.lex_state = 1218},
  [181] = {.lex_state = 1053},
  [182] = {.lex_state = 1208},
  [183] = {.lex_state = 1207},
  [184] = {.lex_state = 1225},
  [185] = {.lex_state = 1012},
  [186] = {.lex_state = 1221},
  [187] = {.lex_state = 1020},
  [188] = {.lex_state = 1021},
  [189] = {.lex_state = 1042},
  [190] = {.lex_state = 1042},
  [191] = {.lex_state = 1042},
  [192] = {.lex_state = 1238},
  [193] = {.lex_state = 1053},
  [194] = {.lex_state = 1042},
  [195] = {.lex_state = 1012},
  [196] = {.lex_state = 1053},
  [197] = {.lex_state = 1207},
  [198] = {.lex_state = 1207},
  [199] = {.lex_state = 1012},
  [200] = {.lex_state = 1012},
  [201] = {.lex_state = 1012},
  [202] = {.lex_state = 1217},
  [203] = {.lex_state = 1208},
  [204] = {.lex_state = 1223},
  [205] = {.lex_state = 1208},
  [206] = {.lex_state = 1222},
  [207] = {.lex_state = 1236},
  [208] = {.lex_state = 1222},
  [209] = {.lex_state = 1236},
  [210] = {.lex_state = 1237},
  [211] = {.lex_state = 1053},
  [212] = {.lex_state = 1222},
  [213] = {.lex_state = 1053},
  [214] = {.lex_state = 1222},
  [215] = {.lex_state = 1020},
  [216] = {.lex_state = 1223},
  [217] = {.lex_state = 1222},
  [218] = {.lex_state = 1249},
  [219] = {.lex_state = 1208},
  [220] = {.lex_state = 1208},
  [221] = {.lex_state = 1225},
  [222] = {.lex_state = 1207},
  [223] = {.lex_state = 1207},
  [224] = {.lex_state = 1250},
  [225] = {.lex_state = 1222},
  [226] = {.lex_state = 1222},
  [227] = {.lex_state = 1223},
  [228] = {.lex_state = 1053},
  [229] = {.lex_state = 1012},
  [230] = {.lex_state = 1053},
  [231] = {.lex_state = 1053},
  [232] = {.lex_state = 1053},
  [233] = {.lex_state = 1053},
  [234] = {.lex_state = 1012},
  [235] = {.lex_state = 1221},
  [236] = {.lex_state = 1053},
  [237] = {.lex_state = 1012},
  [238] = {.lex_state = 1042},
  [239] = {.lex_state = 1251},
  [240] = {.lex_state = 1012},
  [241] = {.lex_state = 1012},
  [242] = {.lex_state = 1253},
  [243] = {.lex_state = 1253},
  [244] = {.lex_state = 1207},
  [245] = {.lex_state = 1251},
  [246] = {.lex_state = 1256},
  [247] = {.lex_state = 1222},
  [248] = {.lex_state = 1251},
  [249] = {.lex_state = 1257},
  [250] = {.lex_state = 1253},
  [251] = {.lex_state = 1253},
  [252] = {.lex_state = 1021},
  [253] = {.lex_state = 1207},
  [254] = {.lex_state = 1207},
  [255] = {.lex_state = 1222},
  [256] = {.lex_state = 1258},
  [257] = {.lex_state = 1257},
  [258] = {.lex_state = 1257},
  [259] = {.lex_state = 1207},
  [260] = {.lex_state = 1249},
  [261] = {.lex_state = 1251},
  [262] = {.lex_state = 1251},
  [263] = {.lex_state = 1222},
  [264] = {.lex_state = 1222},
  [265] = {.lex_state = 1042},
  [266] = {.lex_state = 1053},
  [267] = {.lex_state = 1053},
  [268] = {.lex_state = 1053},
  [269] = {.lex_state = 1207},
  [270] = {.lex_state = 1053},
  [271] = {.lex_state = 1012},
  [272] = {.lex_state = 1012},
  [273] = {.lex_state = 1021},
  [274] = {.lex_state = 1207},
  [275] = {.lex_state = 1207},
  [276] = {.lex_state = 1251},
  [277] = {.lex_state = 1207},
  [278] = {.lex_state = 982},
  [279] = {.lex_state = 1012},
  [280] = {.lex_state = 1236},
  [281] = {.lex_state = 1236},
  [282] = {.lex_state = 1236},
  [283] = {.lex_state = 1222},
  [284] = {.lex_state = 1223},
  [285] = {.lex_state = 1236},
  [286] = {.lex_state = 1222},
  [287] = {.lex_state = 1223},
  [288] = {.lex_state = 1236},
  [289] = {.lex_state = 1208},
  [290] = {.lex_state = 1053},
  [291] = {.lex_state = 1053},
  [292] = {.lex_state = 1222},
  [293] = {.lex_state = 1053},
  [294] = {.lex_state = 1222},
  [295] = {.lex_state = 1020},
  [296] = {.lex_state = 1222},
  [297] = {.lex_state = 1222},
  [298] = {.lex_state = 1259},
  [299] = {.lex_state = 1249},
  [300] = {.lex_state = 1237},
  [301] = {.lex_state = 1222},
  [302] = {.lex_state = 1237},
  [303] = {.lex_state = 1222},
  [304] = {.lex_state = 1225},
  [305] = {.lex_state = 1208},
  [306] = {.lex_state = 1222},
  [307] = {.lex_state = 1222},
  [308] = {.lex_state = 1226},
  [309] = {.lex_state = 1042},
  [310] = {.lex_state = 1042},
  [311] = {.lex_state = 1042},
  [312] = {.lex_state = 1012},
  [313] = {.lex_state = 1021},
  [314] = {.lex_state = 1012},
  [315] = {.lex_state = 1222},
  [316] = {.lex_state = 1236},
  [317] = {.lex_state = 1236},
  [318] = {.lex_state = 1260},
  [319] = {.lex_state = 1207},
  [320] = {.lex_state = 1207},
  [321] = {.lex_state = 1012},
  [322] = {.lex_state = 1238},
  [323] = {.lex_state = 1207},
  [324] = {.lex_state = 1207},
  [325] = {.lex_state = 1207},
  [326] = {.lex_state = 1258},
  [327] = {.lex_state = 1257},
  [328] = {.lex_state = 1251},
  [329] = {.lex_state = 1257},
  [330] = {.lex_state = 1251},
  [331] = {.lex_state = 1251},
  [332] = {.lex_state = 1257},
  [333] = {.lex_state = 1251},
  [334] = {.lex_state = 1222},
  [335] = {.lex_state = 1042},
  [336] = {.lex_state = 1207},
  [337] = {.lex_state = 1020},
  [338] = {.lex_state = 1053},
  [339] = {.lex_state = 982},
  [340] = {.lex_state = 1207},
  [341] = {.lex_state = 1207},
  [342] = {.lex_state = 1207},
  [343] = {.lex_state = 1207},
  [344] = {.lex_state = 1012},
  [345] = {.lex_state = 1207},
  [346] = {.lex_state = 1251},
  [347] = {.lex_state = 982},
  [348] = {.lex_state = 1222},
  [349] = {.lex_state = 1222},
  [350] = {.lex_state = 1208},
  [351] = {.lex_state = 1222},
  [352] = {.lex_state = 1222},
  [353] = {.lex_state = 1236},
  [354] = {.lex_state = 1236},
  [355] = {.lex_state = 1236},
  [356] = {.lex_state = 1053},
  [357] = {.lex_state = 1053},
  [358] = {.lex_state = 1053},
  [359] = {.lex_state = 1222},
  [360] = {.lex_state = 1249},
  [361] = {.lex_state = 1222},
  [362] = {.lex_state = 1249},
  [363] = {.lex_state = 1222},
  [364] = {.lex_state = 1208},
  [365] = {.lex_state = 1222},
  [366] = {.lex_state = 1222},
  [367] = {.lex_state = 1237},
  [368] = {.lex_state = 1237},
  [369] = {.lex_state = 1237},
  [370] = {.lex_state = 1053},
  [371] = {.lex_state = 1053},
  [372] = {.lex_state = 1222},
  [373] = {.lex_state = 1053},
  [374] = {.lex_state = 1222},
  [375] = {.lex_state = 1042},
  [376] = {.lex_state = 1042},
  [377] = {.lex_state = 1257},
  [378] = {.lex_state = 1238},
  [379] = {.lex_state = 1236},
  [380] = {.lex_state = 1222},
  [381] = {.lex_state = 1258},
  [382] = {.lex_state = 1236},
  [383] = {.lex_state = 1251},
  [384] = {.lex_state = 1257},
  [385] = {.lex_state = 1251},
  [386] = {.lex_state = 1236},
  [387] = {.lex_state = 1236},
  [388] = {.lex_state = 1258},
  [389] = {.lex_state = 1236},
  [390] = {.lex_state = 1207},
  [391] = {.lex_state = 1207},
  [392] = {.lex_state = 1207},
  [393] = {.lex_state = 1207},
  [394] = {.lex_state = 1207},
  [395] = {.lex_state = 1207},
  [396] = {.lex_state = 1042},
  [397] = {.lex_state = 1257},
  [398] = {.lex_state = 1251},
  [399] = {.lex_state = 1257},
  [400] = {.lex_state = 1251},
  [401] = {.lex_state = 1222},
  [402] = {.lex_state = 1251},
  [403] = {.lex_state = 1251},
  [404] = {.lex_state = 1020},
  [405] = {.lex_state = 1207},
  [406] = {.lex_state = 1251},
  [407] = {.lex_state = 1207},
  [408] = {.lex_state = 1207},
  [409] = {.lex_state = 1207},
  [410] = {.lex_state = 1207},
  [411] = {.lex_state = 1207},
  [412] = {.lex_state = 1236},
  [413] = {.lex_state = 1222},
  [414] = {.lex_state = 1236},
  [415] = {.lex_state = 1222},
  [416] = {.lex_state = 1236},
  [417] = {.lex_state = 1236},
  [418] = {.lex_state = 1222},
  [419] = {.lex_state = 1236},
  [420] = {.lex_state = 1222},
  [421] = {.lex_state = 1236},
  [422] = {.lex_state = 1236},
  [423] = {.lex_state = 1208},
  [424] = {.lex_state = 1222},
  [425] = {.lex_state = 1222},
  [426] = {.lex_state = 1249},
  [427] = {.lex_state = 1249},
  [428] = {.lex_state = 1249},
  [429] = {.lex_state = 1237},
  [430] = {.lex_state = 1237},
  [431] = {.lex_state = 1222},
  [432] = {.lex_state = 1237},
  [433] = {.lex_state = 1222},
  [434] = {.lex_state = 1237},
  [435] = {.lex_state = 1237},
  [436] = {.lex_state = 1208},
  [437] = {.lex_state = 1208},
  [438] = {.lex_state = 1053},
  [439] = {.lex_state = 1053},
  [440] = {.lex_state = 1053},
  [441] = {.lex_state = 1012},
  [442] = {.lex_state = 1207},
  [443] = {.lex_state = 1205},
  [444] = {.lex_state = 1021},
  [445] = {.lex_state = 1236},
  [446] = {.lex_state = 1258},
  [447] = {.lex_state = 1236},
  [448] = {.lex_state = 1236},
  [449] = {.lex_state = 1236},
  [450] = {.lex_state = 1257},
  [451] = {.lex_state = 1257},
  [452] = {.lex_state = 1236},
  [453] = {.lex_state = 1258},
  [454] = {.lex_state = 1251},
  [455] = {.lex_state = 1207},
  [456] = {.lex_state = 1021},
  [457] = {.lex_state = 1251},
  [458] = {.lex_state = 1251},
  [459] = {.lex_state = 1207},
  [460] = {.lex_state = 1251},
  [461] = {.lex_state = 1208},
  [462] = {.lex_state = 1222},
  [463] = {.lex_state = 1222},
  [464] = {.lex_state = 1236},
  [465] = {.lex_state = 1236},
  [466] = {.lex_state = 1236},
  [467] = {.lex_state = 1236},
  [468] = {.lex_state = 1236},
  [469] = {.lex_state = 1236},
  [470] = {.lex_state = 1249},
  [471] = {.lex_state = 1249},
  [472] = {.lex_state = 1222},
  [473] = {.lex_state = 1249},
  [474] = {.lex_state = 1222},
  [475] = {.lex_state = 1249},
  [476] = {.lex_state = 1249},
  [477] = {.lex_state = 1237},
  [478] = {.lex_state = 1237},
  [479] = {.lex_state = 1237},
  [480] = {.lex_state = 1053},
  [481] = {.lex_state = 1053},
  [482] = {.lex_state = 1053},
  [483] = {.lex_state = 1053},
  [484] = {.lex_state = 1042},
  [485] = {.lex_state = 1021},
  [486] = {.lex_state = 1021},
  [487] = {.lex_state = 1207},
  [488] = {.lex_state = 1207},
  [489] = {.lex_state = 1207},
  [490] = {.lex_state = 1021},
  [491] = {.lex_state = 1236},
  [492] = {.lex_state = 1236},
  [493] = {.lex_state = 1222},
  [494] = {.lex_state = 1236},
  [495] = {.lex_state = 1222},
  [496] = {.lex_state = 1236},
  [497] = {.lex_state = 1236},
  [498] = {.lex_state = 1236},
  [499] = {.lex_state = 1249},
  [500] = {.lex_state = 1249},
  [501] = {.lex_state = 1249},
  [502] = {.lex_state = 1237},
  [503] = {.lex_state = 1222},
  [504] = {.lex_state = 1222},
  [505] = {.lex_state = 1021},
  [506] = {.lex_state = 1021},
  [507] = {.lex_state = 1207},
  [508] = {.lex_state = 1236},
  [509] = {.lex_state = 1236},
  [510] = {.lex_state = 1236},
  [511] = {.lex_state = 1249},
  [512] = {.lex_state = 1053},
  [513] = {.lex_state = 1222},
  [514] = {.lex_state = 1053},
  [515] = {.lex_state = 1222},
  [516] = {.lex_state = 1236},
  [517] = {.lex_state = 1053},
  [518] = {.lex_state = 1053},
  [519] = {.lex_state = 1053},
  [520] = {.lex_state = 1053},
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
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [sym_module_header] = STATE(10),
    [sym_module_keyword] = STATE(7),
    [sym_attribute_instance] = STATE(9),
    [aux_sym_module_header_repeat1] = STATE(9),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_macromodule] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [3] = {
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_automatic] = ACTIONS(15),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(15),
  },
  [4] = {
    [sym_attr_spec] = STATE(12),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(13),
  },
  [6] = {
    [sym_module_nonansi_header] = STATE(16),
    [sym_module_ansi_header] = STATE(17),
    [sym_list_of_ports] = STATE(18),
    [sym_list_of_port_declarations] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_comment] = ACTIONS(13),
  },
  [7] = {
    [sym_lifetime] = STATE(21),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(23),
    [anon_sym_static] = ACTIONS(23),
    [anon_sym_automatic] = ACTIONS(23),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [8] = {
    [sym__description] = STATE(24),
    [sym_module_header] = STATE(6),
    [sym_module_declaration] = STATE(24),
    [sym_module_keyword] = STATE(7),
    [sym_attribute_instance] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym_module_header_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_macromodule] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [9] = {
    [sym_module_keyword] = STATE(25),
    [sym_attribute_instance] = STATE(26),
    [aux_sym_module_header_repeat1] = STATE(26),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_macromodule] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [10] = {
    [sym_module_nonansi_header] = STATE(28),
    [sym_module_ansi_header] = STATE(28),
    [sym_list_of_ports] = STATE(29),
    [sym_list_of_port_declarations] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
  },
  [11] = {
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(31),
    [anon_sym_STAR_RPAREN] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(31),
  },
  [12] = {
    [aux_sym_attribute_instance_repeat1] = STATE(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_STAR_RPAREN] = ACTIONS(35),
    [sym_comment] = ACTIONS(13),
  },
  [13] = {
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_STAR_RPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(13),
  },
  [14] = {
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_STAR_RPAREN] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
  },
  [15] = {
    [sym_port] = STATE(44),
    [sym__port_expression] = STATE(45),
    [sym_port_reference] = STATE(45),
    [sym_port_direction] = STATE(46),
    [sym_net_port_header] = STATE(47),
    [sym_ansi_port_declaration] = STATE(48),
    [sym_data_type] = STATE(49),
    [sym__data_type_or_implicit] = STATE(49),
    [sym_implicit_data_type] = STATE(49),
    [sym_integer_atom_type] = STATE(50),
    [sym_integer_vector_type] = STATE(51),
    [sym_non_integer_type] = STATE(38),
    [sym_net_type] = STATE(52),
    [sym_net_port_type] = STATE(53),
    [sym__signing] = STATE(54),
    [sym_packed_dimension] = STATE(59),
    [sym_unsized_dimension] = STATE(55),
    [sym_attribute_instance] = STATE(58),
    [sym_identifier] = STATE(56),
    [sym_port_identifier] = STATE(57),
    [aux_sym_module_header_repeat1] = STATE(58),
    [aux_sym_data_type_repeat1] = STATE(59),
    [anon_sym_DOT_STAR] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_input] = ACTIONS(47),
    [anon_sym_output] = ACTIONS(47),
    [anon_sym_inout] = ACTIONS(47),
    [anon_sym_ref] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(49),
    [anon_sym_chandle] = ACTIONS(49),
    [anon_sym_event] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_byte] = ACTIONS(53),
    [anon_sym_shortint] = ACTIONS(53),
    [anon_sym_int] = ACTIONS(53),
    [anon_sym_longint] = ACTIONS(53),
    [anon_sym_integer] = ACTIONS(53),
    [anon_sym_time] = ACTIONS(53),
    [anon_sym_bit] = ACTIONS(55),
    [anon_sym_logic] = ACTIONS(55),
    [anon_sym_reg] = ACTIONS(55),
    [anon_sym_shortreal] = ACTIONS(57),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(57),
    [anon_sym_supply0] = ACTIONS(59),
    [anon_sym_supply1] = ACTIONS(59),
    [anon_sym_tri] = ACTIONS(59),
    [anon_sym_triand] = ACTIONS(59),
    [anon_sym_trior] = ACTIONS(59),
    [anon_sym_trireg] = ACTIONS(59),
    [anon_sym_tri0] = ACTIONS(59),
    [anon_sym_tri1] = ACTIONS(59),
    [anon_sym_uwire] = ACTIONS(59),
    [anon_sym_wire] = ACTIONS(59),
    [anon_sym_wand] = ACTIONS(59),
    [anon_sym_wor] = ACTIONS(59),
    [anon_sym_signed] = ACTIONS(61),
    [anon_sym_unsigned] = ACTIONS(61),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [16] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(68),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym__module_item] = STATE(68),
    [sym_module_or_generate_item] = STATE(68),
    [sym__non_port_module_item] = STATE(68),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat1] = STATE(68),
    [anon_sym_endmodule] = ACTIONS(63),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [17] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(69),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym_module_or_generate_item] = STATE(69),
    [sym__non_port_module_item] = STATE(69),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat2] = STATE(69),
    [anon_sym_endmodule] = ACTIONS(63),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [18] = {
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
  },
  [20] = {
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(77),
  },
  [21] = {
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(72),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [22] = {
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(79),
  },
  [23] = {
    [sym_parameter_port_list] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
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
    [sym_comment] = ACTIONS(13),
  },
  [25] = {
    [sym_lifetime] = STATE(75),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(72),
    [anon_sym_static] = ACTIONS(23),
    [anon_sym_automatic] = ACTIONS(23),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [26] = {
    [sym_attribute_instance] = STATE(26),
    [aux_sym_module_header_repeat1] = STATE(26),
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_macromodule] = ACTIONS(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(13),
  },
  [27] = {
    [sym_port] = STATE(44),
    [sym__port_expression] = STATE(45),
    [sym_port_reference] = STATE(45),
    [sym_port_direction] = STATE(46),
    [sym_net_port_header] = STATE(47),
    [sym_ansi_port_declaration] = STATE(48),
    [sym_data_type] = STATE(49),
    [sym__data_type_or_implicit] = STATE(49),
    [sym_implicit_data_type] = STATE(49),
    [sym_integer_atom_type] = STATE(50),
    [sym_integer_vector_type] = STATE(51),
    [sym_non_integer_type] = STATE(38),
    [sym_net_type] = STATE(52),
    [sym_net_port_type] = STATE(53),
    [sym__signing] = STATE(54),
    [sym_packed_dimension] = STATE(59),
    [sym_unsized_dimension] = STATE(55),
    [sym_attribute_instance] = STATE(58),
    [sym_identifier] = STATE(56),
    [sym_port_identifier] = STATE(57),
    [aux_sym_module_header_repeat1] = STATE(58),
    [aux_sym_data_type_repeat1] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_input] = ACTIONS(47),
    [anon_sym_output] = ACTIONS(47),
    [anon_sym_inout] = ACTIONS(47),
    [anon_sym_ref] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(49),
    [anon_sym_chandle] = ACTIONS(49),
    [anon_sym_event] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_byte] = ACTIONS(53),
    [anon_sym_shortint] = ACTIONS(53),
    [anon_sym_int] = ACTIONS(53),
    [anon_sym_longint] = ACTIONS(53),
    [anon_sym_integer] = ACTIONS(53),
    [anon_sym_time] = ACTIONS(53),
    [anon_sym_bit] = ACTIONS(55),
    [anon_sym_logic] = ACTIONS(55),
    [anon_sym_reg] = ACTIONS(55),
    [anon_sym_shortreal] = ACTIONS(57),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(57),
    [anon_sym_supply0] = ACTIONS(59),
    [anon_sym_supply1] = ACTIONS(59),
    [anon_sym_tri] = ACTIONS(59),
    [anon_sym_triand] = ACTIONS(59),
    [anon_sym_trior] = ACTIONS(59),
    [anon_sym_trireg] = ACTIONS(59),
    [anon_sym_tri0] = ACTIONS(59),
    [anon_sym_tri1] = ACTIONS(59),
    [anon_sym_uwire] = ACTIONS(59),
    [anon_sym_wire] = ACTIONS(59),
    [anon_sym_wand] = ACTIONS(59),
    [anon_sym_wor] = ACTIONS(59),
    [anon_sym_signed] = ACTIONS(61),
    [anon_sym_unsigned] = ACTIONS(61),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_extern] = ACTIONS(101),
    [anon_sym_module] = ACTIONS(101),
    [anon_sym_macromodule] = ACTIONS(101),
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [sym_comment] = ACTIONS(13),
  },
  [29] = {
    [anon_sym_SEMI] = ACTIONS(103),
    [sym_comment] = ACTIONS(13),
  },
  [30] = {
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_comment] = ACTIONS(13),
  },
  [31] = {
    [sym_attr_spec] = STATE(78),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_DOT_STAR] = ACTIONS(109),
    [anon_sym_module] = ACTIONS(109),
    [anon_sym_macromodule] = ACTIONS(109),
    [anon_sym_input] = ACTIONS(109),
    [anon_sym_output] = ACTIONS(109),
    [anon_sym_inout] = ACTIONS(109),
    [anon_sym_ref] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_string] = ACTIONS(109),
    [anon_sym_chandle] = ACTIONS(109),
    [anon_sym_event] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_byte] = ACTIONS(109),
    [anon_sym_shortint] = ACTIONS(109),
    [anon_sym_int] = ACTIONS(107),
    [anon_sym_longint] = ACTIONS(109),
    [anon_sym_integer] = ACTIONS(109),
    [anon_sym_time] = ACTIONS(109),
    [anon_sym_bit] = ACTIONS(109),
    [anon_sym_logic] = ACTIONS(109),
    [anon_sym_reg] = ACTIONS(109),
    [anon_sym_shortreal] = ACTIONS(109),
    [anon_sym_real] = ACTIONS(107),
    [anon_sym_realtime] = ACTIONS(109),
    [anon_sym_supply0] = ACTIONS(109),
    [anon_sym_supply1] = ACTIONS(109),
    [anon_sym_tri] = ACTIONS(107),
    [anon_sym_triand] = ACTIONS(109),
    [anon_sym_trior] = ACTIONS(109),
    [anon_sym_trireg] = ACTIONS(109),
    [anon_sym_tri0] = ACTIONS(109),
    [anon_sym_tri1] = ACTIONS(109),
    [anon_sym_uwire] = ACTIONS(109),
    [anon_sym_wire] = ACTIONS(109),
    [anon_sym_wand] = ACTIONS(109),
    [anon_sym_wor] = ACTIONS(109),
    [anon_sym_signed] = ACTIONS(109),
    [anon_sym_unsigned] = ACTIONS(109),
    [anon_sym_PLUS_PLUS] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_this] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_DASH_DASH] = ACTIONS(109),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(107),
    [sym_real_number] = ACTIONS(107),
    [anon_sym_LPAREN_STAR] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
  },
  [33] = {
    [aux_sym_attribute_instance_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_STAR_RPAREN] = ACTIONS(111),
    [sym_comment] = ACTIONS(13),
  },
  [34] = {
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_STAR_RPAREN] = ACTIONS(113),
    [sym_comment] = ACTIONS(13),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
  },
  [37] = {
    [anon_sym_string] = ACTIONS(119),
    [anon_sym_chandle] = ACTIONS(119),
    [anon_sym_event] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_byte] = ACTIONS(119),
    [anon_sym_shortint] = ACTIONS(119),
    [anon_sym_int] = ACTIONS(121),
    [anon_sym_longint] = ACTIONS(119),
    [anon_sym_integer] = ACTIONS(119),
    [anon_sym_time] = ACTIONS(119),
    [anon_sym_bit] = ACTIONS(119),
    [anon_sym_logic] = ACTIONS(119),
    [anon_sym_reg] = ACTIONS(119),
    [anon_sym_shortreal] = ACTIONS(119),
    [anon_sym_real] = ACTIONS(121),
    [anon_sym_realtime] = ACTIONS(119),
    [anon_sym_supply0] = ACTIONS(119),
    [anon_sym_supply1] = ACTIONS(119),
    [anon_sym_tri] = ACTIONS(121),
    [anon_sym_triand] = ACTIONS(119),
    [anon_sym_trior] = ACTIONS(119),
    [anon_sym_trireg] = ACTIONS(119),
    [anon_sym_tri0] = ACTIONS(119),
    [anon_sym_tri1] = ACTIONS(119),
    [anon_sym_uwire] = ACTIONS(119),
    [anon_sym_wire] = ACTIONS(119),
    [anon_sym_wand] = ACTIONS(119),
    [anon_sym_wor] = ACTIONS(119),
    [anon_sym_signed] = ACTIONS(119),
    [anon_sym_unsigned] = ACTIONS(119),
    [sym_comment] = ACTIONS(13),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(123),
  },
  [39] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(88),
    [sym_constant_range] = STATE(89),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [40] = {
    [anon_sym_signed] = ACTIONS(137),
    [anon_sym_unsigned] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(137),
  },
  [41] = {
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_signed] = ACTIONS(141),
    [anon_sym_unsigned] = ACTIONS(141),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(141),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(143),
  },
  [43] = {
    [anon_sym_string] = ACTIONS(145),
    [anon_sym_chandle] = ACTIONS(145),
    [anon_sym_event] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_byte] = ACTIONS(145),
    [anon_sym_shortint] = ACTIONS(145),
    [anon_sym_int] = ACTIONS(147),
    [anon_sym_longint] = ACTIONS(145),
    [anon_sym_integer] = ACTIONS(145),
    [anon_sym_time] = ACTIONS(145),
    [anon_sym_bit] = ACTIONS(145),
    [anon_sym_logic] = ACTIONS(145),
    [anon_sym_reg] = ACTIONS(145),
    [anon_sym_shortreal] = ACTIONS(145),
    [anon_sym_real] = ACTIONS(147),
    [anon_sym_realtime] = ACTIONS(145),
    [anon_sym_signed] = ACTIONS(145),
    [anon_sym_unsigned] = ACTIONS(145),
    [sym_comment] = ACTIONS(13),
  },
  [44] = {
    [aux_sym_list_of_ports_repeat1] = STATE(99),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(151),
    [sym_comment] = ACTIONS(13),
  },
  [45] = {
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [sym_comment] = ACTIONS(13),
  },
  [46] = {
    [sym_data_type] = STATE(49),
    [sym__data_type_or_implicit] = STATE(49),
    [sym_implicit_data_type] = STATE(49),
    [sym_integer_atom_type] = STATE(50),
    [sym_integer_vector_type] = STATE(51),
    [sym_non_integer_type] = STATE(38),
    [sym_net_type] = STATE(52),
    [sym_net_port_type] = STATE(100),
    [sym__signing] = STATE(54),
    [sym_packed_dimension] = STATE(59),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(59),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_chandle] = ACTIONS(155),
    [anon_sym_event] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_byte] = ACTIONS(157),
    [anon_sym_shortint] = ACTIONS(157),
    [anon_sym_int] = ACTIONS(53),
    [anon_sym_longint] = ACTIONS(157),
    [anon_sym_integer] = ACTIONS(157),
    [anon_sym_time] = ACTIONS(157),
    [anon_sym_bit] = ACTIONS(159),
    [anon_sym_logic] = ACTIONS(159),
    [anon_sym_reg] = ACTIONS(159),
    [anon_sym_shortreal] = ACTIONS(161),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(161),
    [anon_sym_supply0] = ACTIONS(163),
    [anon_sym_supply1] = ACTIONS(163),
    [anon_sym_tri] = ACTIONS(59),
    [anon_sym_triand] = ACTIONS(163),
    [anon_sym_trior] = ACTIONS(163),
    [anon_sym_trireg] = ACTIONS(163),
    [anon_sym_tri0] = ACTIONS(163),
    [anon_sym_tri1] = ACTIONS(163),
    [anon_sym_uwire] = ACTIONS(163),
    [anon_sym_wire] = ACTIONS(163),
    [anon_sym_wand] = ACTIONS(163),
    [anon_sym_wor] = ACTIONS(163),
    [anon_sym_signed] = ACTIONS(165),
    [anon_sym_unsigned] = ACTIONS(165),
    [sym_comment] = ACTIONS(13),
  },
  [47] = {
    [sym_identifier] = STATE(56),
    [sym_port_identifier] = STATE(101),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [48] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(104),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(13),
  },
  [49] = {
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(171),
  },
  [50] = {
    [sym__signing] = STATE(105),
    [anon_sym_signed] = ACTIONS(173),
    [anon_sym_unsigned] = ACTIONS(173),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(175),
  },
  [51] = {
    [sym__signing] = STATE(106),
    [sym_packed_dimension] = STATE(107),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(107),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_signed] = ACTIONS(177),
    [anon_sym_unsigned] = ACTIONS(177),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(175),
  },
  [52] = {
    [sym_data_type] = STATE(108),
    [sym__data_type_or_implicit] = STATE(108),
    [sym_implicit_data_type] = STATE(108),
    [sym_integer_atom_type] = STATE(50),
    [sym_integer_vector_type] = STATE(51),
    [sym_non_integer_type] = STATE(38),
    [sym__signing] = STATE(54),
    [sym_packed_dimension] = STATE(59),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(59),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_chandle] = ACTIONS(155),
    [anon_sym_event] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_byte] = ACTIONS(157),
    [anon_sym_shortint] = ACTIONS(157),
    [anon_sym_int] = ACTIONS(53),
    [anon_sym_longint] = ACTIONS(157),
    [anon_sym_integer] = ACTIONS(157),
    [anon_sym_time] = ACTIONS(157),
    [anon_sym_bit] = ACTIONS(159),
    [anon_sym_logic] = ACTIONS(159),
    [anon_sym_reg] = ACTIONS(159),
    [anon_sym_shortreal] = ACTIONS(161),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(161),
    [anon_sym_signed] = ACTIONS(165),
    [anon_sym_unsigned] = ACTIONS(165),
    [sym_comment] = ACTIONS(13),
  },
  [53] = {
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(179),
  },
  [54] = {
    [sym_packed_dimension] = STATE(109),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(181),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [sym_comment] = ACTIONS(13),
  },
  [57] = {
    [sym_constant_bit_select] = STATE(112),
    [sym_constant_select] = STATE(113),
    [aux_sym_constant_select_repeat1] = STATE(114),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(13),
  },
  [58] = {
    [sym_port_direction] = STATE(46),
    [sym_net_port_header] = STATE(47),
    [sym_ansi_port_declaration] = STATE(115),
    [sym_data_type] = STATE(49),
    [sym__data_type_or_implicit] = STATE(49),
    [sym_implicit_data_type] = STATE(49),
    [sym_integer_atom_type] = STATE(50),
    [sym_integer_vector_type] = STATE(51),
    [sym_non_integer_type] = STATE(38),
    [sym_net_type] = STATE(52),
    [sym_net_port_type] = STATE(53),
    [sym__signing] = STATE(54),
    [sym_packed_dimension] = STATE(59),
    [sym_unsized_dimension] = STATE(55),
    [sym_attribute_instance] = STATE(116),
    [aux_sym_module_header_repeat1] = STATE(116),
    [aux_sym_data_type_repeat1] = STATE(59),
    [anon_sym_input] = ACTIONS(191),
    [anon_sym_output] = ACTIONS(191),
    [anon_sym_inout] = ACTIONS(191),
    [anon_sym_ref] = ACTIONS(191),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_chandle] = ACTIONS(155),
    [anon_sym_event] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_byte] = ACTIONS(157),
    [anon_sym_shortint] = ACTIONS(157),
    [anon_sym_int] = ACTIONS(53),
    [anon_sym_longint] = ACTIONS(157),
    [anon_sym_integer] = ACTIONS(157),
    [anon_sym_time] = ACTIONS(157),
    [anon_sym_bit] = ACTIONS(159),
    [anon_sym_logic] = ACTIONS(159),
    [anon_sym_reg] = ACTIONS(159),
    [anon_sym_shortreal] = ACTIONS(161),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(161),
    [anon_sym_supply0] = ACTIONS(163),
    [anon_sym_supply1] = ACTIONS(163),
    [anon_sym_tri] = ACTIONS(59),
    [anon_sym_triand] = ACTIONS(163),
    [anon_sym_trior] = ACTIONS(163),
    [anon_sym_trireg] = ACTIONS(163),
    [anon_sym_tri0] = ACTIONS(163),
    [anon_sym_tri1] = ACTIONS(163),
    [anon_sym_uwire] = ACTIONS(163),
    [anon_sym_wire] = ACTIONS(163),
    [anon_sym_wand] = ACTIONS(163),
    [anon_sym_wor] = ACTIONS(163),
    [anon_sym_signed] = ACTIONS(165),
    [anon_sym_unsigned] = ACTIONS(165),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [59] = {
    [sym_packed_dimension] = STATE(117),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(193),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_extern] = ACTIONS(101),
    [anon_sym_module] = ACTIONS(101),
    [anon_sym_macromodule] = ACTIONS(101),
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [sym_comment] = ACTIONS(13),
  },
  [61] = {
    [sym_module_header] = STATE(119),
    [sym_module_keyword] = STATE(7),
    [sym_attribute_instance] = STATE(9),
    [aux_sym_module_header_repeat1] = STATE(9),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_macromodule] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [62] = {
    [sym_list_of_defparam_assignments] = STATE(121),
    [sym_defparam_assignment] = STATE(122),
    [sym_hierarchical_identifier] = STATE(123),
    [sym_hierarchical_parameter_identifier] = STATE(124),
    [sym_identifier] = STATE(125),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(126),
    [sym_comment] = ACTIONS(13),
    [anon_sym_DOLLARroot] = ACTIONS(197),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [63] = {
    [sym_attr_spec] = STATE(127),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [64] = {
    [sym_module_nonansi_header] = STATE(129),
    [sym_module_ansi_header] = STATE(130),
    [sym_list_of_ports] = STATE(18),
    [sym_list_of_port_declarations] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(199),
    [sym_comment] = ACTIONS(13),
  },
  [65] = {
    [anon_sym_endmodule] = ACTIONS(201),
    [anon_sym_extern] = ACTIONS(201),
    [anon_sym_module] = ACTIONS(201),
    [anon_sym_macromodule] = ACTIONS(201),
    [anon_sym_defparam] = ACTIONS(201),
    [anon_sym_LPAREN_STAR] = ACTIONS(203),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(201),
  },
  [66] = {
    [sym_parameter_value_assignment] = STATE(132),
    [sym_hierarchical_instance] = STATE(133),
    [sym_name_of_instance] = STATE(134),
    [sym_identifier] = STATE(135),
    [sym_instance_identifier] = STATE(136),
    [anon_sym_POUND] = ACTIONS(205),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [67] = {
    [sym_module_keyword] = STATE(25),
    [sym__module_common_item] = STATE(137),
    [sym_parameter_override] = STATE(137),
    [sym_module_instantiation] = STATE(137),
    [sym_attribute_instance] = STATE(138),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(138),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [68] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(140),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym__module_item] = STATE(140),
    [sym_module_or_generate_item] = STATE(140),
    [sym__non_port_module_item] = STATE(140),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat1] = STATE(140),
    [anon_sym_endmodule] = ACTIONS(207),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [69] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(141),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym_module_or_generate_item] = STATE(141),
    [sym__non_port_module_item] = STATE(141),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat2] = STATE(141),
    [anon_sym_endmodule] = ACTIONS(207),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [70] = {
    [anon_sym_endmodule] = ACTIONS(209),
    [anon_sym_extern] = ACTIONS(209),
    [anon_sym_module] = ACTIONS(209),
    [anon_sym_macromodule] = ACTIONS(209),
    [anon_sym_defparam] = ACTIONS(209),
    [anon_sym_LPAREN_STAR] = ACTIONS(211),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(209),
  },
  [71] = {
    [anon_sym_endmodule] = ACTIONS(213),
    [anon_sym_extern] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(213),
    [anon_sym_macromodule] = ACTIONS(213),
    [anon_sym_defparam] = ACTIONS(213),
    [anon_sym_LPAREN_STAR] = ACTIONS(215),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(213),
  },
  [72] = {
    [sym_parameter_port_list] = STATE(142),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(219),
    [sym_comment] = ACTIONS(13),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(217),
    [sym_comment] = ACTIONS(13),
  },
  [75] = {
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(144),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_extern] = ACTIONS(211),
    [anon_sym_module] = ACTIONS(211),
    [anon_sym_macromodule] = ACTIONS(211),
    [anon_sym_LPAREN_STAR] = ACTIONS(211),
    [sym_comment] = ACTIONS(13),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_extern] = ACTIONS(215),
    [anon_sym_module] = ACTIONS(215),
    [anon_sym_macromodule] = ACTIONS(215),
    [anon_sym_LPAREN_STAR] = ACTIONS(215),
    [sym_comment] = ACTIONS(13),
  },
  [78] = {
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_STAR_RPAREN] = ACTIONS(221),
    [sym_comment] = ACTIONS(13),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_DOT_STAR] = ACTIONS(225),
    [anon_sym_module] = ACTIONS(225),
    [anon_sym_macromodule] = ACTIONS(225),
    [anon_sym_input] = ACTIONS(225),
    [anon_sym_output] = ACTIONS(225),
    [anon_sym_inout] = ACTIONS(225),
    [anon_sym_ref] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(223),
    [anon_sym_string] = ACTIONS(225),
    [anon_sym_chandle] = ACTIONS(225),
    [anon_sym_event] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_byte] = ACTIONS(225),
    [anon_sym_shortint] = ACTIONS(225),
    [anon_sym_int] = ACTIONS(223),
    [anon_sym_longint] = ACTIONS(225),
    [anon_sym_integer] = ACTIONS(225),
    [anon_sym_time] = ACTIONS(225),
    [anon_sym_bit] = ACTIONS(225),
    [anon_sym_logic] = ACTIONS(225),
    [anon_sym_reg] = ACTIONS(225),
    [anon_sym_shortreal] = ACTIONS(225),
    [anon_sym_real] = ACTIONS(223),
    [anon_sym_realtime] = ACTIONS(225),
    [anon_sym_supply0] = ACTIONS(225),
    [anon_sym_supply1] = ACTIONS(225),
    [anon_sym_tri] = ACTIONS(223),
    [anon_sym_triand] = ACTIONS(225),
    [anon_sym_trior] = ACTIONS(225),
    [anon_sym_trireg] = ACTIONS(225),
    [anon_sym_tri0] = ACTIONS(225),
    [anon_sym_tri1] = ACTIONS(225),
    [anon_sym_uwire] = ACTIONS(225),
    [anon_sym_wire] = ACTIONS(225),
    [anon_sym_wand] = ACTIONS(225),
    [anon_sym_wor] = ACTIONS(225),
    [anon_sym_signed] = ACTIONS(225),
    [anon_sym_unsigned] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_this] = ACTIONS(225),
    [anon_sym_null] = ACTIONS(225),
    [anon_sym_DASH_DASH] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(223),
    [sym_real_number] = ACTIONS(223),
    [anon_sym_LPAREN_STAR] = ACTIONS(225),
    [sym_comment] = ACTIONS(13),
  },
  [80] = {
    [aux_sym_attribute_instance_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_STAR_RPAREN] = ACTIONS(221),
    [sym_comment] = ACTIONS(13),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(230),
    [sym_comment] = ACTIONS(13),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(232),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(232),
  },
  [83] = {
    [anon_sym_LBRACE] = ACTIONS(234),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(236),
    [sym_real_number] = ACTIONS(236),
    [anon_sym_LPAREN_STAR] = ACTIONS(234),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(234),
  },
  [84] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(146),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [85] = {
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(240),
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
    [sym_comment] = ACTIONS(13),
  },
  [86] = {
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_RBRACK] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_STAR_STAR] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(244),
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
    [sym_comment] = ACTIONS(13),
  },
  [87] = {
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [anon_sym_BANG_EQ] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_QMARK] = ACTIONS(246),
    [anon_sym_TILDE_CARET] = ACTIONS(246),
    [anon_sym_CARET_TILDE] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(248),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(246),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(246),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(246),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(246),
    [anon_sym_LT_DASH_GT] = ACTIONS(246),
    [anon_sym_GT_GT_GT] = ACTIONS(246),
    [anon_sym_LT_LT_LT] = ACTIONS(246),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_PIPE_PIPE] = ACTIONS(246),
    [anon_sym_DASH_GT] = ACTIONS(246),
    [sym_comment] = ACTIONS(13),
  },
  [88] = {
    [sym_binary_operator] = STATE(151),
    [anon_sym_COLON] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(258),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [89] = {
    [anon_sym_RBRACK] = ACTIONS(260),
    [sym_comment] = ACTIONS(13),
  },
  [90] = {
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(262),
    [anon_sym_TILDE_CARET] = ACTIONS(262),
    [anon_sym_CARET_TILDE] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(262),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(262),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(262),
    [anon_sym_LT_DASH_GT] = ACTIONS(262),
    [anon_sym_GT_GT_GT] = ACTIONS(262),
    [anon_sym_LT_LT_LT] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_DASH_GT] = ACTIONS(262),
    [sym_comment] = ACTIONS(13),
  },
  [91] = {
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [anon_sym_BANG_EQ] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_QMARK] = ACTIONS(246),
    [anon_sym_TILDE_CARET] = ACTIONS(246),
    [anon_sym_CARET_TILDE] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(248),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(246),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(246),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(246),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(246),
    [anon_sym_LT_DASH_GT] = ACTIONS(246),
    [anon_sym_GT_GT_GT] = ACTIONS(246),
    [anon_sym_LT_LT_LT] = ACTIONS(246),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_PIPE_PIPE] = ACTIONS(246),
    [anon_sym_DASH_GT] = ACTIONS(246),
    [sym_comment] = ACTIONS(13),
  },
  [92] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_primary] = STATE(154),
    [sym_primary_literal] = STATE(91),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(155),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(155),
    [anon_sym_LBRACE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [93] = {
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_COLON] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(270),
    [anon_sym_BANG_EQ] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_QMARK] = ACTIONS(268),
    [anon_sym_TILDE_CARET] = ACTIONS(268),
    [anon_sym_CARET_TILDE] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_AMP] = ACTIONS(270),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_CARET] = ACTIONS(270),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(268),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(268),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(268),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(268),
    [anon_sym_LT_DASH_GT] = ACTIONS(268),
    [anon_sym_GT_GT_GT] = ACTIONS(268),
    [anon_sym_LT_LT_LT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_DASH_GT] = ACTIONS(268),
    [sym_comment] = ACTIONS(13),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(272),
    [sym_comment] = ACTIONS(13),
  },
  [95] = {
    [anon_sym_DOT] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(274),
    [sym_comment] = ACTIONS(13),
  },
  [96] = {
    [sym_constant_bit_select] = STATE(112),
    [sym_constant_select] = STATE(147),
    [aux_sym_constant_select_repeat1] = STATE(114),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(13),
  },
  [97] = {
    [anon_sym_SEMI] = ACTIONS(276),
    [sym_comment] = ACTIONS(13),
  },
  [98] = {
    [sym_port] = STATE(156),
    [sym__port_expression] = STATE(45),
    [sym_port_reference] = STATE(45),
    [sym_identifier] = STATE(56),
    [sym_port_identifier] = STATE(57),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [99] = {
    [aux_sym_list_of_ports_repeat1] = STATE(158),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(151),
    [sym_comment] = ACTIONS(13),
  },
  [100] = {
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(280),
  },
  [101] = {
    [sym_unpacked_dimension] = STATE(161),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(161),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_LBRACK] = ACTIONS(286),
    [sym_comment] = ACTIONS(13),
  },
  [102] = {
    [anon_sym_SEMI] = ACTIONS(288),
    [sym_comment] = ACTIONS(13),
  },
  [103] = {
    [sym_port_direction] = STATE(46),
    [sym_net_port_header] = STATE(47),
    [sym_ansi_port_declaration] = STATE(162),
    [sym_data_type] = STATE(49),
    [sym__data_type_or_implicit] = STATE(49),
    [sym_implicit_data_type] = STATE(49),
    [sym_integer_atom_type] = STATE(50),
    [sym_integer_vector_type] = STATE(51),
    [sym_non_integer_type] = STATE(38),
    [sym_net_type] = STATE(52),
    [sym_net_port_type] = STATE(53),
    [sym__signing] = STATE(54),
    [sym_packed_dimension] = STATE(59),
    [sym_unsized_dimension] = STATE(55),
    [sym_attribute_instance] = STATE(163),
    [aux_sym_module_header_repeat1] = STATE(163),
    [aux_sym_data_type_repeat1] = STATE(59),
    [anon_sym_input] = ACTIONS(191),
    [anon_sym_output] = ACTIONS(191),
    [anon_sym_inout] = ACTIONS(191),
    [anon_sym_ref] = ACTIONS(191),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_chandle] = ACTIONS(155),
    [anon_sym_event] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_byte] = ACTIONS(157),
    [anon_sym_shortint] = ACTIONS(157),
    [anon_sym_int] = ACTIONS(53),
    [anon_sym_longint] = ACTIONS(157),
    [anon_sym_integer] = ACTIONS(157),
    [anon_sym_time] = ACTIONS(157),
    [anon_sym_bit] = ACTIONS(159),
    [anon_sym_logic] = ACTIONS(159),
    [anon_sym_reg] = ACTIONS(159),
    [anon_sym_shortreal] = ACTIONS(161),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(161),
    [anon_sym_supply0] = ACTIONS(163),
    [anon_sym_supply1] = ACTIONS(163),
    [anon_sym_tri] = ACTIONS(59),
    [anon_sym_triand] = ACTIONS(163),
    [anon_sym_trior] = ACTIONS(163),
    [anon_sym_trireg] = ACTIONS(163),
    [anon_sym_tri0] = ACTIONS(163),
    [anon_sym_tri1] = ACTIONS(163),
    [anon_sym_uwire] = ACTIONS(163),
    [anon_sym_wire] = ACTIONS(163),
    [anon_sym_wand] = ACTIONS(163),
    [anon_sym_wor] = ACTIONS(163),
    [anon_sym_signed] = ACTIONS(165),
    [anon_sym_unsigned] = ACTIONS(165),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [104] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(165),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(13),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(292),
  },
  [106] = {
    [sym_packed_dimension] = STATE(166),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(166),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(292),
  },
  [107] = {
    [sym_packed_dimension] = STATE(117),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(292),
  },
  [108] = {
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(294),
  },
  [109] = {
    [sym_packed_dimension] = STATE(117),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(296),
  },
  [110] = {
    [sym_identifier] = STATE(167),
    [sym_member_identifier] = STATE(168),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [111] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(169),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [112] = {
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_STAR_STAR] = ACTIONS(298),
    [anon_sym_SLASH] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(300),
    [anon_sym_BANG_EQ] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(300),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_QMARK] = ACTIONS(298),
    [anon_sym_TILDE_CARET] = ACTIONS(298),
    [anon_sym_CARET_TILDE] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_AMP] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_CARET] = ACTIONS(300),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(298),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(298),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(298),
    [sym_comment] = ACTIONS(13),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_comment] = ACTIONS(13),
  },
  [114] = {
    [sym_constant_bit_select] = STATE(171),
    [aux_sym_constant_select_repeat1] = STATE(172),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(13),
  },
  [115] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(173),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(13),
  },
  [116] = {
    [sym_attribute_instance] = STATE(116),
    [aux_sym_module_header_repeat1] = STATE(116),
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
    [anon_sym_int] = ACTIONS(306),
    [anon_sym_longint] = ACTIONS(96),
    [anon_sym_integer] = ACTIONS(96),
    [anon_sym_time] = ACTIONS(96),
    [anon_sym_bit] = ACTIONS(96),
    [anon_sym_logic] = ACTIONS(96),
    [anon_sym_reg] = ACTIONS(96),
    [anon_sym_shortreal] = ACTIONS(96),
    [anon_sym_real] = ACTIONS(306),
    [anon_sym_realtime] = ACTIONS(96),
    [anon_sym_supply0] = ACTIONS(96),
    [anon_sym_supply1] = ACTIONS(96),
    [anon_sym_tri] = ACTIONS(306),
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
    [sym_comment] = ACTIONS(13),
  },
  [117] = {
    [sym_packed_dimension] = STATE(117),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(311),
  },
  [118] = {
    [sym_identifier] = STATE(175),
    [sym_module_identifier] = STATE(176),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(313),
  },
  [119] = {
    [sym_module_nonansi_header] = STATE(177),
    [sym_module_ansi_header] = STATE(177),
    [sym_list_of_ports] = STATE(18),
    [sym_list_of_port_declarations] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
  },
  [120] = {
    [anon_sym_DOT] = ACTIONS(315),
    [sym_comment] = ACTIONS(13),
  },
  [121] = {
    [anon_sym_SEMI] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
  },
  [122] = {
    [aux_sym_list_of_defparam_assignments_repeat1] = STATE(181),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(321),
    [sym_comment] = ACTIONS(13),
  },
  [123] = {
    [anon_sym_EQ] = ACTIONS(323),
    [sym_comment] = ACTIONS(13),
  },
  [124] = {
    [anon_sym_EQ] = ACTIONS(325),
    [sym_comment] = ACTIONS(13),
  },
  [125] = {
    [sym_constant_bit_select] = STATE(183),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(13),
  },
  [126] = {
    [sym_identifier] = STATE(184),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(185),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [127] = {
    [aux_sym_attribute_instance_repeat1] = STATE(187),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_STAR_RPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(13),
  },
  [128] = {
    [sym_port] = STATE(44),
    [sym__port_expression] = STATE(45),
    [sym_port_reference] = STATE(45),
    [sym_port_direction] = STATE(46),
    [sym_net_port_header] = STATE(47),
    [sym_ansi_port_declaration] = STATE(48),
    [sym_data_type] = STATE(49),
    [sym__data_type_or_implicit] = STATE(49),
    [sym_implicit_data_type] = STATE(49),
    [sym_integer_atom_type] = STATE(50),
    [sym_integer_vector_type] = STATE(51),
    [sym_non_integer_type] = STATE(38),
    [sym_net_type] = STATE(52),
    [sym_net_port_type] = STATE(53),
    [sym__signing] = STATE(54),
    [sym_packed_dimension] = STATE(59),
    [sym_unsized_dimension] = STATE(55),
    [sym_attribute_instance] = STATE(58),
    [sym_identifier] = STATE(56),
    [sym_port_identifier] = STATE(57),
    [aux_sym_module_header_repeat1] = STATE(58),
    [aux_sym_data_type_repeat1] = STATE(59),
    [anon_sym_DOT_STAR] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_input] = ACTIONS(47),
    [anon_sym_output] = ACTIONS(47),
    [anon_sym_inout] = ACTIONS(47),
    [anon_sym_ref] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(49),
    [anon_sym_chandle] = ACTIONS(49),
    [anon_sym_event] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_byte] = ACTIONS(53),
    [anon_sym_shortint] = ACTIONS(53),
    [anon_sym_int] = ACTIONS(53),
    [anon_sym_longint] = ACTIONS(53),
    [anon_sym_integer] = ACTIONS(53),
    [anon_sym_time] = ACTIONS(53),
    [anon_sym_bit] = ACTIONS(55),
    [anon_sym_logic] = ACTIONS(55),
    [anon_sym_reg] = ACTIONS(55),
    [anon_sym_shortreal] = ACTIONS(57),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(57),
    [anon_sym_supply0] = ACTIONS(59),
    [anon_sym_supply1] = ACTIONS(59),
    [anon_sym_tri] = ACTIONS(59),
    [anon_sym_triand] = ACTIONS(59),
    [anon_sym_trior] = ACTIONS(59),
    [anon_sym_trireg] = ACTIONS(59),
    [anon_sym_tri0] = ACTIONS(59),
    [anon_sym_tri1] = ACTIONS(59),
    [anon_sym_uwire] = ACTIONS(59),
    [anon_sym_wire] = ACTIONS(59),
    [anon_sym_wand] = ACTIONS(59),
    [anon_sym_wor] = ACTIONS(59),
    [anon_sym_signed] = ACTIONS(61),
    [anon_sym_unsigned] = ACTIONS(61),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [129] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(190),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym__module_item] = STATE(190),
    [sym_module_or_generate_item] = STATE(190),
    [sym__non_port_module_item] = STATE(190),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat1] = STATE(190),
    [anon_sym_endmodule] = ACTIONS(331),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [130] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(191),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym_module_or_generate_item] = STATE(191),
    [sym__non_port_module_item] = STATE(191),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat2] = STATE(191),
    [anon_sym_endmodule] = ACTIONS(331),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [131] = {
    [anon_sym_LPAREN] = ACTIONS(333),
    [sym_comment] = ACTIONS(13),
  },
  [132] = {
    [sym_hierarchical_instance] = STATE(193),
    [sym_name_of_instance] = STATE(134),
    [sym_identifier] = STATE(135),
    [sym_instance_identifier] = STATE(136),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [133] = {
    [aux_sym_module_instantiation_repeat1] = STATE(196),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(337),
    [sym_comment] = ACTIONS(13),
  },
  [134] = {
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(13),
  },
  [135] = {
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [sym_comment] = ACTIONS(13),
  },
  [136] = {
    [sym_unpacked_dimension] = STATE(198),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(198),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(286),
    [sym_comment] = ACTIONS(13),
  },
  [137] = {
    [anon_sym_endmodule] = ACTIONS(345),
    [anon_sym_extern] = ACTIONS(345),
    [anon_sym_module] = ACTIONS(345),
    [anon_sym_macromodule] = ACTIONS(345),
    [anon_sym_defparam] = ACTIONS(345),
    [anon_sym_LPAREN_STAR] = ACTIONS(347),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(345),
  },
  [138] = {
    [sym_attribute_instance] = STATE(138),
    [aux_sym_module_header_repeat1] = STATE(138),
    [anon_sym_module] = ACTIONS(306),
    [anon_sym_macromodule] = ACTIONS(306),
    [anon_sym_defparam] = ACTIONS(306),
    [anon_sym_LPAREN_STAR] = ACTIONS(349),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(306),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_COLON] = ACTIONS(354),
    [anon_sym_extern] = ACTIONS(352),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_macromodule] = ACTIONS(352),
    [anon_sym_LPAREN_STAR] = ACTIONS(352),
    [sym_comment] = ACTIONS(13),
  },
  [140] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(140),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym__module_item] = STATE(140),
    [sym_module_or_generate_item] = STATE(140),
    [sym__non_port_module_item] = STATE(140),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat1] = STATE(140),
    [anon_sym_endmodule] = ACTIONS(356),
    [anon_sym_extern] = ACTIONS(358),
    [anon_sym_module] = ACTIONS(361),
    [anon_sym_macromodule] = ACTIONS(361),
    [anon_sym_defparam] = ACTIONS(364),
    [anon_sym_LPAREN_STAR] = ACTIONS(367),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(370),
  },
  [141] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(141),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym_module_or_generate_item] = STATE(141),
    [sym__non_port_module_item] = STATE(141),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat2] = STATE(141),
    [anon_sym_endmodule] = ACTIONS(373),
    [anon_sym_extern] = ACTIONS(375),
    [anon_sym_module] = ACTIONS(378),
    [anon_sym_macromodule] = ACTIONS(378),
    [anon_sym_defparam] = ACTIONS(381),
    [anon_sym_LPAREN_STAR] = ACTIONS(384),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(387),
  },
  [142] = {
    [anon_sym_LPAREN] = ACTIONS(390),
    [sym_comment] = ACTIONS(13),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(392),
    [sym_comment] = ACTIONS(13),
  },
  [144] = {
    [sym_parameter_port_list] = STATE(201),
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_POUND] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
  },
  [145] = {
    [anon_sym_endmodule] = ACTIONS(394),
    [sym_comment] = ACTIONS(13),
  },
  [146] = {
    [sym_constant_concatenation] = STATE(207),
    [sym_binary_operator] = STATE(208),
    [aux_sym_constant_concatenation_repeat1] = STATE(209),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(400),
    [anon_sym_QMARK] = ACTIONS(402),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [147] = {
    [anon_sym_SEMI] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_COLON] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_STAR_STAR] = ACTIONS(404),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_LT_EQ] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(406),
    [anon_sym_GT_EQ] = ACTIONS(404),
    [anon_sym_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACE] = ACTIONS(404),
    [anon_sym_QMARK] = ACTIONS(404),
    [anon_sym_TILDE_CARET] = ACTIONS(404),
    [anon_sym_CARET_TILDE] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_AMP] = ACTIONS(406),
    [anon_sym_PIPE] = ACTIONS(406),
    [anon_sym_CARET] = ACTIONS(406),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(404),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(404),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(404),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(404),
    [anon_sym_LT_DASH_GT] = ACTIONS(404),
    [anon_sym_GT_GT_GT] = ACTIONS(404),
    [anon_sym_LT_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(406),
    [anon_sym_LT_LT] = ACTIONS(406),
    [anon_sym_AMP_AMP] = ACTIONS(404),
    [anon_sym_PIPE_PIPE] = ACTIONS(404),
    [anon_sym_DASH_GT] = ACTIONS(404),
    [sym_comment] = ACTIONS(13),
  },
  [148] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(210),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [149] = {
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_TILDE_PIPE] = ACTIONS(408),
    [anon_sym_TILDE_CARET] = ACTIONS(408),
    [anon_sym_TILDE_AMP] = ACTIONS(408),
    [anon_sym_CARET_TILDE] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_BANG] = ACTIONS(408),
    [anon_sym_AMP] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(408),
    [anon_sym_CARET] = ACTIONS(410),
    [anon_sym_TILDE] = ACTIONS(410),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(410),
    [sym_real_number] = ACTIONS(410),
    [anon_sym_LPAREN_STAR] = ACTIONS(408),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(408),
  },
  [150] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(211),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(212),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(212),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [151] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(213),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(214),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(214),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(412),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(412),
  },
  [153] = {
    [sym_attr_spec] = STATE(215),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [154] = {
    [anon_sym_SEMI] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_COLON] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_STAR] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(414),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(416),
    [anon_sym_PERCENT] = ACTIONS(414),
    [anon_sym_EQ_EQ] = ACTIONS(416),
    [anon_sym_BANG_EQ] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_RBRACE] = ACTIONS(414),
    [anon_sym_LBRACE] = ACTIONS(414),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_TILDE_CARET] = ACTIONS(414),
    [anon_sym_CARET_TILDE] = ACTIONS(414),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_AMP] = ACTIONS(416),
    [anon_sym_PIPE] = ACTIONS(416),
    [anon_sym_CARET] = ACTIONS(416),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(414),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(414),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(414),
    [anon_sym_LT_DASH_GT] = ACTIONS(414),
    [anon_sym_GT_GT_GT] = ACTIONS(414),
    [anon_sym_LT_LT_LT] = ACTIONS(414),
    [anon_sym_GT_GT] = ACTIONS(416),
    [anon_sym_LT_LT] = ACTIONS(416),
    [anon_sym_AMP_AMP] = ACTIONS(414),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_DASH_GT] = ACTIONS(414),
    [sym_comment] = ACTIONS(13),
  },
  [155] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_primary] = STATE(216),
    [sym_primary_literal] = STATE(91),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(217),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(217),
    [anon_sym_LBRACE] = ACTIONS(129),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(418),
    [sym_comment] = ACTIONS(13),
  },
  [157] = {
    [anon_sym_SEMI] = ACTIONS(420),
    [sym_comment] = ACTIONS(13),
  },
  [158] = {
    [aux_sym_list_of_ports_repeat1] = STATE(158),
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(422),
    [sym_comment] = ACTIONS(13),
  },
  [159] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(218),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [160] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(88),
    [sym_constant_range] = STATE(219),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [161] = {
    [sym_unpacked_dimension] = STATE(221),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(221),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_EQ] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(286),
    [sym_comment] = ACTIONS(13),
  },
  [162] = {
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_COMMA] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
  },
  [163] = {
    [sym_port_direction] = STATE(46),
    [sym_net_port_header] = STATE(47),
    [sym_ansi_port_declaration] = STATE(222),
    [sym_data_type] = STATE(49),
    [sym__data_type_or_implicit] = STATE(49),
    [sym_implicit_data_type] = STATE(49),
    [sym_integer_atom_type] = STATE(50),
    [sym_integer_vector_type] = STATE(51),
    [sym_non_integer_type] = STATE(38),
    [sym_net_type] = STATE(52),
    [sym_net_port_type] = STATE(53),
    [sym__signing] = STATE(54),
    [sym_packed_dimension] = STATE(59),
    [sym_unsized_dimension] = STATE(55),
    [sym_attribute_instance] = STATE(116),
    [aux_sym_module_header_repeat1] = STATE(116),
    [aux_sym_data_type_repeat1] = STATE(59),
    [anon_sym_input] = ACTIONS(191),
    [anon_sym_output] = ACTIONS(191),
    [anon_sym_inout] = ACTIONS(191),
    [anon_sym_ref] = ACTIONS(191),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_chandle] = ACTIONS(155),
    [anon_sym_event] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_byte] = ACTIONS(157),
    [anon_sym_shortint] = ACTIONS(157),
    [anon_sym_int] = ACTIONS(53),
    [anon_sym_longint] = ACTIONS(157),
    [anon_sym_integer] = ACTIONS(157),
    [anon_sym_time] = ACTIONS(157),
    [anon_sym_bit] = ACTIONS(159),
    [anon_sym_logic] = ACTIONS(159),
    [anon_sym_reg] = ACTIONS(159),
    [anon_sym_shortreal] = ACTIONS(161),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(161),
    [anon_sym_supply0] = ACTIONS(163),
    [anon_sym_supply1] = ACTIONS(163),
    [anon_sym_tri] = ACTIONS(59),
    [anon_sym_triand] = ACTIONS(163),
    [anon_sym_trior] = ACTIONS(163),
    [anon_sym_trireg] = ACTIONS(163),
    [anon_sym_tri0] = ACTIONS(163),
    [anon_sym_tri1] = ACTIONS(163),
    [anon_sym_uwire] = ACTIONS(163),
    [anon_sym_wire] = ACTIONS(163),
    [anon_sym_wand] = ACTIONS(163),
    [anon_sym_wor] = ACTIONS(163),
    [anon_sym_signed] = ACTIONS(165),
    [anon_sym_unsigned] = ACTIONS(165),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [164] = {
    [anon_sym_SEMI] = ACTIONS(431),
    [sym_comment] = ACTIONS(13),
  },
  [165] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(165),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_COMMA] = ACTIONS(433),
    [sym_comment] = ACTIONS(13),
  },
  [166] = {
    [sym_packed_dimension] = STATE(117),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(436),
  },
  [167] = {
    [anon_sym_DOT] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(438),
    [sym_comment] = ACTIONS(13),
  },
  [168] = {
    [sym_constant_bit_select] = STATE(223),
    [anon_sym_DOT] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_comment] = ACTIONS(13),
  },
  [169] = {
    [sym_binary_operator] = STATE(226),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [170] = {
    [anon_sym_SEMI] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_RBRACK] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_STAR_STAR] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(451),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(451),
    [anon_sym_BANG_EQ] = ACTIONS(451),
    [anon_sym_LT] = ACTIONS(451),
    [anon_sym_LT_EQ] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(451),
    [anon_sym_GT_EQ] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_TILDE_CARET] = ACTIONS(449),
    [anon_sym_CARET_TILDE] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(451),
    [anon_sym_CARET] = ACTIONS(451),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(449),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(449),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(449),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(449),
    [anon_sym_LT_DASH_GT] = ACTIONS(449),
    [anon_sym_GT_GT_GT] = ACTIONS(449),
    [anon_sym_LT_LT_LT] = ACTIONS(449),
    [anon_sym_GT_GT] = ACTIONS(451),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_AMP_AMP] = ACTIONS(449),
    [anon_sym_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_DASH_GT] = ACTIONS(449),
    [sym_comment] = ACTIONS(13),
  },
  [171] = {
    [anon_sym_SEMI] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_STAR_STAR] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(451),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(451),
    [anon_sym_BANG_EQ] = ACTIONS(451),
    [anon_sym_LT] = ACTIONS(451),
    [anon_sym_LT_EQ] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(451),
    [anon_sym_GT_EQ] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_TILDE_CARET] = ACTIONS(449),
    [anon_sym_CARET_TILDE] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(451),
    [anon_sym_CARET] = ACTIONS(451),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(449),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(449),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(449),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(449),
    [anon_sym_LT_DASH_GT] = ACTIONS(449),
    [anon_sym_GT_GT_GT] = ACTIONS(449),
    [anon_sym_LT_LT_LT] = ACTIONS(449),
    [anon_sym_GT_GT] = ACTIONS(451),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_AMP_AMP] = ACTIONS(449),
    [anon_sym_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_DASH_GT] = ACTIONS(449),
    [sym_comment] = ACTIONS(13),
  },
  [172] = {
    [aux_sym_constant_select_repeat1] = STATE(172),
    [anon_sym_DOT] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
  },
  [173] = {
    [aux_sym_list_of_port_declarations_repeat1] = STATE(165),
    [anon_sym_RPAREN] = ACTIONS(458),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(13),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_extern] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_macromodule] = ACTIONS(31),
    [anon_sym_LPAREN_STAR] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_extern] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
    [anon_sym_macromodule] = ACTIONS(79),
    [anon_sym_LPAREN_STAR] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_extern] = ACTIONS(460),
    [anon_sym_module] = ACTIONS(460),
    [anon_sym_macromodule] = ACTIONS(460),
    [anon_sym_LPAREN_STAR] = ACTIONS(460),
    [sym_comment] = ACTIONS(13),
  },
  [177] = {
    [anon_sym_endmodule] = ACTIONS(462),
    [anon_sym_extern] = ACTIONS(462),
    [anon_sym_module] = ACTIONS(462),
    [anon_sym_macromodule] = ACTIONS(462),
    [anon_sym_defparam] = ACTIONS(462),
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(462),
  },
  [178] = {
    [sym_identifier] = STATE(125),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(229),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [179] = {
    [anon_sym_endmodule] = ACTIONS(464),
    [anon_sym_extern] = ACTIONS(464),
    [anon_sym_module] = ACTIONS(464),
    [anon_sym_macromodule] = ACTIONS(464),
    [anon_sym_defparam] = ACTIONS(464),
    [anon_sym_LPAREN_STAR] = ACTIONS(466),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(464),
  },
  [180] = {
    [sym_defparam_assignment] = STATE(230),
    [sym_hierarchical_identifier] = STATE(123),
    [sym_hierarchical_parameter_identifier] = STATE(124),
    [sym_identifier] = STATE(125),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(126),
    [sym_comment] = ACTIONS(13),
    [anon_sym_DOLLARroot] = ACTIONS(197),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [181] = {
    [aux_sym_list_of_defparam_assignments_repeat1] = STATE(231),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(321),
    [sym_comment] = ACTIONS(13),
  },
  [182] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(232),
    [sym_constant_mintypmax_expression] = STATE(233),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [183] = {
    [anon_sym_DOT] = ACTIONS(470),
    [sym_comment] = ACTIONS(13),
  },
  [184] = {
    [sym_constant_bit_select] = STATE(183),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(13),
  },
  [185] = {
    [sym_identifier] = STATE(125),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(185),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(474),
  },
  [186] = {
    [anon_sym_module] = ACTIONS(107),
    [anon_sym_macromodule] = ACTIONS(107),
    [anon_sym_defparam] = ACTIONS(107),
    [anon_sym_LPAREN_STAR] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(107),
  },
  [187] = {
    [aux_sym_attribute_instance_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_STAR_RPAREN] = ACTIONS(477),
    [sym_comment] = ACTIONS(13),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(479),
    [sym_comment] = ACTIONS(13),
  },
  [189] = {
    [anon_sym_endmodule] = ACTIONS(462),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_extern] = ACTIONS(462),
    [anon_sym_module] = ACTIONS(462),
    [anon_sym_macromodule] = ACTIONS(462),
    [anon_sym_defparam] = ACTIONS(462),
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(462),
  },
  [190] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(140),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym__module_item] = STATE(140),
    [sym_module_or_generate_item] = STATE(140),
    [sym__non_port_module_item] = STATE(140),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat1] = STATE(140),
    [anon_sym_endmodule] = ACTIONS(483),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [191] = {
    [sym_module_header] = STATE(64),
    [sym_module_declaration] = STATE(141),
    [sym_module_keyword] = STATE(7),
    [sym__module_common_item] = STATE(65),
    [sym_module_or_generate_item] = STATE(141),
    [sym__non_port_module_item] = STATE(141),
    [sym_parameter_override] = STATE(65),
    [sym_module_instantiation] = STATE(65),
    [sym_attribute_instance] = STATE(67),
    [sym_identifier] = STATE(22),
    [sym_module_identifier] = STATE(66),
    [aux_sym_module_header_repeat1] = STATE(67),
    [aux_sym_module_declaration_repeat2] = STATE(141),
    [anon_sym_endmodule] = ACTIONS(483),
    [anon_sym_extern] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_macromodule] = ACTIONS(67),
    [anon_sym_defparam] = ACTIONS(69),
    [anon_sym_LPAREN_STAR] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [192] = {
    [sym_data_type] = STATE(244),
    [sym_integer_atom_type] = STATE(250),
    [sym_integer_vector_type] = STATE(251),
    [sym_non_integer_type] = STATE(38),
    [sym_list_of_parameter_assignments] = STATE(252),
    [sym_ordered_parameter_assignment] = STATE(253),
    [sym_named_parameter_assignment] = STATE(254),
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_param_expression] = STATE(259),
    [sym_expression] = STATE(260),
    [sym_mintypmax_expression] = STATE(244),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(489),
    [anon_sym_string] = ACTIONS(49),
    [anon_sym_chandle] = ACTIONS(49),
    [anon_sym_event] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(491),
    [anon_sym_shortint] = ACTIONS(491),
    [anon_sym_int] = ACTIONS(491),
    [anon_sym_longint] = ACTIONS(491),
    [anon_sym_integer] = ACTIONS(491),
    [anon_sym_time] = ACTIONS(491),
    [anon_sym_bit] = ACTIONS(493),
    [anon_sym_logic] = ACTIONS(493),
    [anon_sym_reg] = ACTIONS(493),
    [anon_sym_shortreal] = ACTIONS(57),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [193] = {
    [aux_sym_module_instantiation_repeat1] = STATE(266),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(337),
    [sym_comment] = ACTIONS(13),
  },
  [194] = {
    [anon_sym_endmodule] = ACTIONS(511),
    [anon_sym_extern] = ACTIONS(511),
    [anon_sym_module] = ACTIONS(511),
    [anon_sym_macromodule] = ACTIONS(511),
    [anon_sym_defparam] = ACTIONS(511),
    [anon_sym_LPAREN_STAR] = ACTIONS(513),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(511),
  },
  [195] = {
    [sym_hierarchical_instance] = STATE(267),
    [sym_name_of_instance] = STATE(134),
    [sym_identifier] = STATE(135),
    [sym_instance_identifier] = STATE(136),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [196] = {
    [aux_sym_module_instantiation_repeat1] = STATE(268),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(337),
    [sym_comment] = ACTIONS(13),
  },
  [197] = {
    [sym_list_of_port_connections] = STATE(273),
    [sym_ordered_port_connection] = STATE(274),
    [sym_named_port_connection] = STATE(275),
    [sym_attribute_instance] = STATE(276),
    [aux_sym_module_header_repeat1] = STATE(276),
    [anon_sym_DOT_STAR] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(519),
    [anon_sym_LPAREN_STAR] = ACTIONS(521),
    [sym_comment] = ACTIONS(13),
  },
  [198] = {
    [sym_unpacked_dimension] = STATE(277),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(277),
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(286),
    [sym_comment] = ACTIONS(13),
  },
  [199] = {
    [sym_identifier] = STATE(175),
    [sym_module_identifier] = STATE(278),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(313),
  },
  [200] = {
    [anon_sym_LPAREN] = ACTIONS(525),
    [sym_comment] = ACTIONS(13),
  },
  [201] = {
    [anon_sym_LPAREN] = ACTIONS(527),
    [sym_comment] = ACTIONS(13),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_extern] = ACTIONS(529),
    [anon_sym_module] = ACTIONS(529),
    [anon_sym_macromodule] = ACTIONS(529),
    [anon_sym_LPAREN_STAR] = ACTIONS(529),
    [sym_comment] = ACTIONS(13),
  },
  [203] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(280),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [204] = {
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_STAR] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [anon_sym_PLUS] = ACTIONS(533),
    [anon_sym_STAR_STAR] = ACTIONS(533),
    [anon_sym_SLASH] = ACTIONS(535),
    [anon_sym_PERCENT] = ACTIONS(533),
    [anon_sym_EQ_EQ] = ACTIONS(535),
    [anon_sym_BANG_EQ] = ACTIONS(535),
    [anon_sym_LT] = ACTIONS(535),
    [anon_sym_LT_EQ] = ACTIONS(533),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_EQ] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_QMARK] = ACTIONS(533),
    [anon_sym_TILDE_CARET] = ACTIONS(533),
    [anon_sym_CARET_TILDE] = ACTIONS(533),
    [anon_sym_DASH] = ACTIONS(535),
    [anon_sym_AMP] = ACTIONS(535),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_CARET] = ACTIONS(535),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(533),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(533),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(533),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(533),
    [anon_sym_LT_DASH_GT] = ACTIONS(533),
    [anon_sym_GT_GT_GT] = ACTIONS(533),
    [anon_sym_LT_LT_LT] = ACTIONS(533),
    [anon_sym_GT_GT] = ACTIONS(535),
    [anon_sym_LT_LT] = ACTIONS(535),
    [anon_sym_AMP_AMP] = ACTIONS(533),
    [anon_sym_PIPE_PIPE] = ACTIONS(533),
    [anon_sym_DASH_GT] = ACTIONS(533),
    [sym_comment] = ACTIONS(13),
  },
  [205] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(281),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [206] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(282),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(283),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(283),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [207] = {
    [anon_sym_RBRACE] = ACTIONS(537),
    [sym_comment] = ACTIONS(13),
  },
  [208] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(285),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(286),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(286),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [209] = {
    [aux_sym_constant_concatenation_repeat1] = STATE(288),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(539),
    [sym_comment] = ACTIONS(13),
  },
  [210] = {
    [sym_binary_operator] = STATE(226),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(541),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [211] = {
    [sym_binary_operator] = STATE(151),
    [aux_sym_constant_expression_repeat1] = STATE(290),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [212] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(291),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [213] = {
    [sym_binary_operator] = STATE(151),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [214] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(293),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [215] = {
    [aux_sym_attribute_instance_repeat1] = STATE(295),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_STAR_RPAREN] = ACTIONS(547),
    [sym_comment] = ACTIONS(13),
  },
  [216] = {
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [217] = {
    [sym_attribute_instance] = STATE(217),
    [aux_sym_module_header_repeat1] = STATE(217),
    [anon_sym_LBRACE] = ACTIONS(96),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(306),
    [sym_real_number] = ACTIONS(306),
    [anon_sym_LPAREN_STAR] = ACTIONS(549),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(96),
  },
  [218] = {
    [sym_binary_operator] = STATE(297),
    [anon_sym_RPAREN] = ACTIONS(552),
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [219] = {
    [anon_sym_RBRACK] = ACTIONS(556),
    [sym_comment] = ACTIONS(13),
  },
  [220] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(299),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [221] = {
    [sym_unpacked_dimension] = STATE(221),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(221),
    [anon_sym_RPAREN] = ACTIONS(558),
    [anon_sym_COMMA] = ACTIONS(558),
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_comment] = ACTIONS(13),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_COMMA] = ACTIONS(563),
    [sym_comment] = ACTIONS(13),
  },
  [223] = {
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(565),
    [sym_comment] = ACTIONS(13),
  },
  [224] = {
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_RPAREN] = ACTIONS(567),
    [anon_sym_COLON] = ACTIONS(567),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_DOT] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(567),
    [anon_sym_PLUS] = ACTIONS(567),
    [anon_sym_STAR_STAR] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(569),
    [anon_sym_PERCENT] = ACTIONS(567),
    [anon_sym_EQ_EQ] = ACTIONS(569),
    [anon_sym_BANG_EQ] = ACTIONS(569),
    [anon_sym_LT] = ACTIONS(569),
    [anon_sym_LT_EQ] = ACTIONS(567),
    [anon_sym_GT] = ACTIONS(569),
    [anon_sym_GT_EQ] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(567),
    [anon_sym_QMARK] = ACTIONS(567),
    [anon_sym_TILDE_CARET] = ACTIONS(567),
    [anon_sym_CARET_TILDE] = ACTIONS(567),
    [anon_sym_DASH] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(569),
    [anon_sym_PIPE] = ACTIONS(569),
    [anon_sym_CARET] = ACTIONS(569),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(567),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(567),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(567),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(567),
    [anon_sym_LT_DASH_GT] = ACTIONS(567),
    [anon_sym_GT_GT_GT] = ACTIONS(567),
    [anon_sym_LT_LT_LT] = ACTIONS(567),
    [anon_sym_GT_GT] = ACTIONS(569),
    [anon_sym_LT_LT] = ACTIONS(569),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_DASH_GT] = ACTIONS(567),
    [sym_comment] = ACTIONS(13),
  },
  [225] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(300),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(301),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(301),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [226] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(302),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(303),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(303),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [227] = {
    [anon_sym_SEMI] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_COLON] = ACTIONS(571),
    [anon_sym_COMMA] = ACTIONS(571),
    [anon_sym_STAR] = ACTIONS(573),
    [anon_sym_RBRACK] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(571),
    [anon_sym_STAR_STAR] = ACTIONS(571),
    [anon_sym_SLASH] = ACTIONS(573),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_EQ_EQ] = ACTIONS(573),
    [anon_sym_BANG_EQ] = ACTIONS(573),
    [anon_sym_LT] = ACTIONS(573),
    [anon_sym_LT_EQ] = ACTIONS(571),
    [anon_sym_GT] = ACTIONS(573),
    [anon_sym_GT_EQ] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(571),
    [anon_sym_LBRACE] = ACTIONS(571),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_TILDE_CARET] = ACTIONS(571),
    [anon_sym_CARET_TILDE] = ACTIONS(571),
    [anon_sym_DASH] = ACTIONS(573),
    [anon_sym_AMP] = ACTIONS(573),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_CARET] = ACTIONS(573),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(571),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(571),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(571),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(571),
    [anon_sym_LT_DASH_GT] = ACTIONS(571),
    [anon_sym_GT_GT_GT] = ACTIONS(571),
    [anon_sym_LT_LT_LT] = ACTIONS(571),
    [anon_sym_GT_GT] = ACTIONS(573),
    [anon_sym_LT_LT] = ACTIONS(573),
    [anon_sym_AMP_AMP] = ACTIONS(571),
    [anon_sym_PIPE_PIPE] = ACTIONS(571),
    [anon_sym_DASH_GT] = ACTIONS(571),
    [sym_comment] = ACTIONS(13),
  },
  [228] = {
    [anon_sym_SEMI] = ACTIONS(575),
    [sym_comment] = ACTIONS(13),
  },
  [229] = {
    [sym_identifier] = STATE(304),
    [aux_sym_hierarchical_identifier_repeat1] = STATE(185),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [230] = {
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_COMMA] = ACTIONS(577),
    [sym_comment] = ACTIONS(13),
  },
  [231] = {
    [aux_sym_list_of_defparam_assignments_repeat1] = STATE(231),
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_COMMA] = ACTIONS(579),
    [sym_comment] = ACTIONS(13),
  },
  [232] = {
    [sym_binary_operator] = STATE(307),
    [anon_sym_SEMI] = ACTIONS(582),
    [anon_sym_COLON] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(586),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [233] = {
    [anon_sym_SEMI] = ACTIONS(588),
    [anon_sym_COMMA] = ACTIONS(588),
    [sym_comment] = ACTIONS(13),
  },
  [234] = {
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(590),
  },
  [235] = {
    [anon_sym_module] = ACTIONS(223),
    [anon_sym_macromodule] = ACTIONS(223),
    [anon_sym_defparam] = ACTIONS(223),
    [anon_sym_LPAREN_STAR] = ACTIONS(225),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(223),
  },
  [236] = {
    [anon_sym_SEMI] = ACTIONS(592),
    [sym_comment] = ACTIONS(13),
  },
  [237] = {
    [sym_identifier] = STATE(310),
    [sym_module_identifier] = STATE(311),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(594),
  },
  [238] = {
    [anon_sym_endmodule] = ACTIONS(596),
    [anon_sym_COLON] = ACTIONS(598),
    [anon_sym_extern] = ACTIONS(596),
    [anon_sym_module] = ACTIONS(596),
    [anon_sym_macromodule] = ACTIONS(596),
    [anon_sym_defparam] = ACTIONS(596),
    [anon_sym_LPAREN_STAR] = ACTIONS(352),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(596),
  },
  [239] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(260),
    [sym_mintypmax_expression] = STATE(313),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [240] = {
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(600),
  },
  [241] = {
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(314),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_COMMA] = ACTIONS(602),
    [anon_sym_signed] = ACTIONS(602),
    [anon_sym_unsigned] = ACTIONS(602),
    [sym_comment] = ACTIONS(13),
  },
  [243] = {
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_signed] = ACTIONS(139),
    [anon_sym_unsigned] = ACTIONS(139),
    [sym_comment] = ACTIONS(13),
  },
  [244] = {
    [anon_sym_RPAREN] = ACTIONS(604),
    [anon_sym_COMMA] = ACTIONS(604),
    [sym_comment] = ACTIONS(13),
  },
  [245] = {
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_this] = ACTIONS(234),
    [anon_sym_null] = ACTIONS(234),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(236),
    [sym_real_number] = ACTIONS(236),
    [anon_sym_LPAREN_STAR] = ACTIONS(234),
    [sym_comment] = ACTIONS(13),
  },
  [246] = {
    [anon_sym_RPAREN] = ACTIONS(606),
    [anon_sym_COLON] = ACTIONS(606),
    [anon_sym_COMMA] = ACTIONS(606),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(606),
    [anon_sym_RBRACE] = ACTIONS(606),
    [anon_sym_LBRACE] = ACTIONS(606),
    [anon_sym_LPAREN_STAR] = ACTIONS(606),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(606),
  },
  [247] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_variable_lvalue] = STATE(316),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(608),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [248] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(317),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(318),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [249] = {
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(610),
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_RBRACE] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(13),
  },
  [250] = {
    [sym__signing] = STATE(105),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_signed] = ACTIONS(612),
    [anon_sym_unsigned] = ACTIONS(612),
    [sym_comment] = ACTIONS(13),
  },
  [251] = {
    [sym__signing] = STATE(319),
    [sym_packed_dimension] = STATE(320),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(320),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_signed] = ACTIONS(614),
    [anon_sym_unsigned] = ACTIONS(614),
    [sym_comment] = ACTIONS(13),
  },
  [252] = {
    [anon_sym_RPAREN] = ACTIONS(616),
    [sym_comment] = ACTIONS(13),
  },
  [253] = {
    [aux_sym_list_of_parameter_assignments_repeat1] = STATE(323),
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_COMMA] = ACTIONS(620),
    [sym_comment] = ACTIONS(13),
  },
  [254] = {
    [aux_sym_list_of_parameter_assignments_repeat2] = STATE(325),
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_COMMA] = ACTIONS(622),
    [sym_comment] = ACTIONS(13),
  },
  [255] = {
    [sym_assignment_pattern_variable_lvalue] = STATE(326),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [sym_comment] = ACTIONS(13),
  },
  [256] = {
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_COLON] = ACTIONS(624),
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_PLUS_PLUS] = ACTIONS(624),
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_LBRACE] = ACTIONS(624),
    [anon_sym_DASH_DASH] = ACTIONS(624),
    [anon_sym_LPAREN_STAR] = ACTIONS(624),
    [sym_comment] = ACTIONS(13),
  },
  [257] = {
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(610),
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_RBRACE] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(13),
  },
  [258] = {
    [anon_sym_RPAREN] = ACTIONS(628),
    [anon_sym_COLON] = ACTIONS(628),
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_RBRACE] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(628),
    [sym_comment] = ACTIONS(13),
  },
  [259] = {
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_COMMA] = ACTIONS(630),
    [sym_comment] = ACTIONS(13),
  },
  [260] = {
    [anon_sym_RPAREN] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(634),
    [anon_sym_COMMA] = ACTIONS(632),
    [sym_comment] = ACTIONS(13),
  },
  [261] = {
    [sym_inc_or_dec_operator] = STATE(329),
    [sym_attribute_instance] = STATE(330),
    [aux_sym_module_header_repeat1] = STATE(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [262] = {
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_primary] = STATE(332),
    [sym_primary_literal] = STATE(249),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(333),
    [aux_sym_module_header_repeat1] = STATE(333),
    [anon_sym_LPAREN] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_this] = ACTIONS(640),
    [anon_sym_null] = ACTIONS(640),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [263] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_variable_lvalue] = STATE(329),
    [sym_attribute_instance] = STATE(334),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [aux_sym_module_header_repeat1] = STATE(334),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(608),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [264] = {
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(642),
    [sym_comment] = ACTIONS(13),
  },
  [265] = {
    [anon_sym_endmodule] = ACTIONS(644),
    [anon_sym_extern] = ACTIONS(644),
    [anon_sym_module] = ACTIONS(644),
    [anon_sym_macromodule] = ACTIONS(644),
    [anon_sym_defparam] = ACTIONS(644),
    [anon_sym_LPAREN_STAR] = ACTIONS(646),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(644),
  },
  [266] = {
    [aux_sym_module_instantiation_repeat1] = STATE(268),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_COMMA] = ACTIONS(337),
    [sym_comment] = ACTIONS(13),
  },
  [267] = {
    [anon_sym_SEMI] = ACTIONS(650),
    [anon_sym_COMMA] = ACTIONS(650),
    [sym_comment] = ACTIONS(13),
  },
  [268] = {
    [aux_sym_module_instantiation_repeat1] = STATE(268),
    [anon_sym_SEMI] = ACTIONS(650),
    [anon_sym_COMMA] = ACTIONS(652),
    [sym_comment] = ACTIONS(13),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_COMMA] = ACTIONS(655),
    [sym_comment] = ACTIONS(13),
  },
  [270] = {
    [anon_sym_SEMI] = ACTIONS(657),
    [anon_sym_COMMA] = ACTIONS(657),
    [sym_comment] = ACTIONS(13),
  },
  [271] = {
    [sym_identifier] = STATE(56),
    [sym_port_identifier] = STATE(336),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [272] = {
    [sym_attr_spec] = STATE(337),
    [sym_attr_name] = STATE(13),
    [sym_identifier] = STATE(14),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [273] = {
    [anon_sym_RPAREN] = ACTIONS(659),
    [sym_comment] = ACTIONS(13),
  },
  [274] = {
    [aux_sym_list_of_port_connections_repeat2] = STATE(340),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_COMMA] = ACTIONS(663),
    [sym_comment] = ACTIONS(13),
  },
  [275] = {
    [aux_sym_list_of_port_connections_repeat1] = STATE(342),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_COMMA] = ACTIONS(665),
    [sym_comment] = ACTIONS(13),
  },
  [276] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(345),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(346),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [aux_sym_module_header_repeat1] = STATE(346),
    [anon_sym_LPAREN] = ACTIONS(636),
    [anon_sym_DOT_STAR] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_COMMA] = ACTIONS(669),
    [anon_sym_DOT] = ACTIONS(671),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(521),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [277] = {
    [sym_unpacked_dimension] = STATE(277),
    [aux_sym_ansi_port_declaration_repeat1] = STATE(277),
    [anon_sym_LPAREN] = ACTIONS(558),
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_comment] = ACTIONS(13),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_extern] = ACTIONS(529),
    [anon_sym_module] = ACTIONS(529),
    [anon_sym_macromodule] = ACTIONS(529),
    [anon_sym_LPAREN_STAR] = ACTIONS(529),
    [sym_comment] = ACTIONS(13),
  },
  [279] = {
    [sym_identifier] = STATE(175),
    [sym_module_identifier] = STATE(347),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(313),
  },
  [280] = {
    [sym_binary_operator] = STATE(349),
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [281] = {
    [sym_binary_operator] = STATE(349),
    [aux_sym_constant_concatenation_repeat1] = STATE(209),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(398),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [282] = {
    [sym_binary_operator] = STATE(352),
    [aux_sym_constant_expression_repeat1] = STATE(353),
    [anon_sym_COLON] = ACTIONS(677),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [283] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(354),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [284] = {
    [anon_sym_SEMI] = ACTIONS(679),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_COLON] = ACTIONS(679),
    [anon_sym_COMMA] = ACTIONS(679),
    [anon_sym_STAR] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(679),
    [anon_sym_RBRACK] = ACTIONS(679),
    [anon_sym_PLUS] = ACTIONS(679),
    [anon_sym_STAR_STAR] = ACTIONS(679),
    [anon_sym_SLASH] = ACTIONS(681),
    [anon_sym_PERCENT] = ACTIONS(679),
    [anon_sym_EQ_EQ] = ACTIONS(681),
    [anon_sym_BANG_EQ] = ACTIONS(681),
    [anon_sym_LT] = ACTIONS(681),
    [anon_sym_LT_EQ] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(681),
    [anon_sym_GT_EQ] = ACTIONS(679),
    [anon_sym_RBRACE] = ACTIONS(679),
    [anon_sym_LBRACE] = ACTIONS(679),
    [anon_sym_QMARK] = ACTIONS(679),
    [anon_sym_TILDE_CARET] = ACTIONS(679),
    [anon_sym_CARET_TILDE] = ACTIONS(679),
    [anon_sym_DASH] = ACTIONS(681),
    [anon_sym_AMP] = ACTIONS(681),
    [anon_sym_PIPE] = ACTIONS(681),
    [anon_sym_CARET] = ACTIONS(681),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(679),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(679),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(679),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(679),
    [anon_sym_LT_DASH_GT] = ACTIONS(679),
    [anon_sym_GT_GT_GT] = ACTIONS(679),
    [anon_sym_LT_LT_LT] = ACTIONS(679),
    [anon_sym_GT_GT] = ACTIONS(681),
    [anon_sym_LT_LT] = ACTIONS(681),
    [anon_sym_AMP_AMP] = ACTIONS(679),
    [anon_sym_PIPE_PIPE] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(679),
    [sym_comment] = ACTIONS(13),
  },
  [285] = {
    [sym_binary_operator] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [286] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(355),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [287] = {
    [anon_sym_SEMI] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(683),
    [anon_sym_COLON] = ACTIONS(683),
    [anon_sym_COMMA] = ACTIONS(683),
    [anon_sym_STAR] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_RBRACK] = ACTIONS(683),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_STAR_STAR] = ACTIONS(683),
    [anon_sym_SLASH] = ACTIONS(685),
    [anon_sym_PERCENT] = ACTIONS(683),
    [anon_sym_EQ_EQ] = ACTIONS(685),
    [anon_sym_BANG_EQ] = ACTIONS(685),
    [anon_sym_LT] = ACTIONS(685),
    [anon_sym_LT_EQ] = ACTIONS(683),
    [anon_sym_GT] = ACTIONS(685),
    [anon_sym_GT_EQ] = ACTIONS(683),
    [anon_sym_RBRACE] = ACTIONS(683),
    [anon_sym_LBRACE] = ACTIONS(683),
    [anon_sym_QMARK] = ACTIONS(683),
    [anon_sym_TILDE_CARET] = ACTIONS(683),
    [anon_sym_CARET_TILDE] = ACTIONS(683),
    [anon_sym_DASH] = ACTIONS(685),
    [anon_sym_AMP] = ACTIONS(685),
    [anon_sym_PIPE] = ACTIONS(685),
    [anon_sym_CARET] = ACTIONS(685),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(683),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(683),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(683),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(683),
    [anon_sym_LT_DASH_GT] = ACTIONS(683),
    [anon_sym_GT_GT_GT] = ACTIONS(683),
    [anon_sym_LT_LT_LT] = ACTIONS(683),
    [anon_sym_GT_GT] = ACTIONS(685),
    [anon_sym_LT_LT] = ACTIONS(685),
    [anon_sym_AMP_AMP] = ACTIONS(683),
    [anon_sym_PIPE_PIPE] = ACTIONS(683),
    [anon_sym_DASH_GT] = ACTIONS(683),
    [sym_comment] = ACTIONS(13),
  },
  [288] = {
    [aux_sym_constant_concatenation_repeat1] = STATE(288),
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_RBRACE] = ACTIONS(673),
    [sym_comment] = ACTIONS(13),
  },
  [289] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(356),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [290] = {
    [aux_sym_constant_expression_repeat1] = STATE(357),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [291] = {
    [sym_binary_operator] = STATE(151),
    [aux_sym_constant_expression_repeat1] = STATE(358),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [292] = {
    [sym_attribute_instance] = STATE(292),
    [aux_sym_module_header_repeat1] = STATE(292),
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
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(306),
    [sym_real_number] = ACTIONS(306),
    [anon_sym_LPAREN_STAR] = ACTIONS(549),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(96),
  },
  [293] = {
    [sym_binary_operator] = STATE(151),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [294] = {
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_TILDE_PIPE] = ACTIONS(109),
    [anon_sym_TILDE_CARET] = ACTIONS(109),
    [anon_sym_TILDE_AMP] = ACTIONS(109),
    [anon_sym_CARET_TILDE] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(107),
    [sym_real_number] = ACTIONS(107),
    [anon_sym_LPAREN_STAR] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(109),
  },
  [295] = {
    [aux_sym_attribute_instance_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_STAR_RPAREN] = ACTIONS(694),
    [sym_comment] = ACTIONS(13),
  },
  [296] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(360),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(361),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(361),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [297] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(362),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(363),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(363),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [298] = {
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_COMMA] = ACTIONS(696),
    [anon_sym_EQ] = ACTIONS(696),
    [anon_sym_LBRACK] = ACTIONS(696),
    [sym_comment] = ACTIONS(13),
  },
  [299] = {
    [sym_binary_operator] = STATE(297),
    [anon_sym_RPAREN] = ACTIONS(698),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [300] = {
    [sym_binary_operator] = STATE(366),
    [aux_sym_constant_expression_repeat1] = STATE(367),
    [anon_sym_COLON] = ACTIONS(700),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [301] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(368),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [302] = {
    [sym_binary_operator] = STATE(226),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [303] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(369),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [304] = {
    [sym_constant_bit_select] = STATE(183),
    [anon_sym_EQ] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(13),
  },
  [305] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(370),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [306] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(371),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(372),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(372),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [307] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(373),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(374),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(374),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [308] = {
    [anon_sym_endmodule] = ACTIONS(704),
    [sym_comment] = ACTIONS(13),
  },
  [309] = {
    [anon_sym_endmodule] = ACTIONS(706),
    [anon_sym_extern] = ACTIONS(706),
    [anon_sym_module] = ACTIONS(706),
    [anon_sym_macromodule] = ACTIONS(706),
    [anon_sym_defparam] = ACTIONS(706),
    [anon_sym_LPAREN_STAR] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(706),
  },
  [310] = {
    [anon_sym_endmodule] = ACTIONS(708),
    [anon_sym_extern] = ACTIONS(708),
    [anon_sym_module] = ACTIONS(708),
    [anon_sym_macromodule] = ACTIONS(708),
    [anon_sym_defparam] = ACTIONS(708),
    [anon_sym_LPAREN_STAR] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(708),
  },
  [311] = {
    [anon_sym_endmodule] = ACTIONS(710),
    [anon_sym_extern] = ACTIONS(710),
    [anon_sym_module] = ACTIONS(710),
    [anon_sym_macromodule] = ACTIONS(710),
    [anon_sym_defparam] = ACTIONS(710),
    [anon_sym_LPAREN_STAR] = ACTIONS(460),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(710),
  },
  [312] = {
    [sym_identifier] = STATE(310),
    [sym_module_identifier] = STATE(376),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(594),
  },
  [313] = {
    [anon_sym_RPAREN] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
  },
  [314] = {
    [anon_sym_LPAREN] = ACTIONS(714),
    [sym_comment] = ACTIONS(13),
  },
  [315] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_variable_lvalue] = STATE(379),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(608),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [316] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(382),
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RBRACE] = ACTIONS(718),
    [sym_comment] = ACTIONS(13),
  },
  [317] = {
    [sym_concatenation] = STATE(386),
    [aux_sym_concatenation_repeat1] = STATE(387),
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_RBRACE] = ACTIONS(722),
    [anon_sym_LBRACE] = ACTIONS(724),
    [sym_comment] = ACTIONS(13),
  },
  [318] = {
    [sym_inc_or_dec_operator] = STATE(329),
    [sym_attribute_instance] = STATE(330),
    [aux_sym_module_header_repeat1] = STATE(330),
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(389),
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(726),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [319] = {
    [sym_packed_dimension] = STATE(390),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(390),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
  },
  [320] = {
    [sym_packed_dimension] = STATE(391),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(391),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
  },
  [321] = {
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(728),
  },
  [322] = {
    [sym_data_type] = STATE(244),
    [sym_integer_atom_type] = STATE(250),
    [sym_integer_vector_type] = STATE(251),
    [sym_non_integer_type] = STATE(38),
    [sym_ordered_parameter_assignment] = STATE(392),
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_param_expression] = STATE(259),
    [sym_expression] = STATE(260),
    [sym_mintypmax_expression] = STATE(244),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_string] = ACTIONS(49),
    [anon_sym_chandle] = ACTIONS(49),
    [anon_sym_event] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(491),
    [anon_sym_shortint] = ACTIONS(491),
    [anon_sym_int] = ACTIONS(491),
    [anon_sym_longint] = ACTIONS(491),
    [anon_sym_integer] = ACTIONS(491),
    [anon_sym_time] = ACTIONS(491),
    [anon_sym_bit] = ACTIONS(493),
    [anon_sym_logic] = ACTIONS(493),
    [anon_sym_reg] = ACTIONS(493),
    [anon_sym_shortreal] = ACTIONS(57),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [323] = {
    [aux_sym_list_of_parameter_assignments_repeat1] = STATE(393),
    [anon_sym_RPAREN] = ACTIONS(730),
    [anon_sym_COMMA] = ACTIONS(620),
    [sym_comment] = ACTIONS(13),
  },
  [324] = {
    [sym_named_parameter_assignment] = STATE(394),
    [anon_sym_DOT] = ACTIONS(489),
    [sym_comment] = ACTIONS(13),
  },
  [325] = {
    [aux_sym_list_of_parameter_assignments_repeat2] = STATE(395),
    [anon_sym_RPAREN] = ACTIONS(730),
    [anon_sym_COMMA] = ACTIONS(622),
    [sym_comment] = ACTIONS(13),
  },
  [326] = {
    [anon_sym_RPAREN] = ACTIONS(732),
    [anon_sym_COLON] = ACTIONS(732),
    [anon_sym_COMMA] = ACTIONS(732),
    [anon_sym_PLUS_PLUS] = ACTIONS(732),
    [anon_sym_RBRACE] = ACTIONS(732),
    [anon_sym_LBRACE] = ACTIONS(732),
    [anon_sym_DASH_DASH] = ACTIONS(732),
    [anon_sym_LPAREN_STAR] = ACTIONS(732),
    [sym_comment] = ACTIONS(13),
  },
  [327] = {
    [anon_sym_RPAREN] = ACTIONS(734),
    [anon_sym_COLON] = ACTIONS(734),
    [anon_sym_COMMA] = ACTIONS(734),
    [anon_sym_RBRACE] = ACTIONS(734),
    [anon_sym_LBRACE] = ACTIONS(734),
    [sym_comment] = ACTIONS(13),
  },
  [328] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(396),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [329] = {
    [anon_sym_RPAREN] = ACTIONS(736),
    [anon_sym_COLON] = ACTIONS(736),
    [anon_sym_COMMA] = ACTIONS(736),
    [anon_sym_RBRACE] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [sym_comment] = ACTIONS(13),
  },
  [330] = {
    [sym_inc_or_dec_operator] = STATE(397),
    [sym_attribute_instance] = STATE(398),
    [aux_sym_module_header_repeat1] = STATE(398),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [331] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(317),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [332] = {
    [anon_sym_RPAREN] = ACTIONS(738),
    [anon_sym_COLON] = ACTIONS(738),
    [anon_sym_COMMA] = ACTIONS(738),
    [anon_sym_RBRACE] = ACTIONS(738),
    [anon_sym_LBRACE] = ACTIONS(738),
    [sym_comment] = ACTIONS(13),
  },
  [333] = {
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_primary] = STATE(399),
    [sym_primary_literal] = STATE(249),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(400),
    [aux_sym_module_header_repeat1] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_this] = ACTIONS(640),
    [anon_sym_null] = ACTIONS(640),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [334] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_variable_lvalue] = STATE(397),
    [sym_attribute_instance] = STATE(401),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [aux_sym_module_header_repeat1] = STATE(401),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(608),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [335] = {
    [anon_sym_endmodule] = ACTIONS(740),
    [anon_sym_extern] = ACTIONS(740),
    [anon_sym_module] = ACTIONS(740),
    [anon_sym_macromodule] = ACTIONS(740),
    [anon_sym_defparam] = ACTIONS(740),
    [anon_sym_LPAREN_STAR] = ACTIONS(742),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(740),
  },
  [336] = {
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(746),
    [anon_sym_COMMA] = ACTIONS(746),
    [sym_comment] = ACTIONS(13),
  },
  [337] = {
    [aux_sym_attribute_instance_repeat1] = STATE(404),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_STAR_RPAREN] = ACTIONS(748),
    [sym_comment] = ACTIONS(13),
  },
  [338] = {
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_COMMA] = ACTIONS(750),
    [sym_comment] = ACTIONS(13),
  },
  [339] = {
    [sym_ordered_port_connection] = STATE(405),
    [sym_attribute_instance] = STATE(406),
    [aux_sym_module_header_repeat1] = STATE(406),
    [anon_sym_LPAREN_STAR] = ACTIONS(521),
    [sym_comment] = ACTIONS(13),
  },
  [340] = {
    [aux_sym_list_of_port_connections_repeat2] = STATE(407),
    [anon_sym_RPAREN] = ACTIONS(752),
    [anon_sym_COMMA] = ACTIONS(663),
    [sym_comment] = ACTIONS(13),
  },
  [341] = {
    [sym_named_port_connection] = STATE(408),
    [sym_attribute_instance] = STATE(409),
    [aux_sym_module_header_repeat1] = STATE(409),
    [anon_sym_DOT_STAR] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(519),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [342] = {
    [aux_sym_list_of_port_connections_repeat1] = STATE(410),
    [anon_sym_RPAREN] = ACTIONS(752),
    [anon_sym_COMMA] = ACTIONS(665),
    [sym_comment] = ACTIONS(13),
  },
  [343] = {
    [anon_sym_RPAREN] = ACTIONS(746),
    [anon_sym_COMMA] = ACTIONS(746),
    [sym_comment] = ACTIONS(13),
  },
  [344] = {
    [sym_identifier] = STATE(56),
    [sym_port_identifier] = STATE(411),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [345] = {
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_COMMA] = ACTIONS(754),
    [sym_comment] = ACTIONS(13),
  },
  [346] = {
    [sym_attribute_instance] = STATE(346),
    [aux_sym_module_header_repeat1] = STATE(346),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_DOT_STAR] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_this] = ACTIONS(306),
    [anon_sym_null] = ACTIONS(306),
    [anon_sym_TILDE_PIPE] = ACTIONS(96),
    [anon_sym_TILDE_CARET] = ACTIONS(96),
    [anon_sym_TILDE_AMP] = ACTIONS(96),
    [anon_sym_CARET_TILDE] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(306),
    [sym_real_number] = ACTIONS(306),
    [anon_sym_LPAREN_STAR] = ACTIONS(756),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(306),
  },
  [347] = {
    [ts_builtin_sym_end] = ACTIONS(759),
    [anon_sym_extern] = ACTIONS(759),
    [anon_sym_module] = ACTIONS(759),
    [anon_sym_macromodule] = ACTIONS(759),
    [anon_sym_LPAREN_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(13),
  },
  [348] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(412),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(413),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(413),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [349] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(414),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(415),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(415),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [350] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(416),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [351] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(417),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(418),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(418),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [352] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(419),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(420),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(420),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [353] = {
    [aux_sym_constant_expression_repeat1] = STATE(421),
    [anon_sym_COLON] = ACTIONS(677),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [354] = {
    [sym_binary_operator] = STATE(352),
    [aux_sym_constant_expression_repeat1] = STATE(422),
    [anon_sym_COLON] = ACTIONS(677),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [355] = {
    [sym_binary_operator] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [356] = {
    [sym_binary_operator] = STATE(151),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [357] = {
    [aux_sym_constant_expression_repeat1] = STATE(357),
    [anon_sym_COLON] = ACTIONS(765),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [358] = {
    [aux_sym_constant_expression_repeat1] = STATE(357),
    [anon_sym_COLON] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [359] = {
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_TILDE_PIPE] = ACTIONS(225),
    [anon_sym_TILDE_CARET] = ACTIONS(225),
    [anon_sym_TILDE_AMP] = ACTIONS(225),
    [anon_sym_CARET_TILDE] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(223),
    [sym_real_number] = ACTIONS(223),
    [anon_sym_LPAREN_STAR] = ACTIONS(225),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(225),
  },
  [360] = {
    [sym_binary_operator] = STATE(425),
    [aux_sym_constant_expression_repeat1] = STATE(426),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(772),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [361] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(427),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [362] = {
    [sym_binary_operator] = STATE(297),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [363] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(428),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [364] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(429),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [365] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(430),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(431),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(431),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [366] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(432),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(433),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(433),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [367] = {
    [aux_sym_constant_expression_repeat1] = STATE(434),
    [anon_sym_COLON] = ACTIONS(700),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(690),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [368] = {
    [sym_binary_operator] = STATE(366),
    [aux_sym_constant_expression_repeat1] = STATE(435),
    [anon_sym_COLON] = ACTIONS(700),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(690),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [369] = {
    [sym_binary_operator] = STATE(226),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(690),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [370] = {
    [sym_binary_operator] = STATE(151),
    [anon_sym_COLON] = ACTIONS(774),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(258),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [371] = {
    [sym_binary_operator] = STATE(307),
    [aux_sym_constant_expression_repeat1] = STATE(438),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [372] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(439),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [373] = {
    [sym_binary_operator] = STATE(307),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [374] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(440),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [375] = {
    [anon_sym_endmodule] = ACTIONS(776),
    [anon_sym_COLON] = ACTIONS(778),
    [anon_sym_extern] = ACTIONS(776),
    [anon_sym_module] = ACTIONS(776),
    [anon_sym_macromodule] = ACTIONS(776),
    [anon_sym_defparam] = ACTIONS(776),
    [anon_sym_LPAREN_STAR] = ACTIONS(529),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(776),
  },
  [376] = {
    [anon_sym_endmodule] = ACTIONS(776),
    [anon_sym_extern] = ACTIONS(776),
    [anon_sym_module] = ACTIONS(776),
    [anon_sym_macromodule] = ACTIONS(776),
    [anon_sym_defparam] = ACTIONS(776),
    [anon_sym_LPAREN_STAR] = ACTIONS(529),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(776),
  },
  [377] = {
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(780),
    [anon_sym_COMMA] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [sym_comment] = ACTIONS(13),
  },
  [378] = {
    [sym_data_type] = STATE(244),
    [sym_integer_atom_type] = STATE(250),
    [sym_integer_vector_type] = STATE(443),
    [sym_non_integer_type] = STATE(38),
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_param_expression] = STATE(444),
    [sym_expression] = STATE(260),
    [sym_mintypmax_expression] = STATE(244),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(782),
    [anon_sym_string] = ACTIONS(49),
    [anon_sym_chandle] = ACTIONS(49),
    [anon_sym_event] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(491),
    [anon_sym_shortint] = ACTIONS(491),
    [anon_sym_int] = ACTIONS(491),
    [anon_sym_longint] = ACTIONS(491),
    [anon_sym_integer] = ACTIONS(491),
    [anon_sym_time] = ACTIONS(491),
    [anon_sym_bit] = ACTIONS(493),
    [anon_sym_logic] = ACTIONS(493),
    [anon_sym_reg] = ACTIONS(493),
    [anon_sym_shortreal] = ACTIONS(57),
    [anon_sym_real] = ACTIONS(57),
    [anon_sym_realtime] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [379] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(389),
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RBRACE] = ACTIONS(726),
    [sym_comment] = ACTIONS(13),
  },
  [380] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_variable_lvalue] = STATE(445),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(608),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [381] = {
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(784),
    [anon_sym_COMMA] = ACTIONS(784),
    [anon_sym_PLUS_PLUS] = ACTIONS(784),
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_DASH_DASH] = ACTIONS(784),
    [anon_sym_LPAREN_STAR] = ACTIONS(784),
    [sym_comment] = ACTIONS(13),
  },
  [382] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(447),
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RBRACE] = ACTIONS(786),
    [sym_comment] = ACTIONS(13),
  },
  [383] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(448),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [384] = {
    [anon_sym_RPAREN] = ACTIONS(788),
    [anon_sym_COLON] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(788),
    [anon_sym_LBRACK] = ACTIONS(788),
    [anon_sym_RBRACE] = ACTIONS(788),
    [anon_sym_LBRACE] = ACTIONS(788),
    [sym_comment] = ACTIONS(13),
  },
  [385] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(449),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [386] = {
    [anon_sym_RBRACE] = ACTIONS(790),
    [sym_comment] = ACTIONS(13),
  },
  [387] = {
    [aux_sym_concatenation_repeat1] = STATE(452),
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_RBRACE] = ACTIONS(792),
    [sym_comment] = ACTIONS(13),
  },
  [388] = {
    [anon_sym_RPAREN] = ACTIONS(794),
    [anon_sym_COLON] = ACTIONS(794),
    [anon_sym_COMMA] = ACTIONS(794),
    [anon_sym_PLUS_PLUS] = ACTIONS(794),
    [anon_sym_RBRACE] = ACTIONS(794),
    [anon_sym_LBRACE] = ACTIONS(794),
    [anon_sym_DASH_DASH] = ACTIONS(794),
    [anon_sym_LPAREN_STAR] = ACTIONS(794),
    [sym_comment] = ACTIONS(13),
  },
  [389] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(447),
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RBRACE] = ACTIONS(796),
    [sym_comment] = ACTIONS(13),
  },
  [390] = {
    [sym_packed_dimension] = STATE(391),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(391),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
  },
  [391] = {
    [sym_packed_dimension] = STATE(391),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(391),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
  },
  [392] = {
    [anon_sym_RPAREN] = ACTIONS(798),
    [anon_sym_COMMA] = ACTIONS(798),
    [sym_comment] = ACTIONS(13),
  },
  [393] = {
    [aux_sym_list_of_parameter_assignments_repeat1] = STATE(393),
    [anon_sym_RPAREN] = ACTIONS(798),
    [anon_sym_COMMA] = ACTIONS(800),
    [sym_comment] = ACTIONS(13),
  },
  [394] = {
    [anon_sym_RPAREN] = ACTIONS(803),
    [anon_sym_COMMA] = ACTIONS(803),
    [sym_comment] = ACTIONS(13),
  },
  [395] = {
    [aux_sym_list_of_parameter_assignments_repeat2] = STATE(395),
    [anon_sym_RPAREN] = ACTIONS(803),
    [anon_sym_COMMA] = ACTIONS(805),
    [sym_comment] = ACTIONS(13),
  },
  [396] = {
    [anon_sym_COLON] = ACTIONS(808),
    [sym_comment] = ACTIONS(13),
  },
  [397] = {
    [anon_sym_RPAREN] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(810),
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_RBRACE] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(810),
    [sym_comment] = ACTIONS(13),
  },
  [398] = {
    [sym_attribute_instance] = STATE(398),
    [aux_sym_module_header_repeat1] = STATE(398),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(13),
  },
  [399] = {
    [anon_sym_RPAREN] = ACTIONS(812),
    [anon_sym_COLON] = ACTIONS(812),
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RBRACE] = ACTIONS(812),
    [anon_sym_LBRACE] = ACTIONS(812),
    [sym_comment] = ACTIONS(13),
  },
  [400] = {
    [sym_attribute_instance] = STATE(400),
    [aux_sym_module_header_repeat1] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_this] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(96),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(306),
    [sym_real_number] = ACTIONS(306),
    [anon_sym_LPAREN_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(13),
  },
  [401] = {
    [sym_attribute_instance] = STATE(401),
    [aux_sym_module_header_repeat1] = STATE(401),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(549),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(96),
  },
  [402] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(456),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(814),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [403] = {
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_DOT_STAR] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_PLUS_PLUS] = ACTIONS(109),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_this] = ACTIONS(107),
    [anon_sym_null] = ACTIONS(107),
    [anon_sym_TILDE_PIPE] = ACTIONS(109),
    [anon_sym_TILDE_CARET] = ACTIONS(109),
    [anon_sym_TILDE_AMP] = ACTIONS(109),
    [anon_sym_CARET_TILDE] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_DASH_DASH] = ACTIONS(109),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(107),
    [sym_real_number] = ACTIONS(107),
    [anon_sym_LPAREN_STAR] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(107),
  },
  [404] = {
    [aux_sym_attribute_instance_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_STAR_RPAREN] = ACTIONS(816),
    [sym_comment] = ACTIONS(13),
  },
  [405] = {
    [anon_sym_RPAREN] = ACTIONS(818),
    [anon_sym_COMMA] = ACTIONS(818),
    [sym_comment] = ACTIONS(13),
  },
  [406] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(345),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(458),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [aux_sym_module_header_repeat1] = STATE(458),
    [anon_sym_LPAREN] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_COMMA] = ACTIONS(669),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(521),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [407] = {
    [aux_sym_list_of_port_connections_repeat2] = STATE(407),
    [anon_sym_RPAREN] = ACTIONS(818),
    [anon_sym_COMMA] = ACTIONS(820),
    [sym_comment] = ACTIONS(13),
  },
  [408] = {
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(823),
    [sym_comment] = ACTIONS(13),
  },
  [409] = {
    [sym_attribute_instance] = STATE(459),
    [aux_sym_module_header_repeat1] = STATE(459),
    [anon_sym_DOT_STAR] = ACTIONS(667),
    [anon_sym_DOT] = ACTIONS(671),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [410] = {
    [aux_sym_list_of_port_connections_repeat1] = STATE(410),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(825),
    [sym_comment] = ACTIONS(13),
  },
  [411] = {
    [anon_sym_LPAREN] = ACTIONS(828),
    [anon_sym_RPAREN] = ACTIONS(830),
    [anon_sym_COMMA] = ACTIONS(830),
    [sym_comment] = ACTIONS(13),
  },
  [412] = {
    [sym_binary_operator] = STATE(463),
    [aux_sym_constant_expression_repeat1] = STATE(464),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [413] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(465),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [414] = {
    [sym_binary_operator] = STATE(349),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [415] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(466),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [416] = {
    [sym_binary_operator] = STATE(352),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_RBRACE] = ACTIONS(761),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [417] = {
    [sym_binary_operator] = STATE(352),
    [aux_sym_constant_expression_repeat1] = STATE(467),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [418] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(468),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [419] = {
    [sym_binary_operator] = STATE(352),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [420] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(469),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [421] = {
    [aux_sym_constant_expression_repeat1] = STATE(421),
    [anon_sym_COLON] = ACTIONS(834),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_RBRACE] = ACTIONS(761),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [422] = {
    [aux_sym_constant_expression_repeat1] = STATE(421),
    [anon_sym_COLON] = ACTIONS(677),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_LBRACE] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [423] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(470),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [424] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(471),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(472),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(472),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [425] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(473),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(474),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(474),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [426] = {
    [aux_sym_constant_expression_repeat1] = STATE(475),
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(772),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [427] = {
    [sym_binary_operator] = STATE(425),
    [aux_sym_constant_expression_repeat1] = STATE(476),
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(772),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [428] = {
    [sym_binary_operator] = STATE(297),
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [429] = {
    [sym_binary_operator] = STATE(366),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_RBRACK] = ACTIONS(761),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [430] = {
    [sym_binary_operator] = STATE(366),
    [aux_sym_constant_expression_repeat1] = STATE(477),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [431] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(478),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [432] = {
    [sym_binary_operator] = STATE(366),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [433] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(479),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [434] = {
    [aux_sym_constant_expression_repeat1] = STATE(434),
    [anon_sym_COLON] = ACTIONS(837),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_RBRACK] = ACTIONS(761),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [435] = {
    [aux_sym_constant_expression_repeat1] = STATE(434),
    [anon_sym_COLON] = ACTIONS(700),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(768),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [436] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(480),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [437] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(481),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [438] = {
    [aux_sym_constant_expression_repeat1] = STATE(482),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [439] = {
    [sym_binary_operator] = STATE(307),
    [aux_sym_constant_expression_repeat1] = STATE(483),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [440] = {
    [sym_binary_operator] = STATE(307),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [441] = {
    [sym_identifier] = STATE(310),
    [sym_module_identifier] = STATE(484),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(594),
  },
  [442] = {
    [anon_sym_RPAREN] = ACTIONS(840),
    [anon_sym_COMMA] = ACTIONS(840),
    [sym_comment] = ACTIONS(13),
  },
  [443] = {
    [sym__signing] = STATE(485),
    [sym_packed_dimension] = STATE(486),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(486),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_signed] = ACTIONS(842),
    [anon_sym_unsigned] = ACTIONS(842),
    [sym_comment] = ACTIONS(13),
  },
  [444] = {
    [anon_sym_RPAREN] = ACTIONS(844),
    [sym_comment] = ACTIONS(13),
  },
  [445] = {
    [anon_sym_COMMA] = ACTIONS(846),
    [anon_sym_RBRACE] = ACTIONS(846),
    [sym_comment] = ACTIONS(13),
  },
  [446] = {
    [anon_sym_RPAREN] = ACTIONS(848),
    [anon_sym_COLON] = ACTIONS(848),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_PLUS_PLUS] = ACTIONS(848),
    [anon_sym_RBRACE] = ACTIONS(848),
    [anon_sym_LBRACE] = ACTIONS(848),
    [anon_sym_DASH_DASH] = ACTIONS(848),
    [anon_sym_LPAREN_STAR] = ACTIONS(848),
    [sym_comment] = ACTIONS(13),
  },
  [447] = {
    [aux_sym_assignment_pattern_variable_lvalue_repeat1] = STATE(447),
    [anon_sym_COMMA] = ACTIONS(850),
    [anon_sym_RBRACE] = ACTIONS(846),
    [sym_comment] = ACTIONS(13),
  },
  [448] = {
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(853),
    [sym_comment] = ACTIONS(13),
  },
  [449] = {
    [aux_sym_concatenation_repeat1] = STATE(387),
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_RBRACE] = ACTIONS(722),
    [sym_comment] = ACTIONS(13),
  },
  [450] = {
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_COLON] = ACTIONS(855),
    [anon_sym_COMMA] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [sym_comment] = ACTIONS(13),
  },
  [451] = {
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_COLON] = ACTIONS(857),
    [anon_sym_COMMA] = ACTIONS(857),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_LBRACE] = ACTIONS(857),
    [sym_comment] = ACTIONS(13),
  },
  [452] = {
    [aux_sym_concatenation_repeat1] = STATE(452),
    [anon_sym_COMMA] = ACTIONS(859),
    [anon_sym_RBRACE] = ACTIONS(853),
    [sym_comment] = ACTIONS(13),
  },
  [453] = {
    [anon_sym_RPAREN] = ACTIONS(862),
    [anon_sym_COLON] = ACTIONS(862),
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_PLUS_PLUS] = ACTIONS(862),
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_DASH_DASH] = ACTIONS(862),
    [anon_sym_LPAREN_STAR] = ACTIONS(862),
    [sym_comment] = ACTIONS(13),
  },
  [454] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(488),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [455] = {
    [anon_sym_RPAREN] = ACTIONS(864),
    [anon_sym_COMMA] = ACTIONS(864),
    [sym_comment] = ACTIONS(13),
  },
  [456] = {
    [anon_sym_RPAREN] = ACTIONS(866),
    [sym_comment] = ACTIONS(13),
  },
  [457] = {
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_DOT_STAR] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PLUS] = ACTIONS(225),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_this] = ACTIONS(223),
    [anon_sym_null] = ACTIONS(223),
    [anon_sym_TILDE_PIPE] = ACTIONS(225),
    [anon_sym_TILDE_CARET] = ACTIONS(225),
    [anon_sym_TILDE_AMP] = ACTIONS(225),
    [anon_sym_CARET_TILDE] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_BANG] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_DASH_DASH] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(223),
    [sym_real_number] = ACTIONS(223),
    [anon_sym_LPAREN_STAR] = ACTIONS(225),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(223),
  },
  [458] = {
    [sym_attribute_instance] = STATE(458),
    [aux_sym_module_header_repeat1] = STATE(458),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_this] = ACTIONS(306),
    [anon_sym_null] = ACTIONS(306),
    [anon_sym_TILDE_PIPE] = ACTIONS(96),
    [anon_sym_TILDE_CARET] = ACTIONS(96),
    [anon_sym_TILDE_AMP] = ACTIONS(96),
    [anon_sym_CARET_TILDE] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(306),
    [sym_real_number] = ACTIONS(306),
    [anon_sym_LPAREN_STAR] = ACTIONS(756),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(306),
  },
  [459] = {
    [sym_attribute_instance] = STATE(459),
    [aux_sym_module_header_repeat1] = STATE(459),
    [anon_sym_DOT_STAR] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_LPAREN_STAR] = ACTIONS(98),
    [sym_comment] = ACTIONS(13),
  },
  [460] = {
    [sym_assignment_pattern_expression_type] = STATE(255),
    [sym_assignment_pattern_variable_lvalue] = STATE(256),
    [sym_concatenation] = STATE(257),
    [sym_multiple_concatenation] = STATE(257),
    [sym_inc_or_dec_expression] = STATE(258),
    [sym_expression] = STATE(490),
    [sym_primary] = STATE(258),
    [sym_primary_literal] = STATE(249),
    [sym_variable_lvalue] = STATE(261),
    [sym_unary_operator] = STATE(262),
    [sym_inc_or_dec_operator] = STATE(263),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(866),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_this] = ACTIONS(505),
    [anon_sym_null] = ACTIONS(505),
    [anon_sym_TILDE_PIPE] = ACTIONS(507),
    [anon_sym_TILDE_CARET] = ACTIONS(507),
    [anon_sym_TILDE_AMP] = ACTIONS(507),
    [anon_sym_CARET_TILDE] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(25),
  },
  [461] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(491),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [462] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(492),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(493),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(493),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [463] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(494),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(495),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(495),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [464] = {
    [aux_sym_constant_expression_repeat1] = STATE(496),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [465] = {
    [sym_binary_operator] = STATE(463),
    [aux_sym_constant_expression_repeat1] = STATE(497),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [466] = {
    [sym_binary_operator] = STATE(349),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [467] = {
    [aux_sym_constant_expression_repeat1] = STATE(421),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [468] = {
    [sym_binary_operator] = STATE(352),
    [aux_sym_constant_expression_repeat1] = STATE(498),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [469] = {
    [sym_binary_operator] = STATE(352),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [470] = {
    [sym_binary_operator] = STATE(425),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [471] = {
    [sym_binary_operator] = STATE(425),
    [aux_sym_constant_expression_repeat1] = STATE(499),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [472] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(500),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [473] = {
    [sym_binary_operator] = STATE(425),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [474] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(501),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [475] = {
    [aux_sym_constant_expression_repeat1] = STATE(475),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(868),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [476] = {
    [aux_sym_constant_expression_repeat1] = STATE(475),
    [anon_sym_RPAREN] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(772),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [477] = {
    [aux_sym_constant_expression_repeat1] = STATE(434),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(690),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [478] = {
    [sym_binary_operator] = STATE(366),
    [aux_sym_constant_expression_repeat1] = STATE(502),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(690),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [479] = {
    [sym_binary_operator] = STATE(366),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(690),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [480] = {
    [sym_binary_operator] = STATE(504),
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_COMMA] = ACTIONS(871),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(873),
    [anon_sym_TILDE_CARET] = ACTIONS(256),
    [anon_sym_CARET_TILDE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(256),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(256),
    [anon_sym_LT_DASH_GT] = ACTIONS(256),
    [anon_sym_GT_GT_GT] = ACTIONS(256),
    [anon_sym_LT_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
  },
  [481] = {
    [sym_binary_operator] = STATE(307),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [482] = {
    [aux_sym_constant_expression_repeat1] = STATE(482),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(875),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [483] = {
    [aux_sym_constant_expression_repeat1] = STATE(482),
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(768),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [484] = {
    [anon_sym_endmodule] = ACTIONS(878),
    [anon_sym_extern] = ACTIONS(878),
    [anon_sym_module] = ACTIONS(878),
    [anon_sym_macromodule] = ACTIONS(878),
    [anon_sym_defparam] = ACTIONS(878),
    [anon_sym_LPAREN_STAR] = ACTIONS(759),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(878),
  },
  [485] = {
    [sym_packed_dimension] = STATE(505),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(505),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
  },
  [486] = {
    [sym_packed_dimension] = STATE(506),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(506),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
  },
  [487] = {
    [anon_sym_RPAREN] = ACTIONS(880),
    [anon_sym_COMMA] = ACTIONS(880),
    [sym_comment] = ACTIONS(13),
  },
  [488] = {
    [anon_sym_RPAREN] = ACTIONS(882),
    [anon_sym_COMMA] = ACTIONS(882),
    [sym_comment] = ACTIONS(13),
  },
  [489] = {
    [anon_sym_RPAREN] = ACTIONS(884),
    [anon_sym_COMMA] = ACTIONS(884),
    [sym_comment] = ACTIONS(13),
  },
  [490] = {
    [anon_sym_RPAREN] = ACTIONS(886),
    [sym_comment] = ACTIONS(13),
  },
  [491] = {
    [sym_binary_operator] = STATE(463),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_RBRACE] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [492] = {
    [sym_binary_operator] = STATE(463),
    [aux_sym_constant_expression_repeat1] = STATE(508),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [493] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(509),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [494] = {
    [sym_binary_operator] = STATE(463),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [495] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(510),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [496] = {
    [aux_sym_constant_expression_repeat1] = STATE(496),
    [anon_sym_COLON] = ACTIONS(888),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(763),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_STAR_STAR] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(763),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(763),
    [anon_sym_BANG_EQ] = ACTIONS(763),
    [anon_sym_LT] = ACTIONS(763),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_GT_EQ] = ACTIONS(761),
    [anon_sym_RBRACE] = ACTIONS(761),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_TILDE_CARET] = ACTIONS(761),
    [anon_sym_CARET_TILDE] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_CARET] = ACTIONS(763),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(761),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(761),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(761),
    [anon_sym_LT_DASH_GT] = ACTIONS(761),
    [anon_sym_GT_GT_GT] = ACTIONS(761),
    [anon_sym_LT_LT_LT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(763),
    [anon_sym_LT_LT] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
  },
  [497] = {
    [aux_sym_constant_expression_repeat1] = STATE(496),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [498] = {
    [aux_sym_constant_expression_repeat1] = STATE(421),
    [anon_sym_COLON] = ACTIONS(768),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_LBRACE] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [499] = {
    [aux_sym_constant_expression_repeat1] = STATE(475),
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [500] = {
    [sym_binary_operator] = STATE(425),
    [aux_sym_constant_expression_repeat1] = STATE(511),
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [501] = {
    [sym_binary_operator] = STATE(425),
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [502] = {
    [aux_sym_constant_expression_repeat1] = STATE(434),
    [anon_sym_COLON] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(768),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [503] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(512),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(513),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(513),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [504] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(514),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(515),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(515),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [505] = {
    [sym_packed_dimension] = STATE(506),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(506),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
  },
  [506] = {
    [sym_packed_dimension] = STATE(506),
    [sym_unsized_dimension] = STATE(55),
    [aux_sym_data_type_repeat1] = STATE(506),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
  },
  [507] = {
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_COMMA] = ACTIONS(891),
    [sym_comment] = ACTIONS(13),
  },
  [508] = {
    [aux_sym_constant_expression_repeat1] = STATE(496),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [509] = {
    [sym_binary_operator] = STATE(463),
    [aux_sym_constant_expression_repeat1] = STATE(516),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [510] = {
    [sym_binary_operator] = STATE(463),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [511] = {
    [aux_sym_constant_expression_repeat1] = STATE(475),
    [anon_sym_RPAREN] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(768),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [512] = {
    [sym_binary_operator] = STATE(307),
    [aux_sym_constant_expression_repeat1] = STATE(517),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(893),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [513] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(518),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [514] = {
    [sym_binary_operator] = STATE(504),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_STAR_STAR] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_LT_EQ] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_EQ] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_TILDE_CARET] = ACTIONS(543),
    [anon_sym_CARET_TILDE] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(543),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(543),
    [anon_sym_LT_DASH_GT] = ACTIONS(543),
    [anon_sym_GT_GT_GT] = ACTIONS(543),
    [anon_sym_LT_LT_LT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(543),
    [sym_comment] = ACTIONS(13),
  },
  [515] = {
    [sym_constant_concatenation] = STATE(87),
    [sym_constant_multiple_concatenation] = STATE(87),
    [sym_constant_expression] = STATE(519),
    [sym_constant_primary] = STATE(90),
    [sym_primary_literal] = STATE(91),
    [sym_unary_operator] = STATE(92),
    [sym_number] = STATE(93),
    [sym_integral_number] = STATE(86),
    [sym_attribute_instance] = STATE(292),
    [sym_identifier] = STATE(94),
    [sym_parameter_identifier] = STATE(95),
    [sym_ps_parameter_identifier] = STATE(96),
    [aux_sym_module_header_repeat1] = STATE(292),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_TILDE_PIPE] = ACTIONS(127),
    [anon_sym_TILDE_CARET] = ACTIONS(127),
    [anon_sym_TILDE_AMP] = ACTIONS(127),
    [anon_sym_CARET_TILDE] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(133),
    [sym_real_number] = ACTIONS(135),
    [anon_sym_LPAREN_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(13),
    [sym_simple_identifier] = ACTIONS(17),
  },
  [516] = {
    [aux_sym_constant_expression_repeat1] = STATE(496),
    [anon_sym_COLON] = ACTIONS(768),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
  },
  [517] = {
    [aux_sym_constant_expression_repeat1] = STATE(482),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(893),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [518] = {
    [sym_binary_operator] = STATE(307),
    [aux_sym_constant_expression_repeat1] = STATE(520),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_COLON] = ACTIONS(893),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [519] = {
    [sym_binary_operator] = STATE(504),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(692),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_STAR_STAR] = ACTIONS(690),
    [anon_sym_SLASH] = ACTIONS(692),
    [anon_sym_PERCENT] = ACTIONS(690),
    [anon_sym_EQ_EQ] = ACTIONS(692),
    [anon_sym_BANG_EQ] = ACTIONS(692),
    [anon_sym_LT] = ACTIONS(692),
    [anon_sym_LT_EQ] = ACTIONS(690),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_GT_EQ] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_TILDE_CARET] = ACTIONS(690),
    [anon_sym_CARET_TILDE] = ACTIONS(690),
    [anon_sym_DASH] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_CARET] = ACTIONS(692),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(690),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(690),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(690),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(690),
    [anon_sym_LT_DASH_GT] = ACTIONS(690),
    [anon_sym_GT_GT_GT] = ACTIONS(690),
    [anon_sym_LT_LT_LT] = ACTIONS(690),
    [anon_sym_GT_GT] = ACTIONS(692),
    [anon_sym_LT_LT] = ACTIONS(692),
    [anon_sym_AMP_AMP] = ACTIONS(690),
    [anon_sym_PIPE_PIPE] = ACTIONS(690),
    [anon_sym_DASH_GT] = ACTIONS(690),
    [sym_comment] = ACTIONS(13),
  },
  [520] = {
    [aux_sym_constant_expression_repeat1] = STATE(482),
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(893),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_STAR_STAR] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_EQ_EQ] = ACTIONS(770),
    [anon_sym_BANG_EQ] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_LT_EQ] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_GT_EQ] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_TILDE_CARET] = ACTIONS(768),
    [anon_sym_CARET_TILDE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(768),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(768),
    [anon_sym_EQ_EQ_QMARK] = ACTIONS(768),
    [anon_sym_BANG_EQ_QMARK] = ACTIONS(768),
    [anon_sym_LT_DASH_GT] = ACTIONS(768),
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [anon_sym_LT_LT_LT] = ACTIONS(768),
    [anon_sym_GT_GT] = ACTIONS(770),
    [anon_sym_LT_LT] = ACTIONS(770),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_DASH_GT] = ACTIONS(768),
    [sym_comment] = ACTIONS(13),
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
  [13] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = false}, REDUCE(sym_module_keyword, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = true}, SHIFT(15),
  [23] = {.count = 1, .reusable = false}, SHIFT(20),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(27),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(31),
  [35] = {.count = 1, .reusable = true}, SHIFT(32),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_attr_spec, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(34),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_attr_name, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(35),
  [45] = {.count = 1, .reusable = true}, SHIFT(36),
  [47] = {.count = 1, .reusable = false}, SHIFT(37),
  [49] = {.count = 1, .reusable = false}, SHIFT(38),
  [51] = {.count = 1, .reusable = true}, SHIFT(39),
  [53] = {.count = 1, .reusable = false}, SHIFT(40),
  [55] = {.count = 1, .reusable = false}, SHIFT(41),
  [57] = {.count = 1, .reusable = false}, SHIFT(42),
  [59] = {.count = 1, .reusable = false}, SHIFT(43),
  [61] = {.count = 1, .reusable = false}, SHIFT(54),
  [63] = {.count = 1, .reusable = false}, SHIFT(60),
  [65] = {.count = 1, .reusable = false}, SHIFT(61),
  [67] = {.count = 1, .reusable = false}, SHIFT(3),
  [69] = {.count = 1, .reusable = false}, SHIFT(62),
  [71] = {.count = 1, .reusable = true}, SHIFT(63),
  [73] = {.count = 1, .reusable = true}, SHIFT(70),
  [75] = {.count = 1, .reusable = true}, SHIFT(71),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_lifetime, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_module_identifier, 1, .alias_sequence_id = 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(73),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2), SHIFT_REPEAT(4),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 3),
  [103] = {.count = 1, .reusable = true}, SHIFT(76),
  [105] = {.count = 1, .reusable = true}, SHIFT(77),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_instance, 3),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_instance, 3),
  [111] = {.count = 1, .reusable = true}, SHIFT(79),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_attr_spec, 2),
  [115] = {.count = 1, .reusable = true}, SHIFT(81),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_ports, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_port_direction, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_port_direction, 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_data_type, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(82),
  [127] = {.count = 1, .reusable = true}, SHIFT(83),
  [129] = {.count = 1, .reusable = true}, SHIFT(84),
  [131] = {.count = 1, .reusable = false}, SHIFT(83),
  [133] = {.count = 1, .reusable = false}, SHIFT(85),
  [135] = {.count = 1, .reusable = false}, SHIFT(86),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_integer_atom_type, 1),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_integer_vector_type, 1),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_integer_vector_type, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_non_integer_type, 1),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_net_type, 1),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_net_type, 1),
  [149] = {.count = 1, .reusable = true}, SHIFT(97),
  [151] = {.count = 1, .reusable = true}, SHIFT(98),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [155] = {.count = 1, .reusable = true}, SHIFT(38),
  [157] = {.count = 1, .reusable = true}, SHIFT(40),
  [159] = {.count = 1, .reusable = true}, SHIFT(41),
  [161] = {.count = 1, .reusable = true}, SHIFT(42),
  [163] = {.count = 1, .reusable = true}, SHIFT(43),
  [165] = {.count = 1, .reusable = true}, SHIFT(54),
  [167] = {.count = 1, .reusable = true}, SHIFT(102),
  [169] = {.count = 1, .reusable = true}, SHIFT(103),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_net_port_type, 1),
  [173] = {.count = 1, .reusable = false}, SHIFT(105),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_data_type, 1),
  [177] = {.count = 1, .reusable = false}, SHIFT(106),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_net_port_header, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_packed_dimension, 1),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_port_identifier, 1, .alias_sequence_id = 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_port_reference, 1),
  [187] = {.count = 1, .reusable = true}, SHIFT(110),
  [189] = {.count = 1, .reusable = true}, SHIFT(111),
  [191] = {.count = 1, .reusable = true}, SHIFT(37),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_data_type, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(118),
  [197] = {.count = 1, .reusable = true}, SHIFT(120),
  [199] = {.count = 1, .reusable = true}, SHIFT(128),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_module_or_generate_item, 1),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_module_or_generate_item, 1),
  [205] = {.count = 1, .reusable = true}, SHIFT(131),
  [207] = {.count = 1, .reusable = false}, SHIFT(139),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_module_nonansi_header, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_module_nonansi_header, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_module_ansi_header, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_module_ansi_header, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 3),
  [219] = {.count = 1, .reusable = true}, SHIFT(143),
  [221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_instance_repeat1, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_instance, 4),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_instance, 4),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_instance_repeat1, 2), SHIFT_REPEAT(31),
  [230] = {.count = 1, .reusable = true}, SHIFT(145),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_unsized_dimension, 2),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 1),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 1),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_integral_number, 1),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_integral_number, 1),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_constant_primary, 1),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_constant_primary, 1),
  [250] = {.count = 1, .reusable = true}, SHIFT(147),
  [252] = {.count = 1, .reusable = true}, SHIFT(148),
  [254] = {.count = 1, .reusable = false}, SHIFT(149),
  [256] = {.count = 1, .reusable = true}, SHIFT(149),
  [258] = {.count = 1, .reusable = true}, SHIFT(150),
  [260] = {.count = 1, .reusable = true}, SHIFT(152),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 1),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 1),
  [266] = {.count = 1, .reusable = true}, SHIFT(153),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_primary_literal, 1),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_primary_literal, 1),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_identifier, 1, .alias_sequence_id = 3),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_ps_parameter_identifier, 1),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_ports, 3),
  [278] = {.count = 1, .reusable = true}, SHIFT(157),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_net_port_header, 2),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_ansi_port_declaration, 2),
  [284] = {.count = 1, .reusable = true}, SHIFT(159),
  [286] = {.count = 1, .reusable = true}, SHIFT(160),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_declarations, 3),
  [290] = {.count = 1, .reusable = true}, SHIFT(164),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_data_type, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_net_port_type, 2),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_data_type, 2),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_constant_select, 1),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_constant_select, 1),
  [302] = {.count = 1, .reusable = true}, SHIFT(170),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_port_reference, 2),
  [306] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_header_repeat1, 2),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_type_repeat1, 2), SHIFT_REPEAT(39),
  [311] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_type_repeat1, 2),
  [313] = {.count = 1, .reusable = true}, SHIFT(174),
  [315] = {.count = 1, .reusable = true}, SHIFT(178),
  [317] = {.count = 1, .reusable = true}, SHIFT(179),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_defparam_assignments, 1),
  [321] = {.count = 1, .reusable = true}, SHIFT(180),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_parameter_identifier, 1),
  [325] = {.count = 1, .reusable = true}, SHIFT(182),
  [327] = {.count = 1, .reusable = true}, SHIFT(186),
  [329] = {.count = 1, .reusable = true}, SHIFT(188),
  [331] = {.count = 1, .reusable = false}, SHIFT(189),
  [333] = {.count = 1, .reusable = true}, SHIFT(192),
  [335] = {.count = 1, .reusable = true}, SHIFT(194),
  [337] = {.count = 1, .reusable = true}, SHIFT(195),
  [339] = {.count = 1, .reusable = true}, SHIFT(197),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_instance_identifier, 1, .alias_sequence_id = 4),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_name_of_instance, 1),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_module_or_generate_item, 2),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_module_or_generate_item, 2),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2), SHIFT_REPEAT(63),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 4),
  [354] = {.count = 1, .reusable = true}, SHIFT(199),
  [356] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [358] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(61),
  [361] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(3),
  [364] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(62),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(63),
  [370] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(11),
  [373] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat2, 2),
  [375] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat2, 2), SHIFT_REPEAT(61),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat2, 2), SHIFT_REPEAT(3),
  [381] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat2, 2), SHIFT_REPEAT(62),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_declaration_repeat2, 2), SHIFT_REPEAT(63),
  [387] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_declaration_repeat2, 2), SHIFT_REPEAT(11),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 4),
  [392] = {.count = 1, .reusable = true}, SHIFT(200),
  [394] = {.count = 1, .reusable = true}, SHIFT(202),
  [396] = {.count = 1, .reusable = true}, SHIFT(203),
  [398] = {.count = 1, .reusable = true}, SHIFT(204),
  [400] = {.count = 1, .reusable = true}, SHIFT(205),
  [402] = {.count = 1, .reusable = true}, SHIFT(206),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_constant_primary, 2),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_constant_primary, 2),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 1),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 1),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_packed_dimension, 3),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 2),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 2),
  [418] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_ports_repeat1, 2),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_ports, 4),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_ports_repeat1, 2), SHIFT_REPEAT(98),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_ansi_port_declaration, 3),
  [427] = {.count = 1, .reusable = true}, SHIFT(220),
  [429] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_port_declarations_repeat1, 2),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_declarations, 4),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_port_declarations_repeat1, 2), SHIFT_REPEAT(103),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_data_type, 3),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_member_identifier, 1, .alias_sequence_id = 5),
  [440] = {.count = 1, .reusable = true}, REDUCE(aux_sym_constant_select_repeat1, 2),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_select_repeat1, 2), SHIFT_REPEAT(111),
  [445] = {.count = 1, .reusable = true}, SHIFT(224),
  [447] = {.count = 1, .reusable = true}, SHIFT(225),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_constant_select, 2),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_constant_select, 2),
  [453] = {.count = 1, .reusable = true}, SHIFT(227),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_select_repeat1, 2), SHIFT_REPEAT(110),
  [458] = {.count = 1, .reusable = true}, SHIFT(228),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 5),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 3),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_override, 3),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_override, 3),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_defparam_assignments, 2),
  [470] = {.count = 1, .reusable = true}, SHIFT(234),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_identifier, 2),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hierarchical_identifier_repeat1, 2), SHIFT_REPEAT(11),
  [477] = {.count = 1, .reusable = true}, SHIFT(235),
  [479] = {.count = 1, .reusable = true}, SHIFT(236),
  [481] = {.count = 1, .reusable = true}, SHIFT(237),
  [483] = {.count = 1, .reusable = false}, SHIFT(238),
  [485] = {.count = 1, .reusable = true}, SHIFT(239),
  [487] = {.count = 1, .reusable = true}, SHIFT(240),
  [489] = {.count = 1, .reusable = true}, SHIFT(241),
  [491] = {.count = 1, .reusable = false}, SHIFT(242),
  [493] = {.count = 1, .reusable = false}, SHIFT(243),
  [495] = {.count = 1, .reusable = true}, SHIFT(244),
  [497] = {.count = 1, .reusable = false}, SHIFT(245),
  [499] = {.count = 1, .reusable = true}, SHIFT(246),
  [501] = {.count = 1, .reusable = true}, SHIFT(247),
  [503] = {.count = 1, .reusable = true}, SHIFT(248),
  [505] = {.count = 1, .reusable = false}, SHIFT(249),
  [507] = {.count = 1, .reusable = true}, SHIFT(245),
  [509] = {.count = 1, .reusable = true}, SHIFT(265),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_module_instantiation, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_module_instantiation, 3),
  [515] = {.count = 1, .reusable = true}, SHIFT(269),
  [517] = {.count = 1, .reusable = true}, SHIFT(270),
  [519] = {.count = 1, .reusable = false}, SHIFT(271),
  [521] = {.count = 1, .reusable = true}, SHIFT(272),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_name_of_instance, 2),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_port_list, 3),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 5),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 6),
  [531] = {.count = 1, .reusable = true}, SHIFT(279),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_constant_concatenation, 3),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_constant_concatenation, 3),
  [537] = {.count = 1, .reusable = true}, SHIFT(284),
  [539] = {.count = 1, .reusable = true}, SHIFT(287),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_constant_range, 3),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 3),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 3),
  [547] = {.count = 1, .reusable = true}, SHIFT(294),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2), SHIFT_REPEAT(153),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_ansi_port_declaration, 4),
  [554] = {.count = 1, .reusable = true}, SHIFT(296),
  [556] = {.count = 1, .reusable = true}, SHIFT(298),
  [558] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ansi_port_declaration_repeat1, 2),
  [560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ansi_port_declaration_repeat1, 2), SHIFT_REPEAT(160),
  [563] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_port_declarations_repeat1, 3),
  [565] = {.count = 1, .reusable = true}, REDUCE(aux_sym_constant_select_repeat1, 3),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_constant_bit_select, 3),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_constant_bit_select, 3),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_constant_select, 3),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym_constant_select, 3),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_declarations, 5),
  [577] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_defparam_assignments_repeat1, 2),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_defparam_assignments_repeat1, 2), SHIFT_REPEAT(180),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_constant_mintypmax_expression, 1),
  [584] = {.count = 1, .reusable = true}, SHIFT(305),
  [586] = {.count = 1, .reusable = true}, SHIFT(306),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_defparam_assignment, 3),
  [590] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hierarchical_identifier_repeat1, 3),
  [592] = {.count = 1, .reusable = true}, SHIFT(308),
  [594] = {.count = 1, .reusable = true}, SHIFT(309),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 4),
  [598] = {.count = 1, .reusable = true}, SHIFT(312),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_value_assignment, 3),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_integer_atom_type, 1),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_param_expression, 1),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_inc_or_dec_operator, 1),
  [608] = {.count = 1, .reusable = true}, SHIFT(315),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_primary, 1),
  [612] = {.count = 1, .reusable = true}, SHIFT(105),
  [614] = {.count = 1, .reusable = true}, SHIFT(319),
  [616] = {.count = 1, .reusable = true}, SHIFT(321),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_parameter_assignments, 1),
  [620] = {.count = 1, .reusable = true}, SHIFT(322),
  [622] = {.count = 1, .reusable = true}, SHIFT(324),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_variable_lvalue, 1),
  [626] = {.count = 1, .reusable = true}, SHIFT(327),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_ordered_parameter_assignment, 1, .alias_sequence_id = 6),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_mintypmax_expression, 1),
  [634] = {.count = 1, .reusable = true}, SHIFT(328),
  [636] = {.count = 1, .reusable = false}, SHIFT(239),
  [638] = {.count = 1, .reusable = true}, SHIFT(331),
  [640] = {.count = 1, .reusable = true}, SHIFT(249),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_pattern_expression_type, 1),
  [644] = {.count = 1, .reusable = false}, REDUCE(sym_module_instantiation, 4),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_module_instantiation, 4),
  [648] = {.count = 1, .reusable = true}, SHIFT(335),
  [650] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_instantiation_repeat1, 2),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_instantiation_repeat1, 2), SHIFT_REPEAT(195),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 1),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_instance, 3),
  [659] = {.count = 1, .reusable = true}, SHIFT(338),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_connections, 1),
  [663] = {.count = 1, .reusable = true}, SHIFT(339),
  [665] = {.count = 1, .reusable = true}, SHIFT(341),
  [667] = {.count = 1, .reusable = true}, SHIFT(343),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_ordered_port_connection, 1),
  [671] = {.count = 1, .reusable = false}, SHIFT(344),
  [673] = {.count = 1, .reusable = true}, REDUCE(aux_sym_constant_concatenation_repeat1, 2),
  [675] = {.count = 1, .reusable = true}, SHIFT(348),
  [677] = {.count = 1, .reusable = true}, SHIFT(350),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_constant_multiple_concatenation, 4),
  [681] = {.count = 1, .reusable = false}, REDUCE(sym_constant_multiple_concatenation, 4),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_constant_concatenation, 4),
  [685] = {.count = 1, .reusable = false}, REDUCE(sym_constant_concatenation, 4),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_concatenation_repeat1, 2), SHIFT_REPEAT(203),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 4),
  [692] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 4),
  [694] = {.count = 1, .reusable = true}, SHIFT(359),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_unpacked_dimension, 3),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym_ansi_port_declaration, 5),
  [700] = {.count = 1, .reusable = true}, SHIFT(364),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_identifier, 4),
  [704] = {.count = 1, .reusable = true}, SHIFT(375),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [708] = {.count = 1, .reusable = false}, REDUCE(sym_module_identifier, 1, .alias_sequence_id = 1),
  [710] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 5),
  [712] = {.count = 1, .reusable = true}, SHIFT(377),
  [714] = {.count = 1, .reusable = true}, SHIFT(378),
  [716] = {.count = 1, .reusable = true}, SHIFT(380),
  [718] = {.count = 1, .reusable = true}, SHIFT(381),
  [720] = {.count = 1, .reusable = true}, SHIFT(383),
  [722] = {.count = 1, .reusable = true}, SHIFT(384),
  [724] = {.count = 1, .reusable = true}, SHIFT(385),
  [726] = {.count = 1, .reusable = true}, SHIFT(388),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_value_assignment, 4),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_parameter_assignments, 2),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_variable_lvalue, 2),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_primary, 2),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_inc_or_dec_expression, 2),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [740] = {.count = 1, .reusable = false}, REDUCE(sym_module_instantiation, 5),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_module_instantiation, 5),
  [744] = {.count = 1, .reusable = true}, SHIFT(402),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 2),
  [748] = {.count = 1, .reusable = true}, SHIFT(403),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym_hierarchical_instance, 4),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_port_connections, 2),
  [754] = {.count = 1, .reusable = true}, REDUCE(sym_ordered_port_connection, 2),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2), SHIFT_REPEAT(272),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 8),
  [761] = {.count = 1, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2),
  [763] = {.count = 1, .reusable = false}, REDUCE(aux_sym_constant_expression_repeat1, 2),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(289),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym_constant_expression, 5),
  [770] = {.count = 1, .reusable = false}, REDUCE(sym_constant_expression, 5),
  [772] = {.count = 1, .reusable = true}, SHIFT(423),
  [774] = {.count = 1, .reusable = true}, SHIFT(436),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 6),
  [778] = {.count = 1, .reusable = true}, SHIFT(441),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym_primary, 3),
  [782] = {.count = 1, .reusable = true}, SHIFT(442),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_pattern_variable_lvalue, 3),
  [786] = {.count = 1, .reusable = true}, SHIFT(446),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 3),
  [790] = {.count = 1, .reusable = true}, SHIFT(450),
  [792] = {.count = 1, .reusable = true}, SHIFT(451),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_variable_lvalue, 3),
  [796] = {.count = 1, .reusable = true}, SHIFT(453),
  [798] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_parameter_assignments_repeat1, 2),
  [800] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_parameter_assignments_repeat1, 2), SHIFT_REPEAT(322),
  [803] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_parameter_assignments_repeat2, 2),
  [805] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_parameter_assignments_repeat2, 2), SHIFT_REPEAT(324),
  [808] = {.count = 1, .reusable = true}, SHIFT(454),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym_inc_or_dec_expression, 3),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [814] = {.count = 1, .reusable = true}, SHIFT(455),
  [816] = {.count = 1, .reusable = true}, SHIFT(457),
  [818] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_port_connections_repeat2, 2),
  [820] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_port_connections_repeat2, 2), SHIFT_REPEAT(339),
  [823] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_port_connections_repeat1, 2),
  [825] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_port_connections_repeat1, 2), SHIFT_REPEAT(341),
  [828] = {.count = 1, .reusable = true}, SHIFT(460),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 3),
  [832] = {.count = 1, .reusable = true}, SHIFT(461),
  [834] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(350),
  [837] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(364),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_named_parameter_assignment, 4),
  [842] = {.count = 1, .reusable = true}, SHIFT(485),
  [844] = {.count = 1, .reusable = true}, SHIFT(487),
  [846] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assignment_pattern_variable_lvalue_repeat1, 2),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_pattern_variable_lvalue, 4),
  [850] = {.count = 2, .reusable = true}, REDUCE(aux_sym_assignment_pattern_variable_lvalue_repeat1, 2), SHIFT_REPEAT(380),
  [853] = {.count = 1, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_multiple_concatenation, 4),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 4),
  [859] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(383),
  [862] = {.count = 1, .reusable = true}, REDUCE(sym_variable_lvalue, 4),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 4),
  [866] = {.count = 1, .reusable = true}, SHIFT(489),
  [868] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(423),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym_constant_mintypmax_expression, 5),
  [873] = {.count = 1, .reusable = true}, SHIFT(503),
  [875] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(437),
  [878] = {.count = 1, .reusable = false}, REDUCE(sym_module_declaration, 8),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym_named_parameter_assignment, 5),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym_mintypmax_expression, 5),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 5),
  [886] = {.count = 1, .reusable = true}, SHIFT(507),
  [888] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_expression_repeat1, 2), SHIFT_REPEAT(461),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_named_port_connection, 6),
  [893] = {.count = 1, .reusable = true}, SHIFT(437),
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
