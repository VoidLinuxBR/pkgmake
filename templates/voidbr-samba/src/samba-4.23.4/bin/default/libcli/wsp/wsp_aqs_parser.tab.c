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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */


#include "includes.h"
#include "libcli/wsp/wsp_aqs.h"
#include "libcli/wsp/wsp_aqs_parser.tab.h"
#include "libcli/wsp/wsp_aqs_lexer.h"

static int yyerror(t_select_stmt **stmt, yyscan_t scanner, const char *msg)
{
	fprintf(stderr,"Error :%s\n",msg); return 0;
}


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

#include "wsp_aqs_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_AND_ = 3,                     /* "AND"  */
  YYSYMBOL_4_OR_ = 4,                      /* "OR"  */
  YYSYMBOL_5_ = 5,                         /* "!="  */
  YYSYMBOL_TOKEN_NE = 6,                   /* TOKEN_NE  */
  YYSYMBOL_7_ = 7,                         /* ">="  */
  YYSYMBOL_TOKEN_GE = 8,                   /* TOKEN_GE  */
  YYSYMBOL_9_ = 9,                         /* "<="  */
  YYSYMBOL_TOKEN_LE = 10,                  /* TOKEN_LE  */
  YYSYMBOL_11_ = 11,                       /* "<"  */
  YYSYMBOL_TOKEN_LT = 12,                  /* TOKEN_LT  */
  YYSYMBOL_13_ = 13,                       /* ">"  */
  YYSYMBOL_TOKEN_GT = 14,                  /* TOKEN_GT  */
  YYSYMBOL_15_NOT_ = 15,                   /* "NOT"  */
  YYSYMBOL_TOKEN_NOT = 16,                 /* TOKEN_NOT  */
  YYSYMBOL_17_ = 17,                       /* "=="  */
  YYSYMBOL_TOKEN_EQ = 18,                  /* TOKEN_EQ  */
  YYSYMBOL_19_ = 19,                       /* ":"  */
  YYSYMBOL_TOKEN_PROP_EQUALS = 20,         /* TOKEN_PROP_EQUALS  */
  YYSYMBOL_21_ = 21,                       /* "$<"  */
  YYSYMBOL_22_ = 22,                       /* "$="  */
  YYSYMBOL_TOKEN_LPAREN = 23,              /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 24,              /* TOKEN_RPAREN  */
  YYSYMBOL_TOKEN_AND = 25,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_OR = 26,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_WHERE = 27,               /* TOKEN_WHERE  */
  YYSYMBOL_TOKEN_SELECT = 28,              /* TOKEN_SELECT  */
  YYSYMBOL_TOKEN_TRUE = 29,                /* TOKEN_TRUE  */
  YYSYMBOL_TOKEN_FALSE = 30,               /* TOKEN_FALSE  */
  YYSYMBOL_TOKEN_COMMA = 31,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_STARTS_WITH = 32,         /* TOKEN_STARTS_WITH  */
  YYSYMBOL_TOKEN_EQUALS = 33,              /* TOKEN_EQUALS  */
  YYSYMBOL_TOKEN_MATCHES = 34,             /* TOKEN_MATCHES  */
  YYSYMBOL_TOKEN_K = 35,                   /* TOKEN_K  */
  YYSYMBOL_TOKEN_M = 36,                   /* TOKEN_M  */
  YYSYMBOL_TOKEN_G = 37,                   /* TOKEN_G  */
  YYSYMBOL_TOKEN_T = 38,                   /* TOKEN_T  */
  YYSYMBOL_TOKEN_KB = 39,                  /* TOKEN_KB  */
  YYSYMBOL_TOKEN_MB = 40,                  /* TOKEN_MB  */
  YYSYMBOL_TOKEN_GB = 41,                  /* TOKEN_GB  */
  YYSYMBOL_TOKEN_TB = 42,                  /* TOKEN_TB  */
  YYSYMBOL_TOKEN_RANGE = 43,               /* TOKEN_RANGE  */
  YYSYMBOL_TOKEN_TODAY = 44,               /* TOKEN_TODAY  */
  YYSYMBOL_TOKEN_YESTERDAY = 45,           /* TOKEN_YESTERDAY  */
  YYSYMBOL_TOKEN_THISWEEK = 46,            /* TOKEN_THISWEEK  */
  YYSYMBOL_TOKEN_LASTWEEK = 47,            /* TOKEN_LASTWEEK  */
  YYSYMBOL_TOKEN_THISMONTH = 48,           /* TOKEN_THISMONTH  */
  YYSYMBOL_TOKEN_LASTMONTH = 49,           /* TOKEN_LASTMONTH  */
  YYSYMBOL_TOKEN_THISYEAR = 50,            /* TOKEN_THISYEAR  */
  YYSYMBOL_TOKEN_LASTYEAR = 51,            /* TOKEN_LASTYEAR  */
  YYSYMBOL_TOKEN_EMPTY = 52,               /* TOKEN_EMPTY  */
  YYSYMBOL_TOKEN_TINY = 53,                /* TOKEN_TINY  */
  YYSYMBOL_TOKEN_SMALL = 54,               /* TOKEN_SMALL  */
  YYSYMBOL_TOKEN_MEDIUM = 55,              /* TOKEN_MEDIUM  */
  YYSYMBOL_TOKEN_LARGE = 56,               /* TOKEN_LARGE  */
  YYSYMBOL_TOKEN_HUGE = 57,                /* TOKEN_HUGE  */
  YYSYMBOL_TOKEN_GIGANTIC = 58,            /* TOKEN_GIGANTIC  */
  YYSYMBOL_TOKEN_NUMBER = 59,              /* TOKEN_NUMBER  */
  YYSYMBOL_TOKEN_IDENTIFIER = 60,          /* TOKEN_IDENTIFIER  */
  YYSYMBOL_TOKEN_STRING_LITERAL = 61,      /* TOKEN_STRING_LITERAL  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_input = 63,                     /* input  */
  YYSYMBOL_select_stmt = 64,               /* select_stmt  */
  YYSYMBOL_cols = 65,                      /* cols  */
  YYSYMBOL_col = 66,                       /* col  */
  YYSYMBOL_query = 67,                     /* query  */
  YYSYMBOL_basic_query = 68,               /* basic_query  */
  YYSYMBOL_prop = 69,                      /* prop  */
  YYSYMBOL_basic_restr = 70,               /* basic_restr  */
  YYSYMBOL_property_op = 71,               /* property_op  */
  YYSYMBOL_content_op = 72,                /* content_op  */
  YYSYMBOL_value = 73,                     /* value  */
  YYSYMBOL_date_shortcut = 74,             /* date_shortcut  */
  YYSYMBOL_size_shortcut = 75,             /* size_shortcut  */
  YYSYMBOL_simple_value = 76,              /* simple_value  */
  YYSYMBOL_restr = 77                      /* restr  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   96

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  81

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   137,   137,   143,   149,   158,   164,   173,   182,   188,
     194,   200,   206,   215,   223,   232,   238,   244,   250,   262,
     263,   264,   265,   266,   267,   271,   272,   276,   277,   283,
     289,   298,   299,   300,   301,   302,   303,   304,   305,   309,
     310,   311,   312,   313,   314,   315,   319,   325,   331,   337,
     343,   350,   356,   362,   368,   375,   381,   387,   395,   403,
     409,   415
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
  "\"end of file\"", "error", "\"invalid token\"", "\"AND\"", "\"OR\"",
  "\"!=\"", "TOKEN_NE", "\">=\"", "TOKEN_GE", "\"<=\"", "TOKEN_LE",
  "\"<\"", "TOKEN_LT", "\">\"", "TOKEN_GT", "\"NOT\"", "TOKEN_NOT",
  "\"==\"", "TOKEN_EQ", "\":\"", "TOKEN_PROP_EQUALS", "\"$<\"", "\"$=\"",
  "TOKEN_LPAREN", "TOKEN_RPAREN", "TOKEN_AND", "TOKEN_OR", "TOKEN_WHERE",
  "TOKEN_SELECT", "TOKEN_TRUE", "TOKEN_FALSE", "TOKEN_COMMA",
  "TOKEN_STARTS_WITH", "TOKEN_EQUALS", "TOKEN_MATCHES", "TOKEN_K",
  "TOKEN_M", "TOKEN_G", "TOKEN_T", "TOKEN_KB", "TOKEN_MB", "TOKEN_GB",
  "TOKEN_TB", "TOKEN_RANGE", "TOKEN_TODAY", "TOKEN_YESTERDAY",
  "TOKEN_THISWEEK", "TOKEN_LASTWEEK", "TOKEN_THISMONTH", "TOKEN_LASTMONTH",
  "TOKEN_THISYEAR", "TOKEN_LASTYEAR", "TOKEN_EMPTY", "TOKEN_TINY",
  "TOKEN_SMALL", "TOKEN_MEDIUM", "TOKEN_LARGE", "TOKEN_HUGE",
  "TOKEN_GIGANTIC", "TOKEN_NUMBER", "TOKEN_IDENTIFIER",
  "TOKEN_STRING_LITERAL", "$accept", "input", "select_stmt", "cols", "col",
  "query", "basic_query", "prop", "basic_restr", "property_op",
  "content_op", "value", "date_shortcut", "size_shortcut", "simple_value",
  "restr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-60)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -3,    -2,    -2,   -59,   -60,     3,   -60,   -10,   -60,   -13,
     -60,   -15,   -60,   -22,    -9,   -60,    -2,    -2,    -6,   -60,
      -2,   -59,    66,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
      -6,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
      29,   -60,   -60,   -60,    30,    30,   -60,   -60,   -60,    13,
     -10,   -60,   -60,     4,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     2,   -60,    -6,    -6,   -60,    67,
     -60
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    14,     0,     2,     4,     8,     0,
      12,     0,     7,     0,     5,     1,     0,     0,     0,     9,
       0,     0,    10,    11,    20,    21,    22,    23,    24,    19,
       0,    55,    56,    25,    26,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    58,    57,    13,     0,     0,    15,    29,    30,    27,
       3,     6,    59,     0,    47,    48,    49,    50,    51,    52,
      53,    54,    16,    17,     0,    18,     0,     0,    28,    60,
      61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   -60,    73,   -60,    17,   -60,   -60,    77,   -60,
     -60,   -19,   -60,   -60,    22,    -4
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,    13,    14,     7,     8,     9,    62,    54,
      55,    56,    57,    58,    59,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      24,    12,    25,    15,    26,    20,    27,    18,    28,    19,
      16,    17,    29,     1,     1,    16,    17,    30,    10,    11,
       2,     2,    21,    31,    32,     3,    33,    34,    75,    76,
      77,    31,    32,    22,    23,    72,    73,    60,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    74,     4,     4,    31,
      32,    50,    51,    52,    64,    65,    66,    67,    68,    69,
      70,    71,    79,    80,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    17,    77,    61,    53,    78
};

static const yytype_int8 yycheck[] =
{
       6,    60,     8,     0,    10,    27,    12,    20,    14,    24,
      25,    26,    18,    16,    16,    25,    26,    23,     1,     2,
      23,    23,    31,    29,    30,    28,    32,    33,    24,    25,
      26,    29,    30,    16,    17,    54,    55,    20,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    43,    60,    60,    29,
      30,    59,    60,    61,    35,    36,    37,    38,    39,    40,
      41,    42,    76,    77,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    26,    26,    21,    18,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    23,    28,    60,    63,    64,    67,    68,    69,
      67,    67,    60,    65,    66,     0,    25,    26,    20,    24,
      27,    31,    67,    67,     6,     8,    10,    12,    14,    18,
      23,    29,    30,    32,    33,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    70,    71,    72,    73,    74,    75,    76,
      67,    65,    70,    77,    35,    36,    37,    38,    39,    40,
      41,    42,    73,    73,    43,    24,    25,    26,    76,    77,
      77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    66,    67,    67,
      67,    67,    67,    68,    69,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    73,
      73,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    77
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     1,     1,     3,     1,     1,     3,
       3,     3,     2,     3,     1,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       3,     3
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
        yyerror (select, scanner, YY_("syntax error: cannot back up")); \
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
                  Kind, Value, select, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, t_select_stmt **select, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (select);
  YY_USE (scanner);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, t_select_stmt **select, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, select, scanner);
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
                 int yyrule, t_select_stmt **select, yyscan_t scanner)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], select, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, select, scanner); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, t_select_stmt **select, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (select);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (t_select_stmt **select, yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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
      yychar = yylex (&yylval, scanner);
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
  case 2: /* input: select_stmt  */
                    {
		*select = (yyvsp[0].select_stmt);
	}
    break;

  case 3: /* select_stmt: TOKEN_SELECT cols TOKEN_WHERE query  */
                                                  {
		(yyval.select_stmt) = create_select(talloc_tos(), (yyvsp[-2].columns), (yyvsp[0].query) );
		if (!(yyval.select_stmt)) {
			 YYERROR;
		}
	}
    break;

  case 4: /* select_stmt: query  */
                   {
		(yyval.select_stmt) = create_select(talloc_tos(), NULL, (yyvsp[0].query) );
		if (!(yyval.select_stmt)) {
			 YYERROR;
		}
	}
    break;

  case 5: /* cols: col  */
               {
		(yyval.columns) = create_cols(talloc_tos(), (yyvsp[0].strval), NULL);
		if (!(yyval.columns)) {
			 YYERROR;
		}
	}
    break;

  case 6: /* cols: col TOKEN_COMMA cols  */
                                       {
		(yyval.columns) = create_cols(talloc_tos(), (yyvsp[-2].strval), (yyvsp[0].columns));
		if (!(yyval.columns)) {
			 YYERROR;
		}
	}
    break;

  case 7: /* col: TOKEN_IDENTIFIER  */
                            {
		(yyval.strval) = (yyvsp[0].strval);
		if (!(yyval.strval)) {
			 YYERROR;
		}
	}
    break;

  case 8: /* query: basic_query  */
                    {
		(yyval.query) = create_query_node(talloc_tos(), eVALUE, NULL, NULL, (yyvsp[0].bas_query));
		if (!(yyval.query)) {
			 YYERROR;
		}
	}
    break;

  case 9: /* query: TOKEN_LPAREN query TOKEN_RPAREN  */
                                             {
		(yyval.query) = (yyvsp[-1].query);
		if (!(yyval.query)) {
			 YYERROR;
		}
	}
    break;

  case 10: /* query: query TOKEN_AND query  */
                                      {
		(yyval.query) = create_query_node(talloc_tos(), eAND, (yyvsp[-2].query), (yyvsp[0].query), NULL);
		if (!(yyval.query)) {
			 YYERROR;
		}
	}
    break;

  case 11: /* query: query TOKEN_OR query  */
                                     {
		(yyval.query) = create_query_node(talloc_tos(), eOR, (yyvsp[-2].query), (yyvsp[0].query), NULL);
		if (!(yyval.query)) {
			 YYERROR;
		}
	}
    break;

  case 12: /* query: TOKEN_NOT query  */
                             {
		(yyval.query) = create_query_node(talloc_tos(), eNOT, NULL, (yyvsp[0].query), NULL);
		if (!(yyval.query)) {
			 YYERROR;
		}
	}
    break;

  case 13: /* basic_query: prop TOKEN_PROP_EQUALS basic_restr  */
                                                 {
		(yyval.bas_query) = create_basic_query(talloc_tos(), (yyvsp[-2].strval), (yyvsp[0].bas_rest));
		if (!(yyval.bas_query)) {
			 YYERROR;
		}
	}
    break;

  case 14: /* prop: TOKEN_IDENTIFIER  */
                          {
		(yyval.strval) = (yyvsp[0].strval);
		if (!(yyval.strval)) {
			 YYERROR;
		}
	}
    break;

  case 15: /* basic_restr: value  */
                 {
		(yyval.bas_rest) = create_basic_restr(talloc_tos(), RTPROPERTY, eEQ, (yyvsp[0].value));
		if (!(yyval.bas_rest)) {
			 YYERROR;
		}
	}
    break;

  case 16: /* basic_restr: property_op value  */
                                  {
		(yyval.bas_rest) = create_basic_restr(talloc_tos(), RTPROPERTY, (yyvsp[-1].prop_op), (yyvsp[0].value));
		if (!(yyval.bas_rest)) {
			 YYERROR;
		}
	}
    break;

  case 17: /* basic_restr: content_op value  */
                                 {
		(yyval.bas_rest) = create_basic_restr(talloc_tos(), RTCONTENT, (yyvsp[-1].prop_op), (yyvsp[0].value));
		if (!(yyval.bas_rest)) {
			 YYERROR;
		}
	}
    break;

  case 18: /* basic_restr: TOKEN_LPAREN restr TOKEN_RPAREN  */
                                             {
		t_value_holder *holder = talloc_zero(talloc_tos(), t_value_holder);
		holder->type = RESTR;
		holder->value.restr_tree = (yyvsp[-1].restr);
		(yyval.bas_rest) = create_basic_restr(talloc_tos(), RTNONE, eEQ, holder);
		if (!(yyval.bas_rest)) {
			 YYERROR;
		}
	}
    break;

  case 19: /* property_op: TOKEN_EQ  */
                 { (yyval.prop_op) = eEQ; }
    break;

  case 20: /* property_op: TOKEN_NE  */
                   { (yyval.prop_op) = eNE; }
    break;

  case 21: /* property_op: TOKEN_GE  */
                   { (yyval.prop_op) = eGE; }
    break;

  case 22: /* property_op: TOKEN_LE  */
                   { (yyval.prop_op) = eLE; }
    break;

  case 23: /* property_op: TOKEN_LT  */
                   { (yyval.prop_op) = eLT; }
    break;

  case 24: /* property_op: TOKEN_GT  */
                   { (yyval.prop_op) = eGT; }
    break;

  case 25: /* content_op: TOKEN_STARTS_WITH  */
                          { (yyval.prop_op) = eSTARTSWITH; }
    break;

  case 26: /* content_op: TOKEN_EQUALS  */
                       { (yyval.prop_op) = eEQUALS; }
    break;

  case 27: /* value: simple_value  */
                        { (yyval.value) = (yyvsp[0].value);}
    break;

  case 28: /* value: simple_value TOKEN_RANGE simple_value  */
                                                      {
		(yyval.value) = create_value_range(talloc_tos(), (yyvsp[-2].value), (yyvsp[0].value));
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 29: /* value: date_shortcut  */
                           {
		(yyval.value) = create_date_range_shortcut(talloc_tos(), (yyvsp[0].daterange));
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 30: /* value: size_shortcut  */
                           {
		(yyval.value) = create_size_range_shortcut(talloc_tos(), (yyvsp[0].sizerange));
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 31: /* date_shortcut: TOKEN_TODAY  */
                    { (yyval.daterange) = eTODAY; }
    break;

  case 32: /* date_shortcut: TOKEN_YESTERDAY  */
                          { (yyval.daterange) = eYESTERDAY; }
    break;

  case 33: /* date_shortcut: TOKEN_THISWEEK  */
                         { (yyval.daterange) = eTHISWEEK; }
    break;

  case 34: /* date_shortcut: TOKEN_LASTWEEK  */
                         { (yyval.daterange) = eLASTWEEK; }
    break;

  case 35: /* date_shortcut: TOKEN_THISMONTH  */
                          { (yyval.daterange) = eTHISMONTH; }
    break;

  case 36: /* date_shortcut: TOKEN_LASTMONTH  */
                          { (yyval.daterange) = eTHISMONTH; }
    break;

  case 37: /* date_shortcut: TOKEN_THISYEAR  */
                         { (yyval.daterange) = eTHISYEAR; }
    break;

  case 38: /* date_shortcut: TOKEN_LASTYEAR  */
                         { (yyval.daterange) = eLASTYEAR; }
    break;

  case 39: /* size_shortcut: TOKEN_EMPTY  */
                    { (yyval.sizerange) = eEMPTY; }
    break;

  case 40: /* size_shortcut: TOKEN_TINY  */
                     { (yyval.sizerange) = eTINY; }
    break;

  case 41: /* size_shortcut: TOKEN_SMALL  */
                      { (yyval.sizerange) = eSMALL; }
    break;

  case 42: /* size_shortcut: TOKEN_MEDIUM  */
                       { (yyval.sizerange) = eMEDIUM; }
    break;

  case 43: /* size_shortcut: TOKEN_LARGE  */
                      { (yyval.sizerange) = eLARGE; }
    break;

  case 44: /* size_shortcut: TOKEN_HUGE  */
                     { (yyval.sizerange) = eHUGE; }
    break;

  case 45: /* size_shortcut: TOKEN_GIGANTIC  */
                         { (yyval.sizerange) = eGIGANTIC; }
    break;

  case 46: /* simple_value: TOKEN_NUMBER  */
                        {
		(yyval.value) = create_num_val(talloc_tos(), (yyvsp[0].num));
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 47: /* simple_value: TOKEN_NUMBER TOKEN_K  */
                                  {
		(yyval.value) = create_num_val(talloc_tos(), (yyvsp[-1].num) * 1024);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 48: /* simple_value: TOKEN_NUMBER TOKEN_M  */
                                  {
		(yyval.value) = create_num_val( talloc_tos(), (yyvsp[-1].num) * 1024 * 1024);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 49: /* simple_value: TOKEN_NUMBER TOKEN_G  */
                                  {
		(yyval.value) = create_num_val(talloc_tos(), (yyvsp[-1].num) * 1024 * 1024 * 1024);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 50: /* simple_value: TOKEN_NUMBER TOKEN_T  */
                                  {
		(yyval.value) = create_num_val(talloc_tos(),
				    (yyvsp[-1].num) * 1024 * 1024 * 1024 * 1024);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 51: /* simple_value: TOKEN_NUMBER TOKEN_KB  */
                                   {
		(yyval.value) = create_num_val(talloc_tos(), (yyvsp[-1].num) * 1000);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 52: /* simple_value: TOKEN_NUMBER TOKEN_MB  */
                                   {
		(yyval.value) = create_num_val( talloc_tos(), (yyvsp[-1].num) * 1000 * 1000);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 53: /* simple_value: TOKEN_NUMBER TOKEN_GB  */
                                   {
		(yyval.value) = create_num_val(talloc_tos(), (yyvsp[-1].num) * 1000 * 1000 * 1000);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 54: /* simple_value: TOKEN_NUMBER TOKEN_TB  */
                                   {
		(yyval.value) = create_num_val(talloc_tos(),
				    (yyvsp[-1].num) * 1000 * 1000 * 1000 * 1000);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 55: /* simple_value: TOKEN_TRUE  */
                     {
		(yyval.value) = create_bool_val(talloc_tos(), true);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 56: /* simple_value: TOKEN_FALSE  */
                      {
		(yyval.value) = create_num_val(talloc_tos(), false);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 57: /* simple_value: TOKEN_STRING_LITERAL  */
                                  {
		char *tmp_str = talloc_strdup(talloc_tos(), (yyvsp[0].strval)+1);
		tmp_str[strlen(tmp_str)-1] = '\0';
		(yyval.value) = create_string_val(talloc_tos(), tmp_str);
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 58: /* simple_value: TOKEN_IDENTIFIER  */
                              {
		(yyval.value) = create_string_val(talloc_tos(), (yyvsp[0].strval));
		if (!(yyval.value)) {
			 YYERROR;
		}
	}
    break;

  case 59: /* restr: basic_restr  */
                      {
		(yyval.restr) = create_restr(talloc_tos(), eVALUE, NULL, NULL, (yyvsp[0].bas_rest));
		if (!(yyval.restr)) {
			 YYERROR;
		}
	}
    break;

  case 60: /* restr: restr TOKEN_AND restr  */
                                      {
		(yyval.restr) = create_restr(talloc_tos(), eAND, (yyvsp[-2].restr), (yyvsp[0].restr), NULL);
		if (!(yyval.restr)) {
			 YYERROR;
		}
	}
    break;

  case 61: /* restr: restr TOKEN_OR restr  */
                                     {
		(yyval.restr) = create_restr(talloc_tos(), eOR, (yyvsp[-2].restr), (yyvsp[0].restr), NULL);
		if (!(yyval.restr)) {
			 YYERROR;
		}
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
      yyerror (select, scanner, YY_("syntax error"));
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
                      yytoken, &yylval, select, scanner);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, select, scanner);
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
  yyerror (select, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, select, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, select, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}


