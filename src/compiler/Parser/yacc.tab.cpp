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
#line 34 "yacc.y" /* yacc.c:355  */

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
#define YYLAST   2912

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  242
/* YYNRULES -- Number of rules.  */
#define YYNRULES  555
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  943

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
       0,   106,   106,   107,   108,   109,   110,   111,   114,   115,
     121,   124,   128,   129,   132,   133,   136,   137,   138,   141,
     142,   145,   146,   147,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   161,   162,   165,   166,   169,   170,   173,
     174,   175,   178,   179,   182,   186,   190,   191,   194,   195,
     196,   199,   200,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   217,   220,   221,   222,   225,
     226,   229,   230,   233,   234,   237,   238,   241,   242,   245,
     248,   249,   252,   255,   258,   261,   264,   265,   268,   269,
     272,   273,   276,   279,   282,   285,   288,   291,   292,   293,
     294,   295,   298,   299,   300,   301,   304,   307,   310,   311,
     312,   313,   314,   315,   316,   324,   325,   326,   327,   328,
     329,   332,   333,   336,   337,   340,   341,   344,   345,   346,
     347,   350,   351,   352,   355,   356,   357,   360,   361,   362,
     363,   364,   365,   366,   369,   370,   371,   374,   375,   378,
     379,   382,   383,   386,   387,   390,   391,   394,   395,   398,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   414,   415,   418,   421,   425,   426,   427,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   445,   448,   449,   453,   454,   457,   460,   463,   464,
     465,   466,   469,   472,   473,   476,   477,   480,   481,   482,
     485,   488,   491,   492,   495,   498,   499,   502,   503,   504,
     505,   506,   507,   508,   511,   512,   515,   516,   519,   522,
     525,   526,   529,   530,   533,   536,   537,   540,   541,   544,
     545,   546,   547,   550,   553,   556,   557,   560,   561,   562,
     565,   566,   569,   570,   573,   574,   577,   578,   581,   584,
     587,   588,   591,   594,   595,   596,   597,   598,   601,   602,
     605,   606,   609,   610,   611,   612,   613,   614,   617,   618,
     621,   622,   625,   626,   629,   630,   631,   634,   635,   638,
     639,   640,   643,   644,   647,   650,   653,   656,   659,   662,
     663,   667,   670,   671,   674,   677,   678,   681,   682,   685,
     686,   689,   690,   693,   696,   697,   706,   707,   710,   711,
     714,   717,   718,   721,   722,   725,   726,   729,   730,   733,
     734,   737,   738,   741,   742,   743,   744,   745,   756,   757,
     760,   761,   764,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   781,   784,   785,   788,
     789,   790,   793,   794,   797,   800,   801,   804,   805,   808,
     809,   810,   811,   812,   813,   814,   815,   816,   818,   821,
     822,   825,   826,   829,   833,   834,   837,   838,   841,   842,
     845,   846,   849,   850,   853,   854,   857,   860,   861,   862,
     866,   869,   875,   876,   879,   880,   883,   884,   887,   893,
     899,   900,   903,   904,   910,   911,   914,   920,   926,   932,
     934,   937,   941,   944,   945,   948,   949,   952,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   976,
     977,   980,   983,   986,   987,   990,   991,  1007,  1010,  1011,
    1014,  1015,  1020,  1023,  1024,  1027,  1030,  1033,  1034,  1037,
    1038,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1050,
    1055,  1056,  1059,  1060,  1063,  1064,  1069,  1072,  1073,  1076,
    1079,  1082,  1083,  1086,  1087,  1090,  1091,  1092,  1093,  1097,
    1098,  1101,  1102,  1105,  1111,  1119,  1120,  1121,  1122,  1125,
    1130,  1131,  1136,  1139,  1140,  1143,  1146,  1147,  1150,  1151,
    1154,  1155,  1158,  1159,  1164,  1165,  1170,  1173,  1174,  1177,
    1178,  1181,  1182,  1185,  1188,  1189,  1190,  1191,  1192,  1193,
    1194,  1195,  1196,  1199,  1200,  1203,  1206,  1207,  1210,  1213,
    1220,  1223,  1226,  1229,  1232,  1235
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

#define YYTABLE_NINF -551

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -30,    52,    96,   161,   -30,  -775,  -775,  -775,    10,    99,
    -775,   219,  -775,   829,  -775,   118,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   161,  -775,   270,  -775,  -775,   342,
    -775,  -775,   257,  -775,  -775,  -775,   342,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,    24,   395,
    -775,  2827,  -775,  -775,   525,   281,   101,  -775,   301,   415,
    2730,   419,   429,   447,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   342,  -775,   357,  -775,  -775,   -30,
     365,   369,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,   375,  -775,   381,
    -775,   507,  -775,  -775,  -775,  -775,  -775,  -775,   507,   507,
     493,   405,   425,   434,  -775,  -775,   341,  -775,   448,  -775,
     157,  -775,  -775,   216,   456,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,   457,   481,   466,  -775,   342,   510,  -775,   342,
     526,  -775,    34,  -775,  2457,  -775,  -775,   435,   237,  -775,
     483,   485,   260,   365,   274,  -775,   283,   365,   485,   296,
     365,   485,   313,   365,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,   -38,   523,  -775,  2773,  -775,   527,  -775,  -775,   528,
     529,  2170,  2457,  2457,  2457,  2457,  2457,  2457,  2457,  2457,
    -775,  -775,   519,   530,   152,   534,  -775,  -775,  -775,  -775,
     536,   540,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,   361,  -775,  -775,  -775,   575,
    -775,   406,   239,   168,    35,   436,   531,   522,   532,   505,
     127,  -775,  -775,  -775,    27,  -775,   342,   342,   395,  -775,
     543,   333,  -775,  -775,  -775,  -775,   169,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   320,   546,   553,  -775,  -775,  -775,
     643,   550,   555,  -775,  -775,   612,   561,   335,  -775,  -775,
    -775,  -775,  -775,  -775,   395,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   565,   374,  -775,  -775,  -775,  2457,
     664,  2457,   375,   155,   570,   106,  2773,  2797,  2457,    40,
      23,    73,   413,   566,   262,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,   667,   668,  2457,   672,  1969,  -775,  2457,
    -775,  -775,   673,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  2457,  2457,  2457,  2457,  2457,  2457,
    2457,  2457,  2773,  2773,  2457,  2457,  2457,  2457,  2457,  2457,
    2457,  2457,  2457,  2457,  2457,  2457,  2457,  1969,   485,  -775,
    2614,  -775,  -775,  1623,  -775,  -775,  -775,  -775,  2773,  -775,
    2773,   102,   161,   557,  -775,   380,  -775,  1380,  -775,  -775,
    2681,  -775,  -775,   349,  -775,   578,  1969,  2457,  2055,  -775,
     229,   236,   267,   579,  -775,  -775,   580,    40,  -775,   582,
     583,  2256,  2543,    40,  -775,  -775,   358,  -775,  2457,  2457,
     590,  -775,   585,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,   406,   406,   239,   239,   381,   381,   168,   168,   168,
     168,    35,    35,   436,   531,   522,   532,   584,   505,   409,
     586,   218,  2773,  2773,   641,   652,    68,   702,    61,  -775,
     285,  -775,  -775,   292,   482,   105,   420,  2773,   107,  1739,
     607,    98,   608,    38,   609,   610,  2457,   611,  2457,   614,
     431,   614,   613,   615,  -775,    74,   519,   530,   120,   137,
     183,   188,   203,   204,   575,  -775,  -775,  -775,  -775,   617,
    1623,  -775,  -775,  -775,   121,   124,  -775,   186,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,    76,
      78,    79,  -775,  -775,  -775,  2457,  -775,  -775,  2773,    80,
      71,  -775,  -775,   616,   445,  2773,  -775,  -775,  -775,  -775,
     621,   619,  -775,  -775,  -775,  -775,  2457,  -775,  2457,  2457,
    2457,  -775,   620,  -775,  -775,  -775,  -775,  1969,  -775,  2457,
    -775,  -775,   274,    81,    82,  2773,  2773,   622,   624,   154,
    1151,   629,   123,  -775,   626,    44,   632,   631,  -775,  -775,
    -775,  -775,  -775,  -775,  1623,  -775,  -775,  -775,    81,  -775,
    -775,   647,  2773,  2371,  2371,  2773,   225,  2457,   228,  2457,
    2457,  -775,   238,  2457,   244,    95,  -775,  -775,  2371,  2457,
     625,   638,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,    83,   635,   639,   642,  -775,   507,
     -49,  -775,  1854,  -775,  -775,  -775,  -775,  2457,  -775,  -775,
     644,   628,   224,  -775,   193,  -775,   212,   222,   274,   646,
    2055,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,   640,   161,  -775,   743,  -775,   274,   650,
    -775,   161,   161,  -775,   654,   651,    84,  -775,  -775,   648,
    -775,   655,   246,    85,  -775,  -775,   247,  -775,  -775,  -775,
     653,   656,  -775,  -775,   657,  -775,  -775,   446,   614,    95,
    -775,  -775,  -775,  -775,   658,   661,   299,   274,   274,   665,
     161,   666,   507,  2457,  -775,  -775,  -775,   662,  2457,  -775,
     752,  -775,  -775,   670,  2773,  2773,   669,   614,  -775,  2773,
     463,  -775,   677,   161,   477,   491,   675,   386,   387,  2457,
     637,   309,  -775,  2457,  2457,  2457,  2457,   717,  -775,  -775,
    1739,  1739,   681,   216,  -775,  -775,  -775,  -775,  1739,  1739,
     682,  -775,  -775,   683,   684,   161,   480,  -775,  -775,  -775,
     674,    33,  -775,  -775,  -775,  -775,   161,    86,    87,  -775,
    -775,    88,  -775,  -775,   688,  -775,  -775,  -775,  -775,   690,
    -775,  -775,   692,  -775,  -775,   687,  2457,   788,  1739,  -775,
     686,  -775,  -775,   793,   689,  2457,   767,  -775,   304,  -775,
     796,   796,  -775,  -775,  -775,   299,   299,   494,   695,  -775,
    -775,   698,   699,   500,   701,   161,   161,   710,   711,   310,
    -775,   321,   321,  -775,   251,  -775,  -775,  -775,  2457,  2457,
    2457,   724,  1739,  2457,   697,   704,   304,  -775,  1507,  -775,
    -775,   726,   727,  -775,  -775,   299,   299,  -775,   733,  1969,
    1969,  -775,  -775,  -775,   739,  -775,   741,  -775,  -775,  -775,
    2773,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   840,
    -775,   655,   738,   740,  1739,  -775,   735,  -775,  -775,  -775,
    1623,  -775,   614,   614,   392,   393,  -775,   161,   744,   745,
     614,   614,  -775,    91,  -775,  -775,  1739,  1739,  1739,  -775,
    -775,  -775,  -775,   750,   756,   749,  -775,  -775,  -775,  -775,
     748,  -775,  -775,  -775,   299,   299,  -775,  -775,  -775,  -775,
    -775,  -775,  -775
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     307,     0,     0,   309,   308,   321,   323,   324,   316,     0,
      10,     0,     1,   338,   331,   309,   329,   332,   333,   334,
     335,   336,   337,   310,   526,   527,     0,   322,   318,     0,
     328,   327,   317,   342,   343,   344,     0,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,     0,   339,
     340,   338,   330,   528,   531,   316,     0,   319,     0,     0,
       0,     0,     0,     0,   341,   536,   541,   534,   535,   537,
     538,   539,   540,   542,     0,   532,     0,   326,   325,   307,
     314,   357,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   389,    15,   388,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   513,   487,   463,   548,    11,     0,   543,   546,   533,
     309,   315,   313,     0,     0,   358,    38,    37,    44,    40,
      39,    41,     0,     0,     0,   514,     0,     0,   488,     0,
       0,   464,     0,   551,    75,   545,   547,     0,   309,   362,
     359,   360,   309,   314,   309,   515,   309,   314,   489,   309,
     314,   465,   309,   314,   551,   544,   529,     3,     4,     5,
       6,     0,     0,     9,     0,     7,     0,    79,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     2,     0,     0,    97,    52,    51,    55,    56,    57,
       0,    76,    58,    59,    99,   100,    60,    84,    54,    61,
      63,    64,   101,   114,    62,   102,   108,   112,   113,   127,
     105,   131,   134,   137,   144,   147,   149,   151,   153,   155,
     157,   171,   172,    77,    98,   320,     0,     0,   338,   378,
       0,   309,   367,   369,   370,   371,     0,   372,   373,   374,
     375,   376,   377,   356,   397,     0,   387,   392,   394,   395,
       0,     0,   519,   520,   512,   501,     0,   309,   493,   495,
     496,   498,   497,   486,   338,   479,   471,   472,   473,   474,
     475,   476,   477,   478,     0,   309,   469,   462,   530,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,   121,
     121,   121,   131,     0,    98,   109,   110,   111,    95,   103,
     104,   106,   107,     0,     0,     0,     0,    71,   549,     0,
      82,    83,     0,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,   361,   363,
       0,   364,   368,   192,   391,   390,   383,   399,     0,   398,
       0,     0,   309,   522,   516,   309,   502,     0,   490,   494,
       0,   466,   470,     0,    80,     0,    71,     0,   482,    87,
       0,     0,     0,     0,   126,   125,     0,   122,   123,     0,
       0,     0,    65,   121,    67,    68,     0,    66,     0,     0,
      72,    46,     0,    48,    78,    94,   159,   128,   129,   130,
     127,   132,   133,   135,   136,   143,   142,   139,   138,   140,
     141,   145,   146,   148,   150,   152,   154,     0,   156,     0,
       0,   316,     0,     0,     0,     0,     0,     0,     0,   554,
       0,   423,   424,     0,   316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   280,     0,   280,     0,
       0,     0,     0,     0,   196,     0,    16,    17,    56,    99,
     100,    84,   112,   113,     0,   219,   194,   177,   178,     0,
     193,   179,   175,   176,     0,     0,   180,     0,   181,   224,
     225,   182,   189,   239,   240,   241,   242,   183,   263,   264,
     265,   266,   267,   184,   185,   186,   187,   188,   190,    98,
       0,     0,   525,   524,   393,     0,   517,   521,     0,     0,
       0,    81,    92,     0,     0,     0,   207,   484,   209,   208,
       0,   483,    96,    91,    90,    93,     0,   124,     0,     0,
       0,   115,     0,    73,    50,    45,    49,     0,    69,     0,
      74,    70,   309,     0,     0,     0,     0,     0,     0,   205,
       0,     0,     0,   203,   554,     0,     0,     0,   459,   458,
     422,   461,   460,   451,     0,   269,   268,   295,     0,   271,
     270,     0,     0,   250,   250,     0,     0,     0,     0,     0,
       0,   281,     0,     0,     0,     0,   296,   243,     0,     0,
     205,   202,   191,   195,   200,   198,   201,   199,   216,   215,
     400,   396,   173,   523,     0,     0,   554,     0,    85,    42,
       0,   480,     0,   120,   118,   119,   116,     0,    47,   158,
       0,     0,     0,   212,     0,   552,     0,     0,   309,     0,
       0,   434,   433,   445,   446,   427,   428,   435,   436,   437,
     438,   439,   429,   430,   440,   441,   442,   443,   444,   448,
     447,   431,   432,     0,   309,   382,     0,   381,   309,     0,
     421,   309,   309,   197,   211,     0,     0,   256,   260,     0,
     251,   257,     0,     0,   275,   272,     0,   277,   274,   174,
       0,     0,   279,   278,     0,   283,   282,     0,     0,   284,
     287,   285,   300,   299,     0,     0,     0,   309,   309,     0,
     309,    88,    42,     0,   481,   485,   117,   453,     0,   380,
       0,   379,   412,     0,     0,     0,     0,     0,   206,     0,
       0,   204,     0,   309,     0,     0,     0,   309,   309,     0,
       0,     0,   302,   252,     0,   252,   252,     0,   276,   273,
       0,     0,     0,     0,   291,   294,   288,   286,     0,     0,
       0,   510,   509,     0,     0,   309,     0,    86,    89,    43,
       0,     0,   452,   454,   214,   213,   309,     0,     0,   385,
     457,     0,   419,   384,     0,   420,   555,   555,   555,     0,
     402,   405,     0,   403,   407,     0,     0,     0,     0,   258,
       0,   253,   261,     0,     0,     0,   226,   297,   230,   228,
     292,   292,   298,   244,   511,     0,     0,     0,     0,   554,
     210,     0,     0,     0,     0,   309,   309,     0,     0,     0,
     555,     0,     0,   418,     0,   304,   303,   301,   254,   254,
     254,     0,     0,     0,     0,     0,   231,   232,     0,   235,
     293,     0,     0,   500,   499,     0,     0,   555,     0,    71,
      71,   553,   553,   553,     0,   414,     0,   415,   450,   449,
       0,   425,   401,   411,   410,   554,   554,   246,   245,     0,
     255,   259,     0,     0,     0,   227,     0,   238,   229,   233,
     234,   236,     0,     0,   309,   309,   503,   309,     0,     0,
       0,     0,   413,     0,   408,   409,     0,     0,     0,   262,
     237,   290,   289,     0,     0,     0,   455,   456,   552,   552,
       0,   249,   248,   247,     0,     0,   555,   416,   417,   426,
     507,   508,   504
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -775,  -775,  -775,  -775,   -72,   -13,   679,  -775,    41,  -775,
     721,  -775,   -54,  -775,   685,   133,   -93,   454,  -775,   300,
    -775,  -775,  -775,  -775,  -344,  -353,  -775,  -775,   -12,  -775,
    -775,   185,   205,  -775,   278,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   464,   401,   572,   472,  -775,   -47,
    -775,   459,  -170,   258,   122,   252,   515,   518,   524,   517,
     520,  -775,  -775,   592,  -775,   549,  -584,  -579,  -480,  -456,
    -237,  -775,    19,  -775,  -775,  -775,  -314,  -436,   206,  -577,
    -775,  -775,   293,   160,  -775,  -576,  -775,  -775,  -775,  -775,
    -775,  -775,    29,  -775,    36,  -775,  -775,  -775,  -775,  -775,
     298,  -153,  -240,  -775,  -775,  -775,    26,  -775,  -775,  -775,
    -775,  -775,  -775,   427,  -775,  -775,  -775,   187,    77,   197,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,   100,  -775,   831,
      -3,  -775,  -775,   234,     0,   460,  -775,  -775,   907,  -775,
    -775,   795,    -1,  -130,  -197,  -775,   864,  -775,  -775,  -775,
     -26,  -775,  -775,  -775,   676,  -137,  -135,  -134,  -775,  -541,
    -775,  -775,  -403,   544,  -775,  -775,  -775,  -131,   175,  -775,
    -775,   171,   173,    90,  -128,  -775,    89,    92,  -127,  -775,
    -775,  -125,  -775,  -775,  -775,  -775,  -122,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   645,
    -290,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   659,
    -775,  -775,  -775,  -775,    15,  -775,  -768,  -775,  -775,  -775,
    -775,  -775,  -775,   548,  -775,  -775,  -775,   900,  -775,  -775,
    -775,  -775,   786,  -775,  -775,  -775,  -775,   765,  -307,  -249,
    -567,  -774
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   190,   191,     9,    98,   475,   100,   101,   192,   103,
     104,   105,   193,   107,   108,   721,   395,   554,   410,   411,
     194,   195,   196,   197,   198,   412,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   777,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   396,
     397,   398,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   334,   413,   623,   809,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   572,   573,   537,
     538,   495,   642,   643,   496,   497,   498,   499,   500,   819,
     855,   856,   857,   858,   859,   501,   502,   503,   504,   505,
     689,   810,   889,   690,   811,   890,   891,   506,   507,   508,
     509,   510,   511,   602,   512,   513,   709,   710,   861,   711,
     514,   515,   516,   517,   714,   518,   751,   752,     2,     3,
     254,   147,    14,   122,   234,    11,    80,     4,     5,     6,
       7,    15,    16,    17,    48,    49,    50,    18,   124,   125,
     151,   153,   240,   241,   242,   243,   244,   245,   246,   255,
     110,   366,   256,   257,   258,   370,   259,   247,   746,   800,
     803,   747,   748,   885,   248,   834,   835,   836,   249,   449,
     576,   250,   450,   451,   673,   452,   251,   453,   782,   783,
     252,   580,   583,    19,   140,   141,   163,   284,   285,   286,
     539,   540,   541,    20,   137,   138,   160,   266,   267,   268,
     269,   377,   270,   271,   828,   272,   772,    21,   134,   135,
     157,   261,   262,   263,    22,    23,    24,    25,    74,    75,
      76,   116,   117,   145,   118,   146,    26,   166,   733,   910,
     577,   841
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    10,   114,   591,   440,   389,   106,   679,   129,   365,
     613,   302,    51,   696,    52,   130,   131,   688,   688,   478,
     700,   640,   239,   842,   843,   276,   128,   277,   278,    56,
     715,   279,   275,   533,   280,   281,    58,   282,    55,   611,
     283,   360,   596,   128,    59,   831,   342,    99,    32,    60,
     723,   149,     1,    61,   597,   725,     8,   863,   864,   719,
     109,   289,   598,   127,   149,   569,   882,   149,    62,   150,
     114,   290,    55,   738,   115,   626,   128,   380,   610,   128,
     -11,   343,   620,   621,   625,   641,   569,   716,   750,   757,
     837,   838,   839,   906,    63,   930,    12,   904,   905,   593,
      30,   102,    77,   522,   683,   832,   585,   736,   589,   128,
     158,   239,   707,   161,   570,   478,   680,    51,  -306,    28,
     106,  -217,   614,   115,   675,   616,   356,   301,   644,   708,
     357,    29,   313,   571,   164,   394,   115,   742,  -220,   115,
     344,   345,   115,   627,   784,    51,   478,    52,   276,   238,
     277,   278,   394,   260,   279,   275,   265,   280,   281,   274,
     282,   293,   942,   283,   149,   359,   940,   941,   421,   422,
     805,   346,   347,   127,   109,   356,   773,   774,   812,   357,
     126,   304,   314,   127,  -221,   394,   127,   618,   -11,  -218,
     127,   127,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   594,   130,   127,  -222,  -223,    31,   388,    78,   523,
     358,   403,   586,   579,   590,   102,   582,  -550,  -217,   587,
      55,   676,   300,    32,  -217,   729,   694,  -217,   615,   697,
     677,   617,   605,   606,   607,  -220,   115,   115,   238,   702,
     478,  -220,   106,   106,  -220,   705,   354,   755,   758,   478,
     478,   315,   887,   399,   400,  -316,  -550,  -316,   386,  -311,
    -550,   316,   868,    28,   265,   128,   355,   127,    90,   896,
     363,   740,   688,   688,   688,   650,   364,   383,   744,   687,
     687,  -221,   274,   390,   392,    93,  -218,  -221,   106,   106,
    -221,   676,  -218,   619,   713,  -218,   109,   109,   340,   341,
     732,  -222,  -223,   406,   816,   817,   106,  -222,  -223,   477,
    -222,  -223,   822,   823,   106,   734,   106,   776,   914,   915,
     853,   562,   730,   106,   127,   735,   106,    28,   854,   425,
     426,   731,   695,   542,   127,   698,  -550,   102,   102,  -312,
     543,   127,   109,   109,   439,   703,    55,   448,   126,   338,
     339,   706,   847,   756,   759,   520,   552,   521,   888,  -550,
     109,   356,  -365,   519,   530,   357,    57,   448,   109,    54,
     109,   544,   260,  -550,   367,   534,   368,   109,  -386,   127,
     109,   369,  -550,   102,   102,  -518,   363,   253,   106,   106,
      28,   264,   578,   363,   273,  -550,   895,   287,  -491,   581,
     770,   102,    79,   106,   476,    33,   771,   807,   880,   102,
     478,   102,  -550,   808,   881,  -467,   478,   478,   102,    81,
     613,   102,   363,   111,   478,   478,   131,    34,   883,   563,
     564,   778,  -550,   112,  -550,  -366,   477,  -492,   919,   142,
      35,   143,   109,   109,   588,    37,   567,   319,   574,   531,
      38,   113,    39,    40,    41,    42,   319,   109,   553,    43,
     931,   932,   933,    44,   478,   119,   427,   428,   429,   430,
     764,   765,   121,  -550,   106,    45,  -468,   123,    46,  -550,
      47,   106,   526,   102,   102,  -550,  -550,   126,  -404,  -406,
     519,  -550,  -550,   127,  -505,  -506,    83,   132,   102,    84,
     790,   320,   321,   322,   478,   478,   478,   319,   478,   560,
     128,   106,   106,   133,   478,   624,   908,   909,   335,   336,
     337,   363,   630,   291,    88,   401,   336,   337,   109,    89,
     477,   476,   363,   136,   298,   109,   722,   235,   106,   477,
     477,   106,   139,   319,    91,   629,    92,   363,   479,   763,
     478,   144,   646,   647,   477,    65,   478,   152,    94,    95,
     154,   372,    96,   792,   645,   109,   109,   156,   480,   102,
     348,   349,   478,   478,   478,   372,   102,   795,   372,   686,
     829,   236,   693,   237,   519,   796,   797,    66,   865,   866,
     584,    28,   109,   519,   519,   109,   871,   872,   423,   424,
     431,   432,   813,   814,   884,   884,   102,   102,   519,   892,
     893,   159,    67,    68,    69,    70,    71,    72,    73,   691,
     691,   937,   938,   911,   912,   476,   291,   162,   313,   722,
     296,   297,   298,   102,   476,   476,   102,   317,   319,   314,
     318,   481,   351,   353,   479,   361,   350,   373,   352,   476,
     371,   372,   374,   375,   305,   306,   307,   308,   309,   310,
     311,   312,   376,   378,   480,   921,   922,   381,   384,   387,
     402,   404,   405,   928,   929,   479,   407,   415,   525,   745,
     106,   106,   532,   545,   546,   106,   548,   549,   557,   558,
     561,   820,   559,   233,   565,   480,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   566,   568,   332,   333,   821,
     592,   595,   599,   600,   603,   363,   608,   632,   609,   612,
     628,   787,   788,   631,   637,   648,   791,   649,   674,   678,
     303,   681,   682,   685,   109,   109,   676,   481,   717,   109,
     745,   720,   718,   739,   799,   802,   650,   610,   727,   728,
     737,   743,   730,   754,   749,   753,   641,   760,   806,   815,
     761,   762,   768,   115,   482,   769,   775,   388,   481,   479,
     781,   786,   827,   789,   830,   102,   102,   798,   479,   479,
     102,   793,   818,   833,   824,   797,   796,   825,   826,   480,
     840,   844,   750,   848,   849,   852,   850,   867,   480,   480,
     860,   869,   870,   873,   477,   897,   898,   417,   418,   419,
     420,   420,   420,   420,   878,   879,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   106,   420,   894,  -305,
     902,   903,   874,   876,   907,   484,   872,   871,   233,    33,
     385,   916,   917,   920,   918,   934,   477,   393,   926,   927,
     935,   936,   939,   294,   155,   779,   547,   638,   519,   295,
     482,    34,   481,   556,   233,   433,   551,   913,   414,   434,
     436,   481,   481,   417,    35,   438,   435,   900,    36,    37,
     109,   684,   741,   416,    38,   899,    39,    40,    41,    42,
     785,   482,   692,    43,   901,   604,   766,    44,   862,   476,
     519,   923,   924,   437,   827,   233,   767,   846,   575,    45,
     120,    27,    46,    64,    47,   148,   524,   362,   794,   804,
     801,   102,   925,   527,    53,   877,   379,   875,   165,   288,
     382,   484,   886,     0,     0,   483,   233,   536,     0,   479,
       0,   476,     0,     0,     0,   479,   479,     0,     0,     0,
       0,     0,     0,   479,   479,   485,     0,   555,   555,   480,
       0,     0,   484,     0,     0,   480,   480,     0,     0,     0,
       0,     0,     0,   480,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   482,     0,     0,     0,     0,
       0,     0,     0,   479,   482,   482,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   480,     0,   601,     0,   601,   633,     0,
     634,   635,   636,     0,     0,     0,     0,     0,     0,     0,
       0,   483,   481,   479,   479,   479,     0,   479,   481,   481,
       0,     0,     0,   479,     0,     0,   481,   481,     0,     0,
       0,   485,     0,   480,   480,   480,   484,   480,     0,     0,
       0,     0,   483,   480,     0,   484,   484,     0,     0,     0,
       0,     0,     0,     0,   622,     0,     0,     0,     0,   479,
       0,     0,   485,     0,     0,   479,   481,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   480,
       0,   479,   479,   479,     0,   480,     0,     0,   639,   726,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   480,   480,   480,     0,     0,   481,   481,   481,     0,
     481,     0,     0,     0,     0,     0,   481,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   622,     0,   699,   701,
       0,     0,   704,     0,     0,   482,   483,   712,   699,     0,
       0,   482,   482,     0,     0,   483,   483,     0,     0,   482,
     482,     0,   481,     0,     0,     0,   485,     0,   481,     0,
       0,   536,     0,     0,   651,   485,   485,     0,     0,     0,
       0,     0,     0,     0,   481,   481,   481,     0,     0,   536,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   652,   484,     0,     0,     0,
       0,     0,   484,   484,     0,     0,     0,     0,     0,     0,
     484,   484,     0,     0,     0,     0,     0,     0,     0,   482,
     482,   482,     0,   482,     0,     0,   653,   654,     0,   482,
       0,   655,   656,   657,   658,   659,   660,   661,   662,   663,
       0,   664,   780,     0,     0,     0,     0,   622,     0,     0,
     484,   665,   666,     0,     0,   667,   668,   669,   670,     0,
       0,   671,   672,     0,     0,   482,     0,     0,   699,     0,
       0,   482,   699,     0,   699,   699,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   482,   482,   482,
     484,   484,   484,     0,   484,     0,   483,     0,     0,     0,
     484,     0,   483,   483,     0,     0,     0,     0,     0,     0,
     483,   483,     0,     0,     0,     0,   485,     0,     0,     0,
       0,     0,   485,   485,     0,   845,     0,     0,     0,     0,
     485,   485,     0,     0,   851,     0,   484,     0,     0,     0,
       0,     0,   484,     0,     0,     0,     0,     0,     0,     0,
     483,     0,     0,     0,    55,     0,     0,     0,   484,   484,
     484,     0,     0,    82,     0,    83,     0,     0,    84,     0,
     485,     0,   622,    85,     0,     0,     0,    86,     0,     0,
     528,     0,     0,     0,     0,     0,    87,     0,     0,     0,
     483,   483,   483,    88,   483,     0,     0,     0,    89,     0,
     483,     0,    90,     0,     0,     0,     0,     0,     0,     0,
     485,   485,   485,    91,   485,    92,     0,     0,     0,    93,
     485,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,    96,     0,     0,   529,     0,   483,     0,     0,     0,
       0,     0,   483,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   485,     0,   483,   483,
     483,     0,   485,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   485,   485,
     485,   454,     0,   167,   168,   169,   170,     0,     0,   171,
      82,   455,    83,   853,     0,    84,   456,     0,   457,   458,
      85,   854,     0,   459,    86,     0,     0,     0,     0,     0,
     173,     0,   460,    87,   461,   462,   463,   464,     0,     0,
      88,     0,     0,     0,   465,    89,     0,   174,   175,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   466,
      91,     0,    92,   176,     0,     0,    93,     0,   467,   177,
     468,   178,   469,   179,    94,    95,   470,   471,    96,   472,
       0,   292,     0,   473,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   363,     0,
     181,     0,     0,     0,   474,     0,     0,   182,   183,   184,
       0,     0,   185,     0,   186,   187,     0,   454,     0,   167,
     168,   169,   170,     0,     0,   171,    82,   455,    83,     0,
       0,    84,   456,     0,   457,   458,    85,   188,   189,   459,
      86,     0,     0,     0,     0,     0,   173,     0,   460,    87,
     461,   462,   463,   464,     0,     0,    88,     0,     0,     0,
     465,    89,     0,   174,   175,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   466,    91,     0,    92,   176,
       0,     0,    93,     0,   467,   177,   468,   178,   469,   179,
      94,    95,   470,   471,    96,   472,     0,   292,     0,   473,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   363,     0,   181,     0,     0,     0,
     474,     0,     0,   182,   183,   184,     0,     0,   185,     0,
     186,   187,     0,    55,     0,   167,   168,   169,   170,     0,
       0,   171,    82,   455,    83,     0,     0,    84,   456,     0,
       0,   458,    85,   188,   189,   459,    86,     0,     0,     0,
       0,     0,   173,     0,   460,    87,   461,   462,   463,   464,
       0,     0,    88,     0,     0,     0,   465,    89,     0,   174,
     175,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   466,    91,     0,    92,   176,     0,     0,    93,     0,
     467,   177,   468,   178,   469,   179,    94,    95,   470,   471,
      96,   472,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     363,     0,   181,     0,     0,     0,   474,     0,     0,   182,
     183,   184,     0,     0,   185,     0,   186,   187,    55,     0,
     167,   168,   169,   170,     0,     0,   171,    82,     0,    83,
       0,     0,    84,   172,     0,     0,     0,    85,     0,   188,
     189,    86,     0,     0,     0,     0,     0,   173,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   174,   175,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
     176,   535,     0,    93,     0,     0,   177,     0,   178,     0,
     179,    94,    95,   180,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   388,   724,   181,     0,     0,
       0,     0,     0,     0,   182,   183,   184,     0,     0,   185,
       0,   186,   187,    55,     0,   167,   168,   169,   170,     0,
       0,   171,    82,     0,    83,     0,     0,    84,   172,     0,
       0,     0,    85,     0,   188,   189,    86,     0,     0,     0,
       0,     0,   173,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,     0,   174,
     175,    90,     0,   408,     0,     0,     0,     0,     0,     0,
     409,     0,    91,     0,    92,   176,     0,     0,    93,     0,
       0,   177,     0,   178,     0,   179,    94,    95,   180,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,   167,   168,   169,   170,     0,     0,   171,    82,     0,
      83,     0,   181,    84,   172,     0,     0,     0,    85,   182,
     183,   184,    86,     0,   185,     0,   186,   187,   173,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,     0,   174,   175,    90,     0,   188,
     189,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,   176,   535,     0,    93,     0,     0,   177,     0,   178,
       0,   179,    94,    95,   180,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   388,     0,   181,     0,
       0,     0,     0,     0,     0,   182,   183,   184,     0,     0,
     185,     0,   186,   187,    55,     0,   167,   168,   169,   170,
       0,     0,   171,    82,     0,    83,     0,     0,    84,   172,
       0,     0,     0,    85,     0,   188,   189,    86,     0,     0,
       0,     0,     0,   173,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,     0,
     174,   175,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,   176,     0,     0,    93,
       0,     0,   177,     0,   178,     0,   179,    94,    95,   180,
       0,    96,     0,     0,   299,     0,     0,     0,     0,     0,
      55,     0,   167,   168,   169,   170,     0,     0,   171,    82,
       0,    83,     0,   181,    84,   172,     0,     0,     0,    85,
     182,   183,   184,    86,     0,   185,     0,   186,   187,   173,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,     0,   174,   175,    90,     0,
     188,   189,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,   176,     0,     0,    93,     0,     0,   177,     0,
     178,     0,   179,    94,    95,   180,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   181,
     550,     0,     0,     0,     0,     0,   182,   183,   184,     0,
       0,   185,     0,   186,   187,    55,     0,   167,   168,   169,
     170,     0,     0,   171,    82,     0,    83,     0,     0,    84,
     172,     0,     0,     0,    85,     0,   188,   189,    86,     0,
       0,     0,     0,     0,   173,     0,     0,    87,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
       0,   174,   175,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,     0,    92,   176,     0,     0,
      93,     0,     0,   177,     0,   178,     0,   179,    94,    95,
     180,     0,    96,     0,     0,   292,     0,     0,     0,     0,
       0,    55,     0,   167,   168,   169,   170,     0,     0,   171,
      82,     0,    83,     0,   181,    84,   172,     0,     0,     0,
      85,   182,   183,   184,    86,     0,   185,     0,   186,   187,
     173,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   174,   175,    90,
       0,   188,   189,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   176,     0,     0,    93,     0,     0,   177,
       0,   178,     0,   179,    94,    95,   180,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,   167,
     168,   169,   170,     0,     0,   171,    82,     0,    83,     0,
     181,    84,   172,     0,     0,     0,    85,   182,   183,   184,
      86,     0,   185,     0,   186,   187,   173,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   174,   175,    90,     0,   188,   189,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   176,
       0,     0,    93,     0,     0,   177,     0,   178,   441,   179,
      94,    95,   180,     0,    96,     0,     0,    82,     0,    83,
       0,     0,    84,     0,    59,   442,     0,    85,     0,    60,
       0,    86,     0,    61,   443,   444,   181,     0,     0,     0,
      87,     0,     0,     0,     0,   445,     0,    88,    62,     0,
     186,   187,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
       0,     0,     0,    93,    63,   441,     0,     0,     0,     0,
       0,    94,    95,     0,    82,    96,    83,     0,   446,    84,
       0,    59,   442,     0,    85,     0,    60,     0,    86,     0,
      61,   443,   444,     0,     0,     0,     0,    87,     0,     0,
       0,     0,   445,     0,    88,    62,     0,     0,     0,    89,
       0,     0,   447,    90,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    82,    91,    83,    92,     0,    84,     0,
      93,    63,     0,    85,     0,     0,     0,    86,    94,    95,
       0,     0,    96,     0,     0,   446,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,    55,    89,     0,
       0,     0,    90,     0,     0,     0,    82,     0,    83,     0,
       0,    84,     0,    91,     0,    92,    85,     0,     0,    93,
      86,    55,     0,     0,     0,     0,     0,    94,    95,    87,
      82,    96,    83,     0,    97,    84,    88,     0,     0,     0,
      85,    89,     0,     0,    86,    90,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    91,    33,    92,     0,
      88,     0,    93,     0,     0,    89,     0,     0,     0,    90,
      94,    95,     0,     0,    96,     0,     0,   292,     0,    34,
      91,     0,    92,     0,     0,     0,    93,     0,     0,     0,
       0,     0,    35,     0,    94,    95,    36,    37,    96,     0,
       0,   391,    38,     0,    39,    40,    41,    42,     0,     0,
       0,    43,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,     0,    47
};

static const yytype_int16 yycheck[] =
{
       3,     1,    74,   459,   357,   295,    60,   574,   101,   246,
     490,   181,    15,   597,    15,   108,   109,   593,   594,   363,
     599,   562,   152,   797,   798,   162,     3,   162,   162,    29,
     609,   162,   162,   386,   162,   162,    36,   162,     4,   475,
     162,   238,     4,     3,    20,    12,    11,    60,     4,    25,
      99,   123,    82,    29,    16,   632,     4,   825,   826,   626,
      60,    99,    24,   112,   136,     4,   840,   139,    44,   123,
     142,   109,     4,   650,    74,     4,     3,   274,     4,     3,
       4,    46,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,   867,    70,     4,     0,   865,   866,     1,
       1,    60,     1,     1,   584,    72,     1,   648,     1,     3,
     136,   241,    17,   139,    53,   459,    72,   120,     0,   109,
     174,     1,     1,   123,     1,     1,    99,   181,   564,    34,
     103,   121,   109,    72,   100,   112,   136,   678,     1,   139,
     105,   106,   142,    72,   728,   148,   490,   148,   285,   152,
     285,   285,   112,   156,   285,   285,   159,   285,   285,   162,
     285,   174,   936,   285,   236,   237,   934,   935,   338,   339,
     749,   136,   137,   112,   174,    99,   717,   718,   754,   103,
     112,   181,   109,   112,     1,   112,   112,     1,   112,     1,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   103,   295,   112,     1,     1,   107,   101,   107,   107,
     236,   304,   107,   450,   107,   174,   453,    99,    98,   456,
       4,    98,   181,     4,   104,     1,     1,   107,   107,     1,
     107,   107,   469,   470,   471,    98,   236,   237,   241,     1,
     584,   104,   296,   297,   107,     1,   119,     1,     1,   593,
     594,    99,     1,   300,   301,   101,    99,   103,   103,   102,
      99,   109,   829,   109,   267,     3,   139,   112,    52,   853,
     101,   674,   848,   849,   850,   121,   107,   289,   681,   593,
     594,    98,   285,   296,   297,    69,    98,   104,   342,   343,
     107,    98,   104,   107,   608,   107,   296,   297,   130,   131,
     107,    98,    98,   315,   760,   761,   360,   104,   104,   363,
     107,   107,   768,   769,   368,   103,   370,   720,   885,   886,
      16,   103,    98,   377,   112,   103,   380,   109,    24,   342,
     343,   107,   107,   104,   112,   107,    99,   296,   297,   102,
     104,   112,   342,   343,   356,   107,     4,   360,   112,   110,
     111,   107,   808,   107,   107,   368,   403,   370,   107,    99,
     360,    99,   102,   363,   377,   103,   109,   380,   368,    99,
     370,   104,   375,    99,    54,   387,    56,   377,   104,   112,
     380,    61,    99,   342,   343,   102,   101,   153,   442,   443,
     109,   157,   107,   101,   160,    99,   852,   163,   102,   107,
     101,   360,   101,   457,   363,    10,   107,    98,    98,   368,
     754,   370,    99,   104,   104,   102,   760,   761,   377,     4,
     900,   380,   101,     4,   768,   769,   519,    32,   107,   442,
     443,   721,    99,     4,    99,   102,   490,   102,   894,    98,
      45,   100,   442,   443,   457,    50,   446,    98,   448,   100,
      55,     4,    57,    58,    59,    60,    98,   457,   100,    64,
     916,   917,   918,    68,   808,   108,   344,   345,   346,   347,
     707,   708,   107,    99,   528,    80,   102,   108,    83,    99,
      85,   535,   102,   442,   443,    99,    99,   112,   102,   102,
     490,    99,    99,   112,   102,   102,    15,     4,   457,    18,
     737,   140,   141,   142,   848,   849,   850,    98,   852,   100,
       3,   565,   566,   108,   858,   528,   869,   870,   112,   113,
     114,   101,   535,   103,    43,   112,   113,   114,   528,    48,
     584,   490,   101,   108,   103,   535,   629,   102,   592,   593,
     594,   595,   108,    98,    63,   100,    65,   101,   363,   103,
     894,   103,   565,   566,   608,    30,   900,   101,    77,    78,
     103,    98,    81,   100,   564,   565,   566,   101,   363,   528,
     134,   135,   916,   917,   918,    98,   535,   100,    98,   592,
     100,    98,   595,    98,   584,    94,    95,    62,    94,    95,
     108,   109,   592,   593,   594,   595,    96,    97,   340,   341,
     348,   349,   755,   756,   841,   842,   565,   566,   608,   849,
     850,   101,    87,    88,    89,    90,    91,    92,    93,   593,
     594,   928,   929,   872,   873,   584,   103,   101,   109,   722,
     103,   103,   103,   592,   593,   594,   595,   103,    98,   109,
     104,   363,   120,   138,   459,   102,   115,     4,   116,   608,
     104,    98,   102,    98,   182,   183,   184,   185,   186,   187,
     188,   189,    50,   102,   459,   902,   903,   102,     4,    99,
     104,     4,     4,   910,   911,   490,     4,     4,   121,   682,
     734,   735,   104,   104,   104,   739,   104,   104,    98,   104,
     104,   763,   108,   144,    53,   490,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    53,     4,   132,   133,   763,
     103,   103,   103,   103,   103,   101,   103,    98,   103,   102,
     104,   734,   735,   102,   104,   103,   739,   103,    99,   103,
     181,    99,   101,    86,   734,   735,    98,   459,   103,   739,
     743,    99,   103,   103,   747,   748,   121,     4,   104,   121,
     104,   101,    98,    98,   103,   107,     4,   104,   121,    42,
     104,   104,   104,   763,   363,   104,   101,   101,   490,   584,
     108,   101,   775,   104,   100,   734,   735,   102,   593,   594,
     739,   104,   101,   786,   102,    95,    94,   104,   104,   584,
     102,   104,     4,   107,     1,    28,   107,   102,   593,   594,
       4,   103,   103,   102,   858,   108,   102,   335,   336,   337,
     338,   339,   340,   341,   104,   104,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   880,   355,   104,     0,
     104,   104,   835,   836,   101,   363,    97,    96,   289,    10,
     291,     1,   104,   108,   104,    95,   900,   298,   104,   104,
      94,   102,   104,   174,   133,   722,   397,   557,   858,   174,
     459,    32,   584,   409,   315,   350,   402,   880,   319,   351,
     353,   593,   594,   401,    45,   355,   352,   858,    49,    50,
     880,   588,   676,   334,    55,   856,    57,    58,    59,    60,
     730,   490,   594,    64,   858,   468,   709,    68,   821,   858,
     900,   904,   905,   354,   907,   356,   709,   807,   448,    80,
      79,     4,    83,    49,    85,   120,   372,   241,   743,   748,
     747,   880,   907,   375,    24,   836,   267,   835,   142,   164,
     285,   459,   842,    -1,    -1,   363,   387,   388,    -1,   754,
      -1,   900,    -1,    -1,    -1,   760,   761,    -1,    -1,    -1,
      -1,    -1,    -1,   768,   769,   363,    -1,   408,   409,   754,
      -1,    -1,   490,    -1,    -1,   760,   761,    -1,    -1,    -1,
      -1,    -1,    -1,   768,   769,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   584,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   808,   593,   594,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   808,    -1,   466,    -1,   468,   546,    -1,
     548,   549,   550,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   459,   754,   848,   849,   850,    -1,   852,   760,   761,
      -1,    -1,    -1,   858,    -1,    -1,   768,   769,    -1,    -1,
      -1,   459,    -1,   848,   849,   850,   584,   852,    -1,    -1,
      -1,    -1,   490,   858,    -1,   593,   594,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,   894,
      -1,    -1,   490,    -1,    -1,   900,   808,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   894,
      -1,   916,   917,   918,    -1,   900,    -1,    -1,   559,   637,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   916,   917,   918,    -1,    -1,   848,   849,   850,    -1,
     852,    -1,    -1,    -1,    -1,    -1,   858,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   597,    -1,   599,   600,
      -1,    -1,   603,    -1,    -1,   754,   584,   608,   609,    -1,
      -1,   760,   761,    -1,    -1,   593,   594,    -1,    -1,   768,
     769,    -1,   894,    -1,    -1,    -1,   584,    -1,   900,    -1,
      -1,   632,    -1,    -1,    33,   593,   594,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   916,   917,   918,    -1,    -1,   650,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   808,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,   754,    -1,    -1,    -1,
      -1,    -1,   760,   761,    -1,    -1,    -1,    -1,    -1,    -1,
     768,   769,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   848,
     849,   850,    -1,   852,    -1,    -1,   105,   106,    -1,   858,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,   120,   723,    -1,    -1,    -1,    -1,   728,    -1,    -1,
     808,   130,   131,    -1,    -1,   134,   135,   136,   137,    -1,
      -1,   140,   141,    -1,    -1,   894,    -1,    -1,   749,    -1,
      -1,   900,   753,    -1,   755,   756,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   916,   917,   918,
     848,   849,   850,    -1,   852,    -1,   754,    -1,    -1,    -1,
     858,    -1,   760,   761,    -1,    -1,    -1,    -1,    -1,    -1,
     768,   769,    -1,    -1,    -1,    -1,   754,    -1,    -1,    -1,
      -1,    -1,   760,   761,    -1,   806,    -1,    -1,    -1,    -1,
     768,   769,    -1,    -1,   815,    -1,   894,    -1,    -1,    -1,
      -1,    -1,   900,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     808,    -1,    -1,    -1,     4,    -1,    -1,    -1,   916,   917,
     918,    -1,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,
     808,    -1,   853,    23,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
     848,   849,   850,    43,   852,    -1,    -1,    -1,    48,    -1,
     858,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     848,   849,   850,    63,   852,    65,    -1,    -1,    -1,    69,
     858,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    81,    -1,    -1,    84,    -1,   894,    -1,    -1,    -1,
      -1,    -1,   900,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   894,    -1,   916,   917,
     918,    -1,   900,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   916,   917,
     918,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    -1,
      43,    -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
     103,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,   112,
      -1,    -1,   115,    -1,   117,   118,    -1,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    21,    22,    23,   140,   141,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    -1,    43,    -1,    -1,    -1,
      47,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    69,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,
     107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,    -1,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,   140,   141,    26,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,   110,
     111,   112,    -1,    -1,   115,    -1,   117,   118,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    -1,    -1,    -1,    23,    -1,   140,
     141,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      66,    67,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,   110,   111,   112,    -1,    -1,   115,
      -1,   117,   118,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,
      -1,    -1,    23,    -1,   140,   141,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    63,    -1,    65,    66,    -1,    -1,    69,    -1,
      -1,    72,    -1,    74,    -1,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    -1,
      15,    -1,   103,    18,    19,    -1,    -1,    -1,    23,   110,
     111,   112,    27,    -1,   115,    -1,   117,   118,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    67,    -1,    69,    -1,    -1,    72,    -1,    74,
      -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
     104,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    18,
      19,    -1,    -1,    -1,    23,    -1,   140,   141,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,
      69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    -1,    15,    -1,   103,    18,    19,    -1,    -1,    -1,
      23,   110,   111,   112,    27,    -1,   115,    -1,   117,   118,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,
      -1,    74,    -1,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,
     103,    18,    19,    -1,    -1,    -1,    23,   110,   111,   112,
      27,    -1,   115,    -1,   117,   118,    33,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    69,    -1,    -1,    72,    -1,    74,     4,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    13,    -1,    15,
      -1,    -1,    18,    -1,    20,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    29,    30,    31,   103,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    41,    -1,    43,    44,    -1,
     117,   118,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      -1,    -1,    -1,    69,    70,     4,    -1,    -1,    -1,    -1,
      -1,    77,    78,    -1,    13,    81,    15,    -1,    84,    18,
      -1,    20,    21,    -1,    23,    -1,    25,    -1,    27,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,   118,    52,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    63,    15,    65,    -1,    18,    -1,
      69,    70,    -1,    23,    -1,    -1,    -1,    27,    77,    78,
      -1,    -1,    81,    -1,    -1,    84,    36,    -1,    -1,    -1,
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
      -1,    -1,    45,    -1,    77,    78,    49,    50,    81,    -1,
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
     107,   213,   103,     1,   103,   103,     4,    16,    24,   103,
     103,   209,   257,   103,   257,   214,   214,   214,   103,   103,
       4,   221,   102,   212,     1,   107,     1,   107,     1,   107,
       4,     4,   209,   210,   149,     4,     4,    72,   104,   100,
     149,   102,    98,   191,   191,   191,   191,   104,   163,   209,
     303,     4,   226,   227,   221,   278,   149,   149,   103,   103,
     121,    33,    74,   105,   106,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   120,   130,   131,   134,   135,   136,
     137,   140,   141,   328,    99,     1,    98,   107,   103,   384,
      72,    99,   101,   212,   226,    86,   149,   220,   229,   244,
     247,   250,   244,   149,     1,   107,   210,     1,   107,   209,
     211,   209,     1,   107,   209,     1,   107,    17,    34,   260,
     261,   263,   209,   220,   268,   211,     4,   103,   103,   384,
      99,   159,   160,    99,   102,   223,   191,   104,   121,     1,
      98,   107,   107,   382,   103,   103,   303,   104,   223,   103,
     306,   222,   303,   101,   306,   274,   312,   315,   316,   103,
       4,   270,   271,   107,    98,     1,   107,     4,     1,   107,
     104,   104,   104,   103,   214,   214,   261,   263,   104,   104,
     101,   107,   360,   303,   303,   101,   306,   180,   344,   159,
     209,   108,   332,   333,   210,   227,   101,   149,   149,   104,
     214,   149,   100,   104,   312,   100,    94,    95,   102,   274,
     313,   316,   274,   314,   315,   211,   121,    98,   104,   211,
     245,   248,   229,   245,   245,    42,   213,   213,   101,   233,
     148,   156,   213,   213,   102,   104,   104,   274,   358,   100,
     100,    12,    72,   274,   319,   320,   321,     4,     4,     4,
     102,   385,   385,   385,   104,   209,   271,   213,   107,     1,
     107,   209,    28,    16,    24,   234,   235,   236,   237,   238,
       4,   262,   262,   360,   360,    94,    95,   102,   384,   103,
     103,    96,    97,   102,   274,   321,   274,   320,   104,   104,
      98,   104,   385,   107,   214,   317,   317,     1,   107,   246,
     249,   250,   246,   246,   104,   213,   210,   108,   102,   236,
     216,   238,   104,   104,   360,   360,   385,   101,   169,   169,
     383,   383,   383,   149,   384,   384,     1,   104,   104,   213,
     108,   214,   214,   274,   274,   358,   104,   104,   214,   214,
       4,   213,   213,   213,    95,    94,   102,   382,   382,   104,
     360,   360,   385
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
     239,   239,   239,   240,   241,   242,   242,   243,   243,   243,
     244,   244,   245,   245,   246,   246,   247,   247,   248,   249,
     250,   250,   251,   252,   252,   252,   252,   252,   253,   253,
     254,   254,   255,   255,   255,   255,   255,   255,   256,   256,
     257,   257,   258,   258,   259,   259,   259,   260,   260,   261,
     261,   261,   262,   262,   263,   264,   265,   266,   267,   268,
     268,   269,   270,   270,   271,   272,   272,   273,   273,   274,
     274,   275,   275,   276,   277,   277,   278,   278,   279,   279,
     280,   281,   281,   282,   282,   283,   283,   284,   284,   285,
     285,   286,   286,   287,   287,   287,   287,   287,   288,   288,
     289,   289,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   291,   292,   292,   293,
     293,   293,   294,   294,   295,   296,   296,   297,   297,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   299,
     299,   300,   300,   301,   302,   302,   303,   303,   304,   304,
     305,   305,   306,   306,   307,   307,   308,   309,   309,   309,
     310,   311,   312,   312,   313,   313,   314,   314,   315,   316,
     317,   317,   318,   318,   319,   319,   320,   321,   322,   323,
     323,   324,   325,   326,   326,   327,   327,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   329,
     329,   330,   331,   332,   332,   333,   333,   334,   335,   335,
     336,   336,   337,   338,   338,   339,   340,   341,   341,   342,
     342,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     344,   344,   345,   345,   346,   346,   347,   348,   348,   349,
     350,   351,   351,   352,   352,   353,   353,   353,   353,   354,
     354,   355,   355,   356,   357,   358,   358,   358,   358,   359,
     360,   360,   361,   362,   362,   363,   364,   364,   365,   365,
     366,   366,   367,   367,   368,   368,   369,   370,   370,   371,
     371,   372,   372,   373,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   375,   375,   376,   377,   377,   378,   379,
     380,   381,   382,   383,   384,   385
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
       1,     1,     1,     2,     5,     7,     7,     9,     9,     9,
       0,     1,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     3,     8,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     3,     4,     3,     3,     4,     3,     3,     3,
       0,     1,     3,     3,     3,     3,     4,     1,     2,     6,
       6,     2,     0,     1,     2,     2,     2,     5,     5,     1,
       1,     6,     1,     3,     3,     2,     2,     0,     1,     0,
       1,     0,     1,     5,     0,     1,     1,     2,     2,     3,
       4,     1,     2,     1,     1,     5,     5,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     7,     0,     1,     2,
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
#line 106 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_literal",1);}
#line 2577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 107 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 108 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 114 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 115 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 121 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 124 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);}
#line 2631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 128 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 129 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 132 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 133 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 136 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 137 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 138 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 141 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 145 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 146 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 147 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 150 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 152 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 169 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 179 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 191 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 196 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 200 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 204 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 205 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 208 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 2955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 222 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 2979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 2985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 2991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 2997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 238 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 248 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 255 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 258 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 261 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 264 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 273 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 276 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 279 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 282 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 285 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 288 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 291 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression primary_expression",1);}
#line 3147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression qualified_identifier",1);}
#line 3153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 293 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression post_increment_expression",1);}
#line 3159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 294 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression post_decrement_expression",1);}
#line 3165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 295 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression pointer_member_access",1);}
#line 3171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 298 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus postfix_expression",1);}
#line 3177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus EXCLAMATION_POINT",1);}
#line 3183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 300 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus TILDE",1);}
#line 3189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 301 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus cast_expression",1);}
#line 3195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 307 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 310 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression unary_expression_not_plusminus",1);}
#line 3213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression PLUS",1);}
#line 3219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression MINUS",1);}
#line 3225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression STAR",1);}
#line 3231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression pre_increment_expression",1);}
#line 3237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression pre_decrement_expression",1);}
#line 3243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression addressof_expression",1);}
#line 3249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 325 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 329 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 332 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 333 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 346 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 347 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 350 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 351 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 355 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 362 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 363 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 371 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 387 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 401 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 403 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 404 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 426 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 427 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 432 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 433 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 437 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 457 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 463 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 464 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 466 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 472 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 473 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3783 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 476 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 3789 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 477 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 3795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 480 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3801 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3807 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 482 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3813 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3819 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 488 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3825 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 491 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3831 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 492 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 3837 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 495 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 3843 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 498 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 499 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3855 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 502 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3861 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 503 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 504 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3873 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 505 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3879 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 506 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3885 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 507 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3891 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 508 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3897 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 511 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3903 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 512 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3909 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 515 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 3915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 516 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 3921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 519 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 3927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 3933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 3939 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 3945 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 3951 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 530 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 3957 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 533 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 3963 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 3969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 537 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 3975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 540 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 3981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 541 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 3987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 544 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 545 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 546 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 547 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 550 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 553 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 556 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2,1);}
#line 4035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4);}
#line 4041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",5,1);}
#line 4047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",5,1);}
#line 4053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 565 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 566 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 569 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 573 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 581 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 595 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 596 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4149 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4173 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 605 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4179 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 606 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4185 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4191 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 610 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 611 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4203 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4209 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4215 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 614 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 621 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 629 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 631 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 634 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4287 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 638 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 639 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4299 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4305 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4311 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4317 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 650 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4323 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4329 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4335 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4341 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4347 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4353 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 667 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4359 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4365 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4371 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 674 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4377 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4383 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 678 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4389 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4395 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 682 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4401 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4407 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 686 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4413 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4419 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 690 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4425 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4431 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4437 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4443 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4449 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 707 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4455 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 710 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4461 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 711 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4467 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4473 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 717 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4479 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4485 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4491 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4497 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4503 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 726 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4509 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 729 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4515 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 730 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4521 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 733 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4527 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 734 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4533 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4539 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 738 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4545 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 741 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4551 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 742 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4557 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 743 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4563 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 744 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4569 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4575 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4581 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4587 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 4593 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 4599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4605 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4611 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 766 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 767 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 770 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 771 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 774 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 775 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 776 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 777 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);}
#line 4689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 784 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 4695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 785 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 4701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 790 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 4719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 4725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 4731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 4755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 4761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 809 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 810 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 811 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 814 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 815 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 818 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 4827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 4833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 825 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 4839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 4845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 829 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 4851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 833 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 4857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 834 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 4863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 4869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 838 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 4875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 841 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 4881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 842 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 4887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 845 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 4893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 846 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 4899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 849 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 4905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 850 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 4911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 853 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 4917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 4923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 857 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 4929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 860 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 4935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 4941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 4947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 866 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 4953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 4959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 875 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 4965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 876 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 4971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 879 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 4977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 880 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 4983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 883 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 4989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 884 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 4995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 896 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 899 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 900 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 903 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 907 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 910 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 911 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 917 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 923 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 932 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 934 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 937 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 941 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 944 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 945 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 948 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 949 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 952 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 953 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 954 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 955 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 956 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 957 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 958 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 959 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 960 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 961 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 962 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 963 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 964 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 965 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 966 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 967 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 968 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 969 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 970 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 971 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 972 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 973 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 976 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 977 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 980 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 983 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 986 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 987 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 990 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 991 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1007 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1010 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1014 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1015 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1020 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1024 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1030 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1033 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1037 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1038 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1041 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1042 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1043 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1044 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1045 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1046 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1047 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1048 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1056 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1059 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1063 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 5469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1072 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 5475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 5481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1076 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 5487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1079 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1086 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1090 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1091 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1092 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1093 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1097 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1098 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1101 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1102 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1108 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1115 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1119 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1120 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1125 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1130 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1136 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1140 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1143 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 5643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1146 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1147 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1150 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 5661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 5667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1154 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 5673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1155 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 5679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1158 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 5685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1159 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 5691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1164 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1165 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 5703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 5709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 5715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1174 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 5721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1178 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 5739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 5745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 5751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1188 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 5811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 5817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 5823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 5829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1207 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 5835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 5841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 5847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1220 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 5853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1223 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 5859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1226 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 5865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1229 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 5871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1232 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 5877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1235 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 5883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 5887 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1240 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




