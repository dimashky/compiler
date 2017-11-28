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
#define YYLAST   3200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  248
/* YYNRULES -- Number of rules.  */
#define YYNRULES  620
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1124

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
     123,   132,   133,   142,   143,   144,   147,   148,   151,   152,
     153,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     167,   168,   171,   172,   175,   176,   177,   180,   181,   182,
     185,   186,   189,   193,   197,   198,   201,   202,   203,   206,
     207,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   224,   227,   228,   229,   232,   233,   236,
     237,   240,   241,   244,   245,   248,   249,   252,   255,   256,
     259,   262,   265,   268,   269,   273,   274,   275,   278,   279,
     282,   283,   284,   287,   290,   293,   296,   299,   300,   303,
     304,   305,   306,   307,   310,   311,   312,   313,   316,   319,
     322,   323,   324,   325,   326,   327,   328,   336,   337,   338,
     339,   340,   341,   344,   345,   348,   349,   352,   353,   356,
     357,   358,   359,   362,   363,   364,   367,   368,   369,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   383,   384,
     385,   388,   389,   392,   393,   396,   397,   400,   401,   404,
     405,   408,   409,   412,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   428,   429,   432,   435,   439,
     440,   441,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   459,   460,   463,   464,   468,
     469,   472,   475,   478,   479,   480,   481,   484,   485,   488,
     489,   492,   493,   496,   497,   498,   501,   502,   505,   506,
     509,   510,   513,   522,   523,   524,   525,   526,   527,   528,
     531,   532,   533,   534,   535,   536,   537,   541,   542,   545,
     546,   549,   552,   555,   556,   559,   560,   563,   566,   567,
     570,   571,   574,   575,   576,   577,   580,   583,   584,   585,
     585,   585,   588,   589,   593,   596,   597,   600,   601,   604,
     605,   609,   610,   613,   614,   617,   618,   621,   622,   625,
     628,   631,   632,   635,   636,   638,   638,   640,   641,   642,
     643,   644,   647,   648,   651,   652,   655,   656,   657,   658,
     659,   660,   663,   664,   667,   668,   671,   672,   675,   676,
     677,   680,   681,   684,   685,   686,   689,   690,   693,   696,
     699,   702,   705,   708,   709,   713,   714,   717,   718,   721,
     724,   725,   728,   729,   732,   733,   736,   737,   740,   743,
     744,   753,   754,   757,   758,   761,   764,   765,   768,   769,
     772,   773,   776,   777,   780,   781,   784,   785,   788,   789,
     790,   791,   792,   803,   804,   807,   808,   811,   812,   813,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
     824,   828,   830,   830,   831,   831,   834,   835,   838,   839,
     840,   843,   844,   847,   850,   851,   854,   855,   858,   859,
     860,   861,   862,   863,   864,   865,   866,   868,   871,   872,
     873,   874,   877,   878,   879,   880,   883,   887,   888,   889,
     890,   891,   892,   895,   896,   899,   900,   901,   904,   905,
     908,   909,   912,   913,   916,   917,   920,   921,   922,   926,
     927,   930,   934,   940,   941,   944,   945,   948,   949,   952,
     958,   964,   965,   968,   969,   970,   974,   980,   981,   984,
     990,   996,  1002,  1003,  1005,  1006,  1009,  1013,  1016,  1017,
    1020,  1021,  1022,  1023,  1025,  1027,  1028,  1029,  1031,  1032,
    1034,  1036,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1064,  1065,  1066,  1067,  1068,  1069,
    1070,  1071,  1074,  1077,  1080,  1081,  1084,  1085,  1101,  1104,
    1105,  1108,  1109,  1114,  1117,  1118,  1121,  1124,  1127,  1128,
    1131,  1132,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,
    1144,  1149,  1150,  1153,  1154,  1157,  1158,  1163,  1166,  1167,
    1170,  1173,  1176,  1177,  1180,  1181,  1184,  1185,  1186,  1187,
    1191,  1192,  1193,  1196,  1197,  1200,  1204,  1210,  1215,  1223,
    1224,  1225,  1226,  1229,  1230,  1235,  1236,  1241,  1244,  1245,
    1248,  1251,  1252,  1255,  1256,  1259,  1260,  1263,  1264,  1269,
    1270,  1275,  1278,  1279,  1282,  1283,  1286,  1287,  1290,  1293,
    1294,  1295,  1296,  1297,  1298,  1299,  1300,  1301,  1304,  1305,
    1308,  1311,  1312,  1315,  1318,  1325,  1328,  1331,  1334,  1337,
    1340
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
  "namespace_name", "type", "simple_type", "primitive_type",
  "numeric_type", "integral_type", "floating_point_type", "class_type",
  "pointer_type", "array_type", "rank_specifiers_opt", "rank_specifier",
  "variable_reference", "argument_list", "argument", "primary_expression",
  "primary_expression_no_parenthesis", "parenthesized_expression",
  "member_access", "invocation_expression", "argument_list_opt",
  "element_access", "expression_list_opt", "expression_list",
  "this_access", "base_access", "post_increment_expression",
  "post_decrement_expression", "new_expression",
  "object_creation_expression", "array_creation_expression",
  "array_initializer_opt", "typeof_expression", "checked_expression",
  "unchecked_expression", "pointer_member_access", "addressof_expression",
  "sizeof_expression", "postfix_expression",
  "unary_expression_not_plusminus", "pre_increment_expression",
  "pre_decrement_expression", "unary_expression", "cast_expression",
  "type_quals_opt", "type_quals", "type_qual", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "conditional_and_expression",
  "conditional_or_expression", "conditional_expression", "assignment",
  "assignment_operator", "expression", "constant_expression",
  "boolean_expression", "statement", "embedded_statement", "block",
  "statement_list_opt", "statement_list", "empty_statement",
  "labeled_statement", "declaration_statement",
  "local_variable_declaration", "variable_declarators",
  "variable_declarator", "variable_initializer", "stackalloc_initializer",
  "local_constant_declaration", "constant_declarators",
  "constant_declarator", "expression_statement", "statement_expression",
  "selection_statement", "if_statement", "switch_statement",
  "switch_block", "switch_sections_opt", "switch_sections",
  "switch_section", "switch_labels", "switch_label", "iteration_statement",
  "unsafe_statement", "while_statement", "$@1", "$@2", "do_statement",
  "for_statement", "left_bracket_circle", "right_bracket_circle",
  "semicolon", "for_initializer_opt", "for_condition_opt",
  "for_iterator_opt", "for_initializer", "for_condition", "for_iterator",
  "statement_expression_list", "foreach_statement", "in", "jump_statement",
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
  "modifiers", "modifier", "class_declaration", "identifier", "class",
  "class_base_opt", "class_base", "interface_type_list", "class_body",
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

#define YYPACT_NINF -909

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-909)))

#define YYTABLE_NINF -616

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,   311,   384,   221,    26,  -909,  -909,  -909,   217,   299,
    -909,   361,  -909,   589,  -909,   342,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,   221,  -909,   256,  -909,  -909,   414,
    -909,  -909,   280,  -909,  -909,  -909,   414,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,   890,  3116,
    -909,  1276,  -909,  -909,   697,   326,   305,  -909,   436,  -909,
    -909,  1034,   578,   596,   610,   500,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,   414,  -909,   450,  -909,
    -909,    26,   456,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,   499,   508,
     623,  -909,  -909,  -909,  -909,  -909,  -909,   623,   100,   654,
     579,   590,   603,  -909,  -909,   615,  -909,   349,  -909,   636,
    -909,   445,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,   641,   944,   539,  -909,   414,   650,  -909,   414,   657,
    -909,    50,   660,  -909,    22,  -909,  2798,  -909,  -909,   665,
     471,   -53,  -909,   511,   456,  -909,   684,   529,   456,   684,
     552,   456,   694,   684,   556,   456,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,    14,   708,  -909,  1762,  -909,   714,  -909,
    -909,   736,   748,  2511,  2798,  2798,  2798,  2798,  2798,  2798,
    2798,  2798,  -909,  -909,   726,   750,   383,   758,  -909,  -909,
    -909,  -909,   766,   773,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,   606,  -909,  -909,
    -909,  1064,  -909,   404,   185,   348,    28,   668,   761,   759,
     767,   747,   -55,  -909,  -909,  -909,   429,  -909,   528,   778,
     788,  -909,  -909,  -909,   883,   792,   797,  -909,  -909,   414,
     840,   794,   569,  -909,  -909,  -909,  -909,  -909,  -909,  3116,
    -909,  -909,  -909,  -909,   -60,  -909,  -909,  -909,  -909,  -909,
     798,   581,  -909,  -909,   414,  3116,  -909,   800,   601,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  2798,   899,  2798,   499,     0,   289,    78,    88,  1762,
    2842,  2798,   136,    73,    84,   652,   801,   468,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,   902,   903,  2798,   906,
    2310,  -909,  2798,  -909,  -909,   907,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  2798,  2798,  2798,
    2798,  2798,  2798,  2798,  2798,  1762,  1762,  2798,  2798,  2798,
    2798,  2798,  2798,  2798,  2798,  2798,  2798,  2798,  2798,  2798,
    2310,  -909,  1762,  -909,  1762,   333,   221,   793,  -909,   629,
    -909,  -909,  1493,  -909,  -909,  3086,  1599,  -909,  -909,  -909,
    -909,  -909,   684,  2922,  -909,  -909,   474,  -909,   812,  2310,
    2798,  2396,  -909,  2798,  2310,   164,    95,   394,   437,   105,
     813,  -909,  -909,   814,   136,  -909,   816,   817,  2597,  3002,
     136,  -909,  -909,   532,  -909,  2798,  2798,   825,  -909,   820,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,   404,   404,
     185,   185,   508,   100,   508,   100,   348,   348,   348,   348,
      28,    28,   668,   761,   759,   767,   819,   747,   675,   821,
     232,    61,   249,   102,  -909,  -909,  -909,  2798,  -909,  -909,
    1762,   259,   153,   112,   478,  1762,  1762,   875,   882,    66,
      33,    89,  -909,   -32,  -909,  -909,   501,   834,   485,   350,
     676,  1762,   352,  2080,   835,   335,   335,    74,   335,   836,
    2798,   335,  2798,   839,   677,   839,   838,   418,  -909,   268,
     726,   750,   830,   837,   843,   844,   845,   847,  1064,   848,
    -909,  -909,  -909,   854,  1964,  -909,  -909,  -909,   355,   357,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,    91,   941,  -909,  -909,   853,   699,  1762,  -909,
    -909,  -909,  -909,   856,   849,   700,   857,  -909,  -909,  -909,
    -909,  -909,  -909,  2798,  -909,  2798,  2798,  2798,  -909,   859,
    -909,  -909,  -909,  -909,  2310,  -909,  2798,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,   270,   106,   861,   863,   869,
     866,   871,   -53,   275,   124,   284,   193,  1762,  1762,   870,
     872,   873,   459,  1040,   878,   339,  -909,   876,    29,   885,
     879,  1040,   887,   356,   886,   889,   880,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  1964,  -909,  -909,  -909,   275,   124,
    -909,  -909,   905,  1762,  -909,  -909,  2712,  1762,   382,  2798,
     392,  2798,  2798,  -909,   413,  2798,   419,    63,  -909,  -909,
    2712,  -909,  1718,   874,   895,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,   895,   891,
    -909,   623,   -12,   198,  -909,  2195,   623,  -909,  -909,  -909,
    -909,  -909,  2798,  -909,  -909,   502,   502,   -53,   -53,   896,
     221,   -53,   912,   221,   911,   897,   379,  -909,   389,   196,
    -909,   377,  -909,   373,   120,   400,   218,   -53,   -53,   -53,
    2396,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,   914,   221,  -909,   995,  -909,   -53,   918,
    -909,   221,   -53,   923,   221,  -909,  -909,   -53,   927,   221,
     221,  -909,   931,   931,   928,   285,   222,   338,   346,   354,
     376,   393,   415,  -909,  -909,  -909,   422,  -909,   932,    68,
      58,  -909,  -909,   423,  -909,  -909,  -909,   347,   929,  -909,
    -909,   347,  -909,  -909,   717,   839,    63,  -909,  -909,  -909,
    -909,   933,  2798,   936,   938,   940,   934,   623,  2798,  2798,
    -909,  -909,   934,  -909,   930,  -909,  -909,  -909,   942,   946,
     221,   732,   949,   221,   733,   937,  2798,  -909,  1049,  -909,
    -909,  -909,  -909,   954,  -909,   955,  1762,  1762,  1762,  1762,
     956,   963,   964,  -909,  1762,   738,  -909,   968,   221,   744,
     970,  1762,   752,   972,   221,   760,   712,   957,   633,   634,
    2798,   958,   397,  -909,   514,  -909,  -909,  2798,  2798,    43,
      43,  -909,  -909,  -909,  -909,  2080,  2080,   977,    50,  -909,
    -909,  -909,  -909,  2080,  1056,  2080,  2080,   839,  -909,  -909,
    -909,   980,   981,  -909,  -909,   502,   502,   727,   982,  -909,
     502,   983,  -909,    42,  -909,  -909,  -909,  -909,   221,   221,
     286,   224,   287,   239,   293,   248,   304,   251,  -909,  -909,
    -909,   310,   253,  -909,  -909,   986,  -909,  -909,   314,   255,
    -909,  -909,   987,  -909,  -909,  -909,  -909,   988,  -909,  -909,
     997,  -909,  -909,   989,  2798,  1087,  2080,  2080,  -909,   422,
    -909,  -909,  -909,  -909,  2798,  2798,  1068,  -909,   553,  -909,
    1096,  1096,  -909,  2080,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,   502,   502,  -909,  1005,  -909,  -909,  1006,  1007,  1010,
     749,  1014,   221,   221,  1015,  1004,  1016,  1017,  1018,  1019,
    1020,  1022,  1023,   518,   537,  -909,   558,   575,  -909,   574,
     574,  -909,   426,  -909,  -909,  -909,  -909,  2798,   347,   347,
    2080,  2798,  1001,  1026,   553,  -909,  1848,  -909,  -909,  1025,
    1027,  -909,   635,   639,  -909,   221,  -909,   221,  2310,  2310,
    -909,  -909,  -909,  1033,  -909,  1038,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  1762,  -909,  1762,  -909,
    -909,  1762,  -909,  1762,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,   347,  -909,   932,  2080,  2080,  -909,  1011,  -909,
    -909,  -909,  1964,  -909,   839,   839,  -909,  1041,  1044,  1037,
    1039,  1031,  1043,   839,   839,  -909,  -909,   317,   257,   318,
     267,   319,   274,   327,   281,  -909,  -909,  2080,  -909,  -909,
    -909,  -909,  -909,   502,   502,  -909,  -909,  -909,  -909,  -909,
    -909,  1055,  1058,  1059,  1060,  1063,  1065,  1074,  1075,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     332,     0,     0,   334,   333,   346,   348,   349,   341,     0,
      10,     0,     1,   363,   356,   334,   354,   357,   358,   359,
     360,   361,   362,   335,   591,   592,     0,   347,   343,     0,
     353,   352,   342,   367,   368,   369,     0,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,     0,   364,
     365,   363,   355,   593,   596,   341,     0,   344,     0,   385,
     384,     0,     0,     0,     0,     0,   366,   601,   606,   599,
     600,   602,   603,   604,   605,   607,     0,   597,     0,   351,
     350,   332,   339,    17,    22,    29,    20,    31,    30,    25,
      27,    32,    21,    23,    33,    26,    28,    24,   427,   425,
      11,    13,    16,    18,    19,    14,    15,    12,   426,     0,
     578,   548,   524,   383,   382,   386,   613,     0,   608,   611,
     598,   334,   340,   338,    36,    34,    42,    38,    37,    35,
      39,     0,     0,     0,   579,     0,     0,   549,     0,     0,
     525,     0,     0,   387,     0,   616,    73,   610,   612,     0,
     334,   334,   580,   334,   339,   391,   550,   334,   339,   526,
     334,   339,   388,   389,   334,   339,   616,   609,   594,     3,
       4,     5,     6,     0,     0,     9,     0,     7,     0,    77,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     2,     0,     0,    99,    50,    49,    53,
      54,    55,     0,    74,    56,    57,   101,   102,    58,    82,
      52,    59,    61,    62,   103,   115,    60,   107,   116,   113,
     114,   129,   106,   133,   136,   139,   148,   151,   153,   155,
     157,   159,   161,   175,   176,    75,   100,   345,   436,     0,
     424,   430,   432,   433,     0,     0,   584,   585,   577,     0,
     563,     0,   334,   554,   556,   557,   559,   558,   547,   363,
     540,   532,   533,   534,     0,   535,   536,   537,   538,   539,
       0,   334,   530,   523,     0,   363,   407,     0,   334,   396,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   381,
     595,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,   123,   123,   123,   133,     0,   100,   110,   111,
     112,    96,   104,   105,   108,   109,     0,     0,     0,     0,
      69,   614,     0,    80,    81,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,   438,     0,   437,     0,     0,   334,   587,   581,   334,
     392,   564,     0,   551,   555,     0,     0,   429,   428,   416,
     527,   531,   390,     0,   393,   397,     0,    78,     0,    69,
       0,   543,    87,     0,    69,     0,     0,     0,     0,     0,
       0,   128,   127,     0,   124,   125,     0,     0,     0,    63,
     123,    65,    66,     0,    64,     0,     0,    70,    44,     0,
      46,    76,    95,   163,   130,   131,   132,   129,   134,   135,
     137,   138,   146,   147,   144,   145,   141,   140,   142,   143,
     149,   150,   152,   154,   156,   158,     0,   160,     0,     0,
       0,     0,     0,     0,   590,   589,   431,     0,   582,   586,
       0,     0,     0,     0,   341,     0,     0,     0,     0,     0,
       0,     0,   619,     0,   468,   469,     0,     0,   341,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     304,     0,   304,     0,     0,     0,     0,     0,   201,     0,
      13,    14,    54,   101,   102,    82,   113,   114,     0,     0,
     199,   181,   182,     0,   198,   183,   179,   180,     0,     0,
     184,   185,   237,   238,   186,   193,   252,   253,   254,   255,
     187,   287,   288,   289,   290,   291,   188,   189,   190,   191,
     192,   194,   100,     0,    79,    93,     0,     0,     0,   213,
     545,   215,   214,     0,   544,     0,     0,    97,    98,    92,
      90,    91,    94,     0,   126,     0,     0,     0,   117,     0,
      71,    48,    43,    47,     0,    67,     0,    72,    68,   439,
     440,   434,   435,   177,   588,     0,     0,     0,   619,     0,
     619,     0,   334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,     0,     0,     0,   209,   619,     0,     0,
       0,     0,     0,     0,   619,     0,     0,   520,   519,   467,
     522,   521,   512,   196,     0,   293,   292,   319,     0,     0,
     295,   294,     0,     0,   266,   265,   271,     0,     0,     0,
       0,     0,     0,   305,     0,     0,     0,     0,   320,   256,
       0,   259,     0,   211,   207,   223,   226,   227,   224,   228,
     229,   225,   195,   200,   205,   203,   206,   204,   208,     0,
      83,    40,     0,     0,   541,     0,    40,    84,   122,   120,
     121,   118,     0,    45,   162,     0,     0,   334,   334,     0,
     334,   334,     0,   334,     0,     0,     0,   220,     0,     0,
     617,     0,   617,     0,     0,     0,     0,   334,   334,   334,
       0,   489,   488,   500,   501,   482,   483,   490,   491,   492,
     493,   494,   484,   485,   495,   496,   497,   498,   499,   503,
     502,   486,   487,     0,   334,   413,     0,   412,   334,     0,
     466,   334,   334,     0,   334,   415,   414,   334,     0,   334,
     334,   202,   218,   219,     0,     0,     0,    54,   101,   102,
      82,   113,   114,   232,   277,   281,     0,   272,   278,     0,
       0,   299,   296,     0,   301,   298,   178,     0,     0,   303,
     302,     0,   307,   306,     0,     0,   308,   311,   309,   324,
     323,     0,     0,     0,     0,     0,    88,    40,     0,     0,
     542,   546,    88,   119,     0,   575,   573,   574,     0,     0,
     334,     0,     0,   334,     0,   514,     0,   409,     0,   408,
     411,   410,   453,     0,   454,     0,     0,     0,     0,     0,
       0,     0,     0,   212,     0,     0,   210,     0,   334,     0,
       0,     0,     0,     0,   334,     0,     0,     0,   334,   334,
       0,     0,     0,   327,     0,   270,   269,   273,     0,     0,
       0,   300,   297,   268,   267,     0,     0,     0,     0,   315,
     318,   312,   310,     0,     0,     0,     0,     0,    85,    89,
      41,     0,     0,    86,   576,     0,     0,     0,     0,   619,
       0,     0,   619,     0,   513,   515,   222,   221,   334,   334,
       0,     0,     0,     0,     0,     0,     0,     0,   422,   419,
     420,     0,     0,   462,   417,     0,   464,   421,     0,     0,
     463,   418,     0,   465,   620,   620,   620,     0,   443,   446,
       0,   444,   448,     0,     0,     0,     0,     0,   279,     0,
     274,   282,   286,   285,     0,     0,   239,   321,   243,   241,
     316,   316,   322,     0,   258,   257,   518,   216,   217,   562,
     560,     0,     0,   620,     0,   561,   620,     0,     0,     0,
       0,     0,   334,   334,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   620,     0,     0,   620,     0,
       0,   461,     0,   329,   328,   325,   326,   275,     0,     0,
       0,     0,     0,     0,   244,   245,     0,   248,   317,     0,
       0,   260,   334,   334,   565,   334,   566,   334,    69,    69,
     618,   618,   618,     0,   457,     0,   458,   618,   508,   510,
     509,   511,   504,   506,   505,   507,     0,   470,     0,   472,
     441,     0,   471,     0,   473,   442,   452,   451,   619,   619,
     263,   262,     0,   276,   280,     0,     0,   240,     0,   251,
     242,   246,   247,   249,     0,     0,   261,     0,     0,     0,
       0,     0,     0,     0,     0,   455,   456,     0,     0,     0,
       0,     0,     0,     0,     0,   449,   450,     0,   283,   284,
     250,   313,   314,     0,     0,   620,   620,   516,   517,   617,
     617,     0,     0,     0,     0,     0,     0,     0,     0,   264,
     571,   572,   567,   568,   459,   460,   474,   477,   476,   480,
     475,   479,   478,   481
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -909,  -909,  -909,  -909,   -34,   967,    27,  -909,  1035,  -909,
     -59,  -909,   971,  -647,   -58,   755,  -909,   608,  -909,  -909,
    -909,  -909,  -182,  -353,  -909,  -909,   269,  -909,  -909,  -114,
     228,  -909,   266,  -909,   391,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,   785,   438,   512,   365,  -909,  -173,  -909,   795,
    -168,   519,   340,   520,   851,   846,   842,   850,   852,  -909,
    -909,   536,  -909,   607,  -625,  -643,  -504,  -331,  -261,  -909,
     192,  -909,  -909,  -909,  -368,  -428,   465,  -644,  -909,  -909,
    -122,   387,  -909,   351,  -909,  -909,  -909,  -909,  -909,  -909,
     203,  -909,   202,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
     210,  -769,   272,  -909,  -909,  -909,  -909,  -909,  -909,   215,
    -909,   353,  -909,  -909,  -909,  -909,  -909,   722,  -909,  -909,
    -909,   430,   264,   431,  -909,  -909,  -909,  -909,  -909,  -909,
     462,   291,  -909,  1139,    -2,  -909,  -909,   372,    -1,   395,
    -909,  -909,  1217,  -909,  -909,  1101,     4,  -112,   158,  -909,
    1175,  -909,   107,  -909,  -909,  -909,  -118,  -909,  -909,  -909,
     951,  -143,  -142,  -140,  -909,  -562,  -909,  -909,   -49,   867,
    -909,  -909,  -909,  -125,  -163,  -909,  -909,   378,   388,   242,
    -117,   336,   271,   265,  -113,  -909,   768,  -108,  -909,  -909,
     631,  -909,  -107,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,   974,  -293,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,   991,  -909,  -909,  -909,  -909,
    -797,  -909,  -681,  -909,  -909,  -909,  -909,  -909,  -909,   881,
    -909,  -909,  -909,  1223,  -909,  -909,  -909,  -909,  1107,  -909,
    -909,  -909,  -909,  1088,  -691,  -437,  -582,  -908
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   192,   193,     9,   499,   100,   194,   102,   103,   104,
     195,   106,   107,   796,   130,   571,   417,   418,   196,   197,
     198,   199,   200,   419,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   878,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   403,   404,   405,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   337,   420,   584,   777,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   605,   606,   550,   551,   519,
     696,   697,   520,   765,   521,   522,   523,   949,  1003,  1004,
    1005,  1006,  1007,   524,   525,   526,   792,  1066,   527,   528,
     636,   865,   857,   766,   939,  1052,   767,   940,  1053,   768,
     529,   944,   530,   531,   532,   533,   534,   644,   535,   536,
     786,   787,  1009,   788,   537,   538,   539,   540,   791,   541,
     852,   853,     2,     3,   238,   149,    14,   123,   236,    11,
      82,     4,     5,     6,     7,    15,    16,    17,    48,    49,
      50,    18,   115,    65,   142,   143,   156,   165,   277,   278,
     279,   261,   262,   263,   264,   239,   109,   379,   240,   241,
     242,   364,   243,   265,   847,   928,   931,   848,   849,  1048,
     266,   971,   972,   973,   267,   472,   609,   268,   473,   474,
     733,   475,   269,   476,   894,   895,   288,   619,   622,    19,
     139,   140,   161,   270,   271,   272,   552,   553,   554,    20,
     136,   137,   158,   251,   252,   253,   254,   372,   255,   256,
     888,   257,   806,    21,   133,   134,   154,   245,   246,   247,
      22,    23,    24,    25,    76,    77,    78,   117,   118,   147,
     119,   148,    26,   168,   823,  1073,   616,   989
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    13,   105,   378,   392,   807,   689,   449,   692,   794,
     663,   825,   867,    51,   773,   305,   891,   990,   991,    52,
     159,   280,   281,   163,   282,   739,    55,    99,    56,   802,
     694,   801,   748,    32,   601,    58,   546,   602,   345,   283,
     376,   556,   127,   613,   942,  -615,   377,   284,   260,   128,
    -423,   285,   276,   968,    55,  1014,   286,   287,  1016,   113,
     108,   126,   114,   357,   126,   580,   833,   599,   376,   113,
      55,   654,   114,   346,   617,   116,   126,  1040,   638,   784,
    1045,   126,   162,   358,   943,   603,   798,   126,   101,   639,
     610,   126,   126,   602,   126,   653,   785,   640,   126,   125,
     740,    91,   389,   126,   604,   126,   582,     1,   126,   126,
     686,   125,   291,   969,   668,   126,   590,   105,    94,    51,
     751,   166,   292,   126,   304,   808,   809,   126,   695,   812,
     406,   407,   347,   348,   155,   280,   281,   155,   282,   126,
     155,   611,   295,   116,   125,   830,   831,   832,    51,   874,
     880,   244,   632,   283,    52,   250,   382,   588,   259,   260,
     612,   284,   275,   349,   350,   285,   276,   699,   701,   129,
     286,   287,   129,   428,   429,   298,   837,   124,   391,   125,
     840,   316,   307,   591,   401,   843,   393,  1112,  1113,   359,
     394,   896,   317,   360,   502,   401,   126,   602,   558,   129,
     129,   126,   129,   101,   959,   960,   129,   933,   561,   965,
     303,   129,   618,   129,   938,   621,   129,   129,  1069,   627,
    1070,   126,   827,   129,   589,   126,   851,   126,   976,  1055,
    1056,   129,   647,   648,   649,   129,   579,   569,   127,   128,
     105,   105,   126,   978,   402,   402,   402,   401,   370,   410,
     250,   126,   980,   581,   126,   982,   126,   984,   126,   987,
     126,  1102,   503,   587,   125,   395,   398,   557,   764,   259,
     126,  1104,   653,   155,   685,   125,   275,   126,  1106,   695,
    1012,  1013,   790,  1087,   126,  1108,   105,   105,   602,   851,
     975,   977,   126,   736,   341,   342,   799,   979,   396,   399,
      30,   502,   822,   105,   129,   105,    79,   964,   981,   129,
     967,   432,   434,   105,   983,     8,   105,   501,   986,  -615,
     829,  1101,  1103,  1105,   105,    28,   101,   101,   450,   129,
     452,  1107,   502,   129,   454,   129,   634,    29,   462,  -230,
     735,   470,  -331,   125,   433,   435,   402,  -233,   863,   470,
     129,   625,   402,   630,    54,  -234,   664,   745,   666,   129,
     125,   451,   129,   453,   129,    32,   129,   244,   129,   503,
     124,   463,   101,   101,   471,   542,  1058,  -231,   129,   125,
     817,   125,   471,   771,    12,   129,   125,   390,    57,   101,
     820,   101,   129,   774,  -235,   125,   125,   125,   125,   101,
     503,   105,   101,   500,   125,    31,   105,   105,  1114,  1115,
     101,    80,  1110,  1111,   779,   125,  -236,   375,    55,   651,
     782,   125,   105,   855,   861,   125,   585,  1050,   125,   125,
     125,   593,   595,   383,    28,  -230,   736,   635,   125,   455,
    -615,  -230,   502,  -233,  -230,   737,   144,   628,   145,  -233,
     864,  -234,  -233,   736,   757,   501,   626,  -234,   631,   586,
    -234,   665,   746,   667,   594,   596,  1085,  1086,   600,   607,
     614,   126,   698,  -231,   736,   826,   818,   343,   344,  -231,
     629,   318,  -231,   824,   125,   819,   818,   101,   772,   105,
    -235,   319,   101,   101,   935,   821,  -235,   559,   775,  -235,
     936,   113,   828,   879,   114,   124,   752,   753,   101,   879,
     503,   125,  -236,   542,   672,   338,   339,   340,  -236,   780,
     652,  -236,   758,   869,   870,   783,   248,   359,   856,   862,
     258,   360,  1051,   273,   946,   947,    81,   289,   105,   105,
     560,   500,   952,  -615,   954,   955,  -336,   673,   125,   308,
     309,   310,   311,   312,   313,   314,   315,   120,   663,  -341,
     386,  -341,   122,   703,   705,   501,   359,    28,  1001,  -615,
     360,   322,  -337,   544,   105,   101,  1002,   501,   105,   710,
     592,   361,   110,   362,  1074,  1075,    28,   413,   363,  -330,
    1076,   501,   624,    28,   700,   702,   704,   706,    33,   755,
     111,   376,   804,   769,   504,   995,   996,   620,   805,  -615,
     124,   935,  -583,   797,   112,  1036,   956,   937,   797,   125,
      34,  1037,  1011,   542,   101,   101,   126,  -615,   448,   322,
    -552,   570,   756,    35,  1038,   542,   770,    36,    37,   153,
    1039,   811,   505,    38,   814,    39,    40,    41,    42,   542,
    -615,   500,    43,  -528,  -615,  1041,    44,  -394,   131,   547,
     101,  1042,   555,   500,   101,  1071,  1072,  -615,    45,  1057,
    -553,    46,  1043,    47,   376,   915,   757,   500,  1044,  -615,
    1046,   922,  -529,   502,   502,   835,   132,   436,   437,   438,
     439,   502,   839,   502,   502,   842,   637,   135,   641,  -615,
     845,   645,  -395,   424,   425,   426,   427,   427,   427,   427,
     138,   504,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   141,   427,  1088,  1089,    67,  -615,  1047,  1047,
     458,  -615,  -615,  -615,  -445,  -447,  -569,  -615,   146,   797,
    -570,   508,   504,   151,   758,   323,   324,   325,   846,   505,
     157,   503,   503,   235,   502,   502,  1109,   160,    68,   503,
     164,   503,   503,   408,   339,   340,   237,   105,   105,   105,
     105,   502,   322,   424,   577,   105,   376,   376,   293,   301,
     505,   249,   105,    69,    70,    71,    72,    73,    74,    75,
     306,   274,   900,   902,   904,   906,   322,   322,   671,   676,
     911,   351,   352,  1091,  1092,   924,   925,   918,   887,   950,
     293,   887,  1099,  1100,   506,   757,   299,   376,   502,   868,
     961,   962,   503,   503,   502,   901,   903,   905,   907,   366,
     366,   889,   892,   912,   316,   366,   846,   913,   300,   503,
     919,   366,   846,   916,  1020,  1021,   927,   930,   508,   366,
     301,   920,   504,   101,   101,   101,   101,   366,   317,   923,
     320,   101,   430,   431,   759,   608,   608,   951,   101,   321,
     322,   440,   441,   502,   502,   353,   859,   860,   354,   508,
     502,   365,   355,   758,   356,   366,   503,   367,   507,   371,
     505,    59,   503,   368,   369,   373,   970,   970,   235,   380,
     388,   384,   760,   387,   409,   502,   411,   412,   400,    60,
     414,   422,   509,   457,    61,   545,   562,   563,    62,   565,
     566,   506,   574,   575,   578,   235,   576,   597,   678,   421,
     679,   680,   681,    63,   598,   623,   655,   633,   642,   376,
     650,   503,   503,   656,   423,   669,   675,   501,   503,   657,
     658,   659,   506,   660,   661,   662,   670,   674,    84,    64,
     677,    85,   682,   687,   446,   688,   235,   690,   691,   693,
    1023,  1025,   707,   503,   708,   709,   734,   105,   738,   105,
     750,   742,   105,   741,   105,   744,    89,   749,   747,   508,
     754,    90,   736,   795,   710,   507,   810,   235,   549,   653,
     235,   508,  1077,   501,  1079,   542,    92,  1081,    93,  1083,
    1067,  1068,   813,   887,   815,   887,   834,   816,   838,   509,
      95,    96,   572,   572,    97,   841,   507,   844,   818,   858,
     850,   884,   866,   500,   391,  1078,   873,  1080,    55,   875,
    1082,   876,  1084,   877,   893,   885,    83,   803,    84,   886,
     509,    85,   890,   695,   898,   899,    86,   953,   926,   908,
      87,   542,   506,   101,   583,   101,   909,   910,   101,    88,
     101,   914,   711,   917,   761,   921,    89,   948,   934,   957,
     958,    90,   925,   963,   966,    91,   759,   985,   988,   500,
     924,   851,   992,   504,   504,  1000,    92,   643,    93,   643,
    1008,   504,    94,   504,   504,  1015,  1017,  1028,  1059,  1018,
      95,    96,  1019,   712,    97,  1022,  1027,    98,  1090,  1029,
    1030,  1031,  1032,  1033,   760,  1034,  1035,  1060,  1064,  1021,
    1065,   505,   505,  1020,  1097,  1093,   507,  1094,  1095,   505,
    1096,   505,   505,   296,   713,   714,  1098,   297,   762,   715,
     716,   717,   718,   719,   720,   721,   722,   723,  1116,   724,
     509,  1117,  1118,  1119,   504,   504,  1120,   152,  1121,   725,
     726,   573,   763,   727,   728,   729,   730,  1122,  1123,   731,
     732,   504,   683,   684,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   883,   568,   335,   336,   444,  1062,   564,
     443,   836,   505,   505,   442,   897,   445,  1061,  1063,   941,
     447,   997,  1054,   945,   646,  1010,   871,   872,   854,   505,
     121,    27,   150,   508,    66,   759,   994,   932,   504,   385,
     508,   508,  1049,   456,   504,   974,   929,  1024,   508,   615,
     508,   508,   743,   374,  1026,   381,   583,    53,   776,   778,
     459,   167,   781,     0,   290,     0,     0,   789,     0,   776,
       0,     0,     0,   760,     0,     0,   505,     0,     0,     0,
       0,     0,   505,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   549,   504,   504,    33,     0,     0,     0,     0,
     504,     0,     0,     0,     0,     0,   761,     0,     0,     0,
       0,   508,   508,   506,   506,     0,     0,    34,     0,     0,
       0,   506,     0,   506,   506,   504,     0,   549,   508,     0,
      35,   505,   505,     0,    36,    37,     0,     0,   505,     0,
      38,     0,    39,    40,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   505,     0,    45,     0,     0,    46,     0,
      47,     0,   508,     0,     0,   508,     0,     0,     0,     0,
     762,   508,     0,     0,   506,   506,     0,   507,   507,     0,
       0,     0,     0,     0,     0,   507,     0,   507,   507,     0,
       0,   506,     0,     0,   763,     0,     0,     0,     0,   776,
       0,   509,   509,     0,     0,   881,   882,     0,     0,   509,
       0,   509,   509,     0,     0,     0,     0,     0,     0,     0,
     508,   508,     0,   583,     0,     0,     0,   508,     0,     0,
       0,     0,     0,     0,     0,   761,     0,     0,   506,     0,
       0,     0,     0,     0,   506,     0,     0,     0,   507,   507,
       0,     0,   508,     0,     0,     0,     0,   776,     0,     0,
       0,     0,     0,     0,   776,   507,     0,     0,     0,     0,
       0,     0,   509,   509,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   509,
       0,     0,     0,   506,   506,     0,     0,    55,     0,     0,
     506,     0,     0,     0,     0,    83,     0,    84,     0,   762,
      85,     0,   507,     0,     0,    86,     0,     0,   507,    87,
       0,     0,   460,     0,     0,   506,     0,     0,    88,     0,
       0,     0,     0,   763,     0,    89,   509,     0,     0,     0,
      90,   993,   509,     0,    91,     0,     0,     0,     0,     0,
       0,   998,   999,     0,     0,    92,     0,    93,     0,     0,
       0,    94,     0,     0,     0,     0,     0,   507,   507,    95,
      96,     0,     0,    97,   507,     0,   461,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   509,   509,     0,     0,     0,     0,     0,   509,   507,
     477,     0,     0,   478,   169,   170,   171,   172,   583,     0,
     173,    83,   479,    84,     0,     0,    85,   480,     0,   481,
     482,    86,     0,   509,   483,    87,     0,     0,     0,     0,
       0,   175,     0,   484,    88,   485,   486,   487,   488,     0,
       0,    89,     0,     0,     0,   489,    90,     0,   176,   177,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     490,    92,     0,    93,   178,     0,     0,    94,     0,   491,
     179,   492,   180,   493,   181,    95,    96,   494,   495,    97,
     496,     0,   294,     0,   497,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
    -197,   183,     0,     0,     0,   498,     0,     0,   184,   185,
     186,     0,     0,   187,     0,   188,   189,     0,     0,   793,
       0,     0,    55,   169,   170,   171,   172,     0,     0,   173,
      83,     0,    84,     0,     0,    85,   174,     0,   190,   191,
      86,     0,     0,     0,    87,     0,     0,     0,     0,     0,
     175,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,    90,    55,   176,   177,    91,
       0,     0,     0,     0,    83,     0,    84,     0,     0,    85,
      92,     0,    93,   178,    86,     0,    94,     0,    87,   179,
       0,   180,     0,   181,    95,    96,   182,    88,    97,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    90,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
     183,     0,     0,     0,    92,     0,    93,   184,   185,   186,
      94,     0,   187,     0,   188,   189,     0,     0,    95,    96,
       0,     0,    97,     0,     0,   294,     0,     0,     0,     0,
       0,     0,   478,   169,   170,   171,   172,   190,   191,   173,
      83,   479,    84,  1001,     0,    85,   480,     0,   481,   482,
      86,  1002,     0,   483,    87,     0,     0,     0,     0,     0,
     175,     0,   484,    88,   485,   486,   487,   488,     0,     0,
      89,     0,     0,     0,   489,    90,     0,   176,   177,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   490,
      92,     0,    93,   178,     0,     0,    94,     0,   491,   179,
     492,   180,   493,   181,    95,    96,   494,   495,    97,   496,
       0,   294,     0,   497,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   376,     0,
     183,     0,     0,     0,   498,     0,     0,   184,   185,   186,
       0,     0,   187,     0,   188,   189,     0,     0,   478,   169,
     170,   171,   172,     0,     0,   173,    83,   479,    84,     0,
       0,    85,   480,     0,   481,   482,    86,   190,   191,   483,
      87,     0,     0,     0,     0,     0,   175,     0,   484,    88,
     485,   486,   487,   488,     0,     0,    89,     0,     0,     0,
     489,    90,     0,   176,   177,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   490,    92,     0,    93,   178,
       0,     0,    94,     0,   491,   179,   492,   180,   493,   181,
      95,    96,   494,   495,    97,   496,     0,   294,     0,   497,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,   183,     0,     0,     0,
     498,     0,     0,   184,   185,   186,     0,     0,   187,     0,
     188,   189,     0,     0,    55,   169,   170,   171,   172,     0,
       0,   173,    83,   479,    84,     0,     0,    85,   480,     0,
       0,   482,    86,   190,   191,   483,    87,     0,     0,     0,
       0,     0,   175,     0,   484,    88,   485,   486,   487,   488,
       0,     0,    89,     0,     0,     0,   489,    90,     0,   176,
     177,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   490,    92,     0,    93,   178,     0,     0,    94,     0,
     491,   179,   492,   180,   493,   181,    95,    96,   494,   495,
      97,   496,     0,     0,     0,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     376,     0,   183,     0,     0,     0,   498,     0,     0,   184,
     185,   186,     0,     0,   187,     0,   188,   189,     0,    55,
     169,   170,   171,   172,     0,     0,   173,    83,     0,    84,
       0,     0,    85,   174,     0,     0,     0,    86,     0,   190,
     191,    87,     0,     0,     0,     0,     0,   175,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,    90,     0,   176,   177,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,    93,
     178,   548,     0,    94,     0,     0,   179,     0,   180,     0,
     181,    95,    96,   182,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   391,   800,   183,     0,     0,
       0,     0,     0,     0,   184,   185,   186,     0,     0,   187,
       0,   188,   189,     0,    55,   169,   170,   171,   172,     0,
       0,   173,    83,     0,    84,     0,     0,    85,   174,     0,
       0,     0,    86,     0,   190,   191,    87,     0,     0,     0,
       0,     0,   175,     0,     0,    88,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,     0,    90,     0,   176,
     177,    91,     0,   415,     0,     0,     0,     0,     0,     0,
     416,     0,    92,     0,    93,   178,     0,     0,    94,     0,
       0,   179,     0,   180,     0,   181,    95,    96,   182,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,   169,   170,   171,   172,     0,     0,   173,    83,     0,
      84,     0,   183,    85,   174,     0,     0,     0,    86,   184,
     185,   186,    87,     0,   187,     0,   188,   189,   175,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    89,     0,
       0,     0,     0,    90,     0,   176,   177,    91,     0,   190,
     191,     0,     0,     0,     0,     0,     0,     0,    92,     0,
      93,   178,   548,     0,    94,     0,     0,   179,     0,   180,
       0,   181,    95,    96,   182,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   391,     0,   183,     0,
       0,     0,     0,     0,     0,   184,   185,   186,     0,     0,
     187,     0,   188,   189,     0,    55,   169,   170,   171,   172,
       0,     0,   173,    83,     0,    84,     0,     0,    85,   174,
       0,     0,     0,    86,     0,   190,   191,    87,     0,     0,
       0,     0,     0,   175,     0,     0,    88,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,    90,     0,
     176,   177,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,    93,   178,     0,     0,    94,
       0,     0,   179,     0,   180,     0,   181,    95,    96,   182,
       0,    97,     0,     0,   302,     0,     0,     0,     0,     0,
       0,    55,   169,   170,   171,   172,     0,     0,   173,    83,
       0,    84,     0,   183,    85,   174,     0,     0,     0,    86,
     184,   185,   186,    87,     0,   187,     0,   188,   189,   175,
       0,     0,    88,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,    90,     0,   176,   177,    91,     0,
     190,   191,     0,     0,     0,     0,     0,     0,     0,    92,
       0,    93,   178,     0,     0,    94,     0,     0,   179,     0,
     180,     0,   181,    95,    96,   182,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   183,
     567,     0,     0,     0,     0,     0,   184,   185,   186,     0,
       0,   187,     0,   188,   189,     0,    55,   169,   170,   171,
     172,     0,     0,   173,    83,     0,    84,     0,     0,    85,
     174,     0,     0,     0,    86,     0,   190,   191,    87,     0,
       0,     0,     0,     0,   175,     0,     0,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    90,
       0,   176,   177,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,    93,   178,     0,     0,
      94,     0,     0,   179,     0,   180,     0,   181,    95,    96,
     182,     0,    97,     0,     0,   294,     0,     0,     0,     0,
       0,     0,    55,   169,   170,   171,   172,     0,     0,   173,
      83,     0,    84,     0,   183,    85,   174,     0,     0,     0,
      86,   184,   185,   186,    87,     0,   187,     0,   188,   189,
     175,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,    90,    55,   176,   177,    91,
       0,   190,   191,     0,    83,     0,    84,     0,     0,    85,
      92,     0,    93,   178,    86,     0,    94,     0,    87,   179,
       0,   180,     0,   181,    95,    96,   182,    88,    97,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    90,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
     183,     0,     0,     0,    92,     0,    93,   184,   185,   186,
      94,     0,   187,     0,   188,   189,     0,     0,    95,    96,
       0,     0,    97,    59,     0,   397,   464,     0,     0,     0,
       0,     0,     0,     0,    83,     0,    84,   190,   191,    85,
       0,    60,   465,     0,    86,     0,    61,     0,    87,     0,
      62,   466,   467,     0,     0,     0,     0,    88,     0,     0,
       0,     0,   468,     0,    89,    63,     0,     0,     0,    90,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,    93,     0,     0,     0,
      94,    64,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,    97,     0,     0,   469,    55,   169,   170,   171,
     172,     0,     0,   173,    83,     0,    84,     0,     0,    85,
     174,     0,     0,     0,    86,     0,     0,     0,    87,     0,
       0,     0,     0,     0,   175,     0,     0,    88,     0,   543,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    90,
       0,   176,   177,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,    93,   178,     0,     0,
      94,     0,     0,   179,     0,   180,     0,   181,    95,    96,
     182,     0,    97,     0,     0,     0,     0,    59,     0,     0,
     464,     0,     0,     0,     0,     0,     0,     0,    83,     0,
      84,     0,     0,    85,   183,    60,   465,     0,    86,     0,
      61,     0,    87,     0,    62,   466,   467,     0,   188,   189,
       0,    88,     0,     0,     0,    33,   468,     0,    89,    63,
       0,     0,     0,    90,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    92,     0,
      93,     0,     0,     0,    94,    64,     0,     0,     0,     0,
      35,     0,    95,    96,     0,    37,    97,     0,     0,   469,
      38,     0,    39,    40,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,     0,
      47
};

static const yytype_int16 yycheck[] =
{
       1,     3,    61,   264,   297,   686,   588,   360,   590,   652,
     514,   702,   781,    15,   639,   183,   813,   925,   926,    15,
     138,   164,   164,   141,   164,   607,     4,    61,    29,   676,
     592,   675,   614,     4,     1,    36,   389,     4,    10,   164,
     100,   394,   100,   471,     1,    98,   106,   164,   160,   107,
     103,   164,   164,    11,     4,   963,   164,   164,   966,     1,
      61,     3,     4,   118,     3,     4,   710,     1,   100,     1,
       4,   499,     4,    45,   106,    76,     3,   985,     4,    16,
     988,     3,   141,   138,    41,    52,    98,     3,    61,    15,
       1,     3,     3,     4,     3,     4,    33,    23,     3,   111,
      71,    51,   102,     3,    71,     3,     4,    81,     3,     3,
       4,   111,    98,    71,   542,     3,     4,   176,    68,   121,
     624,    99,   108,     3,   183,   687,   688,     3,     4,   691,
     303,   304,   104,   105,   135,   278,   278,   138,   278,     3,
     141,    52,   176,   144,   111,   707,   708,   709,   150,   792,
     797,   153,   483,   278,   150,   157,   274,     4,   160,   271,
      71,   278,   164,   135,   136,   278,   278,   595,   596,   111,
     278,   278,   111,   341,   342,   176,   738,   111,   100,   111,
     742,   108,   183,    71,   111,   747,    98,  1095,  1096,    98,
     102,   816,   108,   102,   376,   111,     3,     4,   103,   111,
     111,     3,   111,   176,   885,   886,   111,   850,   103,   890,
     183,   111,   473,   111,   857,   476,   111,   111,  1015,   480,
    1017,     3,   102,   111,    71,     3,     4,     3,     4,   998,
     999,   111,   493,   494,   495,   111,     4,   410,   296,   297,
     299,   300,     3,     4,   302,   303,   304,   111,   249,   307,
     252,     3,     4,     4,     3,     4,     3,     4,     3,     4,
       3,     4,   376,     4,   111,   299,   300,   103,   636,   271,
       3,     4,     4,   274,     4,   111,   278,     3,     4,     4,
     961,   962,   650,  1052,     3,     4,   345,   346,     4,     4,
       4,     4,     3,    97,   109,   110,    98,     4,   299,   300,
       1,   483,   106,   362,   111,   364,     1,   889,     4,   111,
     892,   345,   346,   372,     4,     4,   375,   376,     4,    98,
     102,     4,     4,     4,   383,   108,   299,   300,   362,   111,
     364,     4,   514,   111,     1,   111,     1,   120,   372,     1,
       1,   375,     0,   111,   345,   346,   404,     1,     1,   383,
     111,     1,   410,     1,    98,     1,     1,     1,     1,   111,
     111,   362,   111,   364,   111,     4,   111,   369,   111,   483,
     111,   372,   345,   346,   375,   376,  1001,     1,   111,   111,
       1,   111,   383,     1,     0,   111,   111,    98,   108,   362,
       1,   364,   111,     1,     1,   111,   111,   111,   111,   372,
     514,   460,   375,   376,   111,   106,   465,   466,  1099,  1100,
     383,   106,  1093,  1094,     1,   111,     1,   259,     4,     1,
       1,   111,   481,     1,     1,   111,   460,     1,   111,   111,
     111,   465,   466,   275,   108,    97,    97,   102,   111,   106,
      98,   103,   624,    97,   106,   106,    97,   481,    99,   103,
     103,    97,   106,    97,   636,   514,   106,   103,   106,   460,
     106,   106,   106,   106,   465,   466,  1048,  1049,   469,   470,
     471,     3,   594,    97,    97,   102,    97,   129,   130,   103,
     481,    98,   106,   106,   111,   106,    97,   460,   106,   548,
      97,   108,   465,   466,    97,   106,   103,   103,   106,   106,
     103,     1,   102,   796,     4,   111,   628,   629,   481,   802,
     624,   111,    97,   514,   548,   111,   112,   113,   103,   106,
     102,   106,   636,   784,   785,   106,   154,    98,   106,   106,
     158,   102,   106,   161,   865,   866,   100,   165,   597,   598,
     103,   514,   873,    98,   875,   876,   101,   548,   111,   184,
     185,   186,   187,   188,   189,   190,   191,   107,  1062,   100,
     291,   102,   106,   597,   598,   624,    98,   108,    15,    98,
     102,    97,   101,    99,   633,   548,    23,   636,   637,   120,
     102,    53,     4,    55,  1021,  1022,   108,   318,    60,     0,
    1027,   650,   107,   108,   595,   596,   597,   598,     9,   633,
       4,   100,   100,   637,   376,   936,   937,   106,   106,    98,
     111,    97,   101,   671,     4,    97,   877,   103,   676,   111,
      31,   103,   953,   624,   597,   598,     3,    98,   359,    97,
     101,    99,   633,    44,    97,   636,   637,    48,    49,   100,
     103,   690,   376,    54,   693,    56,    57,    58,    59,   650,
      98,   624,    63,   101,    98,    97,    67,   101,     4,   390,
     633,   103,   393,   636,   637,  1018,  1019,    98,    79,  1000,
     101,    82,    97,    84,   100,   838,   858,   650,   103,    98,
     106,   844,   101,   865,   866,   734,   107,   347,   348,   349,
     350,   873,   741,   875,   876,   744,   486,   107,   488,    98,
     749,   491,   101,   338,   339,   340,   341,   342,   343,   344,
     107,   483,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   107,   358,  1055,  1056,    29,    98,   989,   990,
     101,    98,    98,    98,   101,   101,   101,    98,   102,   797,
     101,   376,   514,   102,   858,   139,   140,   141,   750,   483,
     100,   865,   866,   146,   936,   937,  1087,   100,    61,   873,
     100,   875,   876,   111,   112,   113,   101,   826,   827,   828,
     829,   953,    97,   408,    99,   834,   100,   100,   102,   102,
     514,    97,   841,    86,    87,    88,    89,    90,    91,    92,
     183,    97,   826,   827,   828,   829,    97,    97,    99,    99,
     834,   133,   134,  1064,  1065,    93,    94,   841,   810,   868,
     102,   813,  1073,  1074,   376,   997,   102,   100,  1000,   102,
      93,    94,   936,   937,  1006,   826,   827,   828,   829,    97,
      97,    99,    99,   834,   108,    97,   838,    99,   102,   953,
     841,    97,   844,    99,    95,    96,   848,   849,   483,    97,
     102,    99,   624,   826,   827,   828,   829,    97,   108,    99,
     102,   834,   343,   344,   636,   470,   471,   868,   841,   103,
      97,   351,   352,  1055,  1056,   114,   769,   770,   119,   514,
    1062,   103,   115,   997,   137,    97,  1000,     4,   376,    49,
     624,     1,  1006,   101,    97,   101,   898,   899,   291,   101,
     293,   101,   636,     4,   103,  1087,     4,     4,   301,    19,
       4,     4,   376,   120,    24,   103,   103,   103,    28,   103,
     103,   483,    97,   103,   103,   318,   107,    52,   563,   322,
     565,   566,   567,    43,    52,   101,   106,   102,   102,   100,
     102,  1055,  1056,   106,   337,     4,    97,  1006,  1062,   106,
     106,   106,   514,   106,   106,   101,   103,   101,    14,    69,
     103,    17,   103,   102,   357,   102,   359,    98,   102,    98,
     972,   973,   102,  1087,   102,   102,    98,  1036,   102,  1038,
     100,   102,  1041,    98,  1043,    98,    42,    98,   102,   624,
      85,    47,    97,   102,   120,   483,   100,   390,   391,     4,
     393,   636,  1036,  1062,  1038,  1006,    62,  1041,    64,  1043,
    1012,  1013,   100,  1015,   103,  1017,   102,   120,   100,   483,
      76,    77,   415,   416,    80,   102,   514,   100,    97,    97,
     102,   101,   103,  1006,   100,  1036,   103,  1038,     4,   103,
    1041,   103,  1043,   103,   107,   103,    12,   682,    14,   103,
     514,    17,   103,     4,   100,   100,    22,     1,   101,   103,
      26,  1062,   624,  1036,   457,  1038,   103,   103,  1041,    35,
    1043,   103,    32,   103,   636,   103,    42,   100,   120,    99,
      99,    47,    94,   101,   101,    51,   858,   101,   101,  1062,
      93,     4,   103,   865,   866,    27,    62,   490,    64,   492,
       4,   873,    68,   875,   876,   100,   100,   103,   107,   102,
      76,    77,   102,    73,    80,   101,   101,    83,   107,   103,
     103,   103,   103,   103,   858,   103,   103,   101,   103,    96,
     103,   865,   866,    95,   103,    94,   624,    93,   101,   873,
     101,   875,   876,   176,   104,   105,   103,   176,   636,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   103,   119,
     624,   103,   103,   103,   936,   937,   103,   132,   103,   129,
     130,   416,   636,   133,   134,   135,   136,   103,   103,   139,
     140,   953,   574,   576,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   802,   409,   131,   132,   355,  1006,   404,
     354,   736,   936,   937,   353,   818,   356,  1004,  1006,   858,
     358,   939,   997,   860,   492,   951,   786,   786,   756,   953,
      81,     4,   121,   858,    49,   997,   935,   849,  1000,   278,
     865,   866,   990,   366,  1006,   899,   848,   972,   873,   471,
     875,   876,   611,   252,   973,   271,   639,    24,   641,   642,
     369,   144,   645,    -1,   166,    -1,    -1,   650,    -1,   652,
      -1,    -1,    -1,   997,    -1,    -1,  1000,    -1,    -1,    -1,
      -1,    -1,  1006,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   675,  1055,  1056,     9,    -1,    -1,    -1,    -1,
    1062,    -1,    -1,    -1,    -1,    -1,   858,    -1,    -1,    -1,
      -1,   936,   937,   865,   866,    -1,    -1,    31,    -1,    -1,
      -1,   873,    -1,   875,   876,  1087,    -1,   710,   953,    -1,
      44,  1055,  1056,    -1,    48,    49,    -1,    -1,  1062,    -1,
      54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1087,    -1,    79,    -1,    -1,    82,    -1,
      84,    -1,   997,    -1,    -1,  1000,    -1,    -1,    -1,    -1,
     858,  1006,    -1,    -1,   936,   937,    -1,   865,   866,    -1,
      -1,    -1,    -1,    -1,    -1,   873,    -1,   875,   876,    -1,
      -1,   953,    -1,    -1,   858,    -1,    -1,    -1,    -1,   792,
      -1,   865,   866,    -1,    -1,   798,   799,    -1,    -1,   873,
      -1,   875,   876,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1055,  1056,    -1,   816,    -1,    -1,    -1,  1062,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   997,    -1,    -1,  1000,    -1,
      -1,    -1,    -1,    -1,  1006,    -1,    -1,    -1,   936,   937,
      -1,    -1,  1087,    -1,    -1,    -1,    -1,   850,    -1,    -1,
      -1,    -1,    -1,    -1,   857,   953,    -1,    -1,    -1,    -1,
      -1,    -1,   936,   937,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   953,
      -1,    -1,    -1,  1055,  1056,    -1,    -1,     4,    -1,    -1,
    1062,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,   997,
      17,    -1,  1000,    -1,    -1,    22,    -1,    -1,  1006,    26,
      -1,    -1,    29,    -1,    -1,  1087,    -1,    -1,    35,    -1,
      -1,    -1,    -1,   997,    -1,    42,  1000,    -1,    -1,    -1,
      47,   934,  1006,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,   944,   945,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,  1055,  1056,    76,
      77,    -1,    -1,    80,  1062,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1055,  1056,    -1,    -1,    -1,    -1,    -1,  1062,  1087,
       1,    -1,    -1,     4,     5,     6,     7,     8,  1001,    -1,
      11,    12,    13,    14,    -1,    -1,    17,    18,    -1,    20,
      21,    22,    -1,  1087,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
     101,   102,    -1,    -1,    -1,   106,    -1,    -1,   109,   110,
     111,    -1,    -1,   114,    -1,   116,   117,    -1,    -1,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,    -1,    17,    18,    -1,   139,   140,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,     4,    49,    50,    51,
      -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      62,    -1,    64,    65,    22,    -1,    68,    -1,    26,    71,
      -1,    73,    -1,    75,    76,    77,    78,    35,    80,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    62,    -1,    64,   109,   110,   111,
      68,    -1,   114,    -1,   116,   117,    -1,    -1,    76,    77,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,   139,   140,    11,
      12,    13,    14,    15,    -1,    17,    18,    -1,    20,    21,
      22,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,   109,   110,   111,
      -1,    -1,   114,    -1,   116,   117,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    -1,
      -1,    17,    18,    -1,    20,    21,    22,   139,   140,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,
     116,   117,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    -1,
      -1,    21,    22,   139,   140,    25,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,   109,
     110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,   139,
     140,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    66,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,   114,
      -1,   116,   117,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,    22,    -1,   139,   140,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,
      50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    -1,
      14,    -1,   102,    17,    18,    -1,    -1,    -1,    22,   109,
     110,   111,    26,    -1,   114,    -1,   116,   117,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    -1,    68,    -1,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,   102,    17,    18,    -1,    -1,    -1,    22,
     109,   110,   111,    26,    -1,   114,    -1,   116,   117,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,
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
      42,    -1,    -1,    -1,    -1,    47,     4,    49,    50,    51,
      -1,   139,   140,    -1,    12,    -1,    14,    -1,    -1,    17,
      62,    -1,    64,    65,    22,    -1,    68,    -1,    26,    71,
      -1,    73,    -1,    75,    76,    77,    78,    35,    80,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    62,    -1,    64,   109,   110,   111,
      68,    -1,   114,    -1,   116,   117,    -1,    -1,    76,    77,
      -1,    -1,    80,     1,    -1,    83,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    14,   139,   140,    17,
      -1,    19,    20,    -1,    22,    -1,    24,    -1,    26,    -1,
      28,    29,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    80,    -1,    -1,    83,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,   117,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      14,    -1,    -1,    17,   102,    19,    20,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    29,    30,    -1,   116,   117,
      -1,    35,    -1,    -1,    -1,     9,    40,    -1,    42,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    62,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      44,    -1,    76,    77,    -1,    49,    80,    -1,    -1,    83,
      54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   275,   276,   284,   285,   286,   287,     4,   146,
     281,   282,     0,   277,   279,   288,   289,   290,   294,   342,
     352,   366,   373,   374,   375,   376,   385,   285,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   291,   292,
     293,   277,   289,   376,    98,     4,   281,   108,   281,     1,
      19,    24,    28,    43,    69,   296,   293,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   377,   378,   379,     1,
     106,   100,   283,    12,    14,    17,    22,    26,    35,    42,
      47,    51,    62,    64,    68,    76,    77,    80,    83,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   281,   309,
       4,     4,     4,     1,     4,   295,   281,   380,   381,   383,
     107,   276,   106,   280,   111,   111,     3,   157,   157,   111,
     157,     4,   107,   367,   368,   107,   353,   354,   107,   343,
     344,   107,   297,   298,    97,    99,   102,   382,   384,   278,
     288,   102,   151,   100,   369,   281,   299,   100,   355,   299,
     100,   345,   153,   299,   100,   300,    99,   381,   386,     5,
       6,     7,     8,    11,    18,    32,    49,    50,    65,    71,
      73,    75,    78,   102,   109,   110,   111,   114,   116,   117,
     139,   140,   144,   145,   149,   153,   161,   162,   163,   164,
     165,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   206,   281,   101,   277,   308,
     311,   312,   313,   315,   277,   370,   371,   372,   280,    97,
     277,   356,   357,   358,   359,   361,   362,   364,   280,   277,
     290,   304,   305,   306,   307,   316,   323,   327,   330,   335,
     346,   347,   348,   280,    97,   277,   290,   301,   302,   303,
     304,   305,   306,   316,   323,   327,   330,   335,   339,   280,
     386,    98,   108,   102,    83,   147,   148,   155,   281,   102,
     102,   102,    83,   149,   153,   193,   206,   281,   188,   188,
     188,   188,   188,   188,   188,   188,   108,   108,    98,   108,
     102,   103,    97,   139,   140,   141,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   131,   132,   205,   111,   112,
     113,   109,   110,   129,   130,    10,    45,   104,   105,   135,
     136,   133,   134,   114,   119,   115,   137,   118,   138,    98,
     102,    53,    55,    60,   314,   103,    97,     4,   101,    97,
     281,    49,   360,   101,   358,   291,   100,   106,   211,   310,
     101,   348,   299,   291,   101,   303,   169,     4,   206,   102,
      98,   100,   349,    98,   102,   147,   281,    83,   147,   281,
     206,   111,   157,   190,   191,   192,   190,   190,   111,   103,
     157,     4,     4,   169,     4,    53,    60,   159,   160,   166,
     206,   206,     4,   206,   188,   188,   188,   188,   193,   193,
     194,   194,   147,   281,   147,   281,   195,   195,   195,   195,
     196,   196,   197,   198,   199,   200,   206,   201,   169,   166,
     147,   281,   147,   281,     1,   106,   312,   120,   101,   372,
      29,    83,   147,   281,     4,    20,    29,    30,    40,    83,
     147,   281,   328,   331,   332,   334,   336,     1,     4,    13,
      18,    20,    21,    25,    34,    36,    37,    38,    39,    46,
      61,    70,    72,    74,    78,    79,    81,    85,   106,   147,
     149,   153,   165,   172,   173,   175,   186,   187,   188,   204,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   222,
     225,   227,   228,   229,   236,   237,   238,   241,   242,   253,
     255,   256,   257,   258,   259,   261,   262,   267,   268,   269,
     270,   272,   281,   117,    99,   103,   166,   169,    66,   206,
     220,   221,   349,   350,   351,   169,   166,   103,   103,   103,
     103,   103,   103,   103,   192,   103,   103,   103,   185,   190,
      99,   158,   206,   158,    97,   103,   107,    99,   103,     4,
       4,     4,     4,   206,   207,   147,   281,     4,     4,    71,
       4,    71,   102,   147,   281,   147,   281,    52,    52,     1,
     281,     1,     4,    52,    71,   218,   219,   281,   282,   329,
       1,    52,    71,   218,   281,   329,   389,   106,   211,   340,
     106,   211,   341,   101,   107,     1,   106,   211,   147,   281,
       1,   106,   210,   102,     1,   102,   243,   243,     4,    15,
      23,   243,   102,   206,   260,   243,   260,   211,   211,   211,
     102,     1,   102,     4,   218,   106,   106,   106,   106,   106,
     106,   106,   101,   209,     1,   106,     1,   106,   218,     4,
     103,    99,   147,   281,   101,    97,    99,   103,   188,   188,
     188,   188,   103,   160,   206,     4,     4,   102,   102,   389,
      98,   102,   389,    98,   308,     4,   223,   224,   223,   218,
     281,   218,   281,   147,   281,   147,   281,   102,   102,   102,
     120,    32,    73,   104,   105,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   129,   130,   133,   134,   135,
     136,   139,   140,   333,    98,     1,    97,   106,   102,   389,
      71,    98,   102,   333,    98,     1,   106,   102,   389,    98,
     100,   209,   223,   223,    85,   147,   281,   165,   172,   173,
     175,   186,   187,   204,   217,   226,   246,   249,   252,   147,
     281,     1,   106,   207,     1,   106,   206,   208,   206,     1,
     106,   206,     1,   106,    16,    33,   263,   264,   266,   206,
     217,   271,   239,     1,   208,   102,   156,   157,    98,    98,
     101,   220,   156,   188,   100,   106,   365,   365,   308,   308,
     100,   311,   308,   100,   311,   103,   120,     1,    97,   106,
       1,   106,   106,   387,   106,   387,   102,   102,   102,   102,
     308,   308,   308,   220,   102,   311,   219,   308,   100,   311,
     308,   102,   311,   308,   100,   311,   277,   317,   320,   321,
     102,     4,   273,   274,   273,     1,   106,   245,    97,   295,
     295,     1,   106,     1,   103,   244,   103,   244,   102,   211,
     211,   264,   266,   103,   208,   103,   103,   103,   177,   349,
     156,   206,   206,   177,   101,   103,   103,   277,   363,    99,
     103,   363,    99,   107,   337,   338,   207,   224,   100,   100,
     147,   281,   147,   281,   147,   281,   147,   281,   103,   103,
     103,   147,   281,    99,   103,   317,    99,   103,   147,   281,
      99,   103,   317,    99,    93,    94,   101,   277,   318,   321,
     277,   319,   320,   208,   120,    97,   103,   103,   208,   247,
     250,   226,     1,    41,   254,   254,   210,   210,   100,   230,
     153,   281,   210,     1,   210,   210,   211,    99,    99,   365,
     365,    93,    94,   101,   389,   365,   101,   389,    11,    71,
     277,   324,   325,   326,   324,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,   101,     4,     4,   101,   390,
     390,   390,   103,   206,   274,   210,   210,   245,   206,   206,
      27,    15,    23,   231,   232,   233,   234,   235,     4,   265,
     265,   210,   365,   365,   390,   100,   390,   100,   102,   102,
      95,    96,   101,   277,   326,   277,   325,   101,   103,   103,
     103,   103,   103,   103,   103,   103,    97,   103,    97,   103,
     390,    97,   103,    97,   103,   390,   106,   211,   322,   322,
       1,   106,   248,   251,   252,   244,   244,   210,   207,   107,
     101,   233,   213,   235,   103,   103,   240,   277,   277,   363,
     363,   166,   166,   388,   388,   388,   388,   147,   281,   147,
     281,   147,   281,   147,   281,   389,   389,   244,   210,   210,
     107,   211,   211,    94,    93,   101,   101,   103,   103,   211,
     211,     4,     4,     4,     4,     4,     4,     4,     4,   210,
     365,   365,   390,   390,   387,   387,   103,   103,   103,   103,
     103,   103,   103,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   143,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   147,   147,   148,   148,   148,   149,   149,   150,   150,
     150,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   155,   155,   155,
     156,   156,   157,   158,   159,   159,   160,   160,   160,   161,
     161,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   163,   164,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   171,   171,
     172,   173,   174,   175,   175,   176,   176,   176,   177,   177,
     178,   178,   178,   179,   180,   181,   182,   183,   183,   184,
     184,   184,   184,   184,   185,   185,   185,   185,   186,   187,
     188,   188,   188,   188,   188,   188,   188,   189,   189,   189,
     189,   189,   189,   190,   190,   191,   191,   192,   192,   193,
     193,   193,   193,   194,   194,   194,   195,   195,   195,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   197,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   206,   206,   207,   208,   209,
     209,   209,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   211,   211,   212,   212,   213,
     213,   214,   215,   216,   216,   216,   216,   217,   217,   218,
     218,   219,   219,   220,   220,   220,   221,   221,   222,   222,
     223,   223,   224,   225,   225,   225,   225,   225,   225,   225,
     226,   226,   226,   226,   226,   226,   226,   227,   227,   228,
     228,   229,   230,   231,   231,   232,   232,   233,   234,   234,
     235,   235,   236,   236,   236,   236,   237,   238,   238,   239,
     240,   238,   241,   241,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   248,   248,   249,   249,   250,
     251,   252,   252,   253,   253,   254,   254,   255,   255,   255,
     255,   255,   256,   256,   257,   257,   258,   258,   258,   258,
     258,   258,   259,   259,   260,   260,   261,   261,   262,   262,
     262,   263,   263,   264,   264,   264,   265,   265,   266,   267,
     268,   269,   270,   271,   271,   272,   272,   273,   273,   274,
     275,   275,   276,   276,   277,   277,   278,   278,   279,   280,
     280,   281,   281,   282,   282,   283,   284,   284,   285,   285,
     286,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     290,   290,   290,   291,   291,   292,   292,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   294,   295,   295,   296,   296,   297,   297,   298,   298,
     298,   299,   299,   300,   301,   301,   302,   302,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   304,   304,
     304,   304,   305,   305,   305,   305,   306,   307,   307,   307,
     307,   307,   307,   308,   308,   309,   309,   309,   310,   310,
     311,   311,   312,   312,   313,   313,   314,   314,   314,   315,
     315,   316,   316,   317,   317,   318,   318,   319,   319,   320,
     321,   322,   322,   323,   323,   323,   323,   324,   324,   325,
     326,   327,   328,   328,   328,   328,   329,   330,   331,   331,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   334,   334,   334,   334,   334,   334,
     334,   334,   335,   336,   337,   337,   338,   338,   339,   340,
     340,   341,   341,   342,   343,   343,   344,   345,   346,   346,
     347,   347,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   349,   349,   350,   350,   351,   351,   352,   353,   353,
     354,   355,   356,   356,   357,   357,   358,   358,   358,   358,
     359,   359,   359,   360,   360,   361,   361,   362,   362,   363,
     363,   363,   363,   364,   364,   365,   365,   366,   367,   367,
     368,   369,   369,   370,   370,   371,   371,   372,   372,   373,
     373,   374,   375,   375,   376,   376,   377,   377,   378,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   380,   380,
     381,   382,   382,   383,   384,   385,   386,   387,   388,   389,
     390
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       0,     2,     1,     1,     1,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     4,     4,     0,
       1,     4,     4,     0,     1,     1,     3,     1,     3,     4,
       2,     2,     1,     5,     5,     7,     7,     3,     0,     1,
       4,     4,     4,     4,     4,     3,     2,     4,     4,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     4,     5,     6,
       5,     5,     5,     0,     1,     1,     2,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     0,     1,     1,
       2,     1,     3,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     3,     1,     1,     1,     5,     5,     3,     3,
       1,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     5,     3,     0,     1,     1,     2,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     2,     5,     5,     0,
       0,     7,     7,     7,     9,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     1,     1,     1,
       1,     1,     3,     8,     8,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     4,     3,     3,
       4,     3,     3,     3,     0,     1,     3,     3,     3,     3,
       4,     1,     2,     6,     6,     2,     0,     1,     2,     2,
       2,     5,     5,     1,     1,     6,     6,     1,     3,     3,
       2,     2,     0,     1,     0,     1,     0,     1,     5,     0,
       1,     1,     2,     2,     3,     4,     1,     2,     1,     1,
       5,     5,     3,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     1,     1,     1,     1,     0,     1,     2,     2,
       4,     1,     3,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     6,
       6,     6,     5,     5,     5,     5,     2,     7,     7,     7,
       7,     7,     7,     0,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     4,     4,     0,     1,     1,     4,
       4,     9,     9,     2,     2,     0,     1,     0,     1,     5,
       5,     1,     1,     6,     6,    10,    10,     2,     2,     5,
       5,     8,     5,     5,     5,     5,     2,     4,     1,     1,
       7,     7,     7,     7,    10,    10,    10,    10,    10,    10,
      10,    10,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     7,     7,     7,     7,     7,
       7,     7,     4,     5,     0,     1,     5,     5,     7,     1,
       1,     1,     1,     7,     0,     1,     2,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     0,     1,     1,     3,     7,     0,     1,
       2,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       8,     8,     8,     0,     1,     9,     9,    12,    12,     3,
       3,     6,     6,     6,     6,     1,     2,     7,     0,     1,
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
#line 2710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 132 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 133 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 147 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 152 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 163 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 167 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 180 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 197 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 201 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 236 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 244 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 248 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 255 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 259 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 273 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 274 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 279 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 282 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 287 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 290 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 293 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 300 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 306 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 307 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 310 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 322 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 323 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 325 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 338 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 339 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 348 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 358 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 362 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 363 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 388 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 392 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 393 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 396 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 397 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 400 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 401 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 404 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 412 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 416 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 420 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 432 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 463 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 464 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 472 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 479 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 480 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3922 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3928 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3934 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3940 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 488 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3946 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 489 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3952 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 492 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 3958 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 493 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 3964 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 496 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3970 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 497 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3976 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 498 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3982 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 501 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3988 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 502 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3994 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 505 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 4000 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 506 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 4006 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 509 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 4012 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 510 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 4018 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 4024 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4030 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4036 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 524 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4042 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4048 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4054 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 527 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4060 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4066 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 531 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4072 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 532 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4078 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 533 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4084 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 534 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4090 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 535 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4096 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4102 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 537 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4108 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 541 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4114 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 542 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4120 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 545 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4126 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 546 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4132 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 549 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4138 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 552 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4144 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 555 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4150 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 556 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4156 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 559 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4162 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4168 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4174 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 566 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4180 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4186 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4192 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4198 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4204 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4210 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4216 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4222 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4228 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4234 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4240 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 585 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4246 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 585 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4252 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 585 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4258 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4264 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 589 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4270 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 593 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4);}
#line 4276 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 597 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4282 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 601 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4288 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4294 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 610 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4300 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4306 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 614 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4312 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4318 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4324 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 621 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4330 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4336 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4342 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 628 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4348 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 631 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4354 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 632 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4360 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4366 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4372 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 638 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4378 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4384 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4390 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 642 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4396 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4402 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4408 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4414 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4420 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 651 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4426 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4432 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4438 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4444 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 657 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4450 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 658 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4456 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4462 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4468 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4474 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 664 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4480 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 667 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4486 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 668 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4492 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4498 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4504 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 675 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4510 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4516 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4522 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4528 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4534 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4540 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4546 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4552 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 690 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4558 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4564 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4570 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 699 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4576 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 702 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4582 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 705 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4588 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 708 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4594 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4600 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4606 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4612 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 717 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4618 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4624 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4630 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 724 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4636 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4642 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 728 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4648 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 729 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4654 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 732 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4660 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 733 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4666 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 736 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4672 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4678 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 740 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4684 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 743 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4690 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 744 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4696 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4702 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 754 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4708 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4714 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 758 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4720 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4726 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4732 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4738 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4744 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4750 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4756 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4762 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 776 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4768 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 777 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4774 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 780 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4780 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4786 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 784 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4792 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 785 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4798 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4804 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4810 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 790 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4816 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 791 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4822 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4828 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 803 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4834 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4840 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 807 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 4846 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 4852 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 811 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4858 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4864 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4870 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 814 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4876 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 815 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4882 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4888 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4894 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 818 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4900 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 819 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4906 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4912 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4918 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4924 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 828 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);}
#line 4942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 830 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 831 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 834 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 4960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 835 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 4966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 838 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 839 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 840 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 4984 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 843 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 4990 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 844 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 4996 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 5002 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 850 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 5008 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 851 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5014 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5020 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 855 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 858 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5032 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 859 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5038 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 860 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5044 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5050 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5056 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5062 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5068 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5074 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 866 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5080 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5086 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 5092 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5098 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 5104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 5116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 878 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 879 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 5128 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 880 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5134 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 883 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 5140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 887 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 888 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5152 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 889 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 5158 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 5164 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 891 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 5170 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 892 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",3,1);}
#line 5176 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 895 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 5182 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 896 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 5188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 899 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5194 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 900 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5200 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 901 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5206 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 904 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 905 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5218 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 908 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 5224 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 909 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 5230 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 912 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 913 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5242 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 916 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 917 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5254 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 921 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5266 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 922 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5272 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 926 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5278 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 927 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5284 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 933 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5290 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 937 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5296 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 940 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5302 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 941 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5308 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 944 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5314 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 945 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5320 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 948 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5326 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 949 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5332 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 955 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5338 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 961 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5344 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 964 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5350 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 965 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5356 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 968 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5362 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 969 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5368 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 973 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5374 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 977 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5380 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 980 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5386 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 981 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5392 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 987 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5398 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 993 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5404 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 999 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5410 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5416 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5422 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1005 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5428 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5434 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1009 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5440 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1013 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5446 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1016 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5452 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1017 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5458 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1020 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5464 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1021 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5470 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5476 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5482 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1025 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5488 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5494 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1028 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5500 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1029 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5506 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1031 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5512 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1032 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5518 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5524 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1036 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5530 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1040 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5536 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1041 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5542 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1042 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5548 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1043 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5554 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1044 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5560 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1045 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5566 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1046 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5572 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1047 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5578 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1048 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5584 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1049 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5590 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5596 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1051 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5602 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1052 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5608 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1053 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5614 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1054 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5620 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5626 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1056 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5632 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1057 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5638 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1058 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5644 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1059 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5650 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5656 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5662 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5668 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5674 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1066 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1067 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1068 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1071 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1080 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1085 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1101 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1105 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1108 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1109 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1114 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1117 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1124 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1127 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1128 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1132 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1136 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1137 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1140 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1142 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1144 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1149 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1150 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1154 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1157 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1158 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1163 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 5926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 5932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 5938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 5944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1180 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1184 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 6004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 6010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 6016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 6022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 6028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1207 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1214 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1223 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1224 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1226 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1229 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1230 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1235 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1241 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1244 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1245 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1248 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1251 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1252 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1255 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1256 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1259 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1260 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1263 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1264 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1269 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1270 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1275 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1278 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 1279 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 1282 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 1283 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 1286 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 597:
#line 1287 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 598:
#line 1290 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 599:
#line 1293 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 600:
#line 1294 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 601:
#line 1295 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 602:
#line 1296 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 603:
#line 1297 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 604:
#line 1298 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 605:
#line 1299 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 606:
#line 1300 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 607:
#line 1301 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 608:
#line 1304 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 609:
#line 1305 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 610:
#line 1308 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 611:
#line 1311 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 612:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 613:
#line 1315 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 614:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 615:
#line 1325 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 616:
#line 1328 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 617:
#line 1331 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 618:
#line 1334 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 619:
#line 1337 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 620:
#line 1340 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6368 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1345 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




