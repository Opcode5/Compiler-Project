
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "a.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	int data[5000];
	int bit[100]; 
	int c=0; 


/* Line 189 of yacc.c  */
#line 83 "a.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELSE = 261,
     MAIN = 262,
     INT = 263,
     FLOAT = 264,
     CHAR = 265,
     LB = 266,
     RB = 267,
     SWITCH = 268,
     CASE = 269,
     DEFAULT = 270,
     BREAK = 271,
     FOR = 272,
     COMPLETE = 273,
     LCM = 274,
     LESS = 275,
     GREATER = 276,
     PRINT = 277,
     SIN = 278,
     COS = 279,
     TAN = 280,
     LOG = 281,
     BIGMOD = 282,
     LOG10 = 283,
     BINARY = 284,
     FACTORIAL = 285,
     PRIME = 286,
     GCD = 287,
     PLUS = 288,
     MINUS = 289,
     DIV = 290,
     MUL = 291,
     REMAINDER = 292,
     WHILE = 293,
     IFX = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 164 "a.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   489

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNRULES -- Number of states.  */
#define YYNSTATES  197

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    45,     2,     2,
      42,    44,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    40,
       2,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    47,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    14,    17,    20,    25,
      42,    57,    72,    77,    84,    97,   119,   121,   127,   133,
     139,   147,   155,   158,   160,   172,   184,   191,   194,   196,
     198,   200,   201,   207,   211,   213,   217,   219,   221,   225,
     229,   233,   237,   241,   245,   249,   253,   256,   259,   262,
     265,   268,   277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,     7,    11,    50,    12,    -1,    -1,    50,
      51,    -1,    40,    -1,    54,    40,    -1,    57,    40,    -1,
       4,    41,    57,    40,    -1,    17,    42,     3,    43,     3,
      43,     3,    44,    11,     4,    41,    57,    34,    57,    40,
      12,    -1,    38,    42,     4,    21,     3,    44,    11,     4,
      41,    57,    34,     3,    40,    12,    -1,    38,    42,     4,
      20,     3,    44,    11,     4,    41,    57,    33,     3,    40,
      12,    -1,    13,    11,    52,    12,    -1,    37,    42,    57,
      45,    57,    44,    -1,     5,    42,    57,    44,    11,     4,
      41,    57,    36,    57,    40,    12,    -1,     5,    42,    57,
      44,    11,     4,    41,    57,    36,    57,    40,    12,     6,
      11,     4,    41,    57,    35,    57,    40,    12,    -1,    18,
      -1,    22,    42,    57,    44,    40,    -1,    30,    42,    57,
      44,    40,    -1,    31,    42,    57,    44,    40,    -1,    32,
      42,    57,    43,    57,    44,    40,    -1,    19,    42,    57,
      43,    57,    44,    40,    -1,    52,    53,    -1,    53,    -1,
      14,    42,    57,    20,    57,    44,    46,     4,    41,    57,
      40,    -1,    14,    42,    57,    21,    57,    44,    46,     4,
      41,    57,    40,    -1,    15,    46,     4,    41,    57,    40,
      -1,    55,    56,    -1,     8,    -1,     9,    -1,    10,    -1,
      -1,    56,    43,     4,    41,     3,    -1,    56,    43,     4,
      -1,     4,    -1,     4,    41,     3,    -1,     3,    -1,     4,
      -1,    57,    33,    57,    -1,    57,    34,    57,    -1,    57,
      36,    57,    -1,    57,    35,    57,    -1,    57,    47,    57,
      -1,    57,    20,    57,    -1,    57,    21,    57,    -1,    42,
      57,    44,    -1,    23,    57,    -1,    24,    57,    -1,    25,
      57,    -1,    28,    57,    -1,    26,    57,    -1,    27,    42,
      57,    43,    57,    43,    57,    44,    -1,    29,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    25,    25,    28,    30,    33,    34,    36,    37,    44,
      55,    67,    79,    80,    84,    98,   119,   122,   126,   132,
     143,   157,   173,   174,   176,   184,   192,   203,   206,   207,
     208,   210,   212,   217,   218,   219,   226,   228,   230,   232,
     234,   236,   247,   248,   250,   252,   253,   257,   261,   265,
     268,   271,   289
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELSE", "MAIN",
  "INT", "FLOAT", "CHAR", "LB", "RB", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "FOR", "COMPLETE", "LCM", "LESS", "GREATER", "PRINT", "SIN", "COS",
  "TAN", "LOG", "BIGMOD", "LOG10", "BINARY", "FACTORIAL", "PRIME", "GCD",
  "PLUS", "MINUS", "DIV", "MUL", "REMAINDER", "WHILE", "IFX", "';'", "'='",
  "'('", "','", "')'", "'%'", "':'", "'^'", "$accept", "program",
  "cstatement", "statement", "case", "aa", "declaration", "TYPE", "ID1",
  "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      59,    61,    40,    44,    41,    37,    58,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    52,    52,    53,    53,    53,    54,    55,    55,
      55,    56,    56,    56,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     1,     2,     2,     4,    16,
      14,    14,     4,     6,    12,    21,     1,     5,     5,     5,
       7,     7,     2,     1,    11,    11,     6,     2,     1,     1,
       1,     0,     5,     3,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     8,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,    36,    37,     0,    28,
      29,    30,     2,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     4,     0,    31,     0,     0,     0,     0,     0,
       0,     0,    37,    46,    47,    48,    50,     0,    49,    52,
       0,     0,     0,     0,     0,     0,     6,    34,    27,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,    43,    44,    38,    39,    41,
      40,    42,     8,     0,     0,     0,    12,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    33,
       0,     0,     0,     0,     0,    17,     0,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,    32,     0,    43,    44,     0,
       0,    21,     0,    20,     0,     0,     0,     0,     0,    26,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,    36,    36,     0,    24,
      25,     0,     0,     0,     0,    39,    11,    10,     0,     0,
       0,     9,     0,     0,    41,     0,    15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     5,    32,    71,    72,    33,    34,    58,    87
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -39
static const yytype_int16 yypact[] =
{
      -6,     1,    30,   -39,   -39,   174,   -39,    -2,    -1,   -39,
     -39,   -39,   -39,    39,    14,   -39,    20,    28,    40,    40,
      40,    40,    37,    40,    40,    41,    44,    45,    46,    49,
     -39,    40,   -39,    52,    89,   -13,    40,    40,    -4,    92,
      40,    40,   -39,   369,   369,   369,   369,    40,   369,   369,
      40,    40,    40,    40,    93,    82,   -39,    57,    58,    40,
      40,    40,    40,    40,    40,   -39,    40,   112,   187,    69,
      67,    66,   -39,    71,   122,   204,   209,   226,   233,   251,
     255,     4,   -39,   109,   115,   -30,   -30,     2,     2,    77,
      77,   369,   -39,   116,    40,   124,   -39,   -39,   127,    40,
      94,    40,    95,    96,    40,    40,   134,   135,   -39,    98,
     136,   377,   100,   101,   272,   -39,   289,   -39,   -39,   293,
     310,   106,   107,   157,   120,    40,    40,    40,   164,   128,
      40,   130,   -39,   160,   161,   -39,    40,   427,   442,   327,
     129,   -39,   335,   -39,   170,   171,   394,   143,   144,   -39,
     169,   -39,   140,   153,    40,   191,   205,   206,    40,    40,
     -38,   172,   176,   177,   398,   402,   203,    40,    40,    40,
      48,    81,   213,   352,   360,   419,   186,   188,   216,   -39,
     -39,    40,   220,   221,   231,    -7,   -39,   -39,   195,   229,
      40,   -39,   423,    40,    13,   237,   -39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -39,   -39,   -39,   -39,   -39,   179,   -39,   -39,   -39,    -5
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      35,     1,   166,    61,    62,    63,    64,    59,    60,    66,
      69,    70,     3,    43,    44,    45,    46,    66,    48,    49,
      61,    62,    63,    64,   106,   107,    55,    65,    63,    64,
       4,    67,    68,   189,    66,    74,    75,    63,    64,    36,
      66,    37,    76,     6,    42,    77,    78,    79,    80,    66,
      38,   176,    42,   195,    85,    86,    39,    88,    89,    90,
      66,    91,    40,    18,    19,    20,    21,    22,    23,    24,
      41,    18,    19,    20,    21,    22,    23,    24,    96,    47,
      69,    70,    31,    50,   177,    42,    51,    52,    53,   111,
      31,    54,    56,    57,   114,    73,   116,    81,    83,   119,
     120,    84,    59,    60,    18,    19,    20,    21,    22,    23,
      24,    94,   108,    95,    98,    61,    62,    63,    64,   109,
     137,   138,   139,    31,    66,   142,    82,   110,   112,    66,
     113,   146,    59,    60,   115,   117,   118,   121,   122,   123,
     124,   127,    59,    60,   128,    61,    62,    63,    64,   160,
     133,   134,    92,   164,   165,    61,    62,    63,    64,    66,
     135,   136,   173,   174,   175,    99,    88,   140,   141,    66,
     143,   144,   145,   150,   152,   153,   185,     6,     7,     8,
     157,   158,     9,    10,    11,   192,    12,    13,   194,   155,
     156,    14,    15,    16,   159,   161,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    59,    60,   162,
     163,    28,    29,   167,    30,   172,    31,   168,   169,   178,
      61,    62,    63,    64,    59,    60,   182,   184,   183,    59,
      60,    93,   186,   187,    66,   188,   190,    61,    62,    63,
      64,   191,    61,    62,    63,    64,    59,    60,   100,   196,
      97,    66,   101,    59,    60,     0,    66,     0,     0,    61,
      62,    63,    64,     0,     0,     0,    61,    62,    63,    64,
     102,    59,    60,    66,     0,    59,    60,   103,     0,     0,
      66,     0,     0,     0,    61,    62,    63,    64,    61,    62,
      63,    64,    59,    60,   104,     0,     0,     0,    66,     0,
     105,     0,    66,     0,     0,    61,    62,    63,    64,    59,
      60,     0,     0,    59,    60,     0,   129,     0,     0,    66,
       0,     0,    61,    62,    63,    64,    61,    62,    63,    64,
      59,    60,   130,     0,     0,     0,    66,   131,     0,     0,
      66,     0,     0,    61,    62,    63,    64,    59,    60,     0,
       0,     0,     0,     0,   132,    59,    60,    66,     0,     0,
      61,    62,    63,    64,     0,     0,     0,   149,    61,    62,
      63,    64,    59,    60,    66,     0,     0,     0,     0,   151,
      59,    60,    66,     0,     0,    61,    62,    63,    64,    59,
      60,     0,   179,    61,    62,    63,    64,   125,   126,    66,
     180,     0,    61,    62,    63,    64,     0,    66,     0,     0,
      61,    62,    63,    64,    59,    60,    66,     0,    59,    60,
       0,     0,    59,    60,    66,     0,     0,    61,    62,    63,
     154,   170,    62,    63,    64,    61,   171,    63,    64,    59,
      60,    66,     0,    59,    60,    66,     0,     0,     0,    66,
       0,     0,    61,   181,    63,    64,    61,    62,   193,    64,
      61,    62,    63,    64,     0,     0,    66,     0,     0,     0,
      66,   147,     0,     0,    66,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,   148,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
       5,     7,    40,    33,    34,    35,    36,    20,    21,    47,
      14,    15,    11,    18,    19,    20,    21,    47,    23,    24,
      33,    34,    35,    36,    20,    21,    31,    40,    35,    36,
       0,    36,    37,    40,    47,    40,    41,    35,    36,    41,
      47,    42,    47,     3,     4,    50,    51,    52,    53,    47,
      11,     3,     4,    40,    59,    60,    42,    62,    63,    64,
      47,    66,    42,    23,    24,    25,    26,    27,    28,    29,
      42,    23,    24,    25,    26,    27,    28,    29,    12,    42,
      14,    15,    42,    42,     3,     4,    42,    42,    42,    94,
      42,    42,    40,     4,    99,     3,   101,     4,    41,   104,
     105,    43,    20,    21,    23,    24,    25,    26,    27,    28,
      29,    42,     3,    46,    43,    33,    34,    35,    36,     4,
     125,   126,   127,    42,    47,   130,    44,    11,     4,    47,
       3,   136,    20,    21,    40,    40,    40,     3,     3,    41,
       4,    41,    20,    21,    43,    33,    34,    35,    36,   154,
      44,    44,    40,   158,   159,    33,    34,    35,    36,    47,
       3,    41,   167,   168,   169,    43,   171,     3,    40,    47,
      40,    11,    11,    44,     4,     4,   181,     3,     4,     5,
      11,    41,     8,     9,    10,   190,    12,    13,   193,    46,
      46,    17,    18,    19,    41,     4,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    20,    21,     4,
       4,    37,    38,    41,    40,    12,    42,    41,    41,     6,
      33,    34,    35,    36,    20,    21,    40,    11,    40,    20,
      21,    44,    12,    12,    47,     4,    41,    33,    34,    35,
      36,    12,    33,    34,    35,    36,    20,    21,    44,    12,
      71,    47,    43,    20,    21,    -1,    47,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    33,    34,    35,    36,
      44,    20,    21,    47,    -1,    20,    21,    44,    -1,    -1,
      47,    -1,    -1,    -1,    33,    34,    35,    36,    33,    34,
      35,    36,    20,    21,    43,    -1,    -1,    -1,    47,    -1,
      45,    -1,    47,    -1,    -1,    33,    34,    35,    36,    20,
      21,    -1,    -1,    20,    21,    -1,    44,    -1,    -1,    47,
      -1,    -1,    33,    34,    35,    36,    33,    34,    35,    36,
      20,    21,    43,    -1,    -1,    -1,    47,    44,    -1,    -1,
      47,    -1,    -1,    33,    34,    35,    36,    20,    21,    -1,
      -1,    -1,    -1,    -1,    44,    20,    21,    47,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    33,    34,
      35,    36,    20,    21,    47,    -1,    -1,    -1,    -1,    44,
      20,    21,    47,    -1,    -1,    33,    34,    35,    36,    20,
      21,    -1,    40,    33,    34,    35,    36,    20,    21,    47,
      40,    -1,    33,    34,    35,    36,    -1,    47,    -1,    -1,
      33,    34,    35,    36,    20,    21,    47,    -1,    20,    21,
      -1,    -1,    20,    21,    47,    -1,    -1,    33,    34,    35,
      36,    33,    34,    35,    36,    33,    34,    35,    36,    20,
      21,    47,    -1,    20,    21,    47,    -1,    -1,    -1,    47,
      -1,    -1,    33,    34,    35,    36,    33,    34,    35,    36,
      33,    34,    35,    36,    -1,    -1,    47,    -1,    -1,    -1,
      47,    44,    -1,    -1,    47,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    49,    11,     0,    50,     3,     4,     5,     8,
       9,    10,    12,    13,    17,    18,    19,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    37,    38,
      40,    42,    51,    54,    55,    57,    41,    42,    11,    42,
      42,    42,     4,    57,    57,    57,    57,    42,    57,    57,
      42,    42,    42,    42,    42,    57,    40,     4,    56,    20,
      21,    33,    34,    35,    36,    40,    47,    57,    57,    14,
      15,    52,    53,     3,    57,    57,    57,    57,    57,    57,
      57,     4,    44,    41,    43,    57,    57,    57,    57,    57,
      57,    57,    40,    44,    42,    46,    12,    53,    43,    43,
      44,    43,    44,    44,    43,    45,    20,    21,     3,     4,
      11,    57,     4,     3,    57,    40,    57,    40,    40,    57,
      57,     3,     3,    41,     4,    20,    21,    41,    43,    44,
      43,    44,    44,    44,    44,     3,    41,    57,    57,    57,
       3,    40,    57,    40,    11,    11,    57,    44,    44,    40,
      44,    44,     4,     4,    36,    46,    46,    11,    41,    41,
      57,     4,     4,     4,    57,    57,    40,    41,    41,    41,
      33,    34,    12,    57,    57,    57,     3,     3,     6,    40,
      40,    34,    40,    40,    11,    57,    12,    12,     4,    40,
      41,    12,    57,    35,    57,    40,    12
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1455 of yacc.c  */
#line 34 "a.y"
    { ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 36 "a.y"
    { ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 37 "a.y"
    { 
								data[(yyvsp[(1) - (4)])] =(yyvsp[(3) - (4)]); 
								printf("Value of the variable: %d\t\n",(yyvsp[(3) - (4)]));
								(yyval)=(yyvsp[(3) - (4)]);
							;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 45 "a.y"
    {
								printf("\n");
								int i;
								printf("loop:\n");
								for(i=(yyvsp[(3) - (16)]) ; i<(yyvsp[(5) - (16)]) ; i+=(yyvsp[(7) - (16)])) 
								{
									data[(yyvsp[(10) - (16)])]-=(yyvsp[(14) - (16)]); 
									printf("i= %d and value inside loop is %d\n",i,data[(yyvsp[(10) - (16)])]);
								}
							;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 56 "a.y"
    {
								printf("\n");
								int temp=data[(yyvsp[(3) - (14)])]; 
								while(temp)
								{
									temp-=(yyvsp[(12) - (14)]); 
									data[(yyvsp[(3) - (14)])]-=(yyvsp[(12) - (14)]);
									printf("value inside while loop = %d\n",data[(yyvsp[(3) - (14)])]);
								}
								
							;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 68 "a.y"
    {
								printf("\n");
								int temp=data[(yyvsp[(3) - (14)])]; 
								while(temp<(yyvsp[(5) - (14)]))
								{
									temp+=(yyvsp[(12) - (14)]); 
									data[(yyvsp[(3) - (14)])]+=(yyvsp[(12) - (14)]);
									printf("value inside while loop = %d\n",data[(yyvsp[(3) - (14)])]);
								}
								
							;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 81 "a.y"
    {
								printf("value of (%d %c %d) is %d\n",(yyvsp[(3) - (6)]),'%',(yyvsp[(5) - (6)]),(yyvsp[(3) - (6)])%(yyvsp[(5) - (6)]));
							;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 85 "a.y"
    {
								
								if((yyvsp[(3) - (12)]))
								{
									data[(yyvsp[(6) - (12)])]*=(yyvsp[(10) - (12)]); 
									printf("\nvalue of expression in IF: %d\n",data[(yyvsp[(6) - (12)])]);
								}
								else
								{
									printf("condition value zero in IF block\n");
								}
							;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 99 "a.y"
    {
		
								if((yyvsp[(3) - (21)]))
								{
									data[(yyvsp[(6) - (21)])]*=(yyvsp[(10) - (21)]); 
									printf("value of expression in IF: %d\n",data[(yyvsp[(6) - (21)])]);
								}
								else
								{
									if((yyvsp[(19) - (21)])==0)
									{
										printf("division by zero is not possible\n"); 
									}
									else 
									{
										data[(yyvsp[(15) - (21)])]/=(yyvsp[(19) - (21)]); 
										printf("value of expression in ELSE: %d\n",data[(yyvsp[(15) - (21)])]);	
									}
								}
							;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 119 "a.y"
    {
								printf("successful compilation!!!");
							;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 123 "a.y"
    {
								printf("Print Expression %d\n",(yyvsp[(3) - (5)]));
							;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 127 "a.y"
    {
								int fact=1; 
								for(int i=1;i<=(yyvsp[(3) - (5)]);i++) fact*=i; 
								printf("value of %d! is %d\n",(yyvsp[(3) - (5)]),fact); 
							;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 133 "a.y"
    {
	
								int ck=0; 
								for(int i=2;i<(yyvsp[(3) - (5)]);i++)
								{
									if((yyvsp[(3) - (5)])%i==0) ck=1; 
								}
								if(ck) printf("%d is not a prime number\n",(yyvsp[(3) - (5)]));
								else printf("%d is a prime number\n",(yyvsp[(3) - (5)]));
							;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 144 "a.y"
    {
								int temp=(yyvsp[(3) - (7)]); 
								if((yyvsp[(5) - (7)])<temp) temp=(yyvsp[(5) - (7)]); 
								for(int i=temp;i>=1;i--)
								{
									if((yyvsp[(3) - (7)])%i==0 && (yyvsp[(5) - (7)])%i==0)
									{
										
										printf("gcd of %d and %d is %d\n",(yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),i);
										break; 
									}
								}				
							;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 158 "a.y"
    {
								int temp=(yyvsp[(3) - (7)]); 
								if((yyvsp[(5) - (7)])>temp) temp=(yyvsp[(5) - (7)]); 
								for(int i=temp;i;i++)
								{
									if(i%(yyvsp[(3) - (7)])==0 && i%(yyvsp[(5) - (7)])==0)
									{
										printf("lcm of %d and %d is %d\n",(yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),i);
										break; 
									}
								}				
							;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 177 "a.y"
    {
								if((yyvsp[(3) - (11)])<(yyvsp[(5) - (11)]))
								{
									data[(yyvsp[(8) - (11)])]=(yyvsp[(10) - (11)]); 
									c=1; 
								}
							;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 185 "a.y"
    {
								if((yyvsp[(3) - (11)])>(yyvsp[(5) - (11)]) && c==0)
								{
									data[(yyvsp[(8) - (11)])]=(yyvsp[(10) - (11)]); 
									c=2;
								}
							;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 193 "a.y"
    {
								if(c==0)
								{
									data[(yyvsp[(3) - (6)])]=(yyvsp[(5) - (6)]); 
									c=3;  
								}
							;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 212 "a.y"
    { 
								data[(yyvsp[(3) - (5)])] =(yyvsp[(5) - (5)]); 
								printf("Value of the variable: %d\t\n",(yyvsp[(5) - (5)]));
								(yyval)=(yyvsp[(3) - (5)]);
							;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 219 "a.y"
    { 
								data[(yyvsp[(1) - (3)])] =(yyvsp[(3) - (3)]); 
								printf("Value of the variable: %d\t\n",(yyvsp[(3) - (3)]));
								(yyval)=(yyvsp[(3) - (3)]);
							;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 226 "a.y"
    { (yyval) = (yyvsp[(1) - (1)]); 	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 228 "a.y"
    { (yyval) = data[(yyvsp[(1) - (1)])]; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 230 "a.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 232 "a.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 234 "a.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 236 "a.y"
    { 
									if((yyvsp[(3) - (3)]))
									{
										(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
				  					}
				  					else
				  					{
										(yyval) = 0;
										printf("\ndivision by zero\t");
				  					} 	
				    			;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 247 "a.y"
    { (yyval) = pow((yyvsp[(1) - (3)]) , (yyvsp[(3) - (3)]));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 248 "a.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 250 "a.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 252 "a.y"
    { (yyval) = (yyvsp[(2) - (3)]);	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 253 "a.y"
    {
									printf("Value of Sin(%d) is %lf\n",(yyvsp[(2) - (2)]),sin((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=sin((yyvsp[(2) - (2)])*3.1416/180);
								;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 257 "a.y"
    {
									printf("Value of Cos(%d) is %lf\n",(yyvsp[(2) - (2)]),cos((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=cos((yyvsp[(2) - (2)])*3.1416/180);
								;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 261 "a.y"
    {
									printf("Value of Tan(%d) is %lf\n",(yyvsp[(2) - (2)]),tan((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=tan((yyvsp[(2) - (2)])*3.1416/180);
								;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 265 "a.y"
    {
									printf("Value of Log10(%d) is %lf\n",(yyvsp[(2) - (2)]),(log((yyvsp[(2) - (2)])*1.0)/log(10.0))); (yyval)=(log((yyvsp[(2) - (2)])*1.0)/log(10.0));
								;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 268 "a.y"
    {
									printf("Value of Log(%d) is %lf\n",(yyvsp[(2) - (2)]),(log((yyvsp[(2) - (2)])))); (yyval)=(log((yyvsp[(2) - (2)])));
								;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 272 "a.y"
    {
									long long res = 1;
									long long a = (yyvsp[(3) - (8)]);
									long long b= (yyvsp[(5) - (8)]);
									long long m=(yyvsp[(7) - (8)]);
									while ( b )
									{
										if (b%2== 1) 
										{
											res = ( res * a ) % m;
										}
										a = ( a * a ) % m;
										b = b/ 2;
									}
									printf("Bigmod of %d ^ %d mod %d is = %lld\n",(yyvsp[(3) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(7) - (8)]),res);
									(yyval)=res;
								;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 289 "a.y"
    {
									int val=(yyvsp[(2) - (2)]);
									int cnt=0; 
									while(val)
									{
										bit[cnt]=val%2; 
										cnt++; 
										val/=2; 
									}
									printf("binary expression of %d  is ",(yyvsp[(2) - (2)]));
									for(int i=cnt-1;i>=0;i--) printf("%d",bit[i]); 
									printf("\n"); 
								;}
    break;



/* Line 1455 of yacc.c  */
#line 1993 "a.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 303 "a.y"



yyerror(char *s){
	printf( "%s\n", s);
}

