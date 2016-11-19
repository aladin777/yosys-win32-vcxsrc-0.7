/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         frontend_verilog_yyparse
#define yylex           frontend_verilog_yylex
#define yyerror         frontend_verilog_yyerror
#define yydebug         frontend_verilog_yydebug
#define yynerrs         frontend_verilog_yynerrs

#define yylval          frontend_verilog_yylval
#define yychar          frontend_verilog_yychar

/* Copy the first part of user declarations.  */
#line 36 "frontends/verilog/verilog_parser.y" /* yacc.c:339  */

#include <list>
#include <string.h>
#include "frontends/verilog/verilog_frontend.h"
#include "kernel/log.h"

USING_YOSYS_NAMESPACE
using namespace AST;
using namespace VERILOG_FRONTEND;

YOSYS_NAMESPACE_BEGIN
namespace VERILOG_FRONTEND {
	int port_counter;
	std::map<std::string, int> port_stubs;
	std::map<std::string, AstNode*> attr_list, default_attr_list;
	std::map<std::string, AstNode*> *albuf;
	std::vector<AstNode*> ast_stack;
	struct AstNode *astbuf1, *astbuf2, *astbuf3;
	struct AstNode *current_function_or_task;
	struct AstNode *current_ast, *current_ast_mod;
	int current_function_or_task_port_id;
	std::vector<char> case_type_stack;
	bool do_not_require_port_stubs;
	bool default_nettype_wire;
	bool sv_mode, formal_mode, lib_mode;
	bool norestrict_mode, assume_asserts_mode;
	std::istream *lexin;
}
YOSYS_NAMESPACE_END

static void append_attr(AstNode *ast, std::map<std::string, AstNode*> *al)
{
	for (auto &it : *al) {
		if (ast->attributes.count(it.first) > 0)
			delete ast->attributes[it.first];
		ast->attributes[it.first] = it.second;
	}
	delete al;
}

static void append_attr_clone(AstNode *ast, std::map<std::string, AstNode*> *al)
{
	for (auto &it : *al) {
		if (ast->attributes.count(it.first) > 0)
			delete ast->attributes[it.first];
		ast->attributes[it.first] = it.second->clone();
	}
}

static void free_attr(std::map<std::string, AstNode*> *al)
{
	for (auto &it : *al)
		delete it.second;
	delete al;
}


#line 132 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "verilog_parser.tab.h".  */
#ifndef YY_FRONTEND_VERILOG_YY_FRONTENDS_VERILOG_VERILOG_PARSER_TAB_H_INCLUDED
# define YY_FRONTEND_VERILOG_YY_FRONTENDS_VERILOG_VERILOG_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int frontend_verilog_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_STRING = 258,
    TOK_ID = 259,
    TOK_CONST = 260,
    TOK_REALVAL = 261,
    TOK_PRIMITIVE = 262,
    ATTR_BEGIN = 263,
    ATTR_END = 264,
    DEFATTR_BEGIN = 265,
    DEFATTR_END = 266,
    TOK_MODULE = 267,
    TOK_ENDMODULE = 268,
    TOK_PARAMETER = 269,
    TOK_LOCALPARAM = 270,
    TOK_DEFPARAM = 271,
    TOK_PACKAGE = 272,
    TOK_ENDPACKAGE = 273,
    TOK_PACKAGESEP = 274,
    TOK_INPUT = 275,
    TOK_OUTPUT = 276,
    TOK_INOUT = 277,
    TOK_WIRE = 278,
    TOK_REG = 279,
    TOK_INTEGER = 280,
    TOK_SIGNED = 281,
    TOK_ASSIGN = 282,
    TOK_ALWAYS = 283,
    TOK_INITIAL = 284,
    TOK_BEGIN = 285,
    TOK_END = 286,
    TOK_IF = 287,
    TOK_ELSE = 288,
    TOK_FOR = 289,
    TOK_WHILE = 290,
    TOK_REPEAT = 291,
    TOK_DPI_FUNCTION = 292,
    TOK_POSEDGE = 293,
    TOK_NEGEDGE = 294,
    TOK_OR = 295,
    TOK_CASE = 296,
    TOK_CASEX = 297,
    TOK_CASEZ = 298,
    TOK_ENDCASE = 299,
    TOK_DEFAULT = 300,
    TOK_FUNCTION = 301,
    TOK_ENDFUNCTION = 302,
    TOK_TASK = 303,
    TOK_ENDTASK = 304,
    TOK_GENERATE = 305,
    TOK_ENDGENERATE = 306,
    TOK_GENVAR = 307,
    TOK_REAL = 308,
    TOK_SYNOPSYS_FULL_CASE = 309,
    TOK_SYNOPSYS_PARALLEL_CASE = 310,
    TOK_SUPPLY0 = 311,
    TOK_SUPPLY1 = 312,
    TOK_TO_SIGNED = 313,
    TOK_TO_UNSIGNED = 314,
    TOK_POS_INDEXED = 315,
    TOK_NEG_INDEXED = 316,
    TOK_ASSERT = 317,
    TOK_ASSUME = 318,
    TOK_RESTRICT = 319,
    TOK_PROPERTY = 320,
    OP_LOR = 321,
    OP_LAND = 322,
    OP_NOR = 323,
    OP_XNOR = 324,
    OP_NAND = 325,
    OP_EQ = 326,
    OP_NE = 327,
    OP_EQX = 328,
    OP_NEX = 329,
    OP_LE = 330,
    OP_GE = 331,
    OP_SHL = 332,
    OP_SHR = 333,
    OP_SSHL = 334,
    OP_SSHR = 335,
    OP_POW = 336,
    UNARY_OPS = 337
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 96 "frontends/verilog/verilog_parser.y" /* yacc.c:355  */

	std::string *string;
	struct YOSYS_NAMESPACE_PREFIX AST::AstNode *ast;
	std::map<std::string, YOSYS_NAMESPACE_PREFIX AST::AstNode*> *al;
	bool boolean;

#line 262 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE frontend_verilog_yylval;

int frontend_verilog_yyparse (void);

#endif /* !YY_FRONTEND_VERILOG_YY_FRONTENDS_VERILOG_VERILOG_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 279 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  164
/* YYNRULES -- Number of rules.  */
#define YYNRULES  361
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  715

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   337

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,     2,    97,     2,    90,    72,     2,
      98,    99,    88,    86,    93,    87,    95,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   100,    96,
      78,    94,    81,   106,   103,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   101,     2,   102,    70,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   104,    68,   105,   107,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    69,    71,    73,    74,    75,    76,    77,
      79,    80,    82,    83,    84,    85,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   147,   147,   147,   159,   160,   161,   162,   163,   164,
     164,   168,   168,   181,   181,   185,   192,   185,   198,   198,
     201,   202,   205,   211,   219,   222,   230,   240,   240,   261,
     261,   261,   261,   264,   264,   266,   268,   268,   272,   275,
     275,   275,   278,   278,   281,   281,   284,   294,   298,   298,
     311,   311,   325,   330,   330,   343,   343,   346,   349,   350,
     353,   353,   356,   356,   363,   363,   366,   369,   372,   376,
     378,   381,   387,   393,   398,   403,   408,   413,   419,   422,
     428,   431,   436,   437,   440,   443,   451,   453,   453,   457,
     457,   457,   457,   457,   457,   457,   458,   458,   458,   458,
     461,   461,   471,   471,   482,   482,   494,   494,   506,   506,
     529,   534,   540,   540,   544,   545,   546,   546,   550,   553,
     558,   558,   558,   562,   558,   570,   570,   573,   573,   594,
     597,   597,   601,   603,   606,   613,   616,   620,   623,   632,
     632,   640,   640,   648,   648,   651,   663,   666,   666,   669,
     680,   695,   680,   701,   701,   709,   709,   718,   720,   731,
     731,   734,   735,   745,   789,   792,   792,   795,   800,   800,
     809,   809,   819,   822,   827,   828,   831,   831,   838,   838,
     847,   848,   851,   852,   852,   858,   858,   861,   861,   863,
     865,   870,   879,   906,   906,   909,   913,   918,   925,   933,
     938,   933,   946,   946,   960,   961,   962,   963,   964,   964,
     968,   969,   970,   973,   978,   983,   990,   993,   998,  1001,
    1004,  1012,  1015,  1018,  1026,  1030,  1037,  1037,  1037,  1037,
    1037,  1038,  1039,  1039,  1040,  1040,  1050,  1050,  1066,  1071,
    1073,  1066,  1081,  1081,  1094,  1094,  1107,  1107,  1121,  1121,
    1132,  1135,  1138,  1143,  1147,  1150,  1154,  1154,  1158,  1158,
    1164,  1168,  1168,  1172,  1178,  1172,  1190,  1190,  1194,  1200,
    1194,  1208,  1209,  1212,  1215,  1218,  1223,  1228,  1235,  1242,
    1245,  1250,  1254,  1260,  1260,  1264,  1264,  1268,  1269,  1272,
    1277,  1277,  1281,  1281,  1285,  1289,  1285,  1294,  1294,  1302,
    1302,  1310,  1310,  1324,  1324,  1333,  1333,  1336,  1336,  1339,
    1342,  1351,  1354,  1364,  1376,  1383,  1389,  1400,  1404,  1404,
    1414,  1418,  1422,  1425,  1430,  1433,  1436,  1440,  1444,  1448,
    1452,  1456,  1460,  1465,  1469,  1474,  1478,  1482,  1486,  1490,
    1494,  1498,  1502,  1506,  1510,  1514,  1518,  1522,  1526,  1530,
    1534,  1538,  1542,  1546,  1550,  1554,  1558,  1562,  1566,  1570,
    1576,  1579
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_STRING", "TOK_ID", "TOK_CONST",
  "TOK_REALVAL", "TOK_PRIMITIVE", "ATTR_BEGIN", "ATTR_END",
  "DEFATTR_BEGIN", "DEFATTR_END", "TOK_MODULE", "TOK_ENDMODULE",
  "TOK_PARAMETER", "TOK_LOCALPARAM", "TOK_DEFPARAM", "TOK_PACKAGE",
  "TOK_ENDPACKAGE", "TOK_PACKAGESEP", "TOK_INPUT", "TOK_OUTPUT",
  "TOK_INOUT", "TOK_WIRE", "TOK_REG", "TOK_INTEGER", "TOK_SIGNED",
  "TOK_ASSIGN", "TOK_ALWAYS", "TOK_INITIAL", "TOK_BEGIN", "TOK_END",
  "TOK_IF", "TOK_ELSE", "TOK_FOR", "TOK_WHILE", "TOK_REPEAT",
  "TOK_DPI_FUNCTION", "TOK_POSEDGE", "TOK_NEGEDGE", "TOK_OR", "TOK_CASE",
  "TOK_CASEX", "TOK_CASEZ", "TOK_ENDCASE", "TOK_DEFAULT", "TOK_FUNCTION",
  "TOK_ENDFUNCTION", "TOK_TASK", "TOK_ENDTASK", "TOK_GENERATE",
  "TOK_ENDGENERATE", "TOK_GENVAR", "TOK_REAL", "TOK_SYNOPSYS_FULL_CASE",
  "TOK_SYNOPSYS_PARALLEL_CASE", "TOK_SUPPLY0", "TOK_SUPPLY1",
  "TOK_TO_SIGNED", "TOK_TO_UNSIGNED", "TOK_POS_INDEXED", "TOK_NEG_INDEXED",
  "TOK_ASSERT", "TOK_ASSUME", "TOK_RESTRICT", "TOK_PROPERTY", "OP_LOR",
  "OP_LAND", "'|'", "OP_NOR", "'^'", "OP_XNOR", "'&'", "OP_NAND", "OP_EQ",
  "OP_NE", "OP_EQX", "OP_NEX", "'<'", "OP_LE", "OP_GE", "'>'", "OP_SHL",
  "OP_SHR", "OP_SSHL", "OP_SSHR", "'+'", "'-'", "'*'", "'/'", "'%'",
  "OP_POW", "UNARY_OPS", "','", "'='", "'.'", "';'", "'#'", "'('", "')'",
  "':'", "'['", "']'", "'@'", "'{'", "'}'", "'?'", "'~'", "'!'", "$accept",
  "input", "$@1", "design", "attr", "$@2", "attr_opt", "defattr", "$@3",
  "$@4", "opt_attr_list", "attr_list", "attr_assign", "hierarchical_id",
  "module", "$@5", "module_para_opt", "$@6", "$@7", "module_para_list",
  "single_module_para", "$@8", "module_args_opt", "module_args",
  "optional_comma", "module_arg_opt_assignment", "module_arg", "$@9",
  "$@10", "package", "$@11", "package_body", "package_body_stmt",
  "non_opt_delay", "delay", "wire_type", "$@12", "wire_type_token_list",
  "wire_type_token", "non_opt_range", "non_opt_multirange", "range",
  "range_or_multirange", "range_or_signed_int", "module_body",
  "module_body_stmt", "task_func_decl", "$@13", "$@14", "$@15", "$@16",
  "$@17", "dpi_function_arg", "opt_dpi_function_args", "dpi_function_args",
  "opt_signed", "task_func_args_opt", "$@18", "$@19", "task_func_args",
  "task_func_port", "$@20", "task_func_body", "param_signed",
  "param_integer", "param_real", "param_range", "param_decl", "$@21",
  "localparam_decl", "$@22", "param_decl_list", "single_param_decl",
  "defparam_decl", "defparam_decl_list", "single_defparam_decl",
  "wire_decl", "$@23", "$@24", "$@25", "$@26", "opt_supply_wires",
  "wire_name_list", "wire_name_and_opt_assign", "wire_name", "assign_stmt",
  "assign_expr_list", "assign_expr", "cell_stmt", "$@27", "$@28",
  "tok_prim_wrapper", "cell_list", "single_cell", "$@29", "$@30",
  "prim_list", "single_prim", "$@31", "cell_parameter_list_opt",
  "cell_parameter_list", "cell_parameter", "cell_port_list",
  "cell_port_list_rules", "cell_port", "always_stmt", "$@32", "$@33",
  "$@34", "always_cond", "always_events", "always_event", "opt_label",
  "assert", "assert_property", "simple_behavioral_stmt", "behavioral_stmt",
  "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43",
  "case_type", "opt_synopsys_attr", "behavioral_stmt_list",
  "optional_else", "$@44", "case_body", "case_item", "$@45", "$@46",
  "gen_case_body", "gen_case_item", "$@47", "$@48", "case_select",
  "case_expr_list", "rvalue", "lvalue", "lvalue_concat_list",
  "opt_arg_list", "arg_list", "arg_list2", "single_arg", "module_gen_body",
  "gen_stmt_or_module_body_stmt", "gen_stmt", "$@49", "$@50", "$@51",
  "$@52", "$@53", "gen_stmt_block", "$@54", "gen_stmt_or_null",
  "opt_gen_else", "expr", "basic_expr", "$@55", "concat_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   124,   323,
      94,   324,    38,   325,   326,   327,   328,   329,    60,   330,
     331,    62,   332,   333,   334,   335,    43,    45,    42,    47,
      37,   336,   337,    44,    61,    46,    59,    35,    40,    41,
      58,    91,    93,    64,   123,   125,    63,   126,    33
};
# endif

#define YYPACT_NINF -590

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-590)))

#define YYTABLE_NINF -274

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -590,   114,   223,  -590,  -590,  -590,  -590,  -590,   207,  -590,
     223,   223,   223,   223,   223,   223,    40,    80,    80,   123,
     127,   176,   128,   181,   186,  -590,  -590,  -590,  -590,  -590,
    -590,  -590,  -590,   118,  -590,     8,  -590,   191,   191,  -590,
    -590,    47,  -590,    57,  -590,    40,   219,    40,   214,   899,
     232,  -590,   188,   188,   157,   162,  -590,   259,   263,  -590,
     899,  -590,  -590,   266,   187,   265,  -590,  -590,  -590,  -590,
     282,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,
    -590,  -590,   899,   899,  -590,  -590,   102,  -590,  -590,  1070,
    -590,  -590,   195,   195,   194,   200,  -590,   205,   300,   185,
      13,  -590,   209,   217,  -590,  -590,   216,   222,   899,   899,
     899,   899,   899,   899,   899,   899,   -10,    79,   210,   899,
     899,  -590,   899,  -590,   195,   195,  -590,  -590,  -590,  -590,
    -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,
    -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,
    -590,  -590,  -590,   313,   313,  -590,    24,   226,    45,   336,
     247,  -590,   340,   899,   899,   899,  -590,   187,  -590,   341,
    -590,   899,   899,  -590,  -590,  -590,  -590,  -590,  -590,  -590,
    -590,   357,   899,   899,   899,  -590,  -590,  -590,    44,   270,
    -590,  -590,   899,   899,   899,   899,   899,   899,   899,   899,
     899,   899,   899,   899,   899,   899,   899,   899,   899,   899,
     899,   899,   899,   899,   899,   899,   899,   278,    88,  -590,
     100,   178,  -590,   279,  -590,  -590,   276,  -590,  -590,  -590,
    -590,  -590,   371,  -590,   108,  -590,   205,   373,   277,   280,
     281,   284,   195,  -590,   292,  -590,  -590,   124,   285,   288,
    -590,   289,   298,  -590,   293,   301,   899,  1103,  1127,   501,
     638,   638,  1145,  1159,  1159,  1159,  1159,   573,   573,   573,
     573,   267,   267,   267,   267,   275,   275,   306,   306,   306,
    -590,   299,   899,   313,  -590,  -590,  -590,   307,  -590,  -590,
     315,   316,   195,   407,    58,   311,   932,  -590,   336,  -590,
     317,  -590,  -590,  -590,  -590,  -590,   195,  -590,  -590,   195,
      21,  -590,  -590,   321,   322,   324,  -590,   327,   899,   291,
    -590,   196,   274,  -590,  -590,  -590,  -590,   342,  -590,  -590,
       6,  -590,  -590,   899,   334,    40,   349,  -590,  -590,  -590,
     899,  -590,  -590,    80,   178,   344,   899,  -590,  -590,   445,
    -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,    46,  -590,
    -590,  -590,  -590,   195,   354,   352,   355,   356,  -590,  -590,
    -590,  -590,   390,   391,   392,   484,  -590,  -590,  -590,  -590,
    -590,  -590,  -590,  -590,  -590,  -590,  -590,   362,  -590,  -590,
    -590,   205,   198,  -590,  -590,   363,   899,   899,   899,   899,
     358,   368,   352,   366,   374,   375,   379,   462,   467,   195,
     380,  -590,  -590,  -590,   354,   354,   382,  -590,    73,  -590,
     899,   383,  -590,   191,  -590,  -590,  -590,  -590,  -590,  -590,
    -590,    40,   129,  -590,    22,   479,  -590,   899,  -590,   994,
     386,   387,   388,  -590,  -590,  -590,  -590,  -590,   354,   899,
     396,  -590,   341,  -590,   395,   398,   399,   106,  -590,   899,
    -590,   899,  -590,   899,   899,  -590,  -590,  -590,   899,   389,
     899,   899,  -590,  -590,  -590,   195,   315,    38,   195,  -590,
     133,  -590,   401,  -590,  -590,   406,    22,  -590,  -590,  -590,
    -590,   899,   899,   899,   409,   404,   274,  -590,   410,  -590,
    -590,   414,   415,   418,  -590,   899,  -590,  -590,   416,    22,
     420,   423,  -590,  -590,   341,   424,   899,   429,  -590,  -590,
     313,  -590,   899,  -590,    22,  -590,   899,  1033,  -590,   435,
     428,   443,   444,   436,   540,    78,  -590,  -590,   540,  -590,
    -590,  -590,  -590,   446,   297,  -590,   451,  -590,  -590,   150,
     154,   455,  -590,   456,  -590,   349,  -590,  -590,  -590,  -590,
    -590,   352,  -590,   899,   453,   457,   458,   814,   195,   155,
    -590,   452,  -590,   770,   274,  -590,   163,  -590,   454,  -590,
     899,   352,  -590,   274,   899,   274,   274,   552,  -590,  -590,
     341,   461,   899,  -590,   460,  -590,   527,  1071,  -590,  -590,
    -590,  -590,   557,   111,  -590,  -590,  -590,   465,   540,  -590,
    -590,  -590,   899,   899,   469,    -6,  -590,  -590,  -590,   540,
    -590,   821,   520,   475,  -590,   561,  -590,  -590,  -590,  -590,
    -590,  -590,  -590,   218,  -590,   499,  -590,  -590,   500,   502,
     814,  -590,   505,   821,  -590,  -590,  -590,  -590,    91,    91,
    -590,  -590,   593,   508,   506,  -590,  -590,  -590,  -590,   431,
    -590,  -590,  -590,   512,  -590,  -590,   554,  -590,  -590,  -590,
      22,   899,  -590,   821,   510,  -590,  -590,   513,  -590,   821,
     -17,  -590,   -12,  -590,   274,    22,  -590,  -590,   431,   511,
     521,   522,  -590,   763,  -590,   499,   899,  -590,  -590,   523,
    -590,  -590,  -590,  -590,  -590,   524,  -590,  -590,  -590,   274,
    -590,  -590,   274,  -590,  -590
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    11,     1,    15,   139,   141,     3,     0,    14,
      11,    11,    11,    11,    11,    11,    19,   133,   133,     0,
       0,     0,   119,     0,    12,     5,     4,     9,     6,     7,
       8,    24,    16,    18,    20,    22,   132,   135,   135,    27,
      53,     0,   118,    81,   106,    19,     0,     0,     0,     0,
       0,   134,   137,   137,    32,     0,   100,     0,     0,    85,
       0,    80,    84,     0,   121,     0,    17,    21,    25,   317,
     315,   316,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,     0,     0,    11,    11,    81,   311,    23,   309,
      26,   136,    81,    81,     0,    40,    56,   113,     0,     0,
       0,   108,   122,     0,    13,   314,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   360,     0,     0,
       0,   313,     0,   318,    80,   278,   277,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,   138,     0,     0,    29,    11,     0,     0,   117,
       0,   102,     0,     0,     0,     0,    77,   121,   120,    11,
     131,     0,     0,   333,   334,   335,   336,   331,   332,   355,
     356,   322,     0,     0,     0,   324,   326,   359,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,    35,    48,     0,    39,    62,    45,    42,    88,    54,
      55,    57,   111,   116,     0,   101,   113,     0,     0,     0,
       0,     0,    81,    62,    45,   125,   129,    11,     0,     0,
     312,     0,   360,   361,     0,    77,   286,   358,   357,   328,
     329,   330,   327,   343,   344,   345,   346,   341,   342,   347,
     348,   337,   338,   339,   340,   349,   350,   351,   352,   353,
     354,     0,     0,     0,   140,   142,    36,    30,    33,    38,
      47,     0,    81,     0,    11,     0,    11,   110,   115,   112,
       0,   104,    75,    76,    74,   131,    83,    82,   163,    81,
      11,   123,   107,     0,     0,     0,   233,     0,     0,    62,
     226,    11,    11,   229,   230,   228,   227,     0,   130,   279,
       0,   320,   321,     0,     0,     0,    45,   285,   287,   289,
       0,   145,   144,   133,    35,     0,     0,    49,    52,     0,
      66,    67,    68,    69,    70,    71,    73,    72,    61,    64,
      43,    41,    28,    81,    61,   217,     0,     0,   250,   251,
     252,   291,     0,     0,     0,    62,    98,    86,    89,    90,
      91,    92,    93,    94,    95,    96,    99,     0,    87,   114,
     103,   113,    11,   127,   126,     0,     0,     0,     0,     0,
       0,   281,   217,     0,     0,     0,     0,     0,     0,    81,
       0,   234,   231,   232,    61,    61,     0,   325,    81,   276,
      44,     0,   310,   135,    34,    31,    46,    50,    60,    63,
      65,     0,     0,   147,     0,     0,   301,     0,   294,    11,
       0,     0,     0,   168,   172,   199,   202,   173,    61,     0,
       0,   109,     0,   124,     0,     0,     0,     0,   280,     0,
     236,     0,   238,     0,     0,   153,   155,   150,     0,   284,
       0,     0,   323,   288,   319,    81,    47,     0,    81,   146,
       0,   165,     0,   216,   291,     0,     0,    97,   293,   290,
     292,     0,     0,     0,   186,   209,    11,   170,     0,   105,
     128,     0,     0,     0,    58,     0,   282,   257,     0,     0,
       0,     0,   157,   157,     0,     0,   286,     0,   225,   224,
       0,    51,     0,   148,     0,   164,     0,    11,   297,     0,
       0,     0,     0,     0,     0,     0,   200,   203,   183,   299,
     218,   219,   220,     0,    11,   246,     0,   242,   244,     0,
       0,   151,   159,   161,   248,    45,   235,    37,   149,   166,
     167,   217,   303,     0,     0,     0,     0,   189,   176,     0,
     174,     0,   208,     0,    11,   182,     0,   180,     0,   267,
       0,   217,   256,    11,     0,    11,    11,     0,   154,   156,
       0,     0,     0,   255,     0,   302,   308,    11,   295,   221,
     222,   223,     0,     0,   187,   190,   178,     0,     0,   169,
     206,   207,     0,     0,     0,     0,   210,   215,   201,   183,
     171,   195,   268,     0,   237,   260,   239,   243,   245,   158,
     160,   152,   162,   262,   283,   303,   298,   304,     0,     0,
     189,   185,     0,   195,   175,   213,   214,   205,     0,     0,
     204,   181,     0,     0,   192,   193,   196,   300,   266,     0,
      59,   258,   247,     0,   253,   254,   263,   306,   305,   307,
       0,     0,   188,   195,     0,   211,   212,     0,   184,   195,
     272,   269,     0,   274,    11,     0,   249,   261,     0,     0,
       0,     0,   177,     0,   194,   303,     0,   271,   259,     0,
     264,   303,   191,   179,   198,     0,   270,   275,   240,    11,
     296,   197,    11,   265,   241
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -590,  -590,  -590,   393,   603,  -590,  -590,    28,  -590,  -590,
     559,  -590,   572,   -16,  -590,  -590,  -590,  -590,  -590,  -590,
     283,  -590,  -590,  -590,  -237,   152,   332,  -590,  -590,  -590,
    -590,  -590,  -590,  -303,  -306,  -166,  -590,  -590,   271,   -72,
     394,   -28,  -590,  -590,  -590,   335,  -288,  -590,  -590,  -590,
    -590,  -590,   337,  -226,  -590,  -590,   463,  -590,  -590,  -590,
     323,  -590,   329,   -14,   -37,   584,   -87,    35,  -590,     9,
    -590,   485,  -204,  -590,  -590,   160,  -287,  -590,  -590,  -590,
    -590,   130,  -590,    50,  -434,  -590,  -590,   120,  -590,  -590,
    -590,  -590,  -590,  -433,  -590,  -590,  -590,    23,  -590,  -590,
    -590,     5,  -589,  -590,   -32,  -590,  -590,  -590,  -590,  -590,
    -590,  -372,  -390,  -590,  -590,  -453,  -317,  -590,  -590,  -590,
    -590,  -590,  -590,  -590,  -590,  -590,   331,  -590,  -590,  -590,
    -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,   -40,
    -590,  -244,  -402,   192,  -590,   136,  -590,   233,   182,    68,
     376,  -590,  -590,  -590,  -590,  -590,  -546,  -590,   -25,  -590,
     -47,   589,  -590,    99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,   319,     9,    24,   320,    16,    46,
      32,    33,    34,    86,    11,    54,    95,   221,   345,   287,
     288,   343,   157,   226,   295,   347,   227,   290,   476,    12,
      55,   158,   230,   322,   429,   409,   293,   358,   359,    61,
     125,   126,   308,    63,   296,   488,    13,    97,   236,   391,
      64,   167,   233,   160,   234,    43,   103,   169,   395,   244,
     245,   452,   247,    37,    52,    92,   153,   323,    17,   324,
      18,   218,   219,   381,   432,   433,   325,   514,   591,   512,
     513,   549,   551,   552,   246,   383,   480,   481,   384,   494,
     538,   448,   569,   575,   607,   642,   576,   577,   578,   534,
     603,   604,   653,   654,   655,   385,   495,   574,   496,   536,
     615,   616,   436,   326,   386,   327,   328,   469,   507,   509,
     663,   712,   585,   586,   583,   593,   387,   633,   544,   662,
     684,   666,   687,   688,   709,   622,   658,   659,   695,   681,
     682,    87,   330,   400,   517,   336,   337,   338,   439,   489,
     490,   486,   638,   562,   579,   484,   668,   597,   669,   636,
     656,    89,   189,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    53,    88,   329,    38,   412,   154,   311,   378,   382,
     300,    15,   460,   100,   124,    62,   596,   289,   500,    15,
      15,    15,    15,    15,    15,   242,    31,    48,   222,    35,
      10,    35,   482,   529,   648,   116,   117,    14,    10,    10,
      10,    10,    10,    10,    31,    14,    14,    14,    14,    14,
      14,    56,   190,   191,   674,   428,   546,    48,   434,   292,
       6,   428,   222,   229,   152,   152,   350,   351,   352,   353,
     354,   355,   356,   163,   164,   188,  -273,   309,   329,   342,
     553,   696,    59,  -273,   691,   414,   571,   649,   697,   181,
     182,   419,    48,   650,    69,    31,    70,    71,   357,   421,
     415,   570,    49,    50,   163,   164,    36,   121,   470,   471,
     -11,   428,   428,   165,     3,   166,   238,   239,   240,   223,
     -44,    48,   482,   224,   248,   249,   318,    39,    31,   612,
     613,    40,   522,    50,     4,   251,   252,   252,     5,     6,
     289,    57,   497,   317,   165,   428,   255,    58,   329,    72,
      73,   378,   382,   223,    42,   710,   553,   -44,    60,    74,
      75,    76,    77,    78,    79,   450,   572,   231,    50,   281,
     124,   595,   183,   312,   122,   644,   573,    80,    81,   537,
      41,   283,   217,   184,   284,    44,   313,   314,   315,    82,
     329,   624,   286,   283,    45,    83,   285,    50,    84,    85,
     -11,   298,    31,   122,   640,   504,   505,   299,     4,   339,
     641,    47,     5,     6,   307,    48,    51,   689,    68,    19,
     316,   317,   478,   -10,    20,   479,   524,   582,   318,   525,
      66,   321,   699,     4,   191,   341,    90,     5,     6,   378,
     382,    91,   329,   587,    21,   451,   588,   587,   608,   124,
     589,   609,   329,    22,    94,    23,   619,   618,    96,   620,
     313,   314,   315,    98,   349,   329,   625,    99,   627,   628,
     101,   401,   664,   665,   104,   -81,   675,   676,    31,   162,
     329,   393,   253,   254,     4,   102,   416,   105,     5,     6,
     -81,    50,   155,   422,   316,   317,    60,   122,   156,   426,
     329,    31,   318,   159,   161,   380,   321,     4,   168,   378,
     382,     5,     6,   170,   171,   185,   557,   217,   594,   418,
     172,   402,   228,   403,   376,   404,   405,   406,   581,   423,
     329,   379,   368,   369,   370,   431,   313,   314,   315,   329,
     232,   329,   329,   235,   237,   242,   124,   407,   408,   454,
     455,   456,   457,   145,   146,   147,   148,   149,   150,   313,
     314,   315,   250,   147,   148,   149,   150,   698,   256,   294,
     316,   317,   282,   339,   291,   297,   321,   301,   318,   302,
     305,   467,   303,   304,   331,   310,   475,   332,   520,   333,
     485,   183,   713,   316,   317,   714,   335,   150,   334,   340,
     344,   318,   498,    25,    26,    27,    28,    29,    30,   346,
     361,   348,   401,   390,   508,   477,   510,   511,   418,   396,
     397,   515,   398,   518,   519,   399,   329,   350,   351,   352,
     353,   354,   355,   356,    69,    31,    70,    71,   413,   417,
     329,   329,   420,   425,   530,   531,   532,   152,   380,   427,
     431,   317,   435,   437,   438,   440,   441,   442,   543,   357,
     449,   459,   453,   458,   461,   329,   465,   376,   329,   339,
     418,   466,   462,   463,   379,   558,   680,   464,   468,   560,
     321,   472,   474,   483,   491,   492,   493,   516,   443,    72,
      73,   444,   499,   418,   501,   526,   606,   502,   503,    74,
      75,    76,    77,    78,    79,   528,   533,   535,   418,   539,
     540,   541,   445,   446,   542,   545,   598,    80,    81,   547,
     605,    21,   548,   554,   447,   556,   617,   564,   321,    82,
      22,   563,    23,   623,   567,    83,   380,   626,    84,    85,
     407,   408,   565,   566,   568,   632,   580,   584,   590,   599,
     592,   610,   621,   600,   601,   376,   629,   631,   321,   634,
     635,   639,   379,   643,   657,   645,   646,   321,   647,   321,
     321,   130,   131,   132,   660,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   605,   661,   667,   670,   677,   686,   679,
     671,   617,   617,   673,    65,     8,   380,   678,   685,   692,
     701,   693,   683,     8,     8,     8,     8,     8,     8,    67,
     702,   703,   708,   711,   690,   376,   360,   424,   521,   430,
     241,   377,   379,   394,   392,   389,   306,    93,   523,   220,
     630,   683,   651,   550,   559,   672,   705,   694,   700,   707,
     410,   506,   555,   473,   418,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   637,   527,     0,   321,   418,
     706,     0,   388,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,     0,     0,   119,   120,   123,
       0,     0,     0,   321,     0,     0,   321,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,     0,   186,   187,
     132,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,     0,   225,
       0,     0,     0,     0,     0,     0,    69,    31,    70,    71,
       0,     0,   243,    69,    31,    70,    71,     0,     0,   611,
       0,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,     0,     0,   612,   613,
       0,     0,     0,     0,     0,     0,     0,    69,    31,    70,
      71,    72,    73,     0,    69,    31,    70,    71,    72,    73,
       0,    74,    75,    76,    77,    78,    79,     0,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,     0,     0,    80,    81,   614,     0,
       0,    82,   704,     0,     0,     0,     0,    83,    82,     0,
      84,    85,    72,    73,    83,     0,     0,    84,    85,    72,
      73,     0,    74,    75,    76,    77,    78,    79,     0,    74,
      75,    76,    77,    78,    79,     0,     0,   225,     0,   375,
      80,    81,    69,    31,    70,    71,     0,    80,    81,   602,
       0,     0,    82,   243,     0,     0,   652,     0,    83,    82,
       0,    84,    85,     0,   411,    83,     0,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,   362,     5,     6,   363,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,   364,
       0,     0,   365,     0,   366,     0,   367,    74,    75,    76,
      77,    78,    79,   368,   369,   370,     0,     0,     0,     0,
       0,     0,   371,     0,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,   372,   373,   374,    82,     0,     0,
       0,     0,     0,    83,     4,     0,    84,    85,     5,     6,
     363,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,     0,     0,   365,     0,   366,     0,   367,     0,
       0,     0,     0,     0,     0,   368,   369,   370,     0,     0,
       0,     0,   375,     4,   371,   487,     0,     5,     6,   363,
       0,     0,     0,     0,     0,     0,   372,   373,   374,     0,
     364,     0,     0,   365,   561,   366,     0,   367,     0,     0,
       0,     0,     0,     0,   368,   369,   370,     0,     0,     0,
       0,     4,     0,   371,     0,     5,     6,   363,     0,     0,
       0,     0,     0,     0,     0,   372,   373,   374,   364,     0,
       0,   365,     0,   366,     0,   367,     0,     0,     0,     0,
       0,     0,   368,   369,   370,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
     375,     0,     0,   372,   373,   374,   127,   128,   129,     0,
     130,   131,   132,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,     0,     0,     0,     0,     0,     0,     0,
     128,   129,     0,   130,   131,   132,   151,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   129,     0,   130,   131,   132,
     375,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150
};

static const yytype_int16 yycheck[] =
{
      16,    38,    49,   247,    18,   322,    93,   244,   296,   296,
     236,     2,   402,    60,    86,    43,   562,   221,   452,    10,
      11,    12,    13,    14,    15,     4,     4,    19,     4,    45,
       2,    47,   434,   486,    40,    82,    83,     2,    10,    11,
      12,    13,    14,    15,     4,    10,    11,    12,    13,    14,
      15,     4,   124,   125,   643,   358,   509,    19,   364,   225,
      15,   364,     4,    18,    92,    93,    20,    21,    22,    23,
      24,    25,    26,    60,    61,   122,    93,   243,   322,   283,
     514,    93,    25,   100,   673,    79,     8,    93,   100,    99,
     100,   335,    19,    99,     3,     4,     5,     6,    52,   336,
      94,   534,    94,    95,    60,    61,    26,     5,   414,   415,
       8,   414,   415,   100,     0,   102,   163,   164,   165,    95,
      99,    19,   524,    99,   171,   172,   104,     4,     4,    38,
      39,     4,    94,    95,    10,   182,   183,   184,    14,    15,
     344,    94,   448,    97,   100,   448,   102,   100,   392,    58,
      59,   439,   439,    95,    26,   701,   590,    99,   101,    68,
      69,    70,    71,    72,    73,   391,    88,   158,    95,   216,
     242,   561,    93,    49,   101,   608,    98,    86,    87,   496,
       4,    93,     4,   104,    96,     4,    62,    63,    64,    98,
     434,   581,    14,    93,     8,   104,    96,    95,   107,   108,
      98,    93,     4,   101,    93,    99,   100,    99,    10,   256,
      99,    93,    14,    15,   242,    19,    25,   670,     4,    12,
      96,    97,    93,     0,    17,    96,    93,   544,   104,    96,
      11,   247,   685,    10,   306,   282,     4,    14,    15,   527,
     527,    53,   486,    93,    37,    47,    96,    93,    93,   321,
      96,    96,   496,    46,    97,    48,    93,   574,    96,    96,
      62,    63,    64,     4,   292,   509,   583,     4,   585,   586,
       4,   318,    54,    55,     9,    79,   648,   649,     4,    94,
     524,   309,   183,   184,    10,    98,   333,     5,    14,    15,
      94,    95,    98,   340,    96,    97,   101,   101,    98,   346,
     544,     4,   104,    98,     4,   296,   322,    10,    99,   597,
     597,    14,    15,    96,    98,   105,   520,     4,   555,   335,
      98,    30,    96,    32,   296,    34,    35,    36,    31,   343,
     574,   296,    41,    42,    43,   363,    62,    63,    64,   583,
       4,   585,   586,    96,     4,     4,   418,    56,    57,   396,
     397,   398,   399,    86,    87,    88,    89,    90,    91,    62,
      63,    64,     5,    88,    89,    90,    91,   684,    98,    93,
      96,    97,    94,   420,    95,     4,   392,     4,   104,   102,
      96,   409,   102,   102,    99,    93,   423,    99,   475,   100,
     437,    93,   709,    96,    97,   712,    95,    91,   105,   100,
      93,   104,   449,    10,    11,    12,    13,    14,    15,    94,
      99,    95,   459,    96,   461,   431,   463,   464,   434,    98,
      98,   468,    98,   470,   471,    98,   670,    20,    21,    22,
      23,    24,    25,    26,     3,     4,     5,     6,    96,   105,
     684,   685,    93,    99,   491,   492,   493,   475,   439,     4,
     478,    97,   100,    98,    98,    65,    65,    65,   505,    52,
      98,    93,    99,   105,    98,   709,     4,   439,   712,   516,
     486,     4,    98,    98,   439,   522,    45,    98,    98,   526,
     496,    99,    99,     4,    98,    98,    98,    98,     4,    58,
      59,     7,    96,   509,    99,    94,   568,    99,    99,    68,
      69,    70,    71,    72,    73,    99,    97,   103,   524,    99,
      96,    96,    28,    29,    96,    99,   563,    86,    87,    99,
     567,    37,    99,    99,    40,    96,   573,    99,   544,    98,
      46,    96,    48,   580,    98,   104,   527,   584,   107,   108,
      56,    57,    99,    99,     4,   592,   100,    96,    93,    96,
      94,    99,    98,    96,    96,   527,     4,    96,   574,    99,
      33,     4,   527,    98,    44,   612,   613,   583,    99,   585,
     586,    70,    71,    72,    99,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,   640,    33,    96,    96,     4,    44,    93,
      98,   648,   649,    98,    45,     2,   597,    99,    96,    99,
      99,    98,   659,    10,    11,    12,    13,    14,    15,    47,
      99,    99,    99,    99,   671,   597,   294,   344,   476,   358,
     167,   296,   597,   310,   305,   298,   242,    53,   478,   154,
     590,   688,   619,   513,   524,   640,   693,   679,   688,   696,
     319,   459,   516,   420,   670,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,   597,   484,    -1,   684,   685,
     695,    -1,   296,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    -1,   709,    -1,    -1,   712,   108,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,   119,   120,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,   156,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,   169,     3,     4,     5,     6,    -1,    -1,     9,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,    -1,    -1,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    58,    59,    -1,     3,     4,     5,     6,    58,    59,
      -1,    68,    69,    70,    71,    72,    73,    -1,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    98,    99,    -1,    -1,    -1,    -1,   104,    98,    -1,
     107,   108,    58,    59,   104,    -1,    -1,   107,   108,    58,
      59,    -1,    68,    69,    70,    71,    72,    73,    -1,    68,
      69,    70,    71,    72,    73,    -1,    -1,   294,    -1,   296,
      86,    87,     3,     4,     5,     6,    -1,    86,    87,    95,
      -1,    -1,    98,   310,    -1,    -1,    95,    -1,   104,    98,
      -1,   107,   108,    -1,   321,   104,    -1,    -1,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    27,
      -1,    -1,    30,    -1,    32,    -1,    34,    68,    69,    70,
      71,    72,    73,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    98,    -1,    -1,
      -1,    -1,    -1,   104,    10,    -1,   107,   108,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,
      -1,    -1,   439,    10,    50,    51,    -1,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,
      27,    -1,    -1,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    10,    -1,    50,    -1,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    27,    -1,
      -1,    30,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     527,    -1,    -1,    62,    63,    64,    66,    67,    68,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    71,    72,   106,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    68,    -1,    70,    71,    72,
     597,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   110,   111,     0,    10,    14,    15,   112,   113,   114,
     116,   123,   138,   155,   176,   178,   117,   177,   179,    12,
      17,    37,    46,    48,   115,   112,   112,   112,   112,   112,
     112,     4,   119,   120,   121,   122,    26,   172,   172,     4,
       4,     4,    26,   164,     4,     8,   118,    93,    19,    94,
      95,    25,   173,   173,   124,   139,     4,    94,   100,    25,
     101,   148,   150,   152,   159,   119,    11,   121,     4,     3,
       5,     6,    58,    59,    68,    69,    70,    71,    72,    73,
      86,    87,    98,   104,   107,   108,   122,   250,   269,   270,
       4,    53,   174,   174,    97,   125,    96,   156,     4,     4,
     269,     4,    98,   165,     9,     5,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   269,   269,   272,   113,
     113,     5,   101,   113,   148,   149,   150,    66,    67,    68,
      70,    71,    72,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,   106,   150,   175,   175,    98,    98,   131,   140,    98,
     162,     4,    94,    60,    61,   100,   102,   160,    99,   166,
      96,    98,    98,   270,   270,   270,   270,   270,   270,   270,
     270,    99,   100,    93,   104,   105,   270,   270,   269,   271,
     148,   148,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,     4,   180,   181,
     180,   126,     4,    95,    99,   113,   132,   135,    96,    18,
     141,   178,     4,   161,   163,    96,   157,     4,   269,   269,
     269,   165,     4,   113,   168,   169,   193,   171,   269,   269,
       5,   269,   269,   272,   272,   102,    98,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   269,    94,    93,    96,    96,    14,   128,   129,   181,
     136,    95,   144,   145,    93,   133,   153,     4,    93,    99,
     162,     4,   102,   102,   102,    96,   149,   150,   151,   144,
      93,   133,    49,    62,    63,    64,    96,    97,   104,   113,
     116,   122,   142,   176,   178,   185,   222,   224,   225,   250,
     251,    99,    99,   100,   105,    95,   254,   255,   256,   269,
     100,   269,   181,   130,    93,   127,    94,   134,    95,   150,
      20,    21,    22,    23,    24,    25,    26,    52,   146,   147,
     135,    99,    13,    16,    27,    30,    32,    34,    41,    42,
      43,    50,    62,    63,    64,   113,   116,   154,   155,   176,
     178,   182,   185,   194,   197,   214,   223,   235,   259,   161,
      96,   158,   171,   150,   169,   167,    98,    98,    98,    98,
     252,   269,    30,    32,    34,    35,    36,    56,    57,   144,
     235,   113,   225,    96,    79,    94,   269,   105,   122,   250,
      93,   133,   269,   172,   129,    99,   269,     4,   142,   143,
     147,   150,   183,   184,   143,   100,   221,    98,    98,   257,
      65,    65,    65,     4,     7,    28,    29,    40,   200,    98,
     162,    47,   170,    99,   269,   269,   269,   269,   105,    93,
     221,    98,    98,    98,    98,     4,     4,   150,    98,   226,
     143,   143,    99,   256,    99,   173,   137,   122,    93,    96,
     195,   196,   251,     4,   264,   269,   260,    51,   154,   258,
     259,    98,    98,    98,   198,   215,   217,   143,   269,    96,
     193,    99,    99,    99,    99,   100,   252,   227,   269,   228,
     269,   269,   188,   189,   186,   269,    98,   253,   269,   269,
     175,   134,    94,   184,    93,    96,    94,   257,    99,   224,
     269,   269,   269,    97,   208,   103,   218,   225,   199,    99,
      96,    96,    96,   269,   237,    99,   224,    99,    99,   190,
     190,   191,   192,   193,    99,   254,    96,   181,   269,   196,
     269,    31,   262,    96,    99,    99,    99,    98,     4,   201,
     202,     8,    88,    98,   216,   202,   205,   206,   207,   263,
     100,    31,   225,   233,    96,   231,   232,    93,    96,    96,
      93,   187,    94,   234,   133,   221,   265,   266,   269,    96,
      96,    96,    95,   209,   210,   269,   148,   203,    93,    96,
      99,     9,    38,    39,    88,   219,   220,   269,   225,    93,
      96,    98,   244,   269,   221,   225,   269,   225,   225,     4,
     192,    96,   269,   236,    99,    33,   268,   258,   261,     4,
      93,    99,   204,    98,   202,   269,   269,    99,    40,    93,
      99,   206,    95,   211,   212,   213,   269,    44,   245,   246,
      99,    33,   238,   229,    54,    55,   240,    96,   265,   267,
      96,    98,   210,    98,   211,   220,   220,     4,    99,    93,
      45,   248,   249,   269,   239,    96,    44,   241,   242,   224,
     269,   211,    99,    98,   213,   247,    93,   100,   225,   224,
     248,    99,    99,    99,    99,   269,   267,   269,    99,   243,
     265,    99,   230,   225,   225
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   109,   111,   110,   112,   112,   112,   112,   112,   112,
     112,   114,   113,   115,   115,   117,   118,   116,   119,   119,
     120,   120,   121,   121,   122,   122,   122,   124,   123,   126,
     127,   125,   125,   128,   128,   129,   130,   129,   129,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   136,   135,
     137,   135,   135,   139,   138,   140,   140,   141,   142,   142,
     143,   143,   145,   144,   146,   146,   147,   147,   147,   147,
     147,   147,   147,   147,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   153,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     156,   155,   157,   155,   158,   155,   159,   155,   160,   155,
     161,   161,   162,   162,   163,   163,   163,   163,   164,   164,
     165,   165,   166,   167,   165,   168,   168,   170,   169,   169,
     171,   171,   172,   172,   173,   173,   174,   174,   175,   177,
     176,   179,   178,   180,   180,   181,   182,   183,   183,   184,
     186,   187,   185,   188,   185,   189,   185,   190,   190,   191,
     191,   192,   192,   193,   194,   195,   195,   196,   198,   197,
     199,   197,   200,   200,   201,   201,   203,   202,   204,   202,
     205,   205,   206,   207,   206,   208,   208,   209,   209,   210,
     210,   210,   211,   212,   212,   213,   213,   213,   213,   215,
     216,   214,   217,   214,   218,   218,   218,   218,   218,   218,
     219,   219,   219,   220,   220,   220,   221,   221,   222,   222,
     222,   223,   223,   223,   224,   224,   225,   225,   225,   225,
     225,   225,   225,   225,   226,   225,   227,   225,   228,   229,
     230,   225,   231,   225,   232,   225,   233,   225,   234,   225,
     235,   235,   235,   236,   236,   236,   237,   237,   239,   238,
     238,   240,   240,   242,   243,   241,   244,   244,   246,   247,
     245,   248,   248,   249,   249,   249,   250,   250,   250,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   255,   256,
     257,   257,   258,   258,   260,   261,   259,   262,   259,   263,
     259,   264,   259,   266,   265,   267,   267,   268,   268,   269,
     269,   270,   270,   270,   270,   270,   270,   270,   271,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     272,   272
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       0,     0,     2,     4,     0,     0,     0,     5,     1,     0,
       1,     3,     1,     3,     1,     3,     3,     0,     9,     0,
       0,     6,     0,     1,     3,     0,     0,     6,     1,     2,
       0,     4,     1,     3,     1,     0,     2,     0,     0,     3,
       0,     6,     3,     0,     7,     2,     0,     1,     4,     8,
       1,     0,     0,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     5,     3,     2,     2,
       1,     0,     1,     1,     1,     1,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       0,     7,     0,     9,     0,    11,     0,     8,     0,    10,
       2,     1,     3,     0,     3,     2,     1,     0,     1,     0,
       2,     0,     0,     0,     6,     1,     3,     0,     5,     1,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       8,     0,     8,     1,     3,     3,     3,     1,     3,     4,
       0,     0,     7,     0,     6,     0,     6,     0,     3,     1,
       3,     1,     3,     2,     4,     1,     3,     3,     0,     6,
       0,     6,     1,     1,     1,     3,     0,     5,     0,     6,
       1,     3,     1,     0,     4,     4,     0,     1,     3,     0,
       1,     5,     1,     1,     3,     0,     1,     5,     4,     0,
       0,     6,     0,     4,     4,     4,     3,     3,     2,     0,
       1,     3,     3,     2,     2,     1,     2,     0,     5,     5,
       5,     6,     6,     6,     4,     4,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     5,     0,     7,     0,     0,
       0,    13,     0,     7,     0,     7,     0,     8,     0,     9,
       1,     1,     1,     2,     2,     0,     2,     0,     0,     3,
       0,     2,     0,     0,     0,     4,     2,     0,     0,     0,
       4,     2,     1,     1,     1,     3,     6,     2,     2,     1,
       3,     1,     3,     4,     0,     1,     0,     1,     3,     1,
       2,     0,     1,     1,     0,     0,    11,     0,     7,     0,
       7,     0,     6,     0,     2,     1,     1,     2,     0,     1,
       6,     1,     4,     2,     2,     1,     1,     1,     0,     7,
       5,     5,     3,     7,     3,     6,     3,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     3,     3,     4,     4,     3,
       1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      YY_LAC_DISCARD ("YYBACKUP");                              \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 2:
#line 147 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
	ast_stack.clear();
	ast_stack.push_back(current_ast);
}
#line 2253 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 150 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
	ast_stack.pop_back();
	log_assert(GetSize(ast_stack) == 0);
	for (auto &it : default_attr_list)
		delete it.second;
	default_attr_list.clear();
}
#line 2265 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 168 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		for (auto &it : attr_list)
			delete it.second;
		attr_list.clear();
		for (auto &it : default_attr_list)
			attr_list[it.first] = it.second->clone();
	}
#line 2277 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 174 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		std::map<std::string, AstNode*> *al = new std::map<std::string, AstNode*>;
		al->swap(attr_list);
		(yyval.al) = al;
	}
#line 2287 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 185 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		for (auto &it : default_attr_list)
			delete it.second;
		default_attr_list.clear();
		for (auto &it : attr_list)
			delete it.second;
		attr_list.clear();
	}
#line 2300 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 192 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		default_attr_list = attr_list;
		attr_list.clear();
	}
#line 2309 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 205 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (attr_list.count(*(yyvsp[0].string)) != 0)
			delete attr_list[*(yyvsp[0].string)];
		attr_list[*(yyvsp[0].string)] = AstNode::mkconst_int(1, false);
		delete (yyvsp[0].string);
	}
#line 2320 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (attr_list.count(*(yyvsp[-2].string)) != 0)
			delete attr_list[*(yyvsp[-2].string)];
		attr_list[*(yyvsp[-2].string)] = (yyvsp[0].ast);
		delete (yyvsp[-2].string);
	}
#line 2331 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 219 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.string) = (yyvsp[0].string);
	}
#line 2339 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 222 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].string)->substr(0, 1) == "\\")
			*(yyvsp[-2].string) += "::" + (yyvsp[0].string)->substr(1);
		else
			*(yyvsp[-2].string) += "::" + *(yyvsp[0].string);
		delete (yyvsp[0].string);
		(yyval.string) = (yyvsp[-2].string);
	}
#line 2352 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 230 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].string)->substr(0, 1) == "\\")
			*(yyvsp[-2].string) += "." + (yyvsp[0].string)->substr(1);
		else
			*(yyvsp[-2].string) += "." + *(yyvsp[0].string);
		delete (yyvsp[0].string);
		(yyval.string) = (yyvsp[-2].string);
	}
#line 2365 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 240 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		do_not_require_port_stubs = false;
		AstNode *mod = new AstNode(AST_MODULE);
		ast_stack.back()->children.push_back(mod);
		ast_stack.push_back(mod);
		current_ast_mod = mod;
		port_stubs.clear();
		port_counter = 0;
		mod->str = *(yyvsp[0].string);
		append_attr(mod, (yyvsp[-2].al));
		delete (yyvsp[0].string);
	}
#line 2382 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 251 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (port_stubs.size() != 0)
			frontend_verilog_yyerror("Missing details for module port `%s'.",
					port_stubs.begin()->first.c_str());
		ast_stack.pop_back();
		log_assert(ast_stack.size() == 1);
		current_ast_mod = NULL;
	}
#line 2395 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 261 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    { astbuf1 = nullptr; }
#line 2401 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 261 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    { if (astbuf1) delete astbuf1; }
#line 2407 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 268 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (astbuf1) delete astbuf1;
		astbuf1 = new AstNode(AST_PARAMETER);
		astbuf1->children.push_back(AstNode::mkconst_int(0, true));
	}
#line 2417 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 284 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (ast_stack.back()->children.size() > 0 && ast_stack.back()->children.back()->type == AST_WIRE) {
			AstNode *wire = new AstNode(AST_IDENTIFIER);
			wire->str = ast_stack.back()->children.back()->str;
			if (ast_stack.back()->children.back()->is_reg)
				ast_stack.back()->children.push_back(new AstNode(AST_INITIAL, new AstNode(AST_BLOCK, new AstNode(AST_ASSIGN_LE, wire, (yyvsp[0].ast)))));
			else
				ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, wire, (yyvsp[0].ast)));
		} else
			frontend_verilog_yyerror("Syntax error.");
	}
#line 2433 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 298 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (ast_stack.back()->children.size() > 0 && ast_stack.back()->children.back()->type == AST_WIRE) {
			AstNode *node = ast_stack.back()->children.back()->clone();
			node->str = *(yyvsp[0].string);
			node->port_id = ++port_counter;
			ast_stack.back()->children.push_back(node);
		} else {
			if (port_stubs.count(*(yyvsp[0].string)) != 0)
				frontend_verilog_yyerror("Duplicate module port `%s'.", (yyvsp[0].string)->c_str());
			port_stubs[*(yyvsp[0].string)] = ++port_counter;
		}
		delete (yyvsp[0].string);
	}
#line 2451 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 311 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = (yyvsp[-2].ast);
		node->str = *(yyvsp[0].string);
		node->port_id = ++port_counter;
		if ((yyvsp[-1].ast) != NULL)
			node->children.push_back((yyvsp[-1].ast));
		if (!node->is_input && !node->is_output)
			frontend_verilog_yyerror("Module port `%s' is neither input nor output.", (yyvsp[0].string)->c_str());
		if (node->is_reg && node->is_input && !node->is_output && !sv_mode)
			frontend_verilog_yyerror("Input port `%s' is declared as register.", (yyvsp[0].string)->c_str());
		ast_stack.back()->children.push_back(node);
		append_attr(node, (yyvsp[-3].al));
		delete (yyvsp[0].string);
	}
#line 2470 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 325 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		do_not_require_port_stubs = true;
	}
#line 2478 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 330 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *mod = new AstNode(AST_PACKAGE);
		ast_stack.back()->children.push_back(mod);
		ast_stack.push_back(mod);
		current_ast_mod = mod;
		mod->str = *(yyvsp[0].string);
		append_attr(mod, (yyvsp[-2].al));
	}
#line 2491 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 337 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
		current_ast_mod = NULL;
	}
#line 2500 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 349 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    { delete (yyvsp[-1].ast); }
#line 2506 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 350 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    { delete (yyvsp[-5].ast); delete (yyvsp[-3].ast); delete (yyvsp[-1].ast); }
#line 2512 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 356 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf3 = new AstNode(AST_WIRE);
	}
#line 2520 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 358 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = astbuf3;
	}
#line 2528 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 366 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf3->is_input = true;
	}
#line 2536 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 369 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf3->is_output = true;
	}
#line 2544 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 372 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf3->is_input = true;
		astbuf3->is_output = true;
	}
#line 2553 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 376 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
	}
#line 2560 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 378 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf3->is_reg = true;
	}
#line 2568 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 381 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf3->is_reg = true;
		astbuf3->range_left = 31;
		astbuf3->range_right = 0;
		astbuf3->is_signed = true;
	}
#line 2579 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 387 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf3->type = AST_GENVAR;
		astbuf3->is_reg = true;
		astbuf3->range_left = 31;
		astbuf3->range_right = 0;
	}
#line 2590 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 393 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf3->is_signed = true;
	}
#line 2598 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 398 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back((yyvsp[-3].ast));
		(yyval.ast)->children.push_back((yyvsp[-1].ast));
	}
#line 2608 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 403 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back(new AstNode(AST_SUB, new AstNode(AST_ADD, (yyvsp[-3].ast)->clone(), (yyvsp[-1].ast)), AstNode::mkconst_int(1, true)));
		(yyval.ast)->children.push_back(new AstNode(AST_ADD, (yyvsp[-3].ast), AstNode::mkconst_int(0, true)));
	}
#line 2618 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 408 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back(new AstNode(AST_ADD, (yyvsp[-3].ast), AstNode::mkconst_int(0, true)));
		(yyval.ast)->children.push_back(new AstNode(AST_SUB, new AstNode(AST_ADD, (yyvsp[-3].ast)->clone(), AstNode::mkconst_int(1, true)), (yyvsp[-1].ast)));
	}
#line 2628 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 413 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back((yyvsp[-1].ast));
	}
#line 2637 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 419 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_MULTIRANGE, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2645 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 422 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[-1].ast);
		(yyval.ast)->children.push_back((yyvsp[0].ast));
	}
#line 2654 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 428 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 2662 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 431 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = NULL;
	}
#line 2670 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 436 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2676 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 437 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2682 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 440 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 2690 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 443 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back(AstNode::mkconst_int(31, true));
		(yyval.ast)->children.push_back(AstNode::mkconst_int(0, true));
		(yyval.ast)->is_signed = true;
	}
#line 2701 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 461 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = new AstNode(AST_DPI_FUNCTION, AstNode::mkconst_str(*(yyvsp[-1].string)), AstNode::mkconst_str(*(yyvsp[0].string)));
		current_function_or_task->str = *(yyvsp[0].string);
		append_attr(current_function_or_task, (yyvsp[-3].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		delete (yyvsp[-1].string);
		delete (yyvsp[0].string);
	}
#line 2714 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 468 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = NULL;
	}
#line 2722 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 471 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = new AstNode(AST_DPI_FUNCTION, AstNode::mkconst_str(*(yyvsp[-1].string)), AstNode::mkconst_str(*(yyvsp[-3].string)));
		current_function_or_task->str = *(yyvsp[0].string);
		append_attr(current_function_or_task, (yyvsp[-5].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		delete (yyvsp[-3].string);
		delete (yyvsp[-1].string);
		delete (yyvsp[0].string);
	}
#line 2736 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 479 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = NULL;
	}
#line 2744 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 482 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = new AstNode(AST_DPI_FUNCTION, AstNode::mkconst_str(*(yyvsp[-1].string)), AstNode::mkconst_str(*(yyvsp[-5].string) + ":" + RTLIL::unescape_id(*(yyvsp[-3].string))));
		current_function_or_task->str = *(yyvsp[0].string);
		append_attr(current_function_or_task, (yyvsp[-7].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		delete (yyvsp[-5].string);
		delete (yyvsp[-3].string);
		delete (yyvsp[-1].string);
		delete (yyvsp[0].string);
	}
#line 2759 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 491 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = NULL;
	}
#line 2767 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 494 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = new AstNode(AST_TASK);
		current_function_or_task->str = *(yyvsp[0].string);
		append_attr(current_function_or_task, (yyvsp[-2].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		ast_stack.push_back(current_function_or_task);
		current_function_or_task_port_id = 1;
		delete (yyvsp[0].string);
	}
#line 2781 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 502 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = NULL;
		ast_stack.pop_back();
	}
#line 2790 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 506 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = new AstNode(AST_FUNCTION);
		current_function_or_task->str = *(yyvsp[0].string);
		append_attr(current_function_or_task, (yyvsp[-4].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		ast_stack.push_back(current_function_or_task);
		AstNode *outreg = new AstNode(AST_WIRE);
		outreg->str = *(yyvsp[0].string);
		outreg->is_signed = (yyvsp[-2].boolean);
		if ((yyvsp[-1].ast) != NULL) {
			outreg->children.push_back((yyvsp[-1].ast));
			outreg->is_signed = (yyvsp[-2].boolean) || (yyvsp[-1].ast)->is_signed;
			(yyvsp[-1].ast)->is_signed = false;
		}
		current_function_or_task->children.push_back(outreg);
		current_function_or_task_port_id = 1;
		delete (yyvsp[0].string);
	}
#line 2813 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 523 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task = NULL;
		ast_stack.pop_back();
	}
#line 2822 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 529 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task->children.push_back(AstNode::mkconst_str(*(yyvsp[-1].string)));
		delete (yyvsp[-1].string);
		delete (yyvsp[0].string);
	}
#line 2832 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 534 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		current_function_or_task->children.push_back(AstNode::mkconst_str(*(yyvsp[0].string)));
		delete (yyvsp[0].string);
	}
#line 2841 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 550 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.boolean) = true;
	}
#line 2849 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 553 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.boolean) = false;
	}
#line 2857 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 558 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		albuf = nullptr;
		astbuf1 = nullptr;
		astbuf2 = nullptr;
	}
#line 2867 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 562 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		delete astbuf1;
		if (astbuf2 != NULL)
			delete astbuf2;
		free_attr(albuf);
	}
#line 2878 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 573 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (albuf) {
			delete astbuf1;
			if (astbuf2 != NULL)
				delete astbuf2;
			free_attr(albuf);
		}
		albuf = (yyvsp[-2].al);
		astbuf1 = (yyvsp[-1].ast);
		astbuf2 = (yyvsp[0].ast);
		if (astbuf1->range_left >= 0 && astbuf1->range_right >= 0) {
			if (astbuf2) {
				frontend_verilog_yyerror("Syntax error.");
			} else {
				astbuf2 = new AstNode(AST_RANGE);
				astbuf2->children.push_back(AstNode::mkconst_int(astbuf1->range_left, true));
				astbuf2->children.push_back(AstNode::mkconst_int(astbuf1->range_right, true));
			}
		}
		if (astbuf2 && astbuf2->children.size() != 2)
			frontend_verilog_yyerror("Syntax error.");
	}
#line 2905 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 601 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf1->is_signed = true;
	}
#line 2913 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 606 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (astbuf1->children.size() != 1)
			frontend_verilog_yyerror("Syntax error.");
		astbuf1->children.push_back(new AstNode(AST_RANGE));
		astbuf1->children.back()->children.push_back(AstNode::mkconst_int(31, true));
		astbuf1->children.back()->children.push_back(AstNode::mkconst_int(0, true));
		astbuf1->is_signed = true;
	}
#line 2926 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 616 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (astbuf1->children.size() != 1)
			frontend_verilog_yyerror("Syntax error.");
		astbuf1->children.push_back(new AstNode(AST_REALVALUE));
	}
#line 2936 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 623 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].ast) != NULL) {
			if (astbuf1->children.size() != 1)
				frontend_verilog_yyerror("Syntax error.");
			astbuf1->children.push_back((yyvsp[0].ast));
		}
	}
#line 2948 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 632 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf1 = new AstNode(AST_PARAMETER);
		astbuf1->children.push_back(AstNode::mkconst_int(0, true));
	}
#line 2957 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 635 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		delete astbuf1;
	}
#line 2965 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 640 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf1 = new AstNode(AST_LOCALPARAM);
		astbuf1->children.push_back(AstNode::mkconst_int(0, true));
	}
#line 2974 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 643 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		delete astbuf1;
	}
#line 2982 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 651 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (astbuf1 == nullptr)
			frontend_verilog_yyerror("syntax error");
		AstNode *node = astbuf1->clone();
		node->str = *(yyvsp[-2].string);
		delete node->children[0];
		node->children[0] = (yyvsp[0].ast);
		ast_stack.back()->children.push_back(node);
		delete (yyvsp[-2].string);
	}
#line 2997 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 669 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_DEFPARAM);
		node->str = *(yyvsp[-2].string);
		node->children.push_back((yyvsp[0].ast));
		if ((yyvsp[-3].ast) != NULL)
			node->children.push_back((yyvsp[-3].ast));
		ast_stack.back()->children.push_back(node);
		delete (yyvsp[-2].string);
	}
#line 3011 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 680 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		albuf = (yyvsp[-2].al);
		astbuf1 = (yyvsp[-1].ast);
		astbuf2 = (yyvsp[0].ast);
		if (astbuf1->range_left >= 0 && astbuf1->range_right >= 0) {
			if (astbuf2) {
				frontend_verilog_yyerror("Syntax error.");
			} else {
				astbuf2 = new AstNode(AST_RANGE);
				astbuf2->children.push_back(AstNode::mkconst_int(astbuf1->range_left, true));
				astbuf2->children.push_back(AstNode::mkconst_int(astbuf1->range_right, true));
			}
		}
		if (astbuf2 && astbuf2->children.size() != 2)
			frontend_verilog_yyerror("Syntax error.");
	}
#line 3032 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 695 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		delete astbuf1;
		if (astbuf2 != NULL)
			delete astbuf2;
		free_attr(albuf);
	}
#line 3043 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 701 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back(new AstNode(AST_WIRE));
		ast_stack.back()->children.back()->str = *(yyvsp[0].string);
		append_attr(ast_stack.back()->children.back(), (yyvsp[-2].al));
		ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, new AstNode(AST_IDENTIFIER), AstNode::mkconst_int(0, false, 1)));
		ast_stack.back()->children.back()->children[0]->str = *(yyvsp[0].string);
		delete (yyvsp[0].string);
	}
#line 3056 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 709 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back(new AstNode(AST_WIRE));
		ast_stack.back()->children.back()->str = *(yyvsp[0].string);
		append_attr(ast_stack.back()->children.back(), (yyvsp[-2].al));
		ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, new AstNode(AST_IDENTIFIER), AstNode::mkconst_int(1, false, 1)));
		ast_stack.back()->children.back()->children[0]->str = *(yyvsp[0].string);
		delete (yyvsp[0].string);
	}
#line 3069 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 720 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *wire_node = ast_stack.back()->children.at(GetSize(ast_stack.back()->children)-2)->clone();
		AstNode *assign_node = ast_stack.back()->children.at(GetSize(ast_stack.back()->children)-1)->clone();
		wire_node->str = *(yyvsp[0].string);
		assign_node->children[0]->str = *(yyvsp[0].string);
		ast_stack.back()->children.push_back(wire_node);
		ast_stack.back()->children.push_back(assign_node);
		delete (yyvsp[0].string);
	}
#line 3083 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 735 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *wire = new AstNode(AST_IDENTIFIER);
		wire->str = ast_stack.back()->children.back()->str;
		if (astbuf1->is_reg)
			ast_stack.back()->children.push_back(new AstNode(AST_INITIAL, new AstNode(AST_BLOCK, new AstNode(AST_ASSIGN_LE, wire, (yyvsp[0].ast)))));
		else
			ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, wire, (yyvsp[0].ast)));
	}
#line 3096 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 745 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (astbuf1 == nullptr)
			frontend_verilog_yyerror("Syntax error.");
		AstNode *node = astbuf1->clone();
		node->str = *(yyvsp[-1].string);
		append_attr_clone(node, albuf);
		if (astbuf2 != NULL)
			node->children.push_back(astbuf2->clone());
		if ((yyvsp[0].ast) != NULL) {
			if (node->is_input || node->is_output)
				frontend_verilog_yyerror("Syntax error.");
			if (!astbuf2) {
				AstNode *rng = new AstNode(AST_RANGE);
				rng->children.push_back(AstNode::mkconst_int(0, true));
				rng->children.push_back(AstNode::mkconst_int(0, true));
				node->children.push_back(rng);
			}
			node->type = AST_MEMORY;
			node->children.push_back((yyvsp[0].ast));
		}
		if (current_function_or_task == NULL) {
			if (do_not_require_port_stubs && (node->is_input || node->is_output) && port_stubs.count(*(yyvsp[-1].string)) == 0) {
				port_stubs[*(yyvsp[-1].string)] = ++port_counter;
			}
			if (port_stubs.count(*(yyvsp[-1].string)) != 0) {
				if (!node->is_input && !node->is_output)
					frontend_verilog_yyerror("Module port `%s' is neither input nor output.", (yyvsp[-1].string)->c_str());
				if (node->is_reg && node->is_input && !node->is_output && !sv_mode)
					frontend_verilog_yyerror("Input port `%s' is declared as register.", (yyvsp[-1].string)->c_str());
				node->port_id = port_stubs[*(yyvsp[-1].string)];
				port_stubs.erase(*(yyvsp[-1].string));
			} else {
				if (node->is_input || node->is_output)
					frontend_verilog_yyerror("Module port `%s' is not declared in module header.", (yyvsp[-1].string)->c_str());
			}
		} else {
			if (node->is_input || node->is_output)
				node->port_id = current_function_or_task_port_id++;
		}
		ast_stack.back()->children.push_back(node);
		delete (yyvsp[-1].string);
	}
#line 3143 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 795 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)));
	}
#line 3151 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 800 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf1 = new AstNode(AST_CELL);
		append_attr(astbuf1, (yyvsp[-1].al));
		astbuf1->children.push_back(new AstNode(AST_CELLTYPE));
		astbuf1->children[0]->str = *(yyvsp[0].string);
		delete (yyvsp[0].string);
	}
#line 3163 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 806 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		delete astbuf1;
	}
#line 3171 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 809 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf1 = new AstNode(AST_PRIMITIVE);
		astbuf1->str = *(yyvsp[-1].string);
		append_attr(astbuf1, (yyvsp[-2].al));
		delete (yyvsp[-1].string);
	}
#line 3182 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 814 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		delete astbuf1;
	}
#line 3190 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 819 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.string) = (yyvsp[0].string);
	}
#line 3198 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 822 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.string) = new std::string("or");
	}
#line 3206 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 831 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf2 = astbuf1->clone();
		if (astbuf2->type != AST_PRIMITIVE)
			astbuf2->str = *(yyvsp[0].string);
		delete (yyvsp[0].string);
		ast_stack.back()->children.push_back(astbuf2);
	}
#line 3218 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 838 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf2 = astbuf1->clone();
		if (astbuf2->type != AST_PRIMITIVE)
			astbuf2->str = *(yyvsp[-1].string);
		delete (yyvsp[-1].string);
		ast_stack.back()->children.push_back(new AstNode(AST_CELLARRAY, (yyvsp[0].ast), astbuf2));
	}
#line 3230 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 852 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		astbuf2 = astbuf1->clone();
		ast_stack.back()->children.push_back(astbuf2);
	}
#line 3239 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 865 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_PARASET);
		astbuf1->children.push_back(node);
		node->children.push_back((yyvsp[0].ast));
	}
#line 3249 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 870 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_PARASET);
		node->str = *(yyvsp[-3].string);
		astbuf1->children.push_back(node);
		node->children.push_back((yyvsp[-1].ast));
		delete (yyvsp[-3].string);
	}
#line 3261 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 879 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		// remove empty args from end of list
		while (!astbuf2->children.empty()) {
			AstNode *node = astbuf2->children.back();
			if (node->type != AST_ARGUMENT) break;
			if (!node->children.empty()) break;
			if (!node->str.empty()) break;
			astbuf2->children.pop_back();
			delete node;
		}

		// check port types
		bool has_positional_args = false;
		bool has_named_args = false;
		for (auto node : astbuf2->children) {
			if (node->type != AST_ARGUMENT) continue;
			if (node->str.empty())
				has_positional_args = true;
			else
				has_named_args = true;
		}

		if (has_positional_args && has_named_args)
			frontend_verilog_yyerror("Mix of positional and named cell ports.");
	}
#line 3291 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 909 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_ARGUMENT);
		astbuf2->children.push_back(node);
	}
#line 3300 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 913 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_ARGUMENT);
		astbuf2->children.push_back(node);
		node->children.push_back((yyvsp[0].ast));
	}
#line 3310 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 918 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_ARGUMENT);
		node->str = *(yyvsp[-3].string);
		astbuf2->children.push_back(node);
		node->children.push_back((yyvsp[-1].ast));
		delete (yyvsp[-3].string);
	}
#line 3322 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 925 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_ARGUMENT);
		node->str = *(yyvsp[-2].string);
		astbuf2->children.push_back(node);
		delete (yyvsp[-2].string);
	}
#line 3333 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 933 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_ALWAYS);
		append_attr(node, (yyvsp[-1].al));
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
#line 3344 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 938 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
#line 3354 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 942 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3363 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 946 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_INITIAL);
		append_attr(node, (yyvsp[-1].al));
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
#line 3377 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 954 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3386 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 973 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_POSEDGE);
		ast_stack.back()->children.push_back(node);
		node->children.push_back((yyvsp[0].ast));
	}
#line 3396 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 978 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_NEGEDGE);
		ast_stack.back()->children.push_back(node);
		node->children.push_back((yyvsp[0].ast));
	}
#line 3406 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 983 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_EDGE);
		ast_stack.back()->children.push_back(node);
		node->children.push_back((yyvsp[0].ast));
	}
#line 3416 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 990 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.string) = (yyvsp[0].string);
	}
#line 3424 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 993 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.string) = NULL;
	}
#line 3432 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 998 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back(new AstNode(assume_asserts_mode ? AST_ASSUME : AST_ASSERT, (yyvsp[-2].ast)));
	}
#line 3440 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1001 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back(new AstNode(AST_ASSUME, (yyvsp[-2].ast)));
	}
#line 3448 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1004 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (norestrict_mode)
			delete (yyvsp[-2].ast);
		else
			ast_stack.back()->children.push_back(new AstNode(AST_ASSUME, (yyvsp[-2].ast)));
	}
#line 3459 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1012 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back(new AstNode(assume_asserts_mode ? AST_ASSUME : AST_ASSERT, (yyvsp[-2].ast)));
	}
#line 3467 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1015 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back(new AstNode(AST_ASSUME, (yyvsp[-2].ast)));
	}
#line 3475 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1018 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (norestrict_mode)
			delete (yyvsp[-2].ast);
		else
			ast_stack.back()->children.push_back(new AstNode(AST_ASSUME, (yyvsp[-2].ast)));
	}
#line 3486 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1026 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_ASSIGN_EQ, (yyvsp[-3].ast), (yyvsp[0].ast));
		ast_stack.back()->children.push_back(node);
	}
#line 3495 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1030 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_ASSIGN_LE, (yyvsp[-3].ast), (yyvsp[0].ast));
		ast_stack.back()->children.push_back(node);
	}
#line 3504 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1040 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_TCALL);
		node->str = *(yyvsp[-1].string);
		delete (yyvsp[-1].string);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[0].al));
	}
#line 3517 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1047 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
	}
#line 3525 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1050 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[-2].al));
		if ((yyvsp[0].string) != NULL)
			node->str = *(yyvsp[0].string);
	}
#line 3538 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1057 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[-4].string) != NULL && (yyvsp[0].string) != NULL && *(yyvsp[-4].string) != *(yyvsp[0].string))
			frontend_verilog_yyerror("Syntax error.");
		if ((yyvsp[-4].string) != NULL)
			delete (yyvsp[-4].string);
		if ((yyvsp[0].string) != NULL)
			delete (yyvsp[0].string);
		ast_stack.pop_back();
	}
#line 3552 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1066 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_FOR);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[-2].al));
	}
#line 3563 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1071 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back((yyvsp[0].ast));
	}
#line 3571 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1073 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
#line 3581 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1077 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3590 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1081 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_WHILE);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[-4].al));
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back((yyvsp[-1].ast));
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
#line 3605 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1090 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3614 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1094 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_REPEAT);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[-4].al));
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back((yyvsp[-1].ast));
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
#line 3629 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1103 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3638 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1107 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_CASE);
		AstNode *block = new AstNode(AST_BLOCK);
		AstNode *cond = new AstNode(AST_COND, AstNode::mkconst_int(1, false, 1), block);
		ast_stack.back()->children.push_back(node);
		node->children.push_back(new AstNode(AST_REDUCE_BOOL, (yyvsp[-1].ast)));
		node->children.push_back(cond);
		ast_stack.push_back(node);
		ast_stack.push_back(block);
		append_attr(node, (yyvsp[-4].al));
	}
#line 3654 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1117 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3663 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1121 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_CASE, (yyvsp[-1].ast));
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[-4].al));
	}
#line 3674 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1126 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		case_type_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3683 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1132 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		case_type_stack.push_back(0);
	}
#line 3691 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1135 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		case_type_stack.push_back('x');
	}
#line 3699 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1138 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		case_type_stack.push_back('z');
	}
#line 3707 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1143 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (ast_stack.back()->attributes.count("\\full_case") == 0)
			ast_stack.back()->attributes["\\full_case"] = AstNode::mkconst_int(1, false);
	}
#line 3716 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1147 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if (ast_stack.back()->attributes.count("\\parallel_case") == 0)
			ast_stack.back()->attributes["\\parallel_case"] = AstNode::mkconst_int(1, false);
	}
#line 3725 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1158 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *block = new AstNode(AST_BLOCK);
		AstNode *cond = new AstNode(AST_COND, new AstNode(AST_DEFAULT), block);
		ast_stack.pop_back();
		ast_stack.back()->children.push_back(cond);
		ast_stack.push_back(block);
	}
#line 3737 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1172 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(
				case_type_stack.size() && case_type_stack.back() == 'x' ? AST_CONDX :
				case_type_stack.size() && case_type_stack.back() == 'z' ? AST_CONDZ : AST_COND);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
#line 3749 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1178 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
		case_type_stack.push_back(0);
	}
#line 3760 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1183 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		case_type_stack.pop_back();
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3770 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1194 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(
				case_type_stack.size() && case_type_stack.back() == 'x' ? AST_CONDX :
				case_type_stack.size() && case_type_stack.back() == 'z' ? AST_CONDZ : AST_COND);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
#line 3782 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1200 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		case_type_stack.push_back(0);
	}
#line 3790 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1202 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		case_type_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3799 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1212 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back(new AstNode(AST_DEFAULT));
	}
#line 3807 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1215 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back((yyvsp[0].ast));
	}
#line 3815 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1218 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back((yyvsp[0].ast));
	}
#line 3823 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1223 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_PREFIX, (yyvsp[-3].ast), (yyvsp[0].ast));
		(yyval.ast)->str = *(yyvsp[-5].string);
		delete (yyvsp[-5].string);
	}
#line 3833 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1228 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_IDENTIFIER, (yyvsp[0].ast));
		(yyval.ast)->str = *(yyvsp[-1].string);
		delete (yyvsp[-1].string);
		if ((yyvsp[0].ast) == nullptr && formal_mode && ((yyval.ast)->str == "\\$initstate" || (yyval.ast)->str == "\\$anyconst" || (yyval.ast)->str == "\\$anyseq"))
			(yyval.ast)->type = AST_FCALL;
	}
#line 3845 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1235 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_IDENTIFIER, (yyvsp[0].ast));
		(yyval.ast)->str = *(yyvsp[-1].string);
		delete (yyvsp[-1].string);
	}
#line 3855 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1242 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 3863 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1245 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[-1].ast);
	}
#line 3871 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1250 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_CONCAT);
		(yyval.ast)->children.push_back((yyvsp[0].ast));
	}
#line 3880 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1254 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
		(yyval.ast)->children.push_back((yyvsp[-2].ast));
	}
#line 3889 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1272 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back((yyvsp[0].ast));
	}
#line 3897 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1285 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_GENFOR);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
#line 3907 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1289 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.back()->children.push_back((yyvsp[0].ast));
	}
#line 3915 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1291 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
	}
#line 3923 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1294 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_GENIF);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		ast_stack.back()->children.push_back((yyvsp[-1].ast));
	}
#line 3934 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1299 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
	}
#line 3942 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1302 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_GENCASE, (yyvsp[-1].ast));
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
#line 3952 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1306 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		case_type_stack.pop_back();
		ast_stack.pop_back();
	}
#line 3961 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1310 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_GENBLOCK);
		node->str = (yyvsp[0].string) ? *(yyvsp[0].string) : std::string();
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
#line 3972 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1315 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[-4].string) != NULL)
			delete (yyvsp[-4].string);
		if ((yyvsp[0].string) != NULL)
			delete (yyvsp[0].string);
		ast_stack.pop_back();
	}
#line 3984 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1324 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_GENBLOCK);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
#line 3994 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1328 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		ast_stack.pop_back();
	}
#line 4002 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1339 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 4010 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1342 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_TERNARY);
		(yyval.ast)->children.push_back((yyvsp[-5].ast));
		(yyval.ast)->children.push_back((yyvsp[-2].ast));
		(yyval.ast)->children.push_back((yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-3].al));
	}
#line 4022 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1351 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
	}
#line 4030 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1354 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].string)->substr(0, 1) != "'")
			frontend_verilog_yyerror("Syntax error.");
		AstNode *bits = (yyvsp[-2].ast);
		AstNode *val = const2ast(*(yyvsp[0].string), case_type_stack.size() == 0 ? 0 : case_type_stack.back(), !lib_mode);
		if (val == NULL)
			log_error("Value conversion failed: `%s'\n", (yyvsp[0].string)->c_str());
		(yyval.ast) = new AstNode(AST_TO_BITS, bits, val);
		delete (yyvsp[0].string);
	}
#line 4045 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1364 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		if ((yyvsp[0].string)->substr(0, 1) != "'")
			frontend_verilog_yyerror("Syntax error.");
		AstNode *bits = new AstNode(AST_IDENTIFIER);
		bits->str = *(yyvsp[-1].string);
		AstNode *val = const2ast(*(yyvsp[0].string), case_type_stack.size() == 0 ? 0 : case_type_stack.back(), !lib_mode);
		if (val == NULL)
			log_error("Value conversion failed: `%s'\n", (yyvsp[0].string)->c_str());
		(yyval.ast) = new AstNode(AST_TO_BITS, bits, val);
		delete (yyvsp[-1].string);
		delete (yyvsp[0].string);
	}
#line 4062 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1376 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = const2ast(*(yyvsp[-1].string) + *(yyvsp[0].string), case_type_stack.size() == 0 ? 0 : case_type_stack.back(), !lib_mode);
		if ((yyval.ast) == NULL || (*(yyvsp[0].string))[0] != '\'')
			log_error("Value conversion failed: `%s%s'\n", (yyvsp[-1].string)->c_str(), (yyvsp[0].string)->c_str());
		delete (yyvsp[-1].string);
		delete (yyvsp[0].string);
	}
#line 4074 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1383 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = const2ast(*(yyvsp[0].string), case_type_stack.size() == 0 ? 0 : case_type_stack.back(), !lib_mode);
		if ((yyval.ast) == NULL)
			log_error("Value conversion failed: `%s'\n", (yyvsp[0].string)->c_str());
		delete (yyvsp[0].string);
	}
#line 4085 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1389 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_REALVALUE);
		char *p = (char*)malloc(GetSize(*(yyvsp[0].string)) + 1), *q;
		for (int i = 0, j = 0; j < GetSize(*(yyvsp[0].string)); j++)
			if ((*(yyvsp[0].string))[j] != '_')
				p[i++] = (*(yyvsp[0].string))[j], p[i] = 0;
		(yyval.ast)->realvalue = strtod(p, &q);
		log_assert(*q == 0);
		delete (yyvsp[0].string);
		free(p);
	}
#line 4101 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1400 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = AstNode::mkconst_str(*(yyvsp[0].string));
		delete (yyvsp[0].string);
	}
#line 4110 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1404 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		AstNode *node = new AstNode(AST_FCALL);
		node->str = *(yyvsp[-1].string);
		delete (yyvsp[-1].string);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[0].al));
	}
#line 4122 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1410 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = ast_stack.back();
		ast_stack.pop_back();
	}
#line 4131 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1414 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_TO_SIGNED, (yyvsp[-1].ast));
		append_attr((yyval.ast), (yyvsp[-3].al));
	}
#line 4140 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1418 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_TO_UNSIGNED, (yyvsp[-1].ast));
		append_attr((yyval.ast), (yyvsp[-3].al));
	}
#line 4149 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1422 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[-1].ast);
	}
#line 4157 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1425 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		delete (yyvsp[-5].ast);
		(yyval.ast) = (yyvsp[-3].ast);
		delete (yyvsp[-1].ast);
	}
#line 4167 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1430 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[-1].ast);
	}
#line 4175 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1433 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_REPLICATE, (yyvsp[-4].ast), (yyvsp[-2].ast));
	}
#line 4183 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1436 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_BIT_NOT, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4192 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1440 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_BIT_AND, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4201 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1444 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_BIT_OR, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4210 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1448 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_BIT_XOR, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4219 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1452 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_BIT_XNOR, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4228 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1456 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_REDUCE_AND, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4237 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1460 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_REDUCE_AND, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
		(yyval.ast) = new AstNode(AST_LOGIC_NOT, (yyval.ast));
	}
#line 4247 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1465 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_REDUCE_OR, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4256 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1469 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_REDUCE_OR, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
		(yyval.ast) = new AstNode(AST_LOGIC_NOT, (yyval.ast));
	}
#line 4266 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1474 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_REDUCE_XOR, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4275 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1478 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_REDUCE_XNOR, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4284 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1482 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_SHIFT_LEFT, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4293 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1486 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_SHIFT_RIGHT, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4302 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1490 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_SHIFT_SLEFT, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4311 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1494 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_SHIFT_SRIGHT, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4320 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1498 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_LT, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4329 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1502 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_LE, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4338 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1506 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_EQ, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4347 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1510 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_NE, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4356 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1514 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_EQX, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4365 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1518 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_NEX, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4374 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1522 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_GE, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4383 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1526 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_GT, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4392 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1530 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_ADD, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4401 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1534 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_SUB, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4410 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1538 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_MUL, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4419 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1542 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_DIV, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4428 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1546 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_MOD, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4437 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1550 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_POW, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4446 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1554 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_POS, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4455 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1558 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_NEG, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4464 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1562 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_LOGIC_AND, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4473 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1566 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_LOGIC_OR, (yyvsp[-3].ast), (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4482 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1570 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_LOGIC_NOT, (yyvsp[0].ast));
		append_attr((yyval.ast), (yyvsp[-1].al));
	}
#line 4491 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1576 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = new AstNode(AST_CONCAT, (yyvsp[0].ast));
	}
#line 4499 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1579 "frontends/verilog/verilog_parser.y" /* yacc.c:1646  */
    {
		(yyval.ast) = (yyvsp[0].ast);
		(yyval.ast)->children.push_back((yyvsp[-2].ast));
	}
#line 4508 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
    break;


#line 4512 "frontends/verilog/verilog_parser.tab.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
