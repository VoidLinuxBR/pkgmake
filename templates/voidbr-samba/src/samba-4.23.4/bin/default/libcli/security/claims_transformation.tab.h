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

#ifndef YY__CLAIMS_TF_YY_CLAIMS_TRANSFORMATION_TAB_H_INCLUDED
# define YY__CLAIMS_TF_YY_CLAIMS_TRANSFORMATION_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef __CLAIMS_TF_YY_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define __CLAIMS_TF_YY_DEBUG 1
#  else
#   define __CLAIMS_TF_YY_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define __CLAIMS_TF_YY_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined __CLAIMS_TF_YY_DEBUG */
#if __CLAIMS_TF_YY_DEBUG
extern int __claims_tf_yy_debug;
#endif

/* Token kinds.  */
#ifndef __CLAIMS_TF_YY_TOKENTYPE
# define __CLAIMS_TF_YY_TOKENTYPE
  enum __claims_tf_yy_tokentype
  {
    __CLAIMS_TF_YY_EMPTY = -2,
    __CLAIMS_TF_YY_EOF = 0,        /* "end of file"  */
    __CLAIMS_TF_YY_error = 256,    /* error  */
    __CLAIMS_TF_YY_UNDEF = 257,    /* "invalid token"  */
    CLAIMS_TF_YY_IMPLY = 258,      /* CLAIMS_TF_YY_IMPLY  */
    CLAIMS_TF_YY_SEMICOLON = 259,  /* CLAIMS_TF_YY_SEMICOLON  */
    CLAIMS_TF_YY_COLON = 260,      /* CLAIMS_TF_YY_COLON  */
    CLAIMS_TF_YY_COMMA = 261,      /* CLAIMS_TF_YY_COMMA  */
    CLAIMS_TF_YY_DOT = 262,        /* CLAIMS_TF_YY_DOT  */
    CLAIMS_TF_YY_O_SQ_BRACKET = 263, /* CLAIMS_TF_YY_O_SQ_BRACKET  */
    CLAIMS_TF_YY_C_SQ_BRACKET = 264, /* CLAIMS_TF_YY_C_SQ_BRACKET  */
    CLAIMS_TF_YY_O_BRACKET = 265,  /* CLAIMS_TF_YY_O_BRACKET  */
    CLAIMS_TF_YY_C_BRACKET = 266,  /* CLAIMS_TF_YY_C_BRACKET  */
    CLAIMS_TF_YY_EQ = 267,         /* CLAIMS_TF_YY_EQ  */
    CLAIMS_TF_YY_NEQ = 268,        /* CLAIMS_TF_YY_NEQ  */
    CLAIMS_TF_YY_REGEXP_MATCH = 269, /* CLAIMS_TF_YY_REGEXP_MATCH  */
    CLAIMS_TF_YY_REGEXP_NOT_MATCH = 270, /* CLAIMS_TF_YY_REGEXP_NOT_MATCH  */
    CLAIMS_TF_YY_ASSIGN = 271,     /* CLAIMS_TF_YY_ASSIGN  */
    CLAIMS_TF_YY_AND = 272,        /* CLAIMS_TF_YY_AND  */
    CLAIMS_TF_YY_ISSUE = 273,      /* CLAIMS_TF_YY_ISSUE  */
    CLAIMS_TF_YY_TYPE = 274,       /* CLAIMS_TF_YY_TYPE  */
    CLAIMS_TF_YY_VALUE = 275,      /* CLAIMS_TF_YY_VALUE  */
    CLAIMS_TF_YY_VALUE_TYPE = 276, /* CLAIMS_TF_YY_VALUE_TYPE  */
    CLAIMS_TF_YY_CLAIM = 277,      /* CLAIMS_TF_YY_CLAIM  */
    CLAIMS_TF_YY_IDENTIFIER = 278, /* CLAIMS_TF_YY_IDENTIFIER  */
    CLAIMS_TF_YY_STRING = 279      /* CLAIMS_TF_YY_STRING  */
  };
  typedef enum __claims_tf_yy_tokentype __claims_tf_yy_token_kind_t;
#endif

/* Value type.  */
#if ! defined __CLAIMS_TF_YY_STYPE && ! defined __CLAIMS_TF_YY_STYPE_IS_DECLARED
union __CLAIMS_TF_YY_STYPE
{

	int ival;
	const char *sval;
	struct claims_tf_rule_set *rule_set;
	struct claims_tf_rule_ctr *rule_ctr;
	struct claims_tf_rule *rule;
	struct claims_tf_condition_set_ctr *condition_set_ctr;
	struct claims_tf_condition_set *condition_set;
	struct claims_tf_condition_ctr *condition_ctr;
	struct claims_tf_condition *condition;
	struct claim_prop prop;
	struct Cond_oper oper;
	struct Expr expr;
	struct Literal literal;
	struct claim_copy c_copy;
	struct claim_new c_new;
	struct claim_value_assign value_assign;
	struct claim_val_assign val_assign;
	struct claim_val_type_assign val_type_assign;
	struct claim_type_assign type_assign;


};
typedef union __CLAIMS_TF_YY_STYPE __CLAIMS_TF_YY_STYPE;
# define __CLAIMS_TF_YY_STYPE_IS_TRIVIAL 1
# define __CLAIMS_TF_YY_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined __CLAIMS_TF_YY_LTYPE && ! defined __CLAIMS_TF_YY_LTYPE_IS_DECLARED
typedef struct __CLAIMS_TF_YY_LTYPE __CLAIMS_TF_YY_LTYPE;
struct __CLAIMS_TF_YY_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define __CLAIMS_TF_YY_LTYPE_IS_DECLARED 1
# define __CLAIMS_TF_YY_LTYPE_IS_TRIVIAL 1
#endif




int __claims_tf_yy_parse (struct claims_tf_parser_state *ctf_ps, void *yyscanner);

/* "%code provides" blocks.  */



#endif /* !YY__CLAIMS_TF_YY_CLAIMS_TRANSFORMATION_TAB_H_INCLUDED  */
