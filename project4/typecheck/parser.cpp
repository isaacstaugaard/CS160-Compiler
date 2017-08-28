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




/* Copy the first part of user declarations.  */
#line 1 "parser.ypp" /* yacc.c:339  */

    #include <cstdio>
    #include <cstdlib>


    #include "ast.hpp"
    #include "primitive.hpp"
    #include "symtab.hpp"

    #define YYDEBUG 1

    extern Program_ptr ast;
    int yylex(void);
    void yyerror(const char *);

#line 82 "parser.cpp" /* yacc.c:339  */

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
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_OR = 258,
    T_AND = 259,
    T_LT = 260,
    T_LTE = 261,
    T_GT = 262,
    T_GTE = 263,
    T_NOTEQ = 264,
    T_EQEQ = 265,
    T_PLUS = 266,
    T_MINUS = 267,
    T_ID = 268,
    T_STRING = 269,
    T_CHARACTER = 270,
    T_NOT = 271,
    T_BOOL = 272,
    T_CHAR = 273,
    T_INT = 274,
    T_STR = 275,
    T_INTPTR = 276,
    T_CHARPTR = 277,
    T_IF = 278,
    T_ELSE = 279,
    T_WHILE = 280,
    T_VAR = 281,
    T_PROC = 282,
    T_RET = 283,
    T_NULL = 284,
    T_FSLASH = 285,
    T_EQ = 286,
    T_ADDRESS = 287,
    T_DEREF = 288,
    T_TRUE = 289,
    T_FALSE = 290,
    T_INTBIN = 291,
    T_INTOCT = 292,
    T_INTDEC = 293,
    T_INTHEX = 294,
    T_TIMES = 295
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 174 "parser.cpp" /* yacc.c:358  */

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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   484

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,     2,     2,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    45,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,    46,    44,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    51,    56,    63,    67,    72,    76,    81,
      86,    91,    96,   104,   109,   115,   121,   127,   133,   142,
     146,   151,   156,   162,   167,   173,   177,   182,   188,   192,
     197,   202,   207,   211,   216,   221,   226,   231,   236,   242,
     247,   251,   256,   260,   265,   270,   275,   280,   285,   290,
     295,   300,   305,   311,   316,   321,   325,   330,   334,   339,
     343,   349,   353,   358,   362,   366,   371,   377,   382,   387,
     393,   400,   405,   412,   418,   423,   427,   435,   440,   445,
     450,   455,   460,   465,   470,   475,   481,   486,   491,   496,
     501,   507,   513,   521,   526,   532,   537,   542,   547,   554
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_OR", "T_AND", "T_LT", "T_LTE", "T_GT",
  "T_GTE", "T_NOTEQ", "T_EQEQ", "T_PLUS", "T_MINUS", "T_ID", "T_STRING",
  "T_CHARACTER", "T_NOT", "T_BOOL", "T_CHAR", "T_INT", "T_STR", "T_INTPTR",
  "T_CHARPTR", "T_IF", "T_ELSE", "T_WHILE", "T_VAR", "T_PROC", "T_RET",
  "T_NULL", "T_FSLASH", "T_EQ", "T_ADDRESS", "T_DEREF", "T_TRUE",
  "T_FALSE", "T_INTBIN", "T_INTOCT", "T_INTDEC", "T_INTHEX", "T_TIMES",
  "'('", "')'", "'{'", "'}'", "';'", "'|'", "'['", "']'", "','", "':'",
  "$accept", "Start", "Function", "Body", "Body2", "Body3", "Statement",
  "Expression", "Term", "Factor", "Assignment", "Integers", "VariableType",
  "VariableDeclaration", "VariableDeclaration2", "VariableDeclaration3",
  "VariablesDeclaration", "VariablesDeclaration1", "IfWhile", "Else", "ID",
  "IDArrEle", "IDArrAcc", "FunctionStatement", "FunctionExpression1",
  "FunctionExpression", "Return", YY_NULLPTR
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
     295,    40,    41,   123,   125,    59,   124,    91,    93,    44,
      58
};
# endif

#define YYPACT_NINF -162

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-162)))

#define YYTABLE_NINF -69

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -22,     0,    29,   -11,  -162,     5,  -162,     0,    17,    20,
      21,    39,   462,    17,    57,  -162,  -162,  -162,  -162,    19,
    -162,  -162,  -162,  -162,   -15,    53,   220,   462,    38,  -162,
    -162,    70,    63,  -162,  -162,  -162,  -162,  -162,    48,   220,
     404,  -162,  -162,    63,    62,    67,    69,  -162,   255,     0,
     272,   413,   123,  -162,  -162,    85,   429,  -162,    84,   101,
      89,    72,  -162,   255,   255,   255,   462,   255,   255,    88,
    -162,   255,  -162,   255,   255,  -162,  -162,   255,   255,     8,
     114,  -162,  -162,  -162,  -162,   108,  -162,    68,   286,   123,
     429,    96,  -162,  -162,  -162,    99,  -162,  -162,   123,   117,
     219,   255,  -162,  -162,    10,    12,    26,   119,  -162,  -162,
     255,  -162,  -162,  -162,    61,    -4,   255,   255,  -162,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
    -162,  -162,   332,   121,   123,   125,  -162,  -162,   462,   127,
    -162,  -162,    71,   118,    71,   131,  -162,   132,   133,  -162,
      16,  -162,  -162,   114,   114,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,  -162,    71,  -162,  -162,   137,  -162,
     140,  -162,   255,   255,   295,   300,  -162,  -162,  -162,     3,
     146,  -162,   147,   166,   337,   435,  -162,   346,   435,   255,
    -162,  -162,   148,  -162,   166,   359,  -162,   372,  -162,   309,
    -162,   166,  -162,  -162,   375,   323,  -162,  -162,  -162,   381,
    -162
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,    90,     0,     1,     0,    74,     0,
       0,    67,     0,    74,     0,    74,    63,    65,    61,     0,
      62,    66,    69,    73,     0,     0,     0,     0,     0,    75,
      76,     0,     0,    70,    57,    58,    59,    60,     0,     0,
       0,     4,    64,     0,    90,     0,     0,    74,     0,     0,
       0,     0,     0,    18,    16,     0,     0,    14,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     0,    90,
      49,     0,    52,     0,     0,    46,    45,     0,     0,     0,
      27,    38,    40,    47,    48,     0,    22,     0,     0,     0,
       0,     0,    17,    15,    13,     0,    23,    74,     0,     0,
       0,     0,    24,    12,     0,     0,     0,     0,    42,    41,
       0,    44,    50,    43,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    20,     0,     0,     0,     0,     8,    11,     0,     0,
       9,    55,    54,    47,    53,    47,    91,     0,     0,    71,
       0,    39,    51,    25,    26,    31,    30,    34,    33,    36,
      35,    37,    32,    29,    28,    56,    19,     6,     0,     7,
       0,    10,    96,    96,     0,     0,    92,     5,    72,    98,
       0,    95,     0,    78,     0,     0,    80,     0,     0,     0,
      93,    94,     0,    85,    77,     0,    81,     0,    97,     0,
      79,    82,    84,    89,     0,     0,    83,    86,    87,     0,
      88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,   157,   152,   -47,   -42,   -27,   115,   -37,   155,
    -162,   172,    -9,   188,  -162,   -49,    -3,  -162,    15,  -161,
      -1,  -162,  -162,  -162,    32,    18,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    41,    52,    53,    54,   179,    80,    81,
      55,    82,    22,    10,    11,    56,    12,    23,    57,   193,
      83,    59,    84,    60,   180,   181,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    88,    90,    87,    89,     1,     9,   116,   117,    98,
      92,    24,    27,     4,   116,   117,     7,    32,    33,   116,
     117,   116,   117,   116,   117,    93,    24,   116,   117,     6,
      43,    91,    95,   200,    29,    30,    99,   116,   117,    58,
     206,   132,   152,   134,    66,    92,     8,    92,    85,    58,
      58,    58,   189,   118,   147,    58,    92,   107,   146,   -68,
      93,    13,    93,    14,   176,    24,    28,    94,   148,   133,
     135,    93,   116,   117,    34,    35,    36,    37,   139,   153,
     154,    44,   116,   117,    15,    26,    58,    58,    58,    58,
      92,    45,    92,    46,   138,    31,    42,    58,    39,   143,
     145,    49,    94,   151,    94,    93,    40,    93,    64,    63,
      65,    50,   130,    94,   168,   100,   103,   119,   120,   121,
     122,   123,   124,   125,   126,   185,   188,   184,   187,   170,
      96,    58,   101,    58,   102,   110,    44,    24,   195,   129,
     136,   197,    92,   137,   127,    92,    45,    94,    46,    94,
     205,    48,   204,    92,   128,    92,    49,    93,   209,   172,
      93,   140,    92,    79,   149,   167,    50,    92,    93,   169,
      93,   171,   173,    58,    58,   174,   175,    93,   104,   105,
     106,   177,    93,    58,    58,   178,    58,    58,   190,   191,
     192,   199,   114,   115,    58,    62,    58,    51,    58,    94,
      38,    25,    94,    58,    58,   182,     0,   198,    58,     0,
      94,     0,    94,     0,     0,   142,   144,     0,     0,    94,
       0,     0,   108,   109,    94,   150,   111,     0,   112,   113,
      67,    68,    69,   141,    70,    71,     0,    16,    17,    18,
      19,    20,    21,     0,   165,     0,     0,     0,    72,     0,
       0,    73,    74,    75,    76,    34,    35,    36,    37,     0,
      77,     0,     0,     0,     0,    78,    67,    68,    69,     0,
      70,    71,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    72,    44,     0,    73,    74,    75,
      76,    34,    35,    36,    37,    45,    77,    46,    47,    44,
       0,    78,     0,     0,     0,    49,     0,     0,    44,    45,
       0,    46,    97,    44,     0,    50,    86,     0,    45,    49,
      46,    47,    44,    45,     0,    46,    47,     0,    49,    50,
     131,     0,    45,    49,    46,    47,    44,     0,    50,   183,
       0,     0,    49,    50,   186,    44,    45,     0,    46,    97,
      44,     0,    50,   203,     0,    45,    49,    46,     0,    44,
      45,     0,    46,     0,     0,    49,    50,   208,     0,    45,
      49,    46,    44,     0,     0,    50,   166,     0,     0,    49,
      50,   194,    45,     0,    46,    44,     0,     0,    44,    50,
     196,     0,    49,     0,    44,    45,     0,    46,    45,     0,
      46,     0,    50,   201,    45,    49,    46,     0,    49,     0,
       0,     0,     0,     0,    49,    50,   202,    44,    50,   207,
       0,     0,     0,     0,    50,   210,    44,    45,     0,    46,
      47,     1,    48,     0,     0,     0,    45,    49,    46,    47,
       7,    48,    44,     0,     0,     0,    49,    50,    44,     0,
       0,     0,    45,     0,    46,    97,    50,    48,    45,     0,
      46,    97,    49,     0,     0,     0,     0,     0,    49,     0,
       0,     0,    50,     0,     0,     4,     0,     0,    50,    16,
      17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       1,    50,    51,    50,    51,    27,     7,    11,    12,    56,
      52,    12,    15,    13,    11,    12,    27,    26,    27,    11,
      12,    11,    12,    11,    12,    52,    27,    11,    12,     0,
      39,    51,    52,   194,    49,    50,    56,    11,    12,    40,
     201,    88,    46,    90,    47,    87,    41,    89,    49,    50,
      51,    52,    49,    45,    42,    56,    98,    66,    48,    42,
      87,    41,    89,    42,    48,    66,    47,    52,    42,    89,
      90,    98,    11,    12,    36,    37,    38,    39,    98,   116,
     117,    13,    11,    12,    45,    28,    87,    88,    89,    90,
     132,    23,   134,    25,    97,    42,    48,    98,    28,   100,
     101,    33,    87,    42,    89,   132,    43,   134,    41,    47,
      41,    43,    44,    98,   134,    31,    44,     3,     4,     5,
       6,     7,     8,     9,    10,   174,   175,   174,   175,   138,
      45,   132,    31,   134,    45,    47,    13,   138,   185,    31,
      44,   188,   184,    44,    30,   187,    23,   132,    25,   134,
     199,    28,   199,   195,    40,   197,    33,   184,   205,    41,
     187,    44,   204,    48,    45,    44,    43,   209,   195,    44,
     197,    44,    41,   174,   175,    43,    43,   204,    63,    64,
      65,    44,   209,   184,   185,    45,   187,   188,    42,    42,
      24,    43,    77,    78,   195,    43,   197,    40,   199,   184,
      28,    13,   187,   204,   205,   173,    -1,   189,   209,    -1,
     195,    -1,   197,    -1,    -1,   100,   101,    -1,    -1,   204,
      -1,    -1,    67,    68,   209,   110,    71,    -1,    73,    74,
      11,    12,    13,    14,    15,    16,    -1,    17,    18,    19,
      20,    21,    22,    -1,   129,    -1,    -1,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    -1,    -1,    -1,    -1,    46,    11,    12,    13,    -1,
      15,    16,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    29,    13,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    23,    41,    25,    26,    13,
      -1,    46,    -1,    -1,    -1,    33,    -1,    -1,    13,    23,
      -1,    25,    26,    13,    -1,    43,    44,    -1,    23,    33,
      25,    26,    13,    23,    -1,    25,    26,    -1,    33,    43,
      44,    -1,    23,    33,    25,    26,    13,    -1,    43,    44,
      -1,    -1,    33,    43,    44,    13,    23,    -1,    25,    26,
      13,    -1,    43,    44,    -1,    23,    33,    25,    -1,    13,
      23,    -1,    25,    -1,    -1,    33,    43,    44,    -1,    23,
      33,    25,    13,    -1,    -1,    43,    44,    -1,    -1,    33,
      43,    44,    23,    -1,    25,    13,    -1,    -1,    13,    43,
      44,    -1,    33,    -1,    13,    23,    -1,    25,    23,    -1,
      25,    -1,    43,    44,    23,    33,    25,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    33,    43,    44,    13,    43,    44,
      -1,    -1,    -1,    -1,    43,    44,    13,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    23,    33,    25,    26,
      27,    28,    13,    -1,    -1,    -1,    33,    43,    13,    -1,
      -1,    -1,    23,    -1,    25,    26,    43,    28,    23,    -1,
      25,    26,    33,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    43,    -1,    -1,    13,    -1,    -1,    43,    17,
      18,    19,    20,    21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    52,    53,    13,    71,     0,    27,    41,    71,
      64,    65,    67,    41,    42,    45,    17,    18,    19,    20,
      21,    22,    63,    68,    71,    64,    28,    67,    47,    49,
      50,    42,    63,    63,    36,    37,    38,    39,    62,    28,
      43,    54,    48,    63,    13,    23,    25,    26,    28,    33,
      43,    53,    55,    56,    57,    61,    66,    69,    71,    72,
      74,    77,    54,    47,    41,    41,    67,    11,    12,    13,
      15,    16,    29,    32,    33,    34,    35,    41,    46,    58,
      59,    60,    62,    71,    73,    71,    44,    55,    66,    55,
      66,    77,    56,    57,    69,    77,    45,    26,    55,    77,
      31,    31,    45,    44,    58,    58,    58,    63,    60,    60,
      47,    60,    60,    60,    58,    58,    11,    12,    45,     3,
       4,     5,     6,     7,     8,     9,    10,    30,    40,    31,
      44,    44,    55,    77,    55,    77,    44,    44,    67,    77,
      44,    14,    58,    71,    58,    71,    48,    42,    42,    45,
      58,    42,    46,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    58,    44,    44,    77,    44,
      63,    44,    41,    41,    43,    43,    48,    44,    45,    58,
      75,    76,    75,    44,    55,    66,    44,    55,    66,    49,
      42,    42,    24,    70,    44,    55,    44,    55,    76,    43,
      70,    44,    44,    44,    55,    66,    70,    44,    44,    55,
      44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    56,    57,    57,    58,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    61,    61,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      71,    72,    73,    74,    74,    75,    75,    76,    76,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     9,     8,     6,     5,     5,     4,     4,
       5,     4,     3,     2,     1,     2,     1,     2,     1,     4,
       3,     3,     2,     2,     2,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     0,     2,
       4,     4,     5,     2,     0,     2,     2,     7,     6,     8,
       6,     7,     8,     9,     8,     7,     4,     4,     5,     3,
       1,     4,     4,     6,     6,     1,     0,     3,     1,     3
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
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

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
  switch (yyn)
    {
        case 2:
#line 46 "parser.ypp" /* yacc.c:1646  */
    { ast = new ProgramImpl((yyvsp[0]).u_proc_list);
	       /*printf("Parsed with no errors\n") */;}
#line 1450 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 52 "parser.ypp" /* yacc.c:1646  */
    { ((yyvsp[-8]).u_proc_list)->push_back(new ProcImpl((yyvsp[-6]).u_symname, (yyvsp[-4]).u_decl_list, (yyvsp[-1]).u_type, (yyvsp[0]).u_procedure_block));
	      	(yyval) = (yyvsp[-8]);
		/*printf("Function-1 no errors\n");*/ }
#line 1458 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 57 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_proc_list = new std::list<Proc_ptr>;
	        ((yyval).u_proc_list)->push_back(new ProcImpl((yyvsp[-6]).u_symname, (yyvsp[-4]).u_decl_list, (yyvsp[-1]).u_type, (yyvsp[0]).u_procedure_block));
		/*printf("Function-2 no errors\n");*/ }
#line 1466 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 64 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_procedure_block = new Procedure_blockImpl((yyvsp[-4]).u_proc_list, (yyvsp[-3]).u_decl_list, (yyvsp[-2]).u_stat_list, (yyvsp[-1]).u_return_stat);
	       /*printf("Body-1 no errors\n");*/ }
#line 1473 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_procedure_block = new Procedure_blockImpl((yyvsp[-3]).u_proc_list, new std::list<Decl_ptr>, (yyvsp[-2]).u_stat_list, (yyvsp[-1]).u_return_stat);
	       /*printf("Body-2 no errors\n");*/ }
#line 1480 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 73 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_procedure_block = new Procedure_blockImpl((yyvsp[-3]).u_proc_list, (yyvsp[-2]).u_decl_list, new std::list<Stat_ptr>, (yyvsp[-1]).u_return_stat);
	       /*printf("Body-3 no errors\n");*/ }
#line 1487 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_procedure_block = new Procedure_blockImpl((yyvsp[-2]).u_proc_list, new std::list<Decl_ptr>, new std::list<Stat_ptr>, (yyvsp[-1]).u_return_stat);
	       /*printf("Body-4 no errors\n");*/ }
#line 1494 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 82 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_procedure_block = new Procedure_blockImpl(new std::list<Proc_ptr>, (yyvsp[-2]).u_decl_list, new std::list<Stat_ptr>, (yyvsp[-1]).u_return_stat);
	       /*printf("Body-5 no errors\n");*/ }
#line 1501 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 87 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_procedure_block = new Procedure_blockImpl(new std::list<Proc_ptr>, (yyvsp[-3]).u_decl_list, (yyvsp[-2]).u_stat_list, (yyvsp[-1]).u_return_stat);
	       /*printf("Body-6 no errors\n");*/ }
#line 1508 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_procedure_block = new Procedure_blockImpl(new std::list<Proc_ptr>, new std::list<Decl_ptr>, (yyvsp[-2]).u_stat_list, (yyvsp[-1]).u_return_stat);
	       /*printf("Body-7 no errors\n");*/ }
#line 1515 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 97 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_procedure_block = new Procedure_blockImpl(new std::list<Proc_ptr>, new std::list<Decl_ptr>, new std::list<Stat_ptr>, (yyvsp[-1]).u_return_stat);
	       /*printf("Body-8 no errors\n");*/ }
#line 1522 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 105 "parser.ypp" /* yacc.c:1646  */
    { ((yyvsp[-1]).u_stat_list)->push_back((yyvsp[0]).u_stat);
	      	(yyval) = (yyvsp[-1]);
		 /*printf("Body2-1 no errors\n");*/ }
#line 1530 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat_list = new std::list<Stat_ptr>;
	      	((yyval).u_stat_list)->push_back((yyvsp[0]).u_stat);
		 /*printf("Body2-2 no errors\n");*/ }
#line 1538 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 116 "parser.ypp" /* yacc.c:1646  */
    { ((yyvsp[-1]).u_stat_list)->push_back((yyvsp[0]).u_stat);
	      	(yyval) = (yyvsp[-1]);
		 /*printf("Body2-3 no errors\n");*/ }
#line 1546 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 122 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat_list = new std::list<Stat_ptr>;
	      	((yyval).u_stat_list)->push_back((yyvsp[0]).u_stat);
		 /*printf("Body2-4 no errors\n");*/ }
#line 1554 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 128 "parser.ypp" /* yacc.c:1646  */
    { ((yyvsp[-1]).u_stat_list)->push_back((yyvsp[0]).u_stat);
	      	(yyval) = (yyvsp[-1]);
		 /*printf("Body2-5 no errors\n");*/ }
#line 1562 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 134 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat_list = new std::list<Stat_ptr>;
	      	((yyval).u_stat_list)->push_back((yyvsp[0]).u_stat);
		 /*printf("Body2-6 no errors\n");*/ }
#line 1570 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 143 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new CodeBlock(new Nested_blockImpl((yyvsp[-2]).u_decl_list, (yyvsp[-1]).u_stat_list));
	       /*printf("Body3-1 no errors\n");*/ }
#line 1577 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 147 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new CodeBlock(new Nested_blockImpl((yyvsp[-1]).u_decl_list, new std::list<Stat_ptr>));
	       /*printf("Body3-2 no errors\n");*/ }
#line 1584 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 152 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new CodeBlock(new Nested_blockImpl(new std::list<Decl_ptr>,(yyvsp[-1]).u_stat_list));
	       /*printf("Body3-3 no errors\n");*/ }
#line 1591 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 157 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new CodeBlock(new Nested_blockImpl(new std::list<Decl_ptr>,new std::list<Stat_ptr>));
	       /*printf("Body3-4 no errors\n");*/ }
#line 1598 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 163 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = (yyvsp[-1]).u_stat;
	       /*printf("Statement-1 no errors\n");*/ }
#line 1605 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 168 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = (yyvsp[-1]).u_stat;
	       /*printf("Statement-2 no errors\n");*/ }
#line 1612 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 174 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Plus((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Expression-1 no errors\n");*/ }
#line 1619 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 178 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Minus((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Expression-2 no errors\n");*/ }
#line 1626 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 183 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = (yyvsp[0]).u_expr;
	       /*printf("Expression-3 no errors\n");*/ }
#line 1633 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 189 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Times((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-1 no errors\n");*/ }
#line 1640 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 193 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Div((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-2 no errors\n");*/ }
#line 1647 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 198 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new And((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-3 no errors\n");*/ }
#line 1654 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 203 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Or((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-4 no errors\n");*/ }
#line 1661 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 208 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Compare((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-5 no errors\n");*/ }
#line 1668 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 212 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Lteq((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-6 no errors\n");*/ }
#line 1675 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 217 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Lt((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-7 no errors\n");*/ }
#line 1682 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 222 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Gteq((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-8 no errors\n");*/ }
#line 1689 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 227 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Gt((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-9 no errors\n");*/ }
#line 1696 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 232 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Noteq((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);
	       /*printf("Term-10 no errors\n");*/ }
#line 1703 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 237 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = (yyvsp[0]).u_expr;
	       /*printf("Term-11 no errors\n");*/ }
#line 1710 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 243 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = (yyvsp[-1]).u_expr;
	       /*printf("Factor-1 no errors\n");*/ }
#line 1717 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 248 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new IntLit((yyvsp[0]).u_primitive);
	       /*printf("Factor-2 no errors\n");*/ }
#line 1724 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 252 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Uminus((yyvsp[0]).u_expr);
	       /*printf("Factor-3 no errors\n");*/ }
#line 1731 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 257 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = (yyvsp[0]).u_expr;
	       /*printf("Factor-4 no errors\n");*/ }
#line 1738 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 261 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Deref((yyvsp[0]).u_expr);
	       /*printf("Factor-5 no errors\n");*/ }
#line 1745 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 266 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Not((yyvsp[0]).u_expr);
	       /*printf("Factor-6 no errors\n");*/ }
#line 1752 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 271 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new BoolLit(new Primitive(yylval.u_base_int));
	       /*printf("Factor-7 no errors\n");*/ }
#line 1759 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 276 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new BoolLit(new Primitive(yylval.u_base_int));
	       /*printf("Factor-8 no errors\n");*/ }
#line 1766 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 281 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new Ident((yyvsp[0]).u_symname);
	       /*printf("Factor-9 no errors\n");*/ }
#line 1773 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 286 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = (yyvsp[0]).u_expr;
	       /*printf("Factor-10 no errors\n");*/ }
#line 1780 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 291 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new CharLit(new Primitive(yylval.u_base_int));
	       /*printf("Factor-11 no errors\n");*/ }
#line 1787 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 296 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new AddressOf((yyvsp[0]).u_lhs);
	       /*printf("Factor-12 no errors\n");*/ }
#line 1794 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 301 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new AbsoluteValue((yyvsp[-1]).u_expr);
	       /*printf("Factor-13 no errors\n");*/ }
#line 1801 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 306 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new NullLit();
	       /*printf("Factor-14 no errors\n");*/ }
#line 1808 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 312 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new Assignment((yyvsp[-2]).u_lhs, (yyvsp[0]).u_expr);
	       /*printf("Assignment-1 no errors\n");*/ }
#line 1815 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 317 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new Assignment(new Variable((yyvsp[-2]).u_symname), (yyvsp[0]).u_expr);
	       /*printf("Assignment-2 no errors\n");*/ }
#line 1822 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 322 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new StringAssignment(new Variable((yyvsp[-2]).u_symname), new StringPrimitive(yylval.u_base_charptr));
	       /*printf("Assignment-3 no errors\n");*/ }
#line 1829 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 326 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new Assignment(new DerefVariable((yyvsp[-2]).u_symname), (yyvsp[0]).u_expr); }
#line 1835 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 331 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_primitive = new Primitive(yylval.u_base_int);
	       /*printf("Integers-1 no errors\n");*/ }
#line 1842 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 335 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_primitive = new Primitive(yylval.u_base_int);
	       /*printf("Integers-2 no errors\n");*/ }
#line 1849 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 340 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_primitive = new Primitive(yylval.u_base_int);
	       /*printf("Integers-3 no errors\n");*/ }
#line 1856 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 344 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_primitive = new Primitive(yylval.u_base_int);
	       /*printf("Integers-4 no errors\n");*/ }
#line 1863 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 350 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_type = new TInteger();
	       /*printf("VariableType-1 no errors\n");*/ }
#line 1870 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 354 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_type = new TIntPtr();
	       /*printf("VariableType-2 no errors\n");*/ }
#line 1877 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 359 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_type = new TBoolean();
	       /*printf("VariableType-3 no errors\n");*/ }
#line 1884 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 363 "parser.ypp" /* yacc.c:1646  */
    {	(yyval).u_type = new TString((yyvsp[-1]).u_primitive);
	       /*printf("VariableType-4 no errors\n");*/ }
#line 1891 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 367 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_type = new TCharacter();
	       /*printf("VariableType-5 no errors\n");*/ }
#line 1898 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 372 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_type = new TCharPtr();
	       /*printf("VariableType-6 no errors\n");*/ }
#line 1905 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 378 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_decl_list = (yyvsp[0]).u_decl_list;
		      /*printf("VariableDeclaration-1 no errors\n");*/ }
#line 1912 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 382 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_decl_list = new std::list<Decl_ptr>;
		      /*printf("VariableDeclaration-2 no errors\n");*/ }
#line 1919 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 388 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_decl_list = new std::list<Decl_ptr>; 
		       ((yyval).u_decl_list)->push_back(new DeclImpl((yyvsp[-1]).u_symname_list, (yyvsp[0]).u_type));
		        /*printf("VariableDelcaration2-1 no errors\n");*/ }
#line 1927 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 394 "parser.ypp" /* yacc.c:1646  */
    {	((yyvsp[-3]).u_decl_list)->push_back(new DeclImpl((yyvsp[-1]).u_symname_list, (yyvsp[0]).u_type)); 
			(yyval) = (yyvsp[-3]);
			 /*printf("VariableDeclaration2-2 no errors\n");*/ }
#line 1935 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 401 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_decl_list = new std::list<Decl_ptr>;
		      	((yyval).u_decl_list)->push_back(new DeclImpl((yyvsp[-2]).u_symname_list, (yyvsp[-1]).u_type));
			 /*printf("VariableDeclaration3-1 no errors\n");*/ }
#line 1943 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 406 "parser.ypp" /* yacc.c:1646  */
    { ((yyvsp[-4]).u_decl_list)->push_back(new DeclImpl((yyvsp[-2]).u_symname_list, (yyvsp[-1]).u_type));
		      	(yyval) = (yyvsp[-4]);
			 /*printf("VariableDeclaration3-2 no errors\n");*/ }
#line 1951 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 413 "parser.ypp" /* yacc.c:1646  */
    { ((yyvsp[-1]).u_symname_list)->push_back((yyvsp[0]).u_symname);
		       	 (yyval) = (yyvsp[-1]);
			  /*printf("VariablesDeclaration-1 no errors\n");*/ }
#line 1959 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 418 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_symname_list = new std::list<SymName_ptr>;
		        /*printf("VariablesDeclaration-2 no errors\n");*/ }
#line 1966 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 424 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_symname = (yyvsp[-1]).u_symname;
		        /*printf("VariablesDeclaration1-1 no errors\n");*/ }
#line 1973 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 428 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_symname = (yyvsp[-1]).u_symname;
		        /*printf("VariablesDeclaration1-2 no errors\n");*/ }
#line 1980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 436 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new IfNoElse((yyvsp[-4]).u_expr, new Nested_blockImpl(new std::list<Decl_ptr>, (yyvsp[-1]).u_stat_list));
	   	       /*printf("IfWhile-1 no errors\n");*/ }
#line 1987 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 441 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new IfNoElse((yyvsp[-3]).u_expr, new Nested_blockImpl(new std::list<Decl_ptr>, new std::list<Stat_ptr>));
	     	       /*printf("IfWhile-2 no errors\n");*/ }
#line 1994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 446 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new IfWithElse((yyvsp[-5]).u_expr, new Nested_blockImpl(new std::list<Decl_ptr>, (yyvsp[-2]).u_stat_list), (yyvsp[0]).u_nested_block);
	   	       /*printf("IfWhile-3 no errors\n");*/ }
#line 2001 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 451 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new WhileLoop((yyvsp[-3]).u_expr, new Nested_blockImpl(new std::list<Decl_ptr>, new std::list<Stat_ptr>));
	       	       /*printf("IfWhile-4 no errors\n");*/ }
#line 2008 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 456 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new WhileLoop((yyvsp[-4]).u_expr, new Nested_blockImpl(new std::list<Decl_ptr>, (yyvsp[-1]).u_stat_list));
	       	       /*printf("IfWhile-5 no errors\n");*/ }
#line 2015 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 461 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new IfNoElse((yyvsp[-5]).u_expr, new Nested_blockImpl((yyvsp[-2]).u_decl_list, (yyvsp[-1]).u_stat_list));
	       	       /*printf("IfWhile-6 no errors\n");*/ }
#line 2022 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 466 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new IfWithElse((yyvsp[-6]).u_expr, new Nested_blockImpl((yyvsp[-3]).u_decl_list, (yyvsp[-2]).u_stat_list), (yyvsp[0]).u_nested_block);
	     		  /*printf("IfWhile-7 no errors\n");*/ }
#line 2029 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 471 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new WhileLoop((yyvsp[-5]).u_expr, new Nested_blockImpl((yyvsp[-2]).u_decl_list, (yyvsp[-1]).u_stat_list));
	      	       /*printf("IfWhile-8 no errors\n");*/ }
#line 2036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 476 "parser.ypp" /* yacc.c:1646  */
    {	(yyval).u_stat = new IfWithElse((yyvsp[-4]).u_expr, new Nested_blockImpl(new std::list<Decl_ptr>, new std::list<Stat_ptr>), (yyvsp[0]).u_nested_block);
	    	       /*printf("IfWhile-9 no errors\n");*/ }
#line 2043 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 482 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_nested_block = new Nested_blockImpl(new std::list<Decl_ptr>, (yyvsp[-1]).u_stat_list);
	     	       /*printf("Else-1 no errors\n");*/ }
#line 2050 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 487 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_nested_block = new Nested_blockImpl((yyvsp[-1]).u_decl_list, new std::list<Stat_ptr>);
	     	       /*printf("Else-2 no errors\n");*/ }
#line 2057 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 492 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_nested_block = new Nested_blockImpl((yyvsp[-2]).u_decl_list, (yyvsp[-1]).u_stat_list);
	     	       /*printf("Else-3 no errors\n");*/ }
#line 2064 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 497 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_nested_block = new Nested_blockImpl(new std::list<Decl_ptr>, new std::list<Stat_ptr>);
	    	       /*printf("Else-4 no errors\n");*/ }
#line 2071 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 502 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_symname = new SymName(yylval.u_base_charptr);
	      	       /*printf("ID-1 no errors\n");*/ }
#line 2078 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 508 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_lhs = new ArrayElement(new SymName((yyvsp[-3]).u_base_charptr), (yyvsp[-1]).u_expr);
	      	       /*printf("IDArrEle-1 no errors\n");*/ }
#line 2085 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 514 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr = new ArrayAccess(new SymName((yyvsp[-3]).u_base_charptr), (yyvsp[-1]).u_expr);
	     	       /*printf("IDArrAcc-1 no errors\n");*/ }
#line 2092 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 522 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new Call(new Variable((yyvsp[-5]).u_symname), (yyvsp[-3]).u_symname, (yyvsp[-1]).u_expr_list);
		     /*printf("FunctionStatement-1 no errors\n");*/ }
#line 2099 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 527 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_stat = new Call((yyvsp[-5]).u_lhs, (yyvsp[-3]).u_symname, (yyvsp[-1]).u_expr_list);
		     /*printf("FunctionStatement-2 no errors\n");*/ }
#line 2106 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 533 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr_list = (yyvsp[0]).u_expr_list;
		     /*printf("FunctionExpression1-1 no errors\n");*/ }
#line 2113 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 537 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr_list = new std::list<Expr_ptr>;
		     /*printf("FunctionExpression1-2 no errors\n");*/ }
#line 2120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 543 "parser.ypp" /* yacc.c:1646  */
    { ((yyvsp[0]).u_expr_list)->push_back((yyvsp[-2]).u_expr);
		       (yyval) = (yyvsp[0]);
		       /*printf("FunctionExpression-1 no errors\n");*/ }
#line 2128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 548 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_expr_list = new std::list<Expr_ptr>;
		       ((yyval).u_expr_list)->push_back((yyvsp[0]).u_expr) ;
		       /*printf("FunctionExpression-2 no errors\n");*/ }
#line 2136 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 555 "parser.ypp" /* yacc.c:1646  */
    { (yyval).u_return_stat = new Return((yyvsp[-1]).u_expr);
		     /*printf("Return-1 no errors\n");*/ }
#line 2143 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2147 "parser.cpp" /* yacc.c:1646  */
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
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
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

#if !defined yyoverflow || YYERROR_VERBOSE
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
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 560 "parser.ypp" /* yacc.c:1906  */



/** You shall not pass!
 *  You should not  have to do or edit anything past this.
 */


extern int yylineno;


void yyerror(const char *s)
{
    fprintf(stderr, "%s at line %d\n", s, yylineno);
    return;
}
