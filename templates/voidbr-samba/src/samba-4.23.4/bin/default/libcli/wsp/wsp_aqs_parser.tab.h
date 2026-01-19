/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_WSP_AQS_PARSER_TAB_H_INCLUDED
# define YY_YY_WSP_AQS_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */


#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif



/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_NE = 261,                /* TOKEN_NE  */
    TOKEN_GE = 263,                /* TOKEN_GE  */
    TOKEN_LE = 265,                /* TOKEN_LE  */
    TOKEN_LT = 267,                /* TOKEN_LT  */
    TOKEN_GT = 269,                /* TOKEN_GT  */
    TOKEN_NOT = 271,               /* TOKEN_NOT  */
    TOKEN_EQ = 273,                /* TOKEN_EQ  */
    TOKEN_PROP_EQUALS = 275,       /* TOKEN_PROP_EQUALS  */
    TOKEN_LPAREN = 278,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 279,            /* TOKEN_RPAREN  */
    TOKEN_AND = 280,               /* TOKEN_AND  */
    TOKEN_OR = 281,                /* TOKEN_OR  */
    TOKEN_WHERE = 282,             /* TOKEN_WHERE  */
    TOKEN_SELECT = 283,            /* TOKEN_SELECT  */
    TOKEN_TRUE = 284,              /* TOKEN_TRUE  */
    TOKEN_FALSE = 285,             /* TOKEN_FALSE  */
    TOKEN_COMMA = 286,             /* TOKEN_COMMA  */
    TOKEN_STARTS_WITH = 287,       /* TOKEN_STARTS_WITH  */
    TOKEN_EQUALS = 288,            /* TOKEN_EQUALS  */
    TOKEN_MATCHES = 289,           /* TOKEN_MATCHES  */
    TOKEN_K = 290,                 /* TOKEN_K  */
    TOKEN_M = 291,                 /* TOKEN_M  */
    TOKEN_G = 292,                 /* TOKEN_G  */
    TOKEN_T = 293,                 /* TOKEN_T  */
    TOKEN_KB = 294,                /* TOKEN_KB  */
    TOKEN_MB = 295,                /* TOKEN_MB  */
    TOKEN_GB = 296,                /* TOKEN_GB  */
    TOKEN_TB = 297,                /* TOKEN_TB  */
    TOKEN_RANGE = 298,             /* TOKEN_RANGE  */
    TOKEN_TODAY = 299,             /* TOKEN_TODAY  */
    TOKEN_YESTERDAY = 300,         /* TOKEN_YESTERDAY  */
    TOKEN_THISWEEK = 301,          /* TOKEN_THISWEEK  */
    TOKEN_LASTWEEK = 302,          /* TOKEN_LASTWEEK  */
    TOKEN_THISMONTH = 303,         /* TOKEN_THISMONTH  */
    TOKEN_LASTMONTH = 304,         /* TOKEN_LASTMONTH  */
    TOKEN_THISYEAR = 305,          /* TOKEN_THISYEAR  */
    TOKEN_LASTYEAR = 306,          /* TOKEN_LASTYEAR  */
    TOKEN_EMPTY = 307,             /* TOKEN_EMPTY  */
    TOKEN_TINY = 308,              /* TOKEN_TINY  */
    TOKEN_SMALL = 309,             /* TOKEN_SMALL  */
    TOKEN_MEDIUM = 310,            /* TOKEN_MEDIUM  */
    TOKEN_LARGE = 311,             /* TOKEN_LARGE  */
    TOKEN_HUGE = 312,              /* TOKEN_HUGE  */
    TOKEN_GIGANTIC = 313,          /* TOKEN_GIGANTIC  */
    TOKEN_NUMBER = 314,            /* TOKEN_NUMBER  */
    TOKEN_IDENTIFIER = 315,        /* TOKEN_IDENTIFIER  */
    TOKEN_STRING_LITERAL = 316     /* TOKEN_STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

	char *strval;
	int64_t num;
	t_value_holder *value;
	t_select_stmt *select_stmt;
	t_select_stmt *query_stmt;
	t_basic_restr *bas_rest;
	t_basic_query *bas_query;
	t_restr *restr;
	t_query       *query;
	t_col_list *columns;
	daterange_type daterange;
	sizerange_type sizerange;
	t_optype prop_op;


};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (t_select_stmt **select, yyscan_t scanner);


#endif /* !YY_YY_WSP_AQS_PARSER_TAB_H_INCLUDED  */
