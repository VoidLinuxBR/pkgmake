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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         __CLAIMS_TF_YY_STYPE
#define YYLTYPE         __CLAIMS_TF_YY_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         __claims_tf_yy_parse
#define yylex           __claims_tf_yy_lex
#define yyerror         __claims_tf_yy_error
#define yydebug         __claims_tf_yy_debug
#define yynerrs         __claims_tf_yy_nerrs

/* First part of user prologue.  */

#include "includes.h"
#define CLAIMS_TRANSFORMATION_INTERNALS 1
#include "libcli/security/claims_transformation.h"
#include "libcli/security/claims_transformation.tab.h"
#pragma GCC diagnostic ignored "-Wstrict-overflow"

/* forward declarations */
struct claims_tf_parser_state;

static struct claims_tf_rule_set *
claims_tf_rule_set_prepare(struct claims_tf_parser_state *ctf_ps,
			   struct claims_tf_rule_ctr *list);
static struct claims_tf_rule_ctr *
claims_tf_rule_ctr_prepare(struct claims_tf_parser_state *ctf_ps,
			   struct claims_tf_rule *rule,
			   struct claims_tf_rule_ctr *next);
static struct claims_tf_rule *
claims_tf_rule_prepare(struct claims_tf_parser_state *ctf_ps,
		       const struct claim_copy *c_copy,
		       const struct claim_new *c_new);
static struct claims_tf_rule *
claims_tf_rule_attach_conditions(struct claims_tf_rule *rule,
				 struct claims_tf_condition_set_ctr *list);
static struct claims_tf_condition_set_ctr *
claims_tf_condition_set_ctr_prepare(struct claims_tf_parser_state *ctf_ps,
				    struct claims_tf_condition_set *set,
				    struct claims_tf_condition_set_ctr *prev);
static struct claims_tf_condition_set *
claims_tf_condition_set_prepare(struct claims_tf_parser_state *ctf_ps,
				const struct claims_tf_condition_ctr *list,
				const char *identifier);
static struct claims_tf_condition_ctr *
claims_tf_condition_ctr_prepare(struct claims_tf_parser_state *ctf_ps,
				struct claims_tf_condition *c1,
				struct claims_tf_condition *c2);
static struct claims_tf_condition_ctr *
claims_tf_condition_ctr_attach_prev(struct claims_tf_condition_ctr *ctr,
				    struct claims_tf_condition_ctr *prev);
static struct claims_tf_condition *
claims_tf_condition_prepare(struct claims_tf_parser_state *ctf_ps,
			    enum claims_tf_property_enum property,
			    enum claims_tf_condition_operator operator,
			    const struct Literal *expr);

static void __claims_tf_yy_error(__CLAIMS_TF_YY_LTYPE *llocp,
				 struct claims_tf_parser_state *ctf_ps,
				 void *yyscanner,
				 const char *str);

_PRIVATE_ int __claims_tf_yy_lex(__CLAIMS_TF_YY_STYPE * yylval_param,
				 __CLAIMS_TF_YY_LTYPE * yylloc_param ,
				 struct claims_tf_parser_state *ctf_ps,
				 void *yyscanner);


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

#include "claims_transformation.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLAIMS_TF_YY_IMPLY = 3,         /* CLAIMS_TF_YY_IMPLY  */
  YYSYMBOL_CLAIMS_TF_YY_SEMICOLON = 4,     /* CLAIMS_TF_YY_SEMICOLON  */
  YYSYMBOL_CLAIMS_TF_YY_COLON = 5,         /* CLAIMS_TF_YY_COLON  */
  YYSYMBOL_CLAIMS_TF_YY_COMMA = 6,         /* CLAIMS_TF_YY_COMMA  */
  YYSYMBOL_CLAIMS_TF_YY_DOT = 7,           /* CLAIMS_TF_YY_DOT  */
  YYSYMBOL_CLAIMS_TF_YY_O_SQ_BRACKET = 8,  /* CLAIMS_TF_YY_O_SQ_BRACKET  */
  YYSYMBOL_CLAIMS_TF_YY_C_SQ_BRACKET = 9,  /* CLAIMS_TF_YY_C_SQ_BRACKET  */
  YYSYMBOL_CLAIMS_TF_YY_O_BRACKET = 10,    /* CLAIMS_TF_YY_O_BRACKET  */
  YYSYMBOL_CLAIMS_TF_YY_C_BRACKET = 11,    /* CLAIMS_TF_YY_C_BRACKET  */
  YYSYMBOL_CLAIMS_TF_YY_EQ = 12,           /* CLAIMS_TF_YY_EQ  */
  YYSYMBOL_CLAIMS_TF_YY_NEQ = 13,          /* CLAIMS_TF_YY_NEQ  */
  YYSYMBOL_CLAIMS_TF_YY_REGEXP_MATCH = 14, /* CLAIMS_TF_YY_REGEXP_MATCH  */
  YYSYMBOL_CLAIMS_TF_YY_REGEXP_NOT_MATCH = 15, /* CLAIMS_TF_YY_REGEXP_NOT_MATCH  */
  YYSYMBOL_CLAIMS_TF_YY_ASSIGN = 16,       /* CLAIMS_TF_YY_ASSIGN  */
  YYSYMBOL_CLAIMS_TF_YY_AND = 17,          /* CLAIMS_TF_YY_AND  */
  YYSYMBOL_CLAIMS_TF_YY_ISSUE = 18,        /* CLAIMS_TF_YY_ISSUE  */
  YYSYMBOL_CLAIMS_TF_YY_TYPE = 19,         /* CLAIMS_TF_YY_TYPE  */
  YYSYMBOL_CLAIMS_TF_YY_VALUE = 20,        /* CLAIMS_TF_YY_VALUE  */
  YYSYMBOL_CLAIMS_TF_YY_VALUE_TYPE = 21,   /* CLAIMS_TF_YY_VALUE_TYPE  */
  YYSYMBOL_CLAIMS_TF_YY_CLAIM = 22,        /* CLAIMS_TF_YY_CLAIM  */
  YYSYMBOL_CLAIMS_TF_YY_IDENTIFIER = 23,   /* CLAIMS_TF_YY_IDENTIFIER  */
  YYSYMBOL_CLAIMS_TF_YY_STRING = 24,       /* CLAIMS_TF_YY_STRING  */
  YYSYMBOL_YYACCEPT = 25,                  /* $accept  */
  YYSYMBOL_Rule_set = 26,                  /* Rule_set  */
  YYSYMBOL_Rules = 27,                     /* Rules  */
  YYSYMBOL_Rule = 28,                      /* Rule  */
  YYSYMBOL_Rule_body = 29,                 /* Rule_body  */
  YYSYMBOL_Conditions = 30,                /* Conditions  */
  YYSYMBOL_Sel_condition_list = 31,        /* Sel_condition_list  */
  YYSYMBOL_Sel_condition = 32,             /* Sel_condition  */
  YYSYMBOL_Sel_condition_body = 33,        /* Sel_condition_body  */
  YYSYMBOL_Opt_cond_list = 34,             /* Opt_cond_list  */
  YYSYMBOL_Cond_list = 35,                 /* Cond_list  */
  YYSYMBOL_Cond = 36,                      /* Cond  */
  YYSYMBOL_Type_cond = 37,                 /* Type_cond  */
  YYSYMBOL_Value_cond = 38,                /* Value_cond  */
  YYSYMBOL_Val_cond = 39,                  /* Val_cond  */
  YYSYMBOL_Val_type_cond = 40,             /* Val_type_cond  */
  YYSYMBOL_claim_prop = 41,                /* claim_prop  */
  YYSYMBOL_Cond_oper = 42,                 /* Cond_oper  */
  YYSYMBOL_Expr = 43,                      /* Expr  */
  YYSYMBOL_Literal = 44,                   /* Literal  */
  YYSYMBOL_Rule_action = 45,               /* Rule_action  */
  YYSYMBOL_Issue_params = 46,              /* Issue_params  */
  YYSYMBOL_claim_copy = 47,                /* claim_copy  */
  YYSYMBOL_claim_new = 48,                 /* claim_new  */
  YYSYMBOL_claim_prop_assign_list = 49,    /* claim_prop_assign_list  */
  YYSYMBOL_claim_value_assign = 50,        /* claim_value_assign  */
  YYSYMBOL_claim_val_assign = 51,          /* claim_val_assign  */
  YYSYMBOL_claim_val_type_assign = 52,     /* claim_val_type_assign  */
  YYSYMBOL_claim_type_assign = 53          /* claim_type_assign  */
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined __CLAIMS_TF_YY_LTYPE_IS_TRIVIAL && __CLAIMS_TF_YY_LTYPE_IS_TRIVIAL \
             && defined __CLAIMS_TF_YY_STYPE_IS_TRIVIAL && __CLAIMS_TF_YY_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   71

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  86

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if __CLAIMS_TF_YY_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   166,   175,   182,   191,   197,   206,   210,
     216,   223,   232,   239,   251,   257,   261,   267,   271,   280,
     284,   293,   305,   312,   321,   333,   345,   349,   353,   359,
     363,   367,   371,   377,   384,   398,   404,   410,   417,   426,
     432,   438,   445,   454,   461,   470,   476,   515
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CLAIMS_TF_YY_IMPLY",
  "CLAIMS_TF_YY_SEMICOLON", "CLAIMS_TF_YY_COLON", "CLAIMS_TF_YY_COMMA",
  "CLAIMS_TF_YY_DOT", "CLAIMS_TF_YY_O_SQ_BRACKET",
  "CLAIMS_TF_YY_C_SQ_BRACKET", "CLAIMS_TF_YY_O_BRACKET",
  "CLAIMS_TF_YY_C_BRACKET", "CLAIMS_TF_YY_EQ", "CLAIMS_TF_YY_NEQ",
  "CLAIMS_TF_YY_REGEXP_MATCH", "CLAIMS_TF_YY_REGEXP_NOT_MATCH",
  "CLAIMS_TF_YY_ASSIGN", "CLAIMS_TF_YY_AND", "CLAIMS_TF_YY_ISSUE",
  "CLAIMS_TF_YY_TYPE", "CLAIMS_TF_YY_VALUE", "CLAIMS_TF_YY_VALUE_TYPE",
  "CLAIMS_TF_YY_CLAIM", "CLAIMS_TF_YY_IDENTIFIER", "CLAIMS_TF_YY_STRING",
  "$accept", "Rule_set", "Rules", "Rule", "Rule_body", "Conditions",
  "Sel_condition_list", "Sel_condition", "Sel_condition_body",
  "Opt_cond_list", "Cond_list", "Cond", "Type_cond", "Value_cond",
  "Val_cond", "Val_type_cond", "claim_prop", "Cond_oper", "Expr",
  "Literal", "Rule_action", "Issue_params", "claim_copy", "claim_new",
  "claim_prop_assign_list", "claim_value_assign", "claim_val_assign",
  "claim_val_type_assign", "claim_type_assign", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-50)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -3,   -17,    16,    31,   -50,    -3,   -50,    29,    18,   -50,
     -50,    -6,    -6,    -6,    24,    28,   -50,   -50,   -50,    30,
      32,    33,   -50,   -50,    19,    -7,   -50,   -50,   -50,   -50,
      15,    15,    15,   -50,   -17,    21,    20,   -50,    34,    39,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,    -9,   -50,
      35,    36,    37,    38,    44,   -50,   -50,   -50,    40,    41,
      42,    43,     2,     2,     2,    22,   -50,    45,    46,    48,
       7,    49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,    -2,   -50,   -50,   -50,   -50
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    15,     0,     0,     3,     4,     6,     0,     9,    10,
      12,     0,     0,     0,     0,    16,    17,    20,    19,     0,
       0,     0,     1,     5,     0,     0,    29,    30,    31,    32,
       0,     0,     0,    14,     0,     0,     0,    13,     0,     0,
      11,    35,    21,    24,    25,    18,    22,    23,     0,     7,
       0,     0,     0,     0,     0,    37,    38,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,    47,    33,    45,    46,    39,    41,    43,    44,
      42,     0,    26,    27,    28,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -50,   -50,    52,   -50,   -50,   -50,   -50,    25,    50,   -50,
     -50,    26,   -50,   -50,    23,    27,   -50,    17,   -49,    -8,
     -50,   -50,   -50,   -50,   -50,   -12,    -4,    -5,    -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    14,
      15,    16,    17,    18,    19,    20,    85,    30,    72,    73,
      39,    54,    55,    56,    57,    58,    59,    60,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      -8,     1,    11,    12,    13,     1,    26,    27,    28,    29,
      50,    51,    52,    53,    74,    75,     2,    82,    83,    84,
       2,    21,    42,    43,    44,    71,    41,    51,    52,    31,
      32,    22,    24,    33,    34,    25,    35,    38,    36,    41,
      12,     1,    13,    49,    48,    76,    67,    68,    69,    70,
      40,    62,    63,    64,    65,    66,    81,    23,    80,    47,
      45,     0,    46,    78,    50,    79,    77,    52,    51,     0,
       0,    37
};

static const yytype_int8 yycheck[] =
{
       3,     8,    19,    20,    21,     8,    12,    13,    14,    15,
      19,    20,    21,    22,    63,    64,    23,    19,    20,    21,
      23,     5,    30,    31,    32,    23,    24,    20,    21,    12,
      13,     0,     3,     9,     6,    17,     6,    18,     6,    24,
      20,     8,    21,     4,    10,    23,     6,     6,     6,     6,
      25,    16,    16,    16,    16,    11,     7,     5,    70,    36,
      34,    -1,    35,    68,    19,    69,    67,    21,    20,    -1,
      -1,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    23,    26,    27,    28,    29,    30,    31,    32,
      33,    19,    20,    21,    34,    35,    36,    37,    38,    39,
      40,     5,     0,    27,     3,    17,    12,    13,    14,    15,
      42,    42,    42,     9,     6,     6,     6,    33,    18,    45,
      32,    24,    44,    44,    44,    36,    40,    39,    10,     4,
      19,    20,    21,    22,    46,    47,    48,    49,    50,    51,
      52,    53,    16,    16,    16,    16,    11,     6,     6,     6,
       6,    23,    43,    44,    43,    43,    23,    53,    52,    51,
      50,     7,    19,    20,    21,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    25,    26,    26,    27,    27,    28,    29,    30,    30,
      31,    31,    32,    32,    33,    34,    34,    35,    35,    36,
      36,    37,    38,    38,    39,    40,    41,    41,    41,    42,
      42,    42,    42,    43,    43,    44,    45,    46,    46,    47,
      48,    49,    49,    50,    50,    51,    52,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     4,     0,     1,
       1,     3,     1,     3,     3,     0,     1,     1,     3,     1,
       1,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     4,     1,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = __CLAIMS_TF_YY_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == __CLAIMS_TF_YY_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, ctf_ps, yyscanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use __CLAIMS_TF_YY_error or __CLAIMS_TF_YY_UNDEF. */
#define YYERRCODE __CLAIMS_TF_YY_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if __CLAIMS_TF_YY_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined __CLAIMS_TF_YY_LTYPE_IS_TRIVIAL && __CLAIMS_TF_YY_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, ctf_ps, yyscanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct claims_tf_parser_state *ctf_ps, void *yyscanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (ctf_ps);
  YY_USE (yyscanner);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct claims_tf_parser_state *ctf_ps, void *yyscanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, ctf_ps, yyscanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, struct claims_tf_parser_state *ctf_ps, void *yyscanner)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), ctf_ps, yyscanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, ctf_ps, yyscanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !__CLAIMS_TF_YY_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !__CLAIMS_TF_YY_DEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct claims_tf_parser_state *ctf_ps, void *yyscanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (ctf_ps);
  YY_USE (yyscanner);
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
yyparse (struct claims_tf_parser_state *ctf_ps, void *yyscanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined __CLAIMS_TF_YY_LTYPE_IS_TRIVIAL && __CLAIMS_TF_YY_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = __CLAIMS_TF_YY_EMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yychar == __CLAIMS_TF_YY_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, ctf_ps, yyscanner);
    }

  if (yychar <= __CLAIMS_TF_YY_EOF)
    {
      yychar = __CLAIMS_TF_YY_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == __CLAIMS_TF_YY_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = __CLAIMS_TF_YY_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = __CLAIMS_TF_YY_EMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Rule_set: %empty  */
       {
	(yyval.rule_set) = claims_tf_rule_set_prepare(ctf_ps, NULL);
	if ((yyval.rule_set) == NULL) {
		YYERROR;
	}
}
    break;

  case 3: /* Rule_set: Rules  */
        {
	(yyval.rule_set) = claims_tf_rule_set_prepare(ctf_ps, (yyvsp[0].rule_ctr));
	if ((yyval.rule_set) == NULL) {
		YYERROR;
	}
}
    break;

  case 4: /* Rules: Rule  */
     {
	(yyval.rule_ctr) = claims_tf_rule_ctr_prepare(ctf_ps, (yyvsp[0].rule), NULL);
	if ((yyval.rule_ctr) == NULL) {
		YYERROR;
	}
}
    break;

  case 5: /* Rules: Rule Rules  */
           {
	(yyval.rule_ctr) = claims_tf_rule_ctr_prepare(ctf_ps, (yyvsp[-1].rule), (yyvsp[0].rule_ctr));
	if ((yyval.rule_ctr) == NULL) {
		YYERROR;
	}
}
    break;

  case 6: /* Rule: Rule_body  */
          {
	(yyval.rule) = (yyvsp[0].rule);
}
    break;

  case 7: /* Rule_body: Conditions CLAIMS_TF_YY_IMPLY Rule_action CLAIMS_TF_YY_SEMICOLON  */
                                                                 {
	(yyval.rule) = claims_tf_rule_attach_conditions((yyvsp[-1].rule), (yyvsp[-3].condition_set_ctr));
	if ((yyval.rule) == NULL) {
		YYERROR;
	}
}
    break;

  case 8: /* Conditions: %empty  */
       {
	(yyval.condition_set_ctr) = NULL;
}
    break;

  case 9: /* Conditions: Sel_condition_list  */
                   {
	(yyval.condition_set_ctr) = (yyvsp[0].condition_set_ctr);
}
    break;

  case 10: /* Sel_condition_list: Sel_condition  */
              {
	(yyval.condition_set_ctr) = claims_tf_condition_set_ctr_prepare(ctf_ps, (yyvsp[0].condition_set), NULL);
	if ((yyval.condition_set_ctr) == NULL) {
		YYERROR;
	}
}
    break;

  case 11: /* Sel_condition_list: Sel_condition_list CLAIMS_TF_YY_AND Sel_condition  */
                                                  {
	(yyval.condition_set_ctr) = claims_tf_condition_set_ctr_prepare(ctf_ps, (yyvsp[0].condition_set), (yyvsp[-2].condition_set_ctr));
	if ((yyval.condition_set_ctr) == NULL) {
		YYERROR;
	}
}
    break;

  case 12: /* Sel_condition: Sel_condition_body  */
                   {
	(yyval.condition_set) = claims_tf_condition_set_prepare(ctf_ps, (yyvsp[0].condition_ctr), NULL);
	if ((yyval.condition_set) == NULL) {
		YYERROR;
	}
}
    break;

  case 13: /* Sel_condition: CLAIMS_TF_YY_IDENTIFIER CLAIMS_TF_YY_COLON Sel_condition_body  */
                                                              {
	if ((yyvsp[-2].sval) == NULL) {
		YYERROR;
	}
	(yyval.condition_set) = claims_tf_condition_set_prepare(ctf_ps, (yyvsp[0].condition_ctr), (yyvsp[-2].sval));
	if ((yyval.condition_set) == NULL) {
		YYERROR;
	}
}
    break;

  case 14: /* Sel_condition_body: CLAIMS_TF_YY_O_SQ_BRACKET Opt_cond_list CLAIMS_TF_YY_C_SQ_BRACKET  */
                                                                  {
	(yyval.condition_ctr) = (yyvsp[-1].condition_ctr);
}
    break;

  case 15: /* Opt_cond_list: %empty  */
       {
	(yyval.condition_ctr) = NULL;
}
    break;

  case 16: /* Opt_cond_list: Cond_list  */
          {
	(yyval.condition_ctr) = (yyvsp[0].condition_ctr);
}
    break;

  case 17: /* Cond_list: Cond  */
     {
	(yyval.condition_ctr) = (yyvsp[0].condition_ctr);
}
    break;

  case 18: /* Cond_list: Cond_list CLAIMS_TF_YY_COMMA Cond  */
                                  {
	(yyval.condition_ctr) = claims_tf_condition_ctr_attach_prev((yyvsp[0].condition_ctr), (yyvsp[-2].condition_ctr));
	if ((yyval.condition_ctr) == NULL) {
		YYERROR;
	}
}
    break;

  case 19: /* Cond: Value_cond  */
           {
	(yyval.condition_ctr) = (yyvsp[0].condition_ctr);
}
    break;

  case 20: /* Cond: Type_cond  */
          {
	(yyval.condition_ctr) = claims_tf_condition_ctr_prepare(ctf_ps, (yyvsp[0].condition), NULL);
	if ((yyval.condition_ctr) == NULL) {
		YYERROR;
	}
}
    break;

  case 21: /* Type_cond: CLAIMS_TF_YY_TYPE Cond_oper Literal  */
                                    {
	(yyval.condition) = claims_tf_condition_prepare(ctf_ps,
					 CLAIMS_TF_PROPERTY_TYPE,
					 (yyvsp[-1].oper).operator,
					 &(yyvsp[0].literal));
	if ((yyval.condition) == NULL) {
		YYERROR;
	}
}
    break;

  case 22: /* Value_cond: Val_cond CLAIMS_TF_YY_COMMA Val_type_cond  */
                                          {
	(yyval.condition_ctr) = claims_tf_condition_ctr_prepare(ctf_ps, (yyvsp[-2].condition), (yyvsp[0].condition));
	if ((yyval.condition_ctr) == NULL) {
		YYERROR;
	}
}
    break;

  case 23: /* Value_cond: Val_type_cond CLAIMS_TF_YY_COMMA Val_cond  */
                                          {
	(yyval.condition_ctr) = claims_tf_condition_ctr_prepare(ctf_ps, (yyvsp[-2].condition), (yyvsp[0].condition));
	if ((yyval.condition_ctr) == NULL) {
		YYERROR;
	}
}
    break;

  case 24: /* Val_cond: CLAIMS_TF_YY_VALUE Cond_oper Literal  */
                                     {
	(yyval.condition) = claims_tf_condition_prepare(ctf_ps,
					 CLAIMS_TF_PROPERTY_VALUE,
					 (yyvsp[-1].oper).operator,
					 &(yyvsp[0].literal));
	if ((yyval.condition) == NULL) {
		YYERROR;
	}
}
    break;

  case 25: /* Val_type_cond: CLAIMS_TF_YY_VALUE_TYPE Cond_oper Literal  */
                                          {
	(yyval.condition) = claims_tf_condition_prepare(ctf_ps,
					 CLAIMS_TF_PROPERTY_VALUE_TYPE,
					 (yyvsp[-1].oper).operator,
					 &(yyvsp[0].literal));
	if ((yyval.condition) == NULL) {
		YYERROR;
	}
}
    break;

  case 26: /* claim_prop: CLAIMS_TF_YY_TYPE  */
                  {
	(yyval.prop) = (struct claim_prop) { .property = CLAIMS_TF_PROPERTY_TYPE, };
}
    break;

  case 27: /* claim_prop: CLAIMS_TF_YY_VALUE  */
                   {
	(yyval.prop) = (struct claim_prop) { .property = CLAIMS_TF_PROPERTY_VALUE, };
}
    break;

  case 28: /* claim_prop: CLAIMS_TF_YY_VALUE_TYPE  */
                        {
	(yyval.prop) = (struct claim_prop) { .property = CLAIMS_TF_PROPERTY_VALUE_TYPE, };
}
    break;

  case 29: /* Cond_oper: CLAIMS_TF_YY_EQ  */
                {
	(yyval.oper) = (struct Cond_oper) { .operator = CLAIMS_TF_CONDITION_OPERATOR_EQ, };
}
    break;

  case 30: /* Cond_oper: CLAIMS_TF_YY_NEQ  */
                 {
	(yyval.oper) = (struct Cond_oper) { .operator = CLAIMS_TF_CONDITION_OPERATOR_NEQ, };
}
    break;

  case 31: /* Cond_oper: CLAIMS_TF_YY_REGEXP_MATCH  */
                          {
	(yyval.oper) = (struct Cond_oper) { .operator = CLAIMS_TF_CONDITION_OPERATOR_REGEXP_MATCH, };
}
    break;

  case 32: /* Cond_oper: CLAIMS_TF_YY_REGEXP_NOT_MATCH  */
                              {
	(yyval.oper) = (struct Cond_oper) { .operator = CLAIMS_TF_CONDITION_OPERATOR_REGEXP_NOT_MATCH, };
}
    break;

  case 33: /* Expr: Literal  */
        {
	(yyval.expr) = (struct Expr) {
		.has_literal = true,
		.literal = (yyvsp[0].literal),
	};
}
    break;

  case 34: /* Expr: CLAIMS_TF_YY_IDENTIFIER CLAIMS_TF_YY_DOT claim_prop  */
                                                    {
	if ((yyvsp[-2].sval) == NULL) {
		YYERROR;
	}
	(yyval.expr) = (struct Expr) {
		.claim = {
			.identifier = (yyvsp[-2].sval),
			.property = (yyvsp[0].prop).property,
		},
	};
}
    break;

  case 35: /* Literal: CLAIMS_TF_YY_STRING  */
                    {
	(yyval.literal) = (struct Literal) { .str = (yyvsp[0].sval), };
}
    break;

  case 36: /* Rule_action: CLAIMS_TF_YY_ISSUE CLAIMS_TF_YY_O_BRACKET Issue_params CLAIMS_TF_YY_C_BRACKET  */
                                                                              {
	(yyval.rule) = (yyvsp[-1].rule);
}
    break;

  case 37: /* Issue_params: claim_copy  */
           {
	(yyval.rule) = claims_tf_rule_prepare(ctf_ps, &(yyvsp[0].c_copy), NULL);
	if ((yyval.rule) == NULL) {
		YYERROR;
	}
}
    break;

  case 38: /* Issue_params: claim_new  */
          {
	(yyval.rule) = claims_tf_rule_prepare(ctf_ps, NULL, &(yyvsp[0].c_new));
	if ((yyval.rule) == NULL) {
		YYERROR;
	}
}
    break;

  case 39: /* claim_copy: CLAIMS_TF_YY_CLAIM CLAIMS_TF_YY_ASSIGN CLAIMS_TF_YY_IDENTIFIER  */
                                                               {
	(yyval.c_copy) = (struct claim_copy) { .identifier = (yyvsp[0].sval), };
}
    break;

  case 40: /* claim_new: claim_prop_assign_list  */
                       {
	(yyval.c_new) = (yyvsp[0].c_new);
}
    break;

  case 41: /* claim_prop_assign_list: claim_value_assign CLAIMS_TF_YY_COMMA claim_type_assign  */
                                                        {
	(yyval.c_new) = (struct claim_new) {
		.type = (yyvsp[0].type_assign),
		.value = (yyvsp[-2].value_assign),
	};
}
    break;

  case 42: /* claim_prop_assign_list: claim_type_assign CLAIMS_TF_YY_COMMA claim_value_assign  */
                                                        {
	(yyval.c_new) = (struct claim_new) {
		.type = (yyvsp[-2].type_assign),
		.value = (yyvsp[0].value_assign),
	};
}
    break;

  case 43: /* claim_value_assign: claim_val_assign CLAIMS_TF_YY_COMMA claim_val_type_assign  */
                                                          {
	(yyval.value_assign) = (struct claim_value_assign) {
		.vt = (yyvsp[0].val_type_assign),
		.val = (yyvsp[-2].val_assign),
	};
}
    break;

  case 44: /* claim_value_assign: claim_val_type_assign CLAIMS_TF_YY_COMMA claim_val_assign  */
                                                          {
	(yyval.value_assign) = (struct claim_value_assign) {
		.vt = (yyvsp[-2].val_type_assign),
		.val = (yyvsp[0].val_assign),
	};
}
    break;

  case 45: /* claim_val_assign: CLAIMS_TF_YY_VALUE CLAIMS_TF_YY_ASSIGN Expr  */
                                            {
	(yyval.val_assign) = (struct claim_val_assign) { .expr = (yyvsp[0].expr), };
}
    break;

  case 46: /* claim_val_type_assign: CLAIMS_TF_YY_VALUE_TYPE CLAIMS_TF_YY_ASSIGN Expr  */
                                                 {
	if ((yyvsp[0].expr).has_literal) {
		const char *lstr = (yyvsp[0].expr).literal.str;
		enum CLAIM_TYPE vt;

		if (lstr == NULL) {
			YYERROR;
		}

		vt = claims_tf_type_from_string(lstr);
		if (vt == 0) {
			ctf_ps->error.string = talloc_asprintf(ctf_ps,
							       "Invalid "
							       "ValueType "
							       "string[%s]",
							       lstr);
			YYERROR;
		}
	} else {
		if ((yyvsp[0].expr).claim.property != CLAIMS_TF_PROPERTY_VALUE_TYPE) {
			const char *istr = (yyvsp[0].expr).claim.identifier;

			if (istr == NULL) {
				istr = "<NULL>";
			}

			ctf_ps->error.string = talloc_asprintf(ctf_ps,
							       "ValueType "
							       "requires "
							       "%s.ValueType",
							       istr);
			YYERROR;
		}
	}
	(yyval.val_type_assign) = (struct claim_val_type_assign) { .expr = (yyvsp[0].expr), };
}
    break;

  case 47: /* claim_type_assign: CLAIMS_TF_YY_TYPE CLAIMS_TF_YY_ASSIGN Expr  */
                                           {
	(yyval.type_assign) = (struct claim_type_assign) { .expr = (yyvsp[0].expr), };
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
  *++yylsp = yyloc;

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
  yytoken = yychar == __CLAIMS_TF_YY_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, ctf_ps, yyscanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= __CLAIMS_TF_YY_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == __CLAIMS_TF_YY_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, ctf_ps, yyscanner);
          yychar = __CLAIMS_TF_YY_EMPTY;
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, ctf_ps, yyscanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, ctf_ps, yyscanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != __CLAIMS_TF_YY_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, ctf_ps, yyscanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, ctf_ps, yyscanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}



static struct claims_tf_rule_set *
claims_tf_rule_set_prepare(struct claims_tf_parser_state *ctf_ps,
			   struct claims_tf_rule_ctr *list)
{
	struct claims_tf_rule_set *rule_set = NULL;
	struct claims_tf_rule_ctr *cr = NULL;
	size_t num_rules = 0;
	struct claims_tf_rule *rules = NULL;
	size_t i;

	if (ctf_ps == NULL) {
		return NULL;
	}
	if (ctf_ps->rule_set != NULL) {
		return NULL;
	}

	rule_set = talloc_zero(ctf_ps,
			       struct claims_tf_rule_set);
	if (rule_set == NULL) {
		return NULL;
	}

	for (cr = list; cr != NULL; cr = cr->next) {
		if (cr->rule == NULL) {
			TALLOC_FREE(rule_set);
			return NULL;
		}

		num_rules += 1;
	}

	if (num_rules >= UINT32_MAX) {
		TALLOC_FREE(rule_set);
		return NULL;
	}
	if (num_rules > 0) {
		rules = talloc_zero_array(rule_set,
					  struct claims_tf_rule,
					  num_rules);
		if (rules == NULL) {
			TALLOC_FREE(rule_set);
			return NULL;
		}
	}

	i = 0;
	for (cr = list; cr != NULL; cr = cr->next) {
		SMB_ASSERT(i < num_rules);
		talloc_steal(rule_set, cr->rule);
		rules[i] = *cr->rule;
		i += 1;
	}
	SMB_ASSERT(i == num_rules);
	rule_set->num_rules = num_rules;
	rule_set->rules = rules;

	ctf_ps->rule_set = rule_set;
	return rule_set;
}

static bool claims_tf_property_from_expr(TALLOC_CTX *mem_ctx,
					 const struct Expr *expr,
					 struct claims_tf_property *prop)
{
	if (expr->has_literal) {
		if (expr->literal.str == NULL) {
			return false;
		}

		*prop = (struct claims_tf_property) {
			.string = talloc_strdup(mem_ctx, expr->literal.str),
		};
		if (prop->string == NULL) {
			return false;
		}

		return true;
	}

	if (expr->claim.identifier == NULL) {
		return false;
	}

	*prop = (struct claims_tf_property) {
		.ref = {
			.identifier = talloc_strdup(mem_ctx,
						    expr->claim.identifier),
			.property = expr->claim.property,
		},
	};
	if (prop->ref.identifier == NULL) {
		return false;
	}

	return true;
}

static struct claims_tf_rule_ctr *
claims_tf_rule_ctr_prepare(struct claims_tf_parser_state *ctf_ps,
			   struct claims_tf_rule *rule,
			   struct claims_tf_rule_ctr *next)
{
	struct claims_tf_rule_ctr *rule_ctr = NULL;

	if (ctf_ps == NULL) {
		return NULL;
	}

	rule_ctr = talloc_zero(ctf_ps, struct claims_tf_rule_ctr);
	if (rule_ctr == NULL) {
		return NULL;
	}

	rule_ctr->rule = talloc_steal(rule_ctr, rule);
	rule_ctr->next = talloc_steal(rule_ctr, next);

	return rule_ctr;
}

static struct claims_tf_rule *
claims_tf_rule_prepare(struct claims_tf_parser_state *ctf_ps,
		       const struct claim_copy *c_copy,
		       const struct claim_new *c_new)
{
	struct claims_tf_rule *rule = NULL;
	const struct Expr *type_expr = NULL;
	const struct Expr *vt_expr = NULL;
	const struct Expr *val_expr = NULL;
	bool ok;

	if (ctf_ps == NULL) {
		return NULL;
	}

	rule = talloc_zero(ctf_ps, struct claims_tf_rule);
	if (rule == NULL) {
		return NULL;
	}

	if (c_copy != NULL) {
		const char *identifier = NULL;

		if (c_copy->identifier == NULL) {
			TALLOC_FREE(rule);
			return NULL;
		}

		identifier = talloc_strdup(rule, c_copy->identifier);
		if (identifier == NULL) {
			TALLOC_FREE(rule);
			return NULL;
		}

		/*
		 * Copy all properties from the given claim identifier
		 */
		rule->action.type.ref = (struct claims_tf_property_ref) {
			.identifier = identifier,
			.property = CLAIMS_TF_PROPERTY_TYPE,
		};
		rule->action.value_type.ref = (struct claims_tf_property_ref) {
			.identifier = identifier,
			.property = CLAIMS_TF_PROPERTY_VALUE_TYPE,
		};
		rule->action.value.ref = (struct claims_tf_property_ref) {
			.identifier = identifier,
			.property = CLAIMS_TF_PROPERTY_VALUE,
		};

		return rule;
	}

	if (c_new == NULL) {
		TALLOC_FREE(rule);
		return NULL;
	}

	type_expr = &c_new->type.expr;
	vt_expr = &c_new->value.vt.expr;
	val_expr = &c_new->value.val.expr;

	ok = claims_tf_property_from_expr(rule, type_expr, &rule->action.type);
	if (!ok) {
		TALLOC_FREE(rule);
		return NULL;
	}

	ok = claims_tf_property_from_expr(rule, vt_expr, &rule->action.value_type);
	if (!ok) {
		TALLOC_FREE(rule);
		return NULL;
	}

	ok = claims_tf_property_from_expr(rule, val_expr, &rule->action.value);
	if (!ok) {
		TALLOC_FREE(rule);
		return NULL;
	}

	return rule;
}

static struct claims_tf_rule *
claims_tf_rule_attach_conditions(struct claims_tf_rule *rule,
				 struct claims_tf_condition_set_ctr *list)
{
	struct claims_tf_condition_set_ctr *cl = NULL;
	size_t num_condition_sets = 0;
	struct claims_tf_condition_set *condition_sets = NULL;
	size_t i;

	if (rule == NULL) {
		return NULL;
	}

	for (cl = list; cl != NULL; cl = cl->prev) {
		if (cl->set == NULL) {
			TALLOC_FREE(rule);
			return NULL;
		}
		num_condition_sets += 1;
	}

	if (num_condition_sets >= UINT32_MAX) {
		TALLOC_FREE(rule);
		return NULL;
	}

	if (num_condition_sets != 0) {
		condition_sets = talloc_zero_array(rule,
						   struct claims_tf_condition_set,
						   num_condition_sets);
		if (condition_sets == NULL) {
			TALLOC_FREE(rule);
			return NULL;
		}
	}

	/*
	 * list is a list from tail to head.
	 *
	 * But we want rule->condition_sets to have
	 * head at index 0.
	 */
	i = num_condition_sets;
	for (cl = list; cl != NULL; cl = cl->prev) {
		SMB_ASSERT(i > 0);
		i -= 1;
		talloc_steal(rule, cl->set);
		condition_sets[i] = *cl->set;
	}
	SMB_ASSERT(i == 0);
	rule->num_condition_sets = num_condition_sets;
	rule->condition_sets = condition_sets;

	return rule;
}

static struct claims_tf_condition_set_ctr *
claims_tf_condition_set_ctr_prepare(struct claims_tf_parser_state *ctf_ps,
				    struct claims_tf_condition_set *set,
				    struct claims_tf_condition_set_ctr *prev)
{
	struct claims_tf_condition_set_ctr *condition_set_ctr = NULL;

	if (ctf_ps == NULL) {
		return NULL;
	}

	condition_set_ctr = talloc_zero(ctf_ps, struct claims_tf_condition_set_ctr);
	if (condition_set_ctr == NULL) {
		return NULL;
	}

	condition_set_ctr->set = talloc_steal(condition_set_ctr, set);
	condition_set_ctr->prev = talloc_steal(condition_set_ctr, prev);

	return condition_set_ctr;
}

static struct claims_tf_condition_set *
claims_tf_condition_set_prepare(struct claims_tf_parser_state *ctf_ps,
				const struct claims_tf_condition_ctr *list,
				const char *identifier)
{
	struct claims_tf_condition_set *condition_set = NULL;
	const struct claims_tf_condition_ctr *cl = NULL;
	size_t num_conditions = 0;
	struct claims_tf_condition *conditions = NULL;
	size_t i;

	if (ctf_ps == NULL) {
		return NULL;
	}

	condition_set = talloc_zero(ctf_ps, struct claims_tf_condition_set);
	if (condition_set == NULL) {
		return NULL;
	}

	if (identifier != NULL) {
		condition_set->opt_identifier = talloc_strdup(condition_set,
							      identifier);
		if (condition_set->opt_identifier == NULL) {
			TALLOC_FREE(condition_set);
			return NULL;
		}
	}

	for (cl = list; cl != NULL; cl = cl->prev) {
		if (cl->c1 == NULL) {
			TALLOC_FREE(condition_set);
			return NULL;
		}

		if (cl->c2 != NULL) {
			num_conditions += 1;
		}
		num_conditions += 1;
	}

	if (num_conditions >= UINT32_MAX) {
		TALLOC_FREE(condition_set);
		return NULL;
	}

	if (num_conditions > 0) {
		conditions = talloc_zero_array(condition_set,
					       struct claims_tf_condition,
					       num_conditions);
		if (conditions == NULL) {
			TALLOC_FREE(condition_set);
			return NULL;
		}
	}

	/*
	 * list is a list from tail to head.
	 *
	 * But we want rule->condition_sets to have
	 * head at index 0.
	 */
	i = num_conditions;
	for (cl = list; cl != NULL; cl = cl->prev) {
		if (cl->c2 != NULL) {
			SMB_ASSERT(i > 0);
			i -= 1;
			talloc_steal(condition_set, cl->c2);
			conditions[i] = *cl->c2;
		}
		SMB_ASSERT(i > 0);
		i -= 1;
		talloc_steal(condition_set, cl->c1);
		conditions[i] = *cl->c1;
	}
	SMB_ASSERT(i == 0);
	condition_set->num_conditions = num_conditions;
	condition_set->conditions = conditions;

	return condition_set;
}

static struct claims_tf_condition_ctr *
claims_tf_condition_ctr_prepare(struct claims_tf_parser_state *ctf_ps,
				struct claims_tf_condition *c1,
				struct claims_tf_condition *c2)
{
	struct claims_tf_condition_ctr *condition_ctr = NULL;

	if (ctf_ps == NULL) {
		return NULL;
	}

	condition_ctr = talloc_zero(ctf_ps, struct claims_tf_condition_ctr);
	if (condition_ctr == NULL) {
		return NULL;
	}

	condition_ctr->c1 = talloc_steal(condition_ctr, c1);
	condition_ctr->c2 = talloc_steal(condition_ctr, c2);

	return condition_ctr;
}

static struct claims_tf_condition_ctr *
claims_tf_condition_ctr_attach_prev(struct claims_tf_condition_ctr *ctr,
				    struct claims_tf_condition_ctr *prev)
{
	ctr->prev = talloc_steal(ctr, prev);
	return ctr;
}

static struct claims_tf_condition *
claims_tf_condition_prepare(struct claims_tf_parser_state *ctf_ps,
			    enum claims_tf_property_enum property,
			    enum claims_tf_condition_operator operator,
			    const struct Literal *expr)
{
	struct claims_tf_condition *condition = NULL;
	const char *match = NULL;

	if (ctf_ps == NULL) {
		return NULL;
	}

	condition = talloc_zero(ctf_ps, struct claims_tf_condition);
	if (condition == NULL) {
		return NULL;
	}

	match = expr->str;

	if (match == NULL) {
		TALLOC_FREE(condition);
		return NULL;
	}

	if (property == CLAIMS_TF_PROPERTY_VALUE_TYPE) {
		enum CLAIM_TYPE vt;

		vt = claims_tf_type_from_string(match);
		if (vt == 0) {
			ctf_ps->error.string = talloc_asprintf(ctf_ps,
							       "Invalid "
							       "ValueType "
							       "string[%s]",
							       match);
			TALLOC_FREE(condition);
			return NULL;
		}
	}

	condition->property = property;
	condition->operator = operator;
	condition->string = talloc_strdup(condition, match);
	if (condition->string == NULL) {
		TALLOC_FREE(condition);
		return NULL;
	}

	return condition;
}

static void __claims_tf_yy_error(__CLAIMS_TF_YY_LTYPE *llocp,
				 struct claims_tf_parser_state *ctf_ps,
				 void *yyscanner,
				 const char *str)
{
	ctf_ps->error.first_line = llocp->first_line;
	ctf_ps->error.first_column = llocp->first_column;
	ctf_ps->error.last_line = llocp->last_line;
	ctf_ps->error.last_column = llocp->last_column;
	ctf_ps->error.string = talloc_strdup(ctf_ps, str);
}
