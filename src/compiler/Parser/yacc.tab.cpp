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
#line 8 "yacc.y" /* yacc.c:339  */

	#define YYERROR_VERBOSE 1
	#define YYDEBUG 1
	
	#include <iostream>
	#include <stack>
	#include <string>
	#include<queue>
	#include "../logger/Logger.h"
	#include "../Error Handler/error_handler.h"
	#include "../Symbol Table/symbol_parser.h"

	extern symbolParser* SPL;

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	Logger l("parser.log");
	void yyerror(const char *);
		


#line 93 "yacc.tab.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacc.tab.h".  */
#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
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
    RANK_SPECIFIER = 258,
    IDENTIFIER = 259,
    INTEGER_LITERAL = 260,
    REAL_LITERAL = 261,
    CHARACTER_LITERAL = 262,
    STRING_LITERAL = 263,
    ABSTRACT = 264,
    AS = 265,
    BASE = 266,
    BOOL = 267,
    BREAK = 268,
    BYTE = 269,
    CASE = 270,
    CATCH = 271,
    CHAR = 272,
    CHECKED = 273,
    CLASS = 274,
    CONST = 275,
    CONTINUE = 276,
    DECIMAL = 277,
    DEFAULT = 278,
    DELEGATE = 279,
    DO = 280,
    DOUBLE = 281,
    ELSE = 282,
    ENUM = 283,
    EVENT = 284,
    EXPLICIT = 285,
    EXTERN = 286,
    FALSE = 287,
    FINALLY = 288,
    FIXED = 289,
    FLOAT = 290,
    FOR = 291,
    FOREACH = 292,
    GOTO = 293,
    IF = 294,
    IMPLICIT = 295,
    IN = 296,
    INT = 297,
    INTERFACE = 298,
    INTERNAL = 299,
    IS = 300,
    LOCK = 301,
    LONG = 302,
    NAMESPACE = 303,
    NEW = 304,
    NULL_LITERAL = 305,
    OBJECT = 306,
    OPERATOR = 307,
    OUT = 308,
    OVERRIDE = 309,
    PARAMS = 310,
    PRIVATE = 311,
    PROTECTED = 312,
    PUBLIC = 313,
    READONLY = 314,
    REF = 315,
    RETURN = 316,
    SBYTE = 317,
    SEALED = 318,
    SHORT = 319,
    SIZEOF = 320,
    STACKALLOC = 321,
    STATIC = 322,
    STRING = 323,
    STRUCT = 324,
    SWITCH = 325,
    THIS = 326,
    THROW = 327,
    TRUE = 328,
    TRY = 329,
    TYPEOF = 330,
    UINT = 331,
    ULONG = 332,
    UNCHECKED = 333,
    UNSAFE = 334,
    USHORT = 335,
    USING = 336,
    VIRTUAL = 337,
    VOID = 338,
    VOLATILE = 339,
    WHILE = 340,
    ASSEMBLY = 341,
    FIELD = 342,
    METHOD = 343,
    MODULE = 344,
    PARAM = 345,
    PROPERTY = 346,
    TYPE = 347,
    GET = 348,
    SET = 349,
    ADD = 350,
    REMOVE = 351,
    COMMA = 352,
    LEFT_BRACKET = 353,
    RIGHT_BRACKET = 354,
    LEFT_BRACKET_GROUP = 355,
    RIGHT_BRACKET_GROUP = 356,
    LEFT_BRACKET_CIRCLE = 357,
    RIGHT_BRACKET_CIRCLE = 358,
    GREATER = 359,
    SMALLER = 360,
    SEMICOLON = 361,
    COLON = 362,
    DOT = 363,
    PLUS = 364,
    MINUS = 365,
    STAR = 366,
    SLASH = 367,
    PERCENT = 368,
    AND = 369,
    OR = 370,
    EXCLAMATION_POINT = 371,
    TILDE = 372,
    QUESTION_MARK = 373,
    POWER = 374,
    EQUAL = 375,
    PLUSEQ = 376,
    MINUSEQ = 377,
    STAREQ = 378,
    DIVEQ = 379,
    MODEQ = 380,
    XOREQ = 381,
    ANDEQ = 382,
    OREQ = 383,
    LTLT = 384,
    GTGT = 385,
    GTGTEQ = 386,
    LTLTEQ = 387,
    EQEQ = 388,
    NOTEQ = 389,
    LEQ = 390,
    GEQ = 391,
    ANDAND = 392,
    OROR = 393,
    PLUSPLUS = 394,
    MINUSMINUS = 395,
    ARROW = 396,
    THEN = 397
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "yacc.y" /* yacc.c:355  */

	struct R{
		int i;
		float f;
		char c;
		char* str;
		int line_no;
		int col_no;

		string *modifier,*base;
		queue<string> *modifiers ,*bases;

		string *identifier;
		queue<string> *identifiers ;
		queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >* types_ids;

		bool known_type;
        
		}r;
	

#line 298 "yacc.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 315 "yacc.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  256
/* YYNRULES -- Number of rules.  */
#define YYNRULES  591
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  987

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   397

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   120,   121,   122,   123,   124,   127,   128,
     134,   138,   143,   144,   148,   149,   153,   154,   155,   159,
     160,   164,   165,   166,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   181,   182,   185,   186,   189,   190,   193,
     194,   195,   198,   199,   202,   206,   210,   211,   214,   215,
     216,   219,   220,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   237,   240,   241,   242,   245,
     246,   249,   250,   253,   254,   257,   258,   261,   262,   265,
     268,   269,   272,   275,   278,   281,   284,   285,   288,   289,
     292,   293,   296,   299,   302,   305,   308,   311,   312,   313,
     314,   315,   318,   319,   320,   321,   324,   327,   330,   331,
     332,   333,   334,   335,   336,   344,   345,   346,   347,   348,
     349,   352,   353,   356,   357,   360,   361,   364,   365,   366,
     367,   370,   371,   372,   375,   376,   377,   380,   381,   382,
     383,   384,   385,   386,   389,   390,   391,   394,   395,   398,
     399,   402,   403,   406,   407,   410,   411,   414,   415,   418,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   434,   435,   438,   441,   445,   446,   447,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   465,   466,   469,   470,   474,   475,   478,   481,   484,
     485,   486,   487,   490,   496,   501,   508,   512,   518,   519,
     520,   523,   526,   529,   530,   533,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     558,   559,   560,   561,   562,   563,   564,   567,   568,   571,
     572,   575,   578,   581,   582,   585,   586,   589,   592,   593,
     596,   597,   600,   601,   602,   603,   606,   609,   610,   611,
     611,   611,   614,   615,   619,   624,   625,   628,   629,   632,
     633,   636,   637,   640,   643,   646,   647,   650,   653,   654,
     655,   656,   657,   660,   661,   664,   665,   668,   669,   670,
     671,   672,   673,   676,   677,   680,   681,   684,   685,   688,
     689,   690,   693,   694,   697,   698,   699,   702,   703,   706,
     709,   712,   715,   718,   721,   722,   726,   729,   730,   733,
     736,   737,   740,   741,   744,   745,   748,   749,   752,   752,
     756,   757,   761,   765,   772,   773,   777,   780,   781,   784,
     785,   788,   789,   792,   793,   796,   797,   800,   801,   804,
     805,   806,   807,   808,   820,   824,   831,   837,   845,   846,
     847,   848,   849,   850,   851,   852,   853,   854,   855,   856,
     857,   858,   869,   868,   877,   878,   881,   882,   883,   886,
     892,   901,   905,   906,   909,   910,   913,   914,   915,   916,
     917,   918,   919,   920,   921,   922,   925,   929,   932,   937,
     945,   949,   953,   961,   964,   968,   972,   981,   982,   985,
     986,   993,   998,  1005,  1010,  1017,  1025,  1035,  1046,  1054,
    1065,  1066,  1067,  1070,  1081,  1087,  1088,  1091,  1092,  1095,
    1096,  1099,  1105,  1111,  1112,  1115,  1116,  1122,  1123,  1126,
    1132,  1138,  1144,  1146,  1149,  1153,  1156,  1157,  1160,  1161,
    1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,
    1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,
    1184,  1185,  1188,  1189,  1192,  1195,  1198,  1199,  1202,  1203,
    1219,  1222,  1223,  1226,  1227,  1232,  1235,  1236,  1239,  1242,
    1245,  1246,  1249,  1250,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1260,  1262,  1267,  1268,  1271,  1272,  1275,  1276,  1282,
    1281,  1289,  1290,  1293,  1296,  1299,  1300,  1303,  1304,  1307,
    1308,  1309,  1310,  1314,  1315,  1318,  1319,  1325,  1322,  1332,
    1328,  1336,  1337,  1338,  1339,  1342,  1347,  1348,  1353,  1356,
    1357,  1360,  1363,  1364,  1367,  1368,  1371,  1372,  1375,  1376,
    1381,  1382,  1387,  1390,  1391,  1394,  1395,  1398,  1399,  1402,
    1405,  1406,  1407,  1408,  1409,  1410,  1411,  1412,  1413,  1416,
    1417,  1420,  1423,  1424,  1427,  1430,  1437,  1440,  1443,  1446,
    1449,  1452,  1460,  1461,  1464,  1465,  1468,  1469,  1472,  1473,
    1476,  1477
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RANK_SPECIFIER", "IDENTIFIER",
  "\"int_value\"", "\"real_value\"", "\"char_value\"", "\"str_value\"",
  "ABSTRACT", "AS", "BASE", "BOOL", "BREAK", "BYTE", "CASE", "CATCH",
  "CHAR", "CHECKED", "CLASS", "CONST", "CONTINUE", "DECIMAL", "DEFAULT",
  "DELEGATE", "DO", "DOUBLE", "ELSE", "ENUM", "EVENT", "EXPLICIT",
  "EXTERN", "FALSE", "FINALLY", "FIXED", "FLOAT", "FOR", "FOREACH", "GOTO",
  "IF", "IMPLICIT", "IN", "INT", "INTERFACE", "INTERNAL", "IS", "LOCK",
  "LONG", "NAMESPACE", "NEW", "NULL_LITERAL", "OBJECT", "OPERATOR", "OUT",
  "OVERRIDE", "PARAMS", "PRIVATE", "PROTECTED", "PUBLIC", "READONLY",
  "REF", "RETURN", "SBYTE", "SEALED", "SHORT", "SIZEOF", "STACKALLOC",
  "STATIC", "STRING", "STRUCT", "SWITCH", "THIS", "THROW", "TRUE", "TRY",
  "TYPEOF", "UINT", "ULONG", "UNCHECKED", "UNSAFE", "USHORT", "USING",
  "VIRTUAL", "VOID", "VOLATILE", "WHILE", "ASSEMBLY", "FIELD", "METHOD",
  "MODULE", "PARAM", "PROPERTY", "TYPE", "GET", "SET", "ADD", "REMOVE",
  "\",\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"(\"", "\")\"", "\">\"",
  "\"<\"", "\";\"", "\":\"", "\".\"", "PLUS", "MINUS", "STAR", "SLASH",
  "PERCENT", "AND", "OR", "EXCLAMATION_POINT", "TILDE", "QUESTION_MARK",
  "POWER", "EQUAL", "PLUSEQ", "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ",
  "XOREQ", "ANDEQ", "OREQ", "LTLT", "GTGT", "GTGTEQ", "LTLTEQ", "EQEQ",
  "NOTEQ", "LEQ", "GEQ", "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS",
  "ARROW", "THEN", "$accept", "literal", "boolean_literal",
  "namespace_name", "type_name", "type", "non_array_type", "simple_type",
  "primitive_type", "numeric_type", "integral_type", "floating_point_type",
  "class_type", "pointer_type", "array_type", "rank_specifiers_opt",
  "rank_specifier", "variable_reference", "argument_list", "argument",
  "primary_expression", "primary_expression_no_parenthesis",
  "parenthesized_expression", "member_access", "invocation_expression",
  "argument_list_opt", "element_access", "expression_list_opt",
  "expression_list", "this_access", "base_access",
  "post_increment_expression", "post_decrement_expression",
  "new_expression", "object_creation_expression",
  "array_creation_expression", "array_initializer_opt",
  "typeof_expression", "checked_expression", "unchecked_expression",
  "pointer_member_access", "addressof_expression", "sizeof_expression",
  "postfix_expression", "unary_expression_not_plusminus",
  "pre_increment_expression", "pre_decrement_expression",
  "unary_expression", "cast_expression", "type_quals_opt", "type_quals",
  "type_qual", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "conditional_and_expression", "conditional_or_expression",
  "conditional_expression", "assignment", "assignment_operator",
  "expression", "constant_expression", "boolean_expression", "statement",
  "embedded_statement", "block", "statement_list_opt", "statement_list",
  "empty_statement", "labeled_statement", "declaration_statement",
  "local_variable_declaration", "variable_declarators",
  "variable_declarator", "variable_initializer", "stackalloc_initializer",
  "local_constant_declaration", "constant_declarators",
  "constant_declarator", "expression_statement", "statement_expression",
  "selection_statement", "if_statement", "switch_statement",
  "switch_block", "switch_sections_opt", "switch_sections",
  "switch_section", "switch_labels", "switch_label", "iteration_statement",
  "unsafe_statement", "while_statement", "$@1", "$@2", "do_statement",
  "for_statement", "for_initializer_opt", "for_condition_opt",
  "for_iterator_opt", "for_initializer", "for_condition", "for_iterator",
  "statement_expression_list", "foreach_statement", "jump_statement",
  "break_statement", "continue_statement", "goto_statement",
  "return_statement", "expression_opt", "throw_statement", "try_statement",
  "catch_clauses", "catch_clause", "identifier_opt", "finally_clause",
  "checked_statement", "unchecked_statement", "lock_statement",
  "using_statement", "resource_acquisition", "fixed_statement",
  "fixed_pointer_declarators", "fixed_pointer_declarator",
  "compilation_unit", "using_directives_opt", "attributes_opt",
  "namespace_member_declarations_opt", "namespace_declaration", "$@3",
  "comma_opt", "qualified_identifier", "qualifier", "namespace_body",
  "using_directives", "using_directive", "using_alias_directive",
  "using_namespace_directive", "namespace_member_declarations",
  "namespace_member_declaration", "type_declaration", "modifiers_opt",
  "modifiers", "modifier", "class_declaration", "$@4", "class_base_opt",
  "class_base", "interface_type_list", "class_body",
  "class_member_declarations_opt", "class_member_declarations",
  "class_member_declaration", "constant_declaration", "field_declaration",
  "method_declaration", "method_header", "formal_parameter_list_opt",
  "return_type", "method_body", "formal_parameter_list",
  "formal_parameter_default_list", "formal_parameter", "fixed_parameter",
  "formal_parameter_default", "parameter_modifier_opt", "parameter_array",
  "property_declaration", "accessor_declarations",
  "set_accessor_declaration_opt", "get_accessor_declaration_opt",
  "get_accessor_declaration", "set_accessor_declaration", "accessor_body",
  "event_declaration", "event_accessor_declarations",
  "add_accessor_declaration", "remove_accessor_declaration",
  "indexer_declaration", "indexer_declarator", "qualified_this",
  "operator_declaration", "operator_declarator",
  "overloadable_operator_declarator", "overloadable_operator",
  "conversion_operator_declarator", "constructor_declaration",
  "constructor_declarator", "constructor_initializer_opt",
  "constructor_initializer", "destructor_declaration", "operator_body",
  "constructor_body", "struct_declaration", "struct_interfaces_opt",
  "struct_interfaces", "struct_body", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration", "$@5",
  "interface_base_opt", "interface_base", "interface_body",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration",
  "new_opt", "interface_property_declaration", "$@6",
  "interface_indexer_declaration", "$@7", "interface_accessors",
  "interface_event_declaration", "interface_empty_body",
  "enum_declaration", "enum_base_opt", "enum_base", "enum_body",
  "enum_member_declarations_opt", "enum_member_declarations",
  "enum_member_declaration", "delegate_declaration", "attributes",
  "attribute_sections", "attribute_section",
  "attribute_target_specifier_opt", "attribute_target_specifier",
  "attribute_target", "attribute_list", "attribute",
  "attribute_arguments_opt", "attribute_name", "attribute_arguments",
  "ENTER_attrib", "EXIT_attrib", "ENTER_accessor_decl",
  "EXIT_accessor_decl", "ENTER_getset", "EXIT_getset", "class",
  "left_bracket_circle", "right_bracket_circle", "semicolon", "in", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397
};
# endif

#define YYPACT_NINF -816

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-816)))

#define YYTABLE_NINF -577

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -36,   254,    69,   196,   -36,  -816,  -816,  -816,    -8,    65,
    -816,   294,  -816,  2835,  -816,   262,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,   196,  -816,   234,  -816,  -816,   339,
    -816,  -816,   285,  -816,  -816,  -816,   339,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,   450,   600,
    -816,  3076,  -816,  -816,   532,   297,    76,  -816,  -816,  -816,
    -816,  2623,   394,   409,   453,   457,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,   339,  -816,   378,  -816,
    -816,   176,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,  -816,   343,  -816,   389,
    -816,   377,  -816,  -816,  -816,  -816,  -816,  -816,   377,   377,
     509,   414,   429,   451,   463,  -816,  -816,   478,  -816,   485,
    -816,   -36,   496,  -816,  -816,  -816,  -816,  -816,  -816,   512,
     469,   550,  -816,   339,  -816,  -816,   339,   553,  -816,    39,
    -816,  -816,   255,  -816,  2579,  -816,  -816,   336,  -816,  -816,
     230,  -816,   346,   496,  -816,   514,   560,   514,   403,   496,
     574,   514,   565,  -816,  -816,  -816,  -816,  -816,  -816,  -816,
     211,   595,  -816,  2992,  -816,   603,  -816,  -816,   620,   621,
    2292,  2579,  2579,  2579,  2579,  2579,  2579,  2579,  2579,  -816,
    -816,   616,   617,   218,   624,  -816,  -816,  -816,  -816,   610,
     631,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,   413,  -816,  -816,  -816,   668,  -816,
     521,   386,   347,    30,   373,   615,   613,   618,   593,   -60,
    -816,  -816,  -816,    -5,   633,   407,   395,   632,   640,   642,
    -816,   623,  -816,   625,   736,   643,   644,  -816,  -816,   339,
     436,   496,   600,  -816,  -816,  -816,  -816,   -58,  -816,  -816,
    -816,  -816,  -816,   645,   437,  -816,  -816,   339,   442,   496,
    -816,  2579,   744,  2579,   343,   -16,   652,   268,  2992,  3036,
    2579,    41,    48,    61,   528,   653,   298,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,   753,   754,  2579,   755,  2091,
    -816,  2579,  -816,  -816,   756,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,  2579,  2579,  2579,  2579,
    2579,  2579,  2579,  2579,  2992,  2992,  2579,  2579,  2579,  2579,
    2579,  2579,  2579,  2579,  2579,  2579,  2579,  2579,  2579,  2091,
    -816,  -816,  2992,  -816,  2992,   118,   196,   196,  2177,  2177,
     646,  -816,   449,  -816,   713,   664,   490,  -816,  -816,  -816,
    -816,  -816,  -816,  2904,  1344,  -816,  -816,  -816,  -816,  -816,
     514,   600,  -816,   666,   491,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,   511,  -816,   665,  2091,
    2579,  2177,  -816,   179,   207,   228,   667,  -816,  -816,   673,
      41,  -816,   675,   678,  2378,  2783,    41,  -816,  -816,   538,
    -816,  2579,  2579,   672,  -816,   679,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,   521,   521,   386,   386,   389,   389,
     347,   347,   347,   347,    30,    30,   373,   615,   613,   618,
     680,   593,   567,   683,    46,    56,  -816,  -816,   642,  -816,
     623,  -816,   625,  2992,  -816,  -816,  -816,  -816,  -816,  2579,
    -816,  -816,  -816,  2948,  -816,  -816,    14,  2992,  2992,   745,
     749,    63,    21,  -816,   272,  -816,  -816,   352,   702,   419,
     119,   575,  2992,   120,  1861,   706,   127,   127,   289,   127,
     708,  2579,   127,  2579,   711,   576,   711,   710,   238,  -816,
      67,   616,   617,  1026,   263,  1134,  1075,    79,   568,   668,
     122,  -816,  -816,  -816,   712,  1745,  -816,  -816,  -816,   125,
     167,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,    43,  2703,  -816,  -816,  -816,  -816,   714,
     571,  -816,   717,   723,  -816,  -816,  -816,  -816,  2579,  -816,
    2579,  2579,  2579,  -816,   719,  -816,  -816,  -816,  -816,  2091,
    -816,  2579,  -816,  -816,  -816,  -816,   202,  -816,  -816,  2992,
      70,    66,   230,    75,    77,  2992,  2992,   722,   197,  1190,
     716,    34,  -816,   725,    33,   731,   732,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  1745,  -816,  -816,  -816,    75,  -816,
    -816,   748,  2992,  -816,  -816,  2493,  2992,   178,  2579,   244,
    2579,  2579,  -816,   245,  2579,   249,   290,  -816,  -816,  2493,
    -816,  1487,   715,   739,  -816,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,   833,  -816,   377,  -816,  1976,  -816,
    -816,  -816,  -816,  2579,  -816,  -816,  2579,    78,   737,   738,
     740,   741,   721,   137,  -816,   311,  -816,   307,   331,   230,
    2177,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,   747,   196,  -816,   838,  -816,   230,   743,
    -816,   196,   196,  -816,   758,   750,    83,   169,   259,   273,
     313,   326,   333,  -816,  -816,  -816,   251,  -816,   759,    84,
    -816,  -816,   269,  -816,  -816,  -816,   186,   764,  -816,  -816,
     186,  -816,  -816,   585,   711,   290,  -816,  -816,  -816,  -816,
     765,  2579,   766,   767,   751,   757,   377,  -816,  -816,  -816,
     752,   356,   230,   230,   772,   196,   768,  2579,  -816,   846,
    -816,  -816,   773,  2992,  2992,   771,  -816,  2992,   604,  -816,
    -816,  -816,   774,   196,   605,   448,   775,   497,   498,  2579,
     762,   367,  -816,  -816,  -816,  2579,  2579,    53,  -816,  -816,
    -816,  -816,  1861,  1861,   778,    39,  -816,  -816,  -816,  -816,
    1861,   882,  1861,  1861,   781,  -816,  -816,  -816,  -816,   784,
    -816,  -816,   783,   785,   196,   611,   240,  -816,  -816,  -816,
    -816,   196,    85,    97,  -816,   101,   196,  -816,  -816,   786,
    -816,  -816,  -816,  -816,   798,  -816,  -816,   800,  -816,  -816,
     791,  2579,   893,  1861,  -816,   251,  -816,  -816,  -816,  -816,
    2579,   871,  -816,   306,  -816,   896,   896,  -816,  1861,  -816,
    -816,   711,  -816,   356,   356,   489,   803,  -816,   799,   805,
     530,   808,   196,   196,   809,   811,   376,  -816,   375,   375,
    -816,   286,  -816,  -816,  -816,  2579,   186,  1861,  2579,   804,
     814,   306,  -816,  1629,  -816,  -816,   815,   817,  -816,  -816,
    -816,  -816,   356,   356,  -816,   821,  2091,  2091,  -816,  -816,
    -816,   826,  -816,   822,  -816,  -816,  -816,  2992,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,   186,  -816,   759,  1861,
    -816,   816,  -816,  -816,  -816,  1745,  -816,   711,   711,  -816,
     499,   505,  -816,   196,   825,   828,   711,   711,  -816,   102,
    -816,  -816,  1861,  -816,  -816,  -816,  -816,   830,   836,  -816,
     831,  -816,  -816,  -816,  -816,   834,  -816,   356,   356,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,  -816
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     322,     0,     0,   324,   323,   337,   339,   340,   332,     0,
      10,     0,     1,   354,   347,   324,   345,   348,   349,   350,
     351,   352,   353,   325,   552,   553,     0,   338,   334,     0,
     344,   343,   333,   358,   359,   360,     0,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,     0,   355,
     356,   354,   346,   554,   557,   332,     0,   335,   328,   583,
     582,     0,     0,     0,     0,     0,   357,   562,   567,   560,
     561,   563,   564,   565,   566,   568,     0,   558,     0,   342,
     341,     0,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   408,    15,   407,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   539,   511,   486,   374,   574,    11,     0,   569,   572,
     559,   322,   330,    38,    37,    44,    40,    39,    41,     0,
       0,     0,   540,     0,   509,   512,     0,     0,   487,     0,
     372,   375,     0,   577,    75,   571,   573,   324,   331,   329,
     324,   541,   324,   330,   379,   513,     0,   488,   324,   330,
     376,   377,     0,   577,   570,   555,     3,     4,     5,     6,
       0,     0,     9,     0,     7,     0,    79,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       2,     0,     0,    97,    52,    51,    55,    56,    57,     0,
      76,    58,    59,    99,   100,    60,    84,    54,    61,    63,
      64,   101,   113,    62,   105,   114,   111,   112,   127,   104,
     131,   134,   137,   144,   147,   149,   151,   153,   155,   157,
     171,   172,    77,    98,     0,   324,   420,     0,   404,   405,
     411,   415,   413,   416,     0,     0,   545,   546,   538,     0,
     324,   330,   354,   502,   494,   495,   496,     0,   497,   498,
     499,   500,   501,     0,   324,   492,   485,     0,   324,   330,
     556,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,   121,   121,   121,   131,     0,    98,   108,   109,   110,
      95,   102,   103,   106,   107,     0,     0,     0,     0,    71,
     575,     0,    82,    83,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
     336,   422,     0,   421,     0,     0,   324,   324,     0,     0,
     548,   542,   324,   380,   525,     0,   324,   517,   519,   520,
     522,   521,   510,     0,     0,   410,   409,   400,   489,   493,
     378,   354,   395,     0,   324,   384,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   373,     0,    80,     0,    71,
       0,   505,    87,     0,     0,     0,     0,   126,   125,     0,
     122,   123,     0,     0,     0,    65,   121,    67,    68,     0,
      66,     0,     0,    72,    46,     0,    48,    78,    94,   159,
     128,   129,   130,   127,   132,   133,   135,   136,   143,   142,
     139,   138,   140,   141,   145,   146,   148,   150,   152,   154,
       0,   156,     0,     0,     0,     0,   551,   550,   406,   412,
       0,   414,     0,     0,   208,   418,   210,   209,   419,     0,
     543,   547,   526,     0,   514,   518,   332,     0,     0,     0,
       0,     0,     0,   580,     0,   446,   447,     0,     0,   332,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   295,     0,   295,     0,     0,     0,     0,     0,   197,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,   195,   177,   178,     0,   194,   179,   175,   176,     0,
       0,   180,   181,   237,   238,   182,   189,   252,   253,   254,
     255,   183,   278,   279,   280,   281,   282,   184,   185,   186,
     187,   188,   190,    98,     0,   381,   385,    81,    92,     0,
       0,   507,     0,   506,    96,    91,    90,    93,     0,   124,
       0,     0,     0,   115,     0,    73,    50,    45,    49,     0,
      69,     0,    74,    70,   423,   417,     0,   173,   549,     0,
       0,     0,   324,     0,     0,     0,     0,     0,   206,     0,
       0,     0,   204,   580,     0,     0,     0,   482,   481,   445,
     484,   483,   474,   192,     0,   284,   283,   310,     0,   286,
     285,     0,     0,   585,   584,   265,     0,     0,     0,     0,
       0,     0,   296,     0,     0,     0,     0,   311,   256,     0,
     259,     0,   206,   203,   223,   216,   226,   219,   227,   220,
     224,   217,   228,   221,   229,   222,   225,   218,   191,   196,
     201,   199,   202,   200,     0,    85,    42,   503,     0,   120,
     118,   119,   116,     0,    47,   158,     0,     0,     0,   580,
       0,     0,     0,     0,   213,     0,   578,     0,     0,   324,
       0,   457,   456,   468,   469,   450,   451,   458,   459,   460,
     461,   462,   452,   453,   463,   464,   465,   466,   467,   471,
     470,   454,   455,     0,   324,   399,     0,   398,   324,     0,
     444,   324,   324,   198,   212,     0,     0,    56,    99,   100,
      84,   111,   112,   232,   271,   275,     0,   266,   272,     0,
     290,   287,     0,   292,   289,   174,     0,     0,   294,   293,
       0,   298,   297,     0,     0,   299,   302,   300,   315,   314,
       0,     0,     0,     0,     0,    88,    42,   504,   508,   117,
       0,     0,   324,   324,     0,   324,   476,     0,   397,     0,
     396,   435,     0,     0,     0,     0,   207,     0,     0,   415,
     416,   205,     0,   324,     0,     0,     0,   324,   324,     0,
       0,     0,   317,   589,   588,   267,     0,     0,   291,   288,
     587,   586,     0,     0,     0,     0,   306,   309,   303,   301,
       0,     0,     0,     0,     0,    86,    89,    43,   211,     0,
     536,   535,     0,     0,   324,     0,     0,   475,   477,   215,
     214,   324,     0,     0,   402,     0,   324,   442,   401,     0,
     443,   581,   581,   581,     0,   425,   428,     0,   426,   430,
       0,     0,     0,     0,   273,     0,   268,   276,   591,   590,
       0,   239,   312,   243,   241,   307,   307,   313,     0,   258,
     257,     0,   537,     0,     0,     0,     0,   580,     0,     0,
       0,     0,   324,   324,     0,     0,     0,   581,     0,     0,
     441,     0,   319,   318,   316,   269,     0,     0,     0,     0,
       0,   244,   245,     0,   248,   308,     0,     0,   260,   480,
     524,   523,     0,     0,   581,     0,    71,    71,   579,   579,
     579,     0,   437,     0,   438,   473,   472,     0,   448,   424,
     434,   433,   580,   580,   263,   262,     0,   270,   274,     0,
     240,     0,   251,   242,   246,   247,   249,     0,     0,   261,
     324,   324,   527,   324,     0,     0,     0,     0,   436,     0,
     431,   432,     0,   277,   250,   305,   304,     0,     0,   528,
       0,   478,   479,   578,   578,     0,   264,     0,     0,   581,
     439,   440,   449,   533,   534,   529,   530
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -816,  -816,  -816,  -816,   -74,   -22,   761,  -816,    57,  -816,
     810,  -816,   -56,  -816,   769,   182,   -94,   527,  -816,   372,
    -816,  -816,  -816,  -816,   -49,  -336,  -816,  -816,  -240,  -816,
    -816,    13,   123,  -816,   168,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,   539,   287,   291,   677,  -816,  -259,
    -816,   543,  -158,   323,   163,   350,   614,   622,   619,   626,
     612,  -816,  -816,   415,  -816,   -53,  -607,  -605,  -502,  -388,
    -241,  -816,    51,  -816,  -816,  -816,  -574,  -223,   250,  -328,
    -816,  -816,   349,   190,  -816,   155,  -816,  -816,  -816,  -816,
    -816,  -816,    62,  -816,    59,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,  -816,  -816,    71,  -816,
    -816,  -816,  -816,  -816,  -816,   472,  -816,  -816,  -816,   222,
     103,   223,  -816,  -816,  -816,  -816,  -816,  -816,  -816,   121,
    -816,   851,    -3,  -816,  -816,  -816,  -121,     0,   502,  -816,
    -816,   973,  -816,  -816,   832,     3,  -139,  -218,  -816,   933,
    -816,  -816,  -816,  -816,  -106,  -816,  -816,  -816,   609,  -216,
    -183,  -165,  -816,  -565,  -816,  -816,  -655,   639,  -342,  -338,
     641,  -816,  -337,  -160,   203,  -816,  -816,   199,   205,   100,
    -159,  -816,   107,   111,  -157,  -816,  -816,  -155,  -816,  -816,
    -816,  -816,  -153,  -816,  -816,  -816,  -816,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,   760,  -271,  -816,  -816,  -816,
    -816,  -816,  -816,  -816,  -816,  -816,   657,  -816,  -816,  -816,
    -816,  -816,  -816,    64,  -816,  -632,  -816,  -816,  -816,  -816,
    -816,  -816,   649,  -816,  -816,  -816,   991,  -816,  -816,  -816,
    -816,   874,  -816,  -816,  -816,  -816,   859,  -262,  -200,  -585,
    -815,  -816,    25,  -720,   170,  -816
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   189,   190,     9,    98,   500,   100,   101,   191,   103,
     104,   105,   192,   107,   108,   755,   398,   566,   413,   414,
     193,   194,   195,   196,   197,   415,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   815,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   399,
     400,   401,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   316,   416,   578,   736,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   591,   592,   455,
     456,   520,   673,   674,   521,   725,   522,   523,   524,   864,
     900,   901,   902,   903,   904,   525,   526,   527,   751,   949,
     528,   529,   726,   855,   936,   727,   856,   937,   728,   530,
     531,   532,   533,   534,   535,   623,   536,   537,   745,   746,
     906,   747,   538,   539,   540,   541,   750,   542,   791,   792,
       2,     3,   236,   234,    14,    81,   149,   233,    11,   122,
       4,     5,     6,     7,    15,    16,    17,    48,    49,    50,
      18,   162,   140,   141,   155,   269,   373,   374,   375,   254,
     255,   256,   257,   237,   110,   367,   238,   239,   240,   241,
     242,   344,   243,   258,   786,   845,   848,   787,   788,   932,
     259,   881,   882,   883,   260,   473,   595,   261,   474,   475,
     703,   476,   262,   477,   827,   828,   384,   599,   602,    19,
     137,   138,   159,   263,   264,   265,   457,   552,   553,    20,
     156,   134,   135,   251,   355,   356,   357,   358,   463,   359,
     969,   360,   986,   876,   361,   821,    21,   131,   132,   153,
     245,   246,   247,    22,    23,    24,    25,    76,    77,    78,
     117,   118,   145,   119,   146,    26,   165,   772,   956,   596,
     888,    65,   615,   802,   795,   860
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    10,   115,   443,   449,   106,   392,   126,   709,   450,
     452,   732,    51,   649,   127,   128,   366,   671,    52,   253,
     804,   458,   284,   402,   403,   588,   753,   889,   890,    56,
     157,   386,   248,   161,   363,   705,    58,    32,   266,    99,
     324,   724,   364,    55,   125,     1,   125,   -11,   365,   778,
     574,   125,   376,   549,   858,   749,   784,   409,   336,   154,
     575,   109,   154,   551,   125,   154,    30,    55,   115,    12,
     669,   632,   929,   589,   668,   325,   116,    79,   337,   672,
     642,   588,   761,   160,   764,   377,   389,   790,   797,   884,
      90,   232,   590,   338,   859,   124,   611,   339,   442,   952,
      28,   885,   713,   378,   710,   886,   975,    93,   379,   380,
     825,   381,    29,   382,   775,   383,   582,   106,   102,   446,
     605,   609,    28,   646,   283,   253,   650,   285,   613,   372,
     362,   706,   124,   116,   326,   327,   116,   670,   768,   116,
     707,   338,   116,   782,    51,   339,   811,   564,   385,   244,
     550,   275,   397,   544,   -11,   252,   295,   124,   376,   397,
     829,   370,   424,   425,   985,   328,   329,   124,   652,   296,
    -230,    31,   397,   109,   123,   353,   939,   124,   124,   730,
     286,   123,    80,   127,   850,   643,   124,   800,   124,   124,
     854,   377,   406,   154,   124,   124,   124,   822,   823,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,   124,   378,
    -111,  -111,   124,   124,   379,   380,   962,   381,   232,   382,
     388,   383,   106,   106,   447,   606,   610,   396,   647,   614,
     102,   651,    51,   598,   769,   372,   601,   282,    52,   630,
     607,   910,   911,   770,   232,   733,   738,   354,   417,   116,
     741,   878,   793,   626,   627,   628,   393,   395,     8,    55,
    -233,   252,  -321,   419,   636,   371,  -230,   116,   106,   106,
     798,   125,  -230,   653,  -234,  -230,   121,   633,   109,   109,
     950,   951,   554,   440,   731,   232,   106,   934,   106,   801,
     124,   941,   915,   617,  -576,   454,   454,  -332,    32,  -332,
     666,   125,   428,   429,   618,    28,   743,   106,   502,   271,
     555,   879,   619,   124,  -231,   503,   297,   680,   123,   272,
     444,   898,   445,   744,   109,   109,   298,  -235,  -576,   899,
     758,   556,    54,  -403,  -236,   102,   102,   232,   454,   124,
     631,   472,   109,    55,   109,   983,   984,   960,   961,   244,
     734,   739,   776,   354,   163,   742,  -233,   794,   567,   567,
    -576,   675,  -233,   109,   543,  -233,   779,   780,   391,   637,
    -234,   371,   364,   779,   780,   799,  -234,   504,   597,  -234,
     125,   102,   102,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   935,    57,   -99,   -99,   338,   106,   111,   102,
     339,   102,   -99,   -99,   -99,    28,   577,   106,   706,   773,
    -231,   106,   106,   112,   861,   862,  -231,   771,   124,  -231,
     102,   501,   867,  -235,   869,   870,   106,   779,   780,  -235,
    -236,   576,  -235,   774,  -576,   503,  -236,  -326,   622,  -236,
     622,   581,   124,   649,  -576,   583,   584,  -544,   341,   128,
     342,    59,   364,   109,   123,   343,   819,   113,   600,   502,
     608,   114,   820,   109,   852,   894,   503,   109,   109,    60,
     853,   587,   593,   927,    61,   364,   322,   323,    62,   928,
     908,   930,   109,    83,   816,   120,    84,   505,   106,   430,
     431,   432,   433,    63,   449,   320,   321,   504,   779,   780,
     124,  -576,   806,   807,  -490,  -576,   330,   331,  -327,   940,
     102,    88,   616,   129,   620,   543,    89,   624,   665,    64,
     102,   130,   472,   106,   102,   102,   604,    28,   504,   106,
     106,    91,   506,    92,  -576,  -576,   133,  -515,  -491,   102,
    -576,   841,   842,  -382,   109,    94,    95,  -576,   502,    96,
     460,   963,   302,   303,   304,   503,   106,   667,   136,   502,
     106,    67,   756,   677,   678,   577,   717,   735,   737,   644,
     139,   740,   501,   502,   976,   142,   748,   143,   735,   109,
     954,   955,   912,   913,   676,   109,   109,   144,  -576,  -576,
     716,  -516,  -383,    68,   729,  -576,  -576,  -576,  -427,  -429,
    -531,   102,   148,  -576,   543,   454,  -532,   505,   301,    33,
     547,   249,   109,   760,   150,   543,   109,   504,    69,    70,
      71,    72,    73,    74,    75,   918,   919,   454,   718,   543,
     909,    34,   317,   318,   319,   301,   102,   565,   505,   404,
     318,   319,   102,   102,    35,   426,   427,   931,   931,    37,
     152,   507,   506,   158,    38,   508,    39,    40,    41,    42,
     250,   501,   756,    43,   301,   268,   572,    44,   301,   102,
     656,   267,   501,   102,   645,   364,   364,   273,   280,    45,
     434,   435,    46,   506,    47,   364,   501,   805,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,   273,   735,  -112,
    -112,   836,   836,   837,   840,   278,   965,   966,   836,   785,
     877,   980,   981,   300,   577,   973,   974,   106,   106,   957,
     958,   106,   279,   280,   295,   296,   299,   505,   301,   332,
     335,   865,   333,   334,   340,   345,   735,   346,   719,   347,
     350,   352,   735,   348,   351,   349,   368,   717,   387,   866,
     390,   832,   833,   503,   503,   835,   405,   407,   408,   410,
     418,   503,   462,   503,   503,   464,   459,   545,   548,   569,
     557,   507,   506,   109,   109,   508,   558,   109,   560,   510,
     785,   561,   570,   720,   844,   847,   573,   571,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   585,   892,   314,
     315,   586,   507,   603,   503,   116,   508,   896,   612,   718,
     621,   364,   629,   648,   704,   504,   504,   655,   657,   503,
     658,   875,   663,   504,   679,   504,   504,   708,   880,   711,
     102,   102,   712,   715,   102,   680,   706,   754,   765,   762,
     763,   767,   632,   783,   766,   577,   717,   502,   503,   777,
     672,   818,   789,   814,   503,   769,   796,   391,   287,   288,
     289,   290,   291,   292,   293,   294,   504,   803,   810,   812,
     813,   106,   824,   831,   834,   826,   843,   838,   863,   921,
     923,   504,   851,   868,   871,   872,   873,   887,   874,   502,
     503,   507,   842,   841,   891,   508,   503,   790,   897,   510,
     905,   916,   721,   543,   914,   959,   722,   917,   718,   920,
     504,   942,   925,   503,   926,   943,   504,   918,   947,   719,
     948,   953,   919,   964,   977,   505,   505,   109,   971,   978,
     510,   972,   979,   505,   276,   505,   505,   982,   817,   568,
     151,   664,   277,   559,   563,   543,   436,   967,   968,   441,
     875,   857,   504,   438,   945,   437,   781,   714,   504,   830,
     501,   439,   946,   944,   720,   625,   938,   808,   809,   907,
     506,   506,   147,   893,   594,   504,   505,    27,   506,   235,
     506,   506,    66,   546,   102,   448,   839,   849,   451,   933,
     924,   505,   846,   922,   420,   421,   422,   423,   423,   423,
     423,   461,   501,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   465,   423,    53,   164,   970,   719,   510,
     505,   506,   270,     0,   369,   895,   505,   634,     0,     0,
     723,     0,     0,     0,     0,     0,   506,     0,     0,     0,
       0,   509,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   505,   720,     0,   506,     0,     0,   505,     0,
       0,   506,     0,     0,     0,     0,   640,     0,     0,     0,
       0,   420,     0,   721,     0,   505,     0,   722,     0,   507,
     507,     0,     0,   508,   508,     0,     0,   507,     0,   507,
     507,   508,     0,   508,   508,     0,     0,   506,     0,     0,
       0,     0,     0,   506,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -56,     0,     0,     0,   -56,     0,
     506,     0,   635,     0,   -56,   638,     0,     0,     0,     0,
     507,     0,     0,     0,   508,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   507,     0,   -56,   -56,   508,
       0,   509,     0,     0,     0,   -56,   -56,   -56,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,   -84,     0,     0,
       0,   641,   721,   -84,   507,     0,   722,     0,   508,     0,
     507,     0,   509,     0,   508,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -84,   -84,     0,     0,
       0,   723,     0,     0,   -84,   -84,   -84,   510,   510,     0,
       0,     0,   681,     0,     0,   510,   507,   510,   510,     0,
     508,     0,   507,     0,     0,   659,   508,   660,   661,   662,
     639,     0,     0,     0,     0,     0,     0,     0,     0,   507,
       0,     0,     0,   508,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,   682,     0,  -100,  -100,     0,   510,     0,
       0,     0,     0,  -100,  -100,  -100,     0,     0,     0,     0,
       0,   509,     0,   510,     0,     0,     0,     0,     0,     0,
       0,     0,   509,     0,   683,   684,     0,     0,     0,   685,
     686,   687,   688,   689,   690,   691,   692,   693,     0,   694,
     723,     0,   510,     0,     0,     0,     0,     0,   510,   695,
     696,     0,     0,   697,   698,   699,   700,     0,     0,   701,
     702,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     759,     0,     0,     0,     0,   478,     0,     0,   479,   166,
     167,   168,   169,     0,   510,   170,    82,   480,    83,     0,
     510,    84,   481,     0,   482,   483,    85,     0,     0,   484,
      86,     0,     0,     0,     0,     0,   172,   510,   485,    87,
     486,   487,   488,   489,     0,     0,    88,     0,     0,     0,
     490,    89,     0,   173,   174,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   491,    91,     0,    92,   175,
       0,     0,    93,     0,   492,   176,   493,   177,   494,   178,
      94,    95,   495,   496,    96,   497,     0,   274,     0,   498,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364,  -193,   180,     0,     0,     0,
     499,     0,     0,   181,   182,   183,     0,     0,   184,     0,
     185,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   509,     0,     0,     0,     0,     0,   509,
     509,     0,     0,   187,   188,     0,     0,   509,   752,   509,
     509,    55,   166,   167,   168,   169,     0,     0,   170,    82,
       0,    83,     0,     0,    84,   171,     0,     0,     0,    85,
       0,     0,     0,    86,     0,     0,     0,     0,     0,   172,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
     509,     0,     0,     0,    89,     0,   173,   174,    90,     0,
       0,     0,     0,     0,     0,   509,     0,     0,     0,    91,
       0,    92,   175,     0,     0,    93,     0,     0,   176,     0,
     177,     0,   178,    94,    95,   179,     0,    96,     0,     0,
       0,     0,   509,     0,   509,     0,     0,     0,     0,     0,
     509,     0,     0,     0,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,     0,     0,   181,   182,   183,     0,
       0,   184,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   509,     0,     0,     0,
       0,     0,   509,     0,     0,     0,   187,   188,     0,     0,
       0,     0,     0,   479,   166,   167,   168,   169,     0,   509,
     170,    82,   480,    83,   898,     0,    84,   481,     0,   482,
     483,    85,   899,     0,   484,    86,     0,     0,     0,     0,
       0,   172,     0,   485,    87,   486,   487,   488,   489,     0,
       0,    88,     0,     0,     0,   490,    89,     0,   173,   174,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     491,    91,     0,    92,   175,     0,     0,    93,     0,   492,
     176,   493,   177,   494,   178,    94,    95,   495,   496,    96,
     497,     0,   274,     0,   498,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   364,
       0,   180,     0,     0,     0,   499,     0,     0,   181,   182,
     183,     0,     0,   184,     0,   185,   186,     0,     0,   479,
     166,   167,   168,   169,     0,     0,   170,    82,   480,    83,
       0,     0,    84,   481,     0,   482,   483,    85,   187,   188,
     484,    86,     0,     0,     0,     0,     0,   172,     0,   485,
      87,   486,   487,   488,   489,     0,     0,    88,     0,     0,
       0,   490,    89,     0,   173,   174,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,    91,     0,    92,
     175,     0,     0,    93,     0,   492,   176,   493,   177,   494,
     178,    94,    95,   495,   496,    96,   497,     0,   274,     0,
     498,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   364,     0,   180,     0,     0,
       0,   499,     0,     0,   181,   182,   183,     0,     0,   184,
       0,   185,   186,     0,     0,    55,   166,   167,   168,   169,
       0,     0,   170,    82,   480,    83,     0,     0,    84,   481,
       0,     0,   483,    85,   187,   188,   484,    86,     0,     0,
       0,     0,     0,   172,     0,   485,    87,   486,   487,   488,
     489,     0,     0,    88,     0,     0,     0,   490,    89,     0,
     173,   174,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   491,    91,     0,    92,   175,     0,     0,    93,
       0,   492,   176,   493,   177,   494,   178,    94,    95,   495,
     496,    96,   497,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,     0,   180,     0,     0,     0,   499,     0,     0,
     181,   182,   183,     0,     0,   184,     0,   185,   186,     0,
      55,   166,   167,   168,   169,     0,     0,   170,    82,     0,
      83,     0,     0,    84,   171,     0,     0,     0,    85,     0,
     187,   188,    86,     0,     0,     0,     0,     0,   172,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,     0,   173,   174,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,   175,   453,     0,    93,     0,     0,   176,     0,   177,
       0,   178,    94,    95,   179,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   391,   757,   180,     0,
       0,     0,     0,     0,     0,   181,   182,   183,     0,     0,
     184,     0,   185,   186,     0,    55,   166,   167,   168,   169,
       0,     0,   170,    82,     0,    83,     0,     0,    84,   171,
       0,     0,     0,    85,     0,   187,   188,    86,     0,     0,
       0,     0,     0,   172,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,     0,
     173,   174,    90,     0,   411,     0,     0,     0,     0,     0,
       0,   412,     0,    91,     0,    92,   175,     0,     0,    93,
       0,     0,   176,     0,   177,     0,   178,    94,    95,   179,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,   166,   167,   168,   169,     0,     0,   170,    82,
       0,    83,     0,   180,    84,   171,     0,     0,     0,    85,
     181,   182,   183,    86,     0,   184,     0,   185,   186,   172,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,     0,   173,   174,    90,     0,
     187,   188,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,   175,   453,     0,    93,     0,     0,   176,     0,
     177,     0,   178,    94,    95,   179,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   391,     0,   180,
       0,     0,     0,     0,     0,     0,   181,   182,   183,     0,
       0,   184,     0,   185,   186,     0,    55,   166,   167,   168,
     169,     0,     0,   170,    82,     0,    83,     0,     0,    84,
     171,     0,     0,     0,    85,     0,   187,   188,    86,     0,
       0,     0,     0,     0,   172,     0,     0,    87,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
       0,   173,   174,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,     0,    92,   175,     0,     0,
      93,     0,     0,   176,     0,   177,     0,   178,    94,    95,
     179,     0,    96,     0,     0,   281,     0,     0,     0,     0,
       0,     0,    55,   166,   167,   168,   169,     0,     0,   170,
      82,     0,    83,     0,   180,    84,   171,     0,     0,     0,
      85,   181,   182,   183,    86,     0,   184,     0,   185,   186,
     172,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   173,   174,    90,
       0,   187,   188,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   175,     0,     0,    93,     0,     0,   176,
       0,   177,     0,   178,    94,    95,   179,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,   562,     0,     0,     0,     0,     0,   181,   182,   183,
       0,     0,   184,     0,   185,   186,     0,    55,   166,   167,
     168,   169,     0,     0,   170,    82,     0,    83,     0,     0,
      84,   171,     0,     0,     0,    85,     0,   187,   188,    86,
       0,     0,     0,     0,     0,   172,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   173,   174,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    92,   175,     0,
       0,    93,     0,     0,   176,     0,   177,     0,   178,    94,
      95,   179,     0,    96,     0,     0,   274,     0,     0,     0,
       0,     0,     0,    55,   166,   167,   168,   169,     0,     0,
     170,    82,     0,    83,     0,   180,    84,   171,     0,     0,
       0,    85,   181,   182,   183,    86,     0,   184,     0,   185,
     186,   172,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    55,   173,   174,
      90,     0,   187,   188,     0,    82,     0,    83,     0,     0,
      84,    91,     0,    92,   175,    85,     0,    93,     0,    86,
     176,     0,   177,     0,   178,    94,    95,   179,    87,    96,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,   180,     0,     0,     0,    91,     0,    92,   181,   182,
     183,    93,     0,   184,     0,   185,   186,     0,     0,    94,
      95,     0,     0,    96,    59,     0,    97,   466,     0,     0,
       0,     0,     0,     0,     0,    82,     0,    83,   187,   188,
      84,     0,    60,   467,     0,    85,     0,    61,     0,    86,
       0,    62,   468,   469,     0,     0,     0,     0,    87,     0,
       0,     0,     0,   470,     0,    88,    63,     0,     0,     0,
      89,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    92,     0,     0,
       0,    93,    64,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,     0,   471,    55,   166,   167,
     168,   169,     0,     0,   170,    82,     0,    83,     0,     0,
      84,   171,     0,     0,     0,    85,     0,     0,     0,    86,
       0,     0,     0,     0,     0,   172,     0,     0,    87,     0,
     654,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   173,   174,    90,  -320,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    91,     0,    92,   175,     0,
       0,    93,     0,     0,   176,     0,   177,     0,   178,    94,
      95,   179,     0,    96,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,    36,    37,   180,     0,     0,     0,    38,
       0,    39,    40,    41,    42,     0,     0,     0,    43,   185,
     186,     0,    44,     0,     0,    59,     0,     0,   466,     0,
       0,     0,     0,     0,    45,     0,    82,    46,    83,    47,
       0,    84,     0,    60,   467,     0,    85,     0,    61,     0,
      86,     0,    62,   468,   469,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   470,     0,    88,    63,     0,     0,
       0,    89,    55,     0,     0,    90,     0,     0,     0,     0,
      82,     0,    83,     0,     0,    84,    91,     0,    92,     0,
      85,     0,    93,    64,    86,     0,     0,   579,     0,     0,
      94,    95,     0,    87,    96,     0,     0,   471,     0,     0,
      88,     0,     0,     0,     0,    89,    55,     0,     0,    90,
       0,     0,     0,     0,    82,     0,    83,     0,     0,    84,
      91,     0,    92,     0,    85,     0,    93,     0,    86,     0,
       0,     0,     0,     0,    94,    95,     0,    87,    96,     0,
       0,   580,     0,     0,    88,     0,     0,     0,     0,    89,
      55,     0,     0,    90,     0,     0,     0,     0,    82,     0,
      83,     0,     0,    84,    91,     0,    92,     0,    85,     0,
      93,     0,    86,     0,     0,     0,     0,     0,    94,    95,
       0,    87,    96,     0,     0,   274,     0,     0,    88,     0,
       0,     0,     0,    89,     0,    33,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,     0,     0,     0,    93,     0,     0,    34,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,     0,   394,
      35,     0,     0,     0,    36,    37,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,     0,
      47
};

static const yytype_int16 yycheck[] =
{
       3,     1,    76,   339,   346,    61,   277,   101,   593,   347,
     347,   618,    15,   515,   108,   109,   257,   582,    15,   158,
     740,   349,   180,   282,   283,     4,   631,   842,   843,    29,
     136,   271,   153,   139,   252,     1,    36,     4,   159,    61,
      10,   615,   100,     4,     3,    81,     3,     4,   106,   704,
       4,     3,   268,   389,     1,   629,   711,   297,   118,   133,
       4,    61,   136,   391,     3,   139,     1,     4,   142,     0,
       4,     4,   887,    52,     4,    45,    76,     1,   138,     4,
       1,     4,     4,   139,   669,   268,   102,     4,     4,     4,
      51,   144,    71,    98,    41,   111,   484,   102,   338,   914,
     108,     4,   604,   268,    71,     4,     4,    68,   268,   268,
     765,   268,   120,   268,   679,   268,   102,   173,    61,     1,
       1,     1,   108,     1,   180,   264,     1,   180,     1,   268,
     251,    97,   111,   133,   104,   105,   136,    71,     1,   139,
     106,    98,   142,   708,   147,   102,   751,   406,   269,   152,
     390,   173,   111,   371,   111,   158,   108,   111,   374,   111,
     767,   267,   320,   321,   979,   135,   136,   111,     1,   108,
       1,   106,   111,   173,   111,   249,   896,   111,   111,     1,
     180,   111,   106,   277,   789,   106,   111,     1,   111,   111,
     795,   374,   286,   267,   111,   111,   111,   762,   763,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   111,   374,
     131,   132,   111,   111,   374,   374,   936,   374,   271,   374,
     273,   374,   278,   279,   106,   106,   106,   280,   106,   102,
     173,   106,   235,   474,    97,   374,   477,   180,   235,     1,
     481,   873,   874,   106,   297,     1,     1,   250,   301,   249,
       1,    11,     1,   494,   495,   496,   278,   279,     4,     4,
       1,   264,     0,   316,     1,   268,    97,   267,   324,   325,
       1,     3,   103,   106,     1,   106,   100,   500,   278,   279,
     912,   913,   103,   336,   106,   338,   342,     1,   344,   103,
     111,   898,   877,     4,    98,   348,   349,   100,     4,   102,
      98,     3,   324,   325,    15,   108,    16,   363,   364,    98,
     103,    71,    23,   111,     1,   364,    98,   120,   111,   108,
     342,    15,   344,    33,   324,   325,   108,     1,    98,    23,
     658,   103,    98,   103,     1,   278,   279,   390,   391,   111,
     102,   363,   342,     4,   344,   977,   978,   932,   933,   352,
     106,   106,   680,   356,    99,   106,    97,   106,   411,   412,
      98,   584,   103,   363,   364,   106,   704,   704,   100,   106,
      97,   374,   100,   711,   711,   106,   103,   364,   106,   106,
       3,   324,   325,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   106,   108,   131,   132,    98,   453,     4,   342,
     102,   344,   139,   140,   141,   108,   459,   463,    97,   102,
      97,   467,   468,     4,   802,   803,   103,   106,   111,   106,
     363,   364,   810,    97,   812,   813,   482,   765,   765,   103,
      97,   453,   106,   102,    98,   484,   103,   101,   491,   106,
     493,   463,   111,   945,    98,   467,   468,   101,    53,   543,
      55,     1,   100,   453,   111,    60,   100,     4,   106,   515,
     482,     4,   106,   463,    97,   853,   515,   467,   468,    19,
     103,   471,   472,    97,    24,   100,   129,   130,    28,   103,
     868,   106,   482,    14,   755,   107,    17,   364,   544,   326,
     327,   328,   329,    43,   836,   109,   110,   484,   836,   836,
     111,    98,   743,   744,   101,    98,   133,   134,   101,   897,
     453,    42,   487,     4,   489,   515,    47,   492,   571,    69,
     463,   107,   544,   579,   467,   468,   107,   108,   515,   585,
     586,    62,   364,    64,    98,    98,   107,   101,   101,   482,
      98,    93,    94,   101,   544,    76,    77,    98,   604,    80,
     101,   939,   139,   140,   141,   604,   612,   579,   107,   615,
     616,    29,   656,   585,   586,   618,   615,   620,   621,     1,
     107,   624,   515,   629,   962,    97,   629,    99,   631,   579,
     916,   917,    93,    94,   584,   585,   586,   102,    98,    98,
     612,   101,   101,    61,   616,    98,    98,    98,   101,   101,
     101,   544,   106,    98,   604,   658,   101,   484,    97,     9,
      99,    97,   612,   666,   102,   615,   616,   604,    86,    87,
      88,    89,    90,    91,    92,    95,    96,   680,   615,   629,
     871,    31,   111,   112,   113,    97,   579,    99,   515,   111,
     112,   113,   585,   586,    44,   322,   323,   888,   889,    49,
     100,   364,   484,   100,    54,   364,    56,    57,    58,    59,
     100,   604,   756,    63,    97,   100,    99,    67,    97,   612,
      99,    97,   615,   616,   106,   100,   100,   102,   102,    79,
     330,   331,    82,   515,    84,   100,   629,   102,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   102,   751,   131,
     132,    97,    97,    99,    99,   102,   947,   948,    97,   712,
      99,   973,   974,   103,   767,   956,   957,   773,   774,   919,
     920,   777,   102,   102,   108,   108,   102,   604,    97,   114,
     137,   805,   119,   115,   101,   103,   789,    97,   615,    97,
       4,    97,   795,   120,   101,   120,   101,   796,     4,   805,
      98,   773,   774,   802,   803,   777,   103,     4,     4,     4,
       4,   810,    49,   812,   813,   101,   120,   101,   103,    97,
     103,   484,   604,   773,   774,   484,   103,   777,   103,   364,
     783,   103,   103,   615,   787,   788,   103,   107,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    52,   851,   131,
     132,    52,   515,   101,   853,   805,   515,   860,   102,   796,
     102,   100,   102,   101,    98,   802,   803,   103,   101,   868,
      97,   824,   103,   810,   102,   812,   813,   102,   831,    98,
     773,   774,   100,    85,   777,   120,    97,     4,    98,   102,
     102,   120,     4,   100,   103,   898,   895,   903,   897,   102,
       4,    99,   102,   102,   903,    97,    97,   100,   181,   182,
     183,   184,   185,   186,   187,   188,   853,   103,   103,   103,
     103,   927,   100,   100,   103,   107,   101,   103,   100,   882,
     883,   868,   120,     1,   103,   101,   103,   101,   103,   945,
     939,   604,    94,    93,   103,   604,   945,     4,    27,   484,
       4,   102,   615,   903,   101,   927,   615,   102,   895,   101,
     897,   107,   103,   962,   103,   101,   903,    95,   103,   796,
     103,   100,    96,   107,    94,   802,   803,   927,   103,    93,
     515,   103,   101,   810,   173,   812,   813,   103,   756,   412,
     130,   569,   173,   400,   405,   945,   332,   950,   951,   337,
     953,   796,   939,   334,   903,   333,   706,   608,   945,   769,
     903,   335,   903,   901,   796,   493,   895,   745,   745,   866,
     802,   803,   121,   852,   472,   962,   853,     4,   810,   147,
     812,   813,    49,   374,   927,   346,   783,   788,   347,   889,
     883,   868,   787,   882,   317,   318,   319,   320,   321,   322,
     323,   352,   945,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   356,   337,    24,   142,   953,   895,   604,
     897,   853,   163,    -1,   264,   855,   903,     1,    -1,    -1,
     615,    -1,    -1,    -1,    -1,    -1,   868,    -1,    -1,    -1,
      -1,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   939,   895,    -1,   897,    -1,    -1,   945,    -1,
      -1,   903,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,   404,    -1,   796,    -1,   962,    -1,   796,    -1,   802,
     803,    -1,    -1,   802,   803,    -1,    -1,   810,    -1,   812,
     813,   810,    -1,   812,   813,    -1,    -1,   939,    -1,    -1,
      -1,    -1,    -1,   945,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
     962,    -1,   106,    -1,   108,     1,    -1,    -1,    -1,    -1,
     853,    -1,    -1,    -1,   853,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   868,    -1,   131,   132,   868,
      -1,   484,    -1,    -1,    -1,   139,   140,   141,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,   895,   108,   897,    -1,   895,    -1,   897,    -1,
     903,    -1,   515,    -1,   903,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,   131,   132,    -1,    -1,
      -1,   796,    -1,    -1,   139,   140,   141,   802,   803,    -1,
      -1,    -1,    32,    -1,    -1,   810,   939,   812,   813,    -1,
     939,    -1,   945,    -1,    -1,   558,   945,   560,   561,   562,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   962,
      -1,    -1,    -1,   962,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    73,    -1,   131,   132,    -1,   853,    -1,
      -1,    -1,    -1,   139,   140,   141,    -1,    -1,    -1,    -1,
      -1,   604,    -1,   868,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   615,    -1,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    -1,   119,
     895,    -1,   897,    -1,    -1,    -1,    -1,    -1,   903,   129,
     130,    -1,    -1,   133,   134,   135,   136,    -1,    -1,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     663,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,   939,    11,    12,    13,    14,    -1,
     945,    17,    18,    -1,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,   962,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   796,    -1,    -1,    -1,    -1,    -1,   802,
     803,    -1,    -1,   139,   140,    -1,    -1,   810,     1,   812,
     813,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
     853,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,   868,    -1,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,   895,    -1,   897,    -1,    -1,    -1,    -1,    -1,
     903,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   939,    -1,    -1,    -1,
      -1,    -1,   945,    -1,    -1,    -1,   139,   140,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,   962,
      11,    12,    13,    14,    15,    -1,    17,    18,    -1,    20,
      21,    22,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,   109,   110,
     111,    -1,    -1,   114,    -1,   116,   117,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
      -1,    -1,    17,    18,    -1,    20,    21,    22,   139,   140,
      25,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    83,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,
      -1,   116,   117,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    13,    14,    -1,    -1,    17,    18,
      -1,    -1,    21,    22,   139,   140,    25,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    -1,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,
     139,   140,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    -1,    68,    -1,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,   102,    17,    18,    -1,    -1,    -1,    22,
     109,   110,   111,    26,    -1,   114,    -1,   116,   117,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,   102,    17,    18,    -1,    -1,    -1,
      22,   109,   110,   111,    26,    -1,   114,    -1,   116,   117,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
      -1,    -1,   114,    -1,   116,   117,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    22,    -1,   139,   140,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    -1,    14,    -1,   102,    17,    18,    -1,    -1,
      -1,    22,   109,   110,   111,    26,    -1,   114,    -1,   116,
     117,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,     4,    49,    50,
      51,    -1,   139,   140,    -1,    12,    -1,    14,    -1,    -1,
      17,    62,    -1,    64,    65,    22,    -1,    68,    -1,    26,
      71,    -1,    73,    -1,    75,    76,    77,    78,    35,    80,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    62,    -1,    64,   109,   110,
     111,    68,    -1,   114,    -1,   116,   117,    -1,    -1,    76,
      77,    -1,    -1,    80,     1,    -1,    83,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,   139,   140,
      17,    -1,    19,    20,    -1,    22,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    80,    -1,    -1,    83,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
     117,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    48,    49,   102,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    -1,    -1,    -1,    63,   116,
     117,    -1,    67,    -1,    -1,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    12,    82,    14,    84,
      -1,    17,    -1,    19,    20,    -1,    22,    -1,    24,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,
      -1,    47,     4,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,    -1,
      22,    -1,    68,    69,    26,    -1,    -1,    29,    -1,    -1,
      76,    77,    -1,    35,    80,    -1,    -1,    83,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,     4,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      62,    -1,    64,    -1,    22,    -1,    68,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    35,    80,    -1,
      -1,    83,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
       4,    -1,    -1,    51,    -1,    -1,    -1,    -1,    12,    -1,
      14,    -1,    -1,    17,    62,    -1,    64,    -1,    22,    -1,
      68,    -1,    26,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,     9,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    -1,    -1,    -1,    68,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,    83,
      44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   273,   274,   283,   284,   285,   286,     4,   146,
     280,   281,     0,   275,   277,   287,   288,   289,   293,   342,
     352,   369,   376,   377,   378,   379,   388,   284,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   290,   291,
     292,   275,   288,   379,    98,     4,   280,   108,   280,     1,
      19,    24,    28,    43,    69,   394,   292,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   380,   381,   382,     1,
     106,   278,    12,    14,    17,    22,    26,    35,    42,    47,
      51,    62,    64,    68,    76,    77,    80,    83,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   280,
     307,     4,     4,     4,     4,   147,   280,   383,   384,   386,
     107,   100,   282,   111,   111,     3,   159,   159,   159,     4,
     107,   370,   371,   107,   354,   355,   107,   343,   344,   107,
     295,   296,    97,    99,   102,   385,   387,   274,   106,   279,
     102,   153,   100,   372,   147,   297,   353,   297,   100,   345,
     155,   297,   294,    99,   384,   389,     5,     6,     7,     8,
      11,    18,    32,    49,    50,    65,    71,    73,    75,    78,
     102,   109,   110,   111,   114,   116,   117,   139,   140,   144,
     145,   151,   155,   163,   164,   165,   166,   167,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   208,   280,   276,   287,   275,   306,   309,   310,
     311,   312,   313,   315,   275,   373,   374,   375,   279,    97,
     100,   356,   275,   289,   302,   303,   304,   305,   316,   323,
     327,   330,   335,   346,   347,   348,   279,    97,   100,   298,
     389,    98,   108,   102,    83,   148,   149,   157,   102,   102,
     102,    83,   151,   155,   195,   208,   280,   190,   190,   190,
     190,   190,   190,   190,   190,   108,   108,    98,   108,   102,
     103,    97,   139,   140,   141,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   131,   132,   207,   111,   112,   113,
     109,   110,   129,   130,    10,    45,   104,   105,   135,   136,
     133,   134,   114,   119,   115,   137,   118,   138,    98,   102,
     101,    53,    55,    60,   314,   103,    97,    97,   120,   120,
       4,   101,    97,   147,   275,   357,   358,   359,   360,   362,
     364,   367,   279,   290,   100,   106,   213,   308,   101,   348,
     297,   275,   289,   299,   300,   301,   302,   303,   304,   316,
     323,   327,   330,   335,   339,   279,   171,     4,   208,   102,
      98,   100,   349,   148,    83,   148,   208,   111,   159,   192,
     193,   194,   192,   192,   111,   103,   159,     4,     4,   171,
       4,    53,    60,   161,   162,   168,   208,   208,     4,   208,
     190,   190,   190,   190,   195,   195,   196,   196,   148,   148,
     197,   197,   197,   197,   198,   198,   199,   200,   201,   202,
     208,   203,   171,   168,   148,   148,     1,   106,   310,   311,
     312,   313,   315,    66,   208,   222,   223,   349,   222,   120,
     101,   375,    49,   361,   101,   359,     4,    20,    29,    30,
      40,    83,   148,   328,   331,   332,   334,   336,     1,     4,
      13,    18,    20,    21,    25,    34,    36,    37,    38,    39,
      46,    61,    70,    72,    74,    78,    79,    81,    85,   106,
     148,   151,   155,   167,   174,   175,   177,   188,   189,   190,
     206,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     224,   227,   229,   230,   231,   238,   239,   240,   243,   244,
     252,   253,   254,   255,   256,   257,   259,   260,   265,   266,
     267,   268,   270,   280,   290,   101,   301,    99,   103,   168,
     171,   222,   350,   351,   103,   103,   103,   103,   103,   194,
     103,   103,   103,   187,   192,    99,   160,   208,   160,    97,
     103,   107,    99,   103,     4,     4,   148,   208,   209,    29,
      83,   148,   102,   148,   148,    52,    52,   280,     4,    52,
      71,   220,   221,   280,   281,   329,   392,   106,   213,   340,
     106,   213,   341,   101,   107,     1,   106,   213,   148,     1,
     106,   212,   102,     1,   102,   395,   395,     4,    15,    23,
     395,   102,   208,   258,   395,   258,   213,   213,   213,   102,
       1,   102,     4,   220,     1,   106,     1,   106,     1,   106,
       1,   106,     1,   106,     1,   106,     1,   106,   101,   211,
       1,   106,     1,   106,   117,   103,    99,   101,    97,   190,
     190,   190,   190,   103,   162,   208,    98,   148,     4,     4,
      71,   306,     4,   225,   226,   220,   280,   148,   148,   102,
     120,    32,    73,   104,   105,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   129,   130,   133,   134,   135,
     136,   139,   140,   333,    98,     1,    97,   106,   102,   392,
      71,    98,   100,   211,   225,    85,   148,   167,   174,   175,
     177,   188,   189,   206,   219,   228,   245,   248,   251,   148,
       1,   106,   209,     1,   106,   208,   210,   208,     1,   106,
     208,     1,   106,    16,    33,   261,   262,   264,   208,   219,
     269,   241,     1,   210,     4,   158,   159,   101,   222,   190,
     208,     4,   102,   102,   392,    98,   103,   120,     1,    97,
     106,   106,   390,   102,   102,   306,   222,   102,   309,   312,
     315,   221,   306,   100,   309,   275,   317,   320,   321,   102,
       4,   271,   272,     1,   106,   397,    97,     4,     1,   106,
       1,   103,   396,   103,   396,   102,   213,   213,   262,   264,
     103,   210,   103,   103,   102,   179,   349,   158,    99,   100,
     106,   368,   306,   306,   100,   309,   107,   337,   338,   209,
     226,   100,   148,   148,   103,   148,    97,    99,   103,   317,
      99,    93,    94,   101,   275,   318,   321,   275,   319,   320,
     210,   120,    97,   103,   210,   246,   249,   228,     1,    41,
     398,   212,   212,   100,   232,   147,   155,   212,     1,   212,
     212,   103,   101,   103,   103,   275,   366,    99,    11,    71,
     275,   324,   325,   326,     4,     4,     4,   101,   393,   393,
     393,   103,   208,   272,   212,   397,   208,    27,    15,    23,
     233,   234,   235,   236,   237,     4,   263,   263,   212,   213,
     368,   368,    93,    94,   101,   392,   102,   102,    95,    96,
     101,   275,   326,   275,   325,   103,   103,    97,   103,   393,
     106,   213,   322,   322,     1,   106,   247,   250,   251,   396,
     212,   209,   107,   101,   235,   215,   237,   103,   103,   242,
     368,   368,   393,   100,   168,   168,   391,   391,   391,   148,
     392,   392,   396,   212,   107,   213,   213,   275,   275,   363,
     366,   103,   103,   213,   213,     4,   212,    94,    93,   101,
     390,   390,   103,   368,   368,   393,   365
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   143,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   147,   148,   148,   149,   149,   150,   150,   150,   151,
     151,   152,   152,   152,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     157,   157,   158,   158,   159,   160,   161,   161,   162,   162,
     162,   163,   163,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   165,   166,   166,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   171,   171,   172,
     173,   173,   174,   175,   176,   177,   178,   178,   179,   179,
     180,   180,   181,   182,   183,   184,   185,   186,   186,   186,
     186,   186,   187,   187,   187,   187,   188,   189,   190,   190,
     190,   190,   190,   190,   190,   191,   191,   191,   191,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   195,
     195,   196,   196,   196,   197,   197,   197,   198,   198,   198,
     198,   198,   198,   198,   199,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203,   204,   204,   205,   205,   206,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   208,   208,   209,   210,   211,   211,   211,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   213,   213,   214,   214,   215,   215,   216,   217,   218,
     218,   218,   218,   219,   220,   220,   221,   221,   222,   222,
     222,   223,   224,   225,   225,   226,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     228,   228,   228,   228,   228,   228,   228,   229,   229,   230,
     230,   231,   232,   233,   233,   234,   234,   235,   236,   236,
     237,   237,   238,   238,   238,   238,   239,   240,   240,   241,
     242,   240,   243,   243,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   250,   251,   251,   252,   253,   253,
     253,   253,   253,   254,   254,   255,   255,   256,   256,   256,
     256,   256,   256,   257,   257,   258,   258,   259,   259,   260,
     260,   260,   261,   261,   262,   262,   262,   263,   263,   264,
     265,   266,   267,   268,   269,   269,   270,   271,   271,   272,
     273,   273,   274,   274,   275,   275,   276,   276,   278,   277,
     279,   279,   280,   280,   281,   281,   282,   283,   283,   284,
     284,   285,   285,   286,   286,   287,   287,   288,   288,   289,
     289,   289,   289,   289,   290,   290,   291,   291,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   294,   293,   295,   295,   296,   296,   296,   297,
     297,   298,   299,   299,   300,   300,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   302,   302,   303,   303,
     304,   305,   305,   306,   306,   306,   306,   307,   307,   308,
     308,   309,   309,   310,   310,   311,   311,   312,   313,   313,
     314,   314,   314,   315,   316,   317,   317,   318,   318,   319,
     319,   320,   321,   322,   322,   323,   323,   324,   324,   325,
     326,   327,   328,   328,   329,   330,   331,   331,   332,   332,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   334,   334,   335,   336,   337,   337,   338,   338,
     339,   340,   340,   341,   341,   342,   343,   343,   344,   345,
     346,   346,   347,   347,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   349,   349,   350,   350,   351,   351,   353,
     352,   354,   354,   355,   356,   357,   357,   358,   358,   359,
     359,   359,   359,   360,   360,   361,   361,   363,   362,   365,
     364,   366,   366,   366,   366,   367,   368,   368,   369,   370,
     370,   371,   372,   372,   373,   373,   374,   374,   375,   375,
     376,   376,   377,   378,   378,   379,   379,   380,   380,   381,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   383,
     383,   384,   385,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   394,   395,   395,   396,   396,   397,   397,
     398,   398
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     0,     2,     1,     1,     1,     3,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     4,
       4,     0,     1,     4,     4,     0,     1,     1,     3,     1,
       3,     4,     2,     2,     1,     5,     7,     3,     0,     1,
       4,     4,     4,     4,     3,     2,     4,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     4,     5,     6,     5,     5,
       5,     0,     1,     1,     2,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     0,     1,     1,     2,     1,     3,     2,
       2,     2,     2,     2,     1,     3,     1,     3,     1,     1,
       1,     5,     3,     1,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     5,     3,     0,     1,     1,     2,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     2,     5,     5,     0,
       0,     7,     7,     7,     9,     0,     1,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     3,     8,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     4,     3,
       3,     4,     3,     3,     3,     0,     1,     3,     3,     3,
       3,     4,     1,     2,     6,     6,     2,     0,     1,     2,
       2,     2,     5,     5,     1,     1,     6,     1,     3,     3,
       2,     2,     0,     1,     0,     1,     0,     1,     0,     6,
       0,     1,     1,     2,     2,     3,     4,     1,     2,     1,
       1,     5,     5,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     8,     0,     1,     2,     2,     4,     1,
       3,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     6,     5,     5,
       2,     7,     7,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     1,     4,     3,     3,
       0,     1,     1,     4,     9,     2,     2,     0,     1,     0,
       1,     5,     5,     1,     1,     6,    10,     2,     2,     5,
       5,     8,     5,     5,     2,     4,     1,     1,     7,    10,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     7,     4,     5,     0,     1,     5,     5,
       7,     1,     1,     1,     1,     7,     0,     1,     2,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     0,     1,     1,     3,     0,
       8,     0,     1,     2,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     8,     8,     0,     1,     0,    10,     0,
      13,     3,     3,     6,     6,     6,     1,     2,     7,     0,
       1,     2,     3,     4,     0,     1,     1,     3,     2,     4,
       9,     9,     1,     1,     2,     6,     7,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     0,     1,     1,     3,     0,     0,     0,     0,
       0,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 119 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_literal",1);}
#line 2667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 120 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 121 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 122 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 124 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 134 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 138 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = new string("");}
#line 2739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.str) = (yyvsp[0].r.str);}
#line 2865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.str) = (yyvsp[0].r.str);}
#line 2871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[-1].r.known_type);(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = new string("");}
#line 2895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 231 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 250 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 254 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 257 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 258 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 261 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 281 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 285 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 288 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 293 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 321 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 332 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 333 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 334 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 335 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 346 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 347 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 348 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 371 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 381 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 403 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 426 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 427 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 457 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 461 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3783 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3789 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 466 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3801 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3807 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3813 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3819 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3825 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3831 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3837 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3843 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 486 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3855 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 487 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3861 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 491 "yacc.y" /* yacc.c:1646  */
    {	l.a("local_variable_declaration",2);
				SPL->addLocalVariable(string((yyvsp[-1].r.str)),*(yyvsp[0].r.identifiers),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no)) ;
			}
#line 3869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 497 "yacc.y" /* yacc.c:1646  */
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 502 "yacc.y" /* yacc.c:1646  */
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
				  (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 509 "yacc.y" /* yacc.c:1646  */
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[0].r.str)) ; 
		  }
#line 3895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 513 "yacc.y" /* yacc.c:1646  */
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[-2].r.str));
		   }
#line 3903 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 518 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3909 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 519 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 520 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3939 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 530 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 3945 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 533 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 3951 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 542 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3957 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3963 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 544 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 545 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 546 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 547 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 548 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 549 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 3999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 550 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 551 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 552 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 553 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 554 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 555 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 559 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 568 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 572 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 581 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 582 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 585 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 586 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 589 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 592 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4149 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 593 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 596 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 600 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4173 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4179 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4185 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 603 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4191 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 606 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4203 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 610 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4209 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 611 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4215 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 611 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 611 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 614 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 615 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);}
#line 4245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 624 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 628 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 629 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 632 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 633 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4287 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4299 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4305 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 646 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4311 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4317 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 650 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4323 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4329 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 654 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4335 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4341 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4347 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 657 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4353 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4359 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 661 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4365 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 664 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4371 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 665 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4377 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 668 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4383 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4389 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4395 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4401 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4407 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4413 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4419 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4425 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4431 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4437 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4443 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4449 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4455 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4461 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 690 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4467 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4473 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 694 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4479 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4485 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 698 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4491 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 702 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4497 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4503 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4509 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4515 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 712 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4521 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 715 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4527 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4533 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4539 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4545 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 726 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4551 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 729 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4557 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 730 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4563 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 733 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4569 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 736 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4575 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4581 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 740 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4587 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 741 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4593 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 744 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4605 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 748 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4611 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 749 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 752 "yacc.y" /* yacc.c:1646  */
    {SPL->addNamespace(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);SPL->endScope();}
#line 4629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 762 "yacc.y" /* yacc.c:1646  */
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[0].r.str));
		  }
#line 4649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 766 "yacc.y" /* yacc.c:1646  */
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[-1].r.base)) + string((yyvsp[0].r.str)));
		}
#line 4657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[-1].r.str)) + ".");}
#line 4663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[-2].r.base) + string((yyvsp[-1].r.str)) + ".");}
#line 4669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 777 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 780 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 784 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 785 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 806 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 807 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 820 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
#line 4786 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 825 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 4795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 832 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 838 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 845 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
#line 4821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 846 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
#line 4827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
#line 4833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 848 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
#line 4839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 849 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
#line 4845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 850 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
#line 4851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 851 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 4857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 852 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
#line 4863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 853 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
#line 4869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
#line 4875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 855 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
#line 4881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 856 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
#line 4887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 857 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
#line 4893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 858 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
#line 4899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 869 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 4913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 4919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 878 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();}
#line 4931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 882 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 883 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);(yyval.r.bases) = new queue<string>();}
#line 4943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 887 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 893 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[-2].r.bases);
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4963 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 901 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 905 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 906 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 909 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 4987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 910 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 4993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 913 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 914 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 915 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 916 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 917 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 918 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 919 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 921 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 922 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 926 "yacc.y" /* yacc.c:1646  */
    {		l.a("constant_declaration",4);
				//SPL->add_var(*$<r.modifiers>2,1);
		  }
#line 5061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 933 "yacc.y" /* yacc.c:1646  */
    {
		        SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
  		      l.a("field_declaration",4);
	      }
#line 5076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 938 "yacc.y" /* yacc.c:1646  */
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
        }
#line 5085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 945 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2); SPL->endScope();}
#line 5091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 950 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type));
      }
#line 5099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 954 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);
      }
#line 5107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 961 "yacc.y" /* yacc.c:1646  */
    {	   l.a("formal_parameter_list_opt",0);
             (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
#line 5115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 965 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 969 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 973 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[-2].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[-2].r.types_ids))->front()); ((yyvsp[-2].r.types_ids))->pop();}
            while(!((yyvsp[0].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[0].r.types_ids))->front()); ((yyvsp[0].r.types_ids))->pop();}
        }
#line 5142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 981 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 982 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 985 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 986 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 994 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 999 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
      }
#line 5184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
       }
#line 5202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1018 "yacc.y" /* yacc.c:1646  */
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[0].r.base) ;
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1026 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[0].r.base);
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1036 "yacc.y" /* yacc.c:1646  */
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));  
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no); 
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1047 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base) ;
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1055 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base);
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1066 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1067 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1071 "yacc.y" /* yacc.c:1646  */
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1088 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1091 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1092 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1096 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1102 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1108 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1111 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1112 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1115 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1119 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1123 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1144 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1146 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1149 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1157 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1160 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1164 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1165 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1168 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1169 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1172 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1174 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1175 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1178 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1180 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1184 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1188 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1202 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1223 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1226 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1232 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1235 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1242 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1245 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1246 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1250 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1253 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1254 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1255 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1256 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1257 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1258 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1259 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1260 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1262 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1267 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1268 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1271 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1272 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1275 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1276 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1282 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addInterface(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));		
  }
#line 5810 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1285 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);SPL->endScope();}
#line 5816 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1289 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 5822 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1290 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5828 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1293 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5834 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1296 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5840 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1299 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5846 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1300 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5852 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1303 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5858 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1304 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5864 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1307 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5870 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1308 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5876 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1309 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5882 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1310 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5888 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1314 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5894 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1315 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5900 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5906 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1319 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5912 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1325 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5918 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1325 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5924 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1332 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1332 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1336 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1337 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1338 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1339 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1342 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1347 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1348 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1353 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5984 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1356 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5990 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1357 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5996 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1360 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6002 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1363 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6008 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1364 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6014 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1367 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6020 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1368 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1371 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6032 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1372 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6038 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1375 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6044 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1376 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6050 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1381 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6056 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1382 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6062 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1387 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6068 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1390 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6074 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1391 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6080 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1394 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6086 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1395 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6092 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1398 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6098 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1399 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1402 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1405 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1406 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1407 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6128 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1408 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6134 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1409 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1410 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1411 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6152 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1412 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6158 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1413 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6164 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1416 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6170 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1417 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6176 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1420 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6182 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1423 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1424 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6194 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1427 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6200 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1430 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6206 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1437 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1440 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6218 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1443 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6224 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1446 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6230 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1449 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1452 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6242 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1460 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0);}
#line 6248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1461 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0,1);yyerrok;yyclearin;}
#line 6254 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1464 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 6260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1465 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6266 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1468 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 6272 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1469 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6278 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1472 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0);}
#line 6284 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1473 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0,1);}
#line 6290 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1476 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0);}
#line 6296 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1477 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0,1);yyerrok;}
#line 6302 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6306 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1482 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




