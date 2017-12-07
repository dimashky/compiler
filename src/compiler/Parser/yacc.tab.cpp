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
#define YYLAST   3605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  249
/* YYNRULES -- Number of rules.  */
#define YYNRULES  633
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1159

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
     529,   530,   531,   532,   533,   534,   535,   538,   539,   540,
     541,   542,   543,   544,   556,   557,   560,   561,   564,   567,
     570,   571,   574,   575,   578,   581,   582,   585,   586,   589,
     590,   591,   592,   595,   598,   599,   600,   600,   600,   603,
     604,   608,   613,   614,   617,   618,   621,   622,   625,   626,
     629,   632,   635,   636,   639,   640,   643,   644,   645,   646,
     647,   650,   651,   654,   655,   658,   659,   660,   661,   662,
     663,   666,   667,   670,   671,   674,   675,   678,   679,   680,
     683,   684,   687,   688,   689,   692,   693,   696,   699,   702,
     705,   708,   711,   712,   716,   717,   720,   721,   724,   727,
     728,   731,   732,   735,   736,   739,   740,   743,   746,   747,
     756,   757,   760,   761,   764,   767,   768,   771,   772,   775,
     776,   779,   780,   783,   784,   787,   788,   791,   792,   793,
     794,   795,   806,   807,   810,   811,   814,   815,   816,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     831,   836,   837,   840,   841,   842,   845,   846,   849,   852,
     853,   856,   857,   860,   861,   862,   863,   864,   865,   866,
     867,   868,   870,   873,   874,   875,   876,   879,   880,   881,
     882,   885,   889,   890,   891,   892,   893,   894,   897,   898,
     899,   900,   903,   904,   905,   908,   909,   912,   913,   916,
     917,   920,   921,   924,   925,   928,   929,   930,   931,   934,
     935,   936,   940,   941,   944,   948,   954,   955,   958,   959,
     962,   963,   966,   972,   978,   979,   982,   983,   984,   988,
     994,   995,   998,  1004,  1010,  1016,  1017,  1019,  1020,  1023,
    1027,  1030,  1031,  1034,  1035,  1036,  1037,  1039,  1041,  1042,
    1043,  1045,  1046,  1048,  1050,  1054,  1055,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1078,  1079,  1080,
    1081,  1082,  1083,  1084,  1085,  1088,  1091,  1094,  1095,  1098,
    1099,  1115,  1118,  1119,  1122,  1123,  1128,  1131,  1132,  1135,
    1138,  1141,  1142,  1145,  1146,  1149,  1150,  1151,  1152,  1153,
    1154,  1155,  1156,  1158,  1163,  1164,  1167,  1168,  1171,  1172,
    1177,  1180,  1181,  1184,  1187,  1190,  1191,  1194,  1195,  1198,
    1199,  1200,  1201,  1205,  1206,  1207,  1210,  1211,  1214,  1218,
    1224,  1229,  1237,  1238,  1239,  1240,  1243,  1244,  1249,  1250,
    1255,  1258,  1259,  1262,  1265,  1266,  1269,  1270,  1273,  1274,
    1277,  1278,  1283,  1284,  1289,  1292,  1293,  1296,  1297,  1300,
    1301,  1304,  1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,
    1315,  1318,  1319,  1322,  1325,  1326,  1329,  1332,  1339,  1342,
    1345,  1348,  1351,  1354,  1362,  1363,  1366,  1367,  1370,  1371,
    1374,  1375,  1378,  1379
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

#define YYPACT_NINF -940

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-940)))

#define YYTABLE_NINF -619

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -27,    79,   222,   170,   -27,  -940,  -940,  -940,   -22,    46,
    -940,   129,  -940,  3303,  -940,   297,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,   170,  -940,   194,  -940,  -940,   374,
    -940,  -940,   282,  -940,  -940,  -940,   374,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,   627,  3521,
    -940,  3492,  -940,  -940,   588,   465,   123,  -940,   396,  -940,
    -940,  1889,   614,   643,   660,   667,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,   374,  -940,   375,  -940,
    -940,   -27,   585,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,   497,   599,
     784,  -940,  -940,  -940,  -940,  -940,  -940,   784,    29,   722,
     633,   696,   706,   712,  -940,   241,  -940,   693,  -940,   221,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,   705,
     948,   736,  -940,   374,   745,  -940,   374,   755,  -940,   494,
     767,  -940,   416,  -940,  2925,  -940,  -940,   728,   623,   529,
    -940,   672,   585,  -940,   726,   679,   585,   726,   687,   585,
     774,   726,   704,   585,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,   341,   800,  -940,  2969,  -940,   807,  -940,  -940,   815,
     818,  2638,  2925,  2925,  2925,  2925,  2925,  2925,  2925,  2925,
    -940,  -940,   782,   816,   439,   827,  -940,  -940,  -940,  -940,
     847,   840,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,   700,  -940,  -940,  -940,   821,
    -940,   731,   147,   606,    21,   388,   837,   839,   844,   823,
     -54,  -940,  -940,  -940,   468,  -940,   590,   860,   867,   872,
    -940,  -940,  -940,  -940,   966,   870,   876,  -940,  -940,   374,
     925,   874,   710,  -940,  -940,  -940,  -940,  -940,  -940,  3521,
    -940,  -940,  -940,  -940,   523,  -940,  -940,  -940,  -940,  -940,
     878,   711,  -940,  -940,   374,  3521,  -940,   879,   716,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  2925,   977,  2925,   497,   212,   473,    39,   102,  2969,
    3452,  2925,   109,    26,   107,   753,   880,   561,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,   978,   980,  2925,   987,
    2437,  -940,  2925,  -940,  -940,   989,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  2925,  2925,  2925,
    2925,  2925,  2925,  2925,  2925,  2969,  2969,  2925,  2925,  2925,
    2925,  2925,  2925,  2925,  2925,  2925,  2925,  2925,  2925,  2925,
    2437,  -940,  2969,  -940,  2969,   317,   170,   170,   877,  -940,
     723,  -940,  -940,  3408,  -940,  -940,  3364,  1726,  -940,  -940,
    -940,  -940,  -940,   726,  3049,  -940,  -940,   493,  -940,   891,
    2437,  2925,  2523,  -940,  2925,  2437,   437,    19,   557,   562,
      90,   897,  -940,  -940,   898,   109,  -940,   899,   902,  2724,
    1633,   109,  -940,  -940,   537,  -940,  2925,  2925,   909,  -940,
     904,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,   731,
     731,   147,   147,   599,    29,   599,    29,   606,   606,   606,
     606,    21,    21,   388,   837,   839,   844,   901,   823,   604,
     911,    35,    84,    97,    86,  -940,  -940,   872,  -940,   688,
    -940,  2925,  -940,  -940,  2969,   114,   232,   140,   461,  2969,
    2969,   963,   965,   119,   263,    42,  -940,   548,  -940,  -940,
     586,   918,   751,   350,   434,  2969,   469,  2207,   919,    75,
      75,   574,    75,   920,  2925,    75,  2925,   923,   645,   923,
     924,   218,  -940,   238,   782,   816,  1219,   320,  1121,  1440,
      43,   205,   821,   476,  -940,  -940,  -940,   926,  2091,  -940,
    -940,  -940,   477,   478,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,    96,  1025,  -940,  -940,
     931,   697,  2969,  -940,  -940,  -940,  -940,   934,   941,   749,
     936,  -940,  -940,  -940,  -940,  -940,  -940,  2925,  -940,  2925,
    2925,  2925,  -940,   937,  -940,  -940,  -940,  -940,  2437,  -940,
    2925,  -940,  -940,   921,   922,   927,   933,  2969,  2969,  -940,
    -940,   268,    88,   943,   944,   953,   952,   959,   529,   283,
      92,   296,   103,  2969,  2969,   956,   617,  3035,   961,   365,
    -940,   958,    49,   964,  3035,   967,   436,   962,   968,   971,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  2091,  -940,  -940,
    -940,   283,    92,  -940,  -940,   982,  2969,  -940,  -940,  2839,
    2969,   482,  2925,   489,  2925,  2925,  -940,   490,  2925,   503,
      52,  -940,  -940,  2839,  -940,  1845,   954,   976,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,   976,   979,
    -940,   784,    31,   133,  -940,  2322,   784,  -940,  -940,  -940,
    -940,  -940,  2925,  -940,  -940,  2523,  2523,  2523,  2523,   304,
     105,   346,   113,   612,   612,   529,   529,   983,   170,   529,
     984,   170,   985,   960,   452,  -940,   453,   259,  -940,   404,
    -940,   463,   199,   466,   244,  3172,  2523,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,   988,
     170,  -940,  1081,  -940,  3216,   986,  -940,   170,   990,   170,
    -940,  -940,  3260,   993,   170,   170,  -940,   992,   992,   995,
     353,   251,   311,   423,   435,   449,   488,   534,  -940,  -940,
    -940,   504,  -940,   997,   354,   258,  -940,  -940,   513,  -940,
    -940,  -940,   391,   996,  -940,  -940,   391,  -940,  -940,   676,
     923,    52,  -940,  -940,  -940,  -940,   998,  2925,   999,  1000,
    1001,  1005,   784,  2925,  2925,  -940,  -940,  1005,  -940,  -940,
    -940,  -940,  -940,   921,   922,   927,   933,   994,  -940,  -940,
    -940,  1003,  1004,   170,   691,   777,  1006,   170,   778,   991,
    2925,  -940,  1083,  -940,  -940,  -940,  -940,  1008,  -940,  1010,
    2969,  2969,  2969,  2969,  1014,  1015,  -940,  2969,   781,  -940,
    1017,  1018,   170,   811,  2969,   817,  1020,  1021,   170,   824,
     788,  1027,   727,   729,  2925,  1011,   564,  -940,   652,  -940,
    -940,  2925,  2925,    56,    56,  -940,  -940,  -940,  -940,  2207,
    2207,  1026,   494,  -940,  -940,  -940,  -940,  2207,  1110,  2207,
    2207,   923,  -940,  -940,  -940,  1035,  1037,  -940,  -940,   612,
     612,   834,  1036,  2969,  2969,   170,  -940,   612,  1038,  -940,
      32,  -940,  -940,  -940,  -940,   170,   170,   355,   260,   356,
     262,   364,   266,   376,   271,  -940,  -940,   377,   273,  -940,
    -940,  -940,  1039,  -940,   382,   276,  -940,  -940,  -940,  1043,
    -940,  -940,  -940,  -940,  1044,  -940,  -940,  1052,  -940,  -940,
    1045,  2925,  1142,  2207,  2207,  -940,   504,  -940,  -940,  -940,
    -940,  2925,  2925,  1120,  -940,   683,  -940,  1145,  1145,  -940,
    2207,  -940,  -940,  -940,  -940,  -940,  -940,  -940,   612,   612,
    -940,   384,   278,   389,   280,  1053,  -940,  -940,  1054,  1050,
    1055,   838,  1057,   170,   170,  1059,  1058,  1060,  1061,  1062,
    1063,  1064,  1065,  1066,   655,   657,  -940,   664,   666,  -940,
     668,   668,  -940,   515,  -940,  -940,  -940,  -940,  2925,   391,
     391,  2207,  2925,  1048,  1069,   683,  -940,  1975,  -940,  -940,
    1068,  1070,  -940,   733,   737,  -940,  -940,  -940,  -940,  -940,
     170,  -940,   170,  2437,  2437,  -940,  -940,  -940,  1079,  -940,
    1067,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  2969,  -940,  2969,  -940,  -940,  2969,  -940,  2969,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,   391,  -940,   997,
    2207,  2207,  -940,  1049,  -940,  -940,  -940,  2091,  -940,   923,
     923,  -940,  1082,  1084,  1077,  1078,  1080,  1085,   923,   923,
    -940,  -940,   392,   287,   398,   290,   401,   302,   402,   344,
    -940,  -940,  2207,  -940,  -940,  -940,  -940,  -940,   612,   612,
    -940,  -940,  -940,  -940,  -940,  -940,  1087,  1090,  1091,  1092,
    1093,  1094,  1095,  1096,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     331,     0,     0,   333,   332,   345,   347,   348,   340,     0,
      10,     0,     1,   362,   355,   333,   353,   356,   357,   358,
     359,   360,   361,   334,   594,   595,     0,   346,   342,     0,
     352,   351,   341,   366,   367,   368,     0,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,     0,   363,
     364,   362,   354,   596,   599,   340,     0,   343,     0,   625,
     624,     0,     0,     0,     0,     0,   365,   604,   609,   602,
     603,   605,   606,   607,   608,   610,     0,   600,     0,   350,
     349,   331,   338,    17,    22,    29,    20,    31,    30,    25,
      27,    32,    21,    23,    33,    26,    28,    24,   424,   422,
      11,    13,    16,    18,    19,    14,    15,    12,   423,     0,
     581,   551,   527,   381,   616,     0,   611,   614,   601,   333,
     339,   337,    36,    34,    42,    38,    37,    35,    39,     0,
       0,     0,   582,     0,     0,   552,     0,     0,   528,     0,
       0,   382,     0,   619,    73,   613,   615,     0,   333,   333,
     583,   333,   338,   386,   553,   333,   338,   529,   333,   338,
     383,   384,   333,   338,   619,   612,   597,     3,     4,     5,
       6,     0,     0,     9,     0,     7,     0,    77,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     2,     0,     0,    99,    50,    49,    53,    54,    55,
       0,    74,    56,    57,   101,   102,    58,    82,    52,    59,
      61,    62,   103,   115,    60,   107,   116,   113,   114,   129,
     106,   133,   136,   139,   148,   151,   153,   155,   157,   159,
     161,   175,   176,    75,   100,   344,   439,     0,   419,   420,
     427,   431,   429,   432,     0,     0,   587,   588,   580,     0,
     566,     0,   333,   557,   559,   560,   562,   561,   550,   362,
     543,   535,   536,   537,     0,   538,   539,   540,   541,   542,
       0,   333,   533,   526,     0,   362,   402,     0,   333,   391,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   380,
     598,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,   123,   123,   123,   133,     0,   100,   110,   111,
     112,    96,   104,   105,   108,   109,     0,     0,     0,     0,
      69,   617,     0,    80,    81,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,   441,     0,   440,     0,     0,   333,   333,   590,   584,
     333,   387,   567,     0,   554,   558,     0,     0,   426,   425,
     411,   530,   534,   385,     0,   388,   392,     0,    78,     0,
      69,     0,   546,    87,     0,    69,     0,     0,     0,     0,
       0,     0,   128,   127,     0,   124,   125,     0,     0,     0,
      63,   123,    65,    66,     0,    64,     0,     0,    70,    44,
       0,    46,    76,    95,   163,   130,   131,   132,   129,   134,
     135,   137,   138,   146,   147,   144,   145,   141,   140,   142,
     143,   149,   150,   152,   154,   156,   158,     0,   160,     0,
       0,     0,     0,     0,     0,   593,   592,   421,   428,   439,
     430,     0,   585,   589,     0,     0,     0,     0,   340,     0,
       0,     0,     0,     0,     0,     0,   622,     0,   471,   472,
       0,     0,   340,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   303,     0,   303,     0,     0,     0,
       0,     0,   201,     0,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,   199,   181,   182,     0,   198,   183,
     179,   180,     0,     0,   184,   185,   244,   245,   186,   193,
     259,   260,   261,   262,   187,   286,   287,   288,   289,   290,
     188,   189,   190,   191,   192,   194,   100,     0,    79,    93,
       0,     0,     0,   213,   548,   215,   214,     0,   547,     0,
       0,    97,    98,    92,    90,    91,    94,     0,   126,     0,
       0,     0,   117,     0,    71,    48,    43,    47,     0,    67,
       0,    72,    68,   442,   443,   433,   434,     0,     0,   177,
     591,     0,     0,     0,   622,     0,   622,     0,   333,     0,
       0,     0,     0,     0,     0,     0,   211,     0,     0,     0,
     209,   622,     0,     0,     0,     0,     0,   622,     0,     0,
     523,   522,   470,   525,   524,   515,   196,     0,   292,   291,
     318,     0,     0,   294,   293,     0,     0,   627,   626,   272,
       0,     0,     0,     0,     0,     0,   304,     0,     0,     0,
       0,   319,   263,     0,   266,     0,   211,   207,   230,   223,
     233,   226,   234,   227,   231,   224,   235,   228,   236,   229,
     232,   225,   195,   200,   205,   203,   206,   204,   208,     0,
      83,    40,     0,     0,   544,     0,    40,    84,   122,   120,
     121,   118,     0,    45,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   333,   333,     0,   333,   333,
       0,   333,     0,     0,     0,   220,     0,     0,   620,     0,
     620,     0,     0,     0,     0,     0,     0,   492,   491,   503,
     504,   485,   486,   493,   494,   495,   496,   497,   487,   488,
     498,   499,   500,   501,   502,   506,   505,   489,   490,     0,
     333,   408,     0,   407,     0,     0,   469,   333,     0,   333,
     410,   409,     0,     0,   333,   333,   202,   218,   219,     0,
       0,     0,    54,   101,   102,    82,   113,   114,   239,   278,
     282,     0,   273,   279,     0,     0,   298,   295,     0,   300,
     297,   178,     0,     0,   302,   301,     0,   306,   305,     0,
       0,   307,   310,   308,   323,   322,     0,     0,     0,     0,
       0,    88,    40,     0,     0,   545,   549,    88,   119,   437,
     438,   435,   436,     0,     0,     0,     0,     0,   578,   576,
     577,     0,     0,   333,   439,     0,     0,   333,     0,   517,
       0,   404,     0,   403,   406,   405,   456,     0,   457,     0,
       0,     0,     0,     0,     0,     0,   212,     0,     0,   210,
       0,     0,   333,     0,     0,     0,     0,     0,   333,     0,
       0,     0,   333,   333,     0,     0,     0,   326,     0,   631,
     630,   274,     0,     0,     0,   299,   296,   629,   628,     0,
       0,     0,     0,   314,   317,   311,   309,     0,     0,     0,
       0,     0,    85,    89,    41,     0,     0,    86,   579,     0,
       0,     0,     0,     0,     0,   333,   622,     0,     0,   622,
       0,   516,   518,   222,   221,   333,   333,     0,     0,     0,
       0,     0,     0,     0,     0,   417,   414,     0,     0,   465,
     415,   412,     0,   467,     0,     0,   466,   416,   413,     0,
     468,   623,   623,   623,     0,   446,   449,     0,   447,   451,
       0,     0,     0,     0,     0,   280,     0,   275,   283,   633,
     632,     0,     0,   246,   320,   250,   248,   315,   315,   321,
       0,   265,   264,   521,   216,   217,   565,   563,     0,     0,
     623,     0,     0,     0,     0,     0,   564,   623,     0,     0,
       0,     0,     0,   333,   333,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   623,     0,     0,   623,
       0,     0,   464,     0,   328,   327,   324,   325,   276,     0,
       0,     0,     0,     0,     0,   251,   252,     0,   255,   316,
       0,     0,   267,   333,   333,   568,   442,   443,   433,   434,
     333,   569,   333,    69,    69,   621,   621,   621,     0,   460,
       0,   461,   621,   511,   513,   512,   514,   507,   509,   508,
     510,     0,   473,     0,   475,   444,     0,   474,     0,   476,
     445,   455,   454,   622,   622,   270,   269,     0,   277,   281,
       0,     0,   247,     0,   258,   249,   253,   254,   256,     0,
       0,   268,     0,     0,     0,     0,     0,     0,     0,     0,
     458,   459,     0,     0,     0,     0,     0,     0,     0,     0,
     452,   453,     0,   284,   285,   257,   312,   313,     0,     0,
     623,   623,   519,   520,   620,   620,     0,     0,     0,     0,
       0,     0,     0,     0,   271,   574,   575,   570,   571,   462,
     463,   477,   480,   479,   483,   478,   482,   481,   484
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -940,  -940,  -940,  -940,   135,  1012,    54,  -940,  1071,  -940,
     -60,  -940,  1013,  -662,   -70,   763,  -940,   607,  -940,  -940,
    -940,  -940,  -275,  -354,  -940,  -940,   239,  -940,  -940,   179,
     292,  -940,   339,  -940,   383,  -940,  -940,  -940,  -940,  -940,
    -940,  -940,   792,   502,   595,   545,  -940,    -8,  -940,   798,
    -160,   592,   451,   587,   851,   855,   850,   856,   857,  -940,
    -940,   632,  -940,   639,  -635,  -628,  -516,  -478,  -239,  -940,
     177,  -940,  -940,  -940,  -590,  -442,   471,   -13,  -940,  -940,
    -550,   390,  -940,   335,  -940,  -940,  -940,  -940,  -940,  -940,
     183,  -940,   187,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,   197,  -940,  -940,  -940,
    -940,  -940,  -940,   730,  -940,  -940,  -940,   429,   253,   432,
    -940,  -940,  -940,  -940,  -940,  -940,   464,   288,  -940,  1159,
       0,  -940,  -940,  -104,    -1,   481,  -940,  -940,  1247,  -940,
    -940,  1135,    -3,   -93,  -197,  -940,  1208,  -940,  -940,  -940,
    -113,  -940,  -940,  -940,  1002,  -124,  -106,   -95,  -940,  -578,
    -940,  -940,   -55,   892,  -361,  -940,   896,  -449,  -940,   -92,
     -96,  -940,  -940,   393,   395,   243,   -91,   342,   261,   270,
     -90,  -940,   799,   -89,  -940,  -940,   661,  -940,   -88,  -940,
    -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  1007,  -286,  -940,  -940,  -940,  -940,  -940,  -940,  -940,
    -940,  1030,  -940,  -940,  -940,  -940,  -829,  -940,  -700,  -940,
    -940,  -940,  -940,  -940,  -940,   907,  -940,  -940,  -940,  1255,
    -940,  -940,  -940,  -940,  1143,  -940,  -940,  -940,  -940,  1122,
    -702,  -342,  -577,  -939,  -940,   294,  -780,   322,   405
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   190,   191,     9,   503,   100,   192,   102,   103,   104,
     193,   106,   107,   811,   128,   575,   418,   419,   194,   195,
     196,   197,   198,   420,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   902,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   404,   405,   406,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   337,   421,   590,   792,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   609,   610,   554,   555,   523,
     714,   715,   524,   780,   525,   526,   527,   976,  1034,  1035,
    1036,  1037,  1038,   528,   529,   530,   807,  1101,   531,   532,
     781,   966,  1087,   782,   967,  1088,   783,   533,   534,   535,
     536,   537,   538,   647,   539,   540,   801,   802,  1040,   803,
     541,   542,   543,   544,   806,   545,   876,   877,     2,     3,
     236,   147,    14,   121,   234,    11,    82,     4,     5,     6,
       7,    15,    16,    17,    48,    49,    50,    18,   140,   141,
     154,   163,   277,   278,   279,   261,   262,   263,   264,   237,
     109,   380,   238,   239,   240,   241,   242,   364,   243,   265,
     871,   955,   958,   872,   873,  1083,   266,  1002,  1003,  1004,
     267,   476,   613,   268,   477,   478,   749,   479,   269,   480,
     921,   922,   288,   622,   625,    19,   137,   138,   159,   270,
     271,   272,   556,   557,   558,    20,   134,   135,   156,   251,
     252,   253,   254,   373,   255,   256,   912,   257,   829,    21,
     131,   132,   152,   245,   246,   247,    22,    23,    24,    25,
      76,    77,    78,   115,   116,   145,   117,   146,    26,   166,
     847,  1108,   619,  1020,    65,   639,   889,   881,   971
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   105,   673,    13,   830,   458,   450,   788,   918,   635,
     588,   393,    52,  1021,  1022,    51,   891,   707,   849,   710,
     712,   305,   124,   157,   817,   379,   161,   809,    56,   124,
     125,   345,   124,   616,   755,    58,   550,   126,   280,   583,
     763,   560,   124,   999,   666,   124,   606,    30,   248,   779,
     716,  1045,   258,    32,     1,   273,   281,   969,  1051,   289,
     108,   657,   376,   805,   357,   260,   346,   282,   799,   276,
     283,   284,   285,   286,   287,   114,   637,  1075,   384,   160,
    1080,   767,   768,     8,   358,   800,    28,   124,   584,   124,
     586,   124,   704,   124,   614,   124,   713,   970,    29,   124,
     656,   585,   506,  1000,   678,   124,   124,   606,   124,   824,
     124,   766,   124,   615,   105,   101,   124,   826,   593,    51,
     756,   304,   562,    55,    79,   347,   348,   831,   832,   813,
     127,   836,   153,    32,   316,   153,   124,   402,   153,   392,
     127,   114,   123,   124,   596,    52,   123,   855,    51,   667,
     904,   244,    31,   127,   280,   250,   349,   350,   259,   717,
     719,   383,   275,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,   281,   298,  -113,  -113,   861,   638,   260,   898,
     307,   429,   430,   282,   867,   276,   283,   284,   285,   286,
     287,  1147,  1148,   565,   359,   127,    99,   127,   360,   127,
     394,   127,   124,   127,   395,   923,   668,   127,   123,   986,
     987,   597,   506,   127,   127,   317,   127,   996,   402,   654,
     402,  1104,    12,  1105,   127,   122,   125,   126,   101,    80,
     122,   814,   403,   403,   403,   303,   594,   411,   621,   105,
     105,   624,   656,   506,   127,   630,   960,   124,   371,  1090,
    1091,   127,   250,   965,   124,   875,   341,   342,   650,   651,
     652,   124,   884,   124,  1007,   124,  1009,   606,  -618,   124,
    1011,   259,   703,   153,   124,  1013,   124,  1015,   275,   124,
    1018,   124,  1047,   124,  1049,   105,   105,   713,  1043,  1044,
     124,  1137,    54,   124,  1139,   407,   408,  -330,   397,   400,
     606,   851,   105,   595,   105,   124,  1141,  1122,   823,   295,
     127,   669,  -237,   105,   390,   607,   105,   505,   455,  -618,
     655,   660,  -335,   123,   105,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,   608,   403,  -114,  -114,   142,   995,
     143,   403,   998,   123,   434,   436,   853,   124,  1143,   123,
     825,   628,   506,   101,   101,   127,   752,   875,   883,  1006,
    1008,   452,   127,   454,   772,   846,   751,   459,  1010,   127,
     244,   127,   467,   127,   123,   475,   546,   127,    55,   123,
    1012,  1014,   127,   475,   127,   914,  1017,   127,  1046,   127,
      57,   127,   887,  1048,   123,  -618,  1136,  1093,   127,   101,
     101,   127,  1138,   573,   105,  1140,  1142,   123,  -237,   105,
     105,   973,   974,   127,  -237,   123,   101,  -237,   101,   979,
      55,   981,   982,   456,  -240,   105,   661,   101,  1145,  1146,
     101,   504,  1149,  1150,   396,   399,  -241,   760,   101,   291,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   292,
    -238,  -101,  -101,   841,   844,   127,   629,   123,   505,  -101,
    -101,  -101,   752,   592,   123,   123,   123,   123,   600,   602,
     633,   753,   605,   611,   617,   123,   124,   670,   674,   676,
     433,   435,   118,   786,   632,  1026,  1027,   123,   123,  -242,
     789,   794,   105,   123,   888,   123,    81,   451,    55,   453,
     123,   752,  1042,   123,   797,   879,  1120,  1121,   466,   123,
     848,   474,   123,   123,   885,   164,  1085,   546,   101,   474,
    -240,   351,   352,   101,   101,   903,  -240,   105,   105,  -240,
     387,   903,  -241,   752,   377,  -243,   293,   318,  -241,   101,
     561,  -241,   761,   105,   105,    91,  -238,   319,   123,   842,
     842,   683,  -238,  1092,   458,  -238,   507,   414,   843,   845,
     893,   894,    94,   598,   124,   850,   359,   505,   852,    28,
     360,   391,   504,    28,   123,   634,   105,   123,   641,   505,
     105,   673,   671,   675,   677,  -242,   700,   702,   787,   642,
     322,  -242,   548,   505,  -242,   790,   795,   643,   449,   591,
     718,   720,   722,   724,   599,   601,   101,   772,   122,   798,
     880,   812,  1123,  1124,   506,   506,   812,    67,   110,   886,
     631,  1086,   506,   377,   506,   506,   546,  -618,    59,   378,
     551,  -243,  -418,   559,   322,   771,   574,  -243,   546,   785,
    -243,   101,   101,   361,  1144,   362,    60,   111,   377,    68,
     363,    61,   546,   835,   620,    62,   838,   101,   101,   359,
     563,   962,   983,   360,   112,   564,   507,   963,   122,   508,
      63,   113,   816,   123,    69,    70,    71,    72,    73,    74,
      75,   504,   819,   820,   821,   822,   377,   682,   506,   506,
     101,   120,   623,   504,   101,   858,    64,   507,  1032,  1106,
    1107,   322,   863,   581,   865,   506,  1033,   504,   834,   869,
     123,   834,   827,   856,  1109,  1110,   509,  -340,   828,  -340,
    1111,  -618,   699,   701,  -336,    28,   129,   308,   309,   310,
     311,   312,   313,   314,   315,   343,   344,   726,   721,   723,
     130,   361,   812,   587,   361,   377,   913,   301,   363,   962,
     834,   363,  1071,   772,  1073,   964,   506,   834,  1072,   834,
    1074,  1076,   506,  1078,   834,   870,   942,  1077,   377,  1079,
    -618,   770,   949,  -586,  1081,   784,   377,  -618,   892,   508,
    -555,  1082,  1082,   233,   640,  -618,   644,   124,  -531,   648,
     105,   105,   105,   105,   322,   144,   681,   105,   437,   438,
     439,   440,  -618,   133,   105,  -389,   507,   149,  -618,  -618,
     508,  -556,  -532,   136,  -618,   506,   506,  -390,   773,   139,
     306,  -618,   506,   249,   462,  -618,   509,  -618,  -448,   235,
    -450,  -618,   977,   911,  -572,  -618,   151,   911,  -573,   323,
     324,   325,   338,   339,   340,   155,   322,   506,   686,   928,
     930,   932,   934,   105,   105,   158,   938,   509,   627,    28,
    1126,  1127,   870,   945,   409,   339,   340,   162,   870,  1134,
    1135,   274,   954,   957,   915,   915,   916,   919,   915,   510,
     939,   951,   952,   425,   426,   427,   428,   428,   428,   428,
     316,   978,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   293,   428,   101,   101,   101,   101,   915,   299,
     943,   101,   992,   994,   915,   834,   946,   300,   101,   508,
     301,   915,   512,   950,   317,  1001,  1001,   988,   989,   320,
     233,   774,   389,  1055,  1056,   431,   432,   322,   441,   442,
     401,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     321,   353,   335,   336,   425,   612,   612,   233,   354,   355,
     356,   422,    84,   365,   366,    85,   509,   101,   101,   367,
     368,   369,   511,   370,   372,   374,   424,   505,   775,   381,
     385,   388,   412,   410,   413,   927,   929,   931,   933,   510,
      89,   415,   937,   423,   549,    90,   447,   461,   233,   944,
     566,   567,   569,  1058,  1060,   570,   578,   579,   580,   513,
      92,   105,    93,   105,   582,   603,   105,   604,   105,   626,
     510,   636,   645,   377,    95,    96,   653,   672,    97,   679,
     233,   553,   512,   233,   680,   684,   546,   505,   685,   687,
     692,   695,   696,  1102,  1103,   705,   706,   697,   991,   993,
     911,   708,   911,   698,   709,   576,   576,   711,   725,   750,
     754,   773,   757,   512,   762,   759,   764,   769,   507,   507,
    1113,   765,  1115,   752,   726,  1117,   507,  1119,   507,   507,
     840,   810,   511,   833,   837,   656,   862,   713,   839,   842,
     857,   504,   864,   868,   882,   908,   546,   874,   920,   890,
     589,   897,   899,   900,   901,   392,   909,   910,   925,   917,
     926,   980,   688,   511,   689,   690,   691,   935,   936,   513,
     940,   941,   662,   947,   948,   101,   975,   101,   953,   510,
     101,   961,   101,   646,   984,   646,   985,   990,   952,   997,
    1016,   776,   507,   507,  1019,   951,   875,  1031,  1023,  1039,
     513,   504,  1053,  1050,  1052,  1094,  1125,  1054,  1057,   507,
    1062,  1063,  1055,  1064,  1065,  1066,  1067,  1068,  1069,  1070,
    1095,  1099,   512,  1100,   774,  1056,  1128,  1129,  1130,  1131,
     577,   508,   508,  1132,   512,   693,   296,   297,  1133,   508,
    1151,   508,   508,  1152,  1153,  1154,  1155,  1156,  1157,  1158,
     907,   150,   572,   568,   443,   445,  1112,   773,  1114,   444,
     507,  1116,   446,  1118,  1097,   448,   507,   968,  1096,   694,
     658,   775,   511,   859,  1098,  1089,   649,   663,   509,   509,
     895,  1041,   924,   896,   777,   878,   509,   818,   509,   509,
     119,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    1025,    27,  -102,  -102,   148,   508,   508,    66,   457,   513,
    -102,  -102,  -102,   460,  1084,  1061,   959,   956,  1005,   507,
     507,   778,   508,  1059,   618,   758,   507,   463,   382,    53,
     386,   589,   375,   791,   793,   165,   290,   796,  1028,   972,
       0,     0,   804,     0,   791,     0,     0,     0,     0,     0,
       0,   507,   509,   509,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -54,     0,   509,
     774,   -54,     0,   508,   553,   659,     0,   -54,     0,   508,
       0,     0,     0,     0,   553,   553,   553,   553,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,     0,
     -54,   -54,     0,     0,     0,     0,     0,     0,   -54,   -54,
     -54,     0,     0,     0,     0,   553,     0,   775,     0,     0,
     509,     0,     0,     0,     0,     0,   509,     0,     0,     0,
       0,     0,   508,   508,   776,     0,     0,     0,     0,   508,
       0,   510,   510,     0,     0,     0,     0,     0,     0,   510,
       0,   510,   510,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   508,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   512,     0,   509,
     509,     0,     0,     0,   512,   512,   509,     0,     0,     0,
       0,   664,   512,     0,   512,   512,   791,     0,     0,     0,
       0,     0,   905,   906,     0,     0,     0,     0,     0,     0,
       0,   509,     0,     0,     0,   510,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   777,     0,   589,
       0,     0,   510,     0,   511,   511,     0,     0,     0,     0,
       0,     0,   511,     0,   511,   511,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   512,   512,
       0,     0,     0,   791,   778,     0,     0,     0,     0,     0,
     791,   513,   513,     0,     0,   512,     0,     0,     0,   513,
     776,   513,   513,   510,     0,     0,     0,     0,   -82,   510,
       0,     0,   -82,     0,     0,     0,   665,     0,   -82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   511,   511,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -82,   -82,   512,     0,   511,   512,     0,     0,   -82,
     -82,   -82,   512,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   510,   510,     0,   513,   513,     0,     0,   510,
    1024,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1029,  1030,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   777,   510,     0,   511,     0,     0,     0,
       0,     0,   511,     0,     0,   512,   512,    55,   167,   168,
     169,   170,   512,     0,   171,    83,     0,    84,     0,     0,
      85,   172,     0,     0,     0,    86,     0,     0,     0,    87,
     778,     0,     0,   513,     0,   173,     0,   512,    88,   513,
       0,   589,     0,     0,     0,    89,     0,     0,     0,     0,
      90,     0,   174,   175,    91,   511,   511,     0,     0,     0,
       0,     0,   511,     0,     0,    92,     0,    93,   176,     0,
       0,    94,     0,     0,   177,     0,   178,     0,   179,    95,
      96,   180,     0,    97,     0,     0,     0,   511,     0,     0,
       0,     0,   513,   513,     0,     0,     0,   481,     0,   513,
     482,   167,   168,   169,   170,   181,     0,   171,    83,   483,
      84,     0,     0,    85,   484,     0,   485,   486,    86,   186,
     187,   487,    87,     0,   513,     0,     0,     0,   173,     0,
     488,    88,   489,   490,   491,   492,     0,     0,    89,     0,
       0,     0,   493,    90,     0,   174,   175,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   494,    92,     0,
      93,   176,     0,     0,    94,     0,   495,   177,   496,   178,
     497,   179,    95,    96,   498,   499,    97,   500,     0,   294,
       0,   501,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   377,  -197,   181,     0,
       0,     0,   502,     0,     0,   182,   183,   184,     0,     0,
     185,     0,   186,   187,     0,     0,   808,     0,     0,    55,
     167,   168,   169,   170,     0,     0,   171,    83,     0,    84,
       0,     0,    85,   172,     0,   188,   189,    86,     0,     0,
       0,    87,     0,     0,     0,     0,     0,   173,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,    90,    55,   174,   175,    91,     0,     0,     0,
       0,    83,     0,    84,     0,     0,    85,    92,     0,    93,
     176,    86,     0,    94,     0,    87,   177,     0,   178,     0,
     179,    95,    96,   180,    88,    97,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,    92,     0,    93,   182,   183,   184,    94,     0,   185,
       0,   186,   187,     0,     0,    95,    96,     0,     0,    97,
       0,     0,    98,     0,     0,     0,     0,     0,     0,   482,
     167,   168,   169,   170,   188,   189,   171,    83,   483,    84,
    1032,     0,    85,   484,     0,   485,   486,    86,  1033,     0,
     487,    87,     0,     0,     0,     0,     0,   173,     0,   488,
      88,   489,   490,   491,   492,     0,     0,    89,     0,     0,
       0,   493,    90,     0,   174,   175,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   494,    92,     0,    93,
     176,     0,     0,    94,     0,   495,   177,   496,   178,   497,
     179,    95,    96,   498,   499,    97,   500,     0,   294,     0,
     501,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   377,     0,   181,     0,     0,
       0,   502,     0,     0,   182,   183,   184,     0,     0,   185,
       0,   186,   187,     0,     0,   482,   167,   168,   169,   170,
       0,     0,   171,    83,   483,    84,     0,     0,    85,   484,
       0,   485,   486,    86,   188,   189,   487,    87,     0,     0,
       0,     0,     0,   173,     0,   488,    88,   489,   490,   491,
     492,     0,     0,    89,     0,     0,     0,   493,    90,     0,
     174,   175,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   494,    92,     0,    93,   176,     0,     0,    94,
       0,   495,   177,   496,   178,   497,   179,    95,    96,   498,
     499,    97,   500,     0,   294,     0,   501,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   377,     0,   181,     0,     0,     0,   502,     0,     0,
     182,   183,   184,     0,     0,   185,     0,   186,   187,     0,
       0,    55,   167,   168,   169,   170,     0,     0,   171,    83,
     483,    84,     0,     0,    85,   484,     0,     0,   486,    86,
     188,   189,   487,    87,     0,     0,     0,     0,     0,   173,
       0,   488,    88,   489,   490,   491,   492,     0,     0,    89,
       0,     0,     0,   493,    90,     0,   174,   175,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   494,    92,
       0,    93,   176,     0,     0,    94,     0,   495,   177,   496,
     178,   497,   179,    95,    96,   498,   499,    97,   500,     0,
       0,     0,   501,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   377,     0,   181,
       0,     0,     0,   502,     0,     0,   182,   183,   184,     0,
       0,   185,     0,   186,   187,     0,    55,   167,   168,   169,
     170,     0,     0,   171,    83,     0,    84,     0,     0,    85,
     172,     0,     0,     0,    86,     0,   188,   189,    87,     0,
       0,     0,     0,     0,   173,     0,     0,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    90,
       0,   174,   175,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,    93,   176,   552,     0,
      94,     0,     0,   177,     0,   178,     0,   179,    95,    96,
     180,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   392,   815,   181,     0,     0,     0,     0,     0,
       0,   182,   183,   184,     0,     0,   185,     0,   186,   187,
       0,    55,   167,   168,   169,   170,     0,     0,   171,    83,
       0,    84,     0,     0,    85,   172,     0,     0,     0,    86,
       0,   188,   189,    87,     0,     0,     0,     0,     0,   173,
       0,     0,    88,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,    90,     0,   174,   175,    91,     0,
     416,     0,     0,     0,     0,     0,     0,   417,     0,    92,
       0,    93,   176,     0,     0,    94,     0,     0,   177,     0,
     178,     0,   179,    95,    96,   180,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,   167,   168,
     169,   170,     0,     0,   171,    83,     0,    84,     0,   181,
      85,   172,     0,     0,     0,    86,   182,   183,   184,    87,
       0,   185,     0,   186,   187,   173,     0,     0,    88,     0,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
      90,     0,   174,   175,    91,     0,   188,   189,     0,     0,
       0,     0,     0,     0,     0,    92,     0,    93,   176,   552,
       0,    94,     0,     0,   177,     0,   178,     0,   179,    95,
      96,   180,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   392,     0,   181,     0,     0,     0,     0,
       0,     0,   182,   183,   184,     0,     0,   185,     0,   186,
     187,     0,    55,   167,   168,   169,   170,     0,     0,   171,
      83,     0,    84,     0,     0,    85,   172,     0,     0,     0,
      86,     0,   188,   189,    87,     0,     0,     0,     0,     0,
     173,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,    90,     0,   174,   175,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,    93,   176,     0,     0,    94,     0,     0,   177,
       0,   178,     0,   179,    95,    96,   180,     0,    97,     0,
       0,   302,     0,     0,     0,     0,     0,     0,    55,   167,
     168,   169,   170,     0,     0,   171,    83,     0,    84,     0,
     181,    85,   172,     0,     0,     0,    86,   182,   183,   184,
      87,     0,   185,     0,   186,   187,   173,     0,     0,    88,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,    90,     0,   174,   175,    91,     0,   188,   189,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    93,   176,
       0,     0,    94,     0,     0,   177,     0,   178,     0,   179,
      95,    96,   180,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   571,     0,     0,
       0,     0,     0,   182,   183,   184,     0,     0,   185,     0,
     186,   187,     0,    55,   167,   168,   169,   170,     0,     0,
     171,    83,     0,    84,     0,     0,    85,   172,     0,     0,
       0,    86,     0,   188,   189,    87,     0,     0,     0,     0,
       0,   173,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,     0,   174,   175,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,    93,   176,     0,     0,    94,     0,     0,
     177,     0,   178,     0,   179,    95,    96,   180,     0,    97,
       0,     0,   294,     0,     0,     0,     0,     0,     0,    55,
     167,   168,   169,   170,     0,     0,   171,    83,     0,    84,
       0,   181,    85,   172,     0,     0,     0,    86,   182,   183,
     184,    87,     0,   185,     0,   186,   187,   173,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,    90,    55,   174,   175,    91,     0,   188,   189,
       0,    83,     0,    84,     0,     0,    85,    92,     0,    93,
     176,    86,     0,    94,     0,    87,   177,     0,   178,     0,
     179,    95,    96,   180,    88,    97,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,    92,     0,    93,   182,   183,   184,    94,     0,   185,
       0,   186,   187,     0,     0,    95,    96,     0,     0,    97,
      59,     0,   294,   468,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    84,   188,   189,    85,   727,    60,   469,
       0,    86,     0,    61,     0,    87,     0,    62,   470,   471,
       0,     0,     0,     0,    88,     0,     0,     0,     0,   472,
       0,    89,    63,     0,     0,     0,    90,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,   728,     0,
       0,    92,     0,    93,     0,     0,     0,    94,    64,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,     0,   473,     0,     0,     0,     0,     0,     0,   729,
     730,     0,     0,     0,   731,   732,   733,   734,   735,   736,
     737,   738,   739,     0,   740,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   741,   742,   547,     0,   743,   744,
     745,   746,     0,   854,   747,   748,  -333,     0,     0,     0,
       0,     0,     0,     0,  -333,     0,  -333,     0,     0,  -333,
       0,     0,     0,     0,  -333,     0,     0,     0,  -333,     0,
       0,     0,     0,     0,     0,     0,     0,  -333,     0,     0,
       0,     0,     0,     0,  -333,     0,     0,   860,     0,  -333,
    -333,     0,     0,  -333,     0,  -333,     0,  -333,  -333,     0,
    -333,     0,  -333,  -333,  -333,     0,  -333,     0,  -333,     0,
    -333,     0,  -333,     0,     0,     0,     0,     0,  -333,  -333,
       0,  -333,  -333,     0,     0,  -333,     0,     0,  -333,     0,
       0,   866,     0,  -333,  -333,     0,     0,  -333,     0,  -333,
    -618,  -333,  -333,     0,  -333,  -418,  -333,  -333,  -333,     0,
    -333,     0,  -333,     0,  -333,     0,  -333,     0,     0,     0,
       0,     0,  -333,  -333,     0,  -333,  -333,     0,     0,  -333,
       0,     0,  -333,  -329,     0,     0,     0,  -333,     0,     0,
       0,  -333,    33,  -333,  -618,  -333,     0,     0,     0,  -418,
    -333,     0,  -333,     0,  -333,     0,     0,     0,  -333,     0,
       0,     0,     0,     0,    34,     0,  -333,  -333,     0,     0,
    -333,     0,     0,  -333,     0,     0,     0,    35,     0,     0,
       0,    36,    37,     0,     0,     0,     0,    38,  -618,    39,
      40,    41,    42,  -418,     0,    59,    43,     0,   468,     0,
      44,     0,     0,     0,     0,     0,    83,     0,    84,     0,
       0,    85,    45,    60,   469,    46,    86,    47,    61,     0,
      87,     0,    62,   470,   471,     0,     0,     0,     0,    88,
       0,     0,     0,     0,   472,     0,    89,    63,     0,     0,
       0,    90,    55,     0,     0,    91,     0,     0,     0,     0,
      83,     0,    84,     0,     0,    85,    92,     0,    93,     0,
      86,     0,    94,    64,    87,     0,     0,   464,     0,     0,
      95,    96,     0,    88,    97,     0,     0,   473,     0,     0,
      89,     0,     0,     0,     0,    90,    55,     0,     0,    91,
       0,     0,     0,     0,    83,     0,    84,     0,     0,    85,
      92,     0,    93,     0,    86,     0,    94,     0,    87,     0,
       0,     0,     0,     0,    95,    96,     0,    88,    97,     0,
       0,   465,     0,     0,    89,     0,     0,     0,     0,    90,
       0,    33,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,    93,     0,     0,     0,
      94,     0,     0,    34,     0,     0,     0,     0,    95,    96,
      33,     0,    97,     0,     0,   398,    35,     0,     0,     0,
      36,    37,     0,     0,     0,     0,    38,     0,    39,    40,
      41,    42,    34,     0,     0,    43,     0,     0,     0,    44,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
      37,    45,     0,     0,    46,    38,    47,    39,    40,    41,
      42,     0,     0,     0,    43,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,    46,     0,    47
};

static const yytype_int16 yycheck[] =
{
       1,    61,   518,     3,   704,   366,   360,   642,   837,   487,
     459,   297,    15,   952,   953,    15,   796,   594,   720,   596,
     598,   181,     3,   136,   686,   264,   139,   655,    29,     3,
     100,    10,     3,   475,   611,    36,   390,   107,   162,     4,
     617,   395,     3,    11,     1,     3,     4,     1,   152,   639,
     600,   990,   156,     4,    81,   159,   162,     1,   997,   163,
      61,   503,   259,   653,   118,   158,    45,   162,    16,   162,
     162,   162,   162,   162,   162,    76,     1,  1016,   275,   139,
    1019,   631,   632,     4,   138,    33,   108,     3,     4,     3,
       4,     3,     4,     3,    52,     3,     4,    41,   120,     3,
       4,     4,   377,    71,   546,     3,     3,     4,     3,     4,
       3,   627,     3,    71,   174,    61,     3,     4,     4,   119,
      71,   181,   103,     4,     1,   104,   105,   705,   706,    98,
     111,   709,   133,     4,   108,   136,     3,   111,   139,   100,
     111,   142,   111,     3,     4,   148,   111,   725,   148,   106,
     812,   151,   106,   111,   278,   155,   135,   136,   158,   601,
     602,   274,   162,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   278,   174,   131,   132,   754,   102,   271,   807,
     181,   341,   342,   278,   762,   278,   278,   278,   278,   278,
     278,  1130,  1131,   103,    98,   111,    61,   111,   102,   111,
      98,   111,     3,   111,   102,   840,     1,   111,   111,   909,
     910,    71,   487,   111,   111,   108,   111,   917,   111,     1,
     111,  1050,     0,  1052,   111,   111,   296,   297,   174,   106,
     111,    98,   302,   303,   304,   181,     4,   307,   477,   299,
     300,   480,     4,   518,   111,   484,   874,     3,   249,  1029,
    1030,   111,   252,   881,     3,     4,   109,   110,   497,   498,
     499,     3,     4,     3,     4,     3,     4,     4,    98,     3,
       4,   271,     4,   274,     3,     4,     3,     4,   278,     3,
       4,     3,     4,     3,     4,   345,   346,     4,   988,   989,
       3,     4,    98,     3,     4,   303,   304,     0,   299,   300,
       4,   102,   362,    71,   364,     3,     4,  1087,     4,   174,
     111,   106,     1,   373,   102,    52,   376,   377,     1,    98,
     102,     1,   101,   111,   384,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    71,   405,   131,   132,    97,   916,
      99,   411,   919,   111,   345,   346,   102,     3,     4,   111,
       4,     1,   627,   299,   300,   111,    97,     4,     4,     4,
       4,   362,   111,   364,   639,   106,     1,   367,     4,   111,
     370,   111,   373,   111,   111,   376,   377,   111,     4,   111,
       4,     4,   111,   384,   111,   834,     4,   111,     4,   111,
     108,   111,     1,     4,   111,    98,     4,  1032,   111,   345,
     346,   111,     4,   411,   464,     4,     4,   111,    97,   469,
     470,   889,   890,   111,   103,   111,   362,   106,   364,   897,
       4,   899,   900,   106,     1,   485,   106,   373,  1128,  1129,
     376,   377,  1134,  1135,   299,   300,     1,     1,   384,    98,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   108,
       1,   131,   132,     1,     1,   111,   106,   111,   518,   139,
     140,   141,    97,   464,   111,   111,   111,   111,   469,   470,
       1,   106,   473,   474,   475,   111,     3,     1,     1,     1,
     345,   346,   107,     1,   485,   963,   964,   111,   111,     1,
       1,     1,   552,   111,   103,   111,   100,   362,     4,   364,
     111,    97,   980,   111,     1,     1,  1083,  1084,   373,   111,
     106,   376,   111,   111,     1,    99,     1,   518,   464,   384,
      97,   133,   134,   469,   470,   811,   103,   587,   588,   106,
     291,   817,    97,    97,   100,     1,   102,    98,   103,   485,
     103,   106,   106,   603,   604,    51,    97,   108,   111,    97,
      97,   552,   103,  1031,   915,   106,   377,   318,   106,   106,
     799,   800,    68,   102,     3,   102,    98,   627,   102,   108,
     102,    98,   518,   108,   111,   106,   636,   111,     4,   639,
     640,  1097,   106,   106,   106,    97,   587,   588,   106,    15,
      97,   103,    99,   653,   106,   106,   106,    23,   359,   464,
     601,   602,   603,   604,   469,   470,   552,   882,   111,   106,
     106,   681,  1090,  1091,   889,   890,   686,    29,     4,   106,
     485,   106,   897,   100,   899,   900,   627,    98,     1,   106,
     391,    97,   103,   394,    97,   636,    99,   103,   639,   640,
     106,   587,   588,    53,  1122,    55,    19,     4,   100,    61,
      60,    24,   653,   708,   106,    28,   711,   603,   604,    98,
     103,    97,   901,   102,     4,   103,   487,   103,   111,   377,
      43,     4,   685,   111,    86,    87,    88,    89,    90,    91,
      92,   627,   695,   696,   697,   698,   100,   552,   963,   964,
     636,   106,   106,   639,   640,   750,    69,   518,    15,  1053,
    1054,    97,   757,    99,   759,   980,    23,   653,   708,   764,
     111,   711,   100,   726,  1056,  1057,   377,   100,   106,   102,
    1062,    98,   587,   588,   101,   108,     4,   182,   183,   184,
     185,   186,   187,   188,   189,   129,   130,   120,   603,   604,
     107,    53,   812,    55,    53,   100,    55,   102,    60,    97,
     750,    60,    97,  1028,    97,   103,  1031,   757,   103,   759,
     103,    97,  1037,    97,   764,   765,   862,   103,   100,   103,
      98,   636,   868,   101,   106,   640,   100,    98,   102,   487,
     101,  1020,  1021,   144,   490,    98,   492,     3,   101,   495,
     850,   851,   852,   853,    97,   102,    99,   857,   347,   348,
     349,   350,    98,   107,   864,   101,   627,   102,    98,    98,
     518,   101,   101,   107,    98,  1090,  1091,   101,   639,   107,
     181,    98,  1097,    97,   101,    98,   487,    98,   101,   101,
     101,    98,   892,   833,   101,    98,   100,   837,   101,   139,
     140,   141,   111,   112,   113,   100,    97,  1122,    99,   850,
     851,   852,   853,   913,   914,   100,   857,   518,   107,   108,
    1099,  1100,   862,   864,   111,   112,   113,   100,   868,  1108,
    1109,    97,   872,   873,    97,    97,    99,    99,    97,   377,
      99,    93,    94,   338,   339,   340,   341,   342,   343,   344,
     108,   892,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   102,   358,   850,   851,   852,   853,    97,   102,
      99,   857,   913,   914,    97,   915,    99,   102,   864,   627,
     102,    97,   377,    99,   108,   925,   926,    93,    94,   102,
     291,   639,   293,    95,    96,   343,   344,    97,   351,   352,
     301,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     103,   114,   131,   132,   409,   474,   475,   318,   119,   115,
     137,   322,    14,   103,    97,    17,   627,   913,   914,    97,
       4,   101,   377,    97,    49,   101,   337,  1037,   639,   101,
     101,     4,     4,   103,     4,   850,   851,   852,   853,   487,
      42,     4,   857,     4,   103,    47,   357,   120,   359,   864,
     103,   103,   103,  1003,  1004,   103,    97,   103,   107,   377,
      62,  1071,    64,  1073,   103,    52,  1076,    52,  1078,   101,
     518,   102,   102,   100,    76,    77,   102,   101,    80,     4,
     391,   392,   487,   394,   103,   101,  1037,  1097,    97,   103,
     103,   120,   120,  1043,  1044,   102,   102,   120,   913,   914,
    1050,    98,  1052,   120,   102,   416,   417,    98,   102,    98,
     102,   882,    98,   518,   102,    98,    98,    85,   889,   890,
    1071,   100,  1073,    97,   120,  1076,   897,  1078,   899,   900,
     120,   102,   487,   100,   100,     4,   100,     4,   103,    97,
     102,  1037,   102,   100,    97,   101,  1097,   102,   107,   103,
     461,   103,   103,   103,   103,   100,   103,   103,   100,   103,
     100,     1,   567,   518,   569,   570,   571,   103,   103,   487,
     103,   103,     1,   103,   103,  1071,   100,  1073,   101,   627,
    1076,   120,  1078,   494,    99,   496,    99,   101,    94,   101,
     101,   639,   963,   964,   101,    93,     4,    27,   103,     4,
     518,  1097,   102,   100,   100,   107,   107,   102,   101,   980,
     101,   103,    95,   103,   103,   103,   103,   103,   103,   103,
     101,   103,   627,   103,   882,    96,    94,    93,   101,   101,
     417,   889,   890,   103,   639,   578,   174,   174,   103,   897,
     103,   899,   900,   103,   103,   103,   103,   103,   103,   103,
     817,   130,   410,   405,   353,   355,  1071,  1028,  1073,   354,
    1031,  1076,   356,  1078,  1037,   358,  1037,   882,  1035,   580,
       1,   882,   627,   752,  1037,  1028,   496,   106,   889,   890,
     801,   978,   842,   801,   639,   771,   897,   692,   899,   900,
      81,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     962,     4,   131,   132,   119,   963,   964,    49,   366,   627,
     139,   140,   141,   367,  1021,  1004,   873,   872,   926,  1090,
    1091,   639,   980,  1003,   475,   614,  1097,   370,   271,    24,
     278,   642,   252,   644,   645,   142,   164,   648,   966,   884,
      -1,    -1,   653,    -1,   655,    -1,    -1,    -1,    -1,    -1,
      -1,  1122,   963,   964,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,   980,
    1028,   102,    -1,  1031,   685,   106,    -1,   108,    -1,  1037,
      -1,    -1,    -1,    -1,   695,   696,   697,   698,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
     131,   132,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,    -1,    -1,    -1,    -1,   726,    -1,  1028,    -1,    -1,
    1031,    -1,    -1,    -1,    -1,    -1,  1037,    -1,    -1,    -1,
      -1,    -1,  1090,  1091,   882,    -1,    -1,    -1,    -1,  1097,
      -1,   889,   890,    -1,    -1,    -1,    -1,    -1,    -1,   897,
      -1,   899,   900,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   882,    -1,  1090,
    1091,    -1,    -1,    -1,   889,   890,  1097,    -1,    -1,    -1,
      -1,     1,   897,    -1,   899,   900,   807,    -1,    -1,    -1,
      -1,    -1,   813,   814,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1122,    -1,    -1,    -1,   963,   964,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   882,    -1,   840,
      -1,    -1,   980,    -1,   889,   890,    -1,    -1,    -1,    -1,
      -1,    -1,   897,    -1,   899,   900,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   963,   964,
      -1,    -1,    -1,   874,   882,    -1,    -1,    -1,    -1,    -1,
     881,   889,   890,    -1,    -1,   980,    -1,    -1,    -1,   897,
    1028,   899,   900,  1031,    -1,    -1,    -1,    -1,    98,  1037,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   963,   964,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,   131,   132,  1028,    -1,   980,  1031,    -1,    -1,   139,
     140,   141,  1037,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1090,  1091,    -1,   963,   964,    -1,    -1,  1097,
     961,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     971,   972,   980,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1028,  1122,    -1,  1031,    -1,    -1,    -1,
      -1,    -1,  1037,    -1,    -1,  1090,  1091,     4,     5,     6,
       7,     8,  1097,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
    1028,    -1,    -1,  1031,    -1,    32,    -1,  1122,    35,  1037,
      -1,  1032,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,  1090,  1091,    -1,    -1,    -1,
      -1,    -1,  1097,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,  1122,    -1,    -1,
      -1,    -1,  1090,  1091,    -1,    -1,    -1,     1,    -1,  1097,
       4,     5,     6,     7,     8,   102,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    20,    21,    22,   116,
     117,    25,    26,    -1,  1122,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    83,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,    -1,    -1,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,   139,   140,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,     4,    49,    50,    51,    -1,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,
      65,    22,    -1,    68,    -1,    26,    71,    -1,    73,    -1,
      75,    76,    77,    78,    35,    80,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    62,    -1,    64,   109,   110,   111,    68,    -1,   114,
      -1,   116,   117,    -1,    -1,    76,    77,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,   139,   140,    11,    12,    13,    14,
      15,    -1,    17,    18,    -1,    20,    21,    22,    23,    -1,
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
      -1,    20,    21,    22,   139,   140,    25,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      13,    14,    -1,    -1,    17,    18,    -1,    -1,    21,    22,
     139,   140,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    -1,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,   117,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,   139,   140,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,   102,
      17,    18,    -1,    -1,    -1,    22,   109,   110,   111,    26,
      -1,   114,    -1,   116,   117,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,    -1,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,
      -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,
     117,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      22,    -1,   139,   140,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
     102,    17,    18,    -1,    -1,    -1,    22,   109,   110,   111,
      26,    -1,   114,    -1,   116,   117,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    -1,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,    -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,
     116,   117,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    22,    -1,   139,   140,    26,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,   102,    17,    18,    -1,    -1,    -1,    22,   109,   110,
     111,    26,    -1,   114,    -1,   116,   117,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,     4,    49,    50,    51,    -1,   139,   140,
      -1,    12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,
      65,    22,    -1,    68,    -1,    26,    71,    -1,    73,    -1,
      75,    76,    77,    78,    35,    80,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    62,    -1,    64,   109,   110,   111,    68,    -1,   114,
      -1,   116,   117,    -1,    -1,    76,    77,    -1,    -1,    80,
       1,    -1,    83,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,   139,   140,    17,    32,    19,    20,
      -1,    22,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   117,    -1,   133,   134,
     135,   136,    -1,     1,   139,   140,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,     1,    -1,    47,
       4,    -1,    -1,    51,    -1,    53,    -1,    55,    12,    -1,
      14,    -1,    60,    17,    62,    -1,    64,    -1,    22,    -1,
      68,    -1,    26,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,    -1,
      -1,     1,    -1,    47,     4,    -1,    -1,    51,    -1,    53,
      98,    55,    12,    -1,    14,   103,    60,    17,    62,    -1,
      64,    -1,    22,    -1,    68,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    35,    80,    -1,    -1,    83,
      -1,    -1,    42,     0,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,     9,    53,    98,    55,    -1,    -1,    -1,   103,
      60,    -1,    62,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    76,    77,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    98,    56,
      57,    58,    59,   103,    -1,     1,    63,    -1,     4,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    79,    19,    20,    82,    22,    84,    24,    -1,
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
      -1,     9,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      68,    -1,    -1,    31,    -1,    -1,    -1,    -1,    76,    77,
       9,    -1,    80,    -1,    -1,    83,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    31,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,    79,    -1,    -1,    82,    54,    84,    56,    57,    58,
      59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   271,   272,   280,   281,   282,   283,     4,   146,
     277,   278,     0,   273,   275,   284,   285,   286,   290,   338,
     348,   362,   369,   370,   371,   372,   381,   281,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   287,   288,
     289,   273,   285,   372,    98,     4,   277,   108,   277,     1,
      19,    24,    28,    43,    69,   387,   289,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   373,   374,   375,     1,
     106,   100,   279,    12,    14,    17,    22,    26,    35,    42,
      47,    51,    62,    64,    68,    76,    77,    80,    83,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   277,   303,
       4,     4,     4,     4,   277,   376,   377,   379,   107,   272,
     106,   276,   111,   111,     3,   157,   157,   111,   157,     4,
     107,   363,   364,   107,   349,   350,   107,   339,   340,   107,
     291,   292,    97,    99,   102,   378,   380,   274,   284,   102,
     151,   100,   365,   277,   293,   100,   351,   293,   100,   341,
     153,   293,   100,   294,    99,   377,   382,     5,     6,     7,
       8,    11,    18,    32,    49,    50,    65,    71,    73,    75,
      78,   102,   109,   110,   111,   114,   116,   117,   139,   140,
     144,   145,   149,   153,   161,   162,   163,   164,   165,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   206,   277,   101,   273,   302,   305,   306,
     307,   308,   309,   311,   273,   366,   367,   368,   276,    97,
     273,   352,   353,   354,   355,   357,   358,   360,   276,   273,
     286,   298,   299,   300,   301,   312,   319,   323,   326,   331,
     342,   343,   344,   276,    97,   273,   286,   295,   296,   297,
     298,   299,   300,   312,   319,   323,   326,   331,   335,   276,
     382,    98,   108,   102,    83,   147,   148,   155,   277,   102,
     102,   102,    83,   149,   153,   193,   206,   277,   188,   188,
     188,   188,   188,   188,   188,   188,   108,   108,    98,   108,
     102,   103,    97,   139,   140,   141,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   131,   132,   205,   111,   112,
     113,   109,   110,   129,   130,    10,    45,   104,   105,   135,
     136,   133,   134,   114,   119,   115,   137,   118,   138,    98,
     102,    53,    55,    60,   310,   103,    97,    97,     4,   101,
      97,   277,    49,   356,   101,   354,   287,   100,   106,   211,
     304,   101,   344,   293,   287,   101,   297,   169,     4,   206,
     102,    98,   100,   345,    98,   102,   147,   277,    83,   147,
     277,   206,   111,   157,   190,   191,   192,   190,   190,   111,
     103,   157,     4,     4,   169,     4,    53,    60,   159,   160,
     166,   206,   206,     4,   206,   188,   188,   188,   188,   193,
     193,   194,   194,   147,   277,   147,   277,   195,   195,   195,
     195,   196,   196,   197,   198,   199,   200,   206,   201,   169,
     166,   147,   277,   147,   277,     1,   106,   306,   307,   273,
     309,   120,   101,   368,    29,    83,   147,   277,     4,    20,
      29,    30,    40,    83,   147,   277,   324,   327,   328,   330,
     332,     1,     4,    13,    18,    20,    21,    25,    34,    36,
      37,    38,    39,    46,    61,    70,    72,    74,    78,    79,
      81,    85,   106,   147,   149,   153,   165,   172,   173,   175,
     186,   187,   188,   204,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   222,   225,   227,   228,   229,   236,   237,
     238,   241,   242,   250,   251,   252,   253,   254,   255,   257,
     258,   263,   264,   265,   266,   268,   277,   117,    99,   103,
     166,   169,    66,   206,   220,   221,   345,   346,   347,   169,
     166,   103,   103,   103,   103,   103,   103,   103,   192,   103,
     103,   103,   185,   190,    99,   158,   206,   158,    97,   103,
     107,    99,   103,     4,     4,     4,     4,    55,   310,   206,
     207,   147,   277,     4,     4,    71,     4,    71,   102,   147,
     277,   147,   277,    52,    52,   277,     4,    52,    71,   218,
     219,   277,   278,   325,    52,    71,   218,   277,   325,   385,
     106,   211,   336,   106,   211,   337,   101,   107,     1,   106,
     211,   147,   277,     1,   106,   210,   102,     1,   102,   388,
     388,     4,    15,    23,   388,   102,   206,   256,   388,   256,
     211,   211,   211,   102,     1,   102,     4,   218,     1,   106,
       1,   106,     1,   106,     1,   106,     1,   106,     1,   106,
       1,   106,   101,   209,     1,   106,     1,   106,   218,     4,
     103,    99,   147,   277,   101,    97,    99,   103,   188,   188,
     188,   188,   103,   160,   206,   120,   120,   120,   120,   147,
     277,   147,   277,     4,     4,   102,   102,   385,    98,   102,
     385,    98,   302,     4,   223,   224,   223,   218,   277,   218,
     277,   147,   277,   147,   277,   102,   120,    32,    73,   104,
     105,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     119,   129,   130,   133,   134,   135,   136,   139,   140,   329,
      98,     1,    97,   106,   102,   385,    71,    98,   329,    98,
       1,   106,   102,   385,    98,   100,   209,   223,   223,    85,
     147,   277,   165,   172,   173,   175,   186,   187,   204,   217,
     226,   243,   246,   249,   147,   277,     1,   106,   207,     1,
     106,   206,   208,   206,     1,   106,   206,     1,   106,    16,
      33,   259,   260,   262,   206,   217,   267,   239,     1,   208,
     102,   156,   157,    98,    98,   101,   220,   156,   188,   220,
     220,   220,   220,     4,     4,     4,     4,   100,   106,   361,
     361,   302,   302,   100,   273,   305,   302,   100,   305,   103,
     120,     1,    97,   106,     1,   106,   106,   383,   106,   383,
     102,   102,   102,   102,     1,   302,   220,   102,   305,   219,
       1,   302,   100,   305,   102,   305,     1,   302,   100,   305,
     273,   313,   316,   317,   102,     4,   269,   270,   269,     1,
     106,   390,    97,     4,     4,     1,   106,     1,   103,   389,
     103,   389,   102,   211,   211,   260,   262,   103,   208,   103,
     103,   103,   177,   345,   156,   206,   206,   177,   101,   103,
     103,   273,   359,    55,   310,    97,    99,   103,   359,    99,
     107,   333,   334,   207,   224,   100,   100,   147,   277,   147,
     277,   147,   277,   147,   277,   103,   103,   147,   277,    99,
     103,   103,   313,    99,   147,   277,    99,   103,   103,   313,
      99,    93,    94,   101,   273,   314,   317,   273,   315,   316,
     208,   120,    97,   103,   103,   208,   244,   247,   226,     1,
      41,   391,   391,   210,   210,   100,   230,   153,   277,   210,
       1,   210,   210,   211,    99,    99,   361,   361,    93,    94,
     101,   147,   277,   147,   277,   385,   361,   101,   385,    11,
      71,   273,   320,   321,   322,   320,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,   101,     4,     4,   101,
     386,   386,   386,   103,   206,   270,   210,   210,   390,   206,
     206,    27,    15,    23,   231,   232,   233,   234,   235,     4,
     261,   261,   210,   361,   361,   386,     4,     4,     4,     4,
     100,   386,   100,   102,   102,    95,    96,   101,   273,   322,
     273,   321,   101,   103,   103,   103,   103,   103,   103,   103,
     103,    97,   103,    97,   103,   386,    97,   103,    97,   103,
     386,   106,   211,   318,   318,     1,   106,   245,   248,   249,
     389,   389,   210,   207,   107,   101,   233,   213,   235,   103,
     103,   240,   273,   273,   359,   359,   166,   166,   384,   384,
     384,   384,   147,   277,   147,   277,   147,   277,   147,   277,
     385,   385,   389,   210,   210,   107,   211,   211,    94,    93,
     101,   101,   103,   103,   211,   211,     4,     4,     4,     4,
       4,     4,     4,     4,   210,   361,   361,   386,   386,   383,
     383,   103,   103,   103,   103,   103,   103,   103,   103
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
     225,   225,   225,   225,   225,   225,   225,   226,   226,   226,
     226,   226,   226,   226,   227,   227,   228,   228,   229,   230,
     231,   231,   232,   232,   233,   234,   234,   235,   235,   236,
     236,   236,   236,   237,   238,   238,   239,   240,   238,   241,
     241,   242,   243,   243,   244,   244,   245,   245,   246,   246,
     247,   248,   249,   249,   250,   250,   251,   251,   251,   251,
     251,   252,   252,   253,   253,   254,   254,   254,   254,   254,
     254,   255,   255,   256,   256,   257,   257,   258,   258,   258,
     259,   259,   260,   260,   260,   261,   261,   262,   263,   264,
     265,   266,   267,   267,   268,   268,   269,   269,   270,   271,
     271,   272,   272,   273,   273,   274,   274,   275,   276,   276,
     277,   277,   278,   278,   279,   280,   280,   281,   281,   282,
     282,   283,   283,   284,   284,   285,   285,   286,   286,   286,
     286,   286,   287,   287,   288,   288,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     290,   291,   291,   292,   292,   292,   293,   293,   294,   295,
     295,   296,   296,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   298,   298,   298,   298,   299,   299,   299,
     299,   300,   301,   301,   301,   301,   301,   301,   302,   302,
     302,   302,   303,   303,   303,   304,   304,   305,   305,   306,
     306,   307,   307,   308,   308,   309,   309,   309,   309,   310,
     310,   310,   311,   311,   312,   312,   313,   313,   314,   314,
     315,   315,   316,   317,   318,   318,   319,   319,   319,   319,
     320,   320,   321,   322,   323,   324,   324,   324,   324,   325,
     326,   327,   327,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   330,   330,   330,
     330,   330,   330,   330,   330,   331,   332,   333,   333,   334,
     334,   335,   336,   336,   337,   337,   338,   339,   339,   340,
     341,   342,   342,   343,   343,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   345,   345,   346,   346,   347,   347,
     348,   349,   349,   350,   351,   352,   352,   353,   353,   354,
     354,   354,   354,   355,   355,   355,   356,   356,   357,   357,
     358,   358,   359,   359,   359,   359,   360,   360,   361,   361,
     362,   363,   363,   364,   365,   365,   366,   366,   367,   367,
     368,   368,   369,   369,   370,   371,   371,   372,   372,   373,
     373,   374,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   376,   376,   377,   378,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   387,   388,   388,   389,   389,
     390,   390,   391,   391
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
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     5,     3,
       0,     1,     1,     2,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     2,     5,     5,     0,     0,     7,     7,
       7,     9,     0,     1,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     3,     8,     8,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     4,     3,     3,     4,
       3,     3,     3,     0,     1,     3,     3,     3,     3,     4,
       1,     2,     6,     6,     2,     0,     1,     2,     2,     2,
       5,     5,     1,     1,     6,     6,     1,     3,     3,     2,
       2,     0,     1,     0,     1,     0,     1,     5,     0,     1,
       1,     2,     2,     3,     4,     1,     2,     1,     1,     5,
       5,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     0,     1,     2,     2,     4,     1,     3,     3,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     6,     6,     6,     5,     5,     5,
       5,     2,     7,     7,     7,     7,     7,     7,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     4,     4,     6,     6,     6,     6,     0,
       1,     1,     4,     4,     9,     9,     2,     2,     0,     1,
       0,     1,     5,     5,     1,     1,     6,     6,    10,    10,
       2,     2,     5,     5,     8,     5,     5,     5,     5,     2,
       4,     1,     1,     7,     7,     7,     7,    10,    10,    10,
      10,    10,    10,    10,    10,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,     7,
       7,     7,     7,     7,     7,     4,     5,     0,     1,     5,
       5,     7,     1,     1,     1,     1,     7,     0,     1,     2,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     0,     1,     1,     3,
       7,     0,     1,     2,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     8,     8,     8,     0,     1,     9,     9,
      12,    12,     3,     3,     6,     6,     6,     6,     1,     2,
       7,     0,     1,     2,     3,     4,     0,     1,     1,     3,
       2,     4,     9,     9,     1,     1,     2,     6,     7,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     0,     1,     1,     3,     0,     0,
       0,     0,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 2803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 132 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 133 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 147 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 152 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 163 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 167 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 3001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 3007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 180 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 3013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 3019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 3025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 3031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 3037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 3043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 3049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 197 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 3055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 3061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 201 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 236 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 244 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 248 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 255 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 259 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 273 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 274 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 279 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 282 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 287 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 290 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 293 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 300 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 306 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 307 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 310 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 322 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 323 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 325 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 338 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 339 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 348 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 358 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 362 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 363 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 388 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 392 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 393 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 396 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 397 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 400 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 401 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 404 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 412 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 416 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 420 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 432 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 463 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 464 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 472 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 4003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 479 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 4009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 480 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 4015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 481 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 4021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 4027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 4033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 488 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 4039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 489 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 4045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 492 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 4051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 493 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 4057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 496 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 497 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 498 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 501 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 4081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 502 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 4087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 505 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 4093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 506 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 4099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 509 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 4105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 510 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 4111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 4117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 524 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 527 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 529 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 530 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 531 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 532 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 533 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 534 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 535 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 538 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 540 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 541 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 542 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 544 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 556 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 581 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 582 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 585 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 586 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 589 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 590 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 592 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 595 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 599 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 600 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 600 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 600 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 603 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 604 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 608 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);}
#line 4411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 614 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 621 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 629 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 632 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 639 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 646 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 650 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 651 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 654 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 658 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 661 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 667 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 674 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 675 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 678 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 679 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 683 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 699 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 702 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 705 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 708 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 711 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 712 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 716 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 717 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 720 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 724 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 727 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 728 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 732 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 735 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 736 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4783 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 739 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4789 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 740 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 743 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4801 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4807 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 747 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4813 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4819 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4825 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4831 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4837 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4843 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 767 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4855 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 771 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4861 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 775 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4873 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 776 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4879 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 779 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4885 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 780 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4891 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 783 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4897 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 784 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4903 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 787 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4909 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 791 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4939 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 795 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4945 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 806 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4951 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 807 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4957 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 810 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 4963 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 811 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 4969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 814 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 815 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 818 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 819 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 825 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 827 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 831 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",6);}
#line 5059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 836 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 5065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 5071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 840 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 5077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 841 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 5083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 842 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 5089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 845 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 5095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 846 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 5101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 849 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 5107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 852 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 5113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 853 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 856 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 857 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 860 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5149 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 866 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5173 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 867 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5179 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5185 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 870 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5191 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 5197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5203 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 875 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 5209 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 876 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5215 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 879 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 5221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 880 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 5233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 882 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 885 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 5245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 889 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 891 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 5263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 892 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 5269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 5275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 894 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",3,1);}
#line 5281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 897 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 5287 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 898 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 5293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 899 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 5299 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 900 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",2);}
#line 5305 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 903 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5311 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 904 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5317 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 905 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5323 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 908 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5329 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 909 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5335 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 912 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 5341 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 913 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 5347 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 916 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_default_list",1);}
#line 5353 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 917 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_default_list",2);}
#line 5359 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5365 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 921 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5371 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 924 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5377 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 925 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5383 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 928 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_default",4);}
#line 5389 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_default",4);}
#line 5395 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_default",4);}
#line 5401 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 931 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_default",4);}
#line 5407 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 934 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5413 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 935 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5419 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5425 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 940 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5431 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 941 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5437 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 947 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5443 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 951 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5449 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 954 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5455 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 955 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5461 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 958 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5467 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 959 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5473 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 962 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5479 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 963 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5485 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 969 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5491 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 975 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5497 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 978 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5503 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 979 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5509 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 982 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5515 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 983 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5521 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 987 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5527 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 991 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5533 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5539 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 995 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5545 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1001 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5551 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1007 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5557 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1013 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5563 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1016 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5569 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1017 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5575 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1019 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5581 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1020 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5587 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5593 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1030 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5605 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1031 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5611 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1035 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1036 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1037 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1039 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1041 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1042 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1043 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1045 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1046 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1048 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1054 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1056 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1057 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1058 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1059 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1062 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1063 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1066 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1067 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1068 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1071 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1072 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1075 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1078 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1079 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1080 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1085 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1088 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1091 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1094 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1098 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1099 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1115 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1119 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1123 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1128 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1132 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1142 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1145 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1146 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1149 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1150 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1152 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1154 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1155 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1158 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1163 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 6043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1164 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 6049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 6055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1168 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 6061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 6067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1172 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 6073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 6079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1180 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 6085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 6091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1184 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 6097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 6103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 6109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 6115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 6121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 6127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 6157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 6163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1207 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 6169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 6175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1211 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 6181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1228 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1233 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1237 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1238 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1240 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1243 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1244 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1250 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1255 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1258 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1259 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1262 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1265 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1266 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1269 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1270 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1273 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1274 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1277 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1278 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1283 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 1284 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 1289 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 1292 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 1293 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 597:
#line 1296 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 598:
#line 1297 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 599:
#line 1300 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 600:
#line 1301 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 601:
#line 1304 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 602:
#line 1307 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 603:
#line 1308 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 604:
#line 1309 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 605:
#line 1310 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 606:
#line 1311 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 607:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 608:
#line 1313 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 609:
#line 1314 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 610:
#line 1315 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 611:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 612:
#line 1319 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 613:
#line 1322 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 614:
#line 1325 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 615:
#line 1326 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 616:
#line 1329 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 617:
#line 1332 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 618:
#line 1339 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 619:
#line 1342 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 620:
#line 1345 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 621:
#line 1348 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 622:
#line 1351 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 623:
#line 1354 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 624:
#line 1362 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0);}
#line 6523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 625:
#line 1363 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0,1);yyerrok;yyclearin;}
#line 6529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 626:
#line 1366 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 6535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 627:
#line 1367 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 628:
#line 1370 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 6547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 629:
#line 1371 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 630:
#line 1374 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0);}
#line 6559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 631:
#line 1375 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0,1);}
#line 6565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 632:
#line 1378 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0);}
#line 6571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 633:
#line 1379 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0,1);yyerrok;}
#line 6577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6581 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1384 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




