/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */


#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "symbol.h"
#include "lex.h"
#include "gen_locl.h"
#include "der.h"

static Type *new_type (Typetype t);
/*static IOSClass *new_class(struct fieldhead *);*/
/*static IOSObject *new_object(struct objfieldhead *);*/
/*IOSObjectSet *new_object_set(struct objectshead *);*/
static struct objectshead *add_object_set_spec(struct objectshead *, IOSObject *);
static ObjectField *new_field_setting(char *, Type *, struct value *);
static struct objfieldhead *add_field_setting(struct objfieldhead *, ObjectField *);
static struct fieldhead *add_field_spec(struct fieldhead *, Field *);
static Field *new_type_field(char *, int, Type *);
static Field *new_fixed_type_value_field(char *, Type *, int, int, struct value *);
static Type *parametrize_type(Type *, IOSClass *);
static Type *type_from_class_field(IOSClass *, const char *);
static void validate_object_set(IOSObjectSet *);
/*static Type *type_from_object(const char *, const char *);*/
static struct constraint_spec *new_constraint_spec(enum ctype);
static Type *new_tag(int tagclass, int tagvalue, int tagenv, Type *oldtype);
void yyerror (const char *);
#define yyerror yyerror
static struct objid *new_objid(const char *label, int value);
static void add_oid_to_tail(struct objid *, struct objid *);
static void fix_labels(Symbol *s);

struct string_list {
    char *string;
    struct string_list *next;
};

static int default_tag_env = TE_EXPLICIT;
static unsigned long idcounter;

/* Declarations for Bison */
#define YYMALLOC malloc
#define YYFREE   free



# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "asn1parse.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_kw_ABSENT = 3,                  /* kw_ABSENT  */
  YYSYMBOL_kw_ABSTRACT_SYNTAX = 4,         /* kw_ABSTRACT_SYNTAX  */
  YYSYMBOL_kw_ALL = 5,                     /* kw_ALL  */
  YYSYMBOL_kw_APPLICATION = 6,             /* kw_APPLICATION  */
  YYSYMBOL_kw_AUTOMATIC = 7,               /* kw_AUTOMATIC  */
  YYSYMBOL_kw_BEGIN = 8,                   /* kw_BEGIN  */
  YYSYMBOL_kw_BIT = 9,                     /* kw_BIT  */
  YYSYMBOL_kw_BMPString = 10,              /* kw_BMPString  */
  YYSYMBOL_kw_BOOLEAN = 11,                /* kw_BOOLEAN  */
  YYSYMBOL_kw_BY = 12,                     /* kw_BY  */
  YYSYMBOL_kw_CHARACTER = 13,              /* kw_CHARACTER  */
  YYSYMBOL_kw_CHOICE = 14,                 /* kw_CHOICE  */
  YYSYMBOL_kw_CLASS = 15,                  /* kw_CLASS  */
  YYSYMBOL_kw_COMPONENT = 16,              /* kw_COMPONENT  */
  YYSYMBOL_kw_COMPONENTS = 17,             /* kw_COMPONENTS  */
  YYSYMBOL_kw_CONSTRAINED = 18,            /* kw_CONSTRAINED  */
  YYSYMBOL_kw_CONTAINING = 19,             /* kw_CONTAINING  */
  YYSYMBOL_kw_DEFAULT = 20,                /* kw_DEFAULT  */
  YYSYMBOL_kw_DEFINITIONS = 21,            /* kw_DEFINITIONS  */
  YYSYMBOL_kw_EMBEDDED = 22,               /* kw_EMBEDDED  */
  YYSYMBOL_kw_ENCODED = 23,                /* kw_ENCODED  */
  YYSYMBOL_kw_END = 24,                    /* kw_END  */
  YYSYMBOL_kw_ENUMERATED = 25,             /* kw_ENUMERATED  */
  YYSYMBOL_kw_EXCEPT = 26,                 /* kw_EXCEPT  */
  YYSYMBOL_kw_EXPLICIT = 27,               /* kw_EXPLICIT  */
  YYSYMBOL_kw_EXPORTS = 28,                /* kw_EXPORTS  */
  YYSYMBOL_kw_EXTENSIBILITY = 29,          /* kw_EXTENSIBILITY  */
  YYSYMBOL_kw_EXTERNAL = 30,               /* kw_EXTERNAL  */
  YYSYMBOL_kw_FALSE = 31,                  /* kw_FALSE  */
  YYSYMBOL_kw_FROM = 32,                   /* kw_FROM  */
  YYSYMBOL_kw_GeneralString = 33,          /* kw_GeneralString  */
  YYSYMBOL_kw_GeneralizedTime = 34,        /* kw_GeneralizedTime  */
  YYSYMBOL_kw_GraphicString = 35,          /* kw_GraphicString  */
  YYSYMBOL_kw_IA5String = 36,              /* kw_IA5String  */
  YYSYMBOL_kw_IDENTIFIER = 37,             /* kw_IDENTIFIER  */
  YYSYMBOL_kw_IMPLICIT = 38,               /* kw_IMPLICIT  */
  YYSYMBOL_kw_IMPLIED = 39,                /* kw_IMPLIED  */
  YYSYMBOL_kw_IMPORTS = 40,                /* kw_IMPORTS  */
  YYSYMBOL_kw_INCLUDES = 41,               /* kw_INCLUDES  */
  YYSYMBOL_kw_INSTANCE = 42,               /* kw_INSTANCE  */
  YYSYMBOL_kw_INTEGER = 43,                /* kw_INTEGER  */
  YYSYMBOL_kw_INTERSECTION = 44,           /* kw_INTERSECTION  */
  YYSYMBOL_kw_ISO646String = 45,           /* kw_ISO646String  */
  YYSYMBOL_kw_MAX = 46,                    /* kw_MAX  */
  YYSYMBOL_kw_MIN = 47,                    /* kw_MIN  */
  YYSYMBOL_kw_MINUS_INFINITY = 48,         /* kw_MINUS_INFINITY  */
  YYSYMBOL_kw_NULL = 49,                   /* kw_NULL  */
  YYSYMBOL_kw_NumericString = 50,          /* kw_NumericString  */
  YYSYMBOL_kw_OBJECT = 51,                 /* kw_OBJECT  */
  YYSYMBOL_kw_OCTET = 52,                  /* kw_OCTET  */
  YYSYMBOL_kw_OF = 53,                     /* kw_OF  */
  YYSYMBOL_kw_OPTIONAL = 54,               /* kw_OPTIONAL  */
  YYSYMBOL_kw_ObjectDescriptor = 55,       /* kw_ObjectDescriptor  */
  YYSYMBOL_kw_PATTERN = 56,                /* kw_PATTERN  */
  YYSYMBOL_kw_PDV = 57,                    /* kw_PDV  */
  YYSYMBOL_kw_PLUS_INFINITY = 58,          /* kw_PLUS_INFINITY  */
  YYSYMBOL_kw_PRESENT = 59,                /* kw_PRESENT  */
  YYSYMBOL_kw_PRIVATE = 60,                /* kw_PRIVATE  */
  YYSYMBOL_kw_PrintableString = 61,        /* kw_PrintableString  */
  YYSYMBOL_kw_REAL = 62,                   /* kw_REAL  */
  YYSYMBOL_kw_RELATIVE_OID = 63,           /* kw_RELATIVE_OID  */
  YYSYMBOL_kw_SEQUENCE = 64,               /* kw_SEQUENCE  */
  YYSYMBOL_kw_SET = 65,                    /* kw_SET  */
  YYSYMBOL_kw_SIZE = 66,                   /* kw_SIZE  */
  YYSYMBOL_kw_STRING = 67,                 /* kw_STRING  */
  YYSYMBOL_kw_SYNTAX = 68,                 /* kw_SYNTAX  */
  YYSYMBOL_kw_T61String = 69,              /* kw_T61String  */
  YYSYMBOL_kw_TAGS = 70,                   /* kw_TAGS  */
  YYSYMBOL_kw_TRUE = 71,                   /* kw_TRUE  */
  YYSYMBOL_kw_TYPE_IDENTIFIER = 72,        /* kw_TYPE_IDENTIFIER  */
  YYSYMBOL_kw_TeletexString = 73,          /* kw_TeletexString  */
  YYSYMBOL_kw_UNION = 74,                  /* kw_UNION  */
  YYSYMBOL_kw_UNIQUE = 75,                 /* kw_UNIQUE  */
  YYSYMBOL_kw_UNIVERSAL = 76,              /* kw_UNIVERSAL  */
  YYSYMBOL_kw_UTCTime = 77,                /* kw_UTCTime  */
  YYSYMBOL_kw_UTF8String = 78,             /* kw_UTF8String  */
  YYSYMBOL_kw_UniversalString = 79,        /* kw_UniversalString  */
  YYSYMBOL_kw_VideotexString = 80,         /* kw_VideotexString  */
  YYSYMBOL_kw_VisibleString = 81,          /* kw_VisibleString  */
  YYSYMBOL_kw_WITH = 82,                   /* kw_WITH  */
  YYSYMBOL_RANGE = 83,                     /* RANGE  */
  YYSYMBOL_EEQUAL = 84,                    /* EEQUAL  */
  YYSYMBOL_ELLIPSIS = 85,                  /* ELLIPSIS  */
  YYSYMBOL_TYPE_IDENTIFIER = 86,           /* TYPE_IDENTIFIER  */
  YYSYMBOL_referencename = 87,             /* referencename  */
  YYSYMBOL_CLASS_IDENTIFIER = 88,          /* CLASS_IDENTIFIER  */
  YYSYMBOL_VALUE_IDENTIFIER = 89,          /* VALUE_IDENTIFIER  */
  YYSYMBOL_STRING = 90,                    /* STRING  */
  YYSYMBOL_NUMBER = 91,                    /* NUMBER  */
  YYSYMBOL_92_ = 92,                       /* ';'  */
  YYSYMBOL_93_ = 93,                       /* ','  */
  YYSYMBOL_94_ = 94,                       /* '{'  */
  YYSYMBOL_95_ = 95,                       /* '}'  */
  YYSYMBOL_96_ = 96,                       /* '|'  */
  YYSYMBOL_97_ = 97,                       /* '&'  */
  YYSYMBOL_98_ = 98,                       /* ':'  */
  YYSYMBOL_99_ = 99,                       /* '.'  */
  YYSYMBOL_100_ = 100,                     /* '('  */
  YYSYMBOL_101_ = 101,                     /* ')'  */
  YYSYMBOL_102_ = 102,                     /* '@'  */
  YYSYMBOL_103_ = 103,                     /* '['  */
  YYSYMBOL_104_ = 104,                     /* ']'  */
  YYSYMBOL_YYACCEPT = 105,                 /* $accept  */
  YYSYMBOL_Identifier = 106,               /* Identifier  */
  YYSYMBOL_ModuleDefinition = 107,         /* ModuleDefinition  */
  YYSYMBOL_TagDefault = 108,               /* TagDefault  */
  YYSYMBOL_ExtensionDefault = 109,         /* ExtensionDefault  */
  YYSYMBOL_ModuleBody = 110,               /* ModuleBody  */
  YYSYMBOL_Imports = 111,                  /* Imports  */
  YYSYMBOL_SymbolsImported = 112,          /* SymbolsImported  */
  YYSYMBOL_SymbolsFromModuleList = 113,    /* SymbolsFromModuleList  */
  YYSYMBOL_SymbolsFromModule = 114,        /* SymbolsFromModule  */
  YYSYMBOL_Exports = 115,                  /* Exports  */
  YYSYMBOL_AssignmentList = 116,           /* AssignmentList  */
  YYSYMBOL_Assignment = 117,               /* Assignment  */
  YYSYMBOL_referencenames = 118,           /* referencenames  */
  YYSYMBOL_DefinedObjectClass = 119,       /* DefinedObjectClass  */
  YYSYMBOL_ObjectClassAssignment = 120,    /* ObjectClassAssignment  */
  YYSYMBOL_ObjectClassDefn = 121,          /* ObjectClassDefn  */
  YYSYMBOL_ObjectAssignment = 122,         /* ObjectAssignment  */
  YYSYMBOL_ObjectSetAssignment = 123,      /* ObjectSetAssignment  */
  YYSYMBOL_ObjectSet = 124,                /* ObjectSet  */
  YYSYMBOL_ObjectSetSpec = 125,            /* ObjectSetSpec  */
  YYSYMBOL_Object = 126,                   /* Object  */
  YYSYMBOL_DefinedObject = 127,            /* DefinedObject  */
  YYSYMBOL_DefinedObjectSet = 128,         /* DefinedObjectSet  */
  YYSYMBOL_ObjectDefn = 129,               /* ObjectDefn  */
  YYSYMBOL_FieldSettings = 130,            /* FieldSettings  */
  YYSYMBOL_FieldSetting = 131,             /* FieldSetting  */
  YYSYMBOL_FieldSpecList = 132,            /* FieldSpecList  */
  YYSYMBOL_FieldSpec = 133,                /* FieldSpec  */
  YYSYMBOL_TypeFieldSpec = 134,            /* TypeFieldSpec  */
  YYSYMBOL_FixedTypeValueFieldSpec = 135,  /* FixedTypeValueFieldSpec  */
  YYSYMBOL_TypeAssignment = 136,           /* TypeAssignment  */
  YYSYMBOL_ParameterizedTypeAssignment = 137, /* ParameterizedTypeAssignment  */
  YYSYMBOL_Parameter = 138,                /* Parameter  */
  YYSYMBOL_DummyReference = 139,           /* DummyReference  */
  YYSYMBOL_ParamGovernor = 140,            /* ParamGovernor  */
  YYSYMBOL_UnconstrainedType = 141,        /* UnconstrainedType  */
  YYSYMBOL_Type = 142,                     /* Type  */
  YYSYMBOL_BuiltinType = 143,              /* BuiltinType  */
  YYSYMBOL_ObjectClassFieldType = 144,     /* ObjectClassFieldType  */
  YYSYMBOL_BooleanType = 145,              /* BooleanType  */
  YYSYMBOL_range = 146,                    /* range  */
  YYSYMBOL_IntegerType = 147,              /* IntegerType  */
  YYSYMBOL_NamedNumberList = 148,          /* NamedNumberList  */
  YYSYMBOL_NamedNumber = 149,              /* NamedNumber  */
  YYSYMBOL_EnumeratedType = 150,           /* EnumeratedType  */
  YYSYMBOL_Enumerations = 151,             /* Enumerations  */
  YYSYMBOL_BitStringType = 152,            /* BitStringType  */
  YYSYMBOL_ObjectIdentifierType = 153,     /* ObjectIdentifierType  */
  YYSYMBOL_OctetStringType = 154,          /* OctetStringType  */
  YYSYMBOL_NullType = 155,                 /* NullType  */
  YYSYMBOL_size = 156,                     /* size  */
  YYSYMBOL_SequenceType = 157,             /* SequenceType  */
  YYSYMBOL_SequenceOfType = 158,           /* SequenceOfType  */
  YYSYMBOL_SetType = 159,                  /* SetType  */
  YYSYMBOL_SetOfType = 160,                /* SetOfType  */
  YYSYMBOL_ChoiceType = 161,               /* ChoiceType  */
  YYSYMBOL_ReferencedType = 162,           /* ReferencedType  */
  YYSYMBOL_DefinedType = 163,              /* DefinedType  */
  YYSYMBOL_ParameterizedType = 164,        /* ParameterizedType  */
  YYSYMBOL_ActualParameter = 165,          /* ActualParameter  */
  YYSYMBOL_UsefulType = 166,               /* UsefulType  */
  YYSYMBOL_ConstrainedType = 167,          /* ConstrainedType  */
  YYSYMBOL_Constraint = 168,               /* Constraint  */
  YYSYMBOL_ConstraintSpec = 169,           /* ConstraintSpec  */
  YYSYMBOL_SubtypeConstraint = 170,        /* SubtypeConstraint  */
  YYSYMBOL_GeneralConstraint = 171,        /* GeneralConstraint  */
  YYSYMBOL_ContentsConstraint = 172,       /* ContentsConstraint  */
  YYSYMBOL_UserDefinedConstraint = 173,    /* UserDefinedConstraint  */
  YYSYMBOL_TableConstraint = 174,          /* TableConstraint  */
  YYSYMBOL_SimpleTableConstraint = 175,    /* SimpleTableConstraint  */
  YYSYMBOL_ComponentRelationConstraint = 176, /* ComponentRelationConstraint  */
  YYSYMBOL_TaggedType = 177,               /* TaggedType  */
  YYSYMBOL_Tag = 178,                      /* Tag  */
  YYSYMBOL_Class = 179,                    /* Class  */
  YYSYMBOL_tagenv = 180,                   /* tagenv  */
  YYSYMBOL_ValueAssignment = 181,          /* ValueAssignment  */
  YYSYMBOL_CharacterStringType = 182,      /* CharacterStringType  */
  YYSYMBOL_RestrictedCharactedStringType = 183, /* RestrictedCharactedStringType  */
  YYSYMBOL_ComponentTypeList = 184,        /* ComponentTypeList  */
  YYSYMBOL_NamedType = 185,                /* NamedType  */
  YYSYMBOL_ComponentType = 186,            /* ComponentType  */
  YYSYMBOL_NamedBitList = 187,             /* NamedBitList  */
  YYSYMBOL_NamedBit = 188,                 /* NamedBit  */
  YYSYMBOL_objid_opt = 189,                /* objid_opt  */
  YYSYMBOL_objid = 190,                    /* objid  */
  YYSYMBOL_objid_list = 191,               /* objid_list  */
  YYSYMBOL_objid_element = 192,            /* objid_element  */
  YYSYMBOL_Value = 193,                    /* Value  */
  YYSYMBOL_ValueExNull = 194,              /* ValueExNull  */
  YYSYMBOL_BuiltinValue = 195,             /* BuiltinValue  */
  YYSYMBOL_BuiltinValueExNull = 196,       /* BuiltinValueExNull  */
  YYSYMBOL_ReferencedValue = 197,          /* ReferencedValue  */
  YYSYMBOL_DefinedValue = 198,             /* DefinedValue  */
  YYSYMBOL_Valuereference = 199,           /* Valuereference  */
  YYSYMBOL_CharacterStringValue = 200,     /* CharacterStringValue  */
  YYSYMBOL_BooleanValue = 201,             /* BooleanValue  */
  YYSYMBOL_IntegerValue = 202,             /* IntegerValue  */
  YYSYMBOL_SignedNumber = 203,             /* SignedNumber  */
  YYSYMBOL_NullValue = 204,                /* NullValue  */
  YYSYMBOL_ObjectIdentifierValue = 205     /* ObjectIdentifierValue  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  320

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    97,     2,
     100,   101,     2,     2,    93,     2,    99,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    98,    92,
       2,     2,     2,     2,   102,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   103,     2,   104,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    94,    96,    95,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   355,   355,   356,   358,   379,   381,   383,   385,   388,
     390,   393,   394,   397,   398,   401,   402,   405,   406,   409,
     435,   441,   442,   445,   446,   449,   450,   451,   452,   453,
     454,   458,   464,   473,   482,   490,   499,   506,   519,   532,
     540,   542,   546,   547,   552,   561,   571,   580,   584,   591,
     593,   601,   603,   623,   624,   631,   633,   635,   640,   642,
     644,   646,   648,   650,   861,   887,   912,   917,   919,   925,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   935,
     936,   938,   938,   938,   940,   941,   942,   943,   944,   945,
     946,   947,   948,   949,   950,   951,   952,   953,   954,   959,
     962,   979,   989,   997,  1005,  1016,  1021,  1029,  1035,  1040,
    1044,  1055,  1071,  1079,  1082,  1089,  1097,  1103,  1117,  1125,
    1126,  1131,  1137,  1145,  1160,  1166,  1174,  1182,  1189,  1190,
    1200,  1209,  1218,  1260,  1263,  1268,  1275,  1300,  1306,  1306,
    1309,  1315,  1316,  1317,  1320,  1326,  1334,  1344,  1350,  1352,
    1356,  1401,  1409,  1451,  1460,  1463,  1467,  1471,  1478,  1481,
    1485,  1492,  1512,  1515,  1520,  1525,  1530,  1535,  1540,  1545,
    1550,  1558,  1564,  1569,  1580,  1591,  1597,  1603,  1611,  1617,
    1624,  1637,  1638,  1641,  1648,  1651,  1662,  1666,  1677,  1683,
    1684,  1687,  1688,  1691,  1692,  1693,  1694,  1695,  1699,  1700,
    1701,  1702,  1705,  1708,  1711,  1722,  1730,  1736,  1744,  1752,
    1755,  1760
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "kw_ABSENT",
  "kw_ABSTRACT_SYNTAX", "kw_ALL", "kw_APPLICATION", "kw_AUTOMATIC",
  "kw_BEGIN", "kw_BIT", "kw_BMPString", "kw_BOOLEAN", "kw_BY",
  "kw_CHARACTER", "kw_CHOICE", "kw_CLASS", "kw_COMPONENT", "kw_COMPONENTS",
  "kw_CONSTRAINED", "kw_CONTAINING", "kw_DEFAULT", "kw_DEFINITIONS",
  "kw_EMBEDDED", "kw_ENCODED", "kw_END", "kw_ENUMERATED", "kw_EXCEPT",
  "kw_EXPLICIT", "kw_EXPORTS", "kw_EXTENSIBILITY", "kw_EXTERNAL",
  "kw_FALSE", "kw_FROM", "kw_GeneralString", "kw_GeneralizedTime",
  "kw_GraphicString", "kw_IA5String", "kw_IDENTIFIER", "kw_IMPLICIT",
  "kw_IMPLIED", "kw_IMPORTS", "kw_INCLUDES", "kw_INSTANCE", "kw_INTEGER",
  "kw_INTERSECTION", "kw_ISO646String", "kw_MAX", "kw_MIN",
  "kw_MINUS_INFINITY", "kw_NULL", "kw_NumericString", "kw_OBJECT",
  "kw_OCTET", "kw_OF", "kw_OPTIONAL", "kw_ObjectDescriptor", "kw_PATTERN",
  "kw_PDV", "kw_PLUS_INFINITY", "kw_PRESENT", "kw_PRIVATE",
  "kw_PrintableString", "kw_REAL", "kw_RELATIVE_OID", "kw_SEQUENCE",
  "kw_SET", "kw_SIZE", "kw_STRING", "kw_SYNTAX", "kw_T61String", "kw_TAGS",
  "kw_TRUE", "kw_TYPE_IDENTIFIER", "kw_TeletexString", "kw_UNION",
  "kw_UNIQUE", "kw_UNIVERSAL", "kw_UTCTime", "kw_UTF8String",
  "kw_UniversalString", "kw_VideotexString", "kw_VisibleString", "kw_WITH",
  "RANGE", "EEQUAL", "ELLIPSIS", "TYPE_IDENTIFIER", "referencename",
  "CLASS_IDENTIFIER", "VALUE_IDENTIFIER", "STRING", "NUMBER", "';'", "','",
  "'{'", "'}'", "'|'", "'&'", "':'", "'.'", "'('", "')'", "'@'", "'['",
  "']'", "$accept", "Identifier", "ModuleDefinition", "TagDefault",
  "ExtensionDefault", "ModuleBody", "Imports", "SymbolsImported",
  "SymbolsFromModuleList", "SymbolsFromModule", "Exports",
  "AssignmentList", "Assignment", "referencenames", "DefinedObjectClass",
  "ObjectClassAssignment", "ObjectClassDefn", "ObjectAssignment",
  "ObjectSetAssignment", "ObjectSet", "ObjectSetSpec", "Object",
  "DefinedObject", "DefinedObjectSet", "ObjectDefn", "FieldSettings",
  "FieldSetting", "FieldSpecList", "FieldSpec", "TypeFieldSpec",
  "FixedTypeValueFieldSpec", "TypeAssignment",
  "ParameterizedTypeAssignment", "Parameter", "DummyReference",
  "ParamGovernor", "UnconstrainedType", "Type", "BuiltinType",
  "ObjectClassFieldType", "BooleanType", "range", "IntegerType",
  "NamedNumberList", "NamedNumber", "EnumeratedType", "Enumerations",
  "BitStringType", "ObjectIdentifierType", "OctetStringType", "NullType",
  "size", "SequenceType", "SequenceOfType", "SetType", "SetOfType",
  "ChoiceType", "ReferencedType", "DefinedType", "ParameterizedType",
  "ActualParameter", "UsefulType", "ConstrainedType", "Constraint",
  "ConstraintSpec", "SubtypeConstraint", "GeneralConstraint",
  "ContentsConstraint", "UserDefinedConstraint", "TableConstraint",
  "SimpleTableConstraint", "ComponentRelationConstraint", "TaggedType",
  "Tag", "Class", "tagenv", "ValueAssignment", "CharacterStringType",
  "RestrictedCharactedStringType", "ComponentTypeList", "NamedType",
  "ComponentType", "NamedBitList", "NamedBit", "objid_opt", "objid",
  "objid_list", "objid_element", "Value", "ValueExNull", "BuiltinValue",
  "BuiltinValueExNull", "ReferencedValue", "DefinedValue",
  "Valuereference", "CharacterStringValue", "BooleanValue", "IntegerValue",
  "SignedNumber", "NullValue", "ObjectIdentifierValue", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-227)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,  -227,  -227,   -65,    55,   -18,    42,  -227,  -227,  -227,
     -23,   -17,   -18,    15,     4,  -227,  -227,    26,    35,    51,
      98,    29,  -227,  -227,  -227,   102,    58,  -227,  -227,   136,
      62,     2,   121,   106,  -227,    54,    57,  -227,    25,    20,
      25,  -227,    59,    25,  -227,   118,    64,    69,   312,   -59,
    -227,    20,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,    25,  -227,    70,    -5,    89,  -227,  -227,    63,    65,
    -227,  -227,  -227,    66,  -227,   124,    91,  -227,   -45,   -36,
    -227,  -227,  -227,  -227,  -227,    71,     9,    72,   -58,    67,
      79,  -227,    68,    73,    75,    76,    77,    78,    80,    81,
      83,  -227,    84,  -227,    85,  -227,  -227,  -227,  -227,  -227,
    -227,    27,    90,  -227,   312,    64,  -227,   -65,    95,    99,
    -227,  -227,   100,    25,    25,    25,  -227,   103,    92,   -39,
     111,   312,   -19,  -227,  -227,  -227,    88,    86,   -14,    74,
     -10,  -227,     3,  -227,  -227,   312,    96,  -227,  -227,   101,
     105,  -227,   108,  -227,   104,    25,   312,   -47,     8,  -227,
     107,   112,  -227,   109,    24,  -227,   -31,  -227,    33,   312,
    -227,  -227,    38,    94,  -227,  -227,   114,  -227,   115,  -227,
    -227,  -227,    25,   158,   312,   187,   117,  -227,   120,  -227,
     113,  -227,  -227,  -227,  -227,  -227,  -227,  -227,   132,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,   133,   130,     5,
    -227,    25,    41,  -227,  -227,  -227,   119,    44,  -227,  -227,
      13,  -227,     3,  -227,    31,    18,  -227,  -227,   122,  -227,
    -227,  -227,  -227,  -227,    25,    45,  -227,  -227,   128,   195,
       3,   134,   129,  -227,   -32,   312,  -227,  -227,  -227,   108,
     263,   104,  -227,   140,    25,  -227,  -227,  -227,  -227,   126,
     131,  -227,  -227,  -227,   177,   115,  -227,   138,   222,  -227,
    -227,   142,  -227,  -227,  -227,  -227,   312,  -227,    -9,  -227,
     139,  -227,  -227,  -227,   143,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,     3,   137,  -227,     3,  -227,
      10,  -227,  -227,    25,  -227,     3,  -227,   148,  -227,  -227
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     3,   182,     0,   184,     0,   181,     1,   188,
     187,     0,   184,     8,     0,   183,   185,     0,     0,     0,
      10,     0,     7,     5,     6,     0,     0,   186,     9,     0,
      22,     0,     0,    14,    21,    32,     0,     4,    16,     0,
       0,    20,     0,    15,    17,     0,     2,     0,     3,     0,
      11,    23,    28,    29,    30,    25,    27,    26,    31,    13,
      18,     0,    33,     0,     0,     0,   169,   100,     0,     0,
     163,   134,   168,   105,   118,     0,     0,   166,   119,     0,
     164,   135,   165,   170,   167,   130,   154,     0,     0,     0,
       0,    81,    98,    85,    89,    88,    84,    91,    92,    90,
      93,    94,    95,    96,    87,    82,   128,   131,   129,    83,
      97,   158,    86,   162,     0,     0,    24,   182,     0,     0,
      35,    34,   114,     0,     0,     0,   116,   119,     0,     0,
       0,     0,     0,   156,   157,   155,     0,     0,     0,     0,
       0,   136,     0,   159,   160,     0,     0,    64,    68,     0,
       0,    19,     0,    38,     0,     0,     0,     0,   175,   171,
       0,   113,   107,     0,     0,   117,     0,   122,     0,     0,
     126,   125,     0,     0,    45,   133,     0,    44,     0,    37,
      42,    43,     0,     0,     0,     0,     0,   209,     0,   140,
       0,   138,   139,   141,   142,   143,   148,   149,   104,   208,
     207,   210,   206,   204,   205,   211,   161,   189,   190,   202,
     203,   194,   193,   195,   197,   196,   152,     0,     0,     0,
      40,     0,     0,    51,    53,    54,     0,     0,   178,   174,
       0,   127,     0,   176,     0,     0,   112,   106,     0,   121,
     123,   124,   153,   132,     0,     0,    47,    99,     0,   144,
       0,     0,     0,   137,     0,     0,    67,    66,    39,     0,
      55,     0,    36,     0,     0,   115,   173,   172,   177,     0,
       0,   109,   108,   120,     0,     0,    46,     0,     0,   145,
     103,   150,   102,   101,    65,    41,     0,    56,    58,    52,
       0,   179,   111,   110,   204,    49,    50,   191,   192,   199,
     198,   200,   201,    48,   147,     0,     0,    57,     0,    62,
      59,   180,   146,     0,    63,     0,    60,     0,    61,   151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -227,     0,  -227,  -227,  -227,  -227,  -227,  -227,  -227,   202,
    -227,   196,  -227,    -8,   -28,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -149,  -227,  -227,  -227,   -29,  -227,   -12,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -112,  -227,  -227,
    -227,    87,  -227,   127,    16,  -227,  -227,  -227,  -227,  -227,
    -227,   135,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,   -16,
    -227,    30,  -227,    -7,   144,     1,   247,  -227,  -226,  -227,
    -227,  -227,    -4,    47,  -227,    11,    12,  -139,    48,  -227,
      17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    87,     4,    20,    26,    32,    39,    42,    43,    44,
      33,    50,    51,    45,   146,    52,   121,    53,    54,   153,
     219,   179,   180,   175,   181,   245,   246,   222,   223,   224,
     225,    55,    56,   149,   257,   150,    89,    90,    91,    92,
      93,   189,    94,   161,   162,    95,   163,    96,    97,    98,
      99,   130,   100,   101,   102,   103,   104,   105,   106,   107,
     176,   108,   109,   141,   190,   191,   192,   193,   194,   195,
     196,   197,   110,   111,   136,   145,    57,   112,   113,   157,
     158,   159,   227,   228,     6,   205,    11,    12,   206,   296,
     207,   297,   208,   209,   210,   211,   212,   213,   199,   214,
     215
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       3,   198,   147,   220,     7,    10,   268,    34,   183,   184,
     119,   308,    10,   185,   282,   133,   186,   131,    63,   170,
      88,   128,    17,    36,   279,   114,   138,   198,   232,     5,
     315,    35,    58,   216,   200,   115,   120,   186,    35,    49,
      35,   139,    18,    35,   229,   309,   230,     1,   231,   129,
       2,    49,   201,    19,   143,     8,   167,   240,   132,   187,
     187,   117,   233,    13,   316,   144,   310,     1,     1,   134,
       2,     2,   249,     9,   202,   177,   171,    14,    15,   312,
     178,   187,   314,    62,   188,   135,   -12,   148,     1,   318,
      31,     2,   203,   204,   187,    21,    22,     5,   266,     1,
     258,   259,     2,   271,     1,    23,    46,     2,    47,    48,
     285,     1,   280,   168,     2,   283,   172,   235,     7,   237,
     203,    24,   187,   156,   160,   160,   230,    25,   239,   156,
      27,   230,   156,   241,   261,   301,   262,   264,   275,   265,
     276,    28,    29,   284,    30,    37,    38,    40,   288,    41,
      61,    59,    62,    64,   118,   226,   122,   123,   127,   124,
     125,   126,   295,   142,   169,    -2,   137,   140,   -80,   128,
     248,   182,   174,   -70,   307,   -74,   -73,   -69,   -76,   173,
     -77,   -75,   247,   -78,   -79,   -72,    65,    66,    67,   152,
     -71,    68,   166,   154,   155,   139,   217,   177,   242,   250,
     251,   221,    69,   218,   236,   235,   252,   234,   200,   243,
      70,    71,   244,    72,   253,   254,   256,   255,   278,   263,
      73,   260,   277,   273,   281,   187,    74,   292,    75,    76,
     156,   290,   293,   304,   305,   160,   306,    -3,    77,   313,
     311,    78,    79,   319,   274,    60,   303,   116,   202,   289,
      80,   272,   164,   238,    81,    82,    83,   291,    84,    16,
     267,   151,   165,    85,   226,    62,   294,   204,   187,     0,
     298,     5,    65,    66,    67,     0,     0,    68,     0,     0,
      86,   269,   270,   286,     0,   299,   300,     0,    69,     0,
       0,   302,     0,     0,     0,     0,    70,    71,     0,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,     0,    74,   317,    75,    76,     0,   287,     0,     0,
       0,    65,    66,    67,    77,     0,    68,    78,    79,     0,
       0,     0,     0,     0,     0,     0,    80,    69,     0,     0,
      81,    82,    83,     0,    84,    70,    71,     0,    72,    85,
       0,    62,     2,     0,     0,    73,     0,     0,     0,     0,
       0,    74,     0,    75,    76,     0,    86,     0,     0,     0,
       0,     0,     0,    77,     0,     0,    78,    79,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,     0,    81,
      82,    83,     0,    84,     0,     0,     0,     0,    85,     0,
      62,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86
};

static const yytype_int16 yycheck[] =
{
       0,   140,   114,   152,     3,     5,   232,     5,    18,    19,
      15,    20,    12,    23,    46,     6,    47,    53,    46,   131,
      48,    66,     7,    31,   250,    84,    84,   166,    20,    94,
      20,    31,    40,   145,    31,    94,    64,    47,    38,    39,
      40,    99,    27,    43,   156,    54,    93,    86,    95,    94,
      89,    51,    49,    38,    27,     0,    95,   169,    94,    91,
      91,    61,    54,    21,    54,    38,    75,    86,    86,    60,
      89,    89,   184,    91,    71,    89,    95,   100,    95,   305,
      94,    91,   308,    88,    94,    76,    24,   115,    86,   315,
      28,    89,    89,    90,    91,    91,    70,    94,    85,    86,
      95,    96,    89,    85,    86,    70,    86,    89,    88,    89,
     259,    86,   251,   129,    89,   254,   132,    93,   117,    95,
      89,    70,    91,   123,   124,   125,    93,    29,    95,   129,
     101,    93,   132,    95,    93,   274,    95,    93,    93,    95,
      95,    39,    84,   255,     8,    24,    40,    93,   260,    92,
      32,    92,    88,    84,    84,   155,    67,    94,    67,    94,
      94,    37,   274,    84,    53,    94,    94,   100,   100,    66,
      12,    97,    86,   100,   286,   100,   100,   100,   100,    91,
     100,   100,   182,   100,   100,   100,     9,    10,    11,    94,
     100,    14,   100,    94,    94,    99,    95,    89,   104,    12,
      83,    97,    25,    98,    95,    93,    86,   100,    31,    95,
      33,    34,    97,    36,   101,    83,    86,    84,    23,   100,
      43,   221,    94,   101,    95,    91,    49,   101,    51,    52,
     230,    91,   101,    95,    12,   235,    94,    94,    61,   102,
     101,    64,    65,    95,   244,    43,   275,    51,    71,   261,
      73,   235,   125,   166,    77,    78,    79,   264,    81,    12,
     230,   117,   127,    86,   264,    88,    89,    90,    91,    -1,
     274,    94,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
     103,   234,   234,    20,    -1,   274,   274,    -1,    25,    -1,
      -1,   274,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    49,   313,    51,    52,    -1,    54,    -1,    -1,
      -1,     9,    10,    11,    61,    -1,    14,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    25,    -1,    -1,
      77,    78,    79,    -1,    81,    33,    34,    -1,    36,    86,
      -1,    88,    89,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    -1,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    86,    89,   106,   107,    94,   189,   190,     0,    91,
     106,   191,   192,    21,   100,    95,   191,     7,    27,    38,
     108,    91,    70,    70,    70,    29,   109,   101,    39,    84,
       8,    28,   110,   115,     5,   106,   118,    24,    40,   111,
      93,    92,   112,   113,   114,   118,    86,    88,    89,   106,
     116,   117,   120,   122,   123,   136,   137,   181,   118,    92,
     114,    32,    88,   119,    84,     9,    10,    11,    14,    25,
      33,    34,    36,    43,    49,    51,    52,    61,    64,    65,
      73,    77,    78,    79,    81,    86,   103,   106,   119,   141,
     142,   143,   144,   145,   147,   150,   152,   153,   154,   155,
     157,   158,   159,   160,   161,   162,   163,   164,   166,   167,
     177,   178,   182,   183,    84,    94,   116,   106,    84,    15,
     119,   121,    67,    94,    94,    94,    37,    67,    66,    94,
     156,    53,    94,     6,    60,    76,   179,    94,    84,    99,
     100,   168,    84,    27,    38,   180,   119,   142,   119,   138,
     140,   189,    94,   124,    94,    94,   106,   184,   185,   186,
     106,   148,   149,   151,   148,   156,   100,    95,   184,    53,
     142,    95,   184,    91,    86,   128,   165,    89,    94,   126,
     127,   129,    97,    18,    19,    23,    47,    91,    94,   146,
     169,   170,   171,   172,   173,   174,   175,   176,   202,   203,
      31,    49,    71,    89,    90,   190,   193,   195,   197,   198,
     199,   200,   201,   202,   204,   205,   142,    95,    98,   125,
     127,    97,   132,   133,   134,   135,   106,   187,   188,   142,
      93,    95,    20,    54,   100,    93,    95,    95,   146,    95,
     142,    95,   104,    95,    97,   130,   131,   106,    12,   142,
      12,    83,    86,   101,    83,    84,    86,   139,    95,    96,
     106,    93,    95,   100,    93,    95,    85,   186,   193,   198,
     203,    85,   149,   101,   106,    93,    95,    94,    23,   193,
     202,    95,    46,   202,   142,   127,    20,    54,   142,   133,
      91,   188,   101,   101,    89,   142,   194,   196,   197,   200,
     201,   202,   205,   131,    95,    12,    94,   142,    20,    54,
      75,   101,   193,   102,   193,    20,    54,   106,   193,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   107,   108,   108,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     115,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   118,   118,   119,   120,   120,   121,   122,   123,   124,
     125,   125,   126,   126,   127,   128,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   135,   135,
     135,   135,   135,   135,   136,   137,   138,   139,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   142,   142,   142,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   144,
     145,   146,   146,   146,   146,   147,   147,   148,   148,   148,
     149,   149,   150,   151,   152,   152,   153,   154,   155,   156,
     156,   157,   157,   158,   159,   159,   160,   161,   162,   162,
     163,   163,   164,   165,   166,   166,   167,   168,   169,   169,
     170,   171,   171,   171,   172,   172,   172,   173,   174,   174,
     175,   176,   177,   178,   179,   179,   179,   179,   180,   180,
     180,   181,   182,   183,   183,   183,   183,   183,   183,   183,
     183,   184,   184,   184,   185,   186,   186,   186,   187,   187,
     188,   189,   189,   190,   191,   191,   192,   192,   192,   193,
     193,   194,   194,   195,   195,   195,   195,   195,   196,   196,
     196,   196,   197,   198,   199,   200,   201,   201,   202,   203,
     204,   205
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     9,     2,     2,     2,     0,     2,
       0,     3,     0,     3,     0,     1,     0,     1,     2,     4,
       3,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     3,     3,     4,     4,     4,     3,
       1,     3,     1,     1,     1,     1,     3,     1,     3,     3,
       3,     1,     3,     1,     1,     2,     3,     4,     3,     4,
       5,     6,     4,     5,     3,     6,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     1,     4,     1,     3,     3,
       4,     4,     4,     1,     2,     5,     2,     3,     1,     0,
       4,     4,     3,     4,     4,     3,     3,     4,     1,     1,
       1,     1,     4,     1,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     2,     3,     5,     4,     1,     1,
       3,     7,     3,     4,     0,     1,     1,     1,     0,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     1,     2,     3,     1,     3,
       4,     1,     0,     3,     0,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  switch (yyn)
    {
  case 2: /* Identifier: TYPE_IDENTIFIER  */
                                  { (yyval.name) = (yyvsp[0].name); }
    break;

  case 3: /* Identifier: VALUE_IDENTIFIER  */
                                   { (yyval.name) = (yyvsp[0].name); }
    break;

  case 4: /* ModuleDefinition: Identifier objid_opt kw_DEFINITIONS TagDefault ExtensionDefault EEQUAL kw_BEGIN ModuleBody kw_END  */
                {
                    struct objid **o = objid2list((yyvsp[-7].objid));
                    size_t i;

                    fprintf(jsonfile,
                            "{\"module\":\"%s\",\"tagging\":\"%s\",\"objid\":[", (yyvsp[-8].name),
                            default_tag_env == TE_EXPLICIT ? "explicit" : "implicit");

                    for (i = 0; o && o[i]; i++) {
                        fprintf(jsonfile, "%s{\"value\":%d", i ? "," : "", o[i]->value);
                        if (o[i]->label)
                            fprintf(jsonfile, ",\"label\":\"%s\"", o[i]->label);
                        fprintf(jsonfile, "}");
                    }
                    fprintf(jsonfile, "]}\n");
                    free(o);
		}
    break;

  case 5: /* TagDefault: kw_EXPLICIT kw_TAGS  */
                        { default_tag_env = TE_EXPLICIT; }
    break;

  case 6: /* TagDefault: kw_IMPLICIT kw_TAGS  */
                        { default_tag_env = TE_IMPLICIT; }
    break;

  case 7: /* TagDefault: kw_AUTOMATIC kw_TAGS  */
                      { lex_error_message("automatic tagging is not supported"); }
    break;

  case 9: /* ExtensionDefault: kw_EXTENSIBILITY kw_IMPLIED  */
                      { lex_error_message("no extensibility options supported"); }
    break;

  case 19: /* SymbolsFromModule: referencenames kw_FROM Identifier objid_opt  */
                {
		    /*
                     * FIXME We really could use knowing what kind of thing the
                     * identifier identifies -- a type, a value, what?
		     *
		     * Our sin of allowing type names to start with lower-case
		     * and values with upper-case means we can't tell.  So we
		     * assume it's types only, but that means we can't import
		     * OID values, but we really want to!
                     *
                     * One thing we could do is not force `s->stype = Stype'
                     * here, instead set it to a new `Sunknown' value so that
                     * the first place that refers to this symbol with enough
                     * context to imply a symbol type can set it.
		     */
		    struct string_list *sl;
		    for(sl = (yyvsp[-3].sl); sl != NULL; sl = sl->next) {
			Symbol *s = addsym(sl->string);
			s->stype = Stype;
			gen_template_import(s);
		    }
		    add_import((yyvsp[-1].name));
		}
    break;

  case 20: /* Exports: kw_EXPORTS referencenames ';'  */
                {
		    struct string_list *sl;
		    for(sl = (yyvsp[-1].sl); sl != NULL; sl = sl->next)
			add_export(sl->string);
		}
    break;

  case 31: /* referencenames: Identifier ',' referencenames  */
                {
		    (yyval.sl) = emalloc(sizeof(*(yyval.sl)));
		    (yyval.sl)->string = (yyvsp[-2].name);
		    (yyval.sl)->next = (yyvsp[0].sl);
		}
    break;

  case 32: /* referencenames: Identifier  */
                {
		    (yyval.sl) = emalloc(sizeof(*(yyval.sl)));
		    (yyval.sl)->string = (yyvsp[0].name);
		    (yyval.sl)->next = NULL;
		}
    break;

  case 33: /* DefinedObjectClass: CLASS_IDENTIFIER  */
                {
		    Symbol *s = addsym((yyvsp[0].name));
		    if(s->stype != Sclass)
		      lex_error_message ("%s is not a class\n", (yyvsp[0].name));
		    (yyval.class) = s->iosclass;
		}
    break;

  case 34: /* ObjectClassAssignment: CLASS_IDENTIFIER EEQUAL ObjectClassDefn  */
                {
		    Symbol *s = addsym((yyvsp[-2].name));
		    s->stype = Sclass;
		    s->iosclass = (yyvsp[0].class);
		    s->iosclass->symbol = s;
		    fix_labels(s);
		}
    break;

  case 35: /* ObjectClassAssignment: CLASS_IDENTIFIER EEQUAL DefinedObjectClass  */
                {
		    Symbol *s = addsym((yyvsp[-2].name));
		    s->stype = Sclass;
		    s->iosclass = (yyvsp[0].class);
		}
    break;

  case 36: /* ObjectClassDefn: kw_CLASS '{' FieldSpecList '}'  */
                {
		    (yyval.class) = ecalloc(1, sizeof(*(yyval.class)));
		    (yyval.class)->fields = (yyvsp[-1].fields);
		    (yyval.class)->id = idcounter++;
		}
    break;

  case 37: /* ObjectAssignment: VALUE_IDENTIFIER DefinedObjectClass EEQUAL Object  */
                {
		    Symbol *s = addsym((yyvsp[-3].name));
		    s->stype = Sobj;
		    s->object = (yyvsp[0].object);
		    s->object->iosclass = (yyvsp[-2].class);
		    if (!s->object->symbol)
			s->object->symbol = s;
		    fix_labels(s);
		}
    break;

  case 38: /* ObjectSetAssignment: TYPE_IDENTIFIER DefinedObjectClass EEQUAL ObjectSet  */
                {
		    Symbol *s = addsym((yyvsp[-3].name));
		    s->stype = Sobjset;
		    s->iosclass = (yyvsp[-2].class);
		    s->objectset = (yyvsp[0].objectset);
                    s->objectset->symbol = s->objectset->symbol ? s->objectset->symbol : s;
		    s->objectset->iosclass = (yyvsp[-2].class);
                    validate_object_set((yyvsp[0].objectset));
                    generate_template_objectset_forwards(s);
		}
    break;

  case 39: /* ObjectSet: '{' ObjectSetSpec '}'  */
                {
		    (yyval.objectset) = ecalloc(1, sizeof(*(yyval.objectset)));
		    (yyval.objectset)->objects = (yyvsp[-1].objects);
		    (yyval.objectset)->id = idcounter++;
		}
    break;

  case 40: /* ObjectSetSpec: DefinedObject  */
                { (yyval.objects) = add_object_set_spec(NULL, (yyvsp[0].object)); }
    break;

  case 41: /* ObjectSetSpec: ObjectSetSpec '|' DefinedObject  */
                { (yyval.objects) = add_object_set_spec((yyvsp[-2].objects), (yyvsp[0].object)); }
    break;

  case 44: /* DefinedObject: VALUE_IDENTIFIER  */
                {
		  Symbol *s = addsym((yyvsp[0].name));
		  if(s->stype != Sobj)
		    lex_error_message ("%s is not an object\n", (yyvsp[0].name));
		  (yyval.object) = s->object;
		}
    break;

  case 45: /* DefinedObjectSet: TYPE_IDENTIFIER  */
                {
		  Symbol *s = addsym((yyvsp[0].name));
		  if(s->stype != Sobjset && s->stype != SUndefined)
		    lex_error_message ("%s is not an object set\n", (yyvsp[0].name));
		  (yyval.objectset) = s->objectset;
		}
    break;

  case 46: /* ObjectDefn: '{' FieldSettings '}'  */
                {
		    (yyval.object) = ecalloc(1, sizeof(*(yyval.object)));
		    (yyval.object)->objfields = (yyvsp[-1].objfields);
		    (yyval.object)->id = idcounter++;
		}
    break;

  case 47: /* FieldSettings: FieldSetting  */
                {
		(yyval.objfields) = add_field_setting(NULL, (yyvsp[0].objfield));
		}
    break;

  case 48: /* FieldSettings: FieldSettings ',' FieldSetting  */
                {
		(yyval.objfields) = add_field_setting((yyvsp[-2].objfields), (yyvsp[0].objfield));
		}
    break;

  case 49: /* FieldSetting: '&' Identifier Type  */
                { (yyval.objfield) = new_field_setting((yyvsp[-1].name), (yyvsp[0].type), NULL); }
    break;

  case 50: /* FieldSetting: '&' Identifier ValueExNull  */
                { (yyval.objfield) = new_field_setting((yyvsp[-1].name), NULL, (yyvsp[0].value)); }
    break;

  case 51: /* FieldSpecList: FieldSpec  */
                { (yyval.fields) = add_field_spec(NULL, (yyvsp[0].field)); }
    break;

  case 52: /* FieldSpecList: FieldSpecList ',' FieldSpec  */
                { (yyval.fields) = add_field_spec((yyvsp[-2].fields), (yyvsp[0].field)); }
    break;

  case 55: /* TypeFieldSpec: '&' Identifier  */
                { (yyval.field) = new_type_field((yyvsp[0].name), 0, NULL); }
    break;

  case 56: /* TypeFieldSpec: '&' Identifier kw_OPTIONAL  */
                { (yyval.field) = new_type_field((yyvsp[-1].name), 1, NULL); }
    break;

  case 57: /* TypeFieldSpec: '&' Identifier kw_DEFAULT Type  */
                { (yyval.field) = new_type_field((yyvsp[-2].name), 1, (yyvsp[0].type)); }
    break;

  case 58: /* FixedTypeValueFieldSpec: '&' Identifier Type  */
                { (yyval.field) = new_fixed_type_value_field((yyvsp[-1].name), (yyvsp[0].type), 0, 0, NULL); }
    break;

  case 59: /* FixedTypeValueFieldSpec: '&' Identifier Type kw_UNIQUE  */
                { (yyval.field) = new_fixed_type_value_field((yyvsp[-2].name), (yyvsp[-1].type), 1, 0, NULL); }
    break;

  case 60: /* FixedTypeValueFieldSpec: '&' Identifier Type kw_UNIQUE kw_OPTIONAL  */
                { (yyval.field) = new_fixed_type_value_field((yyvsp[-3].name), (yyvsp[-2].type), 1, 1, NULL); }
    break;

  case 61: /* FixedTypeValueFieldSpec: '&' Identifier Type kw_UNIQUE kw_DEFAULT Value  */
                { (yyval.field) = new_fixed_type_value_field((yyvsp[-4].name), (yyvsp[-3].type), 1, 0, (yyvsp[0].value)); }
    break;

  case 62: /* FixedTypeValueFieldSpec: '&' Identifier Type kw_OPTIONAL  */
                { (yyval.field) = new_fixed_type_value_field((yyvsp[-2].name), (yyvsp[-1].type), 0, 1, NULL); }
    break;

  case 63: /* FixedTypeValueFieldSpec: '&' Identifier Type kw_DEFAULT Value  */
                { (yyval.field) = new_fixed_type_value_field((yyvsp[-3].name), (yyvsp[-2].type), 0, 0, (yyvsp[0].value)); }
    break;

  case 64: /* TypeAssignment: Identifier EEQUAL Type  */
                {
		    Symbol *s = addsym((yyvsp[-2].name));
		    s->stype = Stype;
		    s->type = (yyvsp[0].type);
		    fix_labels(s);

		    /*
		     * Hack: make sure that non-anonymous enumeration types get
		     * a symbol tacked on so we can generate a template for
		     * their members for value printing.
		     */
		    if (s->type->type == TTag && (yyvsp[0].type)->symbol == NULL &&
			(yyvsp[0].type)->subtype != NULL && (yyvsp[0].type)->subtype->type == TInteger &&
			(yyvsp[0].type)->subtype->symbol == NULL) {
			(yyvsp[0].type)->subtype->symbol = s;
		    }
		    if (original_order)
			generate_type(s);
		    else
			generate_type_header_forwards(s);
		}
    break;

  case 65: /* ParameterizedTypeAssignment: Identifier '{' Parameter '}' EEQUAL Type  */
                {
		    char *pname = NULL;
		    Symbol *s;

		    if (asprintf(&pname, "%s{%s:x}", (yyvsp[-5].name), (yyvsp[-3].class)->symbol->name) == -1 ||
			pname == NULL)
			err(1, "Out of memory");
		    s = addsym(pname);
		    free((yyvsp[-5].name));
		    s->stype = Sparamtype;
		    s->type = parametrize_type((yyvsp[0].type), (yyvsp[-3].class));
		    s->type->symbol = s;
		    fix_labels(s);
		}
    break;

  case 66: /* Parameter: ParamGovernor ':' DummyReference  */
                { (yyval.class) = (yyvsp[-2].class); }
    break;

  case 67: /* DummyReference: TYPE_IDENTIFIER  */
                                  { (yyval.constant) = idcounter++; }
    break;

  case 68: /* ParamGovernor: DefinedObjectClass  */
                { (yyval.class) = (yyvsp[0].class); }
    break;

  case 99: /* ObjectClassFieldType: DefinedObjectClass '.' '&' Identifier  */
                { (yyval.type) = type_from_class_field((yyvsp[-3].class), (yyvsp[0].name)); }
    break;

  case 100: /* BooleanType: kw_BOOLEAN  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_Boolean,
				     TE_EXPLICIT, new_type(TBoolean));
		}
    break;

  case 101: /* range: IntegerValue RANGE IntegerValue  */
                {
		    if((yyvsp[-2].value)->type != integervalue)
			lex_error_message("Non-integer used in first part of range");
		    if((yyvsp[-2].value)->type != integervalue)
			lex_error_message("Non-integer in second part of range");
		    (yyval.range) = ecalloc(1, sizeof(*(yyval.range)));
		    (yyval.range)->min = (yyvsp[-2].value)->u.integervalue;
		    (yyval.range)->max = (yyvsp[0].value)->u.integervalue;
		}
    break;

  case 102: /* range: IntegerValue RANGE kw_MAX  */
                {
		    if((yyvsp[-2].value)->type != integervalue)
			lex_error_message("Non-integer in first part of range");
		    (yyval.range) = ecalloc(1, sizeof(*(yyval.range)));
		    (yyval.range)->min = (yyvsp[-2].value)->u.integervalue;
		    (yyval.range)->max = INT_MAX;
		}
    break;

  case 103: /* range: kw_MIN RANGE IntegerValue  */
                {
		    if((yyvsp[0].value)->type != integervalue)
			lex_error_message("Non-integer in second part of range");
		    (yyval.range) = ecalloc(1, sizeof(*(yyval.range)));
		    (yyval.range)->min = INT_MIN;
		    (yyval.range)->max = (yyvsp[0].value)->u.integervalue;
		}
    break;

  case 104: /* range: IntegerValue  */
                {
		    if((yyvsp[0].value)->type != integervalue)
			lex_error_message("Non-integer used in limit");
		    (yyval.range) = ecalloc(1, sizeof(*(yyval.range)));
		    (yyval.range)->min = (yyvsp[0].value)->u.integervalue;
		    (yyval.range)->max = (yyvsp[0].value)->u.integervalue;
		}
    break;

  case 105: /* IntegerType: kw_INTEGER  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_Integer,
				     TE_EXPLICIT, new_type(TInteger));
		}
    break;

  case 106: /* IntegerType: kw_INTEGER '{' NamedNumberList '}'  */
                {
		  (yyval.type) = new_type(TInteger);
		  (yyval.type)->members = (yyvsp[-1].members);
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_Integer, TE_EXPLICIT, (yyval.type));
		}
    break;

  case 107: /* NamedNumberList: NamedNumber  */
                {
			(yyval.members) = emalloc(sizeof(*(yyval.members)));
			HEIM_TAILQ_INIT((yyval.members));
			HEIM_TAILQ_INSERT_HEAD((yyval.members), (yyvsp[0].member), members);
		}
    break;

  case 108: /* NamedNumberList: NamedNumberList ',' NamedNumber  */
                {
			HEIM_TAILQ_INSERT_TAIL((yyvsp[-2].members), (yyvsp[0].member), members);
			(yyval.members) = (yyvsp[-2].members);
		}
    break;

  case 109: /* NamedNumberList: NamedNumberList ',' ELLIPSIS  */
                        { (yyval.members) = (yyvsp[-2].members); }
    break;

  case 110: /* NamedNumber: Identifier '(' SignedNumber ')'  */
                {
			(yyval.member) = emalloc(sizeof(*(yyval.member)));
			(yyval.member)->name = (yyvsp[-3].name);
			(yyval.member)->gen_name = estrdup((yyvsp[-3].name));
			output_name ((yyval.member)->gen_name);
			(yyval.member)->val = (yyvsp[-1].constant);
			(yyval.member)->optional = 0;
			(yyval.member)->ellipsis = 0;
			(yyval.member)->type = NULL;
		}
    break;

  case 111: /* NamedNumber: Identifier '(' DefinedValue ')'  */
                {
			if ((yyvsp[-1].value)->type != integervalue)
			    lex_error_message("Named number %s not a numeric value",
					      (yyvsp[-1].value)->s->name);
			(yyval.member) = emalloc(sizeof(*(yyval.member)));
			(yyval.member)->name = (yyvsp[-3].name);
			(yyval.member)->gen_name = estrdup((yyvsp[-3].name));
			output_name ((yyval.member)->gen_name);
			(yyval.member)->val = (yyvsp[-1].value)->u.integervalue;
			(yyval.member)->optional = 0;
			(yyval.member)->ellipsis = 0;
			(yyval.member)->type = NULL;
		}
    break;

  case 112: /* EnumeratedType: kw_ENUMERATED '{' Enumerations '}'  */
                {
		  (yyval.type) = new_type(TInteger);
		  (yyval.type)->members = (yyvsp[-1].members);
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_Enumerated, TE_EXPLICIT, (yyval.type));
		}
    break;

  case 114: /* BitStringType: kw_BIT kw_STRING  */
                {
		  (yyval.type) = new_type(TBitString);
		  (yyval.type)->members = emalloc(sizeof(*(yyval.type)->members));
		  HEIM_TAILQ_INIT((yyval.type)->members);
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_BitString, TE_EXPLICIT, (yyval.type));
		}
    break;

  case 115: /* BitStringType: kw_BIT kw_STRING '{' NamedBitList '}'  */
                {
		  (yyval.type) = new_type(TBitString);
		  (yyval.type)->members = (yyvsp[-1].members);
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_BitString, TE_EXPLICIT, (yyval.type));
		}
    break;

  case 116: /* ObjectIdentifierType: kw_OBJECT kw_IDENTIFIER  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_OID,
				     TE_EXPLICIT, new_type(TOID));
		}
    break;

  case 117: /* OctetStringType: kw_OCTET kw_STRING size  */
                {
		    Type *t = new_type(TOctetString);
		    t->range = (yyvsp[0].range);
		    if (t->range) {
			if (t->range->min < 0)
			    lex_error_message("can't use a negative SIZE range "
					      "length for OCTET STRING");
		    }
		    (yyval.type) = new_tag(ASN1_C_UNIV, UT_OctetString,
				 TE_EXPLICIT, t);
		}
    break;

  case 118: /* NullType: kw_NULL  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_Null,
				     TE_EXPLICIT, new_type(TNull));
		}
    break;

  case 119: /* size: %empty  */
                { (yyval.range) = NULL; }
    break;

  case 120: /* size: kw_SIZE '(' range ')'  */
                { (yyval.range) = (yyvsp[-1].range); }
    break;

  case 121: /* SequenceType: kw_SEQUENCE '{' ComponentTypeList '}'  */
                {
		  (yyval.type) = new_type(TSequence);
		  (yyval.type)->members = (yyvsp[-1].members);
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_Sequence, default_tag_env, (yyval.type));
		}
    break;

  case 122: /* SequenceType: kw_SEQUENCE '{' '}'  */
                {
		  (yyval.type) = new_type(TSequence);
		  (yyval.type)->members = NULL;
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_Sequence, default_tag_env, (yyval.type));
		}
    break;

  case 123: /* SequenceOfType: kw_SEQUENCE size kw_OF Type  */
                {
		  (yyval.type) = new_type(TSequenceOf);
		  (yyval.type)->range = (yyvsp[-2].range);
		  if ((yyval.type)->range) {
		      if ((yyval.type)->range->min < 0)
			  lex_error_message("can't use a negative SIZE range "
					    "length for SEQUENCE OF");
		    }

		  (yyval.type)->subtype = (yyvsp[0].type);
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_Sequence, default_tag_env, (yyval.type));
		}
    break;

  case 124: /* SetType: kw_SET '{' ComponentTypeList '}'  */
                {
		  (yyval.type) = new_type(TSet);
		  (yyval.type)->members = (yyvsp[-1].members);
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_Set, default_tag_env, (yyval.type));
		}
    break;

  case 125: /* SetType: kw_SET '{' '}'  */
                {
		  (yyval.type) = new_type(TSet);
		  (yyval.type)->members = NULL;
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_Set, default_tag_env, (yyval.type));
		}
    break;

  case 126: /* SetOfType: kw_SET kw_OF Type  */
                {
		  (yyval.type) = new_type(TSetOf);
		  (yyval.type)->subtype = (yyvsp[0].type);
		  (yyval.type) = new_tag(ASN1_C_UNIV, UT_Set, default_tag_env, (yyval.type));
		}
    break;

  case 127: /* ChoiceType: kw_CHOICE '{' ComponentTypeList '}'  */
                {
		  (yyval.type) = new_type(TChoice);
		  (yyval.type)->members = (yyvsp[-1].members);
		}
    break;

  case 130: /* DefinedType: TYPE_IDENTIFIER  */
                {
		  Symbol *s = addsym((yyvsp[0].name));
		  (yyval.type) = new_type(TType);
		  if(s->stype != Stype && s->stype != SUndefined)
		    lex_error_message ("%s is not a type\n", (yyvsp[0].name));
		  else
		    (yyval.type)->symbol = s;
		}
    break;

  case 131: /* DefinedType: ParameterizedType  */
                { (yyval.type) = (yyvsp[0].type); }
    break;

  case 132: /* ParameterizedType: Identifier '{' ActualParameter '}'  */
                {
		  Symbol *s, *ps;
		  char *pname = NULL;

		  if ((yyvsp[-1].objectset) == NULL) {
                    lex_error_message("Unknown ActualParameter object set parametrizing %s\n", (yyvsp[-3].name));
                    exit(1);
                  }

		  /* Lookup the type from a ParameterizedTypeAssignment */
		  if (asprintf(&pname, "%s{%s:x}", (yyvsp[-3].name),
			       (yyvsp[-1].objectset)->iosclass->symbol->name) == -1 ||
		      pname == NULL)
		      err(1, "Out of memory");
		  ps = addsym(pname);
		  if (ps->stype != Sparamtype)
		    lex_error_message ("%s is not a parameterized type\n", (yyvsp[-3].name));

		  s = addsym((yyvsp[-3].name));
		  (yyval.type) = ps->type; /* XXX copy, probably */
		  if (!ps->type)
		    errx(1, "Wrong class (%s) parameter for parameterized "
		         "type %s", (yyvsp[-1].objectset)->iosclass->symbol->name, (yyvsp[-3].name));
		  s->stype = Stype;
		  if(s->stype != Stype && s->stype != SUndefined)
		    lex_error_message ("%s is not a type\n", (yyvsp[-3].name));
		  else
		    (yyval.type)->symbol = s;
		  (yyval.type)->actual_parameter = (yyvsp[-1].objectset);
		  if ((yyval.type)->type == TTag)
		    (yyval.type)->subtype->actual_parameter = (yyvsp[-1].objectset);
		}
    break;

  case 133: /* ActualParameter: DefinedObjectSet  */
                { (yyval.objectset) = (yyvsp[0].objectset); }
    break;

  case 134: /* UsefulType: kw_GeneralizedTime  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_GeneralizedTime,
				     TE_EXPLICIT, new_type(TGeneralizedTime));
		}
    break;

  case 135: /* UsefulType: kw_UTCTime  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_UTCTime,
				     TE_EXPLICIT, new_type(TUTCTime));
		}
    break;

  case 136: /* ConstrainedType: UnconstrainedType Constraint  */
                {
		    (yyval.type) = (yyvsp[-1].type);
                    if ((yyvsp[0].constraint_spec)->ctype == CT_RANGE) {
                        if ((yyvsp[-1].type)->type != TTag || (yyvsp[-1].type)->subtype->type != TInteger)
                            lex_error_message("RANGE constraints apply only to INTEGER types");
                        (yyval.type)->subtype->range = (yyvsp[0].constraint_spec)->u.range;
                        free((yyvsp[0].constraint_spec));
                    } else {
                        (yyval.type)->constraint = (yyvsp[0].constraint_spec);
                    }
		    /* if (Constraint.type == contentConstraint) {
		       assert(Constraint.u.constraint.type == octetstring|bitstring-w/o-NamedBitList); // remember to check type reference too
		       if (Constraint.u.constraint.type) {
		         assert((Constraint.u.constraint.type.length % 8) == 0);
		       }
		      }
		      if (Constraint.u.constraint.encoding) {
		        type == der-oid|ber-oid
		      }
		    */
		}
    break;

  case 137: /* Constraint: '(' ConstraintSpec ')'  */
                {
		    (yyval.constraint_spec) = (yyvsp[-1].constraint_spec);
		}
    break;

  case 140: /* SubtypeConstraint: range  */
                {
                        (yyval.constraint_spec) = new_constraint_spec(CT_RANGE);
                        (yyval.constraint_spec)->u.range = (yyvsp[0].range);
		}
    break;

  case 144: /* ContentsConstraint: kw_CONTAINING Type  */
                {
		    (yyval.constraint_spec) = new_constraint_spec(CT_CONTENTS);
		    (yyval.constraint_spec)->u.content.type = (yyvsp[0].type);
		    (yyval.constraint_spec)->u.content.encoding = NULL;
		}
    break;

  case 145: /* ContentsConstraint: kw_ENCODED kw_BY Value  */
                {
		    if ((yyvsp[0].value)->type != objectidentifiervalue)
			lex_error_message("Non-OID used in ENCODED BY constraint");
		    (yyval.constraint_spec) = new_constraint_spec(CT_CONTENTS);
		    (yyval.constraint_spec)->u.content.type = NULL;
		    (yyval.constraint_spec)->u.content.encoding = (yyvsp[0].value);
		}
    break;

  case 146: /* ContentsConstraint: kw_CONTAINING Type kw_ENCODED kw_BY Value  */
                {
		    if ((yyvsp[0].value)->type != objectidentifiervalue)
			lex_error_message("Non-OID used in ENCODED BY constraint");
		    (yyval.constraint_spec) = new_constraint_spec(CT_CONTENTS);
		    (yyval.constraint_spec)->u.content.type = (yyvsp[-3].type);
		    (yyval.constraint_spec)->u.content.encoding = (yyvsp[0].value);
		}
    break;

  case 147: /* UserDefinedConstraint: kw_CONSTRAINED kw_BY '{' '}'  */
                {
		    (yyval.constraint_spec) = new_constraint_spec(CT_USER);
		}
    break;

  case 148: /* TableConstraint: SimpleTableConstraint  */
                { (yyval.constraint_spec) = (yyvsp[0].constraint_spec); }
    break;

  case 149: /* TableConstraint: ComponentRelationConstraint  */
                { (yyval.constraint_spec) = (yyvsp[0].constraint_spec); }
    break;

  case 150: /* SimpleTableConstraint: '{' TYPE_IDENTIFIER '}'  */
                {
		    (yyval.constraint_spec) = ecalloc(1, sizeof(*(yyval.constraint_spec)));
		    (yyval.constraint_spec)->ctype = CT_TABLE_CONSTRAINT;
		    (yyval.constraint_spec)->u.content.crel.objectname = (yyvsp[-1].name);
		    (yyval.constraint_spec)->u.content.crel.membername = 0;
		}
    break;

  case 151: /* ComponentRelationConstraint: '{' TYPE_IDENTIFIER '}' '{' '@' Identifier '}'  */
                {
		    (yyval.constraint_spec) = ecalloc(1, sizeof(*(yyval.constraint_spec)));
		    (yyval.constraint_spec)->ctype = CT_TABLE_CONSTRAINT;
		    (yyval.constraint_spec)->u.content.crel.objectname = (yyvsp[-5].name);
		    (yyval.constraint_spec)->u.content.crel.membername = (yyvsp[-1].name);
		}
    break;

  case 152: /* TaggedType: Tag tagenv Type  */
                {
			(yyval.type) = new_type(TTag);
			(yyval.type)->tag = (yyvsp[-2].tag);
			(yyval.type)->tag.tagenv = (yyvsp[-1].constant);
			if (template_flag) {
			    (yyval.type)->subtype = (yyvsp[0].type);
			} else if ((yyvsp[-1].constant) == TE_IMPLICIT) {
			    Type *t = (yyvsp[0].type);

			    /*
			     * FIXME We shouldn't do this... The logic for
			     * dealing with IMPLICIT tags belongs elsewhere.
			     */
			    while (t->type == TType) {
				if (t->subtype)
				    t = t->subtype;
				else if (t->symbol && t->symbol->type)
				    t = t->symbol->type;
				else
				    break;
			    }
			    /*
			     * IMPLICIT tags of CHOICE types are EXPLICIT
			     * instead.
			     */
			    if (t->type == TChoice) {
				(yyval.type)->implicit_choice = 1;
				(yyval.type)->tag.tagenv = TE_EXPLICIT;
			    }
			    if((yyvsp[0].type)->type == TTag && (yyvsp[-1].constant) == TE_IMPLICIT) {
				(yyval.type)->subtype = (yyvsp[0].type)->subtype;
				free((yyvsp[0].type));
			    } else {
				(yyval.type)->subtype = (yyvsp[0].type);
			    }
			} else {
			    (yyval.type)->subtype = (yyvsp[0].type);
			}
		}
    break;

  case 153: /* Tag: '[' Class NUMBER ']'  */
                {
			(yyval.tag).tagclass = (yyvsp[-2].constant);
			(yyval.tag).tagvalue = (yyvsp[-1].constant);
			(yyval.tag).tagenv = default_tag_env;
		}
    break;

  case 154: /* Class: %empty  */
                {
			(yyval.constant) = ASN1_C_CONTEXT;
		}
    break;

  case 155: /* Class: kw_UNIVERSAL  */
                {
			(yyval.constant) = ASN1_C_UNIV;
		}
    break;

  case 156: /* Class: kw_APPLICATION  */
                {
			(yyval.constant) = ASN1_C_APPL;
		}
    break;

  case 157: /* Class: kw_PRIVATE  */
                {
			(yyval.constant) = ASN1_C_PRIVATE;
		}
    break;

  case 158: /* tagenv: %empty  */
                {
			(yyval.constant) = default_tag_env;
		}
    break;

  case 159: /* tagenv: kw_EXPLICIT  */
                {
			(yyval.constant) = default_tag_env;
		}
    break;

  case 160: /* tagenv: kw_IMPLICIT  */
                {
			(yyval.constant) = TE_IMPLICIT;
		}
    break;

  case 161: /* ValueAssignment: VALUE_IDENTIFIER Type EEQUAL Value  */
                {
			Symbol *s;
			s = addsym ((yyvsp[-3].name));

			s->stype = SValue;
			s->value = (yyvsp[0].value);
			generate_constant (s);
			/*
			 * Save this value's name so we can know some name for
			 * this value wherever _a_ name may be needed for it.
			 *
			 * This is useful for OIDs used as type IDs in objects
			 * sets of classes with open types.  We'll generate
			 * enum labels from those OIDs' names.
			 */
                        s->value->s = s;
		}
    break;

  case 163: /* RestrictedCharactedStringType: kw_GeneralString  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_GeneralString,
				     TE_EXPLICIT, new_type(TGeneralString));
		}
    break;

  case 164: /* RestrictedCharactedStringType: kw_TeletexString  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_TeletexString,
				     TE_EXPLICIT, new_type(TTeletexString));
		}
    break;

  case 165: /* RestrictedCharactedStringType: kw_UTF8String  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_UTF8String,
				     TE_EXPLICIT, new_type(TUTF8String));
		}
    break;

  case 166: /* RestrictedCharactedStringType: kw_PrintableString  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_PrintableString,
				     TE_EXPLICIT, new_type(TPrintableString));
		}
    break;

  case 167: /* RestrictedCharactedStringType: kw_VisibleString  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_VisibleString,
				     TE_EXPLICIT, new_type(TVisibleString));
		}
    break;

  case 168: /* RestrictedCharactedStringType: kw_IA5String  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_IA5String,
				     TE_EXPLICIT, new_type(TIA5String));
		}
    break;

  case 169: /* RestrictedCharactedStringType: kw_BMPString  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_BMPString,
				     TE_EXPLICIT, new_type(TBMPString));
		}
    break;

  case 170: /* RestrictedCharactedStringType: kw_UniversalString  */
                {
			(yyval.type) = new_tag(ASN1_C_UNIV, UT_UniversalString,
				     TE_EXPLICIT, new_type(TUniversalString));
		}
    break;

  case 171: /* ComponentTypeList: ComponentType  */
                {
			(yyval.members) = emalloc(sizeof(*(yyval.members)));
			HEIM_TAILQ_INIT((yyval.members));
			HEIM_TAILQ_INSERT_HEAD((yyval.members), (yyvsp[0].member), members);
		}
    break;

  case 172: /* ComponentTypeList: ComponentTypeList ',' ComponentType  */
                {
			HEIM_TAILQ_INSERT_TAIL((yyvsp[-2].members), (yyvsp[0].member), members);
			(yyval.members) = (yyvsp[-2].members);
		}
    break;

  case 173: /* ComponentTypeList: ComponentTypeList ',' ELLIPSIS  */
                {
		        struct member *m = ecalloc(1, sizeof(*m));
			m->name = estrdup("...");
			m->gen_name = estrdup("asn1_ellipsis");
			m->ellipsis = 1;
			HEIM_TAILQ_INSERT_TAIL((yyvsp[-2].members), m, members);
			(yyval.members) = (yyvsp[-2].members);
		}
    break;

  case 174: /* NamedType: Identifier Type  */
                {
		  (yyval.member) = emalloc(sizeof(*(yyval.member)));
		  (yyval.member)->name = (yyvsp[-1].name);
		  (yyval.member)->gen_name = estrdup((yyvsp[-1].name));
		  output_name ((yyval.member)->gen_name);
		  (yyval.member)->type = (yyvsp[0].type);
		  (yyval.member)->ellipsis = 0;
		}
    break;

  case 175: /* ComponentType: NamedType  */
                {
			(yyval.member) = (yyvsp[0].member);
			(yyval.member)->optional = 0;
			(yyval.member)->defval = NULL;
		}
    break;

  case 176: /* ComponentType: NamedType kw_OPTIONAL  */
                {
			(yyval.member) = (yyvsp[-1].member);
			(yyval.member)->optional = 1;
			(yyval.member)->defval = NULL;
		}
    break;

  case 177: /* ComponentType: NamedType kw_DEFAULT Value  */
                {
			(yyval.member) = (yyvsp[-2].member);
			(yyval.member)->optional = 0;
			(yyval.member)->defval = (yyvsp[0].value);
		}
    break;

  case 178: /* NamedBitList: NamedBit  */
                {
			(yyval.members) = emalloc(sizeof(*(yyval.members)));
			HEIM_TAILQ_INIT((yyval.members));
			HEIM_TAILQ_INSERT_HEAD((yyval.members), (yyvsp[0].member), members);
		}
    break;

  case 179: /* NamedBitList: NamedBitList ',' NamedBit  */
                {
			HEIM_TAILQ_INSERT_TAIL((yyvsp[-2].members), (yyvsp[0].member), members);
			(yyval.members) = (yyvsp[-2].members);
		}
    break;

  case 180: /* NamedBit: Identifier '(' NUMBER ')'  */
                {
		  (yyval.member) = emalloc(sizeof(*(yyval.member)));
		  (yyval.member)->name = (yyvsp[-3].name);
		  (yyval.member)->gen_name = estrdup((yyvsp[-3].name));
		  output_name ((yyval.member)->gen_name);
		  (yyval.member)->val = (yyvsp[-1].constant);
		  (yyval.member)->optional = 0;
		  (yyval.member)->ellipsis = 0;
		  (yyval.member)->type = NULL;
		}
    break;

  case 182: /* objid_opt: %empty  */
                              { (yyval.objid) = NULL; }
    break;

  case 183: /* objid: '{' objid_list '}'  */
                {
			(yyval.objid) = (yyvsp[-1].objid);
		}
    break;

  case 184: /* objid_list: %empty  */
                {
			(yyval.objid) = NULL;
		}
    break;

  case 185: /* objid_list: objid_element objid_list  */
                {
		        if ((yyvsp[0].objid)) {
				(yyval.objid) = (yyvsp[0].objid);
				add_oid_to_tail((yyvsp[0].objid), (yyvsp[-1].objid));
			} else {
				(yyval.objid) = (yyvsp[-1].objid);
			}
		}
    break;

  case 186: /* objid_element: Identifier '(' NUMBER ')'  */
                {
			(yyval.objid) = new_objid((yyvsp[-3].name), (yyvsp[-1].constant));
		}
    break;

  case 187: /* objid_element: Identifier  */
                {
		    Symbol *s = addsym((yyvsp[0].name));
		    if(s->stype != SValue ||
		       s->value->type != objectidentifiervalue) {
			lex_error_message("%s is not an object identifier\n",
				      s->name);
			exit(1);
		    }
		    (yyval.objid) = s->value->u.objectidentifiervalue;
		}
    break;

  case 188: /* objid_element: NUMBER  */
                {
		    (yyval.objid) = new_objid(NULL, (yyvsp[0].constant));
		}
    break;

  case 204: /* Valuereference: VALUE_IDENTIFIER  */
                {
			Symbol *s = addsym((yyvsp[0].name));
			if(s->stype != SValue)
				lex_error_message ("%s is not a value\n",
						s->name);
			else
				(yyval.value) = s->value;
		}
    break;

  case 205: /* CharacterStringValue: STRING  */
                {
			(yyval.value) = emalloc(sizeof(*(yyval.value)));
			(yyval.value)->type = stringvalue;
			(yyval.value)->u.stringvalue = (yyvsp[0].name);
		}
    break;

  case 206: /* BooleanValue: kw_TRUE  */
                {
			(yyval.value) = emalloc(sizeof(*(yyval.value)));
			(yyval.value)->type = booleanvalue;
			(yyval.value)->u.booleanvalue = 1;
		}
    break;

  case 207: /* BooleanValue: kw_FALSE  */
                {
			(yyval.value) = emalloc(sizeof(*(yyval.value)));
			(yyval.value)->type = booleanvalue;
			(yyval.value)->u.booleanvalue = 0;
		}
    break;

  case 208: /* IntegerValue: SignedNumber  */
                {
			(yyval.value) = emalloc(sizeof(*(yyval.value)));
			(yyval.value)->type = integervalue;
			(yyval.value)->u.integervalue = (yyvsp[0].constant);
		}
    break;

  case 210: /* NullValue: kw_NULL  */
                {
		}
    break;

  case 211: /* ObjectIdentifierValue: objid  */
                {
			(yyval.value) = emalloc(sizeof(*(yyval.value)));
			(yyval.value)->type = objectidentifiervalue;
			(yyval.value)->u.objectidentifiervalue = (yyvsp[0].objid);
		}
    break;



      default: break;
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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}



void
yyerror (const char *s)
{
     lex_error_message ("%s\n", s);
}

static Type *
new_tag(int tagclass, int tagvalue, int tagenv, Type *oldtype)
{
    Type *t;
    if(oldtype->type == TTag && oldtype->tag.tagenv == TE_IMPLICIT) {
	t = oldtype;
	oldtype = oldtype->subtype; /* XXX */
    } else
	t = new_type (TTag);

    t->tag.tagclass = tagclass;
    t->tag.tagvalue = tagvalue;
    t->tag.tagenv = tagenv;
    t->subtype = oldtype;
    return t;
}

static struct objid *
new_objid(const char *label, int value)
{
    struct objid *s;
    s = emalloc(sizeof(*s));
    s->label = label;
    s->value = value;
    s->next = NULL;
    return s;
}

static void
add_oid_to_tail(struct objid *head, struct objid *tail)
{
    struct objid *o;
    o = head;
    while (o->next)
	o = o->next;
    o->next = tail;
}

static Type *
new_type (Typetype tt)
{
    Type *t = ecalloc(1, sizeof(*t));
    t->type = tt;
    t->id = idcounter++;
    return t;
}

static struct constraint_spec *
new_constraint_spec(enum ctype ct)
{
    struct constraint_spec *c = ecalloc(1, sizeof(*c));
    c->ctype = ct;
    return c;
}

static void fix_labels2(Type *t, const char *prefix);
static void fix_labels1(struct memhead *members, const char *prefix)
{
    Member *m;

    if(members == NULL)
	return;
    HEIM_TAILQ_FOREACH(m, members, members) {
	if (asprintf(&m->label, "%s_%s", prefix, m->gen_name) < 0)
	    errx(1, "malloc");
	if (m->label == NULL)
	    errx(1, "malloc");
	if(m->type != NULL)
	    fix_labels2(m->type, m->label);
    }
}

static void fix_labels2(Type *t, const char *prefix)
{
    for(; t; t = t->subtype)
	fix_labels1(t->members, prefix);
}

static void
fix_labels(Symbol *s)
{
    char *p = NULL;
    if (asprintf(&p, "choice_%s", s->gen_name) < 0 || p == NULL)
	errx(1, "malloc");
    if (s->type)
	fix_labels2(s->type, p);
    free(p);
}

static struct objectshead *
add_object_set_spec(struct objectshead *lst, IOSObject *o)
{
    if (lst == NULL) {
	lst = emalloc(sizeof(*lst));
	HEIM_TAILQ_INIT(lst);
	HEIM_TAILQ_INSERT_HEAD(lst, o, objects);
    } else {
	HEIM_TAILQ_INSERT_TAIL(lst, o, objects);
    }
    return lst;
}

static struct objfieldhead *
add_field_setting(struct objfieldhead *lst, ObjectField *f)
{
    if (lst == NULL) {
	lst = emalloc(sizeof(*lst));
	HEIM_TAILQ_INIT(lst);
	HEIM_TAILQ_INSERT_HEAD(lst, f, objfields);
    } else {
	HEIM_TAILQ_INSERT_TAIL(lst, f, objfields);
    }
    return lst;
}

static struct fieldhead *
add_field_spec(struct fieldhead *lst, Field *f)
{
    if (lst == NULL) {
	lst = emalloc(sizeof(*lst));
	HEIM_TAILQ_INIT(lst);
	HEIM_TAILQ_INSERT_HEAD(lst, f, fields);
    } else {
	HEIM_TAILQ_INSERT_TAIL(lst, f, fields);
    }
    return lst;
}

static ObjectField *
new_field_setting(char *n, Type *t, struct value *v)
{
    ObjectField *of;

    of = ecalloc(1, sizeof(*of));
    of->value = v;
    of->type = t;
    of->name = n;
    return of;
}

static Field *
new_type_field(char *n, int optional, Type *t)
{
    Field *f;

    f = ecalloc(1, sizeof(*f));
    f->optional = optional;
    f->unique = 0;
    f->defval = 0;
    f->type = t;
    f->name = n;
    return f;
}

static Field *
new_fixed_type_value_field(char *n, Type *t, int unique, int optional, struct value *defval)
{
    Field *f;

    f = ecalloc(1, sizeof(*f));
    f->optional = optional;
    f->unique = unique;
    f->defval = defval;
    f->type = t;
    f->name = n;
    return f;
}

static Type *
parametrize_type(Type *t, IOSClass *c)
{
    Type *type;

    type = new_type(TType);
    *type = *t; /* XXX Copy, or use subtype; this only works as long as we don't cleanup! */
    type->formal_parameter = c;
    return type;
}

static Type *
type_from_class_field(IOSClass *c, const char *n)
{
    Field *f;
    Type *t;

    HEIM_TAILQ_FOREACH(f, c->fields, fields) {
	if (strcmp(f->name, n) == 0) {
	    t = new_type(TType);
	    if (f->type) {
		*t = *f->type;
	    } else {
		Symbol *s = addsym("HEIM_ANY");
		if(s->stype != Stype && s->stype != SUndefined)
		    errx(1, "Do not define HEIM_ANY, only import it\n");
		s->stype = Stype;
		t->symbol = s;
	    }
	    t->typeref.iosclass = c;
	    t->typeref.field = f;
	    return t;
	}
    }
    return NULL;
}

static void
validate_object_set(IOSObjectSet *os)
{
    IOSObject **objects;
    ObjectField *of;
    IOSObject *o;
    Field *cf;
    size_t nobjs, i;

    /* Check unique fields */
    HEIM_TAILQ_FOREACH(cf, os->iosclass->fields, fields) {
        if (!cf->unique)
            continue;
        if (!cf->type)
            errx(1, "Type fields of classes can't be UNIQUE (%s)",
                 os->iosclass->symbol->name);
        sort_object_set(os, cf, &objects, &nobjs);
        for (i = 0; i < nobjs; i++) {
            HEIM_TAILQ_FOREACH(of, objects[i]->objfields, objfields) {
                if (strcmp(cf->name, of->name) != 0)
                    continue;
                if (!of->value)
                    errx(1, "Value not specified for required UNIQUE field %s of object %s",
                         cf->name, objects[i]->symbol->name);
                break;
            }
            if (i == 0)
                continue;
            if (object_cmp(&objects[i - 1], &objects[i]) == 0)
                errx(1, "Duplicate values of UNIQUE field %s of objects %s and %s",
                     cf->name, objects[i - 1]->symbol->name,
                     objects[i]->symbol->name);
        }
        free(objects);
    }

    /* Check required fields */
    HEIM_TAILQ_FOREACH(cf, os->iosclass->fields, fields) {
        if (cf->optional || cf->defval || !cf->type)
            continue;
        HEIM_TAILQ_FOREACH(o, os->objects, objects) {
            int specified = 0;

            HEIM_TAILQ_FOREACH(of, o->objfields, objfields) {
                if (strcmp(of->name, cf->name) != 0)
                    continue;
                if (of->value)
                    specified = 1;
                break;
            }
            if (!specified)
                errx(1, "Value not specified for required non-UNIQUE field %s of object %s",
                     cf->name, o->symbol->name);
        }
    }
}
