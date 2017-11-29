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
#line 10 "yacc.y" /* yacc.c:339  */

	#define YYERROR_VERBOSE 1
	#define YYDEBUG 1
	
	#include <iostream>
	#include <FlexLexer.h>
	#include <stack>
	#include <string>
	#include<queue>
	#include "../logger/Logger.h"
	#include "../Error Handler/error_handler.h"

	#include "../Symbol Table/symbol_parser.h"

	symbolParser* SPL = new symbolParser();
	queue<string>att;

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	Logger l("parser.log");
	void yyerror(const char *);
		


#line 96 "yacc.tab.cpp" /* yacc.c:339  */

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
    BAD_IDENTIFIER = 260,
    INTEGER_LITERAL = 261,
    REAL_LITERAL = 262,
    CHARACTER_LITERAL = 263,
    STRING_LITERAL = 264,
    ABSTRACT = 265,
    AS = 266,
    BASE = 267,
    BOOL = 268,
    BREAK = 269,
    BYTE = 270,
    CASE = 271,
    CATCH = 272,
    CHAR = 273,
    CHECKED = 274,
    CLASS = 275,
    CONST = 276,
    CONTINUE = 277,
    DECIMAL = 278,
    DEFAULT = 279,
    DELEGATE = 280,
    DO = 281,
    DOUBLE = 282,
    ELSE = 283,
    ENUM = 284,
    EVENT = 285,
    EXPLICIT = 286,
    EXTERN = 287,
    FALSE = 288,
    FINALLY = 289,
    FIXED = 290,
    FLOAT = 291,
    FOR = 292,
    FOREACH = 293,
    GOTO = 294,
    IF = 295,
    IMPLICIT = 296,
    IN = 297,
    INT = 298,
    INTERFACE = 299,
    INTERNAL = 300,
    IS = 301,
    LOCK = 302,
    LONG = 303,
    NAMESPACE = 304,
    NEW = 305,
    NULL_LITERAL = 306,
    OBJECT = 307,
    OPERATOR = 308,
    OUT = 309,
    OVERRIDE = 310,
    PARAMS = 311,
    PRIVATE = 312,
    PROTECTED = 313,
    PUBLIC = 314,
    READONLY = 315,
    REF = 316,
    RETURN = 317,
    SBYTE = 318,
    SEALED = 319,
    SHORT = 320,
    SIZEOF = 321,
    STACKALLOC = 322,
    STATIC = 323,
    STRING = 324,
    STRUCT = 325,
    SWITCH = 326,
    THIS = 327,
    THROW = 328,
    TRUE = 329,
    TRY = 330,
    TYPEOF = 331,
    UINT = 332,
    ULONG = 333,
    UNCHECKED = 334,
    UNSAFE = 335,
    USHORT = 336,
    USING = 337,
    VIRTUAL = 338,
    VOID = 339,
    VOLATILE = 340,
    WHILE = 341,
    ASSEMBLY = 342,
    FIELD = 343,
    METHOD = 344,
    MODULE = 345,
    PARAM = 346,
    PROPERTY = 347,
    TYPE = 348,
    GET = 349,
    SET = 350,
    ADD = 351,
    REMOVE = 352,
    COMMA = 353,
    LEFT_BRACKET = 354,
    RIGHT_BRACKET = 355,
    LEFT_BRACKET_GROUP = 356,
    RIGHT_BRACKET_GROUP = 357,
    LEFT_BRACKET_CIRCLE = 358,
    RIGHT_BRACKET_CIRCLE = 359,
    GREATER = 360,
    SMALLER = 361,
    SEMICOLON = 362,
    COLON = 363,
    DOT = 364,
    PLUS = 365,
    MINUS = 366,
    STAR = 367,
    SLASH = 368,
    PERCENT = 369,
    AND = 370,
    OR = 371,
    EXCLAMATION_POINT = 372,
    TILDE = 373,
    QUESTION_MARK = 374,
    POWER = 375,
    EQUAL = 376,
    PLUSEQ = 377,
    MINUSEQ = 378,
    STAREQ = 379,
    DIVEQ = 380,
    MODEQ = 381,
    XOREQ = 382,
    ANDEQ = 383,
    OREQ = 384,
    LTLT = 385,
    GTGT = 386,
    GTGTEQ = 387,
    LTLTEQ = 388,
    EQEQ = 389,
    NOTEQ = 390,
    LEQ = 391,
    GEQ = 392,
    ANDAND = 393,
    OROR = 394,
    PLUSPLUS = 395,
    MINUSMINUS = 396,
    ARROW = 397,
    THEN = 398
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "yacc.y" /* yacc.c:355  */

	struct R{
		int i;
		float f;
		char c;
		char* str;
		int line_no;
		int col_no;

		string *modifier,*base;
		queue<string> *modifiers ,*bases;

		}r;
	

#line 296 "yacc.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 313 "yacc.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   2765

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  243
/* YYNRULES -- Number of rules.  */
#define YYNRULES  555
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  936

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   398

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
     135,   136,   137,   138,   139,   140,   141,   142,   143
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   116,   116,   117,   118,   119,   120,   121,   124,   125,
     131,   134,   138,   139,   142,   143,   146,   147,   148,   151,
     152,   155,   156,   157,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   171,   172,   175,   176,   179,   180,   183,
     184,   185,   188,   189,   192,   196,   200,   201,   204,   205,
     206,   209,   210,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   227,   230,   231,   232,   235,
     236,   239,   240,   243,   244,   247,   248,   251,   252,   255,
     258,   259,   262,   265,   268,   271,   274,   275,   278,   279,
     282,   283,   286,   289,   292,   295,   298,   301,   302,   303,
     304,   305,   308,   309,   310,   311,   314,   317,   320,   321,
     322,   323,   324,   325,   326,   334,   335,   336,   337,   338,
     339,   342,   343,   346,   347,   350,   351,   354,   355,   356,
     357,   360,   361,   362,   365,   366,   367,   370,   371,   372,
     373,   374,   375,   376,   379,   380,   381,   384,   385,   388,
     389,   392,   393,   396,   397,   400,   401,   404,   405,   408,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   424,   425,   428,   431,   435,   436,   437,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   455,   458,   459,   463,   464,   467,   470,   473,   474,
     475,   476,   479,   482,   483,   486,   487,   490,   491,   492,
     495,   498,   501,   502,   505,   508,   509,   512,   513,   514,
     515,   516,   517,   518,   521,   522,   525,   526,   529,   532,
     535,   536,   539,   540,   543,   546,   547,   550,   551,   554,
     555,   556,   557,   560,   563,   566,   567,   570,   571,   575,
     576,   579,   580,   583,   584,   587,   588,   591,   594,   597,
     598,   601,   604,   605,   606,   607,   608,   611,   612,   615,
     616,   619,   620,   621,   622,   623,   624,   627,   628,   631,
     632,   635,   636,   639,   640,   641,   644,   645,   648,   649,
     650,   653,   654,   657,   660,   663,   666,   669,   672,   673,
     677,   680,   681,   684,   687,   688,   691,   692,   695,   696,
     699,   700,   703,   706,   707,   716,   717,   720,   721,   724,
     727,   728,   731,   732,   735,   736,   739,   740,   743,   744,
     747,   748,   751,   752,   753,   754,   755,   767,   771,   778,
     784,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   804,   805,   806,   811,   810,   820,   821,   824,
     825,   826,   829,   830,   833,   836,   837,   840,   841,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   854,   857,
     858,   861,   862,   865,   869,   870,   873,   874,   877,   878,
     881,   882,   885,   886,   889,   890,   893,   896,   897,   898,
     902,   905,   911,   912,   915,   916,   919,   920,   923,   929,
     935,   936,   939,   940,   946,   947,   950,   956,   962,   968,
     970,   973,   977,   980,   981,   984,   985,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1012,
    1013,  1016,  1019,  1022,  1023,  1026,  1027,  1043,  1046,  1047,
    1050,  1051,  1056,  1059,  1060,  1063,  1066,  1069,  1070,  1073,
    1074,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1086,
    1091,  1092,  1095,  1096,  1099,  1100,  1105,  1108,  1109,  1112,
    1115,  1118,  1119,  1122,  1123,  1126,  1127,  1128,  1129,  1133,
    1134,  1137,  1138,  1141,  1147,  1155,  1156,  1157,  1158,  1161,
    1166,  1167,  1172,  1175,  1176,  1179,  1182,  1183,  1186,  1187,
    1190,  1191,  1194,  1195,  1200,  1201,  1206,  1209,  1210,  1213,
    1214,  1217,  1218,  1221,  1224,  1225,  1226,  1227,  1228,  1229,
    1230,  1231,  1232,  1235,  1236,  1239,  1242,  1243,  1246,  1249,
    1256,  1259,  1262,  1265,  1268,  1271
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RANK_SPECIFIER", "\"id\"", "\"bad_id\"",
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
  "unsafe_statement", "while_statement", "do_statement", "for_statement",
  "for_initializer_opt", "for_condition_opt", "for_iterator_opt",
  "for_initializer", "for_condition", "for_iterator",
  "statement_expression_list", "foreach_statement", "jump_statement",
  "break_statement", "continue_statement", "goto_statement",
  "return_statement", "expression_opt", "throw_statement", "try_statement",
  "catch_clauses", "catch_clause", "identifier_opt", "finally_clause",
  "checked_statement", "unchecked_statement", "lock_statement",
  "using_statement", "resource_acquisition", "fixed_statement",
  "fixed_pointer_declarators", "fixed_pointer_declarator",
  "compilation_unit", "using_directives_opt", "attributes_opt",
  "namespace_member_declarations_opt", "namespace_declaration",
  "comma_opt", "qualified_identifier", "qualifier", "namespace_body",
  "using_directives", "using_directive", "using_alias_directive",
  "using_namespace_directive", "namespace_member_declarations",
  "namespace_member_declaration", "type_declaration", "modifiers_opt",
  "modifiers", "modifier", "class_declaration", "$@1", "class_base_opt",
  "class_base", "interface_type_list", "class_body",
  "class_member_declarations_opt", "class_member_declarations",
  "class_member_declaration", "constant_declaration", "field_declaration",
  "method_declaration", "method_header", "formal_parameter_list_opt",
  "return_type", "method_body", "formal_parameter_list",
  "formal_parameter", "fixed_parameter", "parameter_modifier_opt",
  "parameter_array", "property_declaration", "accessor_declarations",
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
  "variable_initializer_list", "interface_declaration",
  "interface_base_opt", "interface_base", "interface_body",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration",
  "new_opt", "interface_property_declaration",
  "interface_indexer_declaration", "interface_accessors",
  "interface_event_declaration", "interface_empty_body",
  "enum_declaration", "enum_base_opt", "enum_base", "enum_body",
  "enum_member_declarations_opt", "enum_member_declarations",
  "enum_member_declaration", "delegate_declaration", "attributes",
  "attribute_sections", "attribute_section",
  "attribute_target_specifier_opt", "attribute_target_specifier",
  "attribute_target", "attribute_list", "attribute",
  "attribute_arguments_opt", "attribute_name", "attribute_arguments",
  "ENTER_attrib", "EXIT_attrib", "ENTER_accessor_decl",
  "EXIT_accessor_decl", "ENTER_getset", "EXIT_getset", YY_NULLPTR
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
     395,   396,   397,   398
};
# endif

#define YYPACT_NINF -770

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-770)))

#define YYTABLE_NINF -551

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,    61,    60,    11,   -33,  -770,  -770,  -770,   -58,    56,
    -770,   291,  -770,  2522,  -770,   188,  -770,  -770,  -770,  -770,
    -770,  -770,  -770,  -770,    11,  -770,   251,  -770,  -770,   336,
    -770,  -770,    -4,  -770,  -770,  -770,   336,  -770,  -770,  -770,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,   361,  2637,
    -770,  2680,  -770,  -770,   489,   267,   108,  -770,   261,   404,
    1078,   408,   430,   433,  -770,  -770,  -770,  -770,  -770,  -770,
    -770,  -770,  -770,  -770,   336,  -770,   352,  -770,  -770,   -33,
     292,   364,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,   366,  -770,   401,
    -770,   545,  -770,  -770,  -770,  -770,  -770,  -770,   545,   545,
     546,   445,   447,   454,  -770,  -770,   210,  -770,   463,  -770,
     194,  -770,  -770,   250,  -770,  -770,  -770,  -770,  -770,  -770,
    -770,  -770,   466,   426,   469,  -770,   336,   482,  -770,   336,
     483,  -770,   172,  -770,  2366,  -770,  -770,   484,   295,  -770,
     490,   491,   486,   279,  -770,   299,   292,   491,   304,   292,
     491,   305,   292,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
      18,   493,  -770,  1274,  -770,   495,  -770,  -770,   499,   500,
    2079,  2366,  2366,  2366,  2366,  2366,  2366,  2366,  2366,  -770,
    -770,   496,   497,   157,   501,  -770,  -770,  -770,  -770,   488,
     509,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
    -770,  -770,  -770,  -770,   277,  -770,  -770,  -770,   793,  -770,
     385,   140,   133,     6,   329,   494,   498,   510,   473,   -61,
    -770,  -770,  -770,   289,  -770,   336,   336,   311,   292,   321,
     511,   515,  -770,  -770,  -770,   612,   525,   519,  -770,  -770,
     588,   538,   326,  -770,  -770,  -770,  -770,  -770,  -770,  2637,
    -770,  -770,  -770,  -770,    73,  -770,  -770,  -770,  -770,  -770,
     540,   331,  -770,  -770,  -770,  2366,   640,  2366,   366,    -9,
     547,   167,  1274,  2650,  2366,    28,    69,    74,   396,   541,
     174,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,   643,
     644,  2366,   645,  1878,  -770,  2366,  -770,  -770,   646,  -770,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
    2366,  2366,  2366,  2366,  2366,  2366,  2366,  2366,  1274,  1274,
    2366,  2366,  2366,  2366,  2366,  2366,  2366,  2366,  2366,  2366,
    2366,  2366,  2366,  1878,   491,  -770,  2637,  -770,   549,   337,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
    -770,  -770,  1274,  -770,  1274,   114,    11,   532,  -770,   353,
    -770,  2607,  -770,  -770,  2583,  1532,  -770,  -770,  -770,  -770,
    -770,   243,  -770,   550,  1878,  2366,  1964,  -770,   127,   202,
     227,   553,  -770,  -770,   554,    28,  -770,   555,   556,  2165,
    2452,    28,  -770,  -770,   377,  -770,  2366,  2366,   563,  -770,
     558,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,   385,
     385,   140,   140,   401,   401,   133,   133,   133,   133,     6,
       6,   329,   494,   498,   510,   557,   473,   392,   562,   933,
    -770,  -770,    52,    77,  -770,  -770,  -770,  2366,  -770,  -770,
    1274,    78,    19,   175,  1274,  1274,   614,   615,    81,    75,
    -770,   253,  -770,  -770,   264,   393,   118,   411,  1274,   125,
    1648,   566,   567,   568,    84,   569,   571,  2366,   572,  2366,
     577,   421,   577,   585,   586,  -770,    82,   496,   497,   105,
     112,   122,   129,   181,   213,   793,  -770,  -770,  -770,  -770,
     578,  1532,  -770,  -770,  -770,   184,   190,  -770,   191,  -770,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
      72,  -770,  -770,   589,   395,  1274,  -770,  -770,  -770,  -770,
     592,   597,  -770,  -770,  -770,  -770,  2366,  -770,  2366,  2366,
    2366,  -770,   594,  -770,  -770,  -770,  -770,  1878,  -770,  2366,
    -770,  -770,   686,  -770,  -770,  -770,  -770,    83,   593,   600,
     601,   279,    85,    86,  1274,  1274,   603,   146,  1272,   605,
     101,  -770,   604,    32,   610,   611,  -770,  -770,  -770,  -770,
    -770,  -770,  1532,  -770,  -770,  -770,    85,  -770,  -770,   625,
    1274,  2280,  1274,   217,  2366,   229,  2366,  2366,  -770,   237,
    2366,   240,    33,  -770,  -770,  2280,  2366,   595,   616,  -770,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,   545,   141,
    -770,  1763,  -770,  -770,  -770,  -770,  2366,  -770,  -770,   619,
     265,   279,   279,   617,    11,   609,   598,   115,  -770,   150,
    -770,   162,   206,   279,  1964,  -770,  -770,  -770,  -770,  -770,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,   620,    11,  -770,
     711,  -770,   279,   623,  -770,    11,    11,  -770,   627,   626,
      88,  -770,  -770,   241,  -770,   628,    89,  -770,  -770,   244,
    -770,  -770,  -770,   631,   632,  -770,  -770,   634,  -770,  -770,
     422,   577,    33,  -770,  -770,  -770,  -770,   637,   638,   649,
     545,  2366,  -770,  -770,  -770,   641,   630,  -770,  -770,   642,
     647,    11,   439,   636,  2366,  -770,   750,  -770,  -770,   654,
    1274,  1274,   652,  -770,  1274,   440,  -770,   653,    11,   446,
     351,   656,   357,   363,  2366,   639,   209,  -770,  2366,  2366,
    2366,   717,  -770,  -770,  1648,  1648,   660,   250,  -770,  -770,
    -770,  -770,  1648,  1648,  -770,  -770,  -770,   662,   577,  -770,
     265,   265,   423,   661,  -770,    29,  -770,  -770,  -770,  -770,
      11,    92,    93,  -770,    94,  -770,  -770,   663,  -770,  -770,
    -770,  -770,   669,  -770,  -770,   673,  -770,  -770,   665,  2366,
     768,  1648,  -770,   773,  -770,   668,  -770,  2366,   748,  -770,
     318,  -770,   774,   774,  -770,  -770,  -770,  -770,  -770,  -770,
     265,   265,  -770,   676,   678,   680,   409,   682,    11,    11,
     681,   683,   281,  -770,   286,   286,  -770,   245,  -770,  -770,
    -770,  2366,  2366,   684,  1648,  2366,   685,   687,   318,  -770,
    1416,  -770,  -770,   688,   690,   369,   371,  -770,    11,  1878,
    1878,  -770,  -770,  -770,   689,  -770,   695,  -770,  -770,  -770,
    1274,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,   691,
    -770,   628,   692,  1648,  -770,   694,  -770,  -770,  -770,  1532,
    -770,   577,   577,   702,   704,   698,   699,   700,   577,   577,
    -770,    95,  -770,  -770,  1648,  1648,  -770,  -770,  -770,  -770,
     265,   265,  -770,  -770,  -770,  -770,  -770,   703,  -770,  -770,
    -770,  -770,  -770,  -770,  -770,  -770
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     306,     0,     0,   308,   307,   320,   322,   323,   315,     0,
      10,     0,     1,   337,   330,   308,   328,   331,   332,   333,
     334,   335,   336,   309,   526,   527,     0,   321,   317,     0,
     327,   326,   316,   341,   342,   343,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,     0,   338,
     339,   337,   329,   528,   531,   315,     0,   318,     0,     0,
       0,     0,     0,     0,   340,   536,   541,   534,   535,   537,
     538,   539,   540,   542,     0,   532,     0,   325,   324,   306,
     313,   357,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   389,    15,   388,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   513,   487,   463,   548,    11,     0,   543,   546,   533,
     308,   314,   312,     0,   355,   358,    38,    37,    44,    40,
      39,    41,     0,     0,     0,   514,     0,     0,   488,     0,
       0,   464,     0,   551,    75,   545,   547,     0,   308,   362,
     359,   360,     0,   308,   515,   308,   313,   489,   308,   313,
     465,   308,   313,   551,   544,   529,     3,     4,     5,     6,
       0,     0,     9,     0,     7,     0,    79,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       2,     0,     0,    97,    52,    51,    55,    56,    57,     0,
      76,    58,    59,    99,   100,    60,    84,    54,    61,    63,
      64,   101,   114,    62,   102,   108,   112,   113,   127,   105,
     131,   134,   137,   144,   147,   149,   151,   153,   155,   157,
     171,   172,    77,    98,   319,     0,     0,   308,   313,   397,
       0,   387,   392,   394,   395,     0,     0,   519,   520,   512,
     501,     0,   308,   493,   495,   496,   498,   497,   486,   337,
     479,   471,   472,   473,     0,   474,   475,   476,   477,   478,
       0,   308,   469,   462,   530,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,   121,   121,   121,   131,     0,
      98,   109,   110,   111,    95,   103,   104,   106,   107,     0,
       0,     0,     0,    71,   549,     0,    82,    83,     0,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,   361,   363,   337,   378,     0,   308,
     367,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     356,   399,     0,   398,     0,     0,   308,   522,   516,   308,
     502,     0,   490,   494,     0,   192,   391,   390,   383,   466,
     470,     0,    80,     0,    71,     0,   482,    87,     0,     0,
       0,     0,   126,   125,     0,   122,   123,     0,     0,     0,
      65,   121,    67,    68,     0,    66,     0,     0,    72,    46,
       0,    48,    78,    94,   159,   128,   129,   130,   127,   132,
     133,   135,   136,   143,   142,   139,   138,   140,   141,   145,
     146,   148,   150,   152,   154,     0,   156,     0,     0,     0,
     364,   368,     0,     0,   525,   524,   393,     0,   517,   521,
       0,     0,     0,   315,     0,     0,     0,     0,     0,     0,
     554,     0,   423,   424,     0,   315,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   279,     0,   279,
       0,     0,     0,     0,     0,   196,     0,    16,    17,    56,
      99,   100,    84,   112,   113,     0,   219,   194,   177,   178,
       0,   193,   179,   175,   176,     0,     0,   180,     0,   181,
     224,   225,   182,   189,   239,   240,   241,   242,   183,   262,
     263,   264,   265,   266,   184,   185,   186,   187,   188,   190,
      98,    81,    92,     0,     0,     0,   207,   484,   209,   208,
       0,   483,    96,    91,    90,    93,     0,   124,     0,     0,
       0,   115,     0,    73,    50,    45,    49,     0,    69,     0,
      74,    70,     0,   400,   396,   173,   523,     0,     0,   554,
       0,   308,     0,     0,     0,     0,     0,   205,     0,     0,
       0,   203,   554,     0,     0,     0,   459,   458,   422,   461,
     460,   451,     0,   268,   267,   294,     0,   270,   269,     0,
       0,   249,     0,     0,     0,     0,     0,     0,   280,     0,
       0,     0,     0,   295,   243,     0,     0,   205,   202,   191,
     195,   200,   198,   201,   199,   216,   215,    85,    42,     0,
     480,     0,   120,   118,   119,   116,     0,    47,   158,     0,
       0,   308,   308,     0,   308,     0,     0,     0,   212,     0,
     552,     0,     0,   308,     0,   434,   433,   445,   446,   427,
     428,   435,   436,   437,   438,   439,   429,   430,   440,   441,
     442,   443,   444,   448,   447,   431,   432,     0,   308,   382,
       0,   381,   308,     0,   421,   308,   308,   197,   211,     0,
       0,   255,   259,     0,   250,   256,     0,   274,   271,     0,
     276,   273,   174,     0,     0,   278,   277,     0,   282,   281,
       0,     0,   283,   286,   284,   299,   298,     0,     0,    88,
      42,     0,   481,   485,   117,     0,     0,   510,   509,     0,
       0,   308,     0,   453,     0,   380,     0,   379,   412,     0,
       0,     0,     0,   206,     0,     0,   204,     0,   308,     0,
       0,     0,   308,   308,     0,     0,     0,   301,   251,   251,
       0,     0,   275,   272,     0,     0,     0,     0,   290,   293,
     287,   285,     0,     0,    86,    89,    43,     0,     0,   511,
       0,     0,     0,     0,   554,     0,   452,   454,   214,   213,
     308,     0,     0,   385,     0,   419,   384,     0,   420,   555,
     555,   555,     0,   402,   405,     0,   403,   407,     0,     0,
       0,     0,   257,     0,   252,     0,   260,     0,   226,   296,
     230,   228,   291,   291,   297,   244,   210,   457,   500,   499,
       0,     0,   555,     0,     0,     0,     0,     0,   308,   308,
       0,     0,     0,   555,     0,     0,   418,     0,   303,   302,
     300,   253,   253,     0,     0,     0,     0,     0,   231,   232,
       0,   235,   292,     0,     0,   308,   308,   503,   308,    71,
      71,   553,   553,   553,     0,   414,     0,   415,   450,   449,
       0,   425,   401,   411,   410,   554,   554,   246,   245,     0,
     254,   258,     0,     0,   227,     0,   238,   229,   233,   234,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     413,     0,   408,   409,     0,     0,   261,   237,   289,   288,
       0,     0,   555,   455,   456,   552,   552,     0,   248,   247,
     507,   508,   504,   416,   417,   426
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -770,  -770,  -770,  -770,   -68,   -39,   633,  -770,    -7,  -770,
     675,  -770,   -59,  -770,   655,    90,   -79,   402,  -770,   257,
    -770,  -770,  -770,  -770,   -81,  -338,  -770,  -770,  -235,  -770,
    -770,    51,   312,  -770,   335,  -770,  -770,  -770,  -770,  -770,
    -770,  -770,  -770,  -770,   419,   405,   442,   298,  -770,  -268,
    -770,   425,  -171,   200,    91,   223,   506,   485,   487,   492,
     502,  -770,  -770,   512,  -770,   270,  -597,  -592,  -497,  -427,
    -181,  -770,   -34,  -770,  -770,  -770,  -576,  -444,   147,  -584,
    -770,  -770,   234,    96,  -770,  -591,  -770,  -770,  -770,  -770,
    -770,  -770,   -23,  -770,   -15,  -770,  -770,  -770,  -770,  -770,
    -770,    97,    -3,  -770,  -770,  -770,   236,  -770,  -770,  -770,
    -770,  -770,  -770,   372,  -770,  -770,  -770,   138,    31,   143,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,    42,  -770,   778,
       0,  -770,  -770,   197,    -1,   399,  -770,  -770,   856,  -770,
    -770,   741,     1,  -153,   -42,  -770,   814,  -770,  -770,  -770,
    -770,   123,  -770,  -770,  -770,   518,  -217,  -210,  -205,  -770,
    -517,  -770,  -770,  -352,   503,  -770,  -770,  -770,  -204,   116,
    -770,  -770,   117,   119,    27,  -203,  -770,    39,    43,  -193,
    -770,  -770,  -192,  -770,  -770,  -770,  -770,  -189,  -770,  -770,
    -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
     613,  -279,  -770,  -770,  -770,  -770,  -770,  -770,  -770,  -770,
     648,  -770,  -770,  -770,  -770,    14,  -770,  -769,  -770,  -770,
    -770,  -770,  -770,  -770,   514,  -770,  -770,  -770,   864,  -770,
    -770,  -770,  -770,   747,  -770,  -770,  -770,  -770,   728,  -366,
    -308,  -556,  -763
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   189,   190,     9,    98,   486,   100,   101,   191,   103,
     104,   105,   192,   107,   108,   719,   393,   554,   408,   409,
     193,   194,   195,   196,   197,   410,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   774,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   394,
     395,   396,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   320,   411,   566,   812,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   580,   581,   537,
     538,   506,   647,   648,   507,   508,   509,   510,   511,   821,
     857,   858,   859,   860,   861,   512,   513,   514,   515,   516,
     693,   813,   889,   694,   814,   890,   891,   517,   518,   519,
     520,   521,   522,   609,   523,   524,   712,   713,   863,   714,
     525,   526,   527,   528,   717,   529,   756,   757,     2,     3,
     239,   147,    14,   122,   233,    11,    80,     4,     5,     6,
       7,    15,    16,    17,    48,    49,    50,    18,   152,   124,
     125,   151,   238,   348,   349,   350,   261,   262,   263,   264,
     240,   110,   378,   241,   242,   243,   364,   244,   265,   751,
     803,   806,   752,   753,   885,   266,   837,   838,   839,   267,
     460,   584,   268,   461,   462,   677,   463,   269,   464,   786,
     787,   359,   588,   591,    19,   140,   141,   162,   270,   271,
     272,   539,   540,   541,    20,   137,   138,   159,   251,   252,
     253,   254,   371,   255,   256,   783,   257,   728,    21,   134,
     135,   156,   246,   247,   248,    22,    23,    24,    25,    74,
      75,    76,   116,   117,   145,   118,   146,    26,   165,   739,
     908,   585,   844
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   106,   387,    13,   620,   438,   114,   699,   260,   288,
     692,   828,   829,   643,   703,    51,    52,   328,   397,   398,
     351,    99,   129,   569,   718,   691,   683,   352,    56,   130,
     131,   128,   353,   354,   355,    58,    32,   845,   846,   716,
     381,   834,   618,   599,   356,   357,   533,   723,   358,     1,
     710,    28,   329,   102,   645,   149,   563,    30,   340,   109,
      12,   865,   866,    29,   150,     8,   404,   711,   149,   867,
     743,   149,   128,   115,   114,   128,   -11,   128,   341,   577,
     882,   564,   568,   377,   347,    55,   617,   640,   603,   646,
     577,   570,   755,   761,   384,   687,   840,   841,   842,   927,
     604,   835,   679,   127,   684,    57,  -217,   437,   605,    77,
    -550,   330,   331,  -220,   106,   444,   735,   275,   260,   593,
      51,   287,   115,  -221,   729,   730,   597,   276,   578,   649,
    -218,   127,   351,   552,   279,   115,   742,   788,   115,   352,
     392,   115,   332,   333,   353,   354,   355,   579,    51,    52,
     534,   930,   931,   419,   420,   245,   356,   357,   250,   932,
     358,   259,   808,    31,   127,   747,   102,   149,   345,   816,
     128,   342,   109,   286,   375,   343,    55,   128,   299,   290,
     376,   392,  -222,   300,   -11,   621,   392,   127,  -305,   127,
     126,   623,   625,   126,   127,   127,   347,   127,   127,   680,
     127,   127,   130,  -217,   127,   127,   127,   127,   681,  -217,
    -220,   401,  -217,   736,  -223,    78,  -220,   374,   697,  -220,
    -221,   445,   737,   106,   106,   594,  -221,  -218,   833,  -221,
     700,   542,   598,  -218,   115,   115,  -218,   346,   705,   127,
     721,   708,   758,   388,   390,   762,   887,  -315,   680,  -315,
     324,   325,   250,   127,    55,    28,   301,   738,   895,   157,
     692,   692,   160,   326,   327,   740,   302,   654,   386,   106,
     106,   259,   163,   342,   127,   102,   102,   343,   571,  -222,
     587,   109,   109,   590,    28,  -222,   595,  -550,  -222,   423,
     424,   622,   732,  -550,   489,    32,  -310,   624,   626,   612,
     613,   614,    90,   106,   439,   106,   543,   810,   142,   741,
     143,  -223,   106,   811,   126,   106,   488,  -223,   127,    93,
    -223,   102,   102,   442,   698,   443,   745,   109,   109,   912,
     913,   544,   452,   749,   855,   459,   701,   818,   819,   127,
      55,   305,   856,   531,   706,   824,   825,   709,   759,   346,
      54,   763,   888,   249,   375,   102,   258,   102,   344,   273,
     586,   109,    79,   109,   102,   375,   726,   102,   487,   245,
     109,   589,   727,   109,   530,   361,    28,   362,  -550,   880,
     106,    59,   363,  -386,   850,   881,    60,   375,   342,   489,
      61,   106,   343,   883,  -550,   106,   106,  -311,  -550,   121,
     459,  -518,   620,  -550,  -550,    62,  -491,  -467,    81,   106,
    -550,   567,   111,  -365,   232,   572,   573,   306,   307,   308,
     489,   425,   426,   427,   428,  -550,   490,   894,  -492,   596,
    -550,    63,   102,  -468,   112,   360,  -550,   113,   109,  -366,
     775,    83,   488,   102,    84,   799,   800,   102,   102,   109,
     289,   131,  -550,   109,   109,   448,  -550,   576,   582,  -404,
     119,   102,  -550,   334,   335,  -406,   916,   109,  -550,    88,
    -550,  -505,   123,  -506,    89,   305,   106,   553,   126,   291,
     292,   293,   294,   295,   296,   297,   298,   928,   929,    91,
     305,    92,   560,   305,   487,   628,   629,   321,   322,   323,
     530,   592,    28,    94,    95,   871,   872,    96,   399,   322,
     323,   489,   375,   127,   277,   106,   106,   830,   831,    65,
     489,   490,   375,   375,   284,   767,   421,   422,   102,   768,
     769,   906,   907,   488,   109,   651,   652,   366,   366,   784,
     795,   106,   488,   106,   366,   232,   798,   383,   128,   720,
     132,    66,   490,   133,   391,   136,   488,   429,   430,   933,
     934,   690,   139,   696,   909,   910,   144,   102,   102,   153,
     155,   232,   650,   109,   109,   412,    67,    68,    69,    70,
      71,    72,    73,   158,   161,   487,   234,   237,   235,   236,
     414,   530,   304,   102,   487,   102,   277,   827,   282,   109,
     530,   109,   283,   284,   303,   299,   300,   305,   487,   336,
     435,   339,   232,   366,   530,   365,   367,   369,   337,   415,
     416,   417,   418,   418,   418,   418,   338,   368,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   370,   418,
     372,   720,   379,   490,   382,   400,   385,   402,   403,   405,
     413,   440,   490,   447,   532,   232,   536,   545,   546,   548,
     549,   557,   558,   884,   884,   559,   561,   574,   575,   600,
     601,   602,   606,   495,   607,   610,   555,   555,   375,   489,
     619,   106,   106,   489,   489,   106,   750,   491,   615,   616,
     639,   489,   489,   627,   630,   631,   641,   415,   636,   822,
     644,   791,   792,   642,   678,   794,   653,   682,   823,   685,
     492,   689,   686,   733,   680,   617,   654,   565,   731,   734,
     918,   919,   725,   744,   748,   736,   760,   925,   926,   754,
     489,   782,   779,   102,   102,   764,   765,   102,   766,   109,
     109,   772,   773,   109,   785,   778,   780,   608,   750,   608,
     386,   781,   802,   805,   646,   790,   793,   796,   801,   817,
     809,   820,   826,   832,   800,   843,   115,   799,   495,   847,
     489,   489,   755,   489,   851,   852,   854,   868,   862,   489,
     493,   869,   491,   870,   873,   878,   872,   879,   893,   897,
     836,   871,   901,   896,   902,   914,   915,   920,   921,   495,
     922,   488,   917,   923,   924,   492,   280,   935,   154,   556,
     776,   490,   489,   491,   637,   490,   490,   494,   489,   551,
     547,   106,   432,   490,   490,   433,   899,   746,   281,   638,
     688,   434,   789,   489,   489,   898,   492,   695,   874,   876,
     488,   911,   431,   436,   632,   900,   633,   634,   635,   892,
     770,   611,   849,   487,   864,   771,   815,   120,   583,   530,
      27,   148,   490,    64,   797,   903,   904,   441,   782,   446,
     807,   804,   886,   102,   565,   493,   702,   704,   877,   109,
     707,   875,   905,   449,   380,   715,   702,   496,    53,   164,
     495,   274,   487,     0,     0,     0,     0,     0,   530,   495,
     373,   536,   490,   490,   491,   490,   493,     0,     0,     0,
       0,   490,   494,   491,   309,   310,   311,   312,   313,   314,
     315,   316,   317,     0,   536,   318,   319,   492,     0,     0,
       0,     0,     0,     0,   724,     0,   492,   453,     0,     0,
       0,     0,     0,   494,   490,     0,    82,     0,    83,     0,
     490,    84,     0,    59,   454,     0,    85,     0,    60,     0,
      86,     0,    61,   455,   456,   490,   490,     0,     0,    87,
       0,     0,     0,     0,   457,     0,    88,    62,     0,     0,
       0,    89,   496,     0,     0,    90,     0,     0,     0,     0,
       0,   777,     0,     0,     0,     0,    91,   493,    92,     0,
       0,     0,    93,    63,   565,     0,   493,     0,     0,     0,
      94,    95,     0,   496,    96,     0,     0,   458,     0,     0,
       0,     0,     0,     0,   702,     0,     0,     0,   702,   702,
       0,     0,     0,     0,   494,     0,     0,     0,     0,     0,
       0,     0,     0,   494,     0,     0,     0,     0,     0,     0,
       0,   562,     0,     0,     0,     0,     0,     0,   495,     0,
       0,     0,   495,   495,     0,     0,     0,     0,     0,     0,
     495,   495,   491,     0,     0,     0,   491,   491,     0,   848,
       0,     0,    55,     0,   491,   491,     0,   853,     0,     0,
       0,    82,     0,    83,     0,   492,    84,     0,     0,   492,
     492,    85,     0,     0,   496,    86,     0,   492,   492,   495,
       0,     0,     0,   496,    87,     0,     0,     0,     0,     0,
       0,    88,     0,   491,     0,   565,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,     0,     0,   492,    93,     0,   495,
     495,     0,   495,     0,     0,    94,    95,     0,   495,    96,
       0,     0,    97,   491,   491,   493,   491,     0,     0,   493,
     493,     0,   491,     0,     0,     0,     0,   493,   493,     0,
       0,     0,     0,     0,     0,     0,   492,   492,     0,   492,
       0,   495,     0,     0,     0,   492,     0,   495,     0,     0,
       0,     0,   494,     0,     0,   491,   494,   494,     0,     0,
       0,   491,   495,   495,   494,   494,   493,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,   491,   492,     0,
       0,     0,     0,     0,   492,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   492,
     492,     0,     0,   494,     0,     0,   493,   493,     0,   493,
       0,     0,     0,     0,     0,   493,     0,     0,     0,     0,
       0,     0,   496,     0,     0,     0,   496,   496,    55,     0,
       0,     0,     0,     0,   496,   496,     0,    82,     0,    83,
       0,     0,    84,   494,   494,     0,   494,    85,   493,     0,
       0,    86,   494,     0,   493,   655,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,   493,
     493,     0,    89,   496,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,   494,     0,    91,     0,    92,
       0,   494,     0,    93,     0,     0,   656,     0,     0,     0,
       0,    94,    95,     0,     0,    96,   494,   494,   278,     0,
       0,     0,     0,   496,   496,     0,   496,     0,     0,     0,
       0,     0,   496,     0,     0,     0,     0,   657,   658,     0,
       0,     0,   659,   660,   661,   662,   663,   664,   665,   666,
     667,     0,   668,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   669,   670,     0,   496,   671,   672,   673,   674,
       0,   496,   675,   676,     0,     0,     0,     0,     0,     0,
     465,     0,   166,   167,   168,   169,   496,   496,   170,    82,
     466,    83,   855,     0,    84,   467,     0,   468,   469,    85,
     856,     0,   470,    86,     0,     0,     0,     0,     0,   172,
       0,   471,    87,   472,   473,   474,   475,     0,     0,    88,
       0,     0,     0,   476,    89,     0,   173,   174,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   477,    91,
       0,    92,   175,     0,     0,    93,     0,   478,   176,   479,
     177,   480,   178,    94,    95,   481,   482,    96,   483,     0,
     278,     0,   484,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   375,     0,   180,
       0,     0,     0,   485,     0,     0,   181,   182,   183,     0,
       0,   184,     0,   185,   186,     0,   465,     0,   166,   167,
     168,   169,     0,     0,   170,    82,   466,    83,     0,     0,
      84,   467,     0,   468,   469,    85,   187,   188,   470,    86,
       0,     0,     0,     0,     0,   172,     0,   471,    87,   472,
     473,   474,   475,     0,     0,    88,     0,     0,     0,   476,
      89,     0,   173,   174,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   477,    91,     0,    92,   175,     0,
       0,    93,     0,   478,   176,   479,   177,   480,   178,    94,
      95,   481,   482,    96,   483,     0,   278,     0,   484,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   375,     0,   180,     0,     0,     0,   485,
       0,     0,   181,   182,   183,     0,     0,   184,     0,   185,
     186,     0,    55,     0,   166,   167,   168,   169,     0,     0,
     170,    82,   466,    83,     0,     0,    84,   467,     0,     0,
     469,    85,   187,   188,   470,    86,     0,     0,     0,     0,
       0,   172,     0,   471,    87,   472,   473,   474,   475,     0,
       0,    88,     0,     0,     0,   476,    89,     0,   173,   174,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     477,    91,     0,    92,   175,     0,     0,    93,     0,   478,
     176,   479,   177,   480,   178,    94,    95,   481,   482,    96,
     483,     0,     0,     0,   484,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   375,
       0,   180,     0,     0,     0,   485,     0,     0,   181,   182,
     183,     0,     0,   184,     0,   185,   186,    55,     0,   166,
     167,   168,   169,     0,     0,   170,    82,     0,    83,     0,
       0,    84,   171,     0,     0,     0,    85,     0,   187,   188,
      86,     0,     0,     0,     0,     0,   172,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   173,   174,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   175,
     535,     0,    93,     0,     0,   176,     0,   177,     0,   178,
      94,    95,   179,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   386,   722,   180,     0,     0,     0,
       0,     0,     0,   181,   182,   183,     0,     0,   184,     0,
     185,   186,    55,     0,   166,   167,   168,   169,     0,     0,
     170,    82,     0,    83,     0,     0,    84,   171,     0,     0,
       0,    85,     0,   187,   188,    86,     0,     0,     0,     0,
       0,   172,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,     0,   173,   174,
      90,     0,   406,     0,     0,     0,     0,     0,     0,   407,
       0,    91,     0,    92,   175,     0,     0,    93,     0,     0,
     176,     0,   177,     0,   178,    94,    95,   179,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
     166,   167,   168,   169,     0,     0,   170,    82,     0,    83,
       0,   180,    84,   171,     0,     0,     0,    85,   181,   182,
     183,    86,     0,   184,     0,   185,   186,   172,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   173,   174,    90,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
     175,   535,     0,    93,     0,     0,   176,     0,   177,     0,
     178,    94,    95,   179,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   386,     0,   180,     0,     0,
       0,     0,     0,     0,   181,   182,   183,     0,     0,   184,
       0,   185,   186,    55,     0,   166,   167,   168,   169,     0,
       0,   170,    82,     0,    83,     0,     0,    84,   171,     0,
       0,     0,    85,     0,   187,   188,    86,     0,     0,     0,
       0,     0,   172,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,     0,   173,
     174,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    92,   175,     0,     0,    93,     0,
       0,   176,     0,   177,     0,   178,    94,    95,   179,     0,
      96,     0,     0,   285,     0,     0,     0,     0,     0,    55,
       0,   166,   167,   168,   169,     0,     0,   170,    82,     0,
      83,     0,   180,    84,   171,     0,     0,     0,    85,   181,
     182,   183,    86,     0,   184,     0,   185,   186,   172,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,     0,   173,   174,    90,     0,   187,
     188,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,   175,     0,     0,    93,     0,     0,   176,     0,   177,
       0,   178,    94,    95,   179,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   180,   550,
       0,     0,     0,     0,     0,   181,   182,   183,     0,     0,
     184,     0,   185,   186,    55,     0,   166,   167,   168,   169,
       0,     0,   170,    82,     0,    83,     0,     0,    84,   171,
       0,     0,     0,    85,     0,   187,   188,    86,     0,     0,
       0,     0,     0,   172,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,     0,
     173,   174,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,   175,     0,     0,    93,
       0,     0,   176,     0,   177,     0,   178,    94,    95,   179,
       0,    96,     0,     0,   278,     0,     0,     0,     0,     0,
      55,     0,   166,   167,   168,   169,     0,     0,   170,    82,
       0,    83,     0,   180,    84,   171,     0,     0,     0,    85,
     181,   182,   183,    86,     0,   184,     0,   185,   186,   172,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,     0,   173,   174,    90,     0,
     187,   188,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,   175,     0,     0,    93,     0,     0,   176,     0,
     177,     0,   178,    94,    95,   179,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,   166,   167,
     168,   169,     0,     0,   170,    82,     0,    83,     0,   180,
      84,   171,     0,     0,     0,    85,   181,   182,   183,    86,
       0,   184,     0,   185,   186,   172,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   173,   174,    90,     0,   187,   188,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    92,   175,     0,
       0,    93,  -304,     0,   176,     0,   177,     0,   178,    94,
      95,   179,    33,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,   180,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,   185,
     186,    36,    37,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,     0,     0,     0,    43,   453,     0,     0,
      44,     0,     0,     0,     0,     0,    82,     0,    83,     0,
       0,    84,    45,    59,   454,    46,    85,    47,    60,     0,
      86,    55,    61,   455,   456,     0,     0,     0,     0,    87,
      82,     0,    83,     0,   457,    84,    88,    62,     0,     0,
      85,    89,     0,     0,    86,    90,     0,   450,     0,     0,
       0,     0,     0,    87,     0,     0,    91,    33,    92,     0,
      88,     0,    93,    63,    55,    89,     0,     0,     0,    90,
      94,    95,     0,    82,    96,    83,     0,   458,    84,    34,
      91,     0,    92,    85,     0,     0,    93,    86,     0,     0,
       0,     0,    35,     0,    94,    95,    87,    37,    96,     0,
      33,   451,    38,    88,    39,    40,    41,    42,    89,     0,
       0,    43,    90,     0,     0,    44,     0,     0,     0,     0,
       0,     0,    34,    91,     0,    92,     0,    45,     0,    93,
      46,     0,    47,     0,     0,    35,     0,    94,    95,    36,
      37,    96,     0,     0,   389,    38,     0,    39,    40,    41,
      42,     0,     0,     0,    43,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,    46,     0,    47
};

static const yytype_int16 yycheck[] =
{
       1,    60,   281,     3,   501,   343,    74,   604,   161,   180,
     601,   780,   781,   569,   606,    15,    15,    11,   286,   287,
     237,    60,   101,     4,   616,   601,   582,   237,    29,   108,
     109,     3,   237,   237,   237,    36,     4,   800,   801,   615,
     275,    12,   486,   470,   237,   237,   384,   631,   237,    82,
      17,   109,    46,    60,   571,   123,     4,     1,   119,    60,
       0,   830,   831,   121,   123,     4,   301,    34,   136,   832,
     654,   139,     3,    74,   142,     3,     4,     3,   139,     4,
     843,     4,     4,   264,   237,     4,     4,     4,     4,     4,
       4,    72,     4,     4,   103,   592,     4,     4,     4,     4,
      16,    72,     1,   112,    72,   109,     1,   342,    24,     1,
      99,   105,   106,     1,   173,     1,     1,    99,   271,     1,
     120,   180,   123,     1,   641,   642,     1,   109,    53,   573,
       1,   112,   349,   401,   173,   136,   653,   734,   139,   349,
     112,   142,   136,   137,   349,   349,   349,    72,   148,   148,
     385,   920,   921,   324,   325,   155,   349,   349,   158,   922,
     349,   161,   754,   107,   112,   682,   173,   235,   236,   760,
       3,    99,   173,   180,   101,   103,     4,     3,   109,   180,
     107,   112,     1,   109,   112,     1,   112,   112,     0,   112,
     112,     1,     1,   112,   112,   112,   349,   112,   112,    98,
     112,   112,   281,    98,   112,   112,   112,   112,   107,   104,
      98,   290,   107,    98,     1,   107,   104,   259,     1,   107,
      98,   107,   107,   282,   283,   107,   104,    98,   784,   107,
       1,   104,   107,   104,   235,   236,   107,   237,     1,   112,
      99,     1,     1,   282,   283,     1,     1,   101,    98,   103,
     110,   111,   252,   112,     4,   109,    99,   107,   855,   136,
     851,   852,   139,   130,   131,   103,   109,   121,   101,   328,
     329,   271,   100,    99,   112,   282,   283,   103,   103,    98,
     461,   282,   283,   464,   109,   104,   467,    99,   107,   328,
     329,   107,   644,    99,   375,     4,   102,   107,   107,   480,
     481,   482,    52,   362,   346,   364,   104,    98,    98,   103,
     100,    98,   371,   104,   112,   374,   375,   104,   112,    69,
     107,   328,   329,   362,   107,   364,   678,   328,   329,   885,
     886,   104,   371,   685,    16,   374,   107,   764,   765,   112,
       4,    98,    24,   100,   107,   772,   773,   107,   107,   349,
      99,   107,   107,   156,   101,   362,   159,   364,   235,   162,
     107,   362,   101,   364,   371,   101,   101,   374,   375,   369,
     371,   107,   107,   374,   375,    54,   109,    56,    99,    98,
     439,    20,    61,   104,   811,   104,    25,   101,    99,   470,
      29,   450,   103,   107,    99,   454,   455,   102,    99,   107,
     439,   102,   899,    99,    99,    44,   102,   102,     4,   468,
      99,   450,     4,   102,   144,   454,   455,   140,   141,   142,
     501,   330,   331,   332,   333,    99,   375,   854,   102,   468,
      99,    70,   439,   102,     4,   238,    99,     4,   439,   102,
     719,    15,   501,   450,    18,    94,    95,   454,   455,   450,
     180,   530,    99,   454,   455,   102,    99,   458,   459,   102,
     108,   468,    99,   134,   135,   102,   893,   468,    99,    43,
      99,   102,   108,   102,    48,    98,   535,   100,   112,   181,
     182,   183,   184,   185,   186,   187,   188,   914,   915,    63,
      98,    65,   100,    98,   501,   100,   535,   112,   113,   114,
     501,   108,   109,    77,    78,    96,    97,    81,   112,   113,
     114,   592,   101,   112,   103,   574,   575,    94,    95,    30,
     601,   470,   101,   101,   103,   103,   326,   327,   535,   710,
     711,   869,   870,   592,   535,   574,   575,    98,    98,   100,
     100,   600,   601,   602,    98,   275,   100,   277,     3,   628,
       4,    62,   501,   108,   284,   108,   615,   334,   335,   925,
     926,   600,   108,   602,   872,   873,   103,   574,   575,   103,
     101,   301,   573,   574,   575,   305,    87,    88,    89,    90,
      91,    92,    93,   101,   101,   592,   102,   101,    98,    98,
     320,   592,   104,   600,   601,   602,   103,   778,   103,   600,
     601,   602,   103,   103,   103,   109,   109,    98,   615,   115,
     340,   138,   342,    98,   615,   104,     4,    98,   120,   321,
     322,   323,   324,   325,   326,   327,   116,   102,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,    50,   341,
     102,   720,   102,   592,     4,   104,    99,     4,     4,     4,
       4,   102,   601,   121,   104,   385,   386,   104,   104,   104,
     104,    98,   104,   844,   845,   108,   104,    53,    53,   103,
     103,   103,   103,   375,   103,   103,   406,   407,   101,   760,
     102,   740,   741,   764,   765,   744,   686,   375,   103,   103,
       4,   772,   773,   104,   102,    98,   103,   399,   104,   767,
      99,   740,   741,   103,    99,   744,   103,   103,   767,    99,
     375,    86,   101,   104,    98,     4,   121,   447,   101,   121,
     901,   902,   103,   103,   101,    98,    98,   908,   909,   103,
     811,   731,   102,   740,   741,   104,   104,   744,   104,   740,
     741,   104,   104,   744,   108,   104,   104,   477,   748,   479,
     101,   104,   752,   753,     4,   101,   104,   104,   102,    42,
     121,   101,   100,   102,    95,   102,   767,    94,   470,   104,
     851,   852,     4,   854,     1,   107,    28,   101,     4,   860,
     375,   103,   470,   103,   102,   104,    97,   104,   104,   102,
     790,    96,   104,   108,   104,   104,   104,    95,    94,   501,
     102,   860,   108,   104,   104,   470,   173,   104,   133,   407,
     720,   760,   893,   501,   557,   764,   765,   375,   899,   400,
     395,   880,   337,   772,   773,   338,   860,   680,   173,   559,
     596,   339,   736,   914,   915,   858,   501,   601,   838,   839,
     899,   880,   336,   341,   546,   860,   548,   549,   550,   852,
     712,   479,   810,   860,   823,   712,   759,    79,   459,   860,
       4,   120,   811,    49,   748,   865,   866,   349,   868,   366,
     753,   752,   845,   880,   604,   470,   606,   607,   839,   880,
     610,   838,   868,   369,   271,   615,   616,   375,    24,   142,
     592,   163,   899,    -1,    -1,    -1,    -1,    -1,   899,   601,
     252,   631,   851,   852,   592,   854,   501,    -1,    -1,    -1,
      -1,   860,   470,   601,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,   654,   132,   133,   592,    -1,    -1,
      -1,    -1,    -1,    -1,   636,    -1,   601,     4,    -1,    -1,
      -1,    -1,    -1,   501,   893,    -1,    13,    -1,    15,    -1,
     899,    18,    -1,    20,    21,    -1,    23,    -1,    25,    -1,
      27,    -1,    29,    30,    31,   914,   915,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,   470,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,   721,    -1,    -1,    -1,    -1,    63,   592,    65,    -1,
      -1,    -1,    69,    70,   734,    -1,   601,    -1,    -1,    -1,
      77,    78,    -1,   501,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,   754,    -1,    -1,    -1,   758,   759,
      -1,    -1,    -1,    -1,   592,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   601,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   760,    -1,
      -1,    -1,   764,   765,    -1,    -1,    -1,    -1,    -1,    -1,
     772,   773,   760,    -1,    -1,    -1,   764,   765,    -1,   809,
      -1,    -1,     4,    -1,   772,   773,    -1,   817,    -1,    -1,
      -1,    13,    -1,    15,    -1,   760,    18,    -1,    -1,   764,
     765,    23,    -1,    -1,   592,    27,    -1,   772,   773,   811,
      -1,    -1,    -1,   601,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,   811,    -1,   855,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    -1,    -1,   811,    69,    -1,   851,
     852,    -1,   854,    -1,    -1,    77,    78,    -1,   860,    81,
      -1,    -1,    84,   851,   852,   760,   854,    -1,    -1,   764,
     765,    -1,   860,    -1,    -1,    -1,    -1,   772,   773,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   851,   852,    -1,   854,
      -1,   893,    -1,    -1,    -1,   860,    -1,   899,    -1,    -1,
      -1,    -1,   760,    -1,    -1,   893,   764,   765,    -1,    -1,
      -1,   899,   914,   915,   772,   773,   811,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   914,   915,   893,    -1,
      -1,    -1,    -1,    -1,   899,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   914,
     915,    -1,    -1,   811,    -1,    -1,   851,   852,    -1,   854,
      -1,    -1,    -1,    -1,    -1,   860,    -1,    -1,    -1,    -1,
      -1,    -1,   760,    -1,    -1,    -1,   764,   765,     4,    -1,
      -1,    -1,    -1,    -1,   772,   773,    -1,    13,    -1,    15,
      -1,    -1,    18,   851,   852,    -1,   854,    23,   893,    -1,
      -1,    27,   860,    -1,   899,    33,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,   914,
     915,    -1,    48,   811,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   893,    -1,    63,    -1,    65,
      -1,   899,    -1,    69,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    81,   914,   915,    84,    -1,
      -1,    -1,    -1,   851,   852,    -1,   854,    -1,    -1,    -1,
      -1,    -1,   860,    -1,    -1,    -1,    -1,   105,   106,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,   131,    -1,   893,   134,   135,   136,   137,
      -1,   899,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,     6,     7,     8,     9,   914,   915,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,   107,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,    -1,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    21,    22,    23,   140,   141,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,
      -1,    -1,   110,   111,   112,    -1,    -1,   115,    -1,   117,
     118,    -1,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,
      22,    23,   140,   141,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,   103,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,
     112,    -1,    -1,   115,    -1,   117,   118,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    18,    19,    -1,    -1,    -1,    23,    -1,   140,   141,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      67,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    23,    -1,   140,   141,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,
      72,    -1,    74,    -1,    76,    77,    78,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      -1,   103,    18,    19,    -1,    -1,    -1,    23,   110,   111,
     112,    27,    -1,   115,    -1,   117,   118,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,   140,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      66,    67,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,   110,   111,   112,    -1,    -1,   115,
      -1,   117,   118,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,
      -1,    -1,    23,    -1,   140,   141,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    -1,    -1,    69,    -1,
      -1,    72,    -1,    74,    -1,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    -1,
      15,    -1,   103,    18,    19,    -1,    -1,    -1,    23,   110,
     111,   112,    27,    -1,   115,    -1,   117,   118,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,    74,
      -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,    -1,    -1,
     115,    -1,   117,   118,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,
      -1,    -1,    -1,    23,    -1,   140,   141,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    15,    -1,   103,    18,    19,    -1,    -1,    -1,    23,
     110,   111,   112,    27,    -1,   115,    -1,   117,   118,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,   103,
      18,    19,    -1,    -1,    -1,    23,   110,   111,   112,    27,
      -1,   115,    -1,   117,   118,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,   140,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,
      -1,    69,     0,    -1,    72,    -1,    74,    -1,    76,    77,
      78,    79,    10,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   117,
     118,    49,    50,    -1,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    -1,    -1,    -1,    64,     4,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    13,    -1,    15,    -1,
      -1,    18,    80,    20,    21,    83,    23,    85,    25,    -1,
      27,     4,    29,    30,    31,    -1,    -1,    -1,    -1,    36,
      13,    -1,    15,    -1,    41,    18,    43,    44,    -1,    -1,
      23,    48,    -1,    -1,    27,    52,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    63,    10,    65,    -1,
      43,    -1,    69,    70,     4,    48,    -1,    -1,    -1,    52,
      77,    78,    -1,    13,    81,    15,    -1,    84,    18,    32,
      63,    -1,    65,    23,    -1,    -1,    69,    27,    -1,    -1,
      -1,    -1,    45,    -1,    77,    78,    36,    50,    81,    -1,
      10,    84,    55,    43,    57,    58,    59,    60,    48,    -1,
      -1,    64,    52,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    63,    -1,    65,    -1,    80,    -1,    69,
      83,    -1,    85,    -1,    -1,    45,    -1,    77,    78,    49,
      50,    81,    -1,    -1,    84,    55,    -1,    57,    58,    59,
      60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    82,   272,   273,   281,   282,   283,   284,     4,   147,
     278,   279,     0,   274,   276,   285,   286,   287,   291,   338,
     348,   362,   369,   370,   371,   372,   381,   282,   109,   121,
       1,   107,     4,    10,    32,    45,    49,    50,    55,    57,
      58,    59,    60,    64,    68,    80,    83,    85,   288,   289,
     290,   274,   286,   372,    99,     4,   278,   109,   278,    20,
      25,    29,    44,    70,   290,    30,    62,    87,    88,    89,
      90,    91,    92,    93,   373,   374,   375,     1,   107,   101,
     280,     4,    13,    15,    18,    23,    27,    36,    43,    48,
      52,    63,    65,    69,    77,    78,    81,    84,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   278,
     305,     4,     4,     4,   148,   278,   376,   377,   379,   108,
     273,   107,   277,   108,   293,   294,   112,   112,     3,   160,
     160,   160,     4,   108,   363,   364,   108,   349,   350,   108,
     339,   340,    98,   100,   103,   378,   380,   275,   285,   148,
     156,   295,   292,   103,   154,   101,   365,   295,   101,   351,
     295,   101,   341,   100,   377,   382,     6,     7,     8,     9,
      12,    19,    33,    50,    51,    66,    72,    74,    76,    79,
     103,   110,   111,   112,   115,   117,   118,   140,   141,   145,
     146,   152,   156,   164,   165,   166,   167,   168,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   209,   278,   102,    98,    98,   101,   296,   274,
     304,   307,   308,   309,   311,   274,   366,   367,   368,   277,
     274,   352,   353,   354,   355,   357,   358,   360,   277,   274,
     287,   300,   301,   302,   303,   312,   319,   323,   326,   331,
     342,   343,   344,   277,   382,    99,   109,   103,    84,   149,
     150,   158,   103,   103,   103,    84,   152,   156,   196,   209,
     278,   191,   191,   191,   191,   191,   191,   191,   191,   109,
     109,    99,   109,   103,   104,    98,   140,   141,   142,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   132,   133,
     208,   112,   113,   114,   110,   111,   130,   131,    11,    46,
     105,   106,   136,   137,   134,   135,   115,   120,   116,   138,
     119,   139,    99,   103,   295,   148,   274,   287,   297,   298,
     299,   300,   301,   302,   312,   319,   323,   326,   331,   335,
     277,    54,    56,    61,   310,   104,    98,     4,   102,    98,
      50,   356,   102,   354,   288,   101,   107,   214,   306,   102,
     344,   172,     4,   209,   103,    99,   101,   345,   149,    84,
     149,   209,   112,   160,   193,   194,   195,   193,   193,   112,
     104,   160,     4,     4,   172,     4,    54,    61,   162,   163,
     169,   209,   209,     4,   209,   191,   191,   191,   191,   196,
     196,   197,   197,   149,   149,   198,   198,   198,   198,   199,
     199,   200,   201,   202,   203,   209,   204,   172,   169,   288,
     102,   299,   149,   149,     1,   107,   308,   121,   102,   368,
      30,    84,   149,     4,    21,    30,    31,    41,    84,   149,
     324,   327,   328,   330,   332,     4,    14,    19,    21,    22,
      26,    35,    37,    38,    39,    40,    47,    62,    71,    73,
      75,    79,    80,    82,    86,   107,   149,   152,   156,   168,
     175,   176,   178,   189,   190,   191,   207,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   225,   228,   229,   230,
     231,   232,   239,   240,   241,   242,   243,   251,   252,   253,
     254,   255,   256,   258,   259,   264,   265,   266,   267,   269,
     278,   100,   104,   169,   172,    67,   209,   223,   224,   345,
     346,   347,   104,   104,   104,   104,   104,   195,   104,   104,
     104,   188,   193,   100,   161,   209,   161,    98,   104,   108,
     100,   104,   118,     4,     4,   209,   210,   149,     4,     4,
      72,   103,   149,   149,    53,    53,   278,     4,    53,    72,
     221,   222,   278,   279,   325,   385,   107,   214,   336,   107,
     214,   337,   108,     1,   107,   214,   149,     1,   107,   213,
     103,   103,   103,     4,    16,    24,   103,   103,   209,   257,
     103,   257,   214,   214,   214,   103,   103,     4,   221,   102,
     212,     1,   107,     1,   107,     1,   107,   104,   100,   149,
     102,    98,   191,   191,   191,   191,   104,   163,   209,     4,
       4,   103,   103,   385,    99,   304,     4,   226,   227,   221,
     278,   149,   149,   103,   121,    33,    74,   105,   106,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   120,   130,
     131,   134,   135,   136,   137,   140,   141,   329,    99,     1,
      98,   107,   103,   385,    72,    99,   101,   212,   226,    86,
     149,   220,   229,   244,   247,   250,   149,     1,   107,   210,
       1,   107,   209,   211,   209,     1,   107,   209,     1,   107,
      17,    34,   260,   261,   263,   209,   220,   268,   211,   159,
     160,    99,   102,   223,   191,   103,   101,   107,   361,   304,
     304,   101,   307,   104,   121,     1,    98,   107,   107,   383,
     103,   103,   304,   223,   103,   307,   222,   304,   101,   307,
     274,   313,   316,   317,   103,     4,   270,   271,     1,   107,
      98,     4,     1,   107,   104,   104,   104,   103,   214,   214,
     261,   263,   104,   104,   180,   345,   159,   209,   104,   102,
     104,   104,   274,   359,   100,   108,   333,   334,   210,   227,
     101,   149,   149,   104,   149,   100,   104,   313,   100,    94,
      95,   102,   274,   314,   317,   274,   315,   316,   211,   121,
      98,   104,   211,   245,   248,   245,   229,    42,   213,   213,
     101,   233,   148,   156,   213,   213,   100,   214,   361,   361,
      94,    95,   102,   385,    12,    72,   274,   320,   321,   322,
       4,     4,     4,   102,   386,   386,   386,   104,   209,   271,
     213,     1,   107,   209,    28,    16,    24,   234,   235,   236,
     237,   238,     4,   262,   262,   361,   361,   386,   101,   103,
     103,    96,    97,   102,   274,   322,   274,   321,   104,   104,
      98,   104,   386,   107,   214,   318,   318,     1,   107,   246,
     249,   250,   246,   104,   213,   210,   108,   102,   236,   216,
     238,   104,   104,   274,   274,   359,   169,   169,   384,   384,
     384,   149,   385,   385,   104,   104,   213,   108,   214,   214,
      95,    94,   102,   104,   104,   214,   214,     4,   213,   213,
     361,   361,   386,   383,   383,   104
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   144,   145,   145,   145,   145,   145,   145,   146,   146,
     147,   148,   149,   149,   150,   150,   151,   151,   151,   152,
     152,   153,   153,   153,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   155,   155,   156,   156,   157,   157,   158,
     158,   158,   159,   159,   160,   161,   162,   162,   163,   163,
     163,   164,   164,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   167,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   172,   173,
     174,   174,   175,   176,   177,   178,   179,   179,   180,   180,
     181,   181,   182,   183,   184,   185,   186,   187,   187,   187,
     187,   187,   188,   188,   188,   188,   189,   190,   191,   191,
     191,   191,   191,   191,   191,   192,   192,   192,   192,   192,
     192,   193,   193,   194,   194,   195,   195,   196,   196,   196,
     196,   197,   197,   197,   198,   198,   198,   199,   199,   199,
     199,   199,   199,   199,   200,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   206,   207,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   209,   209,   210,   211,   212,   212,   212,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   214,   215,   215,   216,   216,   217,   218,   219,   219,
     219,   219,   220,   221,   221,   222,   222,   223,   223,   223,
     224,   225,   226,   226,   227,   228,   228,   229,   229,   229,
     229,   229,   229,   229,   230,   230,   231,   231,   232,   233,
     234,   234,   235,   235,   236,   237,   237,   238,   238,   239,
     239,   239,   239,   240,   241,   242,   242,   243,   243,   244,
     244,   245,   245,   246,   246,   247,   247,   248,   249,   250,
     250,   251,   252,   252,   252,   252,   252,   253,   253,   254,
     254,   255,   255,   255,   255,   255,   255,   256,   256,   257,
     257,   258,   258,   259,   259,   259,   260,   260,   261,   261,
     261,   262,   262,   263,   264,   265,   266,   267,   268,   268,
     269,   270,   270,   271,   272,   272,   273,   273,   274,   274,
     275,   275,   276,   277,   277,   278,   278,   279,   279,   280,
     281,   281,   282,   282,   283,   283,   284,   284,   285,   285,
     286,   286,   287,   287,   287,   287,   287,   288,   288,   289,
     289,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   292,   291,   293,   293,   294,
     294,   294,   295,   295,   296,   297,   297,   298,   298,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   300,
     300,   301,   301,   302,   303,   303,   304,   304,   305,   305,
     306,   306,   307,   307,   308,   308,   309,   310,   310,   310,
     311,   312,   313,   313,   314,   314,   315,   315,   316,   317,
     318,   318,   319,   319,   320,   320,   321,   322,   323,   324,
     324,   325,   326,   327,   327,   328,   328,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   330,
     330,   331,   332,   333,   333,   334,   334,   335,   336,   336,
     337,   337,   338,   339,   339,   340,   341,   342,   342,   343,
     343,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     345,   345,   346,   346,   347,   347,   348,   349,   349,   350,
     351,   352,   352,   353,   353,   354,   354,   354,   354,   355,
     355,   356,   356,   357,   358,   359,   359,   359,   359,   360,
     361,   361,   362,   363,   363,   364,   365,   365,   366,   366,
     367,   367,   368,   368,   369,   369,   370,   371,   371,   372,
     372,   373,   373,   374,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   376,   376,   377,   378,   378,   379,   380,
     381,   382,   383,   384,   385,   386
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
       1,     1,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     2,     1,     1,     1,     4,     5,     6,     5,     5,
       5,     0,     1,     1,     2,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     1,     1,     2,     1,     3,     2,     2,
       2,     2,     2,     1,     3,     1,     3,     1,     1,     1,
       5,     3,     1,     3,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     5,     3,
       0,     1,     1,     2,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     2,     5,     7,     7,     9,     9,     0,
       1,     0,     1,     0,     1,     1,     1,     1,     1,     1,
       3,     8,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     3,     4,     3,     3,     4,     3,     3,     3,     0,
       1,     3,     3,     3,     3,     4,     1,     2,     6,     6,
       2,     0,     1,     2,     2,     2,     5,     5,     1,     1,
       6,     1,     3,     3,     2,     2,     0,     1,     0,     1,
       0,     1,     5,     0,     1,     1,     2,     2,     3,     4,
       1,     2,     1,     1,     5,     5,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     8,     0,     1,     2,
       2,     4,     1,     3,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     5,     5,     2,     7,     7,     0,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     4,     0,     1,     1,
       4,     9,     2,     2,     0,     1,     0,     1,     5,     5,
       1,     1,     6,    10,     2,     2,     5,     5,     8,     5,
       5,     2,     4,     1,     1,     7,    10,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       7,     4,     5,     0,     1,     5,     5,     7,     1,     1,
       1,     1,     7,     0,     1,     2,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     0,     1,     1,     3,     7,     0,     1,     2,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     8,
       8,     0,     1,     9,    12,     3,     3,     6,     6,     6,
       1,     2,     7,     0,     1,     2,     3,     4,     0,     1,
       1,     3,     2,     4,     9,     9,     1,     1,     2,     6,
       7,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     1,     1,     3,
       0,     0,     0,     0,     0,     0
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
#line 116 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_literal",1);}
#line 2554 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2560 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 118 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2566 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 119 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2572 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 120 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2578 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2584 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 124 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2590 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 125 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2596 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 131 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2602 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 134 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);(yyval.r.str) = (yyvsp[0].r.str);}
#line 2608 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 138 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2614 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 139 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2620 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2626 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2632 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 146 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2638 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 147 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2644 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2650 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2656 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 152 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2662 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2668 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2674 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 163 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 167 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 168 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);printf("dasdasdasdas");(yyval.r.str) = (yyvsp[0].r.str);}
#line 2752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.str) = (yyvsp[0].r.str);}
#line 2758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 179 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 180 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 183 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 184 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 188 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 192 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 196 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 200 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 201 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 204 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 205 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 222 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 2932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 231 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 235 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 2956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 236 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 2962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 239 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 2968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 2974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 243 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 2980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 244 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 2986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 247 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 2992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 248 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 2998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 251 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 255 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 258 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 259 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 271 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 274 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 279 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 282 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 286 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 295 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 298 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 301 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression primary_expression",1);}
#line 3124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression qualified_identifier",1);}
#line 3130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression post_increment_expression",1);}
#line 3136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression post_decrement_expression",1);}
#line 3142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression pointer_member_access",1);}
#line 3148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus postfix_expression",1);}
#line 3154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 309 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus EXCLAMATION_POINT",1);}
#line 3160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 310 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus TILDE",1);}
#line 3166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus cast_expression",1);}
#line 3172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 317 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression unary_expression_not_plusminus",1);}
#line 3190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 321 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression PLUS",1);}
#line 3196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 322 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression MINUS",1);}
#line 3202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 323 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression STAR",1);}
#line 3208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression pre_increment_expression",1);}
#line 3214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 325 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression pre_decrement_expression",1);}
#line 3220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression addressof_expression",1);}
#line 3226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 334 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 335 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 338 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 339 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 342 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 343 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 346 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 347 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 350 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 351 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 355 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 362 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 371 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 381 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 388 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 392 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 393 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 396 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 397 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 400 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 401 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 404 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 412 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 413 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 416 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 420 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 437 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 443 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 463 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 464 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 467 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 473 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 476 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 479 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 482 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 483 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 486 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 3766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 487 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 3772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 490 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 491 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 492 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 495 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 498 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 501 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 502 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 3814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 505 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 3820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 508 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 509 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 512 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 514 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 515 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 516 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 517 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 518 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 521 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 3892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 3898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 3904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 532 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 3910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 535 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 3916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 3922 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 3928 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 540 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 3934 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 3940 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 546 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 3946 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 547 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 3952 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 550 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 3958 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 551 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 3964 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 554 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3970 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 555 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3976 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 556 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3982 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3988 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 3994 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4000 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 566 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4006 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4012 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",3);}
#line 4018 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",3);}
#line 4024 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4030 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4036 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 579 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4042 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4048 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4054 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4060 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4066 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4072 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4078 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4084 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4090 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4096 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4102 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 604 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4108 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 605 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4114 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 606 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4120 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 607 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4126 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 608 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4132 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 611 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4138 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4144 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 615 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4150 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 616 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4156 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4162 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 620 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4168 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 621 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4174 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4180 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 623 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4186 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 624 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4192 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4198 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 628 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4204 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 631 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4210 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 632 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4216 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4222 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4228 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 639 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4234 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4240 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4246 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4252 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4258 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4264 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 649 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4270 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4276 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 654 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4282 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 657 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4288 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4294 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4300 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4306 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4312 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4318 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4324 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4330 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4336 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4342 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4348 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4354 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4360 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 691 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4366 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4372 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 695 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4378 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4384 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 699 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4390 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4396 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4402 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4408 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 707 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4414 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 716 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4420 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 717 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4426 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 720 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4432 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4438 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 724 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4444 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 727 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4450 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 728 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4456 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4462 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 732 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4468 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 735 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4474 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 736 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4480 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 739 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4486 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 740 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4492 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 743 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4498 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 744 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4504 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 747 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4510 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 748 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4516 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 751 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4522 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 752 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4528 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4534 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 754 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4540 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 755 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4546 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 767 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = NULL;
  }
#line 4555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 772 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 4564 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 779 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 785 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT");}
#line 4591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");}
#line 4597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 795 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL");}
#line 4603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");}
#line 4609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE");}
#line 4615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 798 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");}
#line 4621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 799 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 4627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");}
#line 4633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY");}
#line 4639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 802 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");}
#line 4645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 803 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");}
#line 4651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");}
#line 4657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");}
#line 4663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 806 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE");}
#line 4669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 811 "yacc.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].r.modifiers) != NULL)
			cout << (yyvsp[-3].r.modifiers)->size() << endl;
		else cout << "There is no modifiers" << endl;
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),string((yyvsp[0].r.str)),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);}
#line 4686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.str) = "NO INHERTINCE";}
#line 4692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 4698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.str) = "1";}
#line 4704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 825 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.str) = (yyvsp[0].r.str);}
#line 4710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);(yyval.r.str) = "3";}
#line 4716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 829 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);(yyval.r.str) = (yyvsp[0].r.str);}
#line 4722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 830 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 4728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 833 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 836 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 840 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 4752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 841 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 4758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 844 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 845 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 846 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 848 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 849 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 850 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 851 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 852 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 857 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 4824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 858 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 4830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 4836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 4842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 4848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 4854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 870 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 4860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 4866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 4872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 4878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 878 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 4884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 4890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 882 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 4896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 885 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 4902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 886 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 4908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 889 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 4914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 4920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 4926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 896 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 4932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 897 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 4938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 898 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 4944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 902 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 4950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 908 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 4956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 911 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 4962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 912 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 4968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 915 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 4974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 916 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 4980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 919 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 4986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 4992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 926 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 4998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 932 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 935 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 939 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 943 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 946 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 947 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 953 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 959 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 965 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 968 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 970 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 973 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 977 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 980 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 981 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 984 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 985 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 988 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 989 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 990 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 991 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 992 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 993 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 995 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 996 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 997 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 998 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 999 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1001 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1004 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1005 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1007 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1008 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1009 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1012 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1013 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1016 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1019 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1026 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1043 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1046 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1047 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1051 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1056 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1059 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1063 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1066 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1078 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1079 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1080 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1086 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1091 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1092 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1096 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1099 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1105 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 5466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1108 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 5472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1109 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 5478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1112 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 5484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1115 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1119 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1123 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1126 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1127 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1128 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1133 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1134 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1137 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1144 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1155 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1157 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1158 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1172 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1175 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 5640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 5658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 5664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 5670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 5676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 5682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 5688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 5706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 5712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 5718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1214 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 5736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1218 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 5742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 5748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1224 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1226 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1228 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1229 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1230 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1231 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1232 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1235 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 5808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 5814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 5820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1242 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 5826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1243 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 5832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1246 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 5838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 5844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1256 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 5850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1259 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 5856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1262 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 5862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1265 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 5868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1268 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 5874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1271 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 5880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 5884 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1276 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




