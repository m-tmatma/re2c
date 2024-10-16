#include "src/parse/conf_parser.h"
const char* DEFAULT_SYNTAX_C =
    "// supported feature lists -----------------------------------------------------\n"
    "\n"
    "supported_apis = [\"simple\", \"generic\", \"record\"];\n"
    "supported_api_styles = [\"functions\", \"free-form\"];\n"
    "supported_code_models = [\"goto-label\", \"loop-switch\", \"recursive-functions\"];\n"
    "supported_targets = [\"code\", \"dot\", \"skeleton\"];\n"
    "supported_features = [\"nested-ifs\", \"bitmaps\", \"computed-gotos\", \"case-ranges\",\n"
    "    \"tags\", \"captures\", \"captvars\"];\n"
    "\n"
    "\n"
    "// language-specific options ---------------------------------------------------\n"
    "\n"
    "semicolons = 1;\n"
    "backtick_quoted_strings = 0;\n"
    "single_quoted_strings = 0;\n"
    "indentation_sensitive = 0;\n"
    "wrap_blocks_in_braces = 1;\n"
    "\n"
    "\n"
    "// immutable configurations (command-line only options) ------------------------\n"
    "\n"
    "re2c:target = code;\n"
    "re2c:code-model = goto-label;\n"
    "re2c:input-encoding = ascii;\n"
    "re2c:date = 1;\n"
    "re2c:version = 1;\n"
    "re2c:conditions = 0;\n"
    "re2c:storable-state = 0;\n"
    "re2c:flex-syntax = 0;\n"
    "re2c:verbose = 0;\n"
    "re2c:line-dirs = 1;\n"
    "\n"
    "\n"
    "// mutable configurations ------------------------------------------------------\n"
    "\n"
    "re2c:api = simple;\n"
    "re2c:api:style = functions;\n"
    "re2c:api:sigil = \"@@\";\n"
    "re2c:YYGETCOND:naked = 0;\n"
    "re2c:YYSETCOND:naked = 0;\n"
    "re2c:YYSETCOND@cond = \"@@\";\n"
    "re2c:YYGETSTATE:naked = 0;\n"
    "re2c:YYSETSTATE:naked = 0;\n"
    "re2c:YYSETSTATE@state = \"@@\";\n"
    "re2c:YYFILL@len = \"@@\";\n"
    "re2c:YYFILL:naked = 0;\n"
    "re2c:YYFN = [\"<undefined-function-name>;<undefined-function-type>\"];\n"
    "re2c:yyfn:sep = \";\";\n"
    "re2c:yycond = \"yycond\";\n"
    "re2c:yyctable = \"yyctable\";\n"
    "re2c:yyaccept = \"yyaccept\";\n"
    "re2c:yytarget = \"yytarget\";\n"
    "re2c:yystate = \"yystate\";\n"
    "re2c:yynmatch = \"yynmatch\";\n"
    "re2c:yypmatch = \"yypmatch\";\n"
    "re2c:yyrecord = \"yyrecord\";\n"
    "re2c:yych = \"yych\";\n"
    "re2c:yych:conversion = 0;\n"
    "re2c:yych:literals = char-or-hex;\n"
    "re2c:yych:emit = (.code_model.recursive_functions ? 0 : 1);\n"
    "re2c:yybm = \"yybm\";\n"
    "re2c:yybm:hex = 0;\n"
    "re2c:yyfill = \"\";\n"
    "re2c:yystable = \"\"; // deprecated\n"
    "re2c:header = \"\";\n"
    "re2c:eof = -1;\n"
    "re2c:sentinel = -1;\n"
    "re2c:yyfill:enable = 1;\n"
    "re2c:yyfill:parameter = 1;\n"
    "re2c:yyfill:check = 1;\n"
    "re2c:tags = 0;\n"
    "re2c:tags:prefix = \"yyt\";\n"
    "re2c:captures = 0;\n"
    "re2c:captvars = 0;\n"
    "re2c:posix-captures = 0;\n"
    "re2c:posix-captvars = 0;\n"
    "re2c:invert-captures = 0;\n"
    "re2c:cond:abort = (.code_model.recursive_functions ? 1 : 0); // `abort()` requires include\n"
    "re2c:cond:prefix = \"yyc_\";\n"
    "re2c:cond:enumprefix = \"yyc\";\n"
    "re2c:cond:divider@cond = \"@@\";\n"
    "re2c:cond:goto@cond = \"@@\";\n"
    "re2c:state:abort = (.code_model.recursive_functions ? 1 : 0); // `abort()` requires include\n"
    "re2c:state:nextlabel = 0;\n"
    "re2c:bit-vectors = 0;\n"
    "re2c:debug-output = 0;\n"
    "re2c:computed-gotos = 0;\n"
    "re2c:computed-gotos:threshold = 9;\n"
    "re2c:nested-ifs = 0;\n"
    "re2c:case-insensitive = 0;\n"
    "re2c:case-inverted = 0;\n"
    "re2c:case-ranges = 0;\n"
    "re2c:unsafe = 0;\n"
    "re2c:monadic = 0;\n"
    "re2c:encoding:ebcdic = 0;\n"
    "re2c:encoding:utf32 = 0;\n"
    "re2c:encoding:ucs2 = 0;\n"
    "re2c:encoding:utf16 = 0;\n"
    "re2c:encoding:utf8 = 0;\n"
    "re2c:encoding-policy = ignore;\n"
    "re2c:empty-class = match-empty;\n"
    "re2c:indent:string = \"\\t\";\n"
    "re2c:indent:top = 0;\n"
    "re2c:label:prefix = \"yy\";\n"
    "re2c:label:yyfill = \"yyFillLabel\";\n"
    "re2c:label:yyloop = \"\";\n"
    "re2c:label:yyNext = \"yyNext\";\n"
    "re2c:label:start = 0;\n"
    "\n"
    "\n"
    "// mutable code configuration --------------------------------------------------\n"
    "\n"
    "re2c:YYBACKUP = \"YYBACKUP\";\n"
    "re2c:YYBACKUPCTX = \"YYBACKUPCTX\";\n"
    "re2c:YYCONDTYPE = \"YYCONDTYPE\";\n"
    "re2c:YYCOPYMTAG = sigil \"{lhs} = \" sigil \"{rhs};\";\n"
    "re2c:YYCOPYSTAG = sigil \"{lhs} = \" sigil \"{rhs};\";\n"
    "re2c:YYCTXMARKER = (.api.record ? yyrecord \"->yyctxmarker\" : \"YYCTXMARKER\");\n"
    "re2c:YYCTYPE = \"YYCTYPE\";\n"
    "re2c:YYCURSOR = (.api.record ? yyrecord \"->yycursor\" : \"YYCURSOR\");\n"
    "re2c:YYDEBUG = \"YYDEBUG\";\n"
    "re2c:YYFILL = \"YYFILL\";\n"
    "re2c:YYGETACCEPT = sigil \"{var}\";\n"
    "re2c:YYGETCOND = \"YYGETCONDITION\"; // historic default\n"
    "re2c:YYGETSTATE = \"YYGETSTATE\";\n"
    "re2c:YYINPUT = (.api.record ? yyrecord \"->yyinput\" : \"YYINPUT\");\n"
    "re2c:YYLESSTHAN = \"YYLESSTHAN\";\n"
    "re2c:YYLIMIT = (.api.record ? yyrecord \"->yylimit\" : \"YYLIMIT\");\n"
    "re2c:YYMARKER = (.api.record ? yyrecord \"->yymarker\" : \"YYMARKER\");\n"
    "re2c:YYMAXFILL = \"YYMAXFILL\";\n"
    "re2c:YYMAXNMATCH = \"YYMAXNMATCH\";\n"
    "re2c:YYMTAGN = \"YYMTAGN\";\n"
    "re2c:YYMTAGP = \"YYMTAGP\";\n"
    "re2c:YYPEEK = \"YYPEEK\";\n"
    "re2c:YYRESTORE = \"YYRESTORE\";\n"
    "re2c:YYRESTORECTX = \"YYRESTORECTX\";\n"
    "re2c:YYRESTORETAG = \"YYRESTORETAG\";\n"
    "re2c:YYSETACCEPT = sigil \"{var} = \" sigil \"{val};\";\n"
    "re2c:YYSETCOND = \"YYSETCONDITION\"; // historic default\n"
    "re2c:YYSETSTATE = \"YYSETSTATE\";\n"
    "re2c:YYSHIFT = \"YYSHIFT\";\n"
    "re2c:YYSHIFTSTAG = \"YYSHIFTSTAG\";\n"
    "re2c:YYSHIFTMTAG = \"YYSHIFTMTAG\";\n"
    "re2c:YYSKIP = \"YYSKIP\";\n"
    "re2c:YYSTAGN = \"YYSTAGN\";\n"
    "re2c:YYSTAGP = \"YYSTAGP\";\n"
    "re2c:tags:expression = (.api.record ? yyrecord \"->\") sigil;\n"
    "re2c:tags:negative = (.api.generic ? \"@@\" : \"NULL\");\n"
    "re2c:cond:divider = \"/* *********************************** */\";\n"
    "re2c:cond:goto = \"goto \" sigil \";\";\n"
    "\n"
    "\n"
    "// code templates --------------------------------------------------------------\n"
    "\n"
    "code:var_local = topindent type \" \" name (.init ? \" = \" init) \";\" nl;\n"
    "code:var_global = code:var_local;\n"
    "\n"
    "code:const_local = topindent type \" \" name \" = \" init \";\" nl;\n"
    "code:const_global = topindent \"#define \" name \" \" init nl;\n"
    "\n"
    "code:array_local =\n"
    "    topindent type \" \" name \"[\" size \"] = {\" nl indent\n"
    "        [row{0:-2}: topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem \",\"] nl]\n"
    "        [row{-1}:   topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem]     nl]\n"
    "    dedent topindent \"};\" nl;\n"
    "\n"
    "code:array_global = code:array_local;\n"
    "\n"
    "code:array_elem = array \"[\" index \"]\";\n"
    "\n"
    "code:enum =\n"
    "    \"enum \" name \" {\" nl indent\n"
    "        [elem{0:-2}: topindent elem (.init ? \" = \" init) \",\" nl]\n"
    "        [elem{-1}:   topindent elem (.init ? \" = \" init) nl]\n"
    "    dedent \"};\" nl;\n"
    "\n"
    "code:enum_elem = name;\n"
    "\n"
    "code:assign = topindent lhs \" = \" rhs \";\" nl;\n"
    "\n"
    "code:type_int = \"int\";\n"
    "code:type_uint = \"unsigned int\";\n"
    "code:type_cond_enum = <undefined>;\n"
    "code:type_yybm = \"static const unsigned char\";\n"
    "code:type_yytarget = \"static const void*\";\n"
    "\n"
    "code:cmp_eq = \"==\";\n"
    "code:cmp_ne = \"!=\";\n"
    "code:cmp_lt = \"<\";\n"
    "code:cmp_gt = \">\";\n"
    "code:cmp_le = \"<=\";\n"
    "code:cmp_ge = \">=\";\n"
    "\n"
    "code:if_then_else =\n"
    "    [branch{0}: topindent \"if (\" cond \") {\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    [branch{1:-1}: topindent \"} else \" (.cond ? \"if (\" cond \") \") \"{\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:if_then_else_oneline =\n"
    "    [branch{0}:    topindent \"if (\" cond \") \" [stmt: stmt] nl]\n"
    "    [branch{1:-1}: topindent \"else \" (.cond ? \"if (\" cond \") \") [stmt: stmt] nl];\n"
    "\n"
    "code:switch =\n"
    "    topindent \"switch (\" expr \") {\" nl\n"
    "        indent [case: case] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:switch_cases =\n"
    "    [case: case nl]\n"
    "        indent [stmt: stmt] dedent;\n"
    "\n"
    "code:switch_cases_oneline =\n"
    "    [case{0:-2}: case nl]\n"
    "    [case{-1}:   case \" \" [stmt: stmt] nl];\n"
    "\n"
    "code:switch_case_range = (.case_ranges\n"
    "    ? topindent \"case \" [val{0}: val] (.many ? \" ... \" [val{-1}: val]) \":\"\n"
    "    : [val{0:-2}: topindent \"case \" val \":\" nl]\n"
    "      [val{-1}:   topindent \"case \" val \":\"]);\n"
    "\n"
    "code:switch_case_default =\n"
    "    topindent \"default:\";\n"
    "\n"
    "code:loop =\n"
    "    topindent \"for (;;) {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:continue = topindent \"continue;\" nl;\n"
    "\n"
    "code:goto = topindent \"goto \" label \";\" nl;\n"
    "\n"
    "code:fndecl =\n"
    "    topindent type \" \" name \"(\"\n"
    "        [arg{0:-2}: argtype \" \" argname \", \"]\n"
    "        [arg{-1}:   argtype \" \" argname]\n"
    "    \");\" nl;\n"
    "\n"
    "code:fndef =\n"
    "    topindent type \" \" name \"(\"\n"
    "        [arg{0:-2}: argtype \" \" argname \", \"]\n"
    "        [arg{-1}:   argtype \" \" argname]\n"
    "    \") {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    \"}\" nl;\n"
    "\n"
    "code:fncall =\n"
    "    topindent (.retval ? retval \" = \") name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \");\" nl;\n"
    "\n"
    "code:tailcall =\n"
    "    topindent (.retval ? \"return \") name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \");\" nl;\n"
    "\n"
    "code:recursive_functions =\n"
    "    [fn: fndecl] nl\n"
    "    [fn: fndef nl];\n"
    "\n"
    "code:fingerprint =\n"
    "    \"/* Generated by re2c\" (.version ? \" \" version) (.date ? \" on \" date) \" */\" nl;\n"
    "\n"
    "code:line_info = \"#line \" line \" \\\"\" file \"\\\"\" nl;\n"
    "\n"
    "code:abort = topindent \"abort();\" nl;\n"
    "\n"
    "code:yydebug =\n"
    "    topindent (.api.generic\n"
    "        ? YYDEBUG (.api_style.functions ? \"();\")\n"
    "    : (.api.record\n"
    "        ? YYDEBUG \"(\" yyrecord \");\"\n"
    "        : YYDEBUG \"(\" state \", \" yych \");\"\n"
    "    )) nl;\n"
    "\n"
    "code:yypeek =\n"
    "    topindent (.code_model.recursive_functions ? YYCTYPE \" \") yych \" = \" (.api.generic\n"
    "        ? YYPEEK (.api_style.functions ? \"()\")\n"
    "        : (.cast ? \"(\" YYCTYPE \")\") \"*\" YYCURSOR\n"
    "    ) \";\" nl;\n"
    "\n"
    "code:yyskip =\n"
    "    topindent (.api.generic\n"
    "        ? YYSKIP (.api_style.functions ? \"();\")\n"
    "        : \"++\" YYCURSOR \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yybackup =\n"
    "    topindent (.api.generic\n"
    "        ? YYBACKUP (.api_style.functions ? \"();\")\n"
    "        : YYMARKER \" = \" YYCURSOR \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yybackupctx =\n"
    "    topindent (.api.generic\n"
    "        ? YYBACKUPCTX (.api_style.functions ? \"();\")\n"
    "        : YYCTXMARKER \" = \" YYCURSOR \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyskip_yypeek =\n"
    "    topindent (.code_model.recursive_functions ? YYCTYPE \" \") yych \" = \"\n"
    "        (.cast ? \"(\" YYCTYPE \")\") \"*++\" YYCURSOR \";\" nl;\n"
    "\n"
    "code:yypeek_yyskip =\n"
    "    topindent (.code_model.recursive_functions ? YYCTYPE \" \") yych \" = \"\n"
    "        (.cast ? \"(\" YYCTYPE \")\") \"*\" YYCURSOR \"++;\" nl;\n"
    "\n"
    "code:yyskip_yybackup =\n"
    "    topindent YYMARKER \" = ++\" YYCURSOR \";\" nl;\n"
    "\n"
    "code:yybackup_yyskip =\n"
    "    topindent YYMARKER \" = \" YYCURSOR \"++;\" nl;\n"
    "\n"
    "code:yybackup_yypeek =\n"
    "    topindent (.code_model.recursive_functions ? YYCTYPE \" \") yych \" = \"\n"
    "        (.cast ? \"(\" YYCTYPE \")\") \"*(\" YYMARKER \" = \" YYCURSOR \");\" nl;\n"
    "\n"
    "code:yyskip_yybackup_yypeek =\n"
    "    topindent (.code_model.recursive_functions ? YYCTYPE \" \") yych \" = \"\n"
    "        (.cast ? \"(\" YYCTYPE \")\") \"*(\" YYMARKER \" = ++\" YYCURSOR \");\" nl;\n"
    "\n"
    "code:yybackup_yypeek_yyskip =\n"
    "    topindent (.code_model.recursive_functions ? YYCTYPE \" \") yych \" = \"\n"
    "        (.cast ? \"(\" YYCTYPE \")\") \"*(\" YYMARKER \" = \" YYCURSOR \"++);\" nl;\n"
    "\n"
    "code:yyrestore =\n"
    "    topindent (.api.generic\n"
    "        ? YYRESTORE (.api_style.functions ? \"();\")\n"
    "        : YYCURSOR \" = \" YYMARKER \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestorectx =\n"
    "    topindent (.api.generic\n"
    "        ? YYRESTORECTX (.api_style.functions ? \"();\")\n"
    "        : YYCURSOR \" = \" YYCTXMARKER \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestoretag =\n"
    "    topindent (.api.generic\n"
    "        ? YYRESTORETAG (.api_style.functions ? \"(\" tag \");\")\n"
    "        : YYCURSOR \" = \" tag \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyshift =\n"
    "    topindent (.api.generic\n"
    "        ? YYSHIFT (.api_style.functions ? \"(-\" offset \");\")\n"
    "        : YYCURSOR \" -= \" offset \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyshiftstag =\n"
    "    topindent (.nested ? \"if (\" tag \" != \" neg \") \") (.api.generic\n"
    "        ? YYSHIFTSTAG (.api_style.functions ? \"(\" tag \", -\" offset \");\")\n"
    "        : tag \" -= \" offset \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyshiftmtag =\n"
    "    topindent YYSHIFTMTAG (.api_style.functions ? \"(\" tag \", -\" offset \");\") nl;\n"
    "\n"
    "code:yystagp =\n"
    "    topindent (.api.generic\n"
    "        ? YYSTAGP (.api_style.functions ? \"(\" tag \");\")\n"
    "        : tag \" = \" YYCURSOR \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagp =\n"
    "    topindent YYMTAGP (.api_style.functions ? \"(\" tag \");\") nl;\n"
    "\n"
    "code:yystagn =\n"
    "    topindent (.api.generic\n"
    "        ? YYSTAGN (.api_style.functions ? \"(\" tag \");\")\n"
    "        : tag \" = \" neg \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagn =\n"
    "    topindent YYMTAGN (.api_style.functions ? \"(\" tag \");\") nl;\n"
    "\n"
    "code:yycopystag =\n"
    "    topindent (.api.generic\n"
    "        ? YYCOPYSTAG // function style is not supported, as there's no sensible default\n"
    "        : lhs \" = \" rhs \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yycopymtag =\n"
    "    topindent (.api.generic\n"
    "        ? YYCOPYMTAG // function style is not supported, as there's no sensible default\n"
    "        : lhs \" = \" rhs \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yygetaccept =\n"
    "    (.api.generic\n"
    "        ? YYGETACCEPT // function style is not supported, as there's no sensible default\n"
    "        : (.api.record & (.storable_state | .code_model.recursive_functions) ? yyrecord \"->\") var);\n"
    "\n"
    "code:yysetaccept =\n"
    "    topindent (.api.generic\n"
    "        ? YYSETACCEPT // function style is not supported, as there's no sensible default\n"
    "        : (.api.record & (.storable_state | .code_model.recursive_functions) ? yyrecord \"->\")\n"
    "            var \" = \" val \";\"\n"
    "    ) nl;\n"
    "\n"
    "// Historically simple API did not provide default definition for YYGETCOND.\n"
    "// Changing it would break backwards compatibility, as there may be a macro definition\n"
    "// not based on `yycond` that re2c is unable to see, e.g. included from a header file.\n"
    "code:yygetcond =\n"
    "    (.api.generic | .api.simple\n"
    "        ? YYGETCOND (.api_style.functions ? \"()\")\n"
    "        : yyrecord \"->\" var);\n"
    "\n"
    "// Historically simple API did not provide default definition for YYSETCOND.\n"
    "// Changing it would break backwards compatibility, as there may be a macro definition\n"
    "// not based on `yycond` that re2c is unable to see, e.g. included from a header file.\n"
    "code:yysetcond =\n"
    "    topindent (.api.generic | .api.simple\n"
    "        ? YYSETCOND (.api_style.functions ? \"(\" val \");\")\n"
    "        : yyrecord \"->\" var \" = \" val \";\"\n"
    "    ) nl;\n"
    "\n"
    "// Historically simple API did not provide default definition for YYGETSTATE.\n"
    "// Changing it would break backwards compatibility, as there may be a macro definition\n"
    "// not based on `yystate` that re2c is unable to see, e.g. included from a header file.\n"
    "code:yygetstate =\n"
    "    (.api.generic | .api.simple\n"
    "        ? YYGETSTATE (.api_style.functions ? \"()\")\n"
    "        : yyrecord \"->\" var);\n"
    "\n"
    "// Historically simple API did not provide default definition for YYSETSTATE.\n"
    "// Changing it would break backwards compatibility, as there may be a macro definition\n"
    "// not based on `yystate` that re2c is unable to see, e.g. included from a header file.\n"
    "code:yysetstate =\n"
    "    topindent (.api.generic | .api.simple\n"
    "        ? YYSETSTATE (.api_style.functions ? \"(\" val \");\")\n"
    "        : yyrecord \"->\" var \" = \" val \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yylessthan =\n"
    "    (.api.generic\n"
    "        ? YYLESSTHAN (.api_style.functions ? \"(\" need \")\")\n"
    "        : (.many\n"
    "            ? \"(\" YYLIMIT \" - \" YYCURSOR \") < \" need\n"
    "            : YYLIMIT \" <= \" YYCURSOR));\n"
    "\n"
    "code:yybm_filter = yych \" & ~0xFF\";\n"
    "\n"
    "code:yybm_match = yybm \"[\" offset \"+\" yych \"] & \" mask;\n"
    ;
