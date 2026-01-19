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

#ifndef YY_MDSYYL_ES_PARSER_TAB_H_INCLUDED
# define YY_MDSYYL_ES_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef MDSYYLDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define MDSYYLDEBUG 1
#  else
#   define MDSYYLDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define MDSYYLDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined MDSYYLDEBUG */
#if MDSYYLDEBUG
extern int mdsyyldebug;
#endif

/* Token kinds.  */
#ifndef MDSYYLTOKENTYPE
# define MDSYYLTOKENTYPE
  enum mdsyyltokentype
  {
    MDSYYLEMPTY = -2,
    MDSYYLEOF = 0,                 /* "end of file"  */
    MDSYYLerror = 256,             /* error  */
    MDSYYLUNDEF = 257,             /* "invalid token"  */
    WORD = 258,                    /* WORD  */
    PHRASE = 259,                  /* PHRASE  */
    BOOLEAN = 260,                 /* BOOLEAN  */
    FUNC_INRANGE = 261,            /* FUNC_INRANGE  */
    DATE_ISO = 262,                /* DATE_ISO  */
    OBRACE = 263,                  /* OBRACE  */
    CBRACE = 264,                  /* CBRACE  */
    EQUAL = 265,                   /* EQUAL  */
    UNEQUAL = 266,                 /* UNEQUAL  */
    GT = 267,                      /* GT  */
    LT = 268,                      /* LT  */
    COMMA = 269,                   /* COMMA  */
    QUOTE = 270,                   /* QUOTE  */
    OR = 271,                      /* OR  */
    AND = 272                      /* AND  */
  };
  typedef enum mdsyyltokentype mdsyyltoken_kind_t;
#endif

/* Value type.  */
#if ! defined MDSYYLSTYPE && ! defined MDSYYLSTYPE_IS_DECLARED
union MDSYYLSTYPE
{

	bool bval;
	const char *sval;
	struct es_attr_map *attr_map;


};
typedef union MDSYYLSTYPE MDSYYLSTYPE;
# define MDSYYLSTYPE_IS_TRIVIAL 1
# define MDSYYLSTYPE_IS_DECLARED 1
#endif


extern MDSYYLSTYPE mdsyyllval;


int mdsyylparse (void);

/* "%code provides" blocks.  */

	#include <stdbool.h>
	#include <jansson.h>
	#include "rpc_server/mdssvc/mdssvc.h"

	/* 2001-01-01T00:00:00Z - Unix Epoch = SP_RAW_TIME_OFFSET */
	#define SP_RAW_TIME_OFFSET 978307200

	int mdsyylwrap(void);
	bool map_spotlight_to_es_query(TALLOC_CTX *mem_ctx,
				       json_t *mappings,
				       const char *query_string,
				       char **_es_query);


#endif /* !YY_MDSYYL_ES_PARSER_TAB_H_INCLUDED  */
