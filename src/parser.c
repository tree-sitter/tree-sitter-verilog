#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 53
#define SYMBOL_COUNT 321
#define ALIAS_COUNT 2
#define TOKEN_COUNT 300
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
  anon_sym_interface = 16,
  anon_sym_DOT = 17,
  anon_sym_EQ = 18,
  anon_sym_0 = 19,
  anon_sym_1 = 20,
  anon_sym_2 = 21,
  anon_sym_defparam = 22,
  anon_sym_localparam = 23,
  anon_sym_type = 24,
  anon_sym_parameter = 25,
  anon_sym_specparam = 26,
  anon_sym_const = 27,
  anon_sym_var = 28,
  anon_sym_import = 29,
  anon_sym_COLON_COLON = 30,
  anon_sym_STAR = 31,
  anon_sym_export = 32,
  anon_sym_STAR_COLON_COLON_STAR = 33,
  anon_sym_vectored = 34,
  anon_sym_scalared = 35,
  anon_sym_static = 36,
  anon_sym_automatic = 37,
  anon_sym_string = 38,
  anon_sym_chandle = 39,
  anon_sym_event = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_byte = 43,
  anon_sym_shortint = 44,
  anon_sym_int = 45,
  anon_sym_longint = 46,
  anon_sym_integer = 47,
  anon_sym_time = 48,
  anon_sym_bit = 49,
  anon_sym_logic = 50,
  anon_sym_reg = 51,
  anon_sym_shortreal = 52,
  anon_sym_real = 53,
  anon_sym_realtime = 54,
  anon_sym_supply0 = 55,
  anon_sym_supply1 = 56,
  anon_sym_tri = 57,
  anon_sym_triand = 58,
  anon_sym_trior = 59,
  anon_sym_trireg = 60,
  anon_sym_tri0 = 61,
  anon_sym_tri1 = 62,
  anon_sym_uwire = 63,
  anon_sym_wire = 64,
  anon_sym_wand = 65,
  anon_sym_wor = 66,
  anon_sym_interconnect = 67,
  anon_sym_signed = 68,
  anon_sym_unsigned = 69,
  anon_sym_void = 70,
  anon_sym_struct = 71,
  anon_sym_union = 72,
  anon_sym_tagged = 73,
  anon_sym_highz1 = 74,
  anon_sym_highz0 = 75,
  anon_sym_strong0 = 76,
  anon_sym_pull0 = 77,
  anon_sym_weak0 = 78,
  anon_sym_strong1 = 79,
  anon_sym_pull1 = 80,
  anon_sym_weak1 = 81,
  anon_sym_small = 82,
  anon_sym_medium = 83,
  anon_sym_large = 84,
  anon_sym_1step = 85,
  anon_sym_new = 86,
  anon_sym_DOLLAR = 87,
  anon_sym_bind = 88,
  anon_sym_function = 89,
  anon_sym_PLUS = 90,
  anon_sym_PLUS_PLUS = 91,
  anon_sym_ = 92,
  anon_sym_3 = 93,
  anon_sym_STAR_STAR = 94,
  anon_sym_SLASH = 95,
  anon_sym_PERCENT = 96,
  anon_sym_EQ_EQ = 97,
  anon_sym_BANG_EQ = 98,
  anon_sym_LT = 99,
  anon_sym_LT_EQ = 100,
  anon_sym_GT = 101,
  anon_sym_GT_EQ = 102,
  anon_sym_always = 103,
  anon_sym_and = 104,
  anon_sym_assert = 105,
  anon_sym_assign = 106,
  anon_sym_begin = 107,
  anon_sym_break = 108,
  anon_sym_buf = 109,
  anon_sym_bufif0 = 110,
  anon_sym_bufif1 = 111,
  anon_sym_case = 112,
  anon_sym_casex = 113,
  anon_sym_casez = 114,
  anon_sym_clocking = 115,
  anon_sym_const_DASHin_DASHlex = 116,
  anon_sym_cmos = 117,
  anon_sym_context = 118,
  anon_sym_continue = 119,
  anon_sym_cover = 120,
  anon_sym_default = 121,
  anon_sym_disable = 122,
  anon_sym_do = 123,
  anon_sym_edge = 124,
  anon_sym_else = 125,
  anon_sym_end = 126,
  anon_sym_endcase = 127,
  anon_sym_endclocking = 128,
  anon_sym_endfunction = 129,
  anon_sym_endgenerate = 130,
  anon_sym_endpackage = 131,
  anon_sym_endprimitive = 132,
  anon_sym_endprogram = 133,
  anon_sym_endproperty = 134,
  anon_sym_endspecify = 135,
  anon_sym_endtable = 136,
  anon_sym_endtask = 137,
  anon_sym_enum = 138,
  anon_sym_final = 139,
  anon_sym_for = 140,
  anon_sym_forever = 141,
  anon_sym_generate = 142,
  anon_sym_genvar = 143,
  anon_sym_global_DASHthen_DASHclocking = 144,
  anon_sym_global_DASHin_DASHlex = 145,
  anon_sym_if = 146,
  anon_sym_iff = 147,
  anon_sym_initial = 148,
  anon_sym_nand = 149,
  anon_sym_negedge = 150,
  anon_sym_nmos = 151,
  anon_sym_nor = 152,
  anon_sym_not = 153,
  anon_sym_notif0 = 154,
  anon_sym_notif1 = 155,
  anon_sym_or = 156,
  anon_sym_package = 157,
  anon_sym_pmos = 158,
  anon_sym_posedge = 159,
  anon_sym_primitive = 160,
  anon_sym_priority = 161,
  anon_sym_program = 162,
  anon_sym_property = 163,
  anon_sym_pulldown = 164,
  anon_sym_pullup = 165,
  anon_sym_pure = 166,
  anon_sym_rcmos = 167,
  anon_sym_repeat = 168,
  anon_sym_return = 169,
  anon_sym_rnmos = 170,
  anon_sym_rpmos = 171,
  anon_sym_rtran = 172,
  anon_sym_rtranif0 = 173,
  anon_sym_rtranif1 = 174,
  anon_sym_specify = 175,
  anon_sym_table = 176,
  anon_sym_task = 177,
  anon_sym_timeprecision = 178,
  anon_sym_timeunit = 179,
  anon_sym_tran = 180,
  anon_sym_tranif0 = 181,
  anon_sym_tranif1 = 182,
  anon_sym_true = 183,
  anon_sym_typedef = 184,
  anon_sym_unique = 185,
  anon_sym_unique0 = 186,
  anon_sym_while = 187,
  anon_sym_wreal = 188,
  anon_sym_xnor = 189,
  anon_sym_xor = 190,
  anon_sym_DOLLARbits = 191,
  anon_sym_DOLLARbitstoreal = 192,
  anon_sym_DOLLARc = 193,
  anon_sym_DOLLARceil = 194,
  anon_sym_DOLLARclog2 = 195,
  anon_sym_DOLLARcountones = 196,
  anon_sym_DOLLARdisplay = 197,
  anon_sym_DOLLARerror = 198,
  anon_sym_DOLLARexp = 199,
  anon_sym_DOLLARfatal = 200,
  anon_sym_DOLLARfclose = 201,
  anon_sym_DOLLARfdisplay = 202,
  anon_sym_DOLLARfeof = 203,
  anon_sym_DOLLARfflush = 204,
  anon_sym_DOLLARfgetc = 205,
  anon_sym_DOLLARfgets = 206,
  anon_sym_DOLLARfinish = 207,
  anon_sym_DOLLARfloor = 208,
  anon_sym_DOLLARfopen = 209,
  anon_sym_DOLLARfscanf = 210,
  anon_sym_DOLLARfwrite = 211,
  anon_sym_DOLLARinfo = 212,
  anon_sym_DOLLARisunknown = 213,
  anon_sym_DOLLARitor = 214,
  anon_sym_DOLLARln = 215,
  anon_sym_DOLLARlog10 = 216,
  anon_sym_DOLLARonehot = 217,
  anon_sym_DOLLARonehot0 = 218,
  anon_sym_DOLLARpow = 219,
  anon_sym_DOLLARrandom = 220,
  anon_sym_DOLLARreadmemb = 221,
  anon_sym_DOLLARreadmemh = 222,
  anon_sym_DOLLARrealtime = 223,
  anon_sym_DOLLARrealtobits = 224,
  anon_sym_DOLLARrtoi = 225,
  anon_sym_DOLLARsformat = 226,
  anon_sym_DOLLARsigned = 227,
  anon_sym_DOLLARsqrt = 228,
  anon_sym_DOLLARsscanf = 229,
  anon_sym_DOLLARstime = 230,
  anon_sym_DOLLARstop = 231,
  anon_sym_DOLLARswrite = 232,
  anon_sym_DOLLARsystem = 233,
  anon_sym_DOLLARtest_DOLLARplusargs = 234,
  anon_sym_DOLLARtime = 235,
  anon_sym_DOLLARunit = 236,
  anon_sym_DOLLARunsigned = 237,
  anon_sym_DOLLARvalue_DOLLARplusargs = 238,
  anon_sym_DOLLARwarning = 239,
  anon_sym_DOLLARwrite = 240,
  anon_sym_always_comb = 241,
  anon_sym_always_latch = 242,
  anon_sym_always_ff = 243,
  anon_sym_LT_LT_LT_EQ = 244,
  anon_sym_GT_GT_GT_EQ = 245,
  anon_sym_LT_LT_EQ = 246,
  anon_sym_GT_GT_EQ = 247,
  anon_sym_PLUS_EQ = 248,
  anon_sym_DASH_EQ = 249,
  anon_sym_STAR_EQ = 250,
  anon_sym_SLASH_EQ = 251,
  anon_sym_PERCENT_EQ = 252,
  anon_sym_AMP_EQ = 253,
  anon_sym_PIPE_EQ = 254,
  anon_sym_CARET_EQ = 255,
  anon_sym_AT_STAR = 256,
  anon_sym_AT = 257,
  anon_sym_LPAREN_STAR_RPAREN = 258,
  anon_sym_AMP_AMP_AMP = 259,
  anon_sym_matches = 260,
  anon_sym_SQUOTE_LBRACE = 261,
  anon_sym_RBRACE = 262,
  anon_sym_POUND_POUND = 263,
  anon_sym_LBRACE = 264,
  anon_sym_QMARK = 265,
  anon_sym_PLUS_COLON = 266,
  anon_sym_DASH_COLON = 267,
  anon_sym_this = 268,
  anon_sym_null = 269,
  anon_sym_TILDE_PIPE = 270,
  anon_sym_TILDE_CARET = 271,
  anon_sym_TILDE_AMP = 272,
  anon_sym_CARET_TILDE = 273,
  anon_sym_DASH = 274,
  anon_sym_BANG = 275,
  anon_sym_AMP = 276,
  anon_sym_PIPE = 277,
  anon_sym_CARET = 278,
  anon_sym_TILDE = 279,
  anon_sym_EQ_EQ_EQ = 280,
  anon_sym_BANG_EQ_EQ = 281,
  anon_sym_EQ_EQ_QMARK = 282,
  anon_sym_BANG_EQ_QMARK = 283,
  anon_sym_LT_DASH_GT = 284,
  anon_sym_GT_GT_GT = 285,
  anon_sym_LT_LT_LT = 286,
  anon_sym_GT_GT = 287,
  anon_sym_LT_LT = 288,
  anon_sym_AMP_AMP = 289,
  anon_sym_PIPE_PIPE = 290,
  anon_sym_DASH_GT = 291,
  anon_sym_DASH_DASH = 292,
  aux_sym_SLASH_BSLASHd_PLUS_SLASH = 293,
  sym_real_number = 294,
  anon_sym_LPAREN_STAR = 295,
  anon_sym_STAR_RPAREN = 296,
  sym_comment = 297,
  anon_sym_DOLLARroot = 298,
  sym_simple_identifier = 299,
  sym_source_file = 300,
  sym__description = 301,
  sym_module_nonansi_header = 302,
  sym_module_header = 303,
  sym_module_declaration = 304,
  sym_module_keyword = 305,
  sym_list_of_ports = 306,
  sym_port = 307,
  sym__port_expression = 308,
  sym__port_reference = 309,
  sym_lifetime = 310,
  sym_attribute_instance = 311,
  sym_attr_spec = 312,
  sym_attr_name = 313,
  sym_identifier = 314,
  sym_module_identifier = 315,
  sym_port_identifier = 316,
  aux_sym_source_file_repeat1 = 317,
  aux_sym_module_header_repeat1 = 318,
  aux_sym_list_of_ports_repeat1 = 319,
  aux_sym_attribute_instance_repeat1 = 320,
  alias_sym__module_identifier = 321,
  alias_sym__port_identifier = 322,
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
  [anon_sym_interface] = "interface",
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
  [anon_sym_interconnect] = "interconnect",
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
  [anon_sym_timeprecision] = "timeprecision",
  [anon_sym_timeunit] = "timeunit",
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
  [anon_sym_AMP_AMP_AMP] = "&&&",
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
  [sym_module_header] = "module_header",
  [sym_module_declaration] = "module_declaration",
  [sym_module_keyword] = "module_keyword",
  [sym_list_of_ports] = "list_of_ports",
  [sym_port] = "port",
  [sym__port_expression] = "_port_expression",
  [sym__port_reference] = "_port_reference",
  [sym_lifetime] = "lifetime",
  [sym_attribute_instance] = "attribute_instance",
  [sym_attr_spec] = "attr_spec",
  [sym_attr_name] = "attr_name",
  [sym_identifier] = "identifier",
  [sym_module_identifier] = "module_identifier",
  [sym_port_identifier] = "port_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_header_repeat1] = "module_header_repeat1",
  [aux_sym_list_of_ports_repeat1] = "list_of_ports_repeat1",
  [aux_sym_attribute_instance_repeat1] = "attribute_instance_repeat1",
  [alias_sym__module_identifier] = "_module_identifier",
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
  [anon_sym_interface] = {
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
  [anon_sym_interconnect] = {
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
  [anon_sym_timeprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeunit] = {
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
  [anon_sym_AMP_AMP_AMP] = {
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
  [sym_list_of_ports] = {
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
  [sym__port_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_lifetime] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_port_identifier] = {
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
  [aux_sym_list_of_ports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym__module_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym__port_identifier] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym__module_identifier,
  },
  [2] = {
    [0] = alias_sym__port_identifier,
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
        ADVANCE(256);
      if (lookahead == '(')
        ADVANCE(258);
      if (lookahead == ')')
        ADVANCE(261);
      if (lookahead == '*')
        ADVANCE(262);
      if (lookahead == '+')
        ADVANCE(269);
      if (lookahead == ',')
        ADVANCE(273);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(279);
      if (lookahead == '/')
        ADVANCE(281);
      if (lookahead == '0')
        ADVANCE(287);
      if (lookahead == '1')
        ADVANCE(291);
      if (lookahead == '2')
        ADVANCE(296);
      if (lookahead == ':')
        ADVANCE(297);
      if (lookahead == ';')
        ADVANCE(299);
      if (lookahead == '<')
        ADVANCE(300);
      if (lookahead == '=')
        ADVANCE(308);
      if (lookahead == '>')
        ADVANCE(312);
      if (lookahead == '?')
        ADVANCE(318);
      if (lookahead == '@')
        ADVANCE(319);
      if (lookahead == '[')
        ADVANCE(321);
      if (lookahead == ']')
        ADVANCE(322);
      if (lookahead == '^')
        ADVANCE(323);
      if (lookahead == 'a')
        ADVANCE(326);
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
        ADVANCE(641);
      if (lookahead == 'm')
        ADVANCE(663);
      if (lookahead == 'n')
        ADVANCE(689);
      if (lookahead == 'o')
        ADVANCE(713);
      if (lookahead == 'p')
        ADVANCE(720);
      if (lookahead == 'r')
        ADVANCE(779);
      if (lookahead == 's')
        ADVANCE(817);
      if (lookahead == 't')
        ADVANCE(880);
      if (lookahead == 'u')
        ADVANCE(936);
      if (lookahead == 'v')
        ADVANCE(955);
      if (lookahead == 'w')
        ADVANCE(968);
      if (lookahead == 'x')
        ADVANCE(990);
      if (lookahead == '{')
        ADVANCE(996);
      if (lookahead == '|')
        ADVANCE(997);
      if (lookahead == '}')
        ADVANCE(1000);
      if (lookahead == '~')
        ADVANCE(1001);
      if (lookahead == 8211)
        ADVANCE(1005);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('3' <= lookahead && lookahead <= '9'))
        ADVANCE(290);
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
        ADVANCE(255);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '&')
        ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_AMP);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 256:
      if (lookahead == '{')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      if (lookahead == ')')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')')
        ADVANCE(263);
      if (lookahead == '*')
        ADVANCE(264);
      if (lookahead == ':')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(268);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 265:
      if (lookahead == ':')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == '*')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_STAR_COLON_COLON_STAR);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(270);
      if (lookahead == ':')
        ADVANCE(271);
      if (lookahead == '=')
        ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PLUS_COLON);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == ':')
        ADVANCE(276);
      if (lookahead == '=')
        ADVANCE(277);
      if (lookahead == '>')
        ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DASH_COLON);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*')
        ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(282);
      if (lookahead == '/')
        ADVANCE(285);
      if (lookahead == '=')
        ADVANCE(286);
      END_STATE();
    case 282:
      if (lookahead == '*')
        ADVANCE(283);
      if (lookahead != 0)
        ADVANCE(282);
      END_STATE();
    case 283:
      if (lookahead == '*')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(284);
      if (lookahead != 0)
        ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(290);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_real_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.')
        ADVANCE(288);
      if (lookahead == 's')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == 't')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'e')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'p')
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_1step);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '.')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(290);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(301);
      if (lookahead == '<')
        ADVANCE(303);
      if (lookahead == '=')
        ADVANCE(307);
      END_STATE();
    case 301:
      if (lookahead == '>')
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<')
        ADVANCE(304);
      if (lookahead == '=')
        ADVANCE(306);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      if (lookahead == '=')
        ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(310);
      if (lookahead == '?')
        ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_QMARK);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(313);
      if (lookahead == '>')
        ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(315);
      if (lookahead == '>')
        ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '*')
        ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(324);
      if (lookahead == '~')
        ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_CARET_TILDE);
      END_STATE();
    case 326:
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 's')
        ADVANCE(346);
      if (lookahead == 'u')
        ADVANCE(354);
      END_STATE();
    case 327:
      if (lookahead == 'w')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'a')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'y')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 's')
        ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '_')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'c')
        ADVANCE(333);
      if (lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'l')
        ADVANCE(339);
      END_STATE();
    case 333:
      if (lookahead == 'o')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'm')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'b')
        ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_always_comb);
      END_STATE();
    case 337:
      if (lookahead == 'f')
        ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_always_ff);
      END_STATE();
    case 339:
      if (lookahead == 'a')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 't')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'c')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'h')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_always_latch);
      END_STATE();
    case 344:
      if (lookahead == 'd')
        ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 346:
      if (lookahead == 's')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'e')
        ADVANCE(348);
      if (lookahead == 'i')
        ADVANCE(351);
      END_STATE();
    case 348:
      if (lookahead == 'r')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 't')
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 351:
      if (lookahead == 'g')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 'n')
        ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 354:
      if (lookahead == 't')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'o')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'm')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'a')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 't')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'i')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'c')
        ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_automatic);
      END_STATE();
    case 362:
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
      END_STATE();
    case 363:
      if (lookahead == 'g')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'i')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'n')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 367:
      if (lookahead == 'n')
        ADVANCE(368);
      if (lookahead == 't')
        ADVANCE(370);
      END_STATE();
    case 368:
      if (lookahead == 'd')
        ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 371:
      if (lookahead == 'e')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'a')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'k')
        ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 375:
      if (lookahead == 'f')
        ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_buf);
      if (lookahead == 'i')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'f')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == '0')
        ADVANCE(379);
      if (lookahead == '1')
        ADVANCE(380);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_bufif0);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_bufif1);
      END_STATE();
    case 381:
      if (lookahead == 't')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'e')
        ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 384:
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
      END_STATE();
    case 385:
      if (lookahead == 's')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'e')
        ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == 'x')
        ADVANCE(388);
      if (lookahead == 'z')
        ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_casex);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_casez);
      END_STATE();
    case 390:
      if (lookahead == 'a')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'n')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'd')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 'l')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'e')
        ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_chandle);
      END_STATE();
    case 396:
      if (lookahead == 'o')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'c')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'k')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'i')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'n')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'g')
        ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_clocking);
      END_STATE();
    case 403:
      if (lookahead == 'o')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 's')
        ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_cmos);
      END_STATE();
    case 406:
      if (lookahead == 'n')
        ADVANCE(407);
      if (lookahead == 'v')
        ADVANCE(425);
      END_STATE();
    case 407:
      if (lookahead == 's')
        ADVANCE(408);
      if (lookahead == 't')
        ADVANCE(417);
      END_STATE();
    case 408:
      if (lookahead == 't')
        ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '-')
        ADVANCE(410);
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
      if (lookahead == 'e')
        ADVANCE(418);
      if (lookahead == 'i')
        ADVANCE(421);
      END_STATE();
    case 418:
      if (lookahead == 'x')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 't')
        ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 421:
      if (lookahead == 'n')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 'u')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'e')
        ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 425:
      if (lookahead == 'e')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'r')
        ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_cover);
      END_STATE();
    case 428:
      if (lookahead == 'e')
        ADVANCE(429);
      if (lookahead == 'i')
        ADVANCE(440);
      if (lookahead == 'o')
        ADVANCE(446);
      END_STATE();
    case 429:
      if (lookahead == 'f')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'a')
        ADVANCE(431);
      if (lookahead == 'p')
        ADVANCE(435);
      END_STATE();
    case 431:
      if (lookahead == 'u')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'l')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 't')
        ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 435:
      if (lookahead == 'a')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'r')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'a')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'm')
        ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_defparam);
      END_STATE();
    case 440:
      if (lookahead == 's')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'a')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'b')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'l')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'e')
        ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 447:
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
      END_STATE();
    case 448:
      if (lookahead == 'g')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'e')
        ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_edge);
      END_STATE();
    case 451:
      if (lookahead == 's')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'e')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 454:
      if (lookahead == 'd')
        ADVANCE(455);
      if (lookahead == 'u')
        ADVANCE(528);
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
      END_STATE();
    case 456:
      if (lookahead == 'a')
        ADVANCE(457);
      if (lookahead == 'l')
        ADVANCE(460);
      END_STATE();
    case 457:
      if (lookahead == 's')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'e')
        ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_endcase);
      END_STATE();
    case 460:
      if (lookahead == 'o')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'c')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'k')
        ADVANCE(463);
      END_STATE();
    case 463:
      if (lookahead == 'i')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'n')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'g')
        ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_endclocking);
      END_STATE();
    case 467:
      if (lookahead == 'u')
        ADVANCE(468);
      END_STATE();
    case 468:
      if (lookahead == 'n')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'c')
        ADVANCE(470);
      END_STATE();
    case 470:
      if (lookahead == 't')
        ADVANCE(471);
      END_STATE();
    case 471:
      if (lookahead == 'i')
        ADVANCE(472);
      END_STATE();
    case 472:
      if (lookahead == 'o')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 'n')
        ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_endfunction);
      END_STATE();
    case 475:
      if (lookahead == 'e')
        ADVANCE(476);
      END_STATE();
    case 476:
      if (lookahead == 'n')
        ADVANCE(477);
      END_STATE();
    case 477:
      if (lookahead == 'e')
        ADVANCE(478);
      END_STATE();
    case 478:
      if (lookahead == 'r')
        ADVANCE(479);
      END_STATE();
    case 479:
      if (lookahead == 'a')
        ADVANCE(480);
      END_STATE();
    case 480:
      if (lookahead == 't')
        ADVANCE(481);
      END_STATE();
    case 481:
      if (lookahead == 'e')
        ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_endgenerate);
      END_STATE();
    case 483:
      if (lookahead == 'o')
        ADVANCE(484);
      END_STATE();
    case 484:
      if (lookahead == 'd')
        ADVANCE(485);
      END_STATE();
    case 485:
      if (lookahead == 'u')
        ADVANCE(486);
      END_STATE();
    case 486:
      if (lookahead == 'l')
        ADVANCE(487);
      END_STATE();
    case 487:
      if (lookahead == 'e')
        ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_endmodule);
      END_STATE();
    case 489:
      if (lookahead == 'a')
        ADVANCE(490);
      if (lookahead == 'r')
        ADVANCE(496);
      END_STATE();
    case 490:
      if (lookahead == 'c')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == 'k')
        ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead == 'a')
        ADVANCE(493);
      END_STATE();
    case 493:
      if (lookahead == 'g')
        ADVANCE(494);
      END_STATE();
    case 494:
      if (lookahead == 'e')
        ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_endpackage);
      END_STATE();
    case 496:
      if (lookahead == 'i')
        ADVANCE(497);
      if (lookahead == 'o')
        ADVANCE(504);
      END_STATE();
    case 497:
      if (lookahead == 'm')
        ADVANCE(498);
      END_STATE();
    case 498:
      if (lookahead == 'i')
        ADVANCE(499);
      END_STATE();
    case 499:
      if (lookahead == 't')
        ADVANCE(500);
      END_STATE();
    case 500:
      if (lookahead == 'i')
        ADVANCE(501);
      END_STATE();
    case 501:
      if (lookahead == 'v')
        ADVANCE(502);
      END_STATE();
    case 502:
      if (lookahead == 'e')
        ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_endprimitive);
      END_STATE();
    case 504:
      if (lookahead == 'g')
        ADVANCE(505);
      if (lookahead == 'p')
        ADVANCE(509);
      END_STATE();
    case 505:
      if (lookahead == 'r')
        ADVANCE(506);
      END_STATE();
    case 506:
      if (lookahead == 'a')
        ADVANCE(507);
      END_STATE();
    case 507:
      if (lookahead == 'm')
        ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_endprogram);
      END_STATE();
    case 509:
      if (lookahead == 'e')
        ADVANCE(510);
      END_STATE();
    case 510:
      if (lookahead == 'r')
        ADVANCE(511);
      END_STATE();
    case 511:
      if (lookahead == 't')
        ADVANCE(512);
      END_STATE();
    case 512:
      if (lookahead == 'y')
        ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_endproperty);
      END_STATE();
    case 514:
      if (lookahead == 'p')
        ADVANCE(515);
      END_STATE();
    case 515:
      if (lookahead == 'e')
        ADVANCE(516);
      END_STATE();
    case 516:
      if (lookahead == 'c')
        ADVANCE(517);
      END_STATE();
    case 517:
      if (lookahead == 'i')
        ADVANCE(518);
      END_STATE();
    case 518:
      if (lookahead == 'f')
        ADVANCE(519);
      END_STATE();
    case 519:
      if (lookahead == 'y')
        ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_endspecify);
      END_STATE();
    case 521:
      if (lookahead == 'a')
        ADVANCE(522);
      END_STATE();
    case 522:
      if (lookahead == 'b')
        ADVANCE(523);
      if (lookahead == 's')
        ADVANCE(526);
      END_STATE();
    case 523:
      if (lookahead == 'l')
        ADVANCE(524);
      END_STATE();
    case 524:
      if (lookahead == 'e')
        ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_endtable);
      END_STATE();
    case 526:
      if (lookahead == 'k')
        ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_endtask);
      END_STATE();
    case 528:
      if (lookahead == 'm')
        ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 530:
      if (lookahead == 'e')
        ADVANCE(531);
      END_STATE();
    case 531:
      if (lookahead == 'n')
        ADVANCE(532);
      END_STATE();
    case 532:
      if (lookahead == 't')
        ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 534:
      if (lookahead == 'p')
        ADVANCE(535);
      if (lookahead == 't')
        ADVANCE(539);
      END_STATE();
    case 535:
      if (lookahead == 'o')
        ADVANCE(536);
      END_STATE();
    case 536:
      if (lookahead == 'r')
        ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == 't')
        ADVANCE(538);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 539:
      if (lookahead == 'e')
        ADVANCE(540);
      END_STATE();
    case 540:
      if (lookahead == 'r')
        ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 'n')
        ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 543:
      if (lookahead == 'i')
        ADVANCE(544);
      if (lookahead == 'o')
        ADVANCE(548);
      if (lookahead == 'u')
        ADVANCE(554);
      END_STATE();
    case 544:
      if (lookahead == 'n')
        ADVANCE(545);
      END_STATE();
    case 545:
      if (lookahead == 'a')
        ADVANCE(546);
      END_STATE();
    case 546:
      if (lookahead == 'l')
        ADVANCE(547);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 548:
      if (lookahead == 'r')
        ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e')
        ADVANCE(550);
      END_STATE();
    case 550:
      if (lookahead == 'v')
        ADVANCE(551);
      END_STATE();
    case 551:
      if (lookahead == 'e')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'r')
        ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_forever);
      END_STATE();
    case 554:
      if (lookahead == 'n')
        ADVANCE(555);
      END_STATE();
    case 555:
      if (lookahead == 'c')
        ADVANCE(556);
      END_STATE();
    case 556:
      if (lookahead == 't')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'i')
        ADVANCE(558);
      END_STATE();
    case 558:
      if (lookahead == 'o')
        ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == 'n')
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 561:
      if (lookahead == 'e')
        ADVANCE(562);
      if (lookahead == 'l')
        ADVANCE(572);
      END_STATE();
    case 562:
      if (lookahead == 'n')
        ADVANCE(563);
      END_STATE();
    case 563:
      if (lookahead == 'e')
        ADVANCE(564);
      if (lookahead == 'v')
        ADVANCE(569);
      END_STATE();
    case 564:
      if (lookahead == 'r')
        ADVANCE(565);
      END_STATE();
    case 565:
      if (lookahead == 'a')
        ADVANCE(566);
      END_STATE();
    case 566:
      if (lookahead == 't')
        ADVANCE(567);
      END_STATE();
    case 567:
      if (lookahead == 'e')
        ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_generate);
      END_STATE();
    case 569:
      if (lookahead == 'a')
        ADVANCE(570);
      END_STATE();
    case 570:
      if (lookahead == 'r')
        ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_genvar);
      END_STATE();
    case 572:
      if (lookahead == 'o')
        ADVANCE(573);
      END_STATE();
    case 573:
      if (lookahead == 'b')
        ADVANCE(574);
      END_STATE();
    case 574:
      if (lookahead == 'a')
        ADVANCE(575);
      END_STATE();
    case 575:
      if (lookahead == 'l')
        ADVANCE(576);
      END_STATE();
    case 576:
      if (lookahead == '-')
        ADVANCE(577);
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
      if (lookahead == 'i')
        ADVANCE(598);
      END_STATE();
    case 598:
      if (lookahead == 'g')
        ADVANCE(599);
      END_STATE();
    case 599:
      if (lookahead == 'h')
        ADVANCE(600);
      END_STATE();
    case 600:
      if (lookahead == 'z')
        ADVANCE(601);
      END_STATE();
    case 601:
      if (lookahead == '0')
        ADVANCE(602);
      if (lookahead == '1')
        ADVANCE(603);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_highz0);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_highz1);
      END_STATE();
    case 604:
      if (lookahead == 'f')
        ADVANCE(605);
      if (lookahead == 'm')
        ADVANCE(607);
      if (lookahead == 'n')
        ADVANCE(612);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'f')
        ADVANCE(606);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_iff);
      END_STATE();
    case 607:
      if (lookahead == 'p')
        ADVANCE(608);
      END_STATE();
    case 608:
      if (lookahead == 'o')
        ADVANCE(609);
      END_STATE();
    case 609:
      if (lookahead == 'r')
        ADVANCE(610);
      END_STATE();
    case 610:
      if (lookahead == 't')
        ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 612:
      if (lookahead == 'i')
        ADVANCE(613);
      if (lookahead == 'o')
        ADVANCE(618);
      if (lookahead == 'p')
        ADVANCE(621);
      if (lookahead == 't')
        ADVANCE(624);
      END_STATE();
    case 613:
      if (lookahead == 't')
        ADVANCE(614);
      END_STATE();
    case 614:
      if (lookahead == 'i')
        ADVANCE(615);
      END_STATE();
    case 615:
      if (lookahead == 'a')
        ADVANCE(616);
      END_STATE();
    case 616:
      if (lookahead == 'l')
        ADVANCE(617);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_initial);
      END_STATE();
    case 618:
      if (lookahead == 'u')
        ADVANCE(619);
      END_STATE();
    case 619:
      if (lookahead == 't')
        ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 621:
      if (lookahead == 'u')
        ADVANCE(622);
      END_STATE();
    case 622:
      if (lookahead == 't')
        ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(625);
      END_STATE();
    case 625:
      if (lookahead == 'g')
        ADVANCE(626);
      if (lookahead == 'r')
        ADVANCE(629);
      END_STATE();
    case 626:
      if (lookahead == 'e')
        ADVANCE(627);
      END_STATE();
    case 627:
      if (lookahead == 'r')
        ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 629:
      if (lookahead == 'c')
        ADVANCE(630);
      if (lookahead == 'f')
        ADVANCE(637);
      END_STATE();
    case 630:
      if (lookahead == 'o')
        ADVANCE(631);
      END_STATE();
    case 631:
      if (lookahead == 'n')
        ADVANCE(632);
      END_STATE();
    case 632:
      if (lookahead == 'n')
        ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 'e')
        ADVANCE(634);
      END_STATE();
    case 634:
      if (lookahead == 'c')
        ADVANCE(635);
      END_STATE();
    case 635:
      if (lookahead == 't')
        ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_interconnect);
      END_STATE();
    case 637:
      if (lookahead == 'a')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'c')
        ADVANCE(639);
      END_STATE();
    case 639:
      if (lookahead == 'e')
        ADVANCE(640);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 641:
      if (lookahead == 'a')
        ADVANCE(642);
      if (lookahead == 'o')
        ADVANCE(646);
      END_STATE();
    case 642:
      if (lookahead == 'r')
        ADVANCE(643);
      END_STATE();
    case 643:
      if (lookahead == 'g')
        ADVANCE(644);
      END_STATE();
    case 644:
      if (lookahead == 'e')
        ADVANCE(645);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_large);
      END_STATE();
    case 646:
      if (lookahead == 'c')
        ADVANCE(647);
      if (lookahead == 'g')
        ADVANCE(655);
      if (lookahead == 'n')
        ADVANCE(658);
      END_STATE();
    case 647:
      if (lookahead == 'a')
        ADVANCE(648);
      END_STATE();
    case 648:
      if (lookahead == 'l')
        ADVANCE(649);
      END_STATE();
    case 649:
      if (lookahead == 'p')
        ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == 'a')
        ADVANCE(651);
      END_STATE();
    case 651:
      if (lookahead == 'r')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'a')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 'm')
        ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_localparam);
      END_STATE();
    case 655:
      if (lookahead == 'i')
        ADVANCE(656);
      END_STATE();
    case 656:
      if (lookahead == 'c')
        ADVANCE(657);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_logic);
      END_STATE();
    case 658:
      if (lookahead == 'g')
        ADVANCE(659);
      END_STATE();
    case 659:
      if (lookahead == 'i')
        ADVANCE(660);
      END_STATE();
    case 660:
      if (lookahead == 'n')
        ADVANCE(661);
      END_STATE();
    case 661:
      if (lookahead == 't')
        ADVANCE(662);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_longint);
      END_STATE();
    case 663:
      if (lookahead == 'a')
        ADVANCE(664);
      if (lookahead == 'e')
        ADVANCE(679);
      if (lookahead == 'o')
        ADVANCE(684);
      END_STATE();
    case 664:
      if (lookahead == 'c')
        ADVANCE(665);
      if (lookahead == 't')
        ADVANCE(674);
      END_STATE();
    case 665:
      if (lookahead == 'r')
        ADVANCE(666);
      END_STATE();
    case 666:
      if (lookahead == 'o')
        ADVANCE(667);
      END_STATE();
    case 667:
      if (lookahead == 'm')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 'o')
        ADVANCE(669);
      END_STATE();
    case 669:
      if (lookahead == 'd')
        ADVANCE(670);
      END_STATE();
    case 670:
      if (lookahead == 'u')
        ADVANCE(671);
      END_STATE();
    case 671:
      if (lookahead == 'l')
        ADVANCE(672);
      END_STATE();
    case 672:
      if (lookahead == 'e')
        ADVANCE(673);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_macromodule);
      END_STATE();
    case 674:
      if (lookahead == 'c')
        ADVANCE(675);
      END_STATE();
    case 675:
      if (lookahead == 'h')
        ADVANCE(676);
      END_STATE();
    case 676:
      if (lookahead == 'e')
        ADVANCE(677);
      END_STATE();
    case 677:
      if (lookahead == 's')
        ADVANCE(678);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 679:
      if (lookahead == 'd')
        ADVANCE(680);
      END_STATE();
    case 680:
      if (lookahead == 'i')
        ADVANCE(681);
      END_STATE();
    case 681:
      if (lookahead == 'u')
        ADVANCE(682);
      END_STATE();
    case 682:
      if (lookahead == 'm')
        ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_medium);
      END_STATE();
    case 684:
      if (lookahead == 'd')
        ADVANCE(685);
      END_STATE();
    case 685:
      if (lookahead == 'u')
        ADVANCE(686);
      END_STATE();
    case 686:
      if (lookahead == 'l')
        ADVANCE(687);
      END_STATE();
    case 687:
      if (lookahead == 'e')
        ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 689:
      if (lookahead == 'a')
        ADVANCE(690);
      if (lookahead == 'e')
        ADVANCE(693);
      if (lookahead == 'm')
        ADVANCE(700);
      if (lookahead == 'o')
        ADVANCE(703);
      if (lookahead == 'u')
        ADVANCE(710);
      END_STATE();
    case 690:
      if (lookahead == 'n')
        ADVANCE(691);
      END_STATE();
    case 691:
      if (lookahead == 'd')
        ADVANCE(692);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_nand);
      END_STATE();
    case 693:
      if (lookahead == 'g')
        ADVANCE(694);
      if (lookahead == 'w')
        ADVANCE(699);
      END_STATE();
    case 694:
      if (lookahead == 'e')
        ADVANCE(695);
      END_STATE();
    case 695:
      if (lookahead == 'd')
        ADVANCE(696);
      END_STATE();
    case 696:
      if (lookahead == 'g')
        ADVANCE(697);
      END_STATE();
    case 697:
      if (lookahead == 'e')
        ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_negedge);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 700:
      if (lookahead == 'o')
        ADVANCE(701);
      END_STATE();
    case 701:
      if (lookahead == 's')
        ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_nmos);
      END_STATE();
    case 703:
      if (lookahead == 'r')
        ADVANCE(704);
      if (lookahead == 't')
        ADVANCE(705);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'i')
        ADVANCE(706);
      END_STATE();
    case 706:
      if (lookahead == 'f')
        ADVANCE(707);
      END_STATE();
    case 707:
      if (lookahead == '0')
        ADVANCE(708);
      if (lookahead == '1')
        ADVANCE(709);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_notif0);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_notif1);
      END_STATE();
    case 710:
      if (lookahead == 'l')
        ADVANCE(711);
      END_STATE();
    case 711:
      if (lookahead == 'l')
        ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 713:
      if (lookahead == 'r')
        ADVANCE(714);
      if (lookahead == 'u')
        ADVANCE(715);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 715:
      if (lookahead == 't')
        ADVANCE(716);
      END_STATE();
    case 716:
      if (lookahead == 'p')
        ADVANCE(717);
      END_STATE();
    case 717:
      if (lookahead == 'u')
        ADVANCE(718);
      END_STATE();
    case 718:
      if (lookahead == 't')
        ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 720:
      if (lookahead == 'a')
        ADVANCE(721);
      if (lookahead == 'm')
        ADVANCE(734);
      if (lookahead == 'o')
        ADVANCE(737);
      if (lookahead == 'r')
        ADVANCE(743);
      if (lookahead == 'u')
        ADVANCE(766);
      END_STATE();
    case 721:
      if (lookahead == 'c')
        ADVANCE(722);
      if (lookahead == 'r')
        ADVANCE(727);
      END_STATE();
    case 722:
      if (lookahead == 'k')
        ADVANCE(723);
      END_STATE();
    case 723:
      if (lookahead == 'a')
        ADVANCE(724);
      END_STATE();
    case 724:
      if (lookahead == 'g')
        ADVANCE(725);
      END_STATE();
    case 725:
      if (lookahead == 'e')
        ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 727:
      if (lookahead == 'a')
        ADVANCE(728);
      END_STATE();
    case 728:
      if (lookahead == 'm')
        ADVANCE(729);
      END_STATE();
    case 729:
      if (lookahead == 'e')
        ADVANCE(730);
      END_STATE();
    case 730:
      if (lookahead == 't')
        ADVANCE(731);
      END_STATE();
    case 731:
      if (lookahead == 'e')
        ADVANCE(732);
      END_STATE();
    case 732:
      if (lookahead == 'r')
        ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 734:
      if (lookahead == 'o')
        ADVANCE(735);
      END_STATE();
    case 735:
      if (lookahead == 's')
        ADVANCE(736);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_pmos);
      END_STATE();
    case 737:
      if (lookahead == 's')
        ADVANCE(738);
      END_STATE();
    case 738:
      if (lookahead == 'e')
        ADVANCE(739);
      END_STATE();
    case 739:
      if (lookahead == 'd')
        ADVANCE(740);
      END_STATE();
    case 740:
      if (lookahead == 'g')
        ADVANCE(741);
      END_STATE();
    case 741:
      if (lookahead == 'e')
        ADVANCE(742);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_posedge);
      END_STATE();
    case 743:
      if (lookahead == 'i')
        ADVANCE(744);
      if (lookahead == 'o')
        ADVANCE(756);
      END_STATE();
    case 744:
      if (lookahead == 'm')
        ADVANCE(745);
      if (lookahead == 'o')
        ADVANCE(751);
      END_STATE();
    case 745:
      if (lookahead == 'i')
        ADVANCE(746);
      END_STATE();
    case 746:
      if (lookahead == 't')
        ADVANCE(747);
      END_STATE();
    case 747:
      if (lookahead == 'i')
        ADVANCE(748);
      END_STATE();
    case 748:
      if (lookahead == 'v')
        ADVANCE(749);
      END_STATE();
    case 749:
      if (lookahead == 'e')
        ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_primitive);
      END_STATE();
    case 751:
      if (lookahead == 'r')
        ADVANCE(752);
      END_STATE();
    case 752:
      if (lookahead == 'i')
        ADVANCE(753);
      END_STATE();
    case 753:
      if (lookahead == 't')
        ADVANCE(754);
      END_STATE();
    case 754:
      if (lookahead == 'y')
        ADVANCE(755);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 756:
      if (lookahead == 'g')
        ADVANCE(757);
      if (lookahead == 'p')
        ADVANCE(761);
      END_STATE();
    case 757:
      if (lookahead == 'r')
        ADVANCE(758);
      END_STATE();
    case 758:
      if (lookahead == 'a')
        ADVANCE(759);
      END_STATE();
    case 759:
      if (lookahead == 'm')
        ADVANCE(760);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_program);
      END_STATE();
    case 761:
      if (lookahead == 'e')
        ADVANCE(762);
      END_STATE();
    case 762:
      if (lookahead == 'r')
        ADVANCE(763);
      END_STATE();
    case 763:
      if (lookahead == 't')
        ADVANCE(764);
      END_STATE();
    case 764:
      if (lookahead == 'y')
        ADVANCE(765);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 766:
      if (lookahead == 'l')
        ADVANCE(767);
      if (lookahead == 'r')
        ADVANCE(777);
      END_STATE();
    case 767:
      if (lookahead == 'l')
        ADVANCE(768);
      END_STATE();
    case 768:
      if (lookahead == '0')
        ADVANCE(769);
      if (lookahead == '1')
        ADVANCE(770);
      if (lookahead == 'd')
        ADVANCE(771);
      if (lookahead == 'u')
        ADVANCE(775);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_pull0);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_pull1);
      END_STATE();
    case 771:
      if (lookahead == 'o')
        ADVANCE(772);
      END_STATE();
    case 772:
      if (lookahead == 'w')
        ADVANCE(773);
      END_STATE();
    case 773:
      if (lookahead == 'n')
        ADVANCE(774);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_pulldown);
      END_STATE();
    case 775:
      if (lookahead == 'p')
        ADVANCE(776);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_pullup);
      END_STATE();
    case 777:
      if (lookahead == 'e')
        ADVANCE(778);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 779:
      if (lookahead == 'c')
        ADVANCE(780);
      if (lookahead == 'e')
        ADVANCE(784);
      if (lookahead == 'n')
        ADVANCE(801);
      if (lookahead == 'p')
        ADVANCE(805);
      if (lookahead == 't')
        ADVANCE(809);
      END_STATE();
    case 780:
      if (lookahead == 'm')
        ADVANCE(781);
      END_STATE();
    case 781:
      if (lookahead == 'o')
        ADVANCE(782);
      END_STATE();
    case 782:
      if (lookahead == 's')
        ADVANCE(783);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_rcmos);
      END_STATE();
    case 784:
      if (lookahead == 'a')
        ADVANCE(785);
      if (lookahead == 'f')
        ADVANCE(791);
      if (lookahead == 'g')
        ADVANCE(792);
      if (lookahead == 'p')
        ADVANCE(793);
      if (lookahead == 't')
        ADVANCE(797);
      END_STATE();
    case 785:
      if (lookahead == 'l')
        ADVANCE(786);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == 't')
        ADVANCE(787);
      END_STATE();
    case 787:
      if (lookahead == 'i')
        ADVANCE(788);
      END_STATE();
    case 788:
      if (lookahead == 'm')
        ADVANCE(789);
      END_STATE();
    case 789:
      if (lookahead == 'e')
        ADVANCE(790);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_realtime);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 793:
      if (lookahead == 'e')
        ADVANCE(794);
      END_STATE();
    case 794:
      if (lookahead == 'a')
        ADVANCE(795);
      END_STATE();
    case 795:
      if (lookahead == 't')
        ADVANCE(796);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 797:
      if (lookahead == 'u')
        ADVANCE(798);
      END_STATE();
    case 798:
      if (lookahead == 'r')
        ADVANCE(799);
      END_STATE();
    case 799:
      if (lookahead == 'n')
        ADVANCE(800);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 801:
      if (lookahead == 'm')
        ADVANCE(802);
      END_STATE();
    case 802:
      if (lookahead == 'o')
        ADVANCE(803);
      END_STATE();
    case 803:
      if (lookahead == 's')
        ADVANCE(804);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_rnmos);
      END_STATE();
    case 805:
      if (lookahead == 'm')
        ADVANCE(806);
      END_STATE();
    case 806:
      if (lookahead == 'o')
        ADVANCE(807);
      END_STATE();
    case 807:
      if (lookahead == 's')
        ADVANCE(808);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_rpmos);
      END_STATE();
    case 809:
      if (lookahead == 'r')
        ADVANCE(810);
      END_STATE();
    case 810:
      if (lookahead == 'a')
        ADVANCE(811);
      END_STATE();
    case 811:
      if (lookahead == 'n')
        ADVANCE(812);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_rtran);
      if (lookahead == 'i')
        ADVANCE(813);
      END_STATE();
    case 813:
      if (lookahead == 'f')
        ADVANCE(814);
      END_STATE();
    case 814:
      if (lookahead == '0')
        ADVANCE(815);
      if (lookahead == '1')
        ADVANCE(816);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_rtranif0);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_rtranif1);
      END_STATE();
    case 817:
      if (lookahead == 'c')
        ADVANCE(818);
      if (lookahead == 'h')
        ADVANCE(825);
      if (lookahead == 'i')
        ADVANCE(836);
      if (lookahead == 'm')
        ADVANCE(841);
      if (lookahead == 'p')
        ADVANCE(845);
      if (lookahead == 't')
        ADVANCE(856);
      if (lookahead == 'u')
        ADVANCE(873);
      END_STATE();
    case 818:
      if (lookahead == 'a')
        ADVANCE(819);
      END_STATE();
    case 819:
      if (lookahead == 'l')
        ADVANCE(820);
      END_STATE();
    case 820:
      if (lookahead == 'a')
        ADVANCE(821);
      END_STATE();
    case 821:
      if (lookahead == 'r')
        ADVANCE(822);
      END_STATE();
    case 822:
      if (lookahead == 'e')
        ADVANCE(823);
      END_STATE();
    case 823:
      if (lookahead == 'd')
        ADVANCE(824);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_scalared);
      END_STATE();
    case 825:
      if (lookahead == 'o')
        ADVANCE(826);
      END_STATE();
    case 826:
      if (lookahead == 'r')
        ADVANCE(827);
      END_STATE();
    case 827:
      if (lookahead == 't')
        ADVANCE(828);
      END_STATE();
    case 828:
      if (lookahead == 'i')
        ADVANCE(829);
      if (lookahead == 'r')
        ADVANCE(832);
      END_STATE();
    case 829:
      if (lookahead == 'n')
        ADVANCE(830);
      END_STATE();
    case 830:
      if (lookahead == 't')
        ADVANCE(831);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_shortint);
      END_STATE();
    case 832:
      if (lookahead == 'e')
        ADVANCE(833);
      END_STATE();
    case 833:
      if (lookahead == 'a')
        ADVANCE(834);
      END_STATE();
    case 834:
      if (lookahead == 'l')
        ADVANCE(835);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_shortreal);
      END_STATE();
    case 836:
      if (lookahead == 'g')
        ADVANCE(837);
      END_STATE();
    case 837:
      if (lookahead == 'n')
        ADVANCE(838);
      END_STATE();
    case 838:
      if (lookahead == 'e')
        ADVANCE(839);
      END_STATE();
    case 839:
      if (lookahead == 'd')
        ADVANCE(840);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 841:
      if (lookahead == 'a')
        ADVANCE(842);
      END_STATE();
    case 842:
      if (lookahead == 'l')
        ADVANCE(843);
      END_STATE();
    case 843:
      if (lookahead == 'l')
        ADVANCE(844);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_small);
      END_STATE();
    case 845:
      if (lookahead == 'e')
        ADVANCE(846);
      END_STATE();
    case 846:
      if (lookahead == 'c')
        ADVANCE(847);
      END_STATE();
    case 847:
      if (lookahead == 'i')
        ADVANCE(848);
      if (lookahead == 'p')
        ADVANCE(851);
      END_STATE();
    case 848:
      if (lookahead == 'f')
        ADVANCE(849);
      END_STATE();
    case 849:
      if (lookahead == 'y')
        ADVANCE(850);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_specify);
      END_STATE();
    case 851:
      if (lookahead == 'a')
        ADVANCE(852);
      END_STATE();
    case 852:
      if (lookahead == 'r')
        ADVANCE(853);
      END_STATE();
    case 853:
      if (lookahead == 'a')
        ADVANCE(854);
      END_STATE();
    case 854:
      if (lookahead == 'm')
        ADVANCE(855);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_specparam);
      END_STATE();
    case 856:
      if (lookahead == 'a')
        ADVANCE(857);
      if (lookahead == 'r')
        ADVANCE(861);
      END_STATE();
    case 857:
      if (lookahead == 't')
        ADVANCE(858);
      END_STATE();
    case 858:
      if (lookahead == 'i')
        ADVANCE(859);
      END_STATE();
    case 859:
      if (lookahead == 'c')
        ADVANCE(860);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 861:
      if (lookahead == 'i')
        ADVANCE(862);
      if (lookahead == 'o')
        ADVANCE(865);
      if (lookahead == 'u')
        ADVANCE(870);
      END_STATE();
    case 862:
      if (lookahead == 'n')
        ADVANCE(863);
      END_STATE();
    case 863:
      if (lookahead == 'g')
        ADVANCE(864);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 865:
      if (lookahead == 'n')
        ADVANCE(866);
      END_STATE();
    case 866:
      if (lookahead == 'g')
        ADVANCE(867);
      END_STATE();
    case 867:
      if (lookahead == '0')
        ADVANCE(868);
      if (lookahead == '1')
        ADVANCE(869);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_strong0);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_strong1);
      END_STATE();
    case 870:
      if (lookahead == 'c')
        ADVANCE(871);
      END_STATE();
    case 871:
      if (lookahead == 't')
        ADVANCE(872);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 873:
      if (lookahead == 'p')
        ADVANCE(874);
      END_STATE();
    case 874:
      if (lookahead == 'p')
        ADVANCE(875);
      END_STATE();
    case 875:
      if (lookahead == 'l')
        ADVANCE(876);
      END_STATE();
    case 876:
      if (lookahead == 'y')
        ADVANCE(877);
      END_STATE();
    case 877:
      if (lookahead == '0')
        ADVANCE(878);
      if (lookahead == '1')
        ADVANCE(879);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_supply0);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_supply1);
      END_STATE();
    case 880:
      if (lookahead == 'a')
        ADVANCE(881);
      if (lookahead == 'h')
        ADVANCE(891);
      if (lookahead == 'i')
        ADVANCE(894);
      if (lookahead == 'r')
        ADVANCE(910);
      if (lookahead == 'y')
        ADVANCE(930);
      END_STATE();
    case 881:
      if (lookahead == 'b')
        ADVANCE(882);
      if (lookahead == 'g')
        ADVANCE(885);
      if (lookahead == 's')
        ADVANCE(889);
      END_STATE();
    case 882:
      if (lookahead == 'l')
        ADVANCE(883);
      END_STATE();
    case 883:
      if (lookahead == 'e')
        ADVANCE(884);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 885:
      if (lookahead == 'g')
        ADVANCE(886);
      END_STATE();
    case 886:
      if (lookahead == 'e')
        ADVANCE(887);
      END_STATE();
    case 887:
      if (lookahead == 'd')
        ADVANCE(888);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_tagged);
      END_STATE();
    case 889:
      if (lookahead == 'k')
        ADVANCE(890);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_task);
      END_STATE();
    case 891:
      if (lookahead == 'i')
        ADVANCE(892);
      END_STATE();
    case 892:
      if (lookahead == 's')
        ADVANCE(893);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 894:
      if (lookahead == 'm')
        ADVANCE(895);
      END_STATE();
    case 895:
      if (lookahead == 'e')
        ADVANCE(896);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'p')
        ADVANCE(897);
      if (lookahead == 'u')
        ADVANCE(906);
      END_STATE();
    case 897:
      if (lookahead == 'r')
        ADVANCE(898);
      END_STATE();
    case 898:
      if (lookahead == 'e')
        ADVANCE(899);
      END_STATE();
    case 899:
      if (lookahead == 'c')
        ADVANCE(900);
      END_STATE();
    case 900:
      if (lookahead == 'i')
        ADVANCE(901);
      END_STATE();
    case 901:
      if (lookahead == 's')
        ADVANCE(902);
      END_STATE();
    case 902:
      if (lookahead == 'i')
        ADVANCE(903);
      END_STATE();
    case 903:
      if (lookahead == 'o')
        ADVANCE(904);
      END_STATE();
    case 904:
      if (lookahead == 'n')
        ADVANCE(905);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_timeprecision);
      END_STATE();
    case 906:
      if (lookahead == 'n')
        ADVANCE(907);
      END_STATE();
    case 907:
      if (lookahead == 'i')
        ADVANCE(908);
      END_STATE();
    case 908:
      if (lookahead == 't')
        ADVANCE(909);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_timeunit);
      END_STATE();
    case 910:
      if (lookahead == 'a')
        ADVANCE(911);
      if (lookahead == 'i')
        ADVANCE(917);
      if (lookahead == 'u')
        ADVANCE(928);
      END_STATE();
    case 911:
      if (lookahead == 'n')
        ADVANCE(912);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_tran);
      if (lookahead == 'i')
        ADVANCE(913);
      END_STATE();
    case 913:
      if (lookahead == 'f')
        ADVANCE(914);
      END_STATE();
    case 914:
      if (lookahead == '0')
        ADVANCE(915);
      if (lookahead == '1')
        ADVANCE(916);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_tranif0);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_tranif1);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_tri);
      if (lookahead == '0')
        ADVANCE(918);
      if (lookahead == '1')
        ADVANCE(919);
      if (lookahead == 'a')
        ADVANCE(920);
      if (lookahead == 'o')
        ADVANCE(923);
      if (lookahead == 'r')
        ADVANCE(925);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_tri0);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_tri1);
      END_STATE();
    case 920:
      if (lookahead == 'n')
        ADVANCE(921);
      END_STATE();
    case 921:
      if (lookahead == 'd')
        ADVANCE(922);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_triand);
      END_STATE();
    case 923:
      if (lookahead == 'r')
        ADVANCE(924);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_trior);
      END_STATE();
    case 925:
      if (lookahead == 'e')
        ADVANCE(926);
      END_STATE();
    case 926:
      if (lookahead == 'g')
        ADVANCE(927);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_trireg);
      END_STATE();
    case 928:
      if (lookahead == 'e')
        ADVANCE(929);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 930:
      if (lookahead == 'p')
        ADVANCE(931);
      END_STATE();
    case 931:
      if (lookahead == 'e')
        ADVANCE(932);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == 'd')
        ADVANCE(933);
      END_STATE();
    case 933:
      if (lookahead == 'e')
        ADVANCE(934);
      END_STATE();
    case 934:
      if (lookahead == 'f')
        ADVANCE(935);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 936:
      if (lookahead == 'n')
        ADVANCE(937);
      if (lookahead == 'w')
        ADVANCE(951);
      END_STATE();
    case 937:
      if (lookahead == 'i')
        ADVANCE(938);
      if (lookahead == 's')
        ADVANCE(945);
      END_STATE();
    case 938:
      if (lookahead == 'o')
        ADVANCE(939);
      if (lookahead == 'q')
        ADVANCE(941);
      END_STATE();
    case 939:
      if (lookahead == 'n')
        ADVANCE(940);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 941:
      if (lookahead == 'u')
        ADVANCE(942);
      END_STATE();
    case 942:
      if (lookahead == 'e')
        ADVANCE(943);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_unique);
      if (lookahead == '0')
        ADVANCE(944);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_unique0);
      END_STATE();
    case 945:
      if (lookahead == 'i')
        ADVANCE(946);
      END_STATE();
    case 946:
      if (lookahead == 'g')
        ADVANCE(947);
      END_STATE();
    case 947:
      if (lookahead == 'n')
        ADVANCE(948);
      END_STATE();
    case 948:
      if (lookahead == 'e')
        ADVANCE(949);
      END_STATE();
    case 949:
      if (lookahead == 'd')
        ADVANCE(950);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 951:
      if (lookahead == 'i')
        ADVANCE(952);
      END_STATE();
    case 952:
      if (lookahead == 'r')
        ADVANCE(953);
      END_STATE();
    case 953:
      if (lookahead == 'e')
        ADVANCE(954);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_uwire);
      END_STATE();
    case 955:
      if (lookahead == 'a')
        ADVANCE(956);
      if (lookahead == 'e')
        ADVANCE(958);
      if (lookahead == 'o')
        ADVANCE(965);
      END_STATE();
    case 956:
      if (lookahead == 'r')
        ADVANCE(957);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 958:
      if (lookahead == 'c')
        ADVANCE(959);
      END_STATE();
    case 959:
      if (lookahead == 't')
        ADVANCE(960);
      END_STATE();
    case 960:
      if (lookahead == 'o')
        ADVANCE(961);
      END_STATE();
    case 961:
      if (lookahead == 'r')
        ADVANCE(962);
      END_STATE();
    case 962:
      if (lookahead == 'e')
        ADVANCE(963);
      END_STATE();
    case 963:
      if (lookahead == 'd')
        ADVANCE(964);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_vectored);
      END_STATE();
    case 965:
      if (lookahead == 'i')
        ADVANCE(966);
      END_STATE();
    case 966:
      if (lookahead == 'd')
        ADVANCE(967);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 968:
      if (lookahead == 'a')
        ADVANCE(969);
      if (lookahead == 'e')
        ADVANCE(972);
      if (lookahead == 'h')
        ADVANCE(977);
      if (lookahead == 'i')
        ADVANCE(981);
      if (lookahead == 'o')
        ADVANCE(984);
      if (lookahead == 'r')
        ADVANCE(986);
      END_STATE();
    case 969:
      if (lookahead == 'n')
        ADVANCE(970);
      END_STATE();
    case 970:
      if (lookahead == 'd')
        ADVANCE(971);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_wand);
      END_STATE();
    case 972:
      if (lookahead == 'a')
        ADVANCE(973);
      END_STATE();
    case 973:
      if (lookahead == 'k')
        ADVANCE(974);
      END_STATE();
    case 974:
      if (lookahead == '0')
        ADVANCE(975);
      if (lookahead == '1')
        ADVANCE(976);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_weak0);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_weak1);
      END_STATE();
    case 977:
      if (lookahead == 'i')
        ADVANCE(978);
      END_STATE();
    case 978:
      if (lookahead == 'l')
        ADVANCE(979);
      END_STATE();
    case 979:
      if (lookahead == 'e')
        ADVANCE(980);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 981:
      if (lookahead == 'r')
        ADVANCE(982);
      END_STATE();
    case 982:
      if (lookahead == 'e')
        ADVANCE(983);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_wire);
      END_STATE();
    case 984:
      if (lookahead == 'r')
        ADVANCE(985);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_wor);
      END_STATE();
    case 986:
      if (lookahead == 'e')
        ADVANCE(987);
      END_STATE();
    case 987:
      if (lookahead == 'a')
        ADVANCE(988);
      END_STATE();
    case 988:
      if (lookahead == 'l')
        ADVANCE(989);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_wreal);
      END_STATE();
    case 990:
      if (lookahead == 'n')
        ADVANCE(991);
      if (lookahead == 'o')
        ADVANCE(994);
      END_STATE();
    case 991:
      if (lookahead == 'o')
        ADVANCE(992);
      END_STATE();
    case 992:
      if (lookahead == 'r')
        ADVANCE(993);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_xnor);
      END_STATE();
    case 994:
      if (lookahead == 'r')
        ADVANCE(995);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(998);
      if (lookahead == '|')
        ADVANCE(999);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '&')
        ADVANCE(1002);
      if (lookahead == '^')
        ADVANCE(1003);
      if (lookahead == '|')
        ADVANCE(1004);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_TILDE_AMP);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_TILDE_CARET);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_TILDE_PIPE);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 8211)
        ADVANCE(1006);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 1007:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(1008);
      if (lookahead == 'm')
        ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1007);
      END_STATE();
    case 1008:
      if (lookahead == '*')
        ADVANCE(1009);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 1010:
      if (lookahead == 'a')
        ADVANCE(1011);
      if (lookahead == 'o')
        ADVANCE(684);
      END_STATE();
    case 1011:
      if (lookahead == 'c')
        ADVANCE(665);
      END_STATE();
    case 1012:
      if (lookahead == 'a')
        ADVANCE(1013);
      if (lookahead == 's')
        ADVANCE(1023);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1012);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'u')
        ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'o')
        ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'm')
        ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_automatic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'a')
        ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 't')
        ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'i')
        ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_simple_identifier);
      if (lookahead == 'c')
        ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1029:
      if (lookahead == ')')
        ADVANCE(261);
      if (lookahead == '.')
        ADVANCE(1030);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1029);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(1022);
      END_STATE();
    case 1030:
      if (lookahead == '*')
        ADVANCE(280);
      END_STATE();
    case 1031:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1031);
      END_STATE();
    case 1032:
      if (lookahead == '(')
        ADVANCE(1033);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1032);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1034:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(1035);
      if (lookahead == ')')
        ADVANCE(261);
      if (lookahead == '*')
        ADVANCE(1036);
      if (lookahead == ',')
        ADVANCE(273);
      if (lookahead == '=')
        ADVANCE(1037);
      if (lookahead == 'm')
        ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1034);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*')
        ADVANCE(1009);
      END_STATE();
    case 1036:
      if (lookahead == ')')
        ADVANCE(263);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1038:
      if (lookahead == '*')
        ADVANCE(1036);
      if (lookahead == ',')
        ADVANCE(273);
      if (lookahead == '=')
        ADVANCE(1037);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1038);
      END_STATE();
    case 1039:
      if (lookahead == 'e')
        ADVANCE(1040);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1039);
      END_STATE();
    case 1040:
      if (lookahead == 'n')
        ADVANCE(1041);
      END_STATE();
    case 1041:
      if (lookahead == 'd')
        ADVANCE(1042);
      END_STATE();
    case 1042:
      if (lookahead == 'm')
        ADVANCE(483);
      END_STATE();
    case 1043:
      if (lookahead == ';')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1043);
      END_STATE();
    case 1044:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(1035);
      if (lookahead == 'm')
        ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1044);
      END_STATE();
    case 1045:
      if (lookahead == ')')
        ADVANCE(261);
      if (lookahead == ',')
        ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1045);
      END_STATE();
    case 1046:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(1008);
      if (lookahead == ':')
        ADVANCE(1047);
      if (lookahead == 'm')
        ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(1046);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1007},
  [2] = {.lex_state = 1012},
  [3] = {.lex_state = 1029},
  [4] = {.lex_state = 1031},
  [5] = {.lex_state = 1032},
  [6] = {.lex_state = 1012},
  [7] = {.lex_state = 1007},
  [8] = {.lex_state = 1007},
  [9] = {.lex_state = 1034},
  [10] = {.lex_state = 1038},
  [11] = {.lex_state = 1038},
  [12] = {.lex_state = 1038},
  [13] = {.lex_state = 1029},
  [14] = {.lex_state = 1039},
  [15] = {.lex_state = 1043},
  [16] = {.lex_state = 1029},
  [17] = {.lex_state = 1029},
  [18] = {.lex_state = 1044},
  [19] = {.lex_state = 1032},
  [20] = {.lex_state = 1007},
  [21] = {.lex_state = 1012},
  [22] = {.lex_state = 1007},
  [23] = {.lex_state = 1029},
  [24] = {.lex_state = 1007},
  [25] = {.lex_state = 1038},
  [26] = {.lex_state = 1038},
  [27] = {.lex_state = 1029},
  [28] = {.lex_state = 1043},
  [29] = {.lex_state = 1045},
  [30] = {.lex_state = 1045},
  [31] = {.lex_state = 1045},
  [32] = {.lex_state = 1046},
  [33] = {.lex_state = 1039},
  [34] = {.lex_state = 1032},
  [35] = {.lex_state = 1029},
  [36] = {.lex_state = 1038},
  [37] = {.lex_state = 1007},
  [38] = {.lex_state = 1038},
  [39] = {.lex_state = 1043},
  [40] = {.lex_state = 1043},
  [41] = {.lex_state = 1029},
  [42] = {.lex_state = 1045},
  [43] = {.lex_state = 1029},
  [44] = {.lex_state = 1032},
  [45] = {.lex_state = 1039},
  [46] = {.lex_state = 1045},
  [47] = {.lex_state = 1043},
  [48] = {.lex_state = 1045},
  [49] = {.lex_state = 1007},
  [50] = {.lex_state = 1046},
  [51] = {.lex_state = 1029},
  [52] = {.lex_state = 1007},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_endmodule] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_macromodule] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_0] = ACTIONS(3),
    [anon_sym_1] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(3),
    [anon_sym_defparam] = ACTIONS(1),
    [anon_sym_localparam] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(3),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_specparam] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_STAR_COLON_COLON_STAR] = ACTIONS(1),
    [anon_sym_vectored] = ACTIONS(1),
    [anon_sym_scalared] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_automatic] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_chandle] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_shortint] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(3),
    [anon_sym_longint] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(3),
    [anon_sym_bit] = ACTIONS(1),
    [anon_sym_logic] = ACTIONS(1),
    [anon_sym_reg] = ACTIONS(1),
    [anon_sym_shortreal] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(3),
    [anon_sym_realtime] = ACTIONS(1),
    [anon_sym_supply0] = ACTIONS(1),
    [anon_sym_supply1] = ACTIONS(1),
    [anon_sym_tri] = ACTIONS(3),
    [anon_sym_triand] = ACTIONS(1),
    [anon_sym_trior] = ACTIONS(1),
    [anon_sym_trireg] = ACTIONS(1),
    [anon_sym_tri0] = ACTIONS(1),
    [anon_sym_tri1] = ACTIONS(1),
    [anon_sym_uwire] = ACTIONS(1),
    [anon_sym_wire] = ACTIONS(1),
    [anon_sym_wand] = ACTIONS(1),
    [anon_sym_wor] = ACTIONS(1),
    [anon_sym_interconnect] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_tagged] = ACTIONS(1),
    [anon_sym_highz1] = ACTIONS(1),
    [anon_sym_highz0] = ACTIONS(1),
    [anon_sym_strong0] = ACTIONS(1),
    [anon_sym_pull0] = ACTIONS(1),
    [anon_sym_weak0] = ACTIONS(1),
    [anon_sym_strong1] = ACTIONS(1),
    [anon_sym_pull1] = ACTIONS(1),
    [anon_sym_weak1] = ACTIONS(1),
    [anon_sym_small] = ACTIONS(1),
    [anon_sym_medium] = ACTIONS(1),
    [anon_sym_large] = ACTIONS(1),
    [anon_sym_1step] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
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
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_buf] = ACTIONS(3),
    [anon_sym_bufif0] = ACTIONS(1),
    [anon_sym_bufif1] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(3),
    [anon_sym_casex] = ACTIONS(1),
    [anon_sym_casez] = ACTIONS(1),
    [anon_sym_clocking] = ACTIONS(1),
    [anon_sym_const_DASHin_DASHlex] = ACTIONS(1),
    [anon_sym_cmos] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_cover] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_disable] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_edge] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_endcase] = ACTIONS(1),
    [anon_sym_endclocking] = ACTIONS(1),
    [anon_sym_endfunction] = ACTIONS(1),
    [anon_sym_endgenerate] = ACTIONS(1),
    [anon_sym_endpackage] = ACTIONS(1),
    [anon_sym_endprimitive] = ACTIONS(1),
    [anon_sym_endprogram] = ACTIONS(1),
    [anon_sym_endproperty] = ACTIONS(1),
    [anon_sym_endspecify] = ACTIONS(1),
    [anon_sym_endtable] = ACTIONS(1),
    [anon_sym_endtask] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(3),
    [anon_sym_forever] = ACTIONS(1),
    [anon_sym_generate] = ACTIONS(1),
    [anon_sym_genvar] = ACTIONS(1),
    [anon_sym_global_DASHthen_DASHclocking] = ACTIONS(1),
    [anon_sym_global_DASHin_DASHlex] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_iff] = ACTIONS(1),
    [anon_sym_initial] = ACTIONS(1),
    [anon_sym_nand] = ACTIONS(1),
    [anon_sym_negedge] = ACTIONS(1),
    [anon_sym_nmos] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(3),
    [anon_sym_notif0] = ACTIONS(1),
    [anon_sym_notif1] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_pmos] = ACTIONS(1),
    [anon_sym_posedge] = ACTIONS(1),
    [anon_sym_primitive] = ACTIONS(1),
    [anon_sym_priority] = ACTIONS(1),
    [anon_sym_program] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_pulldown] = ACTIONS(1),
    [anon_sym_pullup] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_rcmos] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_rnmos] = ACTIONS(1),
    [anon_sym_rpmos] = ACTIONS(1),
    [anon_sym_rtran] = ACTIONS(3),
    [anon_sym_rtranif0] = ACTIONS(1),
    [anon_sym_rtranif1] = ACTIONS(1),
    [anon_sym_specify] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_task] = ACTIONS(1),
    [anon_sym_timeprecision] = ACTIONS(1),
    [anon_sym_timeunit] = ACTIONS(1),
    [anon_sym_tran] = ACTIONS(3),
    [anon_sym_tranif0] = ACTIONS(1),
    [anon_sym_tranif1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(3),
    [anon_sym_unique0] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_wreal] = ACTIONS(1),
    [anon_sym_xnor] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
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
    [anon_sym_always_comb] = ACTIONS(1),
    [anon_sym_always_latch] = ACTIONS(1),
    [anon_sym_always_ff] = ACTIONS(1),
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
    [anon_sym_AMP_AMP_AMP] = ACTIONS(1),
    [anon_sym_matches] = ACTIONS(1),
    [anon_sym_SQUOTE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS_COLON] = ACTIONS(1),
    [anon_sym_DASH_COLON] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
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
    [anon_sym_AMP_AMP] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(3),
    [sym_real_number] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(3),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DOLLARroot] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [sym__description] = STATE(7),
    [sym_module_header] = STATE(5),
    [sym_module_declaration] = STATE(7),
    [sym_module_keyword] = STATE(6),
    [sym_attribute_instance] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_module_header_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_macromodule] = ACTIONS(7),
    [anon_sym_LPAREN_STAR] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_static] = ACTIONS(11),
    [anon_sym_automatic] = ACTIONS(11),
    [sym_simple_identifier] = ACTIONS(11),
  },
  [3] = {
    [sym_attr_spec] = STATE(10),
    [sym_attr_name] = STATE(11),
    [sym_identifier] = STATE(12),
    [sym_simple_identifier] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [5] = {
    [sym_module_nonansi_header] = STATE(14),
    [sym_list_of_ports] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [6] = {
    [sym_lifetime] = STATE(17),
    [sym_identifier] = STATE(18),
    [sym_module_identifier] = STATE(19),
    [anon_sym_static] = ACTIONS(19),
    [anon_sym_automatic] = ACTIONS(19),
    [sym_simple_identifier] = ACTIONS(21),
  },
  [7] = {
    [sym__description] = STATE(20),
    [sym_module_header] = STATE(5),
    [sym_module_declaration] = STATE(20),
    [sym_module_keyword] = STATE(6),
    [sym_attribute_instance] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_module_header_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_macromodule] = ACTIONS(7),
    [anon_sym_LPAREN_STAR] = ACTIONS(9),
  },
  [8] = {
    [sym_module_keyword] = STATE(21),
    [sym_attribute_instance] = STATE(22),
    [aux_sym_module_header_repeat1] = STATE(22),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_macromodule] = ACTIONS(7),
    [anon_sym_LPAREN_STAR] = ACTIONS(9),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(25),
    [anon_sym_macromodule] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_LPAREN_STAR] = ACTIONS(25),
    [anon_sym_STAR_RPAREN] = ACTIONS(25),
  },
  [10] = {
    [aux_sym_attribute_instance_repeat1] = STATE(25),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_STAR_RPAREN] = ACTIONS(31),
  },
  [11] = {
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_STAR_RPAREN] = ACTIONS(33),
  },
  [12] = {
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_STAR_RPAREN] = ACTIONS(37),
  },
  [13] = {
    [sym_port] = STATE(29),
    [sym__port_expression] = STATE(30),
    [sym__port_reference] = STATE(30),
    [sym_identifier] = STATE(31),
    [sym_port_identifier] = STATE(30),
    [anon_sym_DOT_STAR] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(41),
    [sym_simple_identifier] = ACTIONS(13),
  },
  [14] = {
    [anon_sym_endmodule] = ACTIONS(43),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(45),
  },
  [16] = {
    [sym_simple_identifier] = ACTIONS(47),
  },
  [17] = {
    [sym_identifier] = STATE(18),
    [sym_module_identifier] = STATE(34),
    [sym_simple_identifier] = ACTIONS(13),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_module] = ACTIONS(49),
    [anon_sym_macromodule] = ACTIONS(49),
    [anon_sym_LPAREN_STAR] = ACTIONS(49),
  },
  [19] = {
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [20] = {
    [sym__description] = STATE(20),
    [sym_module_header] = STATE(5),
    [sym_module_declaration] = STATE(20),
    [sym_module_keyword] = STATE(6),
    [sym_attribute_instance] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_module_header_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_module] = ACTIONS(57),
    [anon_sym_macromodule] = ACTIONS(57),
    [anon_sym_LPAREN_STAR] = ACTIONS(60),
  },
  [21] = {
    [sym_lifetime] = STATE(35),
    [sym_identifier] = STATE(18),
    [sym_module_identifier] = STATE(34),
    [anon_sym_static] = ACTIONS(19),
    [anon_sym_automatic] = ACTIONS(19),
    [sym_simple_identifier] = ACTIONS(21),
  },
  [22] = {
    [sym_attribute_instance] = STATE(22),
    [aux_sym_module_header_repeat1] = STATE(22),
    [anon_sym_module] = ACTIONS(63),
    [anon_sym_macromodule] = ACTIONS(63),
    [anon_sym_LPAREN_STAR] = ACTIONS(65),
  },
  [23] = {
    [sym_attr_spec] = STATE(36),
    [sym_attr_name] = STATE(11),
    [sym_identifier] = STATE(12),
    [sym_simple_identifier] = ACTIONS(13),
  },
  [24] = {
    [anon_sym_module] = ACTIONS(68),
    [anon_sym_macromodule] = ACTIONS(68),
    [anon_sym_LPAREN_STAR] = ACTIONS(68),
  },
  [25] = {
    [aux_sym_attribute_instance_repeat1] = STATE(38),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_STAR_RPAREN] = ACTIONS(70),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_STAR_RPAREN] = ACTIONS(72),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(74),
  },
  [28] = {
    [anon_sym_SEMI] = ACTIONS(76),
  },
  [29] = {
    [aux_sym_list_of_ports_repeat1] = STATE(42),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(80),
  },
  [30] = {
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(86),
    [anon_sym_macromodule] = ACTIONS(86),
    [anon_sym_LPAREN_STAR] = ACTIONS(86),
  },
  [33] = {
    [anon_sym_endmodule] = ACTIONS(90),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(92),
  },
  [35] = {
    [sym_identifier] = STATE(18),
    [sym_module_identifier] = STATE(44),
    [sym_simple_identifier] = ACTIONS(13),
  },
  [36] = {
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_STAR_RPAREN] = ACTIONS(94),
  },
  [37] = {
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_macromodule] = ACTIONS(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(96),
  },
  [38] = {
    [aux_sym_attribute_instance_repeat1] = STATE(38),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_STAR_RPAREN] = ACTIONS(94),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(101),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(103),
  },
  [41] = {
    [sym_port] = STATE(46),
    [sym__port_expression] = STATE(30),
    [sym__port_reference] = STATE(30),
    [sym_identifier] = STATE(31),
    [sym_port_identifier] = STATE(30),
    [sym_simple_identifier] = ACTIONS(13),
  },
  [42] = {
    [aux_sym_list_of_ports_repeat1] = STATE(48),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(80),
  },
  [43] = {
    [sym_identifier] = STATE(18),
    [sym_module_identifier] = STATE(49),
    [sym_simple_identifier] = ACTIONS(13),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(107),
  },
  [45] = {
    [anon_sym_endmodule] = ACTIONS(109),
  },
  [46] = {
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(113),
  },
  [48] = {
    [aux_sym_list_of_ports_repeat1] = STATE(48),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(115),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_module] = ACTIONS(118),
    [anon_sym_macromodule] = ACTIONS(118),
    [anon_sym_LPAREN_STAR] = ACTIONS(118),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_module] = ACTIONS(120),
    [anon_sym_macromodule] = ACTIONS(120),
    [anon_sym_LPAREN_STAR] = ACTIONS(120),
  },
  [51] = {
    [sym_identifier] = STATE(18),
    [sym_module_identifier] = STATE(52),
    [sym_simple_identifier] = ACTIONS(13),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_module] = ACTIONS(124),
    [anon_sym_macromodule] = ACTIONS(124),
    [anon_sym_LPAREN_STAR] = ACTIONS(124),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, REDUCE(sym_module_keyword, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [17] = {.count = 1, .reusable = true}, SHIFT(13),
  [19] = {.count = 1, .reusable = false}, SHIFT(16),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(23),
  [31] = {.count = 1, .reusable = true}, SHIFT(24),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_attr_spec, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(26),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_attr_name, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(27),
  [41] = {.count = 1, .reusable = true}, SHIFT(28),
  [43] = {.count = 1, .reusable = true}, SHIFT(32),
  [45] = {.count = 1, .reusable = true}, SHIFT(33),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_lifetime, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_module_identifier, 1, .alias_sequence_id = 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_module_identifier, 1, .alias_sequence_id = 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_header_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_instance, 3),
  [70] = {.count = 1, .reusable = true}, SHIFT(37),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_attr_spec, 2),
  [74] = {.count = 1, .reusable = true}, SHIFT(39),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_ports, 2),
  [78] = {.count = 1, .reusable = true}, SHIFT(40),
  [80] = {.count = 1, .reusable = true}, SHIFT(41),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_port_identifier, 1, .alias_sequence_id = 2),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 3),
  [88] = {.count = 1, .reusable = true}, SHIFT(43),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_module_nonansi_header, 2),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 3),
  [94] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_instance_repeat1, 2),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_instance, 4),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_instance_repeat1, 2), SHIFT_REPEAT(23),
  [101] = {.count = 1, .reusable = true}, SHIFT(45),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_ports, 3),
  [105] = {.count = 1, .reusable = true}, SHIFT(47),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_module_header, 4),
  [109] = {.count = 1, .reusable = true}, SHIFT(50),
  [111] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_of_ports_repeat1, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_list_of_ports, 4),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_of_ports_repeat1, 2), SHIFT_REPEAT(41),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 5),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 6),
  [122] = {.count = 1, .reusable = true}, SHIFT(51),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_module_declaration, 8),
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
