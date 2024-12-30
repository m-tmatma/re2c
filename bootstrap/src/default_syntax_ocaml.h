static constexpr const char* DEFAULT_SYNTAX_OCAML =
    "// supported feature lists -----------------------------------------------------\n"
    "\n"
    "supported_apis = [\"record\", \"generic\"];\n"
    "supported_api_styles = [\"free-form\"];\n"
    "supported_code_models = [\"recursive-functions\"];\n"
    "supported_targets = [\"code\", \"dot\"];\n"
    "supported_features = [\"nested-ifs\", \"bitmaps\", \"case-ranges\",\n"
    "    \"tags\", \"captures\", \"captvars\"];\n"
    "\n"
    "\n"
    "// language-specific options ---------------------------------------------------\n"
    "\n"
    "semicolons = 0;\n"
    "backtick_quoted_strings = 0;\n"
    "single_quoted_strings = 0;\n"
    "indentation_sensitive = 0;\n"
    "wrap_blocks_in_braces = 0;\n"
    "special_escapes = \"\\b\\n\\r\\t\\\\'\\\"\";\n"
    "\n"
    "\n"
    "// immutable configurations (command-line only options) ------------------------\n"
    "\n"
    "re2c:target = code;\n"
    "re2c:code-model = recursive-functions;\n"
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
    "re2c:api = record;\n"
    "re2c:api:style = free-form;\n"
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
    "re2c:yych:literals = char;\n"
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
    "re2c:cond:abort = 0; // default case causes [redundant-case] warnings\n"
    "re2c:cond:prefix = \"yyc_\";\n"
    "re2c:cond:enumprefix = \"YYC_\";\n"
    "re2c:cond:divider@cond = \"@@\";\n"
    "re2c:cond:goto@cond = \"@@\";\n"
    "re2c:state:abort = 1;\n"
    "re2c:state:nextlabel = 0;\n"
    "re2c:bit-vectors = 0;\n"
    "re2c:debug-output = 0;\n"
    "re2c:computed-gotos = 0;\n"
    "re2c:computed-gotos:threshold = 9;\n"
    "re2c:nested-ifs = 0;\n"
    "re2c:case-insensitive = 0;\n"
    "re2c:case-inverted = 0;\n"
    "re2c:case-ranges = 1;\n"
    "re2c:unsafe = 0;\n"
    "re2c:monadic = 0;\n"
    "re2c:encoding:ebcdic = 0;\n"
    "re2c:encoding:utf32 = 0;\n"
    "re2c:encoding:ucs2 = 0;\n"
    "re2c:encoding:utf16 = 0;\n"
    "re2c:encoding:utf8 = 0;\n"
    "re2c:encoding-policy = ignore;\n"
    "re2c:empty-class = match-empty;\n"
    "re2c:indent:string = \"    \";\n"
    "re2c:indent:top = 0;\n"
    "re2c:label:prefix = \"yy\"; // used for generating function names\n"
    "re2c:label:yyfill = \"\";\n"
    "re2c:label:yyloop = \"\";\n"
    "re2c:label:yyNext = \"\";\n"
    "re2c:label:start = 0;\n"
    "\n"
    "\n"
    "// mutable code configuration --------------------------------------------------\n"
    "\n"
    "re2c:YYBACKUP = \"yybackup\";\n"
    "re2c:YYBACKUPCTX = \"yybackupctx\";\n"
    "re2c:YYCONDTYPE = \"yycondtype\";\n"
    "re2c:YYCOPYMTAG = sigil \"{lhs} <- \" sigil \"{rhs};\";\n"
    "re2c:YYCOPYSTAG = sigil \"{lhs} <- \" sigil \"{rhs};\";\n"
    "re2c:YYCTYPE = \"char\";\n"
    "re2c:YYCTXMARKER = (.api.record ? yyrecord \".\") \"yyctxmarker\";\n"
    "re2c:YYCURSOR = (.api.record ? yyrecord \".\") \"yycursor\";\n"
    "re2c:YYDEBUG = \"yydebug\";\n"
    "re2c:YYFILL = \"yyfill\";\n"
    "re2c:YYGETACCEPT = sigil \"{var}\";\n"
    "re2c:YYGETCOND = \"yygetcond\";\n"
    "re2c:YYGETSTATE = \"yygetstate\";\n"
    "re2c:YYINPUT = (.api.record ? yyrecord \".\") \"yyinput\";\n"
    "re2c:YYLESSTHAN = \"yylesthan\";\n"
    "re2c:YYLIMIT = (.api.record ? yyrecord \".\") \"yylimit\";\n"
    "re2c:YYMARKER = (.api.record ? yyrecord \".\") \"yymarker\";\n"
    "re2c:YYMAXFILL = \"yymaxfill\";\n"
    "re2c:YYMAXNMATCH = \"yymaxnmatch\";\n"
    "re2c:YYMTAGN = \"yymatgn\";\n"
    "re2c:YYMTAGP = \"yymtagp\";\n"
    "re2c:YYPEEK = (.api.record ? \"unsafe_get\" : \"yypeek\");\n"
    "re2c:YYRESTORE = \"yyrestore\";\n"
    "re2c:YYRESTORECTX = \"yyrestorectx\";\n"
    "re2c:YYRESTORETAG = \"yyrestoretag\";\n"
    "re2c:YYSETACCEPT = sigil \"{var} <- \" sigil \"{val};\";\n"
    "re2c:YYSETCOND = \"yysetcond\";\n"
    "re2c:YYSETSTATE = \"yysetstate\";\n"
    "re2c:YYSHIFT = \"yyshift\";\n"
    "re2c:YYSHIFTSTAG = \"yyshiftstag\";\n"
    "re2c:YYSHIFTMTAG = \"yyshiftmtag\";\n"
    "re2c:YYSKIP = \"yyskip\";\n"
    "re2c:YYSTAGN = \"yystagn\";\n"
    "re2c:YYSTAGP = \"yystagp\";\n"
    "re2c:tags:expression = (.api.record ? yyrecord \".\") sigil;\n"
    "re2c:tags:negative = (.api.generic ? \"@@\" : \"-1\");\n"
    "re2c:cond:divider = \"\";\n"
    "re2c:cond:goto = \"\";\n"
    "\n"
    "\n"
    "// code templates --------------------------------------------------------------\n"
    "\n"
    "code:var_local = topindent \"let \" name \" = \" init \" in\" nl;\n"
    "code:var_global = topindent \"let \" name \" = \" init nl;\n"
    "\n"
    "code:const_local = topindent \"let \" name \" = \" init \" in\" nl;\n"
    "code:const_global = topindent \"let \" name \" = \" init nl;\n"
    "\n"
    "code:array_local =\n"
    "    topindent \"and \" name \" = [|\" nl indent\n"
    "        [row: topindent [elem{0:-2}: elem \"; \"] [elem{-1}: elem \";\"] nl]\n"
    "    dedent topindent \"|]\" nl;\n"
    "\n"
    "code:array_global = code:array_local;\n"
    "\n"
    "code:array_elem = array \".(\" index \")\";\n"
    "\n"
    "code:enum =\n"
    "    \"type \" type \" = \"\n"
    "        [elem{0}:          elem]\n"
    "        [elem{1:-1}: \" | \" elem]\n"
    "    nl;\n"
    "\n"
    "code:enum_elem = name;\n"
    "\n"
    "code:assign = topindent lhs \" <- \" rhs \";\" nl;\n"
    "\n"
    "code:type_int = \"int\";\n"
    "code:type_uint = \"uint\";\n"
    "code:type_yybm = \"int\";\n"
    "code:type_yytarget = <undefined>;\n"
    "\n"
    "code:cmp_eq = \"==\"; // physical equality, as this is used to compare primitive values\n"
    "code:cmp_ne = \"!=\"; // physical inequality, as this is used to compare primitive values\n"
    "code:cmp_lt = \"<\";\n"
    "code:cmp_gt = \">\";\n"
    "code:cmp_le = \"<=\";\n"
    "code:cmp_ge = \">=\";\n"
    "\n"
    "code:if_then_else =\n"
    "    [branch{0}: topindent \"if (\" cond \") then (\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    [branch{1:-1}: topindent \") else \" (.cond ? \"if (\" cond \") then \") \"(\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    topindent \")\" nl;\n"
    "\n"
    "code:if_then_else_oneline =\n"
    "    [branch{0}: topindent \"if (\" cond \") then \" [stmt: stmt] nl]\n"
    "    [branch{1:-1}: topindent \"else \" (.cond ? \"if (\" cond \") then \") [stmt: stmt] nl];\n"
    "\n"
    "code:switch =\n"
    "    topindent \"match \" expr \" with\" nl\n"
    "        indent [case: case] dedent;\n"
    "\n"
    "code:switch_cases =\n"
    "    [case{0:-2}: topindent \"| \" case nl]\n"
    "    [case{-1}:   topindent \"| \" case \" ->\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    ];\n"
    "\n"
    "code:switch_cases_oneline =\n"
    "    [case{0:-2}: topindent \"| \" case nl]\n"
    "    [case{-1}:   topindent \"| \" case \" -> \" [stmt: stmt] nl];\n"
    "\n"
    "// In OCaml only literals of type `char` support case ranges.\n"
    "// For `int`, we have to explicitly list all range values. We cannot use\n"
    "//     `\"c when \" [val{0}: val] \" <= c && c <= \" [val{-1}: val]`\n"
    "// as it causes error when there are multiple cases:\n"
    "//     `Error: Variable c must occur on both sides of this | pattern`.\n"
    "code:switch_case_range = (.char_literals\n"
    "    ? [val{0}: val] (.many ? \"..\" [val{-1}: val])\n"
    "    : [val{0}: val] [val{1:-1}: \"|\" val]);\n"
    "\n"
    "code:switch_case_default = \"_\";\n"
    "\n"
    "code:loop = <undefined>;\n"
    "\n"
    "code:continue = <undefined>;\n"
    "\n"
    "code:goto = <undefined>;\n"
    "\n"
    "code:fndecl = <undefined>;\n"
    "\n"
    "code:fndef =\n"
    "    name [arg: \" (\" argname \" : \" argtype \")\"] \" : \" type \" =\" nl\n"
    "        indent [stmt: stmt] dedent;\n"
    "\n"
    "code:fncall =\n"
    "    topindent (.retval ? \"let \" retval \" = \")\n"
    "        \"(\" name \" [@tailcall])\" (.args ? [arg: \" \" arg] : \" ()\") nl;\n"
    "\n"
    "code:tailcall = topindent \"(\" name \" [@tailcall])\" (.args ? [arg: \" \" arg] : \" ()\") nl;\n"
    "\n"
    "code:recursive_functions =\n"
    "    [fn{0}:    \"let rec \" fndef nl]\n"
    "    [fn{1:-1}: \"and \"     fndef nl];\n"
    "\n"
    "code:fingerprint =\n"
    "    \"(* Generated by re2ocaml\" (.version ? \" \" version) (.date ? \" on \" date) \" *)\" nl;\n"
    "\n"
    "code:line_info = \"#\" line \" \\\"\" file \"\\\"\" nl;\n"
    "\n"
    "code:abort = topindent \"raise (Failure \\\"internal lexer error\\\")\" nl;\n"
    "\n"
    "code:yydebug =\n"
    "    topindent (.api.record\n"
    "        ? YYDEBUG \" \" yyrecord\n"
    "        : YYDEBUG\n"
    "    ) nl;\n"
    "\n"
    "code:yypeek =\n"
    "    topindent (.api.record\n"
    "        ? \"let \" yych \" = \" YYPEEK \" \" YYINPUT \" \" YYCURSOR \" in\"\n"
    "        : \"let \" yych \" = \" YYPEEK \" in\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyskip =\n"
    "    topindent (.api.record\n"
    "        ? YYCURSOR \" <- \" YYCURSOR \" + 1;\"\n"
    "        : YYSKIP\n"
    "    ) nl;\n"
    "\n"
    "code:yybackup =\n"
    "    topindent (.api.record\n"
    "        ? YYMARKER \" <- \" YYCURSOR \";\"\n"
    "        : YYBACKUP\n"
    "    ) nl;\n"
    "\n"
    "code:yybackupctx =\n"
    "    topindent (.api.record\n"
    "        ? YYCTXMARKER \" <- \" YYCURSOR \";\"\n"
    "        : YYBACKUPCTX\n"
    "    ) nl;\n"
    "\n"
    "code:yyskip_yypeek = <undefined>;\n"
    "code:yypeek_yyskip = <undefined>;\n"
    "code:yyskip_yybackup = <undefined>;\n"
    "code:yybackup_yyskip = <undefined>;\n"
    "code:yybackup_yypeek = <undefined>;\n"
    "code:yyskip_yybackup_yypeek = <undefined>;\n"
    "code:yybackup_yypeek_yyskip = <undefined>;\n"
    "\n"
    "code:yyrestore =\n"
    "    topindent (.api.record\n"
    "        ? YYCURSOR \" <- \" YYMARKER \";\"\n"
    "        : YYRESTORE\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestorectx =\n"
    "    topindent (.api.record\n"
    "        ? YYCURSOR \" <- \" YYCTXMARKER \";\"\n"
    "        : YYRESTORECTX\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestoretag =\n"
    "    topindent (.api.record\n"
    "        ? YYCURSOR \" <- \" tag \";\"\n"
    "        : YYRESTORETAG\n"
    "    ) nl;\n"
    "\n"
    "code:yyshift =\n"
    "    topindent (.api.record\n"
    "        ? YYCURSOR \" <- \" YYCURSOR \" - \" offset \";\"\n"
    "        : YYSHIFT\n"
    "    ) nl;\n"
    "\n"
    "code:yyshiftstag =\n"
    "    topindent (.nested ? \"if \" tag \" <> \" neg \" then \") (.api.record\n"
    "        ? tag \" <- \" tag \" - \" offset \";\"\n"
    "        : YYSHIFTSTAG\n"
    "    ) nl;\n"
    "\n"
    "code:yyshiftmtag =\n"
    "    topindent YYSHIFTMTAG nl;\n"
    "\n"
    "code:yystagp =\n"
    "    topindent (.api.record\n"
    "        ? tag \" <- \" YYCURSOR \";\"\n"
    "        : YYSTAGP\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagp =\n"
    "    topindent YYMTAGP nl;\n"
    "\n"
    "code:yystagn =\n"
    "    topindent (.api.record\n"
    "        ? tag \" <- \" neg \";\"\n"
    "        : YYSTAGN\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagn =\n"
    "    topindent YYMTAGN nl;\n"
    "\n"
    "code:yycopystag =\n"
    "    topindent (.api.record\n"
    "        ? lhs \" <- \" rhs \";\"\n"
    "        : YYCOPYSTAG\n"
    "    ) nl;\n"
    "\n"
    "code:yycopymtag =\n"
    "    topindent (.api.record\n"
    "        ? lhs \" <- \" rhs \";\"\n"
    "        : YYCOPYMTAG\n"
    "    ) nl;\n"
    "\n"
    "code:yygetaccept =\n"
    "    (.api.record ? yyrecord \".\" var : YYGETACCEPT);\n"
    "\n"
    "code:yysetaccept =\n"
    "    topindent (.api.record\n"
    "        ? yyrecord \".\" var \" <- \" val \";\"\n"
    "        : YYSETACCEPT\n"
    "    ) nl;\n"
    "\n"
    "code:yygetcond =\n"
    "    (.api.record ? yyrecord \".\" var : YYGETCOND);\n"
    "\n"
    "code:yysetcond =\n"
    "    topindent (.api.record\n"
    "        ? yyrecord \".\" var \" <- \" val \";\"\n"
    "        : YYSETCOND\n"
    "    ) nl;\n"
    "\n"
    "code:yygetstate =\n"
    "    (.api.record ? yyrecord \".\" var : YYGETSTATE);\n"
    "\n"
    "code:yysetstate =\n"
    "    topindent (.api.record\n"
    "        ? yyrecord \".\" var \" <- \" val \";\"\n"
    "        : YYSETSTATE\n"
    "    ) nl;\n"
    "\n"
    "code:yylessthan =\n"
    "    (.api.record\n"
    "        ? (.many\n"
    "            ? \"(\" YYLIMIT \" - \" YYCURSOR \") < \" need\n"
    "            : YYLIMIT \" <= \" YYCURSOR)\n"
    "        : YYLESSTHAN);\n"
    "\n"
    "code:yybm_filter = yych \" land ~0xFF\";\n"
    "\n"
    "code:yybm_match = \"(\" yybm \".(\" offset \" + Char.code \" yych \") land \" mask \") != 0\";\n"
    ;