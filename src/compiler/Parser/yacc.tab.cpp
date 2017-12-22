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
#define YYLAST   3180

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
     485,   486,   487,   490,   498,   503,   510,   514,   520,   521,
     522,   525,   528,   535,   541,   549,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     574,   575,   576,   577,   578,   579,   580,   583,   584,   587,
     588,   591,   594,   597,   598,   601,   602,   605,   608,   609,
     612,   613,   616,   617,   618,   619,   622,   625,   626,   627,
     627,   627,   630,   631,   635,   640,   641,   644,   645,   648,
     649,   652,   653,   656,   659,   662,   663,   666,   669,   670,
     671,   672,   673,   676,   677,   680,   681,   684,   685,   686,
     687,   688,   689,   692,   693,   696,   697,   700,   701,   704,
     705,   706,   709,   710,   713,   714,   715,   718,   719,   722,
     725,   728,   731,   734,   737,   738,   742,   745,   746,   749,
     752,   753,   756,   757,   760,   761,   764,   765,   768,   768,
     772,   773,   777,   781,   788,   789,   793,   796,   797,   800,
     801,   804,   805,   808,   809,   812,   813,   816,   817,   820,
     821,   822,   823,   824,   836,   840,   847,   853,   861,   862,
     863,   864,   865,   866,   867,   868,   869,   870,   871,   872,
     873,   874,   885,   884,   893,   894,   897,   898,   899,   902,
     908,   917,   921,   922,   925,   926,   929,   930,   931,   932,
     933,   934,   935,   936,   937,   938,   941,   945,   948,   953,
     961,   965,   969,   977,   980,   984,   988,   997,   998,  1001,
    1002,  1009,  1014,  1021,  1026,  1033,  1041,  1051,  1062,  1070,
    1081,  1082,  1083,  1086,  1097,  1103,  1104,  1107,  1108,  1111,
    1112,  1115,  1121,  1127,  1128,  1131,  1132,  1138,  1139,  1142,
    1148,  1154,  1160,  1162,  1165,  1169,  1172,  1173,  1176,  1177,
    1180,  1181,  1182,  1183,  1184,  1185,  1186,  1187,  1188,  1189,
    1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  1199,
    1200,  1201,  1204,  1205,  1209,  1208,  1215,  1216,  1219,  1220,
    1236,  1239,  1240,  1243,  1244,  1249,  1252,  1253,  1256,  1259,
    1262,  1263,  1266,  1267,  1270,  1271,  1272,  1273,  1274,  1275,
    1276,  1277,  1279,  1284,  1285,  1288,  1289,  1292,  1293,  1299,
    1298,  1306,  1307,  1310,  1313,  1316,  1317,  1320,  1321,  1324,
    1325,  1326,  1327,  1331,  1332,  1335,  1336,  1342,  1339,  1349,
    1345,  1353,  1354,  1355,  1356,  1359,  1364,  1365,  1370,  1373,
    1374,  1377,  1380,  1381,  1384,  1385,  1388,  1389,  1392,  1393,
    1398,  1399,  1404,  1407,  1408,  1411,  1412,  1415,  1416,  1419,
    1422,  1423,  1424,  1425,  1426,  1427,  1428,  1429,  1430,  1433,
    1434,  1437,  1440,  1441,  1444,  1447,  1454,  1457,  1460,  1463,
    1466,  1469,  1477,  1478,  1481,  1482,  1485,  1486,  1489,  1490,
    1493,  1494
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
  "conversion_operator_declarator", "constructor_declaration", "$@5",
  "constructor_initializer_opt", "constructor_initializer",
  "destructor_declaration", "operator_body", "constructor_body",
  "struct_declaration", "struct_interfaces_opt", "struct_interfaces",
  "struct_body", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration", "$@6",
  "interface_base_opt", "interface_base", "interface_body",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration",
  "new_opt", "interface_property_declaration", "$@7",
  "interface_indexer_declaration", "$@8", "interface_accessors",
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

#define YYPACT_NINF -812

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-812)))

#define YYTABLE_NINF -577

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,    89,   114,    32,   -13,  -812,  -812,  -812,   140,    84,
    -812,   294,  -812,  1391,  -812,   203,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,    32,  -812,   186,  -812,  -812,   319,
    -812,  -812,   248,  -812,  -812,  -812,   319,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,   293,  3096,
    -812,  1177,  -812,  -812,   589,   257,   125,  -812,  -812,  -812,
    -812,  1644,   387,   401,   424,   430,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,   319,  -812,   343,  -812,
    -812,   345,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,  -812,   355,  -812,   368,
    -812,   483,  -812,  -812,  -812,  -812,  -812,  -812,   483,   483,
     452,   386,   390,   394,   399,  -812,  -812,   325,  -812,   410,
    -812,   -13,   403,  -812,  -812,  -812,  -812,  -812,  -812,   417,
     418,   439,  -812,   319,  -812,  -812,   319,   445,  -812,    52,
    -812,  -812,   260,  -812,  2680,  -812,  -812,   155,  -812,  -812,
     276,  -812,   156,   403,  -812,   433,   451,   433,   300,   403,
     444,   433,   457,  -812,  -812,  -812,  -812,  -812,  -812,  -812,
     172,   425,  -812,  2724,  -812,   459,  -812,  -812,   468,   469,
    2393,  2680,  2680,  2680,  2680,  2680,  2680,  2680,  2680,  -812,
    -812,   464,   465,   174,   473,  -812,  -812,  -812,  -812,   474,
     484,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,   334,  -812,  -812,  -812,  1340,  -812,
     372,   -68,   180,    17,   336,   466,   463,   471,   450,   -63,
    -812,  -812,  -812,   -58,   496,   308,   277,   493,   501,   502,
    -812,   481,  -812,   485,   598,   505,   506,  -812,  -812,   319,
     312,   403,  3096,  -812,  -812,  -812,  -812,     7,  -812,  -812,
    -812,  -812,  -812,   508,   328,  -812,  -812,   319,   332,   403,
    -812,  2680,   606,  2680,   355,   181,   519,   234,  2724,  3061,
    2680,    43,    40,    70,   379,   516,   157,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,   619,   620,  2680,   633,  2192,
    -812,  2680,  -812,  -812,   638,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,  2680,  2680,  2680,  2680,
    2680,  2680,  2680,  2680,  2724,  2724,  2680,  2680,  2680,  2680,
    2680,  2680,  2680,  2680,  2680,  2680,  2680,  2680,  2680,  2192,
    -812,  -812,  2724,  -812,  2724,   168,    32,    32,  2278,  2278,
     523,  -812,   338,  -812,   596,   545,   340,  -812,  -812,  -812,
    -812,  -812,  -812,  3017,  1481,  -812,  -812,  -812,  -812,  -812,
     433,  3096,  -812,   550,   342,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,   362,  -812,   549,  2192,
    2680,  2278,  -812,   -64,   230,   265,   551,  -812,  -812,   552,
      43,  -812,   553,   556,  2479,  2884,    43,  -812,  -812,   365,
    -812,  2680,  2680,   563,  -812,   562,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,   372,   372,   -68,   -68,   368,   368,
     180,   180,   180,   180,    17,    17,   336,   466,   463,   471,
     546,   450,   408,   564,    26,    45,  -812,  -812,   502,  -812,
     481,  -812,   485,  2724,  -812,  -812,  -812,  -812,  -812,  2680,
    -812,  -812,  -812,  1347,  -812,  -812,   280,  2724,  2724,   614,
     616,    54,    63,  -812,   171,  -812,  -812,   569,   219,   169,
     376,  2724,   170,  1962,   571,   238,   238,   258,   238,   572,
    2680,   238,  2680,   582,   423,   582,   581,   250,  -812,    61,
     464,   465,   919,  1002,  1189,  1053,   507,   957,  1340,   225,
    -812,  -812,  -812,   570,  1846,  -812,  -812,  -812,   229,   233,
    -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,    30,  2804,  -812,  -812,  -812,  -812,   583,   427,
    -812,   587,   592,  -812,  -812,  -812,  -812,  2680,  -812,  2680,
    2680,  2680,  -812,   593,  -812,  -812,  -812,  -812,  2192,  -812,
    2680,  -812,  -812,  -812,  -812,   152,  -812,  -812,  2724,    66,
      24,   276,    73,    74,  2724,  2724,   588,   185,  2880,   586,
     107,  -812,   590,    41,   597,   599,  -812,  -812,  -812,  -812,
    1846,  -812,  -812,  -812,    73,  -812,  -812,   612,  2724,  -812,
    -812,  2594,  2724,   237,  2680,   239,  2680,  2680,  -812,   240,
    2680,   241,    94,  -812,  -812,  2594,  -812,  1600,   578,   605,
    -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,
     699,  -812,   483,  -812,  2077,  -812,  -812,  -812,  -812,  2680,
    -812,  -812,  2680,    75,   604,   607,   609,   615,   595,   205,
    -812,   193,  -812,   189,   218,   276,  2278,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,   610,
      32,  -812,   715,  -812,   276,   621,  -812,    32,    32,  -812,
     623,   630,    76,   108,   118,   122,   130,   200,   216,  -812,
    -812,  -812,   242,  -812,   625,    77,  -812,  -812,   244,  -812,
    -812,  -812,   117,   640,  -812,  -812,   117,  -812,  -812,   431,
     582,    94,  -812,  -812,  -812,  -812,   643,  2680,   644,   645,
     648,   651,   483,  -812,  -812,  -812,   624,   283,   276,   276,
     652,    32,  -812,  2680,  -812,   750,  -812,  -812,   656,  2724,
    2724,   654,  -812,  2724,   437,  -812,  -812,  -812,   655,    32,
     438,   321,   658,   346,   348,  2680,   641,   287,  -812,  -812,
    -812,  2680,  2680,    50,  -812,  -812,  -812,  -812,  1962,  1962,
     660,    52,  -812,  -812,  -812,  -812,  1962,   762,  1962,  1962,
     662,  -812,  -812,  -812,  -812,   666,  -812,  -812,   665,   669,
      32,   441,   668,  -812,  -812,    32,    78,    80,  -812,    82,
      32,  -812,  -812,   676,  -812,  -812,  -812,  -812,   684,  -812,
    -812,   689,  -812,  -812,   683,  2680,   783,  1962,  -812,   242,
    -812,  -812,  -812,  -812,  2680,   763,  -812,   281,  -812,   785,
     785,  -812,  1962,  -812,  -812,   582,  -812,   283,   283,   422,
     690,  -812,   247,   286,  -812,   453,   692,    32,    32,   693,
     694,   290,  -812,   302,   302,  -812,   245,  -812,  -812,  -812,
    2680,   117,  1962,  2680,   688,   698,   281,  -812,  1730,  -812,
    -812,   700,   701,  -812,  -812,  -812,  -812,   283,   283,  -812,
     707,   706,   708,  -812,  -812,  -812,  -812,  -812,  -812,   716,
    -812,   719,  -812,  -812,  -812,  2724,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,   117,  -812,   625,  1962,  -812,   709,
    -812,  -812,  -812,  1846,  -812,   582,   582,  -812,   353,   354,
    -812,    32,  2192,  2192,   582,   582,  -812,    83,  -812,  -812,
    1962,  -812,  -812,  -812,  -812,   721,   728,  -812,   722,   723,
     724,  -812,  -812,   725,  -812,   283,   283,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,  -812
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
       0,     0,     0,   580,     0,   446,   447,     0,   332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,     0,   295,     0,     0,     0,     0,     0,   197,     0,
      16,    17,     0,     0,     0,     0,     0,     0,     0,     0,
     195,   177,   178,     0,   194,   179,   175,   176,     0,     0,
     180,   181,   237,   238,   182,   189,   252,   253,   254,   255,
     183,   278,   279,   280,   281,   282,   184,   185,   186,   187,
     188,   190,    98,     0,   381,   385,    81,    92,     0,     0,
     507,     0,   506,    96,    91,    90,    93,     0,   124,     0,
       0,     0,   115,     0,    73,    50,    45,    49,     0,    69,
       0,    74,    70,   423,   417,     0,   173,   549,     0,     0,
       0,   324,     0,     0,     0,     0,     0,   206,     0,     0,
       0,   204,   580,     0,     0,     0,   482,   481,   445,   192,
       0,   284,   283,   310,     0,   286,   285,     0,     0,   585,
     584,   265,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,   311,   256,     0,   259,     0,   206,   203,
     223,   216,   226,   219,   227,   220,   224,   217,   228,   221,
     229,   222,   225,   218,   191,   196,   201,   199,   202,   200,
       0,    85,    42,   503,     0,   120,   118,   119,   116,     0,
      47,   158,     0,     0,     0,   580,     0,     0,     0,     0,
     213,     0,   578,     0,     0,   324,     0,   457,   456,   468,
     469,   450,   451,   458,   459,   460,   461,   462,   452,   453,
     463,   464,   465,   466,   467,   471,   470,   454,   455,     0,
     324,   399,     0,   398,   324,     0,   444,   324,   324,   198,
     212,     0,     0,    56,    99,   100,    84,   111,   112,   232,
     271,   275,     0,   266,   272,     0,   290,   287,     0,   292,
     289,   174,     0,     0,   294,   293,     0,   298,   297,     0,
       0,   299,   302,   300,   315,   314,     0,     0,     0,     0,
       0,    88,    42,   504,   508,   117,     0,     0,   324,   324,
       0,   324,   474,     0,   397,     0,   396,   435,     0,     0,
       0,     0,   207,     0,     0,   415,   416,   205,     0,   324,
       0,     0,     0,   324,   324,     0,     0,     0,   317,   589,
     588,   267,     0,     0,   291,   288,   587,   586,     0,     0,
       0,     0,   306,   309,   303,   301,     0,     0,     0,     0,
       0,    86,    89,    43,   211,     0,   536,   535,     0,     0,
     324,     0,   476,   215,   214,   324,     0,     0,   402,     0,
     324,   442,   401,     0,   443,   581,   581,   581,     0,   425,
     428,     0,   426,   430,     0,     0,     0,     0,   273,     0,
     268,   276,   591,   590,     0,   239,   312,   243,   241,   307,
     307,   313,     0,   258,   257,     0,   537,     0,     0,     0,
       0,   580,     0,     0,   477,     0,     0,   324,   324,     0,
       0,     0,   581,     0,     0,   441,     0,   319,   318,   316,
     269,     0,     0,     0,     0,     0,   244,   245,     0,   248,
     308,     0,     0,   260,   480,   524,   523,     0,     0,   581,
       0,     0,     0,   484,   483,   475,   579,   579,   579,     0,
     437,     0,   438,   473,   472,     0,   448,   424,   434,   433,
     580,   580,   263,   262,     0,   270,   274,     0,   240,     0,
     251,   242,   246,   247,   249,     0,     0,   261,   324,   324,
     527,   324,    71,    71,     0,     0,   436,     0,   431,   432,
       0,   277,   250,   305,   304,     0,     0,   528,     0,     0,
       0,   578,   578,     0,   264,     0,     0,   581,   478,   479,
     439,   440,   449,   533,   534,   529,   530
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -812,  -812,  -812,  -812,   -70,    79,   659,  -812,    36,  -812,
     695,  -812,   -56,  -812,   661,    72,   -94,   421,  -812,   261,
    -812,  -812,  -812,  -812,   -98,  -337,  -812,  -812,  -233,  -812,
    -812,    93,   202,  -812,   305,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,   432,   476,   495,   407,  -812,  -259,
    -812,   435,  -159,   231,    91,   232,   504,   510,   517,   503,
     513,  -812,  -812,   554,  -812,   482,  -604,  -609,  -506,  -288,
     -99,  -812,   -57,  -812,  -812,  -812,  -537,  -255,   142,  -338,
    -812,  -812,   249,    92,  -812,    62,  -812,  -812,  -812,  -812,
    -812,  -812,   -38,  -812,   -37,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,  -812,  -812,   -30,  -812,
    -812,  -812,  -812,  -812,  -812,   371,  -812,  -812,  -812,   123,
       5,   126,  -812,  -812,  -812,  -812,  -812,  -812,  -812,    20,
    -812,   747,    -3,  -812,  -812,  -812,  -105,     0,   398,  -812,
    -812,   867,  -812,  -812,   729,    -6,  -139,  -221,  -812,   828,
    -812,  -812,  -812,  -812,  -104,  -812,  -812,  -812,   509,  -231,
    -178,  -176,  -812,  -559,  -812,  -812,  -650,   532,  -342,  -334,
     533,  -812,  -330,  -172,   100,  -812,  -812,    97,    99,     2,
    -167,  -812,     6,    11,  -166,  -812,  -812,  -164,  -812,  -812,
    -812,  -812,  -162,  -812,  -812,  -812,  -812,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,   631,  -274,  -812,  -812,  -812,
    -812,  -812,  -812,  -812,  -812,  -812,   540,  -812,  -812,  -812,
    -812,  -812,  -812,   -62,  -812,  -808,  -812,  -812,  -812,  -812,
    -812,  -812,   548,  -812,  -812,  -812,   873,  -812,  -812,  -812,
    -812,   761,  -812,  -812,  -812,  -812,   741,  -407,  -350,  -576,
    -811,  -812,  -119,  -716,    57,  -812
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   189,   190,     9,    98,   499,   100,   101,   191,   103,
     104,   105,   192,   107,   108,   751,   398,   565,   413,   414,
     193,   194,   195,   196,   197,   415,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   811,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   399,
     400,   401,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   316,   416,   577,   732,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   590,   591,   455,
     456,   519,   669,   670,   520,   721,   521,   522,   523,   858,
     895,   896,   897,   898,   899,   524,   525,   526,   747,   947,
     527,   528,   722,   849,   934,   723,   850,   935,   724,   529,
     530,   531,   532,   533,   534,   619,   535,   536,   741,   742,
     901,   743,   537,   538,   539,   540,   746,   541,   787,   788,
       2,     3,   236,   234,    14,    81,   149,   233,    11,   122,
       4,     5,     6,     7,    15,    16,    17,    48,    49,    50,
      18,   162,   140,   141,   155,   269,   373,   374,   375,   254,
     255,   256,   257,   237,   110,   367,   238,   239,   240,   241,
     242,   344,   243,   258,   782,   839,   842,   783,   784,   930,
     259,   876,   877,   878,   260,   473,   594,   261,   474,   475,
     699,   476,   262,   822,   873,   874,   384,   598,   915,    19,
     137,   138,   159,   263,   264,   265,   457,   551,   552,    20,
     156,   134,   135,   251,   355,   356,   357,   358,   463,   359,
     967,   360,   986,   870,   361,   817,    21,   131,   132,   153,
     245,   246,   247,    22,    23,    24,    25,    76,    77,    78,
     117,   118,   145,   119,   146,    26,   165,   768,   954,   595,
     883,    65,   611,   798,   791,   854
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    10,   443,   392,   449,   106,   115,   126,   645,    52,
     728,   458,    51,   450,   127,   128,   705,   452,   749,   253,
     800,   284,   667,   402,   403,   884,   885,   324,   665,    56,
     573,   363,   157,   125,   -11,   161,    58,   376,   386,   553,
     338,   320,   321,   125,   339,    32,   125,   124,   248,   574,
     774,   852,   548,   550,   266,   336,    55,   780,    55,   905,
     906,   109,   325,   154,   409,   628,   154,   587,     1,   154,
     664,   927,   115,   125,   720,   337,   116,   668,   587,   757,
     786,   793,   879,   160,   880,    30,   881,   973,   745,   760,
     377,   853,   378,     8,   709,   666,   379,   102,   950,   948,
     949,   380,   381,    90,   382,   442,   383,   364,   701,  -230,
     739,   821,   706,   365,    12,   588,   771,   106,   796,  -233,
      93,   326,   327,  -234,   283,   253,    79,   740,   338,   372,
    -576,  -231,   339,   116,   589,   124,   116,   124,   807,   116,
      99,   -11,   116,   376,    51,   778,   362,   563,   295,   244,
     543,   397,   328,   329,   397,   252,   124,   549,   366,   823,
     125,   424,   425,   370,   385,   123,   985,   983,   984,   446,
     601,   605,   124,   109,   124,   937,   844,   123,   296,   353,
     286,   397,   848,   127,   124,   124,   124,   124,   124,   124,
      31,   124,   406,   124,   124,   607,   377,   154,   378,   818,
     819,  -235,   379,  -321,   702,  -230,   764,   380,   381,   102,
     382,  -230,   383,   703,  -230,  -233,   282,  -236,   960,  -234,
     797,  -233,   106,   106,  -233,  -234,   642,  -231,  -234,    52,
     646,    80,    51,  -231,   648,   372,  -231,   125,   726,   609,
     729,   734,   737,   789,   629,   794,   932,   354,    28,   116,
     662,   626,   275,  -576,  -576,   338,  -326,  -544,   911,   339,
      29,   252,   613,   124,    55,   371,   502,   116,   106,   106,
     271,   364,   297,   614,   447,   602,   606,   596,   109,   109,
     272,   615,   298,   389,    54,  -332,   106,  -332,   106,   939,
     702,   769,   124,    28,    59,   910,   893,  -235,    32,   767,
     124,  -576,   765,  -235,   894,   676,  -235,   106,   501,   322,
     323,   766,    60,  -236,   102,   102,   754,    61,   912,  -236,
     770,    62,  -236,    55,   109,   109,   600,    28,   671,   124,
     341,   643,   342,   554,   391,   647,    63,   343,   772,   649,
     610,   123,   109,   727,   109,   730,   735,   738,   790,   244,
     795,   933,   627,   354,   958,   959,    57,   393,   395,   163,
     102,   102,    64,   109,   542,    28,   775,   612,   555,   616,
     776,   371,   620,   775,  -576,   597,   124,   776,   102,  -403,
     102,   603,   581,   815,   846,   502,   364,   925,    28,   816,
     847,   111,   913,   926,   622,   623,   624,   106,  -576,   102,
     500,  -490,   364,   428,   429,   112,  -576,   106,   928,  -327,
    -576,   106,   106,  -515,   835,   836,   502,   430,   431,   432,
     433,   444,   142,   445,   143,   106,  -576,   775,   113,  -491,
    -576,   776,    83,  -382,   114,    84,  -576,   645,  -576,   460,
    -576,  -516,   472,  -383,  -576,   121,  -576,  -427,   128,  -429,
     120,  -576,  -576,   109,  -531,  -532,   129,   503,   501,   301,
      88,   546,   301,   109,   564,    89,   123,   109,   109,   330,
     331,   586,   592,   302,   303,   304,   364,   812,   273,   124,
      91,   109,    92,   317,   318,   319,   125,   106,   449,   102,
     404,   318,   319,   130,    94,    95,   775,   133,    96,   102,
     776,   136,   502,   102,   102,   301,   139,   571,   638,   148,
     855,   856,   144,   713,   542,   907,   908,   102,   861,   150,
     863,   864,   106,   364,   301,   280,   652,   273,   106,   106,
     249,   364,   575,   801,   830,   830,   831,   834,   830,   152,
     871,   267,   580,   109,   501,   158,   582,   583,   916,   917,
     500,   250,   106,   426,   427,   501,   106,   268,   752,   889,
     604,   278,   434,   435,   980,   981,   504,   955,   956,   501,
     279,   280,   295,   296,   903,   299,   503,   300,   109,   102,
     332,   301,   333,   672,   109,   109,   334,   335,   287,   288,
     289,   290,   291,   292,   293,   294,   345,   340,   346,   347,
     542,   348,   350,   352,   938,   349,   351,   503,   109,   368,
     387,   542,   109,   639,   102,   969,   970,   390,    67,   405,
     102,   102,   472,   407,   408,   542,   232,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,   500,   410,  -111,  -111,
     802,   803,   418,   459,   102,   462,   464,   500,   102,   961,
      68,   544,   547,   570,   556,   557,   559,   663,   752,   560,
     568,   500,   285,   673,   674,   569,   584,   572,   585,   505,
     599,   644,   974,   608,   617,    69,    70,    71,    72,    73,
      74,    75,   364,   625,   700,   504,   651,   712,   653,   654,
     675,   725,   704,   503,   713,   707,   659,   711,   676,   708,
     502,   502,   702,   750,   714,   781,   758,   761,   502,   759,
     502,   502,   773,   106,   106,   763,   504,   106,   762,   628,
     765,   779,   792,   814,   420,   421,   422,   423,   423,   423,
     423,   859,   785,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   799,   423,   860,   806,   808,   809,   502,
     810,   391,   820,   232,   668,   388,   825,   828,   832,   837,
     857,   845,   396,   862,   502,   865,   904,   866,   867,   109,
     109,   508,   868,   109,   914,   872,   781,   882,   836,   232,
     838,   841,   835,   417,   929,   929,   886,   786,   505,   900,
     892,   909,   713,   918,   502,   940,   923,   924,   419,   941,
     502,   116,   504,   945,   946,   102,   102,   951,   952,   102,
     953,   420,   917,   715,   916,   975,   962,   869,   440,   505,
     232,   976,   875,   977,   813,   151,   978,   979,   982,   660,
     454,   454,   276,   567,   277,   558,   436,   562,   439,   502,
     506,   943,   501,   437,   777,   502,   963,   964,   826,   827,
     441,   438,   829,   710,   851,   971,   972,   824,   942,   507,
     936,   944,   502,   621,   804,   902,   888,   805,   147,   106,
     593,    27,   232,   454,   919,   921,   235,    66,   448,   833,
     451,   843,   840,   545,   922,   714,   931,   501,   920,   968,
     508,   503,   503,   566,   566,   369,   465,    53,   542,   503,
     461,   503,   503,   164,   270,   505,   890,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   716,     0,   509,     0,
     630,   508,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,   500,     0,     0,     0,     0,     0,
     503,   576,     0,   542,     0,   965,   966,     0,   869,     0,
       0,     0,     0,     0,     0,   503,     0,     0,   640,   506,
       0,   102,     0,     0,   655,     0,   656,   657,   658,     0,
       0,     0,   618,     0,   618,     0,     0,     0,   507,   500,
       0,     0,     0,   714,     0,   503,     0,     0,     0,     0,
     506,   503,     0,     0,   715,     0,     0,     0,     0,     0,
     504,   504,     0,   632,   957,     0,     0,   508,   504,   507,
     504,   504,     0,     0,     0,     0,     0,   -56,   508,     0,
       0,   -56,     0,     0,     0,   631,     0,   -56,     0,     0,
     503,     0,     0,     0,     0,     0,   503,   509,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   504,
     -56,   -56,   661,   503,   636,     0,     0,     0,   -56,   -56,
     -56,     0,     0,   641,   504,     0,   755,     0,   509,     0,
       0,     0,     0,     0,     0,     0,   506,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,     0,   717,  -112,  -112,
       0,     0,   715,     0,   504,   507,   576,   716,   731,   733,
     504,     0,   736,   505,   505,     0,   718,   744,   633,   731,
       0,   505,     0,   505,   505,     0,     0,     0,     0,     0,
       0,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,     0,     0,   -99,   -99,     0,   454,     0,     0,   504,
       0,   -99,   -99,   -99,   756,   504,     0,     0,     0,     0,
       0,   -84,   505,     0,   509,   -84,     0,     0,   454,   637,
       0,   -84,   504,     0,     0,   719,     0,   505,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,   -84,   -84,    33,     0,     0,     0,
     634,     0,   -84,   -84,   -84,   716,     0,   505,     0,   508,
       0,     0,     0,   505,     0,   508,   508,     0,    34,     0,
       0,     0,     0,   508,     0,   508,   508,     0,     0,     0,
       0,    35,     0,     0,     0,    36,    37,     0,     0,   731,
       0,    38,     0,    39,    40,    41,    42,     0,     0,     0,
      43,     0,   505,     0,    44,   576,     0,     0,   505,     0,
       0,     0,     0,     0,   508,     0,    45,     0,     0,    46,
       0,    47,     0,     0,     0,   505,     0,   731,   717,   508,
       0,     0,     0,   731,   506,   506,     0,     0,     0,     0,
       0,     0,   506,     0,   506,   506,     0,   718,     0,     0,
       0,     0,     0,   507,   507,   635,     0,   508,     0,   508,
       0,   507,     0,   507,   507,   508,     0,     0,     0,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,
    -100,  -100,     0,   506,     0,     0,     0,   887,  -100,  -100,
    -100,     0,     0,     0,     0,     0,   891,     0,   506,     0,
       0,     0,   507,     0,   508,     0,   719,     0,     0,     0,
     508,    55,   509,   509,     0,     0,     0,   507,     0,    82,
     509,    83,   509,   509,    84,     0,   717,   508,   506,    85,
       0,     0,     0,    86,   506,   576,   578,     0,     0,     0,
       0,     0,    87,     0,     0,   718,     0,   507,     0,    88,
       0,  -320,     0,   507,    89,     0,     0,     0,    90,     0,
      33,   509,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,     0,   506,     0,    93,   509,     0,     0,   506,
       0,     0,    34,    94,    95,     0,     0,    96,     0,     0,
     579,     0,   507,     0,     0,    35,   506,     0,   507,    36,
      37,     0,     0,     0,   719,    38,   509,    39,    40,    41,
      42,     0,   509,     0,    43,   507,     0,     0,    44,     0,
     305,   306,   307,   308,   309,   310,   311,   312,   313,     0,
      45,   314,   315,    46,     0,    47,     0,     0,     0,     0,
       0,     0,   477,     0,     0,   478,   166,   167,   168,   169,
       0,   509,   170,    82,   479,    83,     0,   509,    84,   480,
       0,   481,   482,    85,     0,     0,   483,    86,     0,     0,
       0,     0,     0,   172,   509,   484,    87,   485,   486,   487,
     488,     0,     0,    88,     0,     0,     0,   489,    89,     0,
     173,   174,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   490,    91,     0,    92,   175,     0,     0,    93,
       0,   491,   176,   492,   177,   493,   178,    94,    95,   494,
     495,    96,   496,     0,   274,     0,   497,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,  -193,   180,     0,     0,     0,   498,     0,     0,
     181,   182,   183,     0,     0,   184,     0,   185,   186,     0,
       0,   748,     0,     0,    55,   166,   167,   168,   169,     0,
       0,   170,    82,     0,    83,     0,     0,    84,   171,     0,
     187,   188,    85,     0,     0,     0,    86,     0,     0,     0,
       0,     0,   172,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    55,   173,
     174,    90,     0,     0,     0,     0,    82,     0,    83,     0,
       0,    84,    91,     0,    92,   175,    85,     0,    93,     0,
      86,   176,     0,   177,     0,   178,    94,    95,   179,    87,
      96,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,   180,     0,     0,     0,    91,     0,    92,   181,
     182,   183,    93,     0,   184,     0,   185,   186,     0,     0,
      94,    95,     0,     0,    96,     0,     0,    97,     0,     0,
       0,     0,     0,     0,   478,   166,   167,   168,   169,   187,
     188,   170,    82,   479,    83,   893,     0,    84,   480,     0,
     481,   482,    85,   894,     0,   483,    86,     0,     0,     0,
       0,     0,   172,     0,   484,    87,   485,   486,   487,   488,
       0,     0,    88,     0,     0,     0,   489,    89,     0,   173,
     174,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   490,    91,     0,    92,   175,     0,     0,    93,     0,
     491,   176,   492,   177,   493,   178,    94,    95,   494,   495,
      96,   496,     0,   274,     0,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     364,     0,   180,     0,     0,     0,   498,     0,     0,   181,
     182,   183,     0,     0,   184,     0,   185,   186,     0,     0,
     478,   166,   167,   168,   169,     0,     0,   170,    82,   479,
      83,     0,     0,    84,   480,     0,   481,   482,    85,   187,
     188,   483,    86,     0,     0,     0,     0,     0,   172,     0,
     484,    87,   485,   486,   487,   488,     0,     0,    88,     0,
       0,     0,   489,    89,     0,   173,   174,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,    91,     0,
      92,   175,     0,     0,    93,     0,   491,   176,   492,   177,
     493,   178,    94,    95,   494,   495,    96,   496,     0,   274,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,     0,   180,     0,
       0,     0,   498,     0,     0,   181,   182,   183,     0,     0,
     184,     0,   185,   186,     0,     0,    55,   166,   167,   168,
     169,     0,     0,   170,    82,   479,    83,     0,     0,    84,
     480,     0,     0,   482,    85,   187,   188,   483,    86,     0,
       0,     0,     0,     0,   172,     0,   484,    87,   485,   486,
     487,   488,     0,     0,    88,     0,     0,     0,   489,    89,
       0,   173,   174,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   490,    91,     0,    92,   175,     0,     0,
      93,     0,   491,   176,   492,   177,   493,   178,    94,    95,
     494,   495,    96,   496,     0,     0,     0,   497,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   364,     0,   180,     0,     0,     0,   498,     0,
       0,   181,   182,   183,     0,     0,   184,     0,   185,   186,
       0,    55,   166,   167,   168,   169,     0,     0,   170,    82,
       0,    83,     0,     0,    84,   171,     0,     0,     0,    85,
       0,   187,   188,    86,     0,     0,     0,     0,     0,   172,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,     0,   173,   174,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,   175,   453,     0,    93,     0,     0,   176,     0,
     177,     0,   178,    94,    95,   179,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   391,   753,   180,
       0,     0,     0,     0,     0,     0,   181,   182,   183,     0,
       0,   184,     0,   185,   186,     0,    55,   166,   167,   168,
     169,     0,     0,   170,    82,     0,    83,     0,     0,    84,
     171,     0,     0,     0,    85,     0,   187,   188,    86,     0,
       0,     0,     0,     0,   172,     0,     0,    87,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
       0,   173,   174,    90,     0,   411,     0,     0,     0,     0,
       0,     0,   412,     0,    91,     0,    92,   175,     0,     0,
      93,     0,     0,   176,     0,   177,     0,   178,    94,    95,
     179,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,   166,   167,   168,   169,     0,     0,   170,
      82,     0,    83,     0,   180,    84,   171,     0,     0,     0,
      85,   181,   182,   183,    86,     0,   184,     0,   185,   186,
     172,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   173,   174,    90,
       0,   187,   188,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   175,   453,     0,    93,     0,     0,   176,
       0,   177,     0,   178,    94,    95,   179,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   391,     0,
     180,     0,     0,     0,     0,     0,     0,   181,   182,   183,
       0,     0,   184,     0,   185,   186,     0,    55,   166,   167,
     168,   169,     0,     0,   170,    82,     0,    83,     0,     0,
      84,   171,     0,     0,     0,    85,     0,   187,   188,    86,
       0,     0,     0,     0,     0,   172,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   173,   174,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    92,   175,     0,
       0,    93,     0,     0,   176,     0,   177,     0,   178,    94,
      95,   179,     0,    96,     0,     0,   281,     0,     0,     0,
       0,     0,     0,    55,   166,   167,   168,   169,     0,     0,
     170,    82,     0,    83,     0,   180,    84,   171,     0,     0,
       0,    85,   181,   182,   183,    86,     0,   184,     0,   185,
     186,   172,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,     0,   173,   174,
      90,     0,   187,   188,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,   175,     0,     0,    93,     0,     0,
     176,     0,   177,     0,   178,    94,    95,   179,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,   561,     0,     0,     0,     0,     0,   181,   182,
     183,     0,     0,   184,     0,   185,   186,     0,    55,   166,
     167,   168,   169,     0,     0,   170,    82,     0,    83,     0,
       0,    84,   171,     0,     0,     0,    85,     0,   187,   188,
      86,     0,     0,     0,     0,     0,   172,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   173,   174,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   175,
       0,     0,    93,     0,     0,   176,     0,   177,     0,   178,
      94,    95,   179,     0,    96,     0,     0,   274,     0,     0,
       0,     0,     0,     0,    55,   166,   167,   168,   169,     0,
       0,   170,    82,     0,    83,     0,   180,    84,   171,     0,
       0,     0,    85,   181,   182,   183,    86,     0,   184,     0,
     185,   186,   172,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    55,   173,
     174,    90,     0,   187,   188,     0,    82,     0,    83,     0,
       0,    84,    91,     0,    92,   175,    85,     0,    93,     0,
      86,   176,     0,   177,     0,   178,    94,    95,   179,    87,
      96,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,   180,     0,     0,     0,    91,     0,    92,   181,
     182,   183,    93,     0,   184,     0,   185,   186,     0,     0,
      94,    95,     0,     0,    96,    59,     0,   274,   466,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    83,   187,
     188,    84,     0,    60,   467,     0,    85,     0,    61,     0,
      86,     0,    62,   468,   469,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   470,     0,    88,    63,     0,     0,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,     0,
       0,     0,    93,    64,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,     0,   471,    55,   166,
     167,   168,   169,     0,     0,   170,    82,     0,    83,     0,
       0,    84,   171,     0,     0,     0,    85,     0,     0,     0,
      86,     0,   677,     0,     0,     0,   172,     0,     0,    87,
       0,   650,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   173,   174,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   175,
       0,     0,    93,   678,     0,   176,     0,   177,     0,   178,
      94,    95,   179,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   679,   680,   180,     0,     0,   681,
     682,   683,   684,   685,   686,   687,   688,   689,     0,   690,
     185,   186,     0,     0,     0,     0,     0,     0,     0,   691,
     692,     0,     0,   693,   694,   695,   696,     0,    59,   697,
     698,   466,     0,     0,     0,     0,     0,     0,     0,    82,
       0,    83,     0,     0,    84,     0,    60,   467,     0,    85,
       0,    61,     0,    86,     0,    62,   468,   469,     0,     0,
       0,     0,    87,     0,     0,     0,     0,   470,     0,    88,
      63,     0,     0,     0,    89,    55,     0,     0,    90,     0,
       0,     0,     0,    82,     0,    83,     0,     0,    84,    91,
       0,    92,     0,    85,     0,    93,    64,    86,     0,     0,
       0,     0,     0,    94,    95,     0,    87,    96,     0,     0,
     471,     0,     0,    88,     0,    33,     0,     0,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,     0,    34,     0,    93,
       0,     0,     0,     0,     0,     0,     0,    94,    95,     0,
      35,    96,     0,     0,   394,    37,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,     0,
      47
};

static const yytype_int16 yycheck[] =
{
       3,     1,   339,   277,   346,    61,    76,   101,   514,    15,
     614,   349,    15,   347,   108,   109,   592,   347,   627,   158,
     736,   180,   581,   282,   283,   836,   837,    10,     4,    29,
       4,   252,   136,     3,     4,   139,    36,   268,   271,   103,
      98,   109,   110,     3,   102,     4,     3,   111,   153,     4,
     700,     1,   389,   391,   159,   118,     4,   707,     4,   867,
     868,    61,    45,   133,   297,     4,   136,     4,    81,   139,
       4,   882,   142,     3,   611,   138,    76,     4,     4,     4,
       4,     4,     4,   139,     4,     1,     4,     4,   625,   665,
     268,    41,   268,     4,   600,    71,   268,    61,   909,   907,
     908,   268,   268,    51,   268,   338,   268,   100,     1,     1,
      16,   761,    71,   106,     0,    52,   675,   173,     1,     1,
      68,   104,   105,     1,   180,   264,     1,    33,    98,   268,
      98,     1,   102,   133,    71,   111,   136,   111,   747,   139,
      61,   111,   142,   374,   147,   704,   251,   406,   108,   152,
     371,   111,   135,   136,   111,   158,   111,   390,   257,   763,
       3,   320,   321,   267,   269,   111,   977,   975,   976,     1,
       1,     1,   111,   173,   111,   891,   785,   111,   108,   249,
     180,   111,   791,   277,   111,   111,   111,   111,   111,   111,
     106,   111,   286,   111,   111,   483,   374,   267,   374,   758,
     759,     1,   374,     0,    97,    97,     1,   374,   374,   173,
     374,   103,   374,   106,   106,    97,   180,     1,   934,    97,
     103,   103,   278,   279,   106,   103,     1,    97,   106,   235,
       1,   106,   235,   103,     1,   374,   106,     3,     1,     1,
       1,     1,     1,     1,   499,     1,     1,   250,   108,   249,
      98,     1,   173,    98,    98,    98,   101,   101,    11,   102,
     120,   264,     4,   111,     4,   268,   364,   267,   324,   325,
      98,   100,    98,    15,   106,   106,   106,   106,   278,   279,
     108,    23,   108,   102,    98,   100,   342,   102,   344,   893,
      97,   102,   111,   108,     1,   871,    15,    97,     4,   106,
     111,    98,    97,   103,    23,   120,   106,   363,   364,   129,
     130,   106,    19,    97,   278,   279,   654,    24,    71,   103,
     102,    28,   106,     4,   324,   325,   107,   108,   583,   111,
      53,   106,    55,   103,   100,   106,    43,    60,   676,   106,
     102,   111,   342,   106,   344,   106,   106,   106,   106,   352,
     106,   106,   102,   356,   930,   931,   108,   278,   279,    99,
     324,   325,    69,   363,   364,   108,   700,   486,   103,   488,
     700,   374,   491,   707,    98,   474,   111,   707,   342,   103,
     344,   480,   102,   100,    97,   483,   100,    97,   108,   106,
     103,     4,   106,   103,   493,   494,   495,   453,    98,   363,
     364,   101,   100,   324,   325,     4,    98,   463,   106,   101,
      98,   467,   468,   101,    93,    94,   514,   326,   327,   328,
     329,   342,    97,   344,    99,   481,    98,   761,     4,   101,
      98,   761,    14,   101,     4,    17,    98,   943,    98,   101,
      98,   101,   363,   101,    98,   100,    98,   101,   542,   101,
     107,    98,    98,   453,   101,   101,     4,   364,   514,    97,
      42,    99,    97,   463,    99,    47,   111,   467,   468,   133,
     134,   471,   472,   139,   140,   141,   100,   751,   102,   111,
      62,   481,    64,   111,   112,   113,     3,   543,   830,   453,
     111,   112,   113,   107,    76,    77,   830,   107,    80,   463,
     830,   107,   600,   467,   468,    97,   107,    99,     1,   106,
     798,   799,   102,   611,   514,    93,    94,   481,   806,   102,
     808,   809,   578,   100,    97,   102,    99,   102,   584,   585,
      97,   100,   453,   102,    97,    97,    99,    99,    97,   100,
      99,    97,   463,   543,   600,   100,   467,   468,    95,    96,
     514,   100,   608,   322,   323,   611,   612,   100,   652,   847,
     481,   102,   330,   331,   971,   972,   364,   917,   918,   625,
     102,   102,   108,   108,   862,   102,   483,   103,   578,   543,
     114,    97,   119,   583,   584,   585,   115,   137,   181,   182,
     183,   184,   185,   186,   187,   188,   103,   101,    97,    97,
     600,   120,     4,    97,   892,   120,   101,   514,   608,   101,
       4,   611,   612,   106,   578,   952,   953,    98,    29,   103,
     584,   585,   543,     4,     4,   625,   144,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   600,     4,   131,   132,
     739,   740,     4,   120,   608,    49,   101,   611,   612,   937,
      61,   101,   103,   107,   103,   103,   103,   578,   752,   103,
      97,   625,   180,   584,   585,   103,    52,   103,    52,   364,
     101,   101,   960,   102,   102,    86,    87,    88,    89,    90,
      91,    92,   100,   102,    98,   483,   103,   608,   101,    97,
     102,   612,   102,   600,   792,    98,   103,    85,   120,   100,
     798,   799,    97,     4,   611,   708,   102,    98,   806,   102,
     808,   809,   102,   769,   770,   120,   514,   773,   103,     4,
      97,   100,    97,    99,   317,   318,   319,   320,   321,   322,
     323,   801,   102,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   103,   337,   801,   103,   103,   103,   847,
     102,   100,   100,   271,     4,   273,   100,   103,   103,   101,
     100,   120,   280,     1,   862,   103,   865,   101,   103,   769,
     770,   364,   103,   773,   873,   107,   779,   101,    94,   297,
     783,   784,    93,   301,   883,   884,   103,     4,   483,     4,
      27,   101,   890,   101,   892,   107,   103,   103,   316,   101,
     898,   801,   600,   103,   103,   769,   770,   100,   102,   773,
     102,   404,    96,   611,    95,    94,   107,   820,   336,   514,
     338,    93,   825,   101,   752,   130,   103,   103,   103,   568,
     348,   349,   173,   412,   173,   400,   332,   405,   335,   937,
     364,   898,   898,   333,   702,   943,   945,   946,   769,   770,
     337,   334,   773,   604,   792,   954,   955,   765,   896,   364,
     890,   898,   960,   492,   741,   860,   846,   741,   121,   925,
     472,     4,   390,   391,   877,   878,   147,    49,   346,   779,
     347,   784,   783,   374,   878,   792,   884,   943,   877,   951,
     483,   798,   799,   411,   412,   264,   356,    24,   898,   806,
     352,   808,   809,   142,   163,   600,   849,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   611,    -1,   364,    -1,
       1,   514,    -1,    -1,    -1,   925,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   898,    -1,    -1,    -1,    -1,    -1,
     847,   459,    -1,   943,    -1,   948,   949,    -1,   951,    -1,
      -1,    -1,    -1,    -1,    -1,   862,    -1,    -1,     1,   483,
      -1,   925,    -1,    -1,   557,    -1,   559,   560,   561,    -1,
      -1,    -1,   490,    -1,   492,    -1,    -1,    -1,   483,   943,
      -1,    -1,    -1,   890,    -1,   892,    -1,    -1,    -1,    -1,
     514,   898,    -1,    -1,   792,    -1,    -1,    -1,    -1,    -1,
     798,   799,    -1,     1,   925,    -1,    -1,   600,   806,   514,
     808,   809,    -1,    -1,    -1,    -1,    -1,    98,   611,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
     937,    -1,    -1,    -1,    -1,    -1,   943,   483,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   847,
     131,   132,   570,   960,     1,    -1,    -1,    -1,   139,   140,
     141,    -1,    -1,   106,   862,    -1,   659,    -1,   514,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   600,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   611,   131,   132,
      -1,    -1,   890,    -1,   892,   600,   614,   792,   616,   617,
     898,    -1,   620,   798,   799,    -1,   611,   625,   106,   627,
      -1,   806,    -1,   808,   809,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,   131,   132,    -1,   654,    -1,    -1,   937,
      -1,   139,   140,   141,   662,   943,    -1,    -1,    -1,    -1,
      -1,    98,   847,    -1,   600,   102,    -1,    -1,   676,   106,
      -1,   108,   960,    -1,    -1,   611,    -1,   862,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,   131,   132,     9,    -1,    -1,    -1,
       1,    -1,   139,   140,   141,   890,    -1,   892,    -1,   792,
      -1,    -1,    -1,   898,    -1,   798,   799,    -1,    31,    -1,
      -1,    -1,    -1,   806,    -1,   808,   809,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,   747,
      -1,    54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,
      63,    -1,   937,    -1,    67,   763,    -1,    -1,   943,    -1,
      -1,    -1,    -1,    -1,   847,    -1,    79,    -1,    -1,    82,
      -1,    84,    -1,    -1,    -1,   960,    -1,   785,   792,   862,
      -1,    -1,    -1,   791,   798,   799,    -1,    -1,    -1,    -1,
      -1,    -1,   806,    -1,   808,   809,    -1,   792,    -1,    -1,
      -1,    -1,    -1,   798,   799,   106,    -1,   890,    -1,   892,
      -1,   806,    -1,   808,   809,   898,    -1,    -1,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
     131,   132,    -1,   847,    -1,    -1,    -1,   845,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,   854,    -1,   862,    -1,
      -1,    -1,   847,    -1,   937,    -1,   792,    -1,    -1,    -1,
     943,     4,   798,   799,    -1,    -1,    -1,   862,    -1,    12,
     806,    14,   808,   809,    17,    -1,   890,   960,   892,    22,
      -1,    -1,    -1,    26,   898,   893,    29,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,   890,    -1,   892,    -1,    42,
      -1,     0,    -1,   898,    47,    -1,    -1,    -1,    51,    -1,
       9,   847,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,   937,    -1,    68,   862,    -1,    -1,   943,
      -1,    -1,    31,    76,    77,    -1,    -1,    80,    -1,    -1,
      83,    -1,   937,    -1,    -1,    44,   960,    -1,   943,    48,
      49,    -1,    -1,    -1,   890,    54,   892,    56,    57,    58,
      59,    -1,   898,    -1,    63,   960,    -1,    -1,    67,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      79,   131,   132,    82,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,   937,    11,    12,    13,    14,    -1,   943,    17,    18,
      -1,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    32,   960,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,    -1,    -1,    -1,   106,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,
      -1,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
     139,   140,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,     4,    49,
      50,    51,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    62,    -1,    64,    65,    22,    -1,    68,    -1,
      26,    71,    -1,    73,    -1,    75,    76,    77,    78,    35,
      80,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    62,    -1,    64,   109,
     110,   111,    68,    -1,   114,    -1,   116,   117,    -1,    -1,
      76,    77,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
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
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,     4,    49,
      50,    51,    -1,   139,   140,    -1,    12,    -1,    14,    -1,
      -1,    17,    62,    -1,    64,    65,    22,    -1,    68,    -1,
      26,    71,    -1,    73,    -1,    75,    76,    77,    78,    35,
      80,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    62,    -1,    64,   109,
     110,   111,    68,    -1,   114,    -1,   116,   117,    -1,    -1,
      76,    77,    -1,    -1,    80,     1,    -1,    83,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,   139,
     140,    17,    -1,    19,    20,    -1,    22,    -1,    24,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    80,    -1,    -1,    83,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    32,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,   117,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      -1,    -1,    68,    73,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   102,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    -1,   119,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,    -1,    -1,   133,   134,   135,   136,    -1,     1,   139,
     140,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,    22,
      -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    47,     4,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    62,
      -1,    64,    -1,    22,    -1,    68,    69,    26,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    35,    80,    -1,    -1,
      83,    -1,    -1,    42,    -1,     9,    -1,    -1,    47,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    31,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      44,    80,    -1,    -1,    83,    49,    -1,    -1,    -1,    -1,
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
      40,    83,   148,   328,   331,   332,   334,     1,     4,    13,
      18,    20,    21,    25,    34,    36,    37,    38,    39,    46,
      61,    70,    72,    74,    78,    79,    81,    85,   106,   148,
     151,   155,   167,   174,   175,   177,   188,   189,   190,   206,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   224,
     227,   229,   230,   231,   238,   239,   240,   243,   244,   252,
     253,   254,   255,   256,   257,   259,   260,   265,   266,   267,
     268,   270,   280,   290,   101,   301,    99,   103,   168,   171,
     222,   350,   351,   103,   103,   103,   103,   103,   194,   103,
     103,   103,   187,   192,    99,   160,   208,   160,    97,   103,
     107,    99,   103,     4,     4,   148,   208,   209,    29,    83,
     148,   102,   148,   148,    52,    52,   280,     4,    52,    71,
     220,   221,   280,   281,   329,   392,   106,   213,   340,   101,
     107,     1,   106,   213,   148,     1,   106,   212,   102,     1,
     102,   395,   395,     4,    15,    23,   395,   102,   208,   258,
     395,   258,   213,   213,   213,   102,     1,   102,     4,   220,
       1,   106,     1,   106,     1,   106,     1,   106,     1,   106,
       1,   106,     1,   106,   101,   211,     1,   106,     1,   106,
     117,   103,    99,   101,    97,   190,   190,   190,   190,   103,
     162,   208,    98,   148,     4,     4,    71,   306,     4,   225,
     226,   220,   280,   148,   148,   102,   120,    32,    73,   104,
     105,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     119,   129,   130,   133,   134,   135,   136,   139,   140,   333,
      98,     1,    97,   106,   102,   392,    71,    98,   100,   211,
     225,    85,   148,   167,   174,   175,   177,   188,   189,   206,
     219,   228,   245,   248,   251,   148,     1,   106,   209,     1,
     106,   208,   210,   208,     1,   106,   208,     1,   106,    16,
      33,   261,   262,   264,   208,   219,   269,   241,     1,   210,
       4,   158,   159,   101,   222,   190,   208,     4,   102,   102,
     392,    98,   103,   120,     1,    97,   106,   106,   390,   102,
     102,   306,   222,   102,   309,   312,   315,   221,   306,   100,
     309,   275,   317,   320,   321,   102,     4,   271,   272,     1,
     106,   397,    97,     4,     1,   106,     1,   103,   396,   103,
     396,   102,   213,   213,   262,   264,   103,   210,   103,   103,
     102,   179,   349,   158,    99,   100,   106,   368,   306,   306,
     100,   309,   336,   209,   226,   100,   148,   148,   103,   148,
      97,    99,   103,   317,    99,    93,    94,   101,   275,   318,
     321,   275,   319,   320,   210,   120,    97,   103,   210,   246,
     249,   228,     1,    41,   398,   212,   212,   100,   232,   147,
     155,   212,     1,   212,   212,   103,   101,   103,   103,   275,
     366,    99,   107,   337,   338,   275,   324,   325,   326,     4,
       4,     4,   101,   393,   393,   393,   103,   208,   272,   212,
     397,   208,    27,    15,    23,   233,   234,   235,   236,   237,
       4,   263,   263,   212,   213,   368,   368,    93,    94,   101,
     392,    11,    71,   106,   213,   341,    95,    96,   101,   275,
     326,   275,   325,   103,   103,    97,   103,   393,   106,   213,
     322,   322,     1,   106,   247,   250,   251,   396,   212,   209,
     107,   101,   235,   215,   237,   103,   103,   242,   368,   368,
     393,   100,   102,   102,   391,   391,   391,   148,   392,   392,
     396,   212,   107,   213,   213,   275,   275,   363,   366,   168,
     168,   213,   213,     4,   212,    94,    93,   101,   103,   103,
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
     333,   333,   334,   334,   336,   335,   337,   337,   338,   338,
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
       1,     1,     7,     7,     0,     9,     0,     1,     5,     5,
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
#line 2671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 120 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 121 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 122 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 124 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 134 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 138 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);(yyval.r.base) = new string("bool");}
#line 2779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);(yyval.r.base) = new string("decimal");}
#line 2797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("sbyte");}
#line 2803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("byte");}
#line 2809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("short");}
#line 2815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("ushort");}
#line 2821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("int");}
#line 2827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("uint");}
#line 2833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("long");}
#line 2839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("ulong");}
#line 2845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("char");}
#line 2851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("float");}
#line 2857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("double");}
#line 2863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("object");}
#line 2869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("string");}
#line 2875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[-1].r.known_type);(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = new string("");}
#line 2899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 231 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 250 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 254 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 257 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 258 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 261 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 281 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 285 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 288 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 293 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 321 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 332 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 333 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 334 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 335 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 346 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 347 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 348 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 371 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 381 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 403 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 426 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 427 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 457 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 461 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 466 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 486 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 487 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 491 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),false,(yyvsp[0].r.line_no),(yyvsp[0].r.col_no)) ;
	}
#line 3875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 499 "yacc.y" /* yacc.c:1646  */
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 504 "yacc.y" /* yacc.c:1646  */
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
				  (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 511 "yacc.y" /* yacc.c:1646  */
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[0].r.str)) ; 
		  }
#line 3901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 515 "yacc.y" /* yacc.c:1646  */
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[-2].r.str));
		   }
#line 3909 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 520 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 521 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 529 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),true,(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no)) ;
  }
#line 3942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 536 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",1);
  		(yyval.r.identifiers) = new queue<string>();
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
  }
#line 3952 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 542 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",2);
	  	(yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));	
  }
#line 3962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 549 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);(yyval.r.identifier) = new string((yyvsp[-2].r.str));}
#line 3968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 559 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 565 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 566 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 567 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 568 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 569 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 570 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 571 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 579 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 605 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 608 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 616 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 627 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 627 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 631 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);}
#line 4262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 649 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 686 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 701 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 704 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 705 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 710 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 719 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 728 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 734 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 738 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 742 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 749 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 752 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 768 "yacc.y" /* yacc.c:1646  */
    {SPL->addNamespace(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);SPL->endScope();}
#line 4646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 778 "yacc.y" /* yacc.c:1646  */
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[0].r.str));
		  }
#line 4666 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 782 "yacc.y" /* yacc.c:1646  */
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[-1].r.base)) + string((yyvsp[0].r.str)));
		}
#line 4674 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[-1].r.str)) + ".");}
#line 4680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[-2].r.base) + string((yyvsp[-1].r.str)) + ".");}
#line 4686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 809 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 836 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
#line 4803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 841 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 4812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 848 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4822 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 854 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
#line 4838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
#line 4844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
#line 4850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
#line 4856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
#line 4862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 866 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
#line 4868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 867 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 4874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
#line 4880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
#line 4886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 870 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
#line 4892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
#line 4898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
#line 4904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
#line 4910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
#line 4916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 885 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4924 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 888 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 4930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 4936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 894 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 897 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();}
#line 4948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 898 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 899 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);(yyval.r.bases) = new queue<string>();}
#line 4960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 903 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4970 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 909 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[-2].r.bases);
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 917 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 921 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 922 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 925 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 926 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 931 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 932 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 933 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 934 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 935 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 937 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 938 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 942 "yacc.y" /* yacc.c:1646  */
    {		l.a("constant_declaration",4);
				//SPL->add_var(*$<r.modifiers>2,1);
		  }
#line 5078 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 945 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5084 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 949 "yacc.y" /* yacc.c:1646  */
    {
		        SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
  		      l.a("field_declaration",4);
	      }
#line 5093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 954 "yacc.y" /* yacc.c:1646  */
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
        }
#line 5102 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 961 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2); SPL->endScope();}
#line 5108 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 966 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type));
      }
#line 5116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 970 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);
      }
#line 5124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 977 "yacc.y" /* yacc.c:1646  */
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
#line 5132 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 981 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 985 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 989 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[-2].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[-2].r.types_ids))->front()); ((yyvsp[-2].r.types_ids))->pop();}
            while(!((yyvsp[0].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[0].r.types_ids))->front()); ((yyvsp[0].r.types_ids))->pop();}
        }
#line 5159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 997 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 998 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 1001 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 1010 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5192 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1015 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
      }
#line 5201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5210 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
       }
#line 5219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[0].r.base) ;
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1042 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[0].r.base);
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1052 "yacc.y" /* yacc.c:1646  */
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));  
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no); 
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1063 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base) ;
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1071 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base);
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1087 "yacc.y" /* yacc.c:1646  */
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1103 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1107 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1108 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1111 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1112 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1124 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1127 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1128 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1145 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1157 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1160 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1165 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1169 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1172 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1180 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1184 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1188 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {
  SPL->addMethod(*(yyvsp[-4].r.modifiers),"",string((yyvsp[-3].r.str)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);
  }
#line 5617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1212 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);SPL->endScope();}
#line 5623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1215 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1220 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1240 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1243 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1244 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1252 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1253 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1256 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1259 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1262 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1263 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1266 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1267 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1270 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1271 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1272 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1273 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1274 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1275 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1276 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1277 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1279 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1284 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1285 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1288 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1289 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1292 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1293 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1299 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addInterface(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));		
  }
#line 5829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1302 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);SPL->endScope();}
#line 5835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1306 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 5841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1307 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1310 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1313 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1316 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1317 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1320 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1321 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1324 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1325 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1326 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1327 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1331 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1332 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1335 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1336 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1342 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1342 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1349 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1349 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1353 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1354 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1355 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1356 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1359 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1364 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1365 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1370 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1373 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1374 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1377 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1380 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1381 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1384 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1385 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1388 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1389 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1392 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1393 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1398 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1399 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1404 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1407 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1408 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1411 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1412 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1415 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1416 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1419 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1422 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1423 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1424 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1425 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1426 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1427 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1428 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1429 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1430 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1433 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1434 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1437 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1440 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1441 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1444 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1447 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1454 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1457 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1460 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1463 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1466 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1469 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1477 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0);}
#line 6267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1478 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0,1);yyerrok;yyclearin;}
#line 6273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1481 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 6279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1482 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1485 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 6291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1486 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1489 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0);}
#line 6303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1490 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0,1);}
#line 6309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1493 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0);}
#line 6315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1494 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0,1);yyerrok;}
#line 6321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6325 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1499 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




