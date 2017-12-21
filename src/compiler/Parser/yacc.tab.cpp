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
	#include<queue>
	#include "../logger/Logger.h"
	#include "../Error Handler/error_handler.h"

	#include "../Symbol Table/symbol_parser.h"

	extern symbolParser* SPL = new symbolParser();
	

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	Logger l("parser.log");
	void yyerror(const char *);
		


#line 95 "yacc.tab.cpp" /* yacc.c:339  */

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
#line 39 "yacc.y" /* yacc.c:355  */

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
	

#line 301 "yacc.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 318 "yacc.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   2734

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  245
/* YYNRULES -- Number of rules.  */
#define YYNRULES  557
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  938

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
       0,   121,   121,   122,   123,   124,   125,   126,   129,   130,
     136,   139,   143,   144,   147,   148,   151,   152,   153,   156,
     157,   160,   161,   162,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   176,   177,   180,   181,   184,   185,   188,
     189,   190,   193,   194,   197,   201,   205,   206,   209,   210,
     211,   214,   215,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   232,   235,   236,   237,   240,
     241,   244,   245,   248,   249,   252,   253,   256,   257,   260,
     263,   264,   267,   270,   273,   276,   279,   280,   283,   284,
     287,   288,   291,   294,   297,   300,   303,   306,   307,   308,
     309,   310,   313,   314,   315,   316,   319,   322,   325,   326,
     327,   328,   329,   330,   331,   339,   340,   341,   342,   343,
     344,   347,   348,   351,   352,   355,   356,   359,   360,   361,
     362,   365,   366,   367,   370,   371,   372,   375,   376,   377,
     378,   379,   380,   381,   384,   385,   386,   389,   390,   393,
     394,   397,   398,   401,   402,   405,   406,   409,   410,   413,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   429,   430,   433,   436,   440,   441,   442,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   460,   463,   464,   468,   469,   472,   475,   478,   479,
     480,   481,   484,   489,   495,   503,   507,   513,   514,   515,
     518,   521,   524,   525,   528,   531,   532,   535,   536,   537,
     538,   539,   540,   541,   544,   545,   548,   549,   552,   555,
     558,   559,   562,   563,   566,   569,   570,   573,   574,   577,
     578,   579,   580,   583,   586,   589,   590,   593,   594,   598,
     599,   602,   603,   606,   607,   610,   611,   614,   617,   620,
     621,   624,   627,   628,   629,   630,   631,   634,   635,   638,
     639,   642,   643,   644,   645,   646,   647,   650,   651,   654,
     655,   658,   659,   662,   663,   664,   667,   668,   671,   672,
     673,   676,   677,   680,   683,   686,   689,   692,   695,   696,
     700,   703,   704,   707,   710,   711,   714,   715,   718,   719,
     722,   723,   726,   726,   730,   731,   735,   740,   748,   749,
     753,   756,   757,   760,   761,   764,   765,   768,   769,   772,
     773,   776,   777,   780,   781,   782,   783,   784,   796,   800,
     807,   813,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,   833,   834,   844,   843,   850,   851,
     854,   855,   856,   859,   865,   874,   878,   879,   882,   883,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     898,   903,   906,   912,   920,   924,   930,   938,   942,   949,
     950,   953,   954,   961,   967,   974,   983,   994,  1005,  1006,
    1007,  1010,  1021,  1027,  1028,  1031,  1032,  1035,  1036,  1039,
    1045,  1051,  1052,  1055,  1056,  1062,  1063,  1066,  1072,  1078,
    1084,  1086,  1089,  1093,  1096,  1097,  1100,  1101,  1104,  1105,
    1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,
    1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,
    1128,  1129,  1132,  1135,  1138,  1139,  1142,  1143,  1159,  1162,
    1163,  1166,  1167,  1172,  1175,  1176,  1179,  1182,  1185,  1186,
    1189,  1190,  1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,
    1202,  1207,  1208,  1211,  1212,  1215,  1216,  1222,  1221,  1229,
    1230,  1233,  1236,  1239,  1240,  1243,  1244,  1247,  1248,  1249,
    1250,  1254,  1255,  1258,  1259,  1262,  1268,  1276,  1277,  1278,
    1279,  1282,  1287,  1288,  1293,  1296,  1297,  1300,  1303,  1304,
    1307,  1308,  1311,  1312,  1315,  1316,  1321,  1322,  1327,  1330,
    1331,  1334,  1335,  1338,  1339,  1342,  1345,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1356,  1357,  1360,  1363,  1364,
    1367,  1370,  1377,  1380,  1383,  1386,  1389,  1392
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
  "namespace_member_declarations_opt", "namespace_declaration", "$@1",
  "comma_opt", "qualified_identifier", "qualifier", "namespace_body",
  "using_directives", "using_directive", "using_alias_directive",
  "using_namespace_directive", "namespace_member_declarations",
  "namespace_member_declaration", "type_declaration", "modifiers_opt",
  "modifiers", "modifier", "class_declaration", "$@2", "class_base_opt",
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
  "variable_initializer_list", "interface_declaration", "$@3",
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

#define YYPACT_NINF -778

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-778)))

#define YYTABLE_NINF -553

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -25,   166,   248,   185,   -25,  -778,  -778,  -778,   -22,    17,
    -778,   347,  -778,   669,  -778,   157,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,   185,  -778,   196,  -778,  -778,   370,
    -778,  -778,   218,  -778,  -778,  -778,   370,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,   323,  2649,
    -778,  1314,  -778,  -778,   335,   304,    43,  -778,  -778,   417,
    2552,   427,   432,   441,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,   370,  -778,   298,  -778,  -778,   367,
     343,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,   376,  -778,   387,  -778,
     516,  -778,  -778,  -778,  -778,  -778,  -778,   516,   516,   509,
     414,   446,   459,  -778,  -778,   161,  -778,   479,  -778,   -25,
     484,    41,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
     505,   338,   486,  -778,   370,  -778,  -778,   370,   511,  -778,
     219,  -778,  2346,  -778,  -778,   288,  -778,  -778,  -778,   517,
     519,   513,   290,  -778,   308,   484,   519,   518,   519,   309,
     484,  -778,  -778,  -778,  -778,  -778,  -778,  -778,   144,   515,
    -778,  2595,  -778,   520,  -778,  -778,   529,   530,  2059,  2346,
    2346,  2346,  2346,  2346,  2346,  2346,  2346,  -778,  -778,   512,
     538,   145,   545,  -778,  -778,  -778,  -778,   546,   522,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,   361,  -778,  -778,  -778,   436,  -778,   392,    18,
     350,    10,   402,   507,   531,   533,   521,   151,  -778,  -778,
    -778,   272,   554,   315,   370,   370,   331,   484,   324,   553,
     560,  -778,  -778,  -778,   657,   561,   564,  -778,  -778,   333,
     484,  2649,  -778,  -778,  -778,  -778,    -4,  -778,  -778,  -778,
    -778,  -778,   562,   341,  -778,  -778,  -778,  2346,   661,  2346,
     376,   -21,   567,   233,  2595,  2619,  2346,    21,    29,    46,
     434,   563,   165,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,   664,   667,  2346,   668,  1858,  -778,  2346,  -778,  -778,
     670,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  2346,  2346,  2346,  2346,  2346,  2346,  2346,  2346,
    2595,  2595,  2346,  2346,  2346,  2346,  2346,  2346,  2346,  2346,
    2346,  2346,  2346,  2346,  2346,  1858,  -778,   519,  -778,  2649,
    -778,   571,   342,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  2595,  -778,  2595,    83,   185,
     555,  -778,   353,   625,   580,   360,  -778,  -778,  -778,  -778,
    -778,  -778,  2503,  1512,  -778,  -778,  -778,  -778,  -778,   263,
    -778,   579,  1858,  2346,  1944,  -778,   -66,   176,   198,   585,
    -778,  -778,   587,    21,  -778,   589,   590,  2145,  2432,    21,
    -778,  -778,   409,  -778,  2346,  2346,   586,  -778,   591,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,   392,   392,    18,
      18,   387,   387,   350,   350,   350,   350,    10,    10,   402,
     507,   531,   533,   588,   521,   412,   593,   913,  -778,  -778,
      50,    51,  -778,  -778,  -778,  2346,  -778,  -778,  -778,  1073,
    -778,  -778,   146,  2595,  2595,   645,   646,    54,    33,  -778,
     240,  -778,  -778,   243,   435,    84,   372,  2595,    88,  1628,
     597,   599,   600,   285,   602,   604,  2346,   605,  2346,   609,
     415,   609,   608,   613,  -778,    55,   512,   538,    95,    99,
     100,   107,   117,   134,   436,  -778,  -778,  -778,  -778,   615,
    1512,  -778,  -778,  -778,   101,   105,  -778,   106,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,    27,
    -778,  -778,   618,   430,  2595,  -778,  -778,  -778,  -778,   621,
     627,  -778,  -778,  -778,  -778,  2346,  -778,  2346,  2346,  2346,
    -778,   626,  -778,  -778,  -778,  -778,  1858,  -778,  2346,  -778,
    -778,   727,  -778,  -778,  -778,  -778,  2595,    57,    37,   290,
      62,    68,  2595,  2595,   629,   215,  1171,   635,   103,  -778,
     638,    39,   639,   641,  -778,  -778,  -778,  -778,  -778,  -778,
    1512,  -778,  -778,  -778,    62,  -778,  -778,   662,  2595,  2260,
    2595,   111,  2346,   124,  2346,  2346,  -778,   130,  2346,   143,
      31,  -778,  -778,  2260,  2346,   622,   653,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,   516,   -18,  -778,  1743,
    -778,  -778,  -778,  -778,  2346,  -778,  -778,   650,    69,   652,
     654,   659,   655,   640,   122,  -778,   189,  -778,   223,   237,
     290,  1944,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,   660,   185,  -778,   756,  -778,   290,
     663,  -778,   185,   185,  -778,   671,   665,    71,  -778,  -778,
     160,  -778,   672,    72,  -778,  -778,   174,  -778,  -778,  -778,
     674,   676,  -778,  -778,   678,  -778,  -778,   449,   609,    31,
    -778,  -778,  -778,  -778,   680,   681,   666,   516,  2346,  -778,
    -778,  -778,   684,   253,   290,   290,   673,   185,   682,  2346,
    -778,   761,  -778,  -778,   688,  2595,  2595,   687,  -778,  2595,
     433,  -778,   689,   185,   480,   494,   690,   364,   375,  2346,
     651,   260,  -778,  2346,  2346,  2346,   729,  -778,  -778,  1628,
    1628,   693,    41,  -778,  -778,  -778,  -778,  1628,  1628,  -778,
    -778,  -778,   675,   609,   694,  -778,  -778,   695,   696,   185,
     481,   235,  -778,  -778,  -778,  -778,   185,    73,    74,  -778,
      75,  -778,  -778,   699,  -778,  -778,  -778,  -778,   707,  -778,
    -778,   679,  -778,  -778,   700,  2346,   801,  1628,  -778,   805,
    -778,   701,  -778,  2346,   781,  -778,   289,  -778,   806,   806,
    -778,  -778,  -778,  -778,  -778,   253,   253,   500,   711,  -778,
     714,   715,   478,   712,   185,   185,   717,   721,   278,  -778,
     291,   291,  -778,   175,  -778,  -778,  -778,  2346,  2346,   722,
    1628,  2346,   719,   726,   289,  -778,  1396,  -778,  -778,   730,
     731,  -778,  -778,   253,   253,  -778,   718,  1858,  1858,  -778,
    -778,  -778,   733,  -778,   737,  -778,  -778,  -778,  2595,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,   732,  -778,   672,
     734,  1628,  -778,   735,  -778,  -778,  -778,  1512,  -778,   609,
     609,   380,   388,  -778,   185,   736,   741,   609,   609,  -778,
      76,  -778,  -778,  1628,  1628,  -778,  -778,  -778,  -778,   742,
     747,   744,  -778,  -778,  -778,  -778,   743,  -778,  -778,   253,
     253,  -778,  -778,  -778,  -778,  -778,  -778,  -778
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     306,     0,     0,   308,   307,   321,   323,   324,   316,     0,
      10,     0,     1,   338,   331,   308,   329,   332,   333,   334,
     335,   336,   337,   309,   528,   529,     0,   322,   318,     0,
     328,   327,   317,   342,   343,   344,     0,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,     0,   339,
     340,   338,   330,   530,   533,   316,     0,   319,   312,     0,
       0,     0,     0,     0,   341,   538,   543,   536,   537,   539,
     540,   541,   542,   544,     0,   534,     0,   326,   325,     0,
     358,    20,    25,    32,    23,    34,    33,    28,    30,    35,
      24,    26,    36,    29,    31,    27,   390,    15,   389,    12,
      14,    16,    19,    21,    22,    17,    18,    13,    11,     0,
     515,   489,   464,   550,    11,     0,   545,   548,   535,   306,
     314,     0,   356,   359,    38,    37,    44,    40,    39,    41,
       0,     0,     0,   516,     0,   487,   490,     0,     0,   465,
       0,   553,    75,   547,   549,   308,   315,   313,   363,   360,
     361,     0,   308,   517,   308,   314,   491,     0,   466,   308,
     314,   553,   546,   531,     3,     4,     5,     6,     0,     0,
       9,     0,     7,     0,    79,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     2,     0,
       0,    97,    52,    51,    55,    56,    57,     0,    76,    58,
      59,    99,   100,    60,    84,    54,    61,    63,    64,   101,
     114,    62,   102,   108,   112,   113,   127,   105,   131,   134,
     137,   144,   147,   149,   151,   153,   155,   157,   171,   172,
      77,    98,     0,   308,     0,     0,   308,   314,   398,     0,
     388,   393,   395,   396,     0,     0,   521,   522,   514,   308,
     314,   338,   480,   472,   473,   474,     0,   475,   476,   477,
     478,   479,     0,   308,   470,   463,   532,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,   121,   121,   121,
     131,     0,    98,   109,   110,   111,    95,   103,   104,   106,
     107,     0,     0,     0,     0,    71,   551,     0,    82,    83,
       0,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,   320,   362,   364,   338,
     379,     0,   308,   368,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   357,   400,     0,   399,     0,     0,   308,
     524,   518,   308,   503,     0,   308,   495,   497,   498,   500,
     499,   488,     0,   192,   392,   391,   384,   467,   471,     0,
      80,     0,    71,     0,   483,    87,     0,     0,     0,     0,
     126,   125,     0,   122,   123,     0,     0,     0,    65,   121,
      67,    68,     0,    66,     0,     0,    72,    46,     0,    48,
      78,    94,   159,   128,   129,   130,   127,   132,   133,   135,
     136,   143,   142,   139,   138,   140,   141,   145,   146,   148,
     150,   152,   154,     0,   156,     0,     0,     0,   365,   369,
       0,     0,   527,   526,   394,     0,   519,   523,   504,     0,
     492,   496,   316,     0,     0,     0,     0,     0,     0,   556,
       0,   424,   425,     0,   316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   279,     0,   279,     0,
       0,     0,     0,     0,   196,     0,    16,    17,    56,    99,
     100,    84,   112,   113,     0,   219,   194,   177,   178,     0,
     193,   179,   175,   176,     0,     0,   180,     0,   181,   224,
     225,   182,   189,   239,   240,   241,   242,   183,   262,   263,
     264,   265,   266,   184,   185,   186,   187,   188,   190,    98,
      81,    92,     0,     0,     0,   207,   485,   209,   208,     0,
     484,    96,    91,    90,    93,     0,   124,     0,     0,     0,
     115,     0,    73,    50,    45,    49,     0,    69,     0,    74,
      70,     0,   401,   397,   173,   525,     0,     0,     0,   308,
       0,     0,     0,     0,     0,   205,     0,     0,     0,   203,
     556,     0,     0,     0,   460,   459,   423,   462,   461,   452,
       0,   268,   267,   294,     0,   270,   269,     0,     0,   249,
       0,     0,     0,     0,     0,     0,   280,     0,     0,     0,
       0,   295,   243,     0,     0,   205,   202,   191,   195,   200,
     198,   201,   199,   216,   215,    85,    42,     0,   481,     0,
     120,   118,   119,   116,     0,    47,   158,     0,     0,     0,
     556,     0,     0,     0,     0,   212,     0,   554,     0,     0,
     308,     0,   435,   434,   446,   447,   428,   429,   436,   437,
     438,   439,   440,   430,   431,   441,   442,   443,   444,   445,
     449,   448,   432,   433,     0,   308,   383,     0,   382,   308,
       0,   422,   308,   308,   197,   211,     0,     0,   255,   259,
       0,   250,   256,     0,   274,   271,     0,   276,   273,   174,
       0,     0,   278,   277,     0,   282,   281,     0,     0,   283,
     286,   284,   299,   298,     0,     0,    88,    42,     0,   482,
     486,   117,     0,     0,   308,   308,     0,   308,   454,     0,
     381,     0,   380,   413,     0,     0,     0,     0,   206,     0,
       0,   204,     0,   308,     0,     0,     0,   308,   308,     0,
       0,     0,   301,   251,   251,     0,     0,   275,   272,     0,
       0,     0,     0,   290,   293,   287,   285,     0,     0,    86,
      89,    43,     0,     0,     0,   512,   511,     0,     0,   308,
       0,     0,   453,   455,   214,   213,   308,     0,     0,   386,
       0,   420,   385,     0,   421,   557,   557,   557,     0,   403,
     406,     0,   404,   408,     0,     0,     0,     0,   257,     0,
     252,     0,   260,     0,   226,   296,   230,   228,   291,   291,
     297,   244,   210,   458,   513,     0,     0,     0,     0,   556,
       0,     0,     0,     0,   308,   308,     0,     0,     0,   557,
       0,     0,   419,     0,   303,   302,   300,   253,   253,     0,
       0,     0,     0,     0,   231,   232,     0,   235,   292,     0,
       0,   502,   501,     0,     0,   557,     0,    71,    71,   555,
     555,   555,     0,   415,     0,   416,   451,   450,     0,   426,
     402,   412,   411,   556,   556,   246,   245,     0,   254,   258,
       0,     0,   227,     0,   238,   229,   233,   234,   236,     0,
       0,   308,   308,   505,   308,     0,     0,     0,     0,   414,
       0,   409,   410,     0,     0,   261,   237,   289,   288,     0,
       0,     0,   456,   457,   554,   554,     0,   248,   247,     0,
       0,   557,   417,   418,   427,   509,   510,   506
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -778,  -778,  -778,  -778,   -70,   -49,   677,  -778,    11,  -778,
     720,  -778,   -58,  -778,   683,   132,   -73,   445,  -778,   296,
    -778,  -778,  -778,  -778,  -321,  -329,  -778,  -778,  -251,  -778,
    -778,    56,   116,  -778,   287,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,  -778,  -778,   455,   297,   422,   312,  -778,  -256,
    -778,   462,  -164,   284,   147,   270,   534,   535,   528,   537,
     532,  -778,  -778,   493,  -778,   510,  -593,  -589,  -495,  -430,
    -187,  -778,    13,  -778,  -778,  -778,  -322,  -452,   193,  -601,
    -778,  -778,   279,   141,  -778,  -596,  -778,  -778,  -778,  -778,
    -778,  -778,    20,  -778,    23,  -778,  -778,  -778,  -778,  -778,
    -778,   126,    34,  -778,  -778,  -778,   282,  -778,  -778,  -778,
    -778,  -778,  -778,   407,  -778,  -778,  -778,   179,    81,   181,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,    86,  -778,   776,
      -3,  -778,  -778,  -778,   162,     0,   447,  -778,  -778,   903,
    -778,  -778,   764,    -5,  -146,  -225,  -778,   861,  -778,  -778,
    -778,  -778,   108,  -778,  -778,  -778,   574,   -59,   -44,   -42,
    -778,  -552,  -778,  -778,  -635,   559,  -778,  -778,  -778,   -17,
     170,  -778,  -778,   171,   173,    80,   -14,  -778,    89,    91,
      -9,  -778,  -778,     3,  -778,  -778,  -778,  -778,     4,  -778,
    -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,   685,  -266,  -778,  -778,  -778,  -778,  -778,  -778,  -778,
    -778,  -778,   565,  -778,  -778,  -778,  -778,    25,  -778,  -560,
    -778,  -778,  -778,  -778,  -778,  -778,   570,  -778,  -778,  -778,
     911,  -778,  -778,  -778,  -778,   787,  -778,  -778,  -778,  -778,
     778,  -320,  -264,  -572,  -777
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   187,   188,     9,    97,   485,    99,   100,   189,   102,
     103,   104,   190,   106,   107,   716,   391,   553,   406,   407,
     191,   192,   193,   194,   195,   408,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   769,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   392,
     393,   394,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   312,   409,   565,   808,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   578,   579,   536,
     537,   505,   644,   645,   506,   507,   508,   509,   510,   817,
     853,   854,   855,   856,   857,   511,   512,   513,   514,   515,
     690,   809,   887,   691,   810,   888,   889,   516,   517,   518,
     519,   520,   521,   607,   522,   523,   709,   710,   859,   711,
     524,   525,   526,   527,   714,   528,   751,   752,     2,     3,
     238,   232,    14,    79,   147,   231,    11,   120,     4,     5,
       6,     7,    15,    16,    17,    48,    49,    50,    18,   151,
     122,   123,   150,   237,   341,   342,   343,   253,   254,   255,
     256,   239,   109,   376,   240,   241,   242,   357,   243,   257,
     746,   799,   802,   747,   748,   883,   258,   833,   834,   835,
     259,   459,   582,   260,   460,   461,   674,   462,   261,   463,
     782,   783,   352,   586,   589,    19,   138,   139,   160,   262,
     263,   264,   538,   539,   540,    20,   157,   135,   136,   250,
     364,   365,   366,   367,   449,   368,   369,   828,   370,   776,
      21,   132,   133,   155,   245,   246,   247,    22,    23,    24,
      25,    74,    75,    76,   115,   116,   143,   117,   144,    26,
     163,   734,   907,   583,   840
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    10,   105,   689,   113,   618,   436,   385,   680,   696,
      52,    98,    51,   252,   280,   700,   379,   642,    30,   841,
     842,   320,   395,   396,   126,   715,   372,   127,   720,    56,
     126,   -11,   126,   616,   128,   129,    58,   575,   541,   597,
     740,   640,   402,    32,    77,    55,   125,   744,   707,   126,
     738,   148,   488,   532,   562,   563,   321,     1,    55,   615,
     108,   639,   880,   149,   148,   708,   643,   148,   726,   375,
     113,   101,   575,   723,   114,   750,   756,   836,   837,   838,
     926,   718,   382,   435,   442,   591,   576,    28,   903,   595,
     340,   125,   780,    89,   125,   684,  -217,   373,   737,    29,
    -220,  -221,   619,   374,   676,   577,   621,   623,  -218,   641,
      92,   681,   694,   105,   437,   322,   323,   252,  -222,   646,
     279,   114,   271,   730,    31,   697,   334,   742,   316,   317,
     335,   702,   533,   390,   114,  -223,   784,   114,   291,   -11,
     114,   390,    51,   551,   705,   125,   324,   325,   488,   125,
      78,   244,   417,   418,   937,   292,   251,  -305,   390,   812,
     804,   753,   125,   125,   148,   338,   124,   125,   126,   124,
       8,   108,   777,   778,   125,   757,   885,   344,   282,   488,
     125,   125,   101,   125,   125,   125,   125,   125,   125,   278,
     443,   592,   345,  -217,   346,   596,   340,  -220,  -221,  -217,
     128,   677,  -217,  -220,  -221,  -218,  -220,  -221,   620,   399,
     678,  -218,   622,   624,  -218,  -222,   105,   105,   695,   347,
     731,  -222,   348,    55,  -222,   386,   388,   349,    52,   732,
      51,   698,  -223,   339,   114,   114,   126,   703,  -223,   350,
     351,  -223,   156,   267,   293,   158,   363,   830,    12,   569,
     706,   689,   689,   268,   294,    28,  -552,   866,   893,   140,
     251,   141,   105,   105,   334,   861,   862,   754,   335,   488,
     332,   421,   422,   585,   108,   108,   588,   688,   488,   593,
     542,   758,   886,   344,  -552,   101,   101,   677,   124,   601,
     333,   713,   610,   611,   612,    54,   733,   105,   345,   105,
     346,   602,   543,   901,   902,   851,   440,   831,   441,   603,
     125,   911,   912,   852,   105,   487,  -316,   248,  -316,   161,
     108,   108,   265,   458,    28,   347,   735,    57,   348,   814,
     815,   101,   101,   349,   384,   125,   651,   820,   821,   339,
     736,   373,   337,    59,   373,   350,   351,   584,    60,   125,
     587,    32,    61,    82,   774,   108,    83,   108,   806,   244,
     775,   297,   363,   530,   807,    65,   101,    62,   101,   935,
     936,   334,   108,   529,    55,   335,   878,   846,   354,   105,
     355,    87,   879,   101,   486,   356,    88,  -552,   458,  -552,
    -310,   105,   373,    63,  -387,   105,   105,    66,   881,   353,
     568,    90,   618,    91,   570,   571,   118,  -552,  -552,   105,
    -520,  -468,   371,    28,  -552,    93,    94,  -311,   594,    95,
     892,    80,    67,    68,    69,    70,    71,    72,    73,   489,
    -552,   110,  -552,  -366,   488,  -493,   111,   108,   488,   488,
    -552,  -552,   487,  -469,  -367,   112,   488,   488,   101,   108,
     770,   121,  -552,   108,   108,   446,   129,   574,   580,  -552,
     101,   915,  -494,  -552,   101,   101,  -405,   108,   119,   423,
     424,   425,   426,   373,  -552,   269,   105,  -407,   101,  -552,
     318,   319,  -507,   927,   928,   627,   488,  -552,   124,   490,
    -508,   283,   284,   285,   286,   287,   288,   289,   290,   125,
     529,   298,   299,   300,   313,   314,   315,   297,   105,   552,
     297,   486,   559,   130,   105,   105,   373,   638,   276,   126,
     763,   764,   131,   648,   649,   489,   488,   488,   297,   488,
     626,   359,   487,   791,   108,   488,   326,   327,   905,   906,
     105,   487,   105,   590,    28,   101,   397,   314,   315,   687,
     373,   693,   762,   717,   134,   487,   489,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   108,   137,   310,   311,
     488,   647,   108,   108,   869,   870,   488,   101,   359,   359,
     794,   829,   142,   101,   101,   490,   823,   154,   795,   796,
     529,   146,   488,   488,   863,   864,   427,   428,   108,   529,
     108,   486,   419,   420,   932,   933,   908,   909,   152,   101,
     486,   101,   159,   529,   236,   234,   490,   235,   269,   249,
     297,   291,   328,   274,   486,   413,   414,   415,   416,   416,
     416,   416,   275,   276,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   717,   416,   489,   292,   295,   330,
     296,   329,   230,   882,   882,   489,   336,   358,   359,   331,
     491,   360,   362,   361,   377,   380,   383,   398,   400,  -304,
     492,   401,   403,   438,   411,   448,   445,   105,   105,    33,
     745,   105,   450,   531,   556,   494,   787,   788,   281,   544,
     790,   545,   818,   547,   548,   557,   558,   560,   572,   573,
     598,    34,   599,   600,   819,   604,   490,   605,   608,   413,
     373,   613,   917,   918,    35,   490,   614,   617,    36,    37,
     924,   925,   625,   628,    38,   629,    39,    40,    41,    42,
     634,   637,   650,    43,   675,   108,   108,    44,   682,   108,
     745,   679,   683,   651,   798,   801,   101,   101,   686,    45,
     101,   677,    46,   722,    47,   724,   491,   725,   727,   728,
     615,   729,   114,   739,   743,   643,   492,   384,   749,   731,
     755,   813,   805,   795,   779,   822,   827,   230,   759,   381,
     760,   494,   761,   832,   767,   768,   389,   491,   773,   786,
     781,   789,   797,   792,   816,   493,   824,   492,   487,   825,
     826,   839,   796,   230,   843,   750,   847,   410,   848,   850,
     858,   489,   494,   865,   871,   489,   489,   867,   868,   904,
     105,   876,   412,   489,   489,   877,   891,   894,   895,   910,
     870,   872,   874,   869,   899,   900,   913,   929,   914,   487,
     922,   930,   433,   916,   230,   923,   931,   934,   272,   771,
     555,   153,   635,   550,   273,   546,   529,   630,   431,   631,
     632,   633,   429,   489,   430,   434,   495,   486,   432,   897,
     741,   490,   785,   685,   896,   490,   490,   491,   108,   898,
     811,   692,   890,   490,   490,   609,   491,   492,   765,   101,
     766,   493,   845,   230,   535,   145,   492,   529,   919,   920,
     860,   827,   494,   489,   489,   581,   489,    27,   486,   233,
      64,   494,   489,   793,   554,   554,   439,   452,   444,   803,
     800,   884,   493,   490,   875,   873,    81,   162,    82,   921,
     451,    83,   447,    59,   453,    53,    84,     0,    60,   266,
      85,     0,    61,   454,   455,     0,   721,   489,   378,    86,
       0,     0,     0,   489,   456,   564,    87,    62,     0,     0,
       0,    88,   495,   490,   490,    89,   490,     0,     0,   489,
     489,     0,   490,     0,     0,     0,    90,     0,    91,     0,
       0,     0,    92,    63,     0,     0,   606,     0,   606,     0,
      93,    94,     0,   495,    95,     0,     0,   457,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,     0,     0,
       0,     0,   493,   490,     0,     0,     0,     0,     0,     0,
       0,   493,     0,     0,     0,     0,     0,     0,     0,   490,
     490,   561,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   491,     0,     0,     0,   491,   491,     0,     0,
       0,     0,   492,     0,   491,   491,   492,   492,     0,     0,
       0,     0,     0,     0,   492,   492,     0,   494,   636,     0,
       0,   494,   494,     0,     0,     0,     0,    55,     0,   494,
     494,     0,     0,   495,     0,     0,    81,     0,    82,     0,
       0,    83,   495,     0,   491,     0,    84,     0,     0,     0,
      85,     0,     0,   566,   492,     0,     0,     0,     0,    86,
       0,     0,   564,     0,   699,   701,    87,     0,   704,   494,
       0,    88,     0,   712,   699,    89,     0,     0,     0,     0,
       0,     0,     0,     0,   491,   491,    90,   491,    91,   535,
       0,     0,    92,   491,   492,   492,     0,   492,     0,     0,
      93,    94,     0,   492,    95,     0,     0,   567,     0,   494,
     494,   535,   494,     0,     0,     0,     0,     0,   494,     0,
       0,     0,     0,     0,     0,     0,     0,   493,   491,     0,
       0,   493,   493,     0,   491,     0,     0,     0,   492,   493,
     493,     0,     0,     0,   492,     0,     0,     0,     0,     0,
     491,   491,     0,   494,   652,     0,     0,     0,     0,   494,
     492,   492,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   494,   494,     0,   772,   493,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   564,
       0,     0,     0,     0,     0,   653,     0,     0,   495,     0,
       0,     0,   495,   495,     0,     0,     0,     0,     0,   699,
     495,   495,     0,   699,   699,     0,     0,     0,     0,   493,
     493,     0,   493,     0,     0,     0,   654,   655,   493,     0,
       0,   656,   657,   658,   659,   660,   661,   662,   663,   664,
       0,   665,     0,     0,     0,     0,     0,     0,     0,     0,
     495,   666,   667,     0,     0,   668,   669,   670,   671,     0,
       0,   672,   673,   493,     0,   844,     0,     0,     0,   493,
       0,     0,     0,   849,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   493,   493,     0,     0,     0,
     495,   495,     0,   495,     0,     0,    34,     0,     0,   495,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,   564,     0,    36,    37,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,     0,     0,     0,    43,     0,
       0,     0,    44,     0,   495,     0,     0,     0,     0,     0,
     495,     0,     0,     0,    45,     0,     0,    46,     0,    47,
     464,     0,   164,   165,   166,   167,   495,   495,   168,    81,
     465,    82,   851,     0,    83,   466,     0,   467,   468,    84,
     852,     0,   469,    85,     0,     0,     0,     0,     0,   170,
       0,   470,    86,   471,   472,   473,   474,     0,     0,    87,
       0,     0,     0,   475,    88,     0,   171,   172,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   476,    90,
       0,    91,   173,     0,     0,    92,     0,   477,   174,   478,
     175,   479,   176,    93,    94,   480,   481,    95,   482,     0,
     270,     0,   483,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,     0,   178,
       0,     0,     0,   484,     0,     0,   179,   180,   181,     0,
       0,   182,     0,   183,   184,     0,   464,     0,   164,   165,
     166,   167,     0,     0,   168,    81,   465,    82,     0,     0,
      83,   466,     0,   467,   468,    84,   185,   186,   469,    85,
       0,     0,     0,     0,     0,   170,     0,   470,    86,   471,
     472,   473,   474,     0,     0,    87,     0,     0,     0,   475,
      88,     0,   171,   172,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,    90,     0,    91,   173,     0,
       0,    92,     0,   477,   174,   478,   175,   479,   176,    93,
      94,   480,   481,    95,   482,     0,   270,     0,   483,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,   178,     0,     0,     0,   484,
       0,     0,   179,   180,   181,     0,     0,   182,     0,   183,
     184,     0,    55,     0,   164,   165,   166,   167,     0,     0,
     168,    81,   465,    82,     0,     0,    83,   466,     0,     0,
     468,    84,   185,   186,   469,    85,     0,     0,     0,     0,
       0,   170,     0,   470,    86,   471,   472,   473,   474,     0,
       0,    87,     0,     0,     0,   475,    88,     0,   171,   172,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     476,    90,     0,    91,   173,     0,     0,    92,     0,   477,
     174,   478,   175,   479,   176,    93,    94,   480,   481,    95,
     482,     0,     0,     0,   483,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
       0,   178,     0,     0,     0,   484,     0,     0,   179,   180,
     181,     0,     0,   182,     0,   183,   184,    55,     0,   164,
     165,   166,   167,     0,     0,   168,    81,     0,    82,     0,
       0,    83,   169,     0,     0,     0,    84,     0,   185,   186,
      85,     0,     0,     0,     0,     0,   170,     0,     0,    86,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,    88,     0,   171,   172,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,    91,   173,
     534,     0,    92,     0,     0,   174,     0,   175,     0,   176,
      93,    94,   177,     0,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   384,   719,   178,     0,     0,     0,
       0,     0,     0,   179,   180,   181,     0,     0,   182,     0,
     183,   184,    55,     0,   164,   165,   166,   167,     0,     0,
     168,    81,     0,    82,     0,     0,    83,   169,     0,     0,
       0,    84,     0,   185,   186,    85,     0,     0,     0,     0,
       0,   170,     0,     0,    86,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,    88,     0,   171,   172,
      89,     0,   404,     0,     0,     0,     0,     0,     0,   405,
       0,    90,     0,    91,   173,     0,     0,    92,     0,     0,
     174,     0,   175,     0,   176,    93,    94,   177,     0,    95,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
     164,   165,   166,   167,     0,     0,   168,    81,     0,    82,
       0,   178,    83,   169,     0,     0,     0,    84,   179,   180,
     181,    85,     0,   182,     0,   183,   184,   170,     0,     0,
      86,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,    88,     0,   171,   172,    89,     0,   185,   186,
       0,     0,     0,     0,     0,     0,     0,    90,     0,    91,
     173,   534,     0,    92,     0,     0,   174,     0,   175,     0,
     176,    93,    94,   177,     0,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   384,     0,   178,     0,     0,
       0,     0,     0,     0,   179,   180,   181,     0,     0,   182,
       0,   183,   184,    55,     0,   164,   165,   166,   167,     0,
       0,   168,    81,     0,    82,     0,     0,    83,   169,     0,
       0,     0,    84,     0,   185,   186,    85,     0,     0,     0,
       0,     0,   170,     0,     0,    86,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,    88,     0,   171,
     172,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,     0,    91,   173,     0,     0,    92,     0,
       0,   174,     0,   175,     0,   176,    93,    94,   177,     0,
      95,     0,     0,   277,     0,     0,     0,     0,     0,    55,
       0,   164,   165,   166,   167,     0,     0,   168,    81,     0,
      82,     0,   178,    83,   169,     0,     0,     0,    84,   179,
     180,   181,    85,     0,   182,     0,   183,   184,   170,     0,
       0,    86,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,    88,     0,   171,   172,    89,     0,   185,
     186,     0,     0,     0,     0,     0,     0,     0,    90,     0,
      91,   173,     0,     0,    92,     0,     0,   174,     0,   175,
       0,   176,    93,    94,   177,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   549,
       0,     0,     0,     0,     0,   179,   180,   181,     0,     0,
     182,     0,   183,   184,    55,     0,   164,   165,   166,   167,
       0,     0,   168,    81,     0,    82,     0,     0,    83,   169,
       0,     0,     0,    84,     0,   185,   186,    85,     0,     0,
       0,     0,     0,   170,     0,     0,    86,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,    88,     0,
     171,   172,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,    91,   173,     0,     0,    92,
       0,     0,   174,     0,   175,     0,   176,    93,    94,   177,
       0,    95,     0,     0,   270,     0,     0,     0,     0,     0,
      55,     0,   164,   165,   166,   167,     0,     0,   168,    81,
       0,    82,     0,   178,    83,   169,     0,     0,     0,    84,
     179,   180,   181,    85,     0,   182,     0,   183,   184,   170,
       0,     0,    86,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,    88,     0,   171,   172,    89,     0,
     185,   186,     0,     0,     0,     0,     0,     0,     0,    90,
       0,    91,   173,     0,     0,    92,     0,     0,   174,     0,
     175,     0,   176,    93,    94,   177,     0,    95,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,   164,   165,
     166,   167,     0,     0,   168,    81,     0,    82,     0,   178,
      83,   169,     0,     0,     0,    84,   179,   180,   181,    85,
       0,   182,     0,   183,   184,   170,     0,     0,    86,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
      88,     0,   171,   172,    89,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,    90,     0,    91,   173,     0,
       0,    92,     0,     0,   174,     0,   175,   452,   176,    93,
      94,   177,     0,    95,     0,     0,    81,     0,    82,     0,
       0,    83,     0,    59,   453,     0,    84,     0,    60,     0,
      85,     0,    61,   454,   455,   178,     0,     0,     0,    86,
       0,     0,     0,     0,   456,     0,    87,    62,     0,   183,
     184,    88,     0,     0,     0,    89,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    90,    82,    91,     0,
      83,     0,    92,    63,     0,    84,     0,     0,     0,    85,
      93,    94,     0,     0,    95,     0,     0,   457,    86,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,    55,
      88,     0,     0,     0,    89,     0,     0,     0,    81,     0,
      82,     0,     0,    83,     0,    90,     0,    91,    84,     0,
       0,    92,    85,    55,     0,     0,     0,     0,     0,    93,
      94,    86,    81,    95,    82,     0,    96,    83,    87,     0,
       0,     0,    84,    88,     0,     0,    85,    89,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,    90,    33,
      91,     0,    87,     0,    92,     0,     0,    88,     0,     0,
       0,    89,    93,    94,     0,     0,    95,     0,     0,   270,
       0,    34,    90,     0,    91,     0,     0,     0,    92,     0,
       0,     0,     0,     0,    35,     0,    93,    94,     0,    37,
      95,     0,     0,   387,    38,     0,    39,    40,    41,    42,
       0,     0,     0,    43,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,     0,    47
};

static const yytype_int16 yycheck[] =
{
       3,     1,    60,   599,    74,   500,   335,   273,   580,   602,
      15,    60,    15,   159,   178,   604,   267,   569,     1,   796,
     797,    11,   278,   279,     3,   614,   251,   100,   629,    29,
       3,     4,     3,   485,   107,   108,    36,     4,   104,   469,
     675,     4,   293,     4,     1,     4,   112,   682,    17,     3,
     651,   121,   373,   382,     4,     4,    46,    82,     4,     4,
      60,     4,   839,   121,   134,    34,     4,   137,   640,   256,
     140,    60,     4,     4,    74,     4,     4,     4,     4,     4,
       4,    99,   103,   334,     1,     1,    53,   109,   865,     1,
     236,   112,   727,    52,   112,   590,     1,   101,   650,   121,
       1,     1,     1,   107,     1,    72,     1,     1,     1,    72,
      69,    72,     1,   171,   339,   105,   106,   263,     1,   571,
     178,   121,   171,     1,   107,     1,    99,   679,   110,   111,
     103,     1,   383,   112,   134,     1,   729,   137,   109,   112,
     140,   112,   145,   399,     1,   112,   136,   137,   469,   112,
     107,   154,   316,   317,   931,   109,   159,     0,   112,   755,
     749,     1,   112,   112,   234,   235,   112,   112,     3,   112,
       4,   171,   724,   725,   112,     1,     1,   236,   178,   500,
     112,   112,   171,   112,   112,   112,   112,   112,   112,   178,
     107,   107,   236,    98,   236,   107,   342,    98,    98,   104,
     273,    98,   107,   104,   104,    98,   107,   107,   107,   282,
     107,   104,   107,   107,   107,    98,   274,   275,   107,   236,
      98,   104,   236,     4,   107,   274,   275,   236,   233,   107,
     233,   107,    98,   236,   234,   235,     3,   107,   104,   236,
     236,   107,   134,    99,    99,   137,   249,    12,     0,   103,
     107,   847,   848,   109,   109,   109,    99,   829,   851,    98,
     263,   100,   320,   321,    99,   825,   826,   107,   103,   590,
     119,   320,   321,   460,   274,   275,   463,   599,   599,   466,
     104,   107,   107,   342,    99,   274,   275,    98,   112,     4,
     139,   613,   479,   480,   481,    99,   107,   355,   342,   357,
     342,    16,   104,   863,   864,    16,   355,    72,   357,    24,
     112,   883,   884,    24,   372,   373,   101,   155,   103,   100,
     320,   321,   160,   372,   109,   342,   103,   109,   342,   759,
     760,   320,   321,   342,   101,   112,   121,   767,   768,   342,
     103,   101,   234,    20,   101,   342,   342,   107,    25,   112,
     107,     4,    29,    15,   101,   355,    18,   357,    98,   362,
     107,    98,   365,   100,   104,    30,   355,    44,   357,   929,
     930,    99,   372,   373,     4,   103,    98,   807,    54,   437,
      56,    43,   104,   372,   373,    61,    48,    99,   437,    99,
     102,   449,   101,    70,   104,   453,   454,    62,   107,   237,
     449,    63,   897,    65,   453,   454,   108,    99,    99,   467,
     102,   102,   250,   109,    99,    77,    78,   102,   467,    81,
     850,     4,    87,    88,    89,    90,    91,    92,    93,   373,
      99,     4,    99,   102,   755,   102,     4,   437,   759,   760,
      99,    99,   500,   102,   102,     4,   767,   768,   437,   449,
     716,   108,    99,   453,   454,   102,   529,   457,   458,    99,
     449,   891,   102,    99,   453,   454,   102,   467,   101,   322,
     323,   324,   325,   101,    99,   103,   534,   102,   467,    99,
     130,   131,   102,   913,   914,   534,   807,    99,   112,   373,
     102,   179,   180,   181,   182,   183,   184,   185,   186,   112,
     500,   140,   141,   142,   112,   113,   114,    98,   566,   100,
      98,   500,   100,     4,   572,   573,   101,   566,   103,     3,
     707,   708,   108,   572,   573,   469,   847,   848,    98,   850,
     100,    98,   590,   100,   534,   856,   134,   135,   867,   868,
     598,   599,   600,   108,   109,   534,   112,   113,   114,   598,
     101,   600,   103,   626,   108,   613,   500,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   566,   108,   132,   133,
     891,   571,   572,   573,    96,    97,   897,   566,    98,    98,
     100,   100,   103,   572,   573,   469,   773,   101,    94,    95,
     590,   107,   913,   914,    94,    95,   326,   327,   598,   599,
     600,   590,   318,   319,   924,   925,   870,   871,   103,   598,
     599,   600,   101,   613,   101,    98,   500,    98,   103,   101,
      98,   109,   115,   103,   613,   313,   314,   315,   316,   317,
     318,   319,   103,   103,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   717,   333,   590,   109,   103,   116,
     104,   120,   142,   840,   841,   599,   102,   104,    98,   138,
     373,     4,    98,   102,   102,     4,    99,   104,     4,     0,
     373,     4,     4,   102,     4,    50,   121,   735,   736,    10,
     683,   739,   102,   104,    98,   373,   735,   736,   178,   104,
     739,   104,   762,   104,   104,   104,   108,   104,    53,    53,
     103,    32,   103,   103,   762,   103,   590,   103,   103,   397,
     101,   103,   899,   900,    45,   599,   103,   102,    49,    50,
     907,   908,   104,   102,    55,    98,    57,    58,    59,    60,
     104,     4,   103,    64,    99,   735,   736,    68,    99,   739,
     743,   103,   101,   121,   747,   748,   735,   736,    86,    80,
     739,    98,    83,   103,    85,   103,   469,   103,    99,   104,
       4,   121,   762,   103,   101,     4,   469,   101,   103,    98,
      98,    42,   121,    94,   101,   100,   779,   267,   104,   269,
     104,   469,   104,   786,   104,   104,   276,   500,   104,   101,
     108,   104,   102,   104,   101,   373,   102,   500,   856,   104,
     104,   102,    95,   293,   104,     4,     1,   297,   107,    28,
       4,   755,   500,   102,   102,   759,   760,   103,   103,   101,
     878,   104,   312,   767,   768,   104,   104,   108,   102,   878,
      97,   834,   835,    96,   104,   104,   104,    95,   104,   897,
     104,    94,   332,   108,   334,   104,   102,   104,   171,   717,
     405,   131,   556,   398,   171,   393,   856,   545,   330,   547,
     548,   549,   328,   807,   329,   333,   373,   856,   331,   856,
     677,   755,   731,   594,   854,   759,   760,   590,   878,   856,
     754,   599,   848,   767,   768,   478,   599,   590,   709,   878,
     709,   469,   806,   383,   384,   119,   599,   897,   901,   902,
     819,   904,   590,   847,   848,   458,   850,     4,   897,   145,
      49,   599,   856,   743,   404,   405,   342,     4,   359,   748,
     747,   841,   500,   807,   835,   834,    13,   140,    15,   904,
     365,    18,   362,    20,    21,    24,    23,    -1,    25,   161,
      27,    -1,    29,    30,    31,    -1,   634,   891,   263,    36,
      -1,    -1,    -1,   897,    41,   445,    43,    44,    -1,    -1,
      -1,    48,   469,   847,   848,    52,   850,    -1,    -1,   913,
     914,    -1,   856,    -1,    -1,    -1,    63,    -1,    65,    -1,
      -1,    -1,    69,    70,    -1,    -1,   476,    -1,   478,    -1,
      77,    78,    -1,   500,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   891,    -1,    -1,
      -1,    -1,   590,   897,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   599,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   913,
     914,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   755,    -1,    -1,    -1,   759,   760,    -1,    -1,
      -1,    -1,   755,    -1,   767,   768,   759,   760,    -1,    -1,
      -1,    -1,    -1,    -1,   767,   768,    -1,   755,   558,    -1,
      -1,   759,   760,    -1,    -1,    -1,    -1,     4,    -1,   767,
     768,    -1,    -1,   590,    -1,    -1,    13,    -1,    15,    -1,
      -1,    18,   599,    -1,   807,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,   807,    -1,    -1,    -1,    -1,    36,
      -1,    -1,   602,    -1,   604,   605,    43,    -1,   608,   807,
      -1,    48,    -1,   613,   614,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   847,   848,    63,   850,    65,   629,
      -1,    -1,    69,   856,   847,   848,    -1,   850,    -1,    -1,
      77,    78,    -1,   856,    81,    -1,    -1,    84,    -1,   847,
     848,   651,   850,    -1,    -1,    -1,    -1,    -1,   856,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   755,   891,    -1,
      -1,   759,   760,    -1,   897,    -1,    -1,    -1,   891,   767,
     768,    -1,    -1,    -1,   897,    -1,    -1,    -1,    -1,    -1,
     913,   914,    -1,   891,    33,    -1,    -1,    -1,    -1,   897,
     913,   914,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   913,   914,    -1,   718,   807,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   729,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,   755,    -1,
      -1,    -1,   759,   760,    -1,    -1,    -1,    -1,    -1,   749,
     767,   768,    -1,   753,   754,    -1,    -1,    -1,    -1,   847,
     848,    -1,   850,    -1,    -1,    -1,   105,   106,   856,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     807,   130,   131,    -1,    -1,   134,   135,   136,   137,    -1,
      -1,   140,   141,   891,    -1,   805,    -1,    -1,    -1,   897,
      -1,    -1,    -1,   813,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   913,   914,    -1,    -1,    -1,
     847,   848,    -1,   850,    -1,    -1,    32,    -1,    -1,   856,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,   851,    -1,    49,    50,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,   891,    -1,    -1,    -1,    -1,    -1,
     897,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    85,
       4,    -1,     6,     7,     8,     9,   913,   914,    12,    13,
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
      -1,    69,    -1,    -1,    72,    -1,    74,     4,    76,    77,
      78,    79,    -1,    81,    -1,    -1,    13,    -1,    15,    -1,
      -1,    18,    -1,    20,    21,    -1,    23,    -1,    25,    -1,
      27,    -1,    29,    30,    31,   103,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    -1,    43,    44,    -1,   117,
     118,    48,    -1,    -1,    -1,    52,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    63,    15,    65,    -1,
      18,    -1,    69,    70,    -1,    23,    -1,    -1,    -1,    27,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,     4,
      48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    13,    -1,
      15,    -1,    -1,    18,    -1,    63,    -1,    65,    23,    -1,
      -1,    69,    27,     4,    -1,    -1,    -1,    -1,    -1,    77,
      78,    36,    13,    81,    15,    -1,    84,    18,    43,    -1,
      -1,    -1,    23,    48,    -1,    -1,    27,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    63,    10,
      65,    -1,    43,    -1,    69,    -1,    -1,    48,    -1,    -1,
      -1,    52,    77,    78,    -1,    -1,    81,    -1,    -1,    84,
      -1,    32,    63,    -1,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    77,    78,    -1,    50,
      81,    -1,    -1,    84,    55,    -1,    57,    58,    59,    60,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    82,   272,   273,   282,   283,   284,   285,     4,   147,
     279,   280,     0,   274,   276,   286,   287,   288,   292,   339,
     349,   364,   371,   372,   373,   374,   383,   283,   109,   121,
       1,   107,     4,    10,    32,    45,    49,    50,    55,    57,
      58,    59,    60,    64,    68,    80,    83,    85,   289,   290,
     291,   274,   287,   374,    99,     4,   279,   109,   279,    20,
      25,    29,    44,    70,   291,    30,    62,    87,    88,    89,
      90,    91,    92,    93,   375,   376,   377,     1,   107,   277,
       4,    13,    15,    18,    23,    27,    36,    43,    48,    52,
      63,    65,    69,    77,    78,    81,    84,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   279,   306,
       4,     4,     4,   148,   279,   378,   379,   381,   108,   101,
     281,   108,   294,   295,   112,   112,     3,   160,   160,   160,
       4,   108,   365,   366,   108,   351,   352,   108,   340,   341,
      98,   100,   103,   380,   382,   273,   107,   278,   148,   156,
     296,   293,   103,   154,   101,   367,   296,   350,   296,   101,
     342,   100,   379,   384,     6,     7,     8,     9,    12,    19,
      33,    50,    51,    66,    72,    74,    76,    79,   103,   110,
     111,   112,   115,   117,   118,   140,   141,   145,   146,   152,
     156,   164,   165,   166,   167,   168,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     209,   279,   275,   286,    98,    98,   101,   297,   274,   305,
     308,   309,   310,   312,   274,   368,   369,   370,   278,   101,
     353,   274,   288,   301,   302,   303,   304,   313,   320,   324,
     327,   332,   343,   344,   345,   278,   384,    99,   109,   103,
      84,   149,   150,   158,   103,   103,   103,    84,   152,   156,
     196,   209,   279,   191,   191,   191,   191,   191,   191,   191,
     191,   109,   109,    99,   109,   103,   104,    98,   140,   141,
     142,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     132,   133,   208,   112,   113,   114,   110,   111,   130,   131,
      11,    46,   105,   106,   136,   137,   134,   135,   115,   120,
     116,   138,   119,   139,    99,   103,   102,   296,   148,   274,
     288,   298,   299,   300,   301,   302,   303,   313,   320,   324,
     327,   332,   336,   278,    54,    56,    61,   311,   104,    98,
       4,   102,    98,   274,   354,   355,   356,   357,   359,   360,
     362,   278,   289,   101,   107,   214,   307,   102,   345,   172,
       4,   209,   103,    99,   101,   346,   149,    84,   149,   209,
     112,   160,   193,   194,   195,   193,   193,   112,   104,   160,
       4,     4,   172,     4,    54,    61,   162,   163,   169,   209,
     209,     4,   209,   191,   191,   191,   191,   196,   196,   197,
     197,   149,   149,   198,   198,   198,   198,   199,   199,   200,
     201,   202,   203,   209,   204,   172,   169,   289,   102,   300,
     149,   149,     1,   107,   309,   121,   102,   370,    50,   358,
     102,   356,     4,    21,    30,    31,    41,    84,   149,   325,
     328,   329,   331,   333,     4,    14,    19,    21,    22,    26,
      35,    37,    38,    39,    40,    47,    62,    71,    73,    75,
      79,    80,    82,    86,   107,   149,   152,   156,   168,   175,
     176,   178,   189,   190,   191,   207,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   225,   228,   229,   230,   231,
     232,   239,   240,   241,   242,   243,   251,   252,   253,   254,
     255,   256,   258,   259,   264,   265,   266,   267,   269,   279,
     100,   104,   169,   172,    67,   209,   223,   224,   346,   347,
     348,   104,   104,   104,   104,   104,   195,   104,   104,   104,
     188,   193,   100,   161,   209,   161,    98,   104,   108,   100,
     104,   118,     4,     4,   209,   210,    30,    84,   149,   103,
     149,   149,    53,    53,   279,     4,    53,    72,   221,   222,
     279,   280,   326,   387,   107,   214,   337,   107,   214,   338,
     108,     1,   107,   214,   149,     1,   107,   213,   103,   103,
     103,     4,    16,    24,   103,   103,   209,   257,   103,   257,
     214,   214,   214,   103,   103,     4,   221,   102,   212,     1,
     107,     1,   107,     1,   107,   104,   100,   149,   102,    98,
     191,   191,   191,   191,   104,   163,   209,     4,   149,     4,
       4,    72,   305,     4,   226,   227,   221,   279,   149,   149,
     103,   121,    33,    74,   105,   106,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   120,   130,   131,   134,   135,
     136,   137,   140,   141,   330,    99,     1,    98,   107,   103,
     387,    72,    99,   101,   212,   226,    86,   149,   220,   229,
     244,   247,   250,   149,     1,   107,   210,     1,   107,   209,
     211,   209,     1,   107,   209,     1,   107,    17,    34,   260,
     261,   263,   209,   220,   268,   211,   159,   160,    99,   102,
     223,   191,   103,     4,   103,   103,   387,    99,   104,   121,
       1,    98,   107,   107,   385,   103,   103,   305,   223,   103,
     308,   222,   305,   101,   308,   274,   314,   317,   318,   103,
       4,   270,   271,     1,   107,    98,     4,     1,   107,   104,
     104,   104,   103,   214,   214,   261,   263,   104,   104,   180,
     346,   159,   209,   104,   101,   107,   363,   305,   305,   101,
     308,   108,   334,   335,   210,   227,   101,   149,   149,   104,
     149,   100,   104,   314,   100,    94,    95,   102,   274,   315,
     318,   274,   316,   317,   211,   121,    98,   104,   211,   245,
     248,   245,   229,    42,   213,   213,   101,   233,   148,   156,
     213,   213,   100,   214,   102,   104,   104,   274,   361,   100,
      12,    72,   274,   321,   322,   323,     4,     4,     4,   102,
     388,   388,   388,   104,   209,   271,   213,     1,   107,   209,
      28,    16,    24,   234,   235,   236,   237,   238,     4,   262,
     262,   363,   363,    94,    95,   102,   387,   103,   103,    96,
      97,   102,   274,   323,   274,   322,   104,   104,    98,   104,
     388,   107,   214,   319,   319,     1,   107,   246,   249,   250,
     246,   104,   213,   210,   108,   102,   236,   216,   238,   104,
     104,   363,   363,   388,   101,   169,   169,   386,   386,   386,
     149,   387,   387,   104,   104,   213,   108,   214,   214,   274,
     274,   361,   104,   104,   214,   214,     4,   213,   213,    95,
      94,   102,   385,   385,   104,   363,   363,   388
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
     275,   275,   277,   276,   278,   278,   279,   279,   280,   280,
     281,   282,   282,   283,   283,   284,   284,   285,   285,   286,
     286,   287,   287,   288,   288,   288,   288,   288,   289,   289,
     290,   290,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   293,   292,   294,   294,
     295,   295,   295,   296,   296,   297,   298,   298,   299,   299,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     301,   301,   302,   302,   303,   304,   304,   305,   305,   306,
     306,   307,   307,   308,   308,   309,   309,   310,   311,   311,
     311,   312,   313,   314,   314,   315,   315,   316,   316,   317,
     318,   319,   319,   320,   320,   321,   321,   322,   323,   324,
     325,   325,   326,   327,   328,   328,   329,   329,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     331,   331,   332,   333,   334,   334,   335,   335,   336,   337,
     337,   338,   338,   339,   340,   340,   341,   342,   343,   343,
     344,   344,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   346,   346,   347,   347,   348,   348,   350,   349,   351,
     351,   352,   353,   354,   354,   355,   355,   356,   356,   356,
     356,   357,   357,   358,   358,   359,   360,   361,   361,   361,
     361,   362,   363,   363,   364,   365,   365,   366,   367,   367,
     368,   368,   369,   369,   370,   370,   371,   371,   372,   373,
     373,   374,   374,   375,   375,   376,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   378,   378,   379,   380,   380,
     381,   382,   383,   384,   385,   386,   387,   388
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
       0,     1,     0,     6,     0,     1,     1,     2,     2,     3,
       4,     1,     2,     1,     1,     5,     5,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     8,     0,     1,
       2,     2,     4,     1,     3,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     6,     5,     5,     2,     7,     7,     0,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     4,     0,     1,
       1,     4,     9,     2,     2,     0,     1,     0,     1,     5,
       5,     1,     1,     6,    10,     2,     2,     5,     5,     8,
       5,     5,     2,     4,     1,     1,     7,    10,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     7,     4,     5,     0,     1,     5,     5,     7,     1,
       1,     1,     1,     7,     0,     1,     2,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     0,     1,     1,     3,     0,     8,     0,
       1,     2,     3,     0,     1,     1,     2,     1,     1,     1,
       1,     8,     8,     0,     1,     9,    12,     3,     3,     6,
       6,     6,     1,     2,     7,     0,     1,     2,     3,     4,
       0,     1,     1,     3,     2,     4,     9,     9,     1,     1,
       2,     6,     7,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     0,     1,
       1,     3,     0,     0,     0,     0,     0,     0
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
#line 121 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_literal",1);}
#line 2553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 122 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 124 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 125 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 126 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 129 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 130 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 136 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 139 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 147 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = new string("");}
#line 2625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 152 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 167 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 168 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 169 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 180 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.str) = (yyvsp[0].r.str);}
#line 2751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.str) = (yyvsp[0].r.str);}
#line 2757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 184 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 188 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[-1].r.known_type);(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = new string("");}
#line 2781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 197 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 201 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 205 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 222 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 2931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 235 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 236 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 2955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 2961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 244 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 2967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 2973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 248 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 2979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 2985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 2991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 2997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 257 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 260 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 263 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 264 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 267 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 270 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 273 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 276 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 279 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 280 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 287 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 288 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 291 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 294 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 297 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 300 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 306 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression primary_expression",1);}
#line 3123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 307 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression qualified_identifier",1);}
#line 3129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression post_increment_expression",1);}
#line 3135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 309 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression post_decrement_expression",1);}
#line 3141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 310 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression pointer_member_access",1);}
#line 3147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus postfix_expression",1);}
#line 3153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus EXCLAMATION_POINT",1);}
#line 3159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus TILDE",1);}
#line 3165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus cast_expression",1);}
#line 3171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 322 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 325 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression unary_expression_not_plusminus",1);}
#line 3189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression PLUS",1);}
#line 3195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression MINUS",1);}
#line 3201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression STAR",1);}
#line 3207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 329 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression pre_increment_expression",1);}
#line 3213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression pre_decrement_expression",1);}
#line 3219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression addressof_expression",1);}
#line 3225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 339 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 342 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 343 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 347 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 348 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 351 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 355 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 362 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 371 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 381 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 393 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 397 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 401 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 413 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 416 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 420 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 426 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 433 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 457 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 463 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 464 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 472 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 479 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 480 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);
           SPL->addLocalVariable(string((yyvsp[-1].r.str)),*(yyvsp[0].r.identifiers),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no)) ;
  }
#line 3749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 490 "yacc.y" /* yacc.c:1646  */
    {
         l.a("variable_declarators",1); 
         (yyval.r.identifiers) = new queue<string>();
		 (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
   }
#line 3759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 496 "yacc.y" /* yacc.c:1646  */
    {     
          l.a("variable_declarators",2);
		  (yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
		  (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
   }
#line 3769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 504 "yacc.y" /* yacc.c:1646  */
    {          l.a("variable_declarator",0); 
         (yyval.r.identifier) = new string ((yyvsp[0].r.str)) ; 
  }
#line 3777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 508 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1); 
           (yyval.r.identifier) = new string ((yyvsp[-2].r.str));
   }
#line 3785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 514 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 515 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 518 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 521 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 524 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 3827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 3833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 531 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 532 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 535 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 537 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 538 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 540 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 541 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 544 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 545 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 548 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 3905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 549 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 3911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 552 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 3917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 555 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 3923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 3929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 559 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 3935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 3941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 3947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 566 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 3953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 569 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 3959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 3965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 573 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 3971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 3977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 579 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 586 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 589 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 590 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 593 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",3);}
#line 4031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",3);}
#line 4037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 599 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 603 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 606 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 607 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 610 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 611 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 614 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 620 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 621 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 624 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 628 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 629 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 631 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 634 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 638 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 639 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 642 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 646 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 650 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 651 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 654 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 658 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 664 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 667 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 668 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 683 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 686 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 695 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 704 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 707 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 710 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);SPL->check();}
#line 4367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 711 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);SPL->check();}
#line 4373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 715 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 719 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 723 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 726 "yacc.y" /* yacc.c:1646  */
    {SPL->addNamespace(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 727 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);SPL->endScope();}
#line 4421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 730 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 736 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("qualified_identifier",0);
		(yyval.r.base) = new string((yyvsp[0].r.str));
  }
#line 4442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 741 "yacc.y" /* yacc.c:1646  */
    {
		l.a("qualified_identifier",1);
		(yyval.r.base) = new string(string(*(yyvsp[-1].r.base)) + string((yyvsp[0].r.str)));
	}
#line 4451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 748 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[-1].r.str)) + ".");}
#line 4457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 749 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[-2].r.base) + string((yyvsp[-1].r.str)) + ".");}
#line 4463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 776 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 777 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 780 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 782 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 783 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 784 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 796 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
#line 4580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 801 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 4589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 808 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 814 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
#line 4615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
#line 4621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
#line 4627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
#line 4633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 825 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
#line 4639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
#line 4645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 827 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 4651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 828 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
#line 4657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 829 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
#line 4663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 830 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
#line 4669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 831 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
#line 4675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 832 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
#line 4681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 833 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
#line 4687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 834 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
#line 4693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 844 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 4707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 850 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 4713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 851 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();}
#line 4725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 855 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 856 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);(yyval.r.bases) = new queue<string>();}
#line 4737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 860 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 866 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[-2].r.bases);
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 878 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 879 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 882 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 4781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 883 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 4787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 886 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 887 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 888 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 889 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 891 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 892 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 894 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 895 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 899 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("constant_declaration",4);
		//SPL->add_var(*$<r.modifiers>2,1);
  }
#line 4856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 903 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 4862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 907 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
  		l.a("field_declaration",4);
	}
#line 4871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 913 "yacc.y" /* yacc.c:1646  */
    {
       l.a("field_declaration",4,1);
	   SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
  }
#line 4880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2); SPL->endScope();}
#line 4886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 925 "yacc.y" /* yacc.c:1646  */
    {
      l.a("method_header",5); 

	  {SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type));}
  }
#line 4896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);
  
  	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);

  }
#line 4906 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 938 "yacc.y" /* yacc.c:1646  */
    {	   
	   l.a("formal_parameter_list_opt",0);
       (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
  }
#line 4915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 943 "yacc.y" /* yacc.c:1646  */
    {
	   l.a("formal_parameter_list_opt",1);
       (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
  }
#line 4924 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 949 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 4930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 950 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 4936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 953 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 4942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 954 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 4948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 962 "yacc.y" /* yacc.c:1646  */
    { 
        l.a("formal_parameter_list",1);
        (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		(yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
  }
#line 4958 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 967 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);
   
		(yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		(yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
  }
#line 4968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 975 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("formal_parameter",1); 
		(yyval.r.base) = (yyvsp[0].r.base) ;
		(yyval.r.identifier) = (yyvsp[0].r.identifier);
		(yyval.r.line_no) = (yyvsp[0].r.line_no);
		(yyval.r.col_no) = (yyvsp[0].r.col_no);
		(yyval.r.known_type) = (yyvsp[0].r.known_type);
  }
#line 4981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 984 "yacc.y" /* yacc.c:1646  */
    {
		l.a("formal_parameter",1);
		(yyval.r.base) = (yyvsp[0].r.base);
		(yyval.r.identifier) = (yyvsp[0].r.identifier);
		(yyval.r.line_no) = (yyvsp[0].r.line_no);
		(yyval.r.col_no) = (yyvsp[0].r.col_no);
		(yyval.r.known_type) = (yyvsp[0].r.known_type);
  }
#line 4994 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 995 "yacc.y" /* yacc.c:1646  */
    {
		l.a("fixed_parameter",3);
	    (yyval.r.base) = (yyvsp[-1].r.base);
		(yyval.r.identifier) = new string ((yyvsp[0].r.str));  
	 	(yyval.r.line_no) = (yyvsp[0].r.line_no);
		(yyval.r.col_no) = (yyvsp[0].r.col_no); 
		(yyval.r.known_type) = (yyvsp[-1].r.known_type);
  }
#line 5007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 1005 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 1007 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {
		l.a("parameter_array",2);
		(yyval.r.base) = (yyvsp[-1].r.base);
		(yyval.r.identifier) = new string ((yyvsp[0].r.str));
  		(yyval.r.line_no) = (yyvsp[0].r.line_no);
		(yyval.r.col_no) = (yyvsp[0].r.col_no);
		(yyval.r.known_type) = (yyvsp[-1].r.known_type);
  }
#line 5038 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 1024 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5044 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5050 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 1028 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5056 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 1031 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5062 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 1032 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5068 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 1035 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5074 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 1036 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5080 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 1042 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5086 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 1048 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5092 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 1051 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5098 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1052 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1059 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1062 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1063 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5128 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5134 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1075 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5152 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1086 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5158 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1089 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5164 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1093 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5170 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1096 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5176 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1097 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5182 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1101 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5194 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5200 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1105 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5206 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1106 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1107 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5218 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1108 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5224 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1109 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5230 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1110 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1111 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5242 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1112 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1113 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5254 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1114 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1115 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5266 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1116 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5272 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1117 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5278 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5284 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1119 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5290 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1120 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5296 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5302 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5308 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1123 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5314 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1124 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5320 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1125 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5326 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1128 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5332 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5338 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1132 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5344 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5350 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5356 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5362 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1142 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5368 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1143 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5374 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1159 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5380 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5386 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1163 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5392 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5398 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5404 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1172 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5410 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1175 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5416 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5422 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5428 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5434 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5440 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5446 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5452 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5458 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5464 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5470 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5476 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5482 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5488 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5494 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5500 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5506 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1202 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5512 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1207 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5518 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1208 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5524 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1211 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5530 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1212 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5536 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1215 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5542 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5548 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addInterface(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));		
  }
#line 5556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);SPL->endScope();}
#line 5562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1229 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 5568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1230 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1233 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1240 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1243 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1244 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1247 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1248 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1250 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1254 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1255 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1258 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1259 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1265 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1272 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1276 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1277 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1278 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1279 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1282 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1287 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1288 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1293 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1296 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1297 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1300 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 5736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1303 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1304 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1307 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 5754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1308 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 5760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1311 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 5766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 5772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1315 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 5778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1316 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 5784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1321 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1322 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1327 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 5802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1330 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 5808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1331 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 5814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1334 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1335 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1338 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 5832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1339 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 5838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1342 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 5844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1345 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1346 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1347 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1348 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1349 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1350 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1351 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1352 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1353 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1356 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 5904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1357 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 5910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1360 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 5916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1363 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 5922 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1364 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 5928 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1367 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 5934 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1370 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 5940 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1377 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 5946 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1380 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 5952 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1383 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 5958 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1386 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 5964 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1389 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 5970 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1392 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 5976 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 5980 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1397 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




