/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 96 "frontends/verilog/verilog_parser.y" /* yacc.c:1909  */

	std::string *string;
	struct YOSYS_NAMESPACE_PREFIX AST::AstNode *ast;
	std::map<std::string, YOSYS_NAMESPACE_PREFIX AST::AstNode*> *al;
	bool boolean;

#line 144 "frontends/verilog/verilog_parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE frontend_verilog_yylval;

int frontend_verilog_yyparse (void);

#endif /* !YY_FRONTEND_VERILOG_YY_FRONTENDS_VERILOG_VERILOG_PARSER_TAB_H_INCLUDED  */
