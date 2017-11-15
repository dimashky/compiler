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
#line 9 "yacc.y" /* yacc.c:339  */

	#define YYERROR_VERBOSE 1
	#define YYDEBUG 1
	
	#include <iostream>
	#include "../Error Handler/error_handler.h"

	
	using namespace std;
	


	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

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
#line 33 "yacc.y" /* yacc.c:355  */

	struct R{
		int i;
		float f;
		char c;
		char* str;
		int line_no;
		int col_no;
		}r;
	

#line 286 "yacc.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 303 "yacc.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   2762

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  242
/* YYNRULES -- Number of rules.  */
#define YYNRULES  554
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  935

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
       0,   105,   105,   106,   107,   108,   109,   110,   113,   114,
     120,   123,   127,   128,   131,   132,   135,   136,   137,   140,
     141,   144,   145,   146,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   152,   152,   155,   155,   158,   159,   162,
     163,   164,   166,   168,   171,   175,   179,   180,   183,   184,
     185,   188,   189,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   206,   209,   210,   211,   214,
     215,   217,   219,   222,   223,   225,   227,   230,   231,   234,
     237,   238,   241,   244,   247,   250,   253,   254,   256,   258,
     261,   262,   265,   268,   271,   274,   277,   280,   281,   282,
     283,   284,   287,   288,   289,   290,   293,   296,   299,   300,
     301,   302,   303,   304,   305,   313,   314,   315,   316,   317,
     318,   320,   322,   325,   326,   329,   330,   333,   334,   335,
     336,   339,   340,   341,   344,   345,   346,   349,   350,   351,
     352,   353,   354,   355,   358,   359,   360,   363,   364,   367,
     368,   371,   372,   375,   376,   379,   380,   383,   384,   387,
     390,   390,   390,   390,   390,   390,   391,   391,   391,   391,
     391,   394,   395,   398,   401,   405,   406,   407,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   425,   427,   429,   433,   434,   437,   440,   443,   444,
     445,   446,   449,   452,   453,   456,   457,   460,   461,   462,
     465,   468,   471,   472,   475,   478,   479,   482,   483,   484,
     485,   486,   487,   488,   491,   492,   495,   496,   499,   502,
     504,   506,   509,   510,   513,   516,   517,   520,   521,   524,
     525,   526,   527,   530,   533,   536,   537,   540,   541,   544,
     546,   548,   550,   552,   554,   557,   558,   561,   564,   567,
     568,   571,   574,   575,   576,   577,   578,   581,   582,   585,
     586,   589,   590,   591,   592,   593,   594,   597,   598,   600,
     602,   605,   606,   609,   610,   611,   614,   615,   618,   619,
     620,   622,   624,   627,   630,   633,   636,   639,   642,   643,
     647,   650,   651,   654,   657,   658,   660,   662,   664,   666,
     668,   670,   673,   675,   677,   686,   687,   690,   691,   694,
     697,   698,   701,   702,   705,   706,   709,   710,   713,   714,
     717,   718,   721,   722,   723,   724,   725,   735,   737,   740,
     741,   744,   745,   746,   747,   748,   749,   750,   751,   752,
     753,   754,   755,   756,   757,   761,   763,   765,   768,   769,
     770,   773,   774,   777,   779,   781,   784,   785,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   798,   801,   802,
     805,   806,   809,   813,   814,   816,   818,   821,   822,   825,
     826,   829,   830,   833,   834,   837,   839,   841,   842,   846,
     849,   855,   856,   858,   860,   862,   864,   867,   873,   879,
     880,   883,   884,   890,   891,   894,   900,   906,   912,   914,
     917,   921,   924,   925,   928,   929,   932,   932,   933,   933,
     933,   933,   933,   933,   934,   934,   934,   934,   934,   934,
     935,   935,   935,   935,   935,   935,   935,   935,   938,   939,
     942,   945,   947,   949,   952,   953,   969,   972,   973,   976,
     977,   982,   984,   986,   989,   992,   994,   996,   999,  1000,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1012,  1017,
    1018,  1020,  1022,  1025,  1026,  1031,  1033,  1035,  1038,  1041,
    1043,  1045,  1048,  1049,  1052,  1053,  1054,  1055,  1059,  1060,
    1062,  1064,  1067,  1073,  1081,  1082,  1083,  1084,  1087,  1092,
    1093,  1098,  1100,  1102,  1105,  1108,  1109,  1111,  1113,  1116,
    1117,  1120,  1121,  1126,  1127,  1132,  1135,  1136,  1139,  1140,
    1142,  1144,  1147,  1150,  1151,  1152,  1153,  1154,  1155,  1156,
    1157,  1158,  1161,  1162,  1165,  1167,  1169,  1172,  1175,  1182,
    1185,  1188,  1191,  1194,  1197
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
     395,   396,   397,   398
};
# endif

#define YYPACT_NINF -775

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-775)))

#define YYTABLE_NINF -550

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -31,   114,   115,   110,   -31,  -775,  -775,  -775,   178,    39,
    -775,   137,  -775,  1251,  -775,    41,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   110,  -775,   133,  -775,  -775,   172,
    -775,  -775,   162,  -775,  -775,  -775,   172,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   250,  2677,
    -775,   997,  -775,  -775,   480,   182,    53,  -775,   197,   341,
    1338,   357,   384,   419,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   172,  -775,   200,  -775,  -775,   -31,
     264,   291,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,   360,  -775,   399,
    -775,   511,  -775,  -775,  -775,  -775,  -775,  -775,   511,   511,
     521,   422,   429,   466,  -775,  -775,   234,  -775,   453,  -775,
     -46,  -775,  -775,    60,   476,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,   498,   387,   482,  -775,   172,   494,  -775,   172,
     502,  -775,   118,  -775,  2374,  -775,  -775,   503,   242,  -775,
     506,   508,   323,   264,    12,  -775,   337,   264,   508,   342,
     264,   508,   367,   264,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,   -51,   513,  -775,  2623,  -775,   514,  -775,  -775,   515,
     516,  2087,  2374,  2374,  2374,  2374,  2374,  2374,  2374,  2374,
    -775,  -775,   526,   530,   193,   517,  -775,  -775,  -775,  -775,
     510,   527,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,   380,  -775,  -775,  -775,   505,
    -775,   395,   350,   430,    46,   383,   509,   520,   525,   504,
     -76,  -775,  -775,  -775,   220,  -775,   172,   172,  2677,  -775,
     541,   368,  -775,  -775,  -775,  -775,   202,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   370,   540,   547,  -775,  -775,  -775,
     642,   545,   557,  -775,  -775,   606,   565,   372,  -775,  -775,
    -775,  -775,  -775,  -775,  2677,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   567,   377,  -775,  -775,  -775,  2374,
     666,  2374,   360,   173,   572,    24,  2623,  2647,  2374,    23,
      25,    66,   420,   568,   181,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,   671,   673,  2374,   677,  1886,  -775,  2374,
    -775,  -775,   678,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  2374,  2374,  2374,  2374,  2374,  2374,
    2374,  2374,  2623,  2623,  2374,  2374,  2374,  2374,  2374,  2374,
    2374,  2374,  2374,  2374,  2374,  2374,  2374,  1886,   508,  -775,
    1152,  -775,  -775,  1540,  -775,  -775,  -775,  -775,  2623,  -775,
    2623,    72,   110,   564,  -775,   378,  -775,  2580,  -775,  -775,
    2531,  -775,  -775,   347,  -775,   582,  1886,  2374,  1972,  -775,
     225,   283,   304,   583,  -775,  -775,   584,    23,  -775,   589,
     590,  2173,  2460,    23,  -775,  -775,   351,  -775,  2374,  2374,
     598,  -775,   593,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,   395,   395,   350,   350,   399,   399,   430,   430,   430,
     430,    46,    46,   383,   509,   520,   525,   591,   504,   405,
     596,   245,  2623,  2623,   648,   649,    18,   699,    26,  -775,
     296,  -775,  -775,   305,   454,    88,   382,  2623,   106,  1656,
     601,   603,   605,   253,   607,   608,  2374,   609,  2374,   612,
     435,   612,   613,   616,  -775,    68,   526,   530,   108,   207,
     248,   249,   271,   287,   505,  -775,  -775,  -775,  -775,   618,
    1540,  -775,  -775,  -775,   107,   123,  -775,   132,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,    74,
      76,    77,  -775,  -775,  -775,  2374,  -775,  -775,  2623,    79,
      15,  -775,  -775,   611,   445,  2623,  -775,  -775,  -775,  -775,
     619,   624,  -775,  -775,  -775,  -775,  2374,  -775,  2374,  2374,
    2374,  -775,   620,  -775,  -775,  -775,  -775,  1886,  -775,  2374,
    -775,  -775,    12,    80,    81,  2623,  2623,   622,   623,   -54,
     111,   610,   112,  -775,   625,    38,   628,   629,  -775,  -775,
    -775,  -775,  -775,  -775,  1540,  -775,  -775,  -775,    80,  -775,
    -775,   637,  2623,  2288,  2623,   186,  2374,   199,  2374,  2374,
    -775,   255,  2374,   257,    85,  -775,  -775,  2288,  2374,   614,
     633,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,    82,   631,   636,   641,  -775,   511,   169,
    -775,  1771,  -775,  -775,  -775,  -775,  2374,  -775,  -775,   632,
     626,   113,  -775,   -48,  -775,   192,   213,    12,   646,  1972,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,   638,   110,  -775,   741,  -775,    12,   645,  -775,
     110,   110,  -775,   653,   651,    86,  -775,  -775,   258,  -775,
     654,    87,  -775,  -775,   259,  -775,  -775,  -775,   652,   655,
    -775,  -775,   657,  -775,  -775,   446,   612,    85,  -775,  -775,
    -775,  -775,   658,   659,   312,    12,    12,   656,   110,   663,
     511,  2374,  -775,  -775,  -775,   647,  2374,  -775,   754,  -775,
    -775,   664,  2623,  2623,   662,   612,  -775,  2623,   448,  -775,
     667,   110,   455,   481,   665,   379,   385,  2374,   668,   329,
    -775,  2374,  2374,  2374,   726,  -775,  -775,  1656,  1656,   669,
      60,  -775,  -775,  -775,  -775,  1656,  1656,   672,  -775,  -775,
     674,   675,   110,   459,  -775,  -775,  -775,   688,    34,  -775,
    -775,  -775,  -775,   110,    89,    90,  -775,  -775,    91,  -775,
    -775,   689,  -775,  -775,  -775,  -775,   680,  -775,  -775,   679,
    -775,  -775,   692,  2374,   788,  1656,  -775,   792,  -775,   690,
    -775,  2374,   770,  -775,   394,  -775,   797,   797,  -775,  -775,
    -775,   312,   312,   485,   700,  -775,  -775,   701,   702,   491,
     704,   110,   110,   705,   706,   334,  -775,   333,   333,  -775,
     260,  -775,  -775,  -775,  2374,  2374,   708,  1656,  2374,   707,
     711,   394,  -775,  1424,  -775,  -775,   710,   712,  -775,  -775,
     312,   312,  -775,   716,  1886,  1886,  -775,  -775,  -775,   721,
    -775,   723,  -775,  -775,  -775,  2623,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   717,  -775,   654,   720,  1656,  -775,
     719,  -775,  -775,  -775,  1540,  -775,   612,   612,   390,   392,
    -775,   110,   727,   731,   612,   612,  -775,    92,  -775,  -775,
    1656,  1656,  -775,  -775,  -775,  -775,   725,   736,   734,  -775,
    -775,  -775,  -775,   733,  -775,  -775,   312,   312,  -775,  -775,
    -775,  -775,  -775,  -775,  -775
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     306,     0,     0,   308,   307,   320,   322,   323,   315,     0,
      10,     0,     1,   337,   330,   308,   328,   331,   332,   333,
     334,   335,   336,   309,   525,   526,     0,   321,   317,     0,
     327,   326,   316,   341,   342,   343,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,     0,   338,
     339,   337,   329,   527,   530,   315,     0,   318,     0,     0,
       0,     0,     0,     0,   340,   535,   540,   533,   534,   536,
     537,   538,   539,   541,     0,   531,     0,   325,   324,   306,
     313,   356,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   388,    15,   387,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   512,   486,   462,   547,    11,     0,   542,   545,   532,
     308,   314,   312,     0,     0,   357,    38,    37,    44,    40,
      39,    41,     0,     0,     0,   513,     0,     0,   487,     0,
       0,   463,     0,   550,    75,   544,   546,     0,   308,   361,
     358,   359,   308,   313,   308,   514,   308,   313,   488,   308,
     313,   464,   308,   313,   550,   543,   528,     3,     4,     5,
       6,     0,     0,     9,     0,     7,     0,    79,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     2,     0,     0,    97,    52,    51,    55,    56,    57,
       0,    76,    58,    59,    99,   100,    60,    84,    54,    61,
      63,    64,   101,   114,    62,   102,   108,   112,   113,   127,
     105,   131,   134,   137,   144,   147,   149,   151,   153,   155,
     157,   171,   172,    77,    98,   319,     0,     0,   337,   377,
       0,   308,   366,   368,   369,   370,     0,   371,   372,   373,
     374,   375,   376,   355,   396,     0,   386,   391,   393,   394,
       0,     0,   518,   519,   511,   500,     0,   308,   492,   494,
     495,   497,   496,   485,   337,   478,   470,   471,   472,   473,
     474,   475,   476,   477,     0,   308,   468,   461,   529,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,   121,
     121,   121,   131,     0,    98,   109,   110,   111,    95,   103,
     104,   106,   107,     0,     0,     0,     0,    71,   548,     0,
      82,    83,     0,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,   360,   362,
       0,   363,   367,   192,   390,   389,   382,   398,     0,   397,
       0,     0,   308,   521,   515,   308,   501,     0,   489,   493,
       0,   465,   469,     0,    80,     0,    71,     0,   481,    87,
       0,     0,     0,     0,   126,   125,     0,   122,   123,     0,
       0,     0,    65,   121,    67,    68,     0,    66,     0,     0,
      72,    46,     0,    48,    78,    94,   159,   128,   129,   130,
     127,   132,   133,   135,   136,   143,   142,   139,   138,   140,
     141,   145,   146,   148,   150,   152,   154,     0,   156,     0,
       0,   315,     0,     0,     0,     0,     0,     0,     0,   553,
       0,   422,   423,     0,   315,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   279,     0,   279,     0,
       0,     0,     0,     0,   196,     0,    16,    17,    56,    99,
     100,    84,   112,   113,     0,   219,   194,   177,   178,     0,
     193,   179,   175,   176,     0,     0,   180,     0,   181,   224,
     225,   182,   189,   239,   240,   241,   242,   183,   262,   263,
     264,   265,   266,   184,   185,   186,   187,   188,   190,    98,
       0,     0,   524,   523,   392,     0,   516,   520,     0,     0,
       0,    81,    92,     0,     0,     0,   207,   483,   209,   208,
       0,   482,    96,    91,    90,    93,     0,   124,     0,     0,
       0,   115,     0,    73,    50,    45,    49,     0,    69,     0,
      74,    70,   308,     0,     0,     0,     0,     0,     0,   205,
       0,     0,     0,   203,   553,     0,     0,     0,   458,   457,
     421,   460,   459,   450,     0,   268,   267,   294,     0,   270,
     269,     0,     0,   249,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,   295,   243,     0,     0,   205,
     202,   191,   195,   200,   198,   201,   199,   216,   215,   399,
     395,   173,   522,     0,     0,   553,     0,    85,    42,     0,
     479,     0,   120,   118,   119,   116,     0,    47,   158,     0,
       0,     0,   212,     0,   551,     0,     0,   308,     0,     0,
     433,   432,   444,   445,   426,   427,   434,   435,   436,   437,
     438,   428,   429,   439,   440,   441,   442,   443,   447,   446,
     430,   431,     0,   308,   381,     0,   380,   308,     0,   420,
     308,   308,   197,   211,     0,     0,   255,   259,     0,   250,
     256,     0,   274,   271,     0,   276,   273,   174,     0,     0,
     278,   277,     0,   282,   281,     0,     0,   283,   286,   284,
     299,   298,     0,     0,     0,   308,   308,     0,   308,    88,
      42,     0,   480,   484,   117,   452,     0,   379,     0,   378,
     411,     0,     0,     0,     0,     0,   206,     0,     0,   204,
       0,   308,     0,     0,     0,   308,   308,     0,     0,     0,
     301,   251,   251,     0,     0,   275,   272,     0,     0,     0,
       0,   290,   293,   287,   285,     0,     0,     0,   509,   508,
       0,     0,   308,     0,    86,    89,    43,     0,     0,   451,
     453,   214,   213,   308,     0,     0,   384,   456,     0,   418,
     383,     0,   419,   554,   554,   554,     0,   401,   404,     0,
     402,   406,     0,     0,     0,     0,   257,     0,   252,     0,
     260,     0,   226,   296,   230,   228,   291,   291,   297,   244,
     510,     0,     0,     0,     0,   553,   210,     0,     0,     0,
       0,   308,   308,     0,     0,     0,   554,     0,     0,   417,
       0,   303,   302,   300,   253,   253,     0,     0,     0,     0,
       0,   231,   232,     0,   235,   292,     0,     0,   499,   498,
       0,     0,   554,     0,    71,    71,   552,   552,   552,     0,
     413,     0,   414,   449,   448,     0,   424,   400,   410,   409,
     553,   553,   246,   245,     0,   254,   258,     0,     0,   227,
       0,   238,   229,   233,   234,   236,     0,     0,   308,   308,
     502,   308,     0,     0,     0,     0,   412,     0,   407,   408,
       0,     0,   261,   237,   289,   288,     0,     0,     0,   454,
     455,   551,   551,     0,   248,   247,     0,     0,   554,   415,
     416,   425,   506,   507,   503
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -775,  -775,  -775,  -775,   -71,   -42,   670,  -775,    16,  -775,
     709,  -775,   -53,  -775,   676,   105,   -99,   434,  -775,   281,
    -775,  -775,  -775,  -775,    29,  -349,  -775,  -775,    42,  -775,
    -775,    99,   215,  -775,   239,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   437,   381,   488,   313,  -775,  -196,
    -775,   450,  -175,   256,   109,   263,   495,   507,   497,   501,
     500,  -775,  -775,   524,  -775,   492,  -583,  -575,  -485,  -384,
    -120,  -775,     7,  -775,  -775,  -775,  -340,  -444,   191,  -549,
    -775,  -775,   279,   140,  -775,  -582,  -775,  -775,  -775,  -775,
    -775,  -775,    19,  -775,    28,  -775,  -775,  -775,  -775,  -775,
    -775,   120,    32,  -775,  -775,  -775,   285,  -775,  -775,  -775,
    -775,  -775,  -775,   415,  -775,  -775,  -775,   177,    69,   183,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,    84,  -775,   806,
      -3,  -775,  -775,   254,     0,   441,  -775,  -775,   888,  -775,
    -775,   773,     2,  -138,  -177,  -775,   850,  -775,  -775,  -775,
     147,  -775,  -775,  -775,   661,  -137,  -130,  -128,  -775,  -546,
    -775,  -775,  -440,   531,  -775,  -775,  -775,  -127,   164,  -775,
    -775,   161,   163,    71,  -124,  -775,    83,    93,  -123,  -775,
    -775,  -118,  -775,  -775,  -775,  -775,  -117,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   627,
    -291,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   644,
    -775,  -775,  -775,  -775,    13,  -775,  -587,  -775,  -775,  -775,
    -775,  -775,  -775,   538,  -775,  -775,  -775,   892,  -775,  -775,
    -775,  -775,   776,  -775,  -775,  -775,  -775,   755,  -331,  -269,
    -559,  -774
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   190,   191,     9,    98,   475,   100,   101,   192,   103,
     104,   105,   193,   107,   108,   719,   395,   554,   410,   411,
     194,   195,   196,   197,   198,   412,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   774,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   396,
     397,   398,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   334,   413,   622,   806,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   572,   573,   537,
     538,   495,   641,   642,   496,   497,   498,   499,   500,   815,
     850,   851,   852,   853,   854,   501,   502,   503,   504,   505,
     688,   807,   884,   689,   808,   885,   886,   506,   507,   508,
     509,   510,   511,   601,   512,   513,   707,   708,   856,   709,
     514,   515,   516,   517,   712,   518,   749,   750,     2,     3,
     254,   147,    14,   122,   234,    11,    80,     4,     5,     6,
       7,    15,    16,    17,    48,    49,    50,    18,   124,   125,
     151,   153,   240,   241,   242,   243,   244,   245,   246,   255,
     110,   366,   256,   257,   258,   370,   259,   247,   744,   797,
     800,   745,   746,   880,   248,   830,   831,   832,   249,   449,
     576,   250,   450,   451,   672,   452,   251,   453,   779,   780,
     252,   580,   583,    19,   140,   141,   163,   284,   285,   286,
     539,   540,   541,    20,   137,   138,   160,   266,   267,   268,
     269,   377,   270,   271,   824,   272,   769,    21,   134,   135,
     157,   261,   262,   263,    22,    23,    24,    25,    74,    75,
      76,   116,   117,   145,   118,   146,    26,   166,   731,   904,
     577,   837
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    10,   129,   114,   389,   612,   302,   106,   440,   130,
     131,   687,    51,   694,   239,   678,   639,    52,    99,   625,
     838,   839,    55,   698,   275,   276,   128,   128,   128,    56,
     569,   610,   277,   713,   278,   279,    58,   533,   280,   281,
      30,  -305,    32,   354,   282,   283,   827,  -315,   289,  -315,
     675,     1,   149,  -549,    77,    28,  -310,   342,   290,   730,
     109,   360,   877,   355,    55,   149,   717,   649,   149,   128,
     150,   114,   609,   522,   115,   591,   102,   128,   -11,   570,
     619,   620,   723,   624,   640,   569,   714,   626,   900,   585,
     748,   754,   343,   833,   834,   835,   923,   380,   571,   682,
     736,   734,   705,   239,   399,   400,   828,   589,   613,  -217,
     679,  -549,    90,   674,   727,    12,  -385,    51,     8,   706,
     643,   106,    55,   115,   615,   388,   365,   127,   301,    93,
     126,   740,   293,   617,   313,   394,   115,   394,   127,   115,
    -549,    32,   115,   781,   650,    51,    31,   275,   276,   238,
      52,   344,   345,   260,   934,   277,   265,   278,   279,   274,
      78,   280,   281,   421,   422,   149,   359,   282,   283,   770,
     771,   810,   802,   356,   109,   314,    55,   357,   394,   523,
     127,   304,   346,   347,   128,   651,   -11,   692,   127,   127,
     102,   126,   127,   127,   127,   586,   130,   300,   127,   127,
     695,   127,   127,   127,   127,   403,  -217,   552,  -220,  -549,
     675,   728,  -217,   590,   614,  -217,   652,   653,   164,   676,
     729,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     616,   663,    54,   738,   858,   859,   115,   115,   238,   618,
     742,   664,   665,   106,   106,   666,   667,   668,   669,  -221,
    -218,   670,   671,   686,   390,   392,   700,   595,   703,   751,
     755,   882,   687,   687,   265,   890,   863,   711,   721,   596,
      59,    57,  -222,   898,   899,    60,   386,   597,   773,    61,
     356,   127,   274,   158,   357,   127,   161,    28,  -223,   106,
     106,    28,   315,   693,    62,   732,   109,   109,    79,    29,
     425,   426,   316,   363,   127,  -220,   696,   106,   119,   364,
     477,  -220,   102,   102,  -220,   106,   733,   106,   448,   356,
      63,   908,   909,   357,   106,   127,   520,   106,   521,   542,
     579,   383,   142,   582,   143,   530,   587,   127,   448,   932,
     933,  -549,   109,   109,  -311,    81,  -221,  -218,   562,   604,
     605,   606,  -221,  -218,    28,  -221,  -218,   406,   102,   102,
     109,   111,   701,   519,   704,   752,   756,   883,   109,  -222,
     109,   121,   260,   812,   813,  -222,   102,   109,  -222,   476,
     109,   818,   819,   358,   102,  -223,   102,   543,   112,   106,
     106,  -223,   478,   102,  -223,   126,   102,   363,   439,   123,
     563,   564,    83,   578,   106,    84,   363,   253,   544,   612,
     848,   264,   581,   767,   273,   588,   127,   287,   849,   768,
     131,   843,  -549,   113,   367,  -364,   368,   804,   775,   534,
      88,   369,   875,   805,   363,    89,  -549,   477,   876,  -517,
     878,  -549,   109,   109,  -490,   319,   567,   531,   574,   319,
      91,   553,    92,   427,   428,   429,   430,   109,   102,   102,
     338,   339,   479,   889,    94,    95,  -549,  -549,    96,  -466,
    -365,  -549,   126,   102,  -491,   106,  -549,  -549,  -549,  -467,
     526,  -403,   106,   363,  -549,   291,   623,  -405,   478,  -549,
     519,  -549,  -504,   629,  -505,   305,   306,   307,   308,   309,
     310,   311,   312,   319,   912,   560,   476,   335,   336,   337,
      65,   127,   106,   106,   128,   902,   903,   348,   349,   478,
     320,   321,   322,   645,   646,   132,   924,   925,   109,   720,
     133,   477,   401,   336,   337,   109,   363,   136,   298,   106,
     477,   106,    66,   319,   102,   628,   372,   363,   789,   760,
     685,   102,   691,   372,   477,   792,   144,   372,   479,   825,
     340,   341,   584,    28,   644,   109,   109,    67,    68,    69,
      70,    71,    72,    73,   139,   793,   794,   152,   480,   860,
     861,   102,   102,   156,   519,   761,   762,   866,   867,   479,
     929,   930,   109,   519,   109,   159,   423,   424,   905,   906,
     476,   154,   481,   162,   236,   235,   237,   519,   102,   476,
     102,   431,   432,   478,   318,   787,   291,   296,   297,   298,
     317,   720,   478,   476,   350,   319,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   313,   233,   332,   333,   314,
     351,   352,   353,   361,   371,   372,   373,   374,   417,   418,
     419,   420,   420,   420,   420,   375,   376,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   378,   420,   381,
     384,   387,   402,   303,   480,   404,   484,   405,   743,   106,
     106,   407,   415,   479,   106,   525,   532,   545,   546,   816,
     784,   785,   479,   548,   549,   788,   557,   558,   481,   559,
     561,   565,   566,   568,   592,   480,   593,   817,   594,   673,
     598,   599,   602,   363,   417,   627,   607,   879,   879,   608,
     611,   630,   631,   684,   636,   647,   648,   680,   677,   481,
     681,   675,   109,   109,   715,   649,   725,   109,   743,   716,
     718,   737,   796,   799,   482,   609,   741,   726,   102,   102,
     735,   728,   753,   102,   747,   778,   757,   772,   640,   758,
     115,   759,   765,   766,   388,   783,   786,   795,   811,   823,
     814,   790,   484,   793,   820,   794,   914,   915,   821,   822,
     829,   233,   478,   385,   921,   922,   478,   478,   826,   803,
     393,   836,   748,   844,   478,   478,   840,   845,   847,   480,
     477,   855,   862,   484,   864,   865,   868,   233,   480,   873,
     874,   414,   888,   892,   896,   891,   897,   901,   867,   866,
     926,   910,   106,   481,   911,   776,   416,   913,   869,   871,
     927,   919,   481,   907,   478,   920,   928,   931,   637,   551,
     482,   477,   155,   556,   294,   433,   437,   547,   233,   435,
     295,   483,   479,   519,   436,   438,   479,   479,   434,   632,
     894,   633,   634,   635,   479,   479,   739,   683,   782,   476,
     893,   482,   809,   478,   478,   109,   478,   887,   690,   233,
     536,   895,   478,   603,   763,   120,   857,   485,   842,   575,
     764,   102,    27,   148,   519,   916,   917,   484,   823,    64,
     555,   555,   362,   524,   479,   791,   484,   801,   798,   881,
     476,   379,   382,   527,   918,   872,    53,   478,   165,   288,
       0,     0,     0,   478,   870,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   478,
     478,     0,     0,   479,   479,     0,   479,   483,     0,   724,
       0,     0,   479,     0,     0,     0,     0,     0,   600,     0,
     600,     0,     0,     0,     0,   482,     0,     0,   480,     0,
       0,     0,   480,   480,   482,     0,     0,     0,   483,     0,
     480,   480,     0,   485,     0,     0,     0,   479,     0,     0,
       0,     0,   481,   479,     0,     0,   481,   481,     0,     0,
       0,     0,     0,     0,   481,   481,     0,    33,     0,   479,
     479,     0,     0,     0,   485,     0,     0,   621,     0,     0,
     480,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,     0,   481,     0,    36,    37,     0,     0,
       0,   638,    38,     0,    39,    40,    41,    42,     0,   480,
     480,    43,   480,     0,     0,    44,   484,     0,   480,     0,
     484,   484,   483,     0,     0,     0,     0,    45,   484,   484,
      46,   483,    47,   481,   481,     0,   481,     0,   621,     0,
     697,   699,   481,     0,   702,     0,     0,     0,     0,   710,
     697,     0,     0,   480,     0,     0,     0,     0,   485,   480,
       0,     0,     0,     0,     0,     0,     0,   485,   484,     0,
       0,     0,     0,   536,     0,   480,   480,   481,     0,     0,
       0,     0,     0,   481,   482,     0,     0,     0,   482,   482,
       0,   536,     0,     0,     0,     0,   482,   482,     0,   481,
     481,     0,     0,     0,     0,     0,   441,   484,   484,     0,
     484,     0,     0,     0,     0,    82,   484,    83,     0,     0,
      84,     0,    59,   442,     0,    85,     0,    60,     0,    86,
       0,    61,   443,   444,     0,     0,   482,     0,    87,     0,
       0,     0,     0,   445,     0,    88,    62,     0,     0,     0,
      89,   484,     0,     0,    90,     0,     0,   484,     0,     0,
       0,     0,     0,   777,     0,    91,     0,    92,   621,     0,
       0,    93,    63,   484,   484,   482,   482,     0,   482,    94,
      95,     0,     0,    96,   482,     0,   446,     0,     0,   697,
       0,   483,     0,   697,   697,   483,   483,     0,     0,     0,
       0,  -304,     0,   483,   483,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,   482,
     447,     0,     0,     0,     0,   482,     0,   485,     0,     0,
       0,   485,   485,    34,     0,     0,     0,     0,     0,   485,
     485,   482,   482,   483,     0,   841,    35,     0,     0,     0,
      36,    37,     0,   846,     0,     0,    38,     0,    39,    40,
      41,    42,     0,     0,     0,    43,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   485,
       0,    45,   483,   483,    46,   483,    47,     0,     0,     0,
     621,   483,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,    83,     0,     0,    84,     0,     0,     0,
       0,    85,     0,     0,     0,    86,     0,     0,   485,   485,
       0,   485,     0,     0,    87,     0,   483,   485,     0,     0,
       0,    88,   483,     0,     0,     0,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,   483,   483,
       0,    91,     0,    92,     0,     0,     0,    93,     0,     0,
       0,     0,   485,     0,     0,    94,    95,     0,   485,    96,
       0,     0,    97,     0,     0,     0,     0,     0,   454,     0,
     167,   168,   169,   170,   485,   485,   171,    82,   455,    83,
     848,     0,    84,   456,     0,   457,   458,    85,   849,     0,
     459,    86,     0,     0,     0,     0,     0,   173,     0,   460,
      87,   461,   462,   463,   464,     0,     0,    88,     0,     0,
       0,   465,    89,     0,   174,   175,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   466,    91,     0,    92,
     176,     0,     0,    93,     0,   467,   177,   468,   178,   469,
     179,    94,    95,   470,   471,    96,   472,     0,   292,     0,
     473,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   363,     0,   181,     0,     0,
       0,   474,     0,     0,   182,   183,   184,     0,     0,   185,
       0,   186,   187,     0,   454,     0,   167,   168,   169,   170,
       0,     0,   171,    82,   455,    83,     0,     0,    84,   456,
       0,   457,   458,    85,   188,   189,   459,    86,     0,     0,
       0,     0,     0,   173,     0,   460,    87,   461,   462,   463,
     464,     0,     0,    88,     0,     0,     0,   465,    89,     0,
     174,   175,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   466,    91,     0,    92,   176,     0,     0,    93,
       0,   467,   177,   468,   178,   469,   179,    94,    95,   470,
     471,    96,   472,     0,   292,     0,   473,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   363,     0,   181,     0,     0,     0,   474,     0,     0,
     182,   183,   184,     0,     0,   185,     0,   186,   187,     0,
      55,     0,   167,   168,   169,   170,     0,     0,   171,    82,
     455,    83,     0,     0,    84,   456,     0,     0,   458,    85,
     188,   189,   459,    86,     0,     0,     0,     0,     0,   173,
       0,   460,    87,   461,   462,   463,   464,     0,     0,    88,
       0,     0,     0,   465,    89,     0,   174,   175,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   466,    91,
       0,    92,   176,     0,     0,    93,     0,   467,   177,   468,
     178,   469,   179,    94,    95,   470,   471,    96,   472,     0,
       0,     0,   473,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   363,     0,   181,
       0,     0,     0,   474,     0,     0,   182,   183,   184,     0,
       0,   185,     0,   186,   187,    55,     0,   167,   168,   169,
     170,     0,     0,   171,    82,     0,    83,     0,     0,    84,
     172,     0,     0,     0,    85,     0,   188,   189,    86,     0,
       0,     0,     0,     0,   173,     0,     0,    87,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
       0,   174,   175,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,     0,    92,   176,   535,     0,
      93,     0,     0,   177,     0,   178,     0,   179,    94,    95,
     180,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   388,   722,   181,     0,     0,     0,     0,     0,
       0,   182,   183,   184,     0,     0,   185,     0,   186,   187,
      55,     0,   167,   168,   169,   170,     0,     0,   171,    82,
       0,    83,     0,     0,    84,   172,     0,     0,     0,    85,
       0,   188,   189,    86,     0,     0,     0,     0,     0,   173,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,     0,   174,   175,    90,     0,
     408,     0,     0,     0,     0,     0,     0,   409,     0,    91,
       0,    92,   176,     0,     0,    93,     0,     0,   177,     0,
     178,     0,   179,    94,    95,   180,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,   167,   168,
     169,   170,     0,     0,   171,    82,     0,    83,     0,   181,
      84,   172,     0,     0,     0,    85,   182,   183,   184,    86,
       0,   185,     0,   186,   187,   173,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   174,   175,    90,     0,   188,   189,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    92,   176,   535,
       0,    93,     0,     0,   177,     0,   178,     0,   179,    94,
      95,   180,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   388,     0,   181,     0,     0,     0,     0,
       0,     0,   182,   183,   184,     0,     0,   185,     0,   186,
     187,    55,     0,   167,   168,   169,   170,     0,     0,   171,
      82,     0,    83,     0,     0,    84,   172,     0,     0,     0,
      85,     0,   188,   189,    86,     0,     0,     0,     0,     0,
     173,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   174,   175,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   176,     0,     0,    93,     0,     0,   177,
       0,   178,     0,   179,    94,    95,   180,     0,    96,     0,
       0,   299,     0,     0,     0,     0,     0,    55,     0,   167,
     168,   169,   170,     0,     0,   171,    82,     0,    83,     0,
     181,    84,   172,     0,     0,     0,    85,   182,   183,   184,
      86,     0,   185,     0,   186,   187,   173,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   174,   175,    90,     0,   188,   189,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   176,
       0,     0,    93,     0,     0,   177,     0,   178,     0,   179,
      94,    95,   180,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   550,     0,     0,
       0,     0,     0,   182,   183,   184,     0,     0,   185,     0,
     186,   187,    55,     0,   167,   168,   169,   170,     0,     0,
     171,    82,     0,    83,     0,     0,    84,   172,     0,     0,
       0,    85,     0,   188,   189,    86,     0,     0,     0,     0,
       0,   173,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,     0,   174,   175,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,   176,     0,     0,    93,     0,     0,
     177,     0,   178,     0,   179,    94,    95,   180,     0,    96,
       0,     0,   292,     0,     0,     0,     0,     0,    55,     0,
     167,   168,   169,   170,     0,     0,   171,    82,     0,    83,
       0,   181,    84,   172,     0,     0,     0,    85,   182,   183,
     184,    86,     0,   185,     0,   186,   187,   173,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   174,   175,    90,     0,   188,   189,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
     176,     0,     0,    93,     0,     0,   177,     0,   178,     0,
     179,    94,    95,   180,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,   167,   168,   169,   170,
       0,     0,   171,    82,     0,    83,     0,   181,    84,   172,
       0,     0,     0,    85,   182,   183,   184,    86,     0,   185,
       0,   186,   187,   173,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,     0,
     174,   175,    90,     0,   188,   189,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,   176,     0,     0,    93,
       0,     0,   177,     0,   178,   441,   179,    94,    95,   180,
       0,    96,     0,     0,    82,     0,    83,     0,     0,    84,
       0,    59,   442,     0,    85,     0,    60,     0,    86,     0,
      61,   443,   444,   181,     0,     0,     0,    87,     0,     0,
       0,     0,   445,     0,    88,    62,     0,   186,   187,    89,
       0,     0,     0,    90,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    82,    91,    83,    92,     0,    84,     0,
      93,    63,     0,    85,     0,     0,     0,    86,    94,    95,
     528,     0,    96,     0,     0,   446,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,    55,    89,     0,
       0,     0,    90,     0,     0,     0,    82,     0,    83,     0,
       0,    84,     0,    91,     0,    92,    85,     0,     0,    93,
      86,    55,     0,     0,     0,     0,     0,    94,    95,    87,
      82,    96,    83,     0,   529,    84,    88,     0,     0,     0,
      85,    89,     0,     0,    86,    90,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    91,    33,    92,     0,
      88,     0,    93,     0,     0,    89,     0,     0,     0,    90,
      94,    95,     0,     0,    96,     0,     0,   292,     0,    34,
      91,     0,    92,     0,     0,     0,    93,     0,     0,     0,
       0,     0,    35,     0,    94,    95,     0,    37,    96,     0,
       0,   391,    38,     0,    39,    40,    41,    42,     0,     0,
       0,    43,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,     0,    47
};

static const yytype_int16 yycheck[] =
{
       3,     1,   101,    74,   295,   490,   181,    60,   357,   108,
     109,   593,    15,   596,   152,   574,   562,    15,    60,     4,
     794,   795,     4,   598,   162,   162,     3,     3,     3,    29,
       4,   475,   162,   608,   162,   162,    36,   386,   162,   162,
       1,     0,     4,   119,   162,   162,    12,   101,    99,   103,
      98,    82,   123,    99,     1,   109,   102,    11,   109,   107,
      60,   238,   836,   139,     4,   136,   625,   121,   139,     3,
     123,   142,     4,     1,    74,   459,    60,     3,     4,    53,
       4,     4,   631,     4,     4,     4,     4,    72,   862,     1,
       4,     4,    46,     4,     4,     4,     4,   274,    72,   584,
     649,   647,    17,   241,   300,   301,    72,     1,     1,     1,
      72,    99,    52,     1,     1,     0,   104,   120,     4,    34,
     564,   174,     4,   123,     1,   101,   246,   112,   181,    69,
     112,   677,   174,     1,   109,   112,   136,   112,   112,   139,
      99,     4,   142,   726,    33,   148,   107,   285,   285,   152,
     148,   105,   106,   156,   928,   285,   159,   285,   285,   162,
     107,   285,   285,   338,   339,   236,   237,   285,   285,   715,
     716,   753,   747,    99,   174,   109,     4,   103,   112,   107,
     112,   181,   136,   137,     3,    74,   112,     1,   112,   112,
     174,   112,   112,   112,   112,   107,   295,   181,   112,   112,
       1,   112,   112,   112,   112,   304,    98,   403,     1,    99,
      98,    98,   104,   107,   107,   107,   105,   106,   100,   107,
     107,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     107,   120,    99,   673,   821,   822,   236,   237,   241,   107,
     680,   130,   131,   296,   297,   134,   135,   136,   137,     1,
       1,   140,   141,   593,   296,   297,     1,     4,     1,     1,
       1,     1,   844,   845,   267,   848,   825,   607,    99,    16,
      20,   109,     1,   860,   861,    25,   103,    24,   718,    29,
      99,   112,   285,   136,   103,   112,   139,   109,     1,   342,
     343,   109,    99,   107,    44,   103,   296,   297,   101,   121,
     342,   343,   109,   101,   112,    98,   107,   360,   108,   107,
     363,   104,   296,   297,   107,   368,   103,   370,   360,    99,
      70,   880,   881,   103,   377,   112,   368,   380,   370,   104,
     450,   289,    98,   453,   100,   377,   456,   112,   380,   926,
     927,    99,   342,   343,   102,     4,    98,    98,   103,   469,
     470,   471,   104,   104,   109,   107,   107,   315,   342,   343,
     360,     4,   107,   363,   107,   107,   107,   107,   368,    98,
     370,   107,   375,   757,   758,   104,   360,   377,   107,   363,
     380,   765,   766,   236,   368,    98,   370,   104,     4,   442,
     443,   104,   363,   377,   107,   112,   380,   101,   356,   108,
     442,   443,    15,   107,   457,    18,   101,   153,   104,   894,
      16,   157,   107,   101,   160,   457,   112,   163,    24,   107,
     519,   805,    99,     4,    54,   102,    56,    98,   719,   387,
      43,    61,    98,   104,   101,    48,    99,   490,   104,   102,
     107,    99,   442,   443,   102,    98,   446,   100,   448,    98,
      63,   100,    65,   344,   345,   346,   347,   457,   442,   443,
     110,   111,   363,   847,    77,    78,    99,    99,    81,   102,
     102,    99,   112,   457,   102,   528,    99,    99,    99,   102,
     102,   102,   535,   101,    99,   103,   528,   102,   459,    99,
     490,    99,   102,   535,   102,   182,   183,   184,   185,   186,
     187,   188,   189,    98,   888,   100,   490,   112,   113,   114,
      30,   112,   565,   566,     3,   864,   865,   134,   135,   490,
     140,   141,   142,   565,   566,     4,   910,   911,   528,   628,
     108,   584,   112,   113,   114,   535,   101,   108,   103,   592,
     593,   594,    62,    98,   528,   100,    98,   101,   100,   103,
     592,   535,   594,    98,   607,   100,   103,    98,   459,   100,
     130,   131,   108,   109,   564,   565,   566,    87,    88,    89,
      90,    91,    92,    93,   108,    94,    95,   101,   363,    94,
      95,   565,   566,   101,   584,   705,   706,    96,    97,   490,
     921,   922,   592,   593,   594,   101,   340,   341,   867,   868,
     584,   103,   363,   101,    98,   102,    98,   607,   592,   593,
     594,   348,   349,   584,   104,   735,   103,   103,   103,   103,
     103,   720,   593,   607,   115,    98,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   109,   144,   132,   133,   109,
     120,   116,   138,   102,   104,    98,     4,   102,   335,   336,
     337,   338,   339,   340,   341,    98,    50,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   102,   355,   102,
       4,    99,   104,   181,   459,     4,   363,     4,   681,   732,
     733,     4,     4,   584,   737,   121,   104,   104,   104,   760,
     732,   733,   593,   104,   104,   737,    98,   104,   459,   108,
     104,    53,    53,     4,   103,   490,   103,   760,   103,    99,
     103,   103,   103,   101,   401,   104,   103,   837,   838,   103,
     102,   102,    98,    86,   104,   103,   103,    99,   103,   490,
     101,    98,   732,   733,   103,   121,   104,   737,   741,   103,
      99,   103,   745,   746,   363,     4,   101,   121,   732,   733,
     104,    98,    98,   737,   103,   108,   104,   101,     4,   104,
     760,   104,   104,   104,   101,   101,   104,   102,    42,   772,
     101,   104,   459,    94,   102,    95,   896,   897,   104,   104,
     783,   289,   753,   291,   904,   905,   757,   758,   100,   121,
     298,   102,     4,     1,   765,   766,   104,   107,    28,   584,
     853,     4,   102,   490,   103,   103,   102,   315,   593,   104,
     104,   319,   104,   102,   104,   108,   104,   101,    97,    96,
      95,   104,   875,   584,   104,   720,   334,   108,   831,   832,
      94,   104,   593,   875,   805,   104,   102,   104,   557,   402,
     459,   894,   133,   409,   174,   350,   354,   397,   356,   352,
     174,   363,   753,   853,   353,   355,   757,   758,   351,   546,
     853,   548,   549,   550,   765,   766,   675,   588,   728,   853,
     851,   490,   752,   844,   845,   875,   847,   845,   593,   387,
     388,   853,   853,   468,   707,    79,   817,   363,   804,   448,
     707,   875,     4,   120,   894,   898,   899,   584,   901,    49,
     408,   409,   241,   372,   805,   741,   593,   746,   745,   838,
     894,   267,   285,   375,   901,   832,    24,   888,   142,   164,
      -1,    -1,    -1,   894,   831,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   910,
     911,    -1,    -1,   844,   845,    -1,   847,   459,    -1,   636,
      -1,    -1,   853,    -1,    -1,    -1,    -1,    -1,   466,    -1,
     468,    -1,    -1,    -1,    -1,   584,    -1,    -1,   753,    -1,
      -1,    -1,   757,   758,   593,    -1,    -1,    -1,   490,    -1,
     765,   766,    -1,   459,    -1,    -1,    -1,   888,    -1,    -1,
      -1,    -1,   753,   894,    -1,    -1,   757,   758,    -1,    -1,
      -1,    -1,    -1,    -1,   765,   766,    -1,    10,    -1,   910,
     911,    -1,    -1,    -1,   490,    -1,    -1,   525,    -1,    -1,
     805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,   805,    -1,    49,    50,    -1,    -1,
      -1,   559,    55,    -1,    57,    58,    59,    60,    -1,   844,
     845,    64,   847,    -1,    -1,    68,   753,    -1,   853,    -1,
     757,   758,   584,    -1,    -1,    -1,    -1,    80,   765,   766,
      83,   593,    85,   844,   845,    -1,   847,    -1,   596,    -1,
     598,   599,   853,    -1,   602,    -1,    -1,    -1,    -1,   607,
     608,    -1,    -1,   888,    -1,    -1,    -1,    -1,   584,   894,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   593,   805,    -1,
      -1,    -1,    -1,   631,    -1,   910,   911,   888,    -1,    -1,
      -1,    -1,    -1,   894,   753,    -1,    -1,    -1,   757,   758,
      -1,   649,    -1,    -1,    -1,    -1,   765,   766,    -1,   910,
     911,    -1,    -1,    -1,    -1,    -1,     4,   844,   845,    -1,
     847,    -1,    -1,    -1,    -1,    13,   853,    15,    -1,    -1,
      18,    -1,    20,    21,    -1,    23,    -1,    25,    -1,    27,
      -1,    29,    30,    31,    -1,    -1,   805,    -1,    36,    -1,
      -1,    -1,    -1,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,   888,    -1,    -1,    52,    -1,    -1,   894,    -1,    -1,
      -1,    -1,    -1,   721,    -1,    63,    -1,    65,   726,    -1,
      -1,    69,    70,   910,   911,   844,   845,    -1,   847,    77,
      78,    -1,    -1,    81,   853,    -1,    84,    -1,    -1,   747,
      -1,   753,    -1,   751,   752,   757,   758,    -1,    -1,    -1,
      -1,     0,    -1,   765,   766,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   888,
     118,    -1,    -1,    -1,    -1,   894,    -1,   753,    -1,    -1,
      -1,   757,   758,    32,    -1,    -1,    -1,    -1,    -1,   765,
     766,   910,   911,   805,    -1,   803,    45,    -1,    -1,    -1,
      49,    50,    -1,   811,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   805,
      -1,    80,   844,   845,    83,   847,    85,    -1,    -1,    -1,
     848,   853,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    -1,   844,   845,
      -1,   847,    -1,    -1,    36,    -1,   888,   853,    -1,    -1,
      -1,    43,   894,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   910,   911,
      -1,    63,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,   888,    -1,    -1,    77,    78,    -1,   894,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,   910,   911,    12,    13,    14,    15,
      16,    -1,    18,    19,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,
      -1,   107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,
      -1,   117,   118,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    21,    22,    23,   140,   141,    26,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,
     110,   111,   112,    -1,    -1,   115,    -1,   117,   118,    -1,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,
     140,   141,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,   107,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    18,
      19,    -1,    -1,    -1,    23,    -1,   140,   141,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,
      69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,    -1,    -1,   115,    -1,   117,   118,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,    23,
      -1,   140,   141,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,   103,
      18,    19,    -1,    -1,    -1,    23,   110,   111,   112,    27,
      -1,   115,    -1,   117,   118,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,   140,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,
      -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,   115,    -1,   117,
     118,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,
      23,    -1,   140,   141,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,
      -1,    74,    -1,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,
     103,    18,    19,    -1,    -1,    -1,    23,   110,   111,   112,
      27,    -1,   115,    -1,   117,   118,    33,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    -1,
      -1,    -1,    -1,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    23,    -1,   140,   141,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,
      72,    -1,    74,    -1,    76,    77,    78,    79,    -1,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      -1,   103,    18,    19,    -1,    -1,    -1,    23,   110,   111,
     112,    27,    -1,   115,    -1,   117,   118,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,   140,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      66,    -1,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,   103,    18,    19,
      -1,    -1,    -1,    23,   110,   111,   112,    27,    -1,   115,
      -1,   117,   118,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,   140,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    -1,    74,     4,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    13,    -1,    15,    -1,    -1,    18,
      -1,    20,    21,    -1,    23,    -1,    25,    -1,    27,    -1,
      29,    30,    31,   103,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    41,    -1,    43,    44,    -1,   117,   118,    48,
      -1,    -1,    -1,    52,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    63,    15,    65,    -1,    18,    -1,
      69,    70,    -1,    23,    -1,    -1,    -1,    27,    77,    78,
      30,    -1,    81,    -1,    -1,    84,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,     4,    48,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    13,    -1,    15,    -1,
      -1,    18,    -1,    63,    -1,    65,    23,    -1,    -1,    69,
      27,     4,    -1,    -1,    -1,    -1,    -1,    77,    78,    36,
      13,    81,    15,    -1,    84,    18,    43,    -1,    -1,    -1,
      23,    48,    -1,    -1,    27,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    63,    10,    65,    -1,
      43,    -1,    69,    -1,    -1,    48,    -1,    -1,    -1,    52,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    -1,    32,
      63,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    77,    78,    -1,    50,    81,    -1,
      -1,    84,    55,    -1,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    82,   272,   273,   281,   282,   283,   284,     4,   147,
     278,   279,     0,   274,   276,   285,   286,   287,   291,   337,
     347,   361,   368,   369,   370,   371,   380,   282,   109,   121,
       1,   107,     4,    10,    32,    45,    49,    50,    55,    57,
      58,    59,    60,    64,    68,    80,    83,    85,   288,   289,
     290,   274,   286,   371,    99,     4,   278,   109,   278,    20,
      25,    29,    44,    70,   290,    30,    62,    87,    88,    89,
      90,    91,    92,    93,   372,   373,   374,     1,   107,   101,
     280,     4,    13,    15,    18,    23,    27,    36,    43,    48,
      52,    63,    65,    69,    77,    78,    81,    84,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   278,
     304,     4,     4,     4,   148,   278,   375,   376,   378,   108,
     273,   107,   277,   108,   292,   293,   112,   112,     3,   160,
     160,   160,     4,   108,   362,   363,   108,   348,   349,   108,
     338,   339,    98,   100,   103,   377,   379,   275,   285,   148,
     156,   294,   101,   295,   103,   154,   101,   364,   294,   101,
     350,   294,   101,   340,   100,   376,   381,     6,     7,     8,
       9,    12,    19,    33,    50,    51,    66,    72,    74,    76,
      79,   103,   110,   111,   112,   115,   117,   118,   140,   141,
     145,   146,   152,   156,   164,   165,   166,   167,   168,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   209,   278,   102,    98,    98,   274,   287,
     296,   297,   298,   299,   300,   301,   302,   311,   318,   322,
     325,   330,   334,   277,   274,   303,   306,   307,   308,   310,
     274,   365,   366,   367,   277,   274,   351,   352,   353,   354,
     356,   357,   359,   277,   274,   287,   299,   300,   301,   311,
     318,   322,   325,   330,   341,   342,   343,   277,   381,    99,
     109,   103,    84,   149,   150,   158,   103,   103,   103,    84,
     152,   156,   196,   209,   278,   191,   191,   191,   191,   191,
     191,   191,   191,   109,   109,    99,   109,   103,   104,    98,
     140,   141,   142,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   132,   133,   208,   112,   113,   114,   110,   111,
     130,   131,    11,    46,   105,   106,   136,   137,   134,   135,
     115,   120,   116,   138,   119,   139,    99,   103,   294,   148,
     288,   102,   298,   101,   107,   214,   305,    54,    56,    61,
     309,   104,    98,     4,   102,    98,    50,   355,   102,   353,
     288,   102,   343,   172,     4,   209,   103,    99,   101,   344,
     149,    84,   149,   209,   112,   160,   193,   194,   195,   193,
     193,   112,   104,   160,     4,     4,   172,     4,    54,    61,
     162,   163,   169,   209,   209,     4,   209,   191,   191,   191,
     191,   196,   196,   197,   197,   149,   149,   198,   198,   198,
     198,   199,   199,   200,   201,   202,   203,   209,   204,   172,
     169,     4,    21,    30,    31,    41,    84,   118,   149,   323,
     326,   327,   329,   331,     4,    14,    19,    21,    22,    26,
      35,    37,    38,    39,    40,    47,    62,    71,    73,    75,
      79,    80,    82,    86,   107,   149,   152,   156,   168,   175,
     176,   178,   189,   190,   191,   207,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   225,   228,   229,   230,   231,
     232,   239,   240,   241,   242,   243,   251,   252,   253,   254,
     255,   256,   258,   259,   264,   265,   266,   267,   269,   278,
     149,   149,     1,   107,   307,   121,   102,   367,    30,    84,
     149,   100,   104,   169,   172,    67,   209,   223,   224,   344,
     345,   346,   104,   104,   104,   104,   104,   195,   104,   104,
     104,   188,   193,   100,   161,   209,   161,    98,   104,   108,
     100,   104,   103,   149,   149,    53,    53,   278,     4,     4,
      53,    72,   221,   222,   278,   279,   324,   384,   107,   214,
     335,   107,   214,   336,   108,     1,   107,   214,   149,     1,
     107,   213,   103,   103,   103,     4,    16,    24,   103,   103,
     209,   257,   103,   257,   214,   214,   214,   103,   103,     4,
     221,   102,   212,     1,   107,     1,   107,     1,   107,     4,
       4,   209,   210,   149,     4,     4,    72,   104,   100,   149,
     102,    98,   191,   191,   191,   191,   104,   163,   209,   303,
       4,   226,   227,   221,   278,   149,   149,   103,   103,   121,
      33,    74,   105,   106,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   120,   130,   131,   134,   135,   136,   137,
     140,   141,   328,    99,     1,    98,   107,   103,   384,    72,
      99,   101,   212,   226,    86,   149,   220,   229,   244,   247,
     250,   149,     1,   107,   210,     1,   107,   209,   211,   209,
       1,   107,   209,     1,   107,    17,    34,   260,   261,   263,
     209,   220,   268,   211,     4,   103,   103,   384,    99,   159,
     160,    99,   102,   223,   191,   104,   121,     1,    98,   107,
     107,   382,   103,   103,   303,   104,   223,   103,   306,   222,
     303,   101,   306,   274,   312,   315,   316,   103,     4,   270,
     271,     1,   107,    98,     4,     1,   107,   104,   104,   104,
     103,   214,   214,   261,   263,   104,   104,   101,   107,   360,
     303,   303,   101,   306,   180,   344,   159,   209,   108,   332,
     333,   210,   227,   101,   149,   149,   104,   214,   149,   100,
     104,   312,   100,    94,    95,   102,   274,   313,   316,   274,
     314,   315,   211,   121,    98,   104,   211,   245,   248,   245,
     229,    42,   213,   213,   101,   233,   148,   156,   213,   213,
     102,   104,   104,   274,   358,   100,   100,    12,    72,   274,
     319,   320,   321,     4,     4,     4,   102,   385,   385,   385,
     104,   209,   271,   213,     1,   107,   209,    28,    16,    24,
     234,   235,   236,   237,   238,     4,   262,   262,   360,   360,
      94,    95,   102,   384,   103,   103,    96,    97,   102,   274,
     321,   274,   320,   104,   104,    98,   104,   385,   107,   214,
     317,   317,     1,   107,   246,   249,   250,   246,   104,   213,
     210,   108,   102,   236,   216,   238,   104,   104,   360,   360,
     385,   101,   169,   169,   383,   383,   383,   149,   384,   384,
     104,   104,   213,   108,   214,   214,   274,   274,   358,   104,
     104,   214,   214,     4,   213,   213,    95,    94,   102,   382,
     382,   104,   360,   360,   385
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
     290,   290,   290,   290,   290,   291,   292,   292,   293,   293,
     293,   294,   294,   295,   296,   296,   297,   297,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   299,   299,
     300,   300,   301,   302,   302,   303,   303,   304,   304,   305,
     305,   306,   306,   307,   307,   308,   309,   309,   309,   310,
     311,   312,   312,   313,   313,   314,   314,   315,   316,   317,
     317,   318,   318,   319,   319,   320,   321,   322,   323,   323,
     324,   325,   326,   326,   327,   327,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   329,   329,
     330,   331,   332,   332,   333,   333,   334,   335,   335,   336,
     336,   337,   338,   338,   339,   340,   341,   341,   342,   342,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   344,
     344,   345,   345,   346,   346,   347,   348,   348,   349,   350,
     351,   351,   352,   352,   353,   353,   353,   353,   354,   354,
     355,   355,   356,   357,   358,   358,   358,   358,   359,   360,
     360,   361,   362,   362,   363,   364,   364,   365,   365,   366,
     366,   367,   367,   368,   368,   369,   370,   370,   371,   371,
     372,   372,   373,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   375,   375,   376,   377,   377,   378,   379,   380,
     381,   382,   383,   384,   385
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
       1,     1,     1,     1,     1,     7,     0,     1,     2,     2,
       4,     1,     3,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     6,
       5,     5,     2,     7,     7,     0,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     4,     0,     1,     1,     4,
       9,     2,     2,     0,     1,     0,     1,     5,     5,     1,
       1,     6,    10,     2,     2,     5,     5,     8,     5,     5,
       2,     4,     1,     1,     7,    10,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     7,
       4,     5,     0,     1,     5,     5,     7,     1,     1,     1,
       1,     7,     0,     1,     2,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     0,     1,     1,     3,     7,     0,     1,     2,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     8,     8,
       0,     1,     9,    12,     3,     3,     6,     6,     6,     1,
       2,     7,     0,     1,     2,     3,     4,     0,     1,     1,
       3,     2,     4,     9,     9,     1,     1,     2,     6,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     0,     1,     1,     3,     0,
       0,     0,     0,     0,     0
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
        case 549:
#line 1182 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ }
#line 2544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1185 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ }
#line 2550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1188 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ }
#line 2556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1191 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/ }
#line 2562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1194 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/ }
#line 2568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1197 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/ }
#line 2574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 2578 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1202 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




