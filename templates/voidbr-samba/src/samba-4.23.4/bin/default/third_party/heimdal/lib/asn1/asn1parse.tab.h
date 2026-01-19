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

#ifndef YY_YY_ASN1PARSE_TAB_H_INCLUDED
# define YY_YY_ASN1PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    kw_ABSENT = 258,               /* kw_ABSENT  */
    kw_ABSTRACT_SYNTAX = 259,      /* kw_ABSTRACT_SYNTAX  */
    kw_ALL = 260,                  /* kw_ALL  */
    kw_APPLICATION = 261,          /* kw_APPLICATION  */
    kw_AUTOMATIC = 262,            /* kw_AUTOMATIC  */
    kw_BEGIN = 263,                /* kw_BEGIN  */
    kw_BIT = 264,                  /* kw_BIT  */
    kw_BMPString = 265,            /* kw_BMPString  */
    kw_BOOLEAN = 266,              /* kw_BOOLEAN  */
    kw_BY = 267,                   /* kw_BY  */
    kw_CHARACTER = 268,            /* kw_CHARACTER  */
    kw_CHOICE = 269,               /* kw_CHOICE  */
    kw_CLASS = 270,                /* kw_CLASS  */
    kw_COMPONENT = 271,            /* kw_COMPONENT  */
    kw_COMPONENTS = 272,           /* kw_COMPONENTS  */
    kw_CONSTRAINED = 273,          /* kw_CONSTRAINED  */
    kw_CONTAINING = 274,           /* kw_CONTAINING  */
    kw_DEFAULT = 275,              /* kw_DEFAULT  */
    kw_DEFINITIONS = 276,          /* kw_DEFINITIONS  */
    kw_EMBEDDED = 277,             /* kw_EMBEDDED  */
    kw_ENCODED = 278,              /* kw_ENCODED  */
    kw_END = 279,                  /* kw_END  */
    kw_ENUMERATED = 280,           /* kw_ENUMERATED  */
    kw_EXCEPT = 281,               /* kw_EXCEPT  */
    kw_EXPLICIT = 282,             /* kw_EXPLICIT  */
    kw_EXPORTS = 283,              /* kw_EXPORTS  */
    kw_EXTENSIBILITY = 284,        /* kw_EXTENSIBILITY  */
    kw_EXTERNAL = 285,             /* kw_EXTERNAL  */
    kw_FALSE = 286,                /* kw_FALSE  */
    kw_FROM = 287,                 /* kw_FROM  */
    kw_GeneralString = 288,        /* kw_GeneralString  */
    kw_GeneralizedTime = 289,      /* kw_GeneralizedTime  */
    kw_GraphicString = 290,        /* kw_GraphicString  */
    kw_IA5String = 291,            /* kw_IA5String  */
    kw_IDENTIFIER = 292,           /* kw_IDENTIFIER  */
    kw_IMPLICIT = 293,             /* kw_IMPLICIT  */
    kw_IMPLIED = 294,              /* kw_IMPLIED  */
    kw_IMPORTS = 295,              /* kw_IMPORTS  */
    kw_INCLUDES = 296,             /* kw_INCLUDES  */
    kw_INSTANCE = 297,             /* kw_INSTANCE  */
    kw_INTEGER = 298,              /* kw_INTEGER  */
    kw_INTERSECTION = 299,         /* kw_INTERSECTION  */
    kw_ISO646String = 300,         /* kw_ISO646String  */
    kw_MAX = 301,                  /* kw_MAX  */
    kw_MIN = 302,                  /* kw_MIN  */
    kw_MINUS_INFINITY = 303,       /* kw_MINUS_INFINITY  */
    kw_NULL = 304,                 /* kw_NULL  */
    kw_NumericString = 305,        /* kw_NumericString  */
    kw_OBJECT = 306,               /* kw_OBJECT  */
    kw_OCTET = 307,                /* kw_OCTET  */
    kw_OF = 308,                   /* kw_OF  */
    kw_OPTIONAL = 309,             /* kw_OPTIONAL  */
    kw_ObjectDescriptor = 310,     /* kw_ObjectDescriptor  */
    kw_PATTERN = 311,              /* kw_PATTERN  */
    kw_PDV = 312,                  /* kw_PDV  */
    kw_PLUS_INFINITY = 313,        /* kw_PLUS_INFINITY  */
    kw_PRESENT = 314,              /* kw_PRESENT  */
    kw_PRIVATE = 315,              /* kw_PRIVATE  */
    kw_PrintableString = 316,      /* kw_PrintableString  */
    kw_REAL = 317,                 /* kw_REAL  */
    kw_RELATIVE_OID = 318,         /* kw_RELATIVE_OID  */
    kw_SEQUENCE = 319,             /* kw_SEQUENCE  */
    kw_SET = 320,                  /* kw_SET  */
    kw_SIZE = 321,                 /* kw_SIZE  */
    kw_STRING = 322,               /* kw_STRING  */
    kw_SYNTAX = 323,               /* kw_SYNTAX  */
    kw_T61String = 324,            /* kw_T61String  */
    kw_TAGS = 325,                 /* kw_TAGS  */
    kw_TRUE = 326,                 /* kw_TRUE  */
    kw_TYPE_IDENTIFIER = 327,      /* kw_TYPE_IDENTIFIER  */
    kw_TeletexString = 328,        /* kw_TeletexString  */
    kw_UNION = 329,                /* kw_UNION  */
    kw_UNIQUE = 330,               /* kw_UNIQUE  */
    kw_UNIVERSAL = 331,            /* kw_UNIVERSAL  */
    kw_UTCTime = 332,              /* kw_UTCTime  */
    kw_UTF8String = 333,           /* kw_UTF8String  */
    kw_UniversalString = 334,      /* kw_UniversalString  */
    kw_VideotexString = 335,       /* kw_VideotexString  */
    kw_VisibleString = 336,        /* kw_VisibleString  */
    kw_WITH = 337,                 /* kw_WITH  */
    RANGE = 338,                   /* RANGE  */
    EEQUAL = 339,                  /* EEQUAL  */
    ELLIPSIS = 340,                /* ELLIPSIS  */
    TYPE_IDENTIFIER = 341,         /* TYPE_IDENTIFIER  */
    referencename = 342,           /* referencename  */
    CLASS_IDENTIFIER = 343,        /* CLASS_IDENTIFIER  */
    VALUE_IDENTIFIER = 344,        /* VALUE_IDENTIFIER  */
    STRING = 345,                  /* STRING  */
    NUMBER = 346                   /* NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

    int64_t constant;
    struct value *value;
    struct range *range;
    char *name;
    Type *type;
    IOSClass *class;
    IOSObjectSet *objectset;
    IOSObject *object;
    Field *field;
    ObjectField *objfield;
    Member *member;
    IOSClass *formalparam;
    struct objid *objid;
    char *defval;
    struct string_list *sl;
    struct tagtype tag;
    struct memhead *members;
    struct fieldhead *fields;
    struct objectshead *objects;
    struct objfieldhead *objfields;
    struct constraint_spec *constraint_spec;


};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASN1PARSE_TAB_H_INCLUDED  */
