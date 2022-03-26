/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "syntax.y"

#include <stddef.h>
#include <stdio.h>

#include "lex.yy.h"

#line 78 "syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_SEMI = 5,                       /* SEMI  */
  YYSYMBOL_COMMA = 6,                      /* COMMA  */
  YYSYMBOL_ASSIGNOP = 7,                   /* ASSIGNOP  */
  YYSYMBOL_RELOP = 8,                      /* RELOP  */
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_STAR = 11,                      /* STAR  */
  YYSYMBOL_DIV = 12,                       /* DIV  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_DOT = 15,                       /* DOT  */
  YYSYMBOL_NOT = 16,                       /* NOT  */
  YYSYMBOL_TYPE = 17,                      /* TYPE  */
  YYSYMBOL_LP = 18,                        /* LP  */
  YYSYMBOL_RP = 19,                        /* RP  */
  YYSYMBOL_LB = 20,                        /* LB  */
  YYSYMBOL_RB = 21,                        /* RB  */
  YYSYMBOL_LC = 22,                        /* LC  */
  YYSYMBOL_RC = 23,                        /* RC  */
  YYSYMBOL_STRUCT = 24,                    /* STRUCT  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_ID = 29,                        /* ID  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_Program = 31,                   /* Program  */
  YYSYMBOL_ExtDefList = 32,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 33,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 34,                /* ExtDecList  */
  YYSYMBOL_Specifier = 35,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 36,           /* StructSpecifier  */
  YYSYMBOL_OptTag = 37,                    /* OptTag  */
  YYSYMBOL_Tag = 38,                       /* Tag  */
  YYSYMBOL_VarDec = 39,                    /* VarDec  */
  YYSYMBOL_FunDec = 40,                    /* FunDec  */
  YYSYMBOL_VarList = 41,                   /* VarList  */
  YYSYMBOL_ParamDec = 42,                  /* ParamDec  */
  YYSYMBOL_CompSt = 43,                    /* CompSt  */
  YYSYMBOL_StmtList = 44,                  /* StmtList  */
  YYSYMBOL_Stmt = 45,                      /* Stmt  */
  YYSYMBOL_DefList = 46,                   /* DefList  */
  YYSYMBOL_Def = 47,                       /* Def  */
  YYSYMBOL_DecList = 48,                   /* DecList  */
  YYSYMBOL_Dec = 49,                       /* Dec  */
  YYSYMBOL_Exp = 50,                       /* Exp  */
  YYSYMBOL_Args = 51                       /* Args  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   191

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    39,    39,    41,    42,    44,    45,    46,    48,    49,
      53,    54,    56,    57,    59,    60,    62,    66,    67,    69,
      70,    72,    73,    75,    79,    81,    82,    84,    85,    86,
      87,    88,    91,    92,    94,    96,    97,    99,   100,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   122,   123
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "SEMI",
  "COMMA", "ASSIGNOP", "RELOP", "PLUS", "MINUS", "STAR", "DIV", "AND",
  "OR", "DOT", "NOT", "TYPE", "LP", "RP", "LB", "RB", "LC", "RC", "STRUCT",
  "RETURN", "IF", "ELSE", "WHILE", "ID", "$accept", "Program",
  "ExtDefList", "ExtDef", "ExtDecList", "Specifier", "StructSpecifier",
  "OptTag", "Tag", "VarDec", "FunDec", "VarList", "ParamDec", "CompSt",
  "StmtList", "Stmt", "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
#endif

#define YYPACT_NINF (-96)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-15)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,   -96,   -15,    40,   -96,    20,     3,   -96,    21,    24,
     -96,   -96,   -96,   -96,    31,    51,    46,    37,    20,    -2,
     -96,    36,    64,    20,   -96,    36,    45,    20,   -96,    36,
      52,    66,   -96,   -96,    49,    32,    14,    68,    81,   -96,
     -96,    54,   -96,    20,   -96,   -96,   -96,    59,    59,    59,
      59,    83,    84,    86,    80,    32,    71,    59,   -96,    36,
     -96,   171,   171,   129,    85,    59,    59,    35,   -96,   -96,
     -96,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      59,   171,   -96,   -96,   -96,   143,   157,   -96,   100,    97,
     171,   171,   171,   171,   171,   171,   171,   171,   -96,   114,
      32,    32,    59,   -96,   -96,    90,   -96,   -96,    32,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    10,    15,     0,     2,     4,     0,    11,    16,     0,
      13,     1,     3,     6,    17,     0,     8,     0,    33,     0,
       5,     0,     0,    33,     7,     0,     0,    33,    20,     0,
       0,    22,    17,     9,     0,    26,    37,     0,    35,    12,
      32,    23,    19,     0,    18,    55,    56,     0,     0,     0,
       0,     0,     0,    54,     0,    26,     0,     0,    34,     0,
      21,    48,    49,     0,     0,     0,     0,     0,    24,    25,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    36,    47,    28,     0,     0,    51,    58,     0,
      39,    42,    43,    44,    45,    46,    40,    41,    53,     0,
       0,     0,     0,    50,    52,    29,    31,    57,     0,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -96,   -96,   113,   -96,    98,     4,   -96,   -96,   -96,   -18,
     -96,    87,   -96,   -96,    76,   -95,   -11,   -96,    73,   -96,
     -47,    43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    15,    25,     7,     9,    10,    16,
      17,    30,    31,    24,    54,    55,    26,    27,    37,    38,
      56,    89
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      61,    62,    63,    64,     6,   105,   106,    36,    13,     6,
      81,    41,    35,   109,     8,     1,    40,    28,    85,    86,
      88,    57,     2,    29,    90,    91,    92,    93,    94,    95,
      96,    97,    14,    99,    22,    45,    46,     1,    45,    46,
      11,    36,    47,   -14,     2,    47,    18,    29,    48,    19,
      49,    48,    21,    49,    87,    88,    20,    50,    51,    23,
      52,    53,    45,    46,    53,    32,    22,    34,    39,    47,
      44,    42,    43,    58,    22,    48,    70,    49,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    59,    53,    98,
      84,    80,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    65,    66,    68,    67,    80,   102,    71,    72,    73,
      74,    75,    76,    77,    78,    79,   103,   108,    12,    33,
      80,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      60,    69,    82,     0,    80,   104,    71,    72,    73,    74,
      75,    76,    77,    78,    79,   107,     0,     0,    83,    80,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,   100,    80,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,   101,    80,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,    80
};

static const yytype_int8 yycheck[] =
{
      47,    48,    49,    50,     0,   100,   101,    25,     5,     5,
      57,    29,    23,   108,    29,    17,    27,    19,    65,    66,
      67,     7,    24,    19,    71,    72,    73,    74,    75,    76,
      77,    78,    29,    80,    20,     3,     4,    17,     3,     4,
       0,    59,    10,    22,    24,    10,    22,    43,    16,    18,
      18,    16,     6,    18,    19,   102,     5,    25,    26,    22,
      28,    29,     3,     4,    29,    29,    20,     3,    23,    10,
      21,    19,     6,     5,    20,    16,     5,    18,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     6,    29,    29,
       5,    20,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    18,    18,    23,    18,    20,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    19,    27,     5,    21,
      20,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      43,    55,    59,    -1,    20,    21,     7,     8,     9,    10,
      11,    12,    13,    14,    15,   102,    -1,    -1,    19,    20,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    19,    20,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    19,    20,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    24,    31,    32,    33,    35,    36,    29,    37,
      38,     0,    32,     5,    29,    34,    39,    40,    22,    18,
       5,     6,    20,    22,    43,    35,    46,    47,    19,    35,
      41,    42,    29,    34,     3,    46,    39,    48,    49,    23,
      46,    39,    19,     6,    21,     3,     4,    10,    16,    18,
      25,    26,    28,    29,    44,    45,    50,     7,     5,     6,
      41,    50,    50,    50,    50,    18,    18,    18,    23,    44,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      20,    50,    48,    19,     5,    50,    50,    19,    50,    51,
      50,    50,    50,    50,    50,    50,    50,    50,    29,    50,
      19,    19,     6,    19,    21,    45,    45,    51,    27,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    33,    33,    33,    34,    34,
      35,    35,    36,    36,    37,    37,    38,    39,    39,    40,
      40,    41,    41,    42,    43,    44,    44,    45,    45,    45,
      45,    45,    46,    46,    47,    48,    48,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    51,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     1,     3,
       1,     1,     5,     2,     1,     0,     1,     1,     4,     4,
       3,     3,     1,     2,     4,     2,     0,     2,     3,     5,
       7,     5,     2,     0,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       4,     3,     4,     3,     1,     1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* Program: ExtDefList  */
#line 39 "syntax.y"
                    {(yyval.node) = newNode(yylineno, T_PROGRAM, NULL, 1, (Node*[]) {(yyvsp[0].node)}); printTree((yyval.node), 0);}
#line 1206 "syntax.tab.c"
    break;

  case 3: /* ExtDefList: ExtDef ExtDefList  */
#line 41 "syntax.y"
                              {(yyval.node) = newNode(yylineno, T_EXTDEFLIST, NULL, 2, (Node*[]) {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 1212 "syntax.tab.c"
    break;

  case 4: /* ExtDefList: %empty  */
#line 42 "syntax.y"
      {{(yyval.node) = newNode(yylineno, T_EXTDEFLIST, NULL, 0, (Node*[]) {});}}
#line 1218 "syntax.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 44 "syntax.y"
                                  {(yyval.node) = newNode(yylineno, T_EXTDEF, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1224 "syntax.tab.c"
    break;

  case 6: /* ExtDef: Specifier SEMI  */
#line 45 "syntax.y"
                     {(yyval.node) = newNode(yylineno, T_EXTDEF, NULL, 2, (Node*[]) {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 1230 "syntax.tab.c"
    break;

  case 7: /* ExtDef: Specifier FunDec CompSt  */
#line 46 "syntax.y"
                              {(yyval.node) = newNode(yylineno, T_EXTDEF, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1236 "syntax.tab.c"
    break;

  case 8: /* ExtDecList: VarDec  */
#line 48 "syntax.y"
                   {(yyval.node) = newNode(yylineno, T_EXTDECLIST, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1242 "syntax.tab.c"
    break;

  case 9: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 49 "syntax.y"
                              {(yyval.node) = newNode(yylineno, T_EXTDECLIST, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1248 "syntax.tab.c"
    break;

  case 10: /* Specifier: TYPE  */
#line 53 "syntax.y"
                {(yyval.node) = newNode(yylineno, T_SPECIFIER, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1254 "syntax.tab.c"
    break;

  case 11: /* Specifier: StructSpecifier  */
#line 54 "syntax.y"
                      {(yyval.node) = newNode(yylineno, T_SPECIFIER, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1260 "syntax.tab.c"
    break;

  case 12: /* StructSpecifier: STRUCT OptTag LC DefList RC  */
#line 56 "syntax.y"
                                             {(yyval.node) = newNode(yylineno, T_STRUCTSPECIFIER, NULL, 5, (Node*[]) {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1266 "syntax.tab.c"
    break;

  case 13: /* StructSpecifier: STRUCT Tag  */
#line 57 "syntax.y"
                 {(yyval.node) = newNode(yylineno, T_STRUCTSPECIFIER, NULL, 2, (Node*[]) {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 1272 "syntax.tab.c"
    break;

  case 14: /* OptTag: ID  */
#line 59 "syntax.y"
           {(yyval.node) = newNode(yylineno, T_OPTTAG, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1278 "syntax.tab.c"
    break;

  case 15: /* OptTag: %empty  */
#line 60 "syntax.y"
      {(yyval.node) = newNode(yylineno, T_OPTTAG, NULL, 0, (Node*[]) {});}
#line 1284 "syntax.tab.c"
    break;

  case 16: /* Tag: ID  */
#line 62 "syntax.y"
        {(yyval.node) = newNode(yylineno, T_TAG, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1290 "syntax.tab.c"
    break;

  case 17: /* VarDec: ID  */
#line 66 "syntax.y"
           {(yyval.node) = newNode(yylineno, T_VARDEC, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1296 "syntax.tab.c"
    break;

  case 18: /* VarDec: VarDec LB INT RB  */
#line 67 "syntax.y"
                       {(yyval.node) = newNode(yylineno, T_VARDEC, NULL, 3, (Node*[]) {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)});}
#line 1302 "syntax.tab.c"
    break;

  case 19: /* FunDec: ID LP VarList RP  */
#line 69 "syntax.y"
                         {(yyval.node) = newNode(yylineno, T_FUNDEC, NULL, 4, (Node*[]) {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1308 "syntax.tab.c"
    break;

  case 20: /* FunDec: ID LP RP  */
#line 70 "syntax.y"
               {(yyval.node) = newNode(yylineno, T_FUNDEC, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1314 "syntax.tab.c"
    break;

  case 21: /* VarList: ParamDec COMMA VarList  */
#line 72 "syntax.y"
                                {(yyval.node) = newNode(yylineno, T_VARLIST, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1320 "syntax.tab.c"
    break;

  case 22: /* VarList: ParamDec  */
#line 73 "syntax.y"
               {(yyval.node) = newNode(yylineno, T_VARLIST, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1326 "syntax.tab.c"
    break;

  case 23: /* ParamDec: Specifier VarDec  */
#line 75 "syntax.y"
                           {(yyval.node) = newNode(yylineno, T_PARAMDEC, NULL, 2, (Node*[]) {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 1332 "syntax.tab.c"
    break;

  case 24: /* CompSt: LC DefList StmtList RC  */
#line 79 "syntax.y"
                               {(yyval.node) = newNode(yylineno, T_COMPST, NULL, 4, (Node*[]) {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1338 "syntax.tab.c"
    break;

  case 25: /* StmtList: Stmt StmtList  */
#line 81 "syntax.y"
                        {(yyval.node) = newNode(yylineno, T_STMTLIST, NULL, 2, (Node*[]) {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 1344 "syntax.tab.c"
    break;

  case 26: /* StmtList: %empty  */
#line 82 "syntax.y"
      {(yyval.node) = newNode(yylineno, T_STMTLIST, NULL, 0, (Node*[]) {});}
#line 1350 "syntax.tab.c"
    break;

  case 27: /* Stmt: Exp SEMI  */
#line 84 "syntax.y"
               {(yyval.node) = newNode(yylineno, T_STMT, NULL, 2, (Node*[]) {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 1356 "syntax.tab.c"
    break;

  case 28: /* Stmt: RETURN Exp SEMI  */
#line 85 "syntax.y"
                      {(yyval.node) = newNode(yylineno, T_STMT, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1362 "syntax.tab.c"
    break;

  case 29: /* Stmt: IF LP Exp RP Stmt  */
#line 86 "syntax.y"
                        {(yyval.node) = newNode(yylineno, T_STMT, NULL, 5, (Node*[]) {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1368 "syntax.tab.c"
    break;

  case 30: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 87 "syntax.y"
                                  {(yyval.node) = newNode(yylineno, T_STMT, NULL, 7, (Node*[]) {(yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1374 "syntax.tab.c"
    break;

  case 31: /* Stmt: WHILE LP Exp RP Stmt  */
#line 88 "syntax.y"
                           {(yyval.node) = newNode(yylineno, T_STMT, NULL, 5, (Node*[]) {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1380 "syntax.tab.c"
    break;

  case 32: /* DefList: Def DefList  */
#line 91 "syntax.y"
                     {(yyval.node) = newNode(yylineno, T_DEFLIST, NULL, 2, (Node*[]) {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 1386 "syntax.tab.c"
    break;

  case 33: /* DefList: %empty  */
#line 92 "syntax.y"
      {(yyval.node) = newNode(yylineno, T_DEFLIST, NULL, 0, (Node*[]) {});}
#line 1392 "syntax.tab.c"
    break;

  case 34: /* Def: Specifier DecList SEMI  */
#line 94 "syntax.y"
                            {(yyval.node) = newNode(yylineno, T_DEF, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1398 "syntax.tab.c"
    break;

  case 35: /* DecList: Dec  */
#line 96 "syntax.y"
             {(yyval.node) = newNode(yylineno, T_DECLIST, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1404 "syntax.tab.c"
    break;

  case 36: /* DecList: Dec COMMA DecList  */
#line 97 "syntax.y"
                        {(yyval.node) = newNode(yylineno, T_DECLIST, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1410 "syntax.tab.c"
    break;

  case 37: /* Dec: VarDec  */
#line 99 "syntax.y"
            {(yyval.node) = newNode(yylineno, T_DEC, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1416 "syntax.tab.c"
    break;

  case 38: /* Dec: VarDec ASSIGNOP Exp  */
#line 100 "syntax.y"
                          {(yyval.node) = newNode(yylineno, T_DEC, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1422 "syntax.tab.c"
    break;

  case 39: /* Exp: Exp ASSIGNOP Exp  */
#line 103 "syntax.y"
                      {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1428 "syntax.tab.c"
    break;

  case 40: /* Exp: Exp AND Exp  */
#line 104 "syntax.y"
                  {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1434 "syntax.tab.c"
    break;

  case 41: /* Exp: Exp OR Exp  */
#line 105 "syntax.y"
                 {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1440 "syntax.tab.c"
    break;

  case 42: /* Exp: Exp RELOP Exp  */
#line 106 "syntax.y"
                    {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1446 "syntax.tab.c"
    break;

  case 43: /* Exp: Exp PLUS Exp  */
#line 107 "syntax.y"
                   {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1452 "syntax.tab.c"
    break;

  case 44: /* Exp: Exp MINUS Exp  */
#line 108 "syntax.y"
                    {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1458 "syntax.tab.c"
    break;

  case 45: /* Exp: Exp STAR Exp  */
#line 109 "syntax.y"
                   {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1464 "syntax.tab.c"
    break;

  case 46: /* Exp: Exp DIV Exp  */
#line 110 "syntax.y"
                  {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1470 "syntax.tab.c"
    break;

  case 47: /* Exp: LP Exp RP  */
#line 111 "syntax.y"
                {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1476 "syntax.tab.c"
    break;

  case 48: /* Exp: MINUS Exp  */
#line 112 "syntax.y"
                {(yyval.node) = newNode(yylineno, T_EXP, NULL, 2, (Node*[]) {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 1482 "syntax.tab.c"
    break;

  case 49: /* Exp: NOT Exp  */
#line 113 "syntax.y"
              {(yyval.node) = newNode(yylineno, T_EXP, NULL, 2, (Node*[]) {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 1488 "syntax.tab.c"
    break;

  case 50: /* Exp: ID LP Args RP  */
#line 114 "syntax.y"
                    {(yyval.node) = newNode(yylineno, T_EXP, NULL, 4, (Node*[]) {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1494 "syntax.tab.c"
    break;

  case 51: /* Exp: ID LP RP  */
#line 115 "syntax.y"
               {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1500 "syntax.tab.c"
    break;

  case 52: /* Exp: Exp LB Exp RB  */
#line 116 "syntax.y"
                    {(yyval.node) = newNode(yylineno, T_EXP, NULL, 4, (Node*[]) {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1506 "syntax.tab.c"
    break;

  case 53: /* Exp: Exp DOT ID  */
#line 117 "syntax.y"
                 {(yyval.node) = newNode(yylineno, T_EXP, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1512 "syntax.tab.c"
    break;

  case 54: /* Exp: ID  */
#line 118 "syntax.y"
         {(yyval.node) = newNode(yylineno, T_EXP, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1518 "syntax.tab.c"
    break;

  case 55: /* Exp: INT  */
#line 119 "syntax.y"
          {(yyval.node) = newNode(yylineno, T_EXP, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1524 "syntax.tab.c"
    break;

  case 56: /* Exp: FLOAT  */
#line 120 "syntax.y"
            {(yyval.node) = newNode(yylineno, T_EXP, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1530 "syntax.tab.c"
    break;

  case 57: /* Args: Exp COMMA Args  */
#line 122 "syntax.y"
                     {(yyval.node) = newNode(yylineno, T_ARGS, NULL, 3, (Node*[]) {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});}
#line 1536 "syntax.tab.c"
    break;

  case 58: /* Args: Exp  */
#line 123 "syntax.y"
          {(yyval.node) = newNode(yylineno, T_ARGS, NULL, 1, (Node*[]) {(yyvsp[0].node)});}
#line 1542 "syntax.tab.c"
    break;


#line 1546 "syntax.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 125 "syntax.y"

#include <stdio.h>

void yyerror(char *msg) {
    fprintf(stderr, "Error type B at line %d: %s.\n", yylineno, msg);
}