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
	#include "../logger/Logger.h"
	#include "../Error Handler/error_handler.h"

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	Logger l("parser.log");
	void yyerror(const char *);
		


#line 90 "yacc.tab.cpp" /* yacc.c:339  */

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
#line 34 "yacc.y" /* yacc.c:355  */

	struct R{
		int i;
		float f;
		char c;
		char* str;
		int line_no;
		int col_no;
		}r;
	

#line 285 "yacc.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 302 "yacc.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   3193

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  242
/* YYNRULES -- Number of rules.  */
#define YYNRULES  570
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  971

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
       0,   108,   108,   109,   110,   111,   112,   113,   116,   117,
     123,   126,   130,   131,   134,   135,   138,   139,   140,   143,
     144,   147,   148,   149,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   163,   164,   167,   168,   171,   172,   175,
     176,   177,   180,   181,   184,   188,   192,   193,   196,   197,
     198,   201,   202,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   219,   222,   223,   224,   227,
     228,   231,   232,   235,   236,   239,   240,   243,   244,   247,
     250,   251,   254,   257,   260,   263,   266,   267,   270,   271,
     274,   275,   278,   281,   284,   287,   290,   293,   294,   295,
     296,   297,   300,   301,   302,   303,   306,   309,   312,   313,
     314,   315,   316,   317,   318,   326,   327,   328,   329,   330,
     331,   334,   335,   338,   339,   342,   343,   346,   347,   348,
     349,   352,   353,   354,   357,   358,   359,   362,   363,   364,
     365,   366,   367,   368,   371,   372,   373,   376,   377,   380,
     381,   384,   385,   388,   389,   392,   393,   396,   397,   400,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   416,   417,   420,   423,   427,   428,   429,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   447,   448,   451,   452,   456,   457,   460,   463,   466,
     467,   468,   469,   472,   475,   476,   479,   480,   483,   484,
     485,   488,   491,   494,   495,   498,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     523,   524,   525,   526,   527,   528,   529,   532,   533,   536,
     537,   540,   543,   546,   547,   550,   551,   554,   557,   558,
     561,   562,   565,   566,   567,   568,   571,   574,   577,   578,
     581,   582,   583,   584,   585,   588,   589,   592,   593,   596,
     597,   600,   601,   604,   607,   610,   611,   614,   617,   618,
     619,   620,   621,   624,   625,   628,   629,   632,   633,   634,
     635,   636,   637,   640,   641,   644,   645,   648,   649,   652,
     653,   654,   657,   658,   661,   662,   663,   666,   667,   670,
     673,   676,   679,   682,   685,   686,   690,   693,   694,   697,
     700,   701,   704,   705,   708,   709,   712,   713,   716,   719,
     720,   729,   730,   733,   734,   737,   740,   741,   744,   745,
     748,   749,   752,   753,   756,   757,   760,   761,   764,   765,
     766,   767,   768,   779,   780,   783,   784,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   804,   807,   808,   811,   812,   813,   816,   817,   820,
     823,   824,   827,   828,   831,   832,   833,   834,   835,   836,
     837,   838,   839,   841,   844,   845,   848,   849,   852,   856,
     857,   860,   861,   864,   865,   868,   869,   872,   873,   876,
     877,   880,   883,   884,   885,   889,   892,   898,   899,   902,
     903,   906,   907,   910,   916,   922,   923,   926,   927,   933,
     934,   937,   943,   949,   955,   957,   960,   964,   967,   968,
     971,   972,   975,   976,   977,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   999,  1000,  1003,  1006,  1009,  1010,
    1013,  1014,  1030,  1033,  1034,  1037,  1038,  1043,  1046,  1047,
    1050,  1053,  1056,  1057,  1060,  1061,  1064,  1065,  1066,  1067,
    1068,  1069,  1070,  1071,  1073,  1078,  1079,  1082,  1083,  1086,
    1087,  1092,  1095,  1096,  1099,  1102,  1105,  1106,  1109,  1110,
    1113,  1114,  1115,  1116,  1120,  1121,  1124,  1125,  1128,  1134,
    1142,  1143,  1144,  1145,  1148,  1153,  1154,  1159,  1162,  1163,
    1166,  1169,  1170,  1173,  1174,  1177,  1178,  1181,  1182,  1187,
    1188,  1193,  1196,  1197,  1200,  1201,  1204,  1205,  1208,  1211,
    1212,  1213,  1214,  1215,  1216,  1217,  1218,  1219,  1222,  1223,
    1226,  1229,  1230,  1233,  1236,  1243,  1246,  1249,  1252,  1255,
    1258
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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
  "modifiers", "modifier", "class_declaration", "class_base_opt",
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
     395,   396,   397
};
# endif

#define YYPACT_NINF -802

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-802)))

#define YYTABLE_NINF -566

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -24,   100,   207,   170,   -24,  -802,  -802,  -802,   183,    37,
    -802,   296,  -802,  1105,  -802,    85,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,   170,  -802,   195,  -802,  -802,   312,
    -802,  -802,   223,  -802,  -802,  -802,   312,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,   528,  1476,
    -802,  1014,  -802,  -802,   378,   353,    63,  -802,   291,   477,
    3022,   491,   503,   518,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,   312,  -802,   434,  -802,  -802,   -24,
     449,   462,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  -802,  -802,   463,  -802,   466,
    -802,   578,  -802,  -802,  -802,  -802,  -802,  -802,   578,   578,
     627,   531,   539,   565,  -802,  -802,   352,  -802,   538,  -802,
     217,  -802,  -802,   294,   573,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,   574,   537,   577,  -802,   312,   579,  -802,   312,
     580,  -802,   173,  -802,  2650,  -802,  -802,   581,   292,  -802,
     588,   589,   317,   449,   313,  -802,   332,   449,   589,   339,
     449,   589,   349,   449,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,   211,   576,  -802,  3066,  -802,   587,  -802,  -802,   592,
     600,  2363,  2650,  2650,  2650,  2650,  2650,  2650,  2650,  2650,
    -802,  -802,   567,   582,   240,   602,  -802,  -802,  -802,  -802,
     605,   608,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,   447,  -802,  -802,  -802,   712,
    -802,   479,   -33,   415,    25,   416,   595,   591,   596,   583,
     -69,  -802,  -802,  -802,   255,  -802,   312,   312,  1476,  -802,
     613,   361,  -802,  -802,  -802,  -802,   175,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,   299,   612,   619,  -802,  -802,  -802,
     714,   618,   625,  -802,  -802,   675,   624,   375,  -802,  -802,
    -802,  -802,  -802,  -802,  1476,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,   628,   392,  -802,  -802,  -802,  2650,
     722,  2650,   463,     5,   630,   228,  3066,  3110,  2650,    23,
      59,    60,   499,   629,   303,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,   726,   727,  2650,   729,  2162,  -802,  2650,
    -802,  -802,   730,  -802,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  2650,  2650,  2650,  2650,  2650,  2650,
    2650,  2650,  3066,  3066,  2650,  2650,  2650,  2650,  2650,  2650,
    2650,  2650,  2650,  2650,  2650,  2650,  2650,  2162,   589,  -802,
    2815,  -802,  -802,  1570,  -802,  -802,  -802,  -802,  3066,  -802,
    3066,   123,   170,   631,  -802,   410,  -802,  2978,  -802,  -802,
    2934,  -802,  -802,   481,  -802,   643,  2162,  2650,  2248,  -802,
     -61,   253,   281,   644,  -802,  -802,   647,    23,  -802,   649,
     650,  2449,  2736,    23,  -802,  -802,   501,  -802,  2650,  2650,
     660,  -802,   658,  -802,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,   479,   479,   -33,   -33,   466,   466,   415,   415,   415,
     415,    25,    25,   416,   595,   591,   596,   655,   583,   505,
     663,   330,  3066,  3066,   711,   715,    26,   764,   154,  -802,
     275,  -802,  -802,   354,   668,   455,   143,    20,  3066,   221,
    1932,   670,    39,   671,    43,   672,   678,  2650,   680,  2650,
     684,   521,   684,   683,   686,  -802,    71,   567,   582,   893,
      72,   393,  1166,   535,   617,   712,   233,  -802,  -802,  -802,
     669,  1816,  -802,  -802,  -802,   234,   249,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,    29,
      75,    76,  -802,  -802,  -802,  2650,  -802,  -802,  3066,    77,
      15,  -802,  -802,   688,   525,  3066,  -802,  -802,  -802,  -802,
     685,   696,  -802,  -802,  -802,  -802,  2650,  -802,  2650,  2650,
    2650,  -802,   693,  -802,  -802,  -802,  -802,  2162,  -802,  2650,
    -802,  -802,   313,    78,    79,  3066,  3066,   695,   698,   321,
    2801,   703,   179,  -802,   702,    44,   707,   716,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  1816,  -802,  -802,  -802,    78,
    -802,  -802,   734,  3066,  2564,  2564,  3066,   260,  2650,   270,
    2650,  2650,  -802,   272,  2650,   273,    28,  -802,  -802,  2564,
    2650,   687,   717,  -802,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  -802,  -802,    80,   710,   713,
     723,  -802,   578,     8,  -802,  2047,  -802,  -802,  -802,  -802,
    2650,  -802,  -802,   719,   700,   204,  -802,   216,  -802,   247,
     334,   313,   720,  2248,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  -802,   724,   170,  -802,   823,
    -802,   313,   728,  -802,   170,   170,  -802,   733,   739,    97,
     120,   127,   214,   226,   238,   268,  -802,  -802,  -802,   736,
    -802,   748,   279,    98,  -802,  -802,   282,  -802,  -802,  -802,
     751,   752,  -802,  -802,   753,  -802,  -802,   526,   684,    28,
    -802,  -802,  -802,  -802,   754,   755,   371,   313,   313,   759,
     170,   760,   578,  2650,  -802,  -802,  -802,   756,  2650,  -802,
     857,  -802,  -802,   762,  3066,  3066,   761,   684,  -802,  3066,
     530,  -802,   763,   170,   533,   514,   766,   425,   429,  2650,
     745,   377,  -802,  2650,  2650,  2650,  2650,   829,  -802,  -802,
    1932,  1932,   772,   294,  -802,  -802,  -802,  -802,  1932,  1932,
     773,  -802,  -802,   770,   774,   170,   540,  -802,  -802,  -802,
     776,    32,  -802,  -802,  -802,  -802,   170,   105,   107,  -802,
    -802,   108,  -802,  -802,   775,  -802,  -802,  -802,  -802,   784,
    -802,  -802,   786,  -802,  -802,   778,  2650,   880,  1932,  -802,
     779,  -802,  -802,   283,   289,  2650,   860,  -802,   389,  -802,
     884,   884,  -802,  -802,  -802,   371,   371,   522,   788,  -802,
    -802,   793,   795,   547,   797,   170,   170,   796,   801,   381,
    -802,   394,   394,  -802,   293,  -802,  -802,  -802,  2650,  2650,
    2650,  2650,  2650,   804,  1932,  2650,   802,   807,   389,  -802,
    1700,  -802,  -802,   809,   810,  -802,  -802,   371,   371,  -802,
     814,  2162,  2162,  -802,  -802,  -802,   819,  -802,   815,  -802,
    -802,  -802,  3066,  -802,  -802,  -802,  -802,  -802,  -802,  -802,
    -802,   915,  -802,   748,   816,   818,   826,   827,  1932,  -802,
     811,  -802,  -802,  -802,  1816,  -802,   684,   684,   469,   475,
    -802,   170,   828,   832,   684,   684,  -802,   109,  -802,  -802,
    1932,  1932,  1932,  1932,  1932,  -802,  -802,  -802,  -802,   842,
     824,   821,  -802,  -802,  -802,  -802,   834,  -802,  -802,  -802,
    -802,  -802,   371,   371,  -802,  -802,  -802,  -802,  -802,  -802,
    -802
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     322,     0,     0,   324,   323,   336,   338,   339,   331,     0,
      10,     0,     1,   353,   346,   324,   344,   347,   348,   349,
     350,   351,   352,   325,   541,   542,     0,   337,   333,     0,
     343,   342,   332,   357,   358,   359,     0,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,     0,   354,
     355,   353,   345,   543,   546,   331,     0,   334,     0,     0,
       0,     0,     0,     0,   356,   551,   556,   549,   550,   552,
     553,   554,   555,   557,     0,   547,     0,   341,   340,   322,
     329,   372,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   404,    15,   403,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   528,   502,   478,   563,    11,     0,   558,   561,   548,
     324,   330,   328,     0,     0,   373,    38,    37,    44,    40,
      39,    41,     0,     0,     0,   529,     0,     0,   503,     0,
       0,   479,     0,   566,    75,   560,   562,     0,   324,   377,
     374,   375,   324,   329,   324,   530,   324,   329,   504,   324,
     329,   480,   324,   329,   566,   559,   544,     3,     4,     5,
       6,     0,     0,     9,     0,     7,     0,    79,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     2,     0,     0,    97,    52,    51,    55,    56,    57,
       0,    76,    58,    59,    99,   100,    60,    84,    54,    61,
      63,    64,   101,   113,    62,   105,   114,   111,   112,   127,
     104,   131,   134,   137,   144,   147,   149,   151,   153,   155,
     157,   171,   172,    77,    98,   335,     0,     0,   353,   393,
       0,   324,   382,   384,   385,   386,     0,   387,   388,   389,
     390,   391,   392,   371,   412,     0,   402,   407,   409,   410,
       0,     0,   534,   535,   527,   516,     0,   324,   508,   510,
     511,   513,   512,   501,   353,   494,   486,   487,   488,   489,
     490,   491,   492,   493,     0,   324,   484,   477,   545,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,   121,
     121,   121,   131,     0,    98,   108,   109,   110,    95,   102,
     103,   106,   107,     0,     0,     0,     0,    71,   564,     0,
      82,    83,     0,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,   376,   378,
       0,   379,   383,     0,   406,   405,   398,   414,     0,   413,
       0,     0,   324,   537,   531,   324,   517,     0,   505,   509,
       0,   481,   485,     0,    80,     0,    71,     0,   497,    87,
       0,     0,     0,     0,   126,   125,     0,   122,   123,     0,
       0,     0,    65,   121,    67,    68,     0,    66,     0,     0,
      72,    46,     0,    48,    78,    94,   159,   128,   129,   130,
     127,   132,   133,   135,   136,   143,   142,   139,   138,   140,
     141,   145,   146,   148,   150,   152,   154,     0,   156,     0,
       0,   331,     0,     0,     0,     0,     0,     0,     0,   569,
       0,   438,   439,     0,     0,   331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   295,     0,   295,
       0,     0,     0,     0,     0,   197,     0,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,   195,   177,   178,
       0,   194,   179,   175,   176,     0,     0,   180,   181,   237,
     238,   182,   189,   252,   253,   254,   255,   183,   278,   279,
     280,   281,   282,   184,   185,   186,   187,   188,   190,    98,
       0,     0,   540,   539,   408,     0,   532,   536,     0,     0,
       0,    81,    92,     0,     0,     0,   208,   499,   210,   209,
       0,   498,    96,    91,    90,    93,     0,   124,     0,     0,
       0,   115,     0,    73,    50,    45,    49,     0,    69,     0,
      74,    70,   324,     0,     0,     0,     0,     0,     0,   206,
       0,     0,     0,   204,   569,     0,     0,     0,   474,   473,
     437,   476,   475,   466,   192,     0,   284,   283,   310,     0,
     286,   285,     0,     0,   265,   265,     0,     0,     0,     0,
       0,     0,   296,     0,     0,     0,     0,   311,   256,     0,
       0,   206,   203,   223,   216,   226,   219,   227,   220,   224,
     217,   228,   221,   229,   222,   225,   218,   191,   196,   201,
     199,   202,   200,   415,   411,   173,   538,     0,     0,   569,
       0,    85,    42,     0,   495,     0,   120,   118,   119,   116,
       0,    47,   158,     0,     0,     0,   213,     0,   567,     0,
       0,   324,     0,     0,   449,   448,   460,   461,   442,   443,
     450,   451,   452,   453,   454,   444,   445,   455,   456,   457,
     458,   459,   463,   462,   446,   447,     0,   324,   397,     0,
     396,   324,     0,   436,   324,   324,   198,   212,     0,     0,
      56,    99,   100,    84,   111,   112,   232,   271,   275,     0,
     266,   272,     0,     0,   290,   287,     0,   292,   289,   174,
       0,     0,   294,   293,     0,   298,   297,     0,     0,   299,
     302,   300,   315,   314,     0,     0,     0,   324,   324,     0,
     324,    88,    42,     0,   496,   500,   117,   468,     0,   395,
       0,   394,   427,     0,     0,     0,     0,     0,   207,     0,
       0,   205,     0,   324,     0,     0,     0,   324,   324,     0,
       0,     0,   317,   267,     0,   267,   267,     0,   291,   288,
       0,     0,     0,     0,   306,   309,   303,   301,     0,     0,
       0,   525,   524,     0,     0,   324,     0,    86,    89,    43,
       0,     0,   467,   469,   215,   214,   324,     0,     0,   400,
     472,     0,   434,   399,     0,   435,   570,   570,   570,     0,
     417,   420,     0,   418,   422,     0,     0,     0,     0,   273,
       0,   268,   276,     0,     0,     0,   239,   312,   243,   241,
     307,   307,   313,   257,   526,     0,     0,     0,     0,   569,
     211,     0,     0,     0,     0,   324,   324,     0,     0,     0,
     570,     0,     0,   433,     0,   319,   318,   316,   269,   269,
     269,   269,   269,     0,     0,     0,     0,     0,   244,   245,
       0,   248,   308,     0,     0,   515,   514,     0,     0,   570,
       0,    71,    71,   568,   568,   568,     0,   429,     0,   430,
     465,   464,     0,   440,   416,   426,   425,   569,   569,   259,
     258,     0,   270,   274,     0,     0,     0,     0,     0,   240,
       0,   251,   242,   246,   247,   249,     0,     0,   324,   324,
     518,   324,     0,     0,     0,     0,   428,     0,   423,   424,
       0,     0,     0,     0,     0,   277,   250,   305,   304,     0,
       0,     0,   470,   471,   567,   567,     0,   264,   263,   261,
     262,   260,     0,     0,   570,   431,   432,   441,   522,   523,
     519
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -802,  -802,  -802,  -802,   -71,    54,   765,  -802,    40,  -802,
     808,  -802,   -56,  -802,   769,   202,   -94,   536,  -802,   390,
    -802,  -802,  -802,  -802,   112,  -349,  -802,  -802,   -26,  -802,
    -802,   311,   338,  -802,   443,  -802,  -802,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,   544,   548,   575,   -93,  -802,   -34,
    -802,   551,  -163,   304,   159,   305,   599,   601,   598,   604,
     603,  -802,  -802,   626,  -802,   402,  -596,  -590,  -480,  -455,
     -44,  -802,    73,  -802,  -802,  -802,  -317,  -431,   262,  -591,
    -802,  -802,   365,   205,  -802,   185,  -802,  -802,  -802,  -802,
    -802,  -802,    82,  -802,    83,  -802,  -802,  -802,  -802,  -802,
     367,  -124,  -311,  -802,  -802,  -802,    70,  -802,  -802,  -802,
    -802,  -802,  -802,   496,  -802,  -802,  -802,   237,   126,   239,
    -802,  -802,  -802,  -802,  -802,  -802,  -802,   144,  -802,   890,
      -3,  -802,  -802,   142,     0,   524,  -802,  -802,   966,  -802,
    -802,   853,     7,  -131,  -187,  -802,   925,  -802,  -802,  -802,
      -4,  -802,  -802,  -802,   735,  -139,  -138,  -137,  -802,  -553,
    -802,  -802,  -641,   606,  -802,  -802,  -802,  -135,   212,  -802,
    -802,   209,   218,   117,  -134,  -802,   131,   133,  -128,  -802,
    -802,  -123,  -802,  -802,  -802,  -802,  -121,  -802,  -802,  -802,
    -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,   705,
    -289,  -802,  -802,  -802,  -802,  -802,  -802,  -802,  -802,   731,
    -802,  -802,  -802,  -802,    62,  -802,  -790,  -802,  -802,  -802,
    -802,  -802,  -802,   621,  -802,  -802,  -802,   970,  -802,  -802,
    -802,  -802,   855,  -802,  -802,  -802,  -802,   840,  -286,  -224,
    -561,  -801
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   190,   191,     9,    98,   476,   100,   101,   192,   103,
     104,   105,   193,   107,   108,   741,   395,   554,   410,   411,
     194,   195,   196,   197,   198,   412,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   797,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   396,
     397,   398,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   334,   413,   636,   829,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   572,   573,   537,
     538,   496,   655,   656,   497,   708,   498,   499,   500,   839,
     877,   878,   879,   880,   881,   501,   502,   503,   504,   505,
     709,   830,   911,   710,   831,   912,   913,   506,   507,   508,
     509,   510,   511,   603,   512,   513,   729,   730,   883,   731,
     514,   515,   516,   517,   734,   518,   771,   772,     2,     3,
     254,   147,    14,   122,   234,    11,    80,     4,     5,     6,
       7,    15,    16,    17,    48,    49,    50,    18,   124,   125,
     151,   153,   240,   241,   242,   243,   244,   245,   246,   255,
     110,   366,   256,   257,   258,   370,   259,   247,   766,   820,
     823,   767,   768,   907,   248,   854,   855,   856,   249,   449,
     576,   250,   450,   451,   686,   452,   251,   453,   802,   803,
     252,   580,   583,    19,   140,   141,   163,   284,   285,   286,
     539,   540,   541,    20,   137,   138,   160,   266,   267,   268,
     269,   377,   270,   271,   848,   272,   792,    21,   134,   135,
     157,   261,   262,   263,    22,    23,    24,    25,    74,    75,
      76,   116,   117,   145,   118,   146,    26,   166,   753,   934,
     577,   861
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    10,   716,   114,   106,   592,   389,   129,   440,   653,
     720,   628,    51,   692,   130,   131,   862,   863,   302,   639,
     735,   239,    52,   276,   277,   278,   128,   279,   280,    56,
      55,   275,   128,   -11,   281,   342,    58,   533,    30,   282,
     594,   283,   542,   851,   727,   612,   760,   597,    32,   354,
     127,   360,   149,   764,   745,   885,   886,     1,   598,   904,
     109,   728,   128,   128,    77,   149,   599,   150,   149,   355,
     343,   114,   758,   615,   115,   611,   338,   339,   739,   633,
     634,   638,   654,   569,   736,  -321,   640,   380,   930,   305,
     306,   307,   308,   309,   310,   311,   312,   928,   929,   796,
     102,   770,   777,   852,     8,   696,   743,   386,   756,   857,
     239,   858,   859,   956,    99,   693,   127,    51,   106,   127,
     363,  -230,   291,   115,   522,   301,   127,   356,  -233,   344,
     345,   357,   158,   657,   394,   161,   115,   126,   762,   115,
     -11,   595,   115,    31,   586,    51,   276,   277,   278,   238,
     279,   280,   804,   260,   275,    52,   265,   281,   569,   274,
     346,   347,   282,   970,   283,   149,   359,   313,   314,    78,
     394,   394,   968,   969,   109,   421,   422,    55,   616,   825,
     688,   304,   127,  -565,   793,   794,   127,   127,   126,   127,
     127,   127,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   130,   365,   -99,   -99,   749,   570,    12,   127,   127,
     403,   -99,   -99,   -99,   102,  -234,   127,  -230,   127,   127,
     127,   300,   590,  -230,  -233,   571,  -230,  -231,   293,   523,
    -233,   128,   358,  -233,   625,   629,   115,   115,   238,  -235,
     106,   106,   417,   418,   419,   420,   420,   420,   420,   587,
     631,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   714,   420,   383,   265,   127,   399,   400,  -565,  -236,
     485,   717,   164,   722,   725,   363,   689,   707,   707,   920,
     775,   364,   274,   778,   869,   690,   106,   106,   890,   406,
     871,    28,   733,    54,   909,   253,   109,   109,    55,   264,
      32,   750,   273,    29,   106,   287,   128,   478,   417,   289,
     751,  -234,   106,   689,   106,  -565,    55,  -234,  -326,   290,
    -234,   106,   752,  -231,   106,   836,   837,   591,   388,  -231,
     439,    57,  -231,   842,   843,  -235,   102,   102,   315,   626,
     630,  -235,   109,   109,  -235,    90,   938,   939,   316,   754,
     390,   392,   367,   356,   368,   632,   543,   357,   127,   369,
     109,   534,    93,   519,   126,  -236,   715,   485,   109,   552,
     109,  -236,   260,   867,  -236,   363,   718,   109,   723,   726,
     109,   578,   102,   102,   544,   776,   106,   106,   779,   870,
    -565,    79,   127,  -327,   617,   872,   425,   426,   485,   910,
     102,   356,   106,   477,   875,   357,   579,    65,   102,   582,
     102,  -565,   876,   588,   448,  -565,  -401,   102,  -380,   919,
     102,  -331,   520,  -331,   521,   131,   606,   607,   608,    28,
    -565,   530,   562,  -533,   448,   478,   755,  -565,    28,    66,
    -506,   663,   109,   109,   628,   127,   567,  -565,   574,   142,
    -482,   143,   798,   646,   363,   647,   648,   649,   109,  -565,
     581,    28,  -381,   945,    67,    68,    69,    70,    71,    72,
      73,   790,   106,  -565,   827,   479,  -507,   791,   902,   106,
     828,    81,   102,   102,   903,   957,   958,   959,   960,   961,
    -565,   519,   485,  -483,   363,   111,   563,   564,   102,   618,
     905,   485,   485,   427,   428,   429,   430,   112,  -565,   106,
     106,   526,   589,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,   113,  -565,  -100,  -100,  -419,  -565,   109,   478,
    -421,   477,  -100,  -100,  -100,   109,   621,   106,   478,   478,
     106,   119,   932,   933,   340,   341,   233,    59,   742,   348,
     349,    83,    60,   478,    84,   121,    61,   746,   914,   915,
     916,   917,   585,    28,   658,   109,   109,  -565,   102,   123,
    -520,    62,   479,  -565,   126,   102,  -521,   127,   319,    88,
     531,   128,   637,   303,    89,   519,   320,   321,   322,   643,
     335,   336,   337,   109,   519,   519,   109,    63,   319,    91,
     553,    92,   319,   479,   560,   102,   102,   816,   817,   519,
     401,   336,   337,    94,    95,   887,   888,    96,   623,   659,
     660,   363,   319,   298,   642,   477,   363,   372,   783,   812,
     372,   132,   815,   102,   477,   477,   102,   372,   133,   849,
     144,   622,   893,   894,   423,   424,   136,   699,   742,   477,
     713,   833,   834,   431,   432,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,   711,   711,  -111,  -111,   965,   966,
     935,   936,   139,   152,   480,   313,   154,   156,   291,   159,
     162,   485,   235,   784,   785,   236,   237,   485,   485,   296,
     314,   233,   765,   385,   297,   485,   485,   479,   106,   106,
     393,   481,   298,   106,   317,   319,   700,   700,   318,   350,
     351,   352,   840,   810,   361,   371,   372,   233,   373,   374,
     353,   414,   375,   624,   376,   378,   384,   841,   387,   381,
     404,   405,   402,   407,   415,   485,   416,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,   532,   545,  -112,  -112,
     546,   525,   548,   549,   109,   109,   437,   557,   233,   109,
     765,   558,   559,   565,   819,   822,   561,   566,   568,   584,
     627,   480,   593,   596,   600,   485,   485,   485,   485,   485,
     601,   485,   604,   115,   363,   609,   644,   485,   610,   233,
     536,   641,   847,   645,   102,   102,   650,   661,   481,   102,
     662,   687,   480,   853,   691,   694,   482,   663,   807,   808,
     555,   555,   737,   811,   689,   738,   695,   906,   906,   698,
     748,   740,   747,   757,   478,   485,   759,   611,   763,   481,
     750,   485,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   769,   773,   332,   333,   774,   106,   485,   485,   485,
     485,   485,   896,   898,   780,   781,   782,   788,   789,   795,
     388,   654,   806,   801,   809,   826,   813,   818,   478,   602,
     835,   602,   838,   845,   844,   850,   860,   846,   817,   816,
     519,   864,   947,   948,   770,   868,   700,   874,   882,   889,
     954,   955,   479,   479,   613,   891,   480,   892,   895,   900,
     479,   479,   109,   482,   901,   701,   701,   918,   922,   921,
     893,   483,   926,   927,   931,   894,   940,   963,   946,   941,
     477,   942,   964,   481,   519,   949,   950,   635,   847,   943,
     944,   952,   702,   702,   482,   953,   962,   967,   484,   294,
     479,   155,   102,   295,   799,   556,   551,   651,   547,   433,
     435,   761,   434,   924,   697,   805,   937,   436,   438,   832,
     923,   652,   712,   925,   477,   605,   786,   884,   787,   120,
      27,   866,   575,   148,    64,   814,   362,   824,   524,   908,
     700,   700,   700,   700,   700,   821,   479,   899,   897,   486,
     382,   -56,   479,   951,    53,   -56,   527,   165,   379,   614,
     635,   -56,   719,   721,   288,     0,   724,     0,   483,     0,
       0,   732,   719,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,     0,    33,   -56,   -56,     0,     0,   482,     0,
     479,     0,   -56,   -56,   -56,   484,   479,   703,   703,   483,
       0,     0,     0,     0,     0,    34,     0,   536,     0,     0,
       0,     0,   479,   479,   479,   479,   479,     0,    35,     0,
       0,     0,    36,    37,     0,   536,   484,     0,    38,     0,
      39,    40,    41,    42,     0,     0,     0,    43,     0,     0,
       0,    44,     0,     0,     0,   701,   486,     0,     0,     0,
       0,   480,   480,    45,     0,     0,    46,     0,    47,   480,
     480,     0,     0,     0,     0,  -320,     0,     0,     0,     0,
       0,     0,   702,     0,    33,     0,     0,   486,   481,   481,
       0,     0,     0,     0,     0,     0,   481,   481,     0,     0,
       0,     0,     0,   483,     0,     0,    34,     0,     0,   480,
       0,     0,   704,   704,     0,   800,     0,     0,     0,    35,
     635,     0,     0,    36,    37,     0,     0,     0,     0,    38,
     484,    39,    40,    41,    42,     0,   481,   619,    43,   705,
     705,   719,    44,     0,     0,   719,     0,   719,   719,   701,
     701,   701,   701,   701,    45,   480,     0,    46,     0,    47,
       0,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   702,   702,   702,   702,
     702,   486,   481,     0,     0,     0,     0,   703,   481,     0,
     706,   706,     0,   482,   482,     0,     0,     0,   865,   480,
       0,   482,   482,     0,     0,   480,     0,   873,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   480,   480,   480,   480,   480,   481,     0,     0,     0,
       0,     0,   481,     0,   -84,     0,     0,     0,   -84,     0,
       0,   482,   620,     0,   -84,     0,     0,   635,   481,   481,
     481,   481,   481,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,   -84,   -84,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,     0,     0,
       0,   703,   703,   703,   703,   703,     0,   482,     0,     0,
       0,     0,   704,   482,     0,     0,     0,     0,   483,   483,
       0,     0,     0,     0,     0,     0,   483,   483,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   705,
       0,     0,     0,     0,     0,   484,   484,     0,     0,     0,
       0,   482,     0,   484,   484,     0,     0,   482,     0,     0,
       0,     0,     0,     0,     0,     0,   483,     0,     0,     0,
       0,     0,     0,   482,   482,   482,   482,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     706,     0,     0,   484,     0,     0,   486,   486,     0,     0,
       0,     0,     0,     0,   486,   486,   704,   704,   704,   704,
     704,     0,   483,     0,     0,     0,     0,     0,   483,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   705,   705,   705,   705,   705,     0,   484,
       0,     0,     0,     0,   486,   484,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   483,     0,     0,     0,
       0,     0,   483,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,   483,   483,
     483,   483,   483,   484,   706,   706,   706,   706,   706,   484,
     486,     0,     0,     0,     0,     0,   486,    34,     0,     0,
       0,     0,     0,     0,     0,   484,   484,   484,   484,   484,
      35,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,   486,     0,     0,     0,     0,     0,
     486,     0,     0,     0,     0,    45,     0,     0,    46,     0,
      47,     0,     0,     0,     0,     0,   486,   486,   486,   486,
     486,   454,     0,     0,   455,   167,   168,   169,   170,     0,
       0,   171,    82,   456,    83,     0,     0,    84,   457,     0,
     458,   459,    85,     0,     0,   460,    86,     0,     0,     0,
       0,     0,   173,     0,   461,    87,   462,   463,   464,   465,
       0,     0,    88,     0,     0,     0,   466,    89,     0,   174,
     175,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,    91,     0,    92,   176,     0,     0,    93,     0,
     468,   177,   469,   178,   470,   179,    94,    95,   471,   472,
      96,   473,     0,   292,     0,   474,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     363,  -193,   181,     0,     0,     0,   475,     0,     0,   182,
     183,   184,     0,     0,   185,     0,   186,   187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   455,   167,   168,   169,   170,   188,
     189,   171,    82,   456,    83,   875,     0,    84,   457,     0,
     458,   459,    85,   876,     0,   460,    86,     0,     0,     0,
       0,     0,   173,     0,   461,    87,   462,   463,   464,   465,
       0,     0,    88,     0,     0,     0,   466,    89,     0,   174,
     175,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,    91,     0,    92,   176,     0,     0,    93,     0,
     468,   177,   469,   178,   470,   179,    94,    95,   471,   472,
      96,   473,     0,   292,     0,   474,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     363,     0,   181,     0,     0,     0,   475,     0,     0,   182,
     183,   184,     0,     0,   185,     0,   186,   187,     0,     0,
     455,   167,   168,   169,   170,     0,     0,   171,    82,   456,
      83,     0,     0,    84,   457,     0,   458,   459,    85,   188,
     189,   460,    86,     0,     0,     0,     0,     0,   173,     0,
     461,    87,   462,   463,   464,   465,     0,     0,    88,     0,
       0,     0,   466,    89,     0,   174,   175,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   467,    91,     0,
      92,   176,     0,     0,    93,     0,   468,   177,   469,   178,
     470,   179,    94,    95,   471,   472,    96,   473,     0,   292,
       0,   474,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   363,     0,   181,     0,
       0,     0,   475,     0,     0,   182,   183,   184,     0,     0,
     185,     0,   186,   187,     0,     0,    55,   167,   168,   169,
     170,     0,     0,   171,    82,   456,    83,     0,     0,    84,
     457,     0,     0,   459,    85,   188,   189,   460,    86,     0,
       0,     0,     0,     0,   173,     0,   461,    87,   462,   463,
     464,   465,     0,     0,    88,     0,     0,     0,   466,    89,
       0,   174,   175,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   467,    91,     0,    92,   176,     0,     0,
      93,     0,   468,   177,   469,   178,   470,   179,    94,    95,
     471,   472,    96,   473,     0,     0,     0,   474,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   363,     0,   181,     0,     0,     0,   475,     0,
       0,   182,   183,   184,     0,     0,   185,     0,   186,   187,
       0,    55,   167,   168,   169,   170,     0,     0,   171,    82,
       0,    83,     0,     0,    84,   172,     0,     0,     0,    85,
       0,   188,   189,    86,     0,     0,     0,     0,     0,   173,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,     0,   174,   175,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,   176,   535,     0,    93,     0,     0,   177,     0,
     178,     0,   179,    94,    95,   180,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   388,   744,   181,
       0,     0,     0,     0,     0,     0,   182,   183,   184,     0,
       0,   185,     0,   186,   187,     0,    55,   167,   168,   169,
     170,     0,     0,   171,    82,     0,    83,     0,     0,    84,
     172,     0,     0,     0,    85,     0,   188,   189,    86,     0,
       0,     0,     0,     0,   173,     0,     0,    87,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
       0,   174,   175,    90,     0,   408,     0,     0,     0,     0,
       0,     0,   409,     0,    91,     0,    92,   176,     0,     0,
      93,     0,     0,   177,     0,   178,     0,   179,    94,    95,
     180,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,   167,   168,   169,   170,     0,     0,   171,
      82,     0,    83,     0,   181,    84,   172,     0,     0,     0,
      85,   182,   183,   184,    86,     0,   185,     0,   186,   187,
     173,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   174,   175,    90,
       0,   188,   189,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   176,   535,     0,    93,     0,     0,   177,
       0,   178,     0,   179,    94,    95,   180,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   388,     0,
     181,     0,     0,     0,     0,     0,     0,   182,   183,   184,
       0,     0,   185,     0,   186,   187,     0,    55,   167,   168,
     169,   170,     0,     0,   171,    82,     0,    83,     0,     0,
      84,   172,     0,     0,     0,    85,     0,   188,   189,    86,
       0,     0,     0,     0,     0,   173,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   174,   175,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    92,   176,     0,
       0,    93,     0,     0,   177,     0,   178,     0,   179,    94,
      95,   180,     0,    96,     0,     0,   299,     0,     0,     0,
       0,     0,     0,    55,   167,   168,   169,   170,     0,     0,
     171,    82,     0,    83,     0,   181,    84,   172,     0,     0,
       0,    85,   182,   183,   184,    86,     0,   185,     0,   186,
     187,   173,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,     0,   174,   175,
      90,     0,   188,   189,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,   176,     0,     0,    93,     0,     0,
     177,     0,   178,     0,   179,    94,    95,   180,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   550,     0,     0,     0,     0,     0,   182,   183,
     184,     0,     0,   185,     0,   186,   187,     0,    55,   167,
     168,   169,   170,     0,     0,   171,    82,     0,    83,     0,
       0,    84,   172,     0,     0,     0,    85,     0,   188,   189,
      86,     0,     0,     0,     0,     0,   173,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   174,   175,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   176,
       0,     0,    93,     0,     0,   177,     0,   178,     0,   179,
      94,    95,   180,     0,    96,     0,     0,   292,     0,     0,
       0,     0,     0,     0,    55,   167,   168,   169,   170,     0,
       0,   171,    82,     0,    83,     0,   181,    84,   172,     0,
       0,     0,    85,   182,   183,   184,    86,     0,   185,     0,
     186,   187,   173,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,     0,   174,
     175,    90,     0,   188,   189,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    92,   176,     0,     0,    93,     0,
       0,   177,     0,   178,     0,   179,    94,    95,   180,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,   167,   168,   169,   170,     0,     0,   171,    82,     0,
      83,     0,   181,    84,   172,     0,     0,     0,    85,   182,
     183,   184,    86,     0,   185,     0,   186,   187,   173,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,     0,   174,   175,    90,     0,   188,
     189,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,   176,     0,     0,    93,     0,     0,   177,     0,   178,
       0,   179,    94,    95,   180,     0,    96,     0,     0,   441,
       0,     0,     0,     0,     0,     0,     0,    82,     0,    83,
       0,     0,    84,   664,    59,   442,     0,    85,   181,    60,
       0,    86,     0,    61,   443,   444,     0,     0,     0,     0,
      87,     0,   186,   187,     0,   445,     0,    88,    62,     0,
       0,     0,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,   665,     0,     0,    91,     0,    92,
       0,     0,     0,    93,    63,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,     0,   446,     0,
       0,     0,     0,     0,     0,   666,   667,     0,     0,     0,
     668,   669,   670,   671,   672,   673,   674,   675,   676,     0,
     677,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     678,   679,   447,     0,   680,   681,   682,   683,   441,     0,
     684,   685,     0,     0,     0,     0,    82,     0,    83,     0,
       0,    84,     0,    59,   442,     0,    85,     0,    60,     0,
      86,     0,    61,   443,   444,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   445,     0,    88,    62,     0,     0,
       0,    89,    55,     0,     0,    90,     0,     0,     0,     0,
      82,     0,    83,     0,     0,    84,    91,     0,    92,     0,
      85,     0,    93,    63,    86,     0,     0,   528,     0,     0,
      94,    95,     0,    87,    96,     0,     0,   446,     0,     0,
      88,     0,     0,     0,     0,    89,    55,     0,     0,    90,
       0,     0,     0,     0,    82,     0,    83,     0,     0,    84,
      91,     0,    92,     0,    85,     0,    93,     0,    86,     0,
       0,     0,     0,     0,    94,    95,     0,    87,    96,     0,
       0,   529,     0,     0,    88,     0,     0,     0,     0,    89,
      55,     0,     0,    90,     0,     0,     0,     0,    82,     0,
      83,     0,     0,    84,    91,     0,    92,     0,    85,     0,
      93,     0,    86,     0,     0,     0,     0,     0,    94,    95,
       0,    87,    96,     0,     0,    97,     0,     0,    88,     0,
       0,     0,     0,    89,    55,     0,     0,    90,     0,     0,
       0,     0,    82,     0,    83,     0,     0,    84,    91,     0,
      92,     0,    85,     0,    93,     0,    86,     0,     0,     0,
       0,     0,    94,    95,     0,    87,    96,     0,     0,   292,
       0,     0,    88,     0,     0,     0,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    92,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,     0,   391
};

static const yytype_int16 yycheck[] =
{
       3,     1,   598,    74,    60,   460,   295,   101,   357,   562,
     600,   491,    15,   574,   108,   109,   817,   818,   181,     4,
     610,   152,    15,   162,   162,   162,     3,   162,   162,    29,
       4,   162,     3,     4,   162,    10,    36,   386,     1,   162,
       1,   162,   103,    11,    16,   476,   687,     4,     4,   118,
     111,   238,   123,   694,   645,   845,   846,    81,    15,   860,
      60,    33,     3,     3,     1,   136,    23,   123,   139,   138,
      45,   142,   663,     1,    74,     4,   109,   110,   639,     4,
       4,     4,     4,     4,     4,     0,    71,   274,   889,   182,
     183,   184,   185,   186,   187,   188,   189,   887,   888,   740,
      60,     4,     4,    71,     4,   585,    98,   102,   661,     4,
     241,     4,     4,     4,    60,    71,   111,   120,   174,   111,
     100,     1,   102,   123,     1,   181,   111,    98,     1,   104,
     105,   102,   136,   564,   111,   139,   136,   111,   691,   139,
     111,   102,   142,   106,     1,   148,   285,   285,   285,   152,
     285,   285,   748,   156,   285,   148,   159,   285,     4,   162,
     135,   136,   285,   964,   285,   236,   237,   108,   108,   106,
     111,   111,   962,   963,   174,   338,   339,     4,   106,   769,
       1,   181,   111,    98,   737,   738,   111,   111,   111,   111,
     111,   111,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   295,   246,   131,   132,     1,    52,     0,   111,   111,
     304,   139,   140,   141,   174,     1,   111,    97,   111,   111,
     111,   181,     1,   103,    97,    71,   106,     1,   174,   106,
     103,     3,   236,   106,     1,     1,   236,   237,   241,     1,
     296,   297,   335,   336,   337,   338,   339,   340,   341,   106,
       1,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,     1,   355,   289,   267,   111,   300,   301,    98,     1,
     363,     1,    99,     1,     1,   100,    97,   594,   595,   875,
       1,   106,   285,     1,     1,   106,   342,   343,   849,   315,
       1,   108,   609,    98,     1,   153,   296,   297,     4,   157,
       4,    97,   160,   120,   360,   163,     3,   363,   401,    98,
     106,    97,   368,    97,   370,    98,     4,   103,   101,   108,
     106,   377,   106,    97,   380,   780,   781,   106,   100,   103,
     356,   108,   106,   788,   789,    97,   296,   297,    98,   106,
     106,   103,   342,   343,   106,    51,   907,   908,   108,   102,
     296,   297,    53,    98,    55,   106,   103,   102,   111,    60,
     360,   387,    68,   363,   111,    97,   106,   460,   368,   403,
     370,   103,   375,   828,   106,   100,   106,   377,   106,   106,
     380,   106,   342,   343,   103,   106,   442,   443,   106,   106,
      98,   100,   111,   101,     1,   106,   342,   343,   491,   106,
     360,    98,   458,   363,    15,   102,   450,    29,   368,   453,
     370,    98,    23,   457,   360,    98,   103,   377,   101,   874,
     380,   100,   368,   102,   370,   519,   470,   471,   472,   108,
      98,   377,   102,   101,   380,   491,   102,    98,   108,    61,
     101,   120,   442,   443,   924,   111,   446,    98,   448,    97,
     101,    99,   741,   546,   100,   548,   549,   550,   458,    98,
     106,   108,   101,   918,    86,    87,    88,    89,    90,    91,
      92,   100,   528,    98,    97,   363,   101,   106,    97,   535,
     103,     4,   442,   443,   103,   940,   941,   942,   943,   944,
      98,   491,   585,   101,   100,     4,   442,   443,   458,   106,
     106,   594,   595,   344,   345,   346,   347,     4,    98,   565,
     566,   101,   458,   120,   121,   122,   123,   124,   125,   126,
     127,   128,     4,    98,   131,   132,   101,    98,   528,   585,
     101,   491,   139,   140,   141,   535,     1,   593,   594,   595,
     596,   107,   891,   892,   129,   130,   144,    19,   642,   133,
     134,    14,    24,   609,    17,   106,    28,   650,   869,   870,
     871,   872,   107,   108,   564,   565,   566,    98,   528,   107,
     101,    43,   460,    98,   111,   535,   101,   111,    97,    42,
      99,     3,   528,   181,    47,   585,   139,   140,   141,   535,
     111,   112,   113,   593,   594,   595,   596,    69,    97,    62,
      99,    64,    97,   491,    99,   565,   566,    93,    94,   609,
     111,   112,   113,    76,    77,    93,    94,    80,     1,   565,
     566,   100,    97,   102,    99,   585,   100,    97,   102,    99,
      97,     4,    99,   593,   594,   595,   596,    97,   107,    99,
     102,   106,    95,    96,   340,   341,   107,   593,   742,   609,
     596,   775,   776,   348,   349,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   594,   595,   131,   132,   954,   955,
     894,   895,   107,   100,   363,   108,   102,   100,   102,   100,
     100,   774,   101,   727,   728,    97,    97,   780,   781,   102,
     108,   289,   695,   291,   102,   788,   789,   585,   754,   755,
     298,   363,   102,   759,   102,    97,   594,   595,   103,   114,
     119,   115,   783,   757,   101,   103,    97,   315,     4,   101,
     137,   319,    97,   106,    49,   101,     4,   783,    98,   101,
       4,     4,   103,     4,     4,   828,   334,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   103,   103,   131,   132,
     103,   120,   103,   103,   754,   755,   354,    97,   356,   759,
     763,   103,   107,    52,   767,   768,   103,    52,     4,   101,
     101,   460,   102,   102,   102,   868,   869,   870,   871,   872,
     102,   874,   102,   783,   100,   102,   101,   880,   102,   387,
     388,   103,   795,    97,   754,   755,   103,   102,   460,   759,
     102,    98,   491,   806,   102,    98,   363,   120,   754,   755,
     408,   409,   102,   759,    97,   102,   100,   861,   862,    85,
     120,    98,   103,   103,   880,   918,   102,     4,   100,   491,
      97,   924,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   102,   106,   131,   132,    97,   902,   940,   941,   942,
     943,   944,   855,   856,   103,   103,   103,   103,   103,   100,
     100,     4,   100,   107,   103,   120,   103,   101,   924,   467,
      41,   469,   100,   103,   101,    99,   101,   103,    94,    93,
     880,   103,   926,   927,     4,   106,   774,    27,     4,   101,
     934,   935,   780,   781,     1,   102,   585,   102,   101,   103,
     788,   789,   902,   460,   103,   594,   595,   103,   101,   107,
      95,   363,   103,   103,   100,    96,     1,    93,   107,   103,
     880,   103,   101,   585,   924,   928,   929,   525,   931,   103,
     103,   103,   594,   595,   491,   103,    94,   103,   363,   174,
     828,   133,   902,   174,   742,   409,   402,   557,   397,   350,
     352,   689,   351,   880,   589,   750,   902,   353,   355,   774,
     878,   559,   595,   880,   924,   469,   729,   841,   729,    79,
       4,   827,   448,   120,    49,   763,   241,   768,   372,   862,
     868,   869,   870,   871,   872,   767,   874,   856,   855,   363,
     285,    98,   880,   931,    24,   102,   375,   142,   267,   106,
     598,   108,   600,   601,   164,    -1,   604,    -1,   460,    -1,
      -1,   609,   610,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,     9,   131,   132,    -1,    -1,   585,    -1,
     918,    -1,   139,   140,   141,   460,   924,   594,   595,   491,
      -1,    -1,    -1,    -1,    -1,    31,    -1,   645,    -1,    -1,
      -1,    -1,   940,   941,   942,   943,   944,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,   663,   491,    -1,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,   774,   460,    -1,    -1,    -1,
      -1,   780,   781,    79,    -1,    -1,    82,    -1,    84,   788,
     789,    -1,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,
      -1,    -1,   774,    -1,     9,    -1,    -1,   491,   780,   781,
      -1,    -1,    -1,    -1,    -1,    -1,   788,   789,    -1,    -1,
      -1,    -1,    -1,   585,    -1,    -1,    31,    -1,    -1,   828,
      -1,    -1,   594,   595,    -1,   743,    -1,    -1,    -1,    44,
     748,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
     585,    56,    57,    58,    59,    -1,   828,     1,    63,   594,
     595,   769,    67,    -1,    -1,   773,    -1,   775,   776,   868,
     869,   870,   871,   872,    79,   874,    -1,    82,    -1,    84,
      -1,   880,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   868,   869,   870,   871,
     872,   585,   874,    -1,    -1,    -1,    -1,   774,   880,    -1,
     594,   595,    -1,   780,   781,    -1,    -1,    -1,   826,   918,
      -1,   788,   789,    -1,    -1,   924,    -1,   835,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   940,   941,   942,   943,   944,   918,    -1,    -1,    -1,
      -1,    -1,   924,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,   828,   106,    -1,   108,    -1,    -1,   875,   940,   941,
     942,   943,   944,    -1,    -1,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,   131,   132,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,    -1,    -1,
      -1,   868,   869,   870,   871,   872,    -1,   874,    -1,    -1,
      -1,    -1,   774,   880,    -1,    -1,    -1,    -1,   780,   781,
      -1,    -1,    -1,    -1,    -1,    -1,   788,   789,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   774,
      -1,    -1,    -1,    -1,    -1,   780,   781,    -1,    -1,    -1,
      -1,   918,    -1,   788,   789,    -1,    -1,   924,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   828,    -1,    -1,    -1,
      -1,    -1,    -1,   940,   941,   942,   943,   944,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     774,    -1,    -1,   828,    -1,    -1,   780,   781,    -1,    -1,
      -1,    -1,    -1,    -1,   788,   789,   868,   869,   870,   871,
     872,    -1,   874,    -1,    -1,    -1,    -1,    -1,   880,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   868,   869,   870,   871,   872,    -1,   874,
      -1,    -1,    -1,    -1,   828,   880,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   918,    -1,    -1,    -1,
      -1,    -1,   924,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,   940,   941,
     942,   943,   944,   918,   868,   869,   870,   871,   872,   924,
     874,    -1,    -1,    -1,    -1,    -1,   880,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   940,   941,   942,   943,   944,
      44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,   918,    -1,    -1,    -1,    -1,    -1,
     924,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      84,    -1,    -1,    -1,    -1,    -1,   940,   941,   942,   943,
     944,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    -1,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,    -1,    -1,   109,
     110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,   139,
     140,    11,    12,    13,    14,    15,    -1,    17,    18,    -1,
      20,    21,    22,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,   109,
     110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    20,    21,    22,   139,
     140,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    83,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,    -1,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    13,    14,    -1,    -1,    17,
      18,    -1,    -1,    21,    22,   139,   140,    25,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,   117,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,   139,   140,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,   102,    17,    18,    -1,    -1,    -1,
      22,   109,   110,   111,    26,    -1,   114,    -1,   116,   117,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
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
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      51,    -1,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,   114,    -1,   116,   117,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,   139,   140,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    -1,    14,    -1,   102,    17,    18,    -1,
      -1,    -1,    22,   109,   110,   111,    26,    -1,   114,    -1,
     116,   117,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,
      50,    51,    -1,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    -1,
      14,    -1,   102,    17,    18,    -1,    -1,    -1,    22,   109,
     110,   111,    26,    -1,   114,    -1,   116,   117,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    17,    32,    19,    20,    -1,    22,   102,    24,
      -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    -1,   116,   117,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,   117,    -1,   133,   134,   135,   136,     4,    -1,
     139,   140,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
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
      -1,    -1,    -1,    47,     4,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    12,    -1,    14,    -1,    -1,    17,    62,    -1,
      64,    -1,    22,    -1,    68,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    35,    80,    -1,    -1,    83,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,
      80,    -1,    -1,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   271,   272,   280,   281,   282,   283,     4,   146,
     277,   278,     0,   273,   275,   284,   285,   286,   290,   336,
     346,   360,   367,   368,   369,   370,   379,   281,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   287,   288,
     289,   273,   285,   370,    98,     4,   277,   108,   277,    19,
      24,    28,    43,    69,   289,    29,    61,    86,    87,    88,
      89,    90,    91,    92,   371,   372,   373,     1,   106,   100,
     279,     4,    12,    14,    17,    22,    26,    35,    42,    47,
      51,    62,    64,    68,    76,    77,    80,    83,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   277,
     303,     4,     4,     4,   147,   277,   374,   375,   377,   107,
     272,   106,   276,   107,   291,   292,   111,   111,     3,   159,
     159,   159,     4,   107,   361,   362,   107,   347,   348,   107,
     337,   338,    97,    99,   102,   376,   378,   274,   284,   147,
     155,   293,   100,   294,   102,   153,   100,   363,   293,   100,
     349,   293,   100,   339,    99,   375,   380,     5,     6,     7,
       8,    11,    18,    32,    49,    50,    65,    71,    73,    75,
      78,   102,   109,   110,   111,   114,   116,   117,   139,   140,
     144,   145,   151,   155,   163,   164,   165,   166,   167,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   208,   277,   101,    97,    97,   273,   286,
     295,   296,   297,   298,   299,   300,   301,   310,   317,   321,
     324,   329,   333,   276,   273,   302,   305,   306,   307,   309,
     273,   364,   365,   366,   276,   273,   350,   351,   352,   353,
     355,   356,   358,   276,   273,   286,   298,   299,   300,   310,
     317,   321,   324,   329,   340,   341,   342,   276,   380,    98,
     108,   102,    83,   148,   149,   157,   102,   102,   102,    83,
     151,   155,   195,   208,   277,   190,   190,   190,   190,   190,
     190,   190,   190,   108,   108,    98,   108,   102,   103,    97,
     139,   140,   141,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   131,   132,   207,   111,   112,   113,   109,   110,
     129,   130,    10,    45,   104,   105,   135,   136,   133,   134,
     114,   119,   115,   137,   118,   138,    98,   102,   293,   147,
     287,   101,   297,   100,   106,   213,   304,    53,    55,    60,
     308,   103,    97,     4,   101,    97,    49,   354,   101,   352,
     287,   101,   342,   171,     4,   208,   102,    98,   100,   343,
     148,    83,   148,   208,   111,   159,   192,   193,   194,   192,
     192,   111,   103,   159,     4,     4,   171,     4,    53,    60,
     161,   162,   168,   208,   208,     4,   208,   190,   190,   190,
     190,   195,   195,   196,   196,   148,   148,   197,   197,   197,
     197,   198,   198,   199,   200,   201,   202,   208,   203,   171,
     168,     4,    20,    29,    30,    40,    83,   117,   148,   322,
     325,   326,   328,   330,     1,     4,    13,    18,    20,    21,
      25,    34,    36,    37,    38,    39,    46,    61,    70,    72,
      74,    78,    79,    81,    85,   106,   148,   151,   155,   167,
     174,   175,   177,   188,   189,   190,   206,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   224,   227,   229,   230,
     231,   238,   239,   240,   241,   242,   250,   251,   252,   253,
     254,   255,   257,   258,   263,   264,   265,   266,   268,   277,
     148,   148,     1,   106,   306,   120,   101,   366,    29,    83,
     148,    99,   103,   168,   171,    66,   208,   222,   223,   343,
     344,   345,   103,   103,   103,   103,   103,   194,   103,   103,
     103,   187,   192,    99,   160,   208,   160,    97,   103,   107,
      99,   103,   102,   148,   148,    52,    52,   277,     4,     4,
      52,    71,   220,   221,   277,   278,   323,   383,   106,   213,
     334,   106,   213,   335,   101,   107,     1,   106,   213,   148,
       1,   106,   212,   102,     1,   102,   102,     4,    15,    23,
     102,   102,   208,   256,   102,   256,   213,   213,   213,   102,
     102,     4,   220,     1,   106,     1,   106,     1,   106,     1,
     106,     1,   106,     1,   106,     1,   106,   101,   211,     1,
     106,     1,   106,     4,     4,   208,   209,   148,     4,     4,
      71,   103,    99,   148,   101,    97,   190,   190,   190,   190,
     103,   162,   208,   302,     4,   225,   226,   220,   277,   148,
     148,   102,   102,   120,    32,    73,   104,   105,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   119,   129,   130,
     133,   134,   135,   136,   139,   140,   327,    98,     1,    97,
     106,   102,   383,    71,    98,   100,   211,   225,    85,   148,
     167,   174,   175,   177,   188,   189,   206,   219,   228,   243,
     246,   249,   243,   148,     1,   106,   209,     1,   106,   208,
     210,   208,     1,   106,   208,     1,   106,    16,    33,   259,
     260,   262,   208,   219,   267,   210,     4,   102,   102,   383,
      98,   158,   159,    98,   101,   222,   190,   103,   120,     1,
      97,   106,   106,   381,   102,   102,   302,   103,   222,   102,
     305,   221,   302,   100,   305,   273,   311,   314,   315,   102,
       4,   269,   270,   106,    97,     1,   106,     4,     1,   106,
     103,   103,   103,   102,   213,   213,   260,   262,   103,   103,
     100,   106,   359,   302,   302,   100,   305,   179,   343,   158,
     208,   107,   331,   332,   209,   226,   100,   148,   148,   103,
     213,   148,    99,   103,   311,    99,    93,    94,   101,   273,
     312,   315,   273,   313,   314,   210,   120,    97,   103,   210,
     244,   247,   228,   244,   244,    41,   212,   212,   100,   232,
     147,   155,   212,   212,   101,   103,   103,   273,   357,    99,
      99,    11,    71,   273,   318,   319,   320,     4,     4,     4,
     101,   384,   384,   384,   103,   208,   270,   212,   106,     1,
     106,     1,   106,   208,    27,    15,    23,   233,   234,   235,
     236,   237,     4,   261,   261,   359,   359,    93,    94,   101,
     383,   102,   102,    95,    96,   101,   273,   320,   273,   319,
     103,   103,    97,   103,   384,   106,   213,   316,   316,     1,
     106,   245,   248,   249,   245,   245,   245,   245,   103,   212,
     209,   107,   101,   235,   215,   237,   103,   103,   359,   359,
     384,   100,   168,   168,   382,   382,   382,   148,   383,   383,
       1,   103,   103,   103,   103,   212,   107,   213,   213,   273,
     273,   357,   103,   103,   213,   213,     4,   212,   212,   212,
     212,   212,    94,    93,   101,   381,   381,   103,   359,   359,
     384
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
     237,   237,   238,   238,   238,   238,   239,   240,   241,   241,
     242,   242,   242,   242,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   248,   249,   249,   250,   251,   251,
     251,   251,   251,   252,   252,   253,   253,   254,   254,   254,
     254,   254,   254,   255,   255,   256,   256,   257,   257,   258,
     258,   258,   259,   259,   260,   260,   260,   261,   261,   262,
     263,   264,   265,   266,   267,   267,   268,   269,   269,   270,
     271,   271,   272,   272,   273,   273,   274,   274,   275,   276,
     276,   277,   277,   278,   278,   279,   280,   280,   281,   281,
     282,   282,   283,   283,   284,   284,   285,   285,   286,   286,
     286,   286,   286,   287,   287,   288,   288,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   290,   291,   291,   292,   292,   292,   293,   293,   294,
     295,   295,   296,   296,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   298,   298,   299,   299,   300,   301,
     301,   302,   302,   303,   303,   304,   304,   305,   305,   306,
     306,   307,   308,   308,   308,   309,   310,   311,   311,   312,
     312,   313,   313,   314,   315,   316,   316,   317,   317,   318,
     318,   319,   320,   321,   322,   322,   323,   324,   325,   325,
     326,   326,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   328,   328,   329,   330,   331,   331,
     332,   332,   333,   334,   334,   335,   335,   336,   337,   337,
     338,   339,   340,   340,   341,   341,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   343,   343,   344,   344,   345,
     345,   346,   347,   347,   348,   349,   350,   350,   351,   351,
     352,   352,   352,   352,   353,   353,   354,   354,   355,   356,
     357,   357,   357,   357,   358,   359,   359,   360,   361,   361,
     362,   363,   363,   364,   364,   365,   365,   366,   366,   367,
     367,   368,   369,   369,   370,   370,   371,   371,   372,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   374,   374,
     375,   376,   376,   377,   378,   379,   380,   381,   382,   383,
     384
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
       3,     2,     1,     1,     1,     1,     2,     5,     7,     7,
       9,     9,     9,     9,     9,     0,     1,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     3,     8,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     4,     3,
       3,     4,     3,     3,     3,     0,     1,     3,     3,     3,
       3,     4,     1,     2,     6,     6,     2,     0,     1,     2,
       2,     2,     5,     5,     1,     1,     6,     1,     3,     3,
       2,     2,     0,     1,     0,     1,     0,     1,     5,     0,
       1,     1,     2,     2,     3,     4,     1,     2,     1,     1,
       5,     5,     3,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     0,     1,     2,     2,     4,     1,     3,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     6,     5,     5,     2,     7,
       7,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     4,     0,     1,     1,     4,     9,     2,     2,     0,
       1,     0,     1,     5,     5,     1,     1,     6,    10,     2,
       2,     5,     5,     8,     5,     5,     2,     4,     1,     1,
       7,    10,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     7,     4,     5,     0,     1,
       5,     5,     7,     1,     1,     1,     1,     7,     0,     1,
       2,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     0,     1,     1,
       3,     7,     0,     1,     2,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     8,     8,     0,     1,     9,    12,
       3,     3,     6,     6,     6,     1,     2,     7,     0,     1,
       2,     3,     4,     0,     1,     1,     3,     2,     4,     9,
       9,     1,     1,     2,     6,     7,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     0,     1,     1,     3,     0,     0,     0,     0,     0,
       0
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
#line 108 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_literal",1);}
#line 2647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 126 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);}
#line 2701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 130 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 131 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 134 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 135 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 138 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 139 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 140 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 147 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 152 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 163 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 167 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 168 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 180 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 184 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 188 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 192 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 196 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 197 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 201 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 205 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 208 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 222 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 231 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 235 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 236 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 239 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 243 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 244 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 247 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 250 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 251 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 254 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 257 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 260 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 263 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 266 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 267 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 270 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 271 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 274 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 281 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 287 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 290 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 293 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 294 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 295 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 297 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 300 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 301 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 306 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 309 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 317 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 329 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 334 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 335 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 338 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 339 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 342 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 343 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 347 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 348 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 354 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 358 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 362 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 363 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 371 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 381 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 388 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 392 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 393 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 396 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 397 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 400 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 403 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 404 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 412 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 413 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 416 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 420 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 427 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 432 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 433 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 437 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 443 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 457 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 463 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 466 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 467 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 472 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 476 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 479 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 3865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 480 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 3871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 483 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 488 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 491 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 494 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 495 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 3913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 498 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 3919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 507 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 508 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 509 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 510 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 511 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 512 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 514 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 515 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 516 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 517 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 518 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 519 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 520 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 524 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 527 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 532 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 533 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 537 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 540 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 546 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 547 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 550 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 551 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 554 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 565 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 566 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 568 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2,1);}
#line 4183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 581 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4);}
#line 4189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 582 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4,1);}
#line 4195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4,1);}
#line 4201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",5,1);}
#line 4207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 585 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",5,1);}
#line 4213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 589 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 592 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 593 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 596 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 600 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 604 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 607 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 610 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 611 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 614 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 620 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 621 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 624 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 628 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 629 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 632 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 633 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 634 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 649 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 654 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 657 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 658 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 661 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 667 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 679 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 682 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 686 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 690 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 694 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 701 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 704 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 705 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 708 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 712 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 716 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 719 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 720 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 729 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 730 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 733 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 734 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 740 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 741 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 744 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 748 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 749 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 752 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 766 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 767 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 779 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 780 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 783 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 4753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 784 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 4759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 787 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 790 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4783 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 791 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4789 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4801 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4807 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 795 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4813 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4819 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4825 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 798 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4831 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 799 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4837 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4843 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);}
#line 4849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 807 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 4855 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 4861 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 811 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4873 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 4879 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 4885 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 4891 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4897 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4903 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4909 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 827 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 4915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 828 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 4921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 831 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 832 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 833 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4939 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 834 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4945 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 835 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4951 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 836 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4957 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4963 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 838 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 839 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 841 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 844 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 4987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 845 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 4993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 848 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 4999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 849 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 852 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 5011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 856 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 857 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 5023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 860 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 5029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 5035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 5065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 5071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 876 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 880 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 883 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 884 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 885 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 889 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 895 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 898 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 899 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 902 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 903 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 906 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5149 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 907 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 913 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 919 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 922 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5173 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 923 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5179 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 926 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5185 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5191 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 933 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 934 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5203 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 940 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5209 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 946 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5215 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 952 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 955 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 957 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 960 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 964 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 967 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 968 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 971 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 972 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 975 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 976 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 977 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5287 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 978 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 979 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5299 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 980 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5305 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 981 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5311 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 982 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5317 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 983 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5323 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 984 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5329 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 985 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5335 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 986 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5341 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 987 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5347 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 988 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5353 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 989 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5359 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 990 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5365 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 991 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5371 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 992 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5377 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 993 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5383 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5389 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 995 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5395 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 996 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5401 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 999 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5407 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5413 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5419 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5425 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1009 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5431 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1010 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5437 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1013 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5443 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1014 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5449 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1030 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5455 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1033 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5461 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5467 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1037 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5473 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1038 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5479 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1043 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5485 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1046 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5491 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1047 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5497 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5503 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1053 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5509 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1056 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5515 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1057 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5521 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5527 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5533 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5539 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5545 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1066 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5551 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1067 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5557 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1068 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5563 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5569 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5575 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1071 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5581 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5587 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1078 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5593 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1079 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5605 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5611 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1086 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1092 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 5629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 5635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1096 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 5641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1099 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 5647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1102 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1105 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1106 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1109 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1110 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1113 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1114 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1115 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1116 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1120 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1124 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1125 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1142 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1143 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1144 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1145 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1148 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1154 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1159 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1163 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 5803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1169 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 5821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1174 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 5827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 5833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1178 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 5839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 5845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 5851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1188 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 5863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 5869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 5875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 5881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 5899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 5905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1208 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 5911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1211 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1212 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1214 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1215 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1218 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 5971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1223 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 5977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1226 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 5983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1229 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 5989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1230 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 5995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1233 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1243 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1246 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1249 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1252 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1255 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1258 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6047 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1263 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




