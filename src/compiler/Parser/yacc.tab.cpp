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

	Logger l("logs/parser.log");
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
#define YYNNTS  257
/* YYNRULES -- Number of rules.  */
#define YYNRULES  592
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  988

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
     462,   465,   465,   466,   469,   470,   474,   475,   478,   481,
     484,   485,   486,   487,   490,   498,   503,   510,   514,   520,
     521,   522,   525,   528,   535,   541,   549,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   574,   575,   576,   577,   578,   579,   580,   583,   584,
     587,   588,   591,   594,   597,   598,   601,   602,   605,   608,
     609,   612,   613,   616,   617,   618,   619,   622,   625,   626,
     627,   627,   627,   630,   631,   635,   640,   641,   644,   645,
     648,   649,   652,   653,   656,   659,   662,   663,   666,   669,
     670,   671,   672,   673,   676,   677,   680,   681,   684,   685,
     686,   687,   688,   689,   692,   693,   696,   697,   700,   701,
     704,   705,   706,   709,   710,   713,   714,   715,   718,   719,
     722,   725,   728,   731,   734,   737,   738,   742,   745,   746,
     749,   752,   753,   756,   757,   760,   761,   764,   765,   768,
     768,   772,   773,   777,   781,   788,   789,   793,   796,   797,
     800,   801,   804,   805,   808,   809,   812,   813,   816,   817,
     820,   821,   822,   823,   824,   836,   840,   847,   853,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,   873,   874,   885,   884,   893,   894,   897,   898,   899,
     902,   908,   917,   921,   922,   925,   926,   929,   930,   931,
     932,   933,   934,   935,   936,   937,   938,   941,   945,   948,
     953,   961,   965,   969,   977,   980,   984,   988,   997,   998,
    1001,  1002,  1009,  1014,  1021,  1026,  1033,  1041,  1051,  1062,
    1070,  1081,  1082,  1083,  1086,  1097,  1103,  1104,  1107,  1108,
    1111,  1112,  1115,  1121,  1127,  1128,  1131,  1132,  1138,  1139,
    1142,  1148,  1154,  1160,  1162,  1165,  1169,  1172,  1173,  1176,
    1177,  1180,  1181,  1182,  1183,  1184,  1185,  1186,  1187,  1188,
    1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1204,  1205,  1209,  1208,  1215,  1216,  1219,
    1220,  1236,  1239,  1240,  1243,  1244,  1249,  1252,  1253,  1256,
    1259,  1262,  1263,  1266,  1267,  1270,  1271,  1272,  1273,  1274,
    1275,  1276,  1277,  1279,  1284,  1285,  1288,  1289,  1292,  1293,
    1299,  1298,  1306,  1307,  1310,  1313,  1316,  1317,  1320,  1321,
    1324,  1325,  1326,  1327,  1331,  1332,  1335,  1336,  1342,  1339,
    1349,  1345,  1353,  1354,  1355,  1356,  1359,  1364,  1365,  1370,
    1373,  1374,  1377,  1380,  1381,  1384,  1385,  1388,  1389,  1392,
    1393,  1398,  1399,  1404,  1407,  1408,  1411,  1412,  1415,  1416,
    1419,  1422,  1423,  1424,  1425,  1426,  1427,  1428,  1429,  1430,
    1433,  1434,  1437,  1440,  1441,  1444,  1447,  1454,  1457,  1460,
    1463,  1466,  1469,  1477,  1478,  1481,  1482,  1485,  1486,  1489,
    1490,  1493,  1494
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
  "embedded_statement", "block", "$@1", "statement_list_opt",
  "statement_list", "empty_statement", "labeled_statement",
  "declaration_statement", "local_variable_declaration",
  "variable_declarators", "variable_declarator", "variable_initializer",
  "stackalloc_initializer", "local_constant_declaration",
  "constant_declarators", "constant_declarator", "expression_statement",
  "statement_expression", "selection_statement", "if_statement",
  "switch_statement", "switch_block", "switch_sections_opt",
  "switch_sections", "switch_section", "switch_labels", "switch_label",
  "iteration_statement", "unsafe_statement", "while_statement", "$@2",
  "$@3", "do_statement", "for_statement", "for_initializer_opt",
  "for_condition_opt", "for_iterator_opt", "for_initializer",
  "for_condition", "for_iterator", "statement_expression_list",
  "foreach_statement", "jump_statement", "break_statement",
  "continue_statement", "goto_statement", "return_statement",
  "expression_opt", "throw_statement", "try_statement", "catch_clauses",
  "catch_clause", "identifier_opt", "finally_clause", "checked_statement",
  "unchecked_statement", "lock_statement", "using_statement",
  "resource_acquisition", "fixed_statement", "fixed_pointer_declarators",
  "fixed_pointer_declarator", "compilation_unit", "using_directives_opt",
  "attributes_opt", "namespace_member_declarations_opt",
  "namespace_declaration", "$@4", "comma_opt", "qualified_identifier",
  "qualifier", "namespace_body", "using_directives", "using_directive",
  "using_alias_directive", "using_namespace_directive",
  "namespace_member_declarations", "namespace_member_declaration",
  "type_declaration", "modifiers_opt", "modifiers", "modifier",
  "class_declaration", "$@5", "class_base_opt", "class_base",
  "interface_type_list", "class_body", "class_member_declarations_opt",
  "class_member_declarations", "class_member_declaration",
  "constant_declaration", "field_declaration", "method_declaration",
  "method_header", "formal_parameter_list_opt", "return_type",
  "method_body", "formal_parameter_list", "formal_parameter_default_list",
  "formal_parameter", "fixed_parameter", "formal_parameter_default",
  "parameter_modifier_opt", "parameter_array", "property_declaration",
  "accessor_declarations", "set_accessor_declaration_opt",
  "get_accessor_declaration_opt", "get_accessor_declaration",
  "set_accessor_declaration", "accessor_body", "event_declaration",
  "event_accessor_declarations", "add_accessor_declaration",
  "remove_accessor_declaration", "indexer_declaration",
  "indexer_declarator", "qualified_this", "operator_declaration",
  "operator_declarator", "overloadable_operator_declarator",
  "overloadable_operator", "conversion_operator_declarator",
  "constructor_declaration", "$@6", "constructor_initializer_opt",
  "constructor_initializer", "destructor_declaration", "operator_body",
  "constructor_body", "struct_declaration", "struct_interfaces_opt",
  "struct_interfaces", "struct_body", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration", "$@7",
  "interface_base_opt", "interface_base", "interface_body",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration",
  "new_opt", "interface_property_declaration", "$@8",
  "interface_indexer_declaration", "$@9", "interface_accessors",
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

#define YYPACT_NINF -815

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-815)))

#define YYTABLE_NINF -578

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -35,   301,    73,     8,   -35,  -815,  -815,  -815,     7,   181,
    -815,   325,  -815,  1313,  -815,   240,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,     8,  -815,   241,  -815,  -815,   345,
    -815,  -815,   282,  -815,  -815,  -815,   345,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,   388,  3096,
    -815,  3067,  -815,  -815,   537,   343,   205,  -815,  -815,  -815,
    -815,  1615,   379,   419,   439,   468,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,   345,  -815,   294,  -815,
    -815,   359,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,   369,  -815,   391,
    -815,   534,  -815,  -815,  -815,  -815,  -815,  -815,   534,   534,
     543,   456,   487,   505,   513,  -815,  -815,   144,  -815,   482,
    -815,   -35,   467,  -815,  -815,  -815,  -815,  -815,  -815,   528,
     368,   548,  -815,   345,  -815,  -815,   345,   550,  -815,    51,
    -815,  -815,   248,  -815,  2651,  -815,  -815,   185,  -815,  -815,
     383,  -815,   278,   467,  -815,   554,   552,   554,   321,   467,
     557,   554,   555,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
     208,   532,  -815,  2695,  -815,   556,  -815,  -815,   560,   561,
    2364,  2651,  2651,  2651,  2651,  2651,  2651,  2651,  2651,  -815,
    -815,   549,   558,   209,   562,  -815,  -815,  -815,  -815,   565,
     568,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,   118,  -815,  -815,  -815,   716,  -815,
     395,   406,   423,    35,   477,   566,   563,   570,   546,   -53,
    -815,  -815,  -815,   224,   585,   335,   382,   584,   572,   591,
    -815,   574,  -815,   575,   692,   596,   602,  -815,  -815,   345,
     381,   467,  3096,  -815,  -815,  -815,  -815,   -49,  -815,  -815,
    -815,  -815,  -815,   604,   389,  -815,  -815,   345,   430,   467,
    -815,  2651,   699,  2651,   369,   190,   610,   170,  2695,  3027,
    2651,    26,    22,    69,   445,   608,   258,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,   709,   711,  2651,   712,  2163,
    -815,  2651,  -815,  -815,   713,  -815,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  2651,  2651,  2651,  2651,
    2651,  2651,  2651,  2651,  2695,  2695,  2651,  2651,  2651,  2651,
    2651,  2651,  2651,  2651,  2651,  2651,  2651,  2651,  2651,  2163,
    -815,  -815,  2695,  -815,  2695,   238,     8,     8,  2249,  2249,
     599,  -815,   431,  -815,   671,   621,   432,  -815,  -815,  -815,
    -815,  -815,  -815,  2939,  1452,  -815,  -815,  -815,  -815,  -815,
     554,  3096,  -815,   622,   438,  -815,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,   309,  -815,   623,  2163,
    2651,  2249,  -815,     9,   127,   318,   624,  -815,  -815,   627,
      26,  -815,   628,   630,  2450,  2855,    26,  -815,  -815,   397,
    -815,  2651,  2651,   637,  -815,   632,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,   395,   395,   406,   406,   391,   391,
     423,   423,   423,   423,    35,    35,   477,   566,   563,   570,
     617,   546,   471,   633,    46,    65,  -815,  -815,   591,  -815,
     574,  -815,   575,  2695,  -815,  -815,  -815,  -815,  -815,  2651,
    -815,  -815,  -815,  2983,  -815,  -815,   152,  2695,  2695,   673,
     687,    70,    34,  -815,   320,  -815,  -815,   642,  1817,  2775,
    -815,  -815,  -815,  -815,   644,   475,  -815,   648,   656,  -815,
    -815,  -815,  -815,  2651,  -815,  2651,  2651,  2651,  -815,   652,
    -815,  -815,  -815,  -815,  2163,  -815,  2651,  -815,  -815,  -815,
    -815,   -17,  -815,  -815,  2695,    80,    36,   383,    85,    86,
    2695,  2695,   654,   212,  1171,   664,   174,  -815,   662,    37,
     667,   658,  -815,  -815,  -815,  -815,   492,   244,   489,  2695,
     246,  1933,   666,   102,   102,   249,   102,   668,  2651,   102,
    2651,   669,   490,   669,   670,   228,  -815,    88,   549,   558,
      87,   745,  1054,   950,   455,   660,   716,   255,  -815,  -815,
    -815,   672,  1817,  -815,  -815,  -815,   261,   272,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
      44,   767,  -815,   534,  -815,  2048,  -815,  -815,  -815,  -815,
    2651,  -815,  -815,  2651,    89,   674,   676,   677,   690,   675,
     182,  -815,   213,  -815,   302,   303,   383,  2249,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
     694,     8,  -815,   770,  -815,   383,   698,  -815,     8,     8,
    1817,  -815,  -815,  -815,    85,  -815,  -815,   714,  2695,  -815,
    -815,  2565,  2695,   275,  2651,   280,  2651,  2651,  -815,   281,
    2651,   290,    54,  -815,  -815,  2565,  -815,  1571,   681,   697,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
     701,   704,   534,  -815,  -815,  -815,   706,   341,   383,   383,
     715,     8,  -815,  2651,  -815,   802,  -815,  -815,   727,  2695,
    2695,   726,  -815,  2695,   498,  -815,  -815,  -815,   730,     8,
     506,   523,   733,   447,   448,  -815,   719,   743,    91,   187,
     230,   234,   245,   267,   274,  -815,  -815,  -815,   293,  -815,
     749,    94,  -815,  -815,   296,  -815,  -815,  -815,    95,   746,
    -815,  -815,    95,  -815,  -815,   507,   669,    54,  -815,  -815,
    -815,  -815,   747,  2651,   751,   752,   753,  -815,  -815,  -815,
    -815,   756,  -815,  -815,   757,   759,     8,   509,   768,  -815,
    -815,     8,   105,   109,  -815,   112,     8,  -815,  -815,   763,
    -815,  -815,  -815,  -815,   784,  -815,  -815,   789,  -815,  -815,
    2651,   769,   357,  -815,  -815,  -815,  2651,  2651,    38,  -815,
    -815,  -815,  -815,  1933,  1933,   783,    51,  -815,  -815,  -815,
    -815,  1933,   886,  1933,  1933,   669,  -815,   341,   341,   539,
     791,  -815,    43,   355,  -815,   540,   792,     8,     8,   793,
     794,   361,  -815,   363,   363,  -815,   796,  2651,   897,  1933,
    -815,   293,  -815,  -815,  -815,  -815,  2651,   875,  -815,   377,
    -815,   899,   899,  -815,  1933,  -815,  -815,  -815,  -815,  -815,
     341,   341,  -815,   805,   804,   807,  -815,  -815,  -815,  -815,
    -815,  -815,   816,  -815,   818,  -815,  -815,  -815,  2695,  -815,
    -815,  -815,  -815,  -815,  -815,   297,  -815,  -815,  -815,  2651,
      95,  1933,  2651,   810,   822,   377,  -815,  1701,  -815,  -815,
     825,   827,  -815,   464,   466,  -815,     8,  2163,  2163,   669,
     669,  -815,   113,  -815,  -815,  -815,  -815,    95,  -815,   749,
    1933,  -815,   812,  -815,  -815,  -815,  1817,  -815,   669,   669,
    -815,   838,   840,  -815,   835,   836,   837,  -815,  -815,   839,
    1933,  -815,  -815,  -815,  -815,   341,   341,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     323,     0,     0,   325,   324,   338,   340,   341,   333,     0,
      10,     0,     1,   355,   348,   325,   346,   349,   350,   351,
     352,   353,   354,   326,   553,   554,     0,   339,   335,     0,
     345,   344,   334,   359,   360,   361,     0,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,     0,   356,
     357,   355,   347,   555,   558,   333,     0,   336,   329,   584,
     583,     0,     0,     0,     0,     0,   358,   563,   568,   561,
     562,   564,   565,   566,   567,   569,     0,   559,     0,   343,
     342,     0,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   409,    15,   408,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   540,   512,   487,   375,   575,    11,     0,   570,   573,
     560,   323,   331,    38,    37,    44,    40,    39,    41,     0,
       0,     0,   541,     0,   510,   513,     0,     0,   488,     0,
     373,   376,     0,   578,    75,   572,   574,   325,   332,   330,
     325,   542,   325,   331,   380,   514,     0,   489,   325,   331,
     377,   378,     0,   578,   571,   556,     3,     4,     5,     6,
       0,     0,     9,     0,     7,     0,    79,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       2,     0,     0,    97,    52,    51,    55,    56,    57,     0,
      76,    58,    59,    99,   100,    60,    84,    54,    61,    63,
      64,   101,   113,    62,   105,   114,   111,   112,   127,   104,
     131,   134,   137,   144,   147,   149,   151,   153,   155,   157,
     171,   172,    77,    98,     0,   325,   421,     0,   405,   406,
     412,   416,   414,   417,     0,     0,   546,   547,   539,     0,
     325,   331,   355,   503,   495,   496,   497,     0,   498,   499,
     500,   501,   502,     0,   325,   493,   486,     0,   325,   331,
     557,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,   121,   121,   121,   131,     0,    98,   108,   109,   110,
      95,   102,   103,   106,   107,     0,     0,     0,     0,    71,
     576,     0,    82,    83,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
     337,   423,     0,   422,     0,     0,   325,   325,     0,     0,
     549,   543,   325,   381,   526,     0,   325,   518,   520,   521,
     523,   522,   511,     0,     0,   411,   410,   401,   490,   494,
     379,   355,   396,     0,   325,   385,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   374,     0,    80,     0,    71,
       0,   506,    87,     0,     0,     0,     0,   126,   125,     0,
     122,   123,     0,     0,     0,    65,   121,    67,    68,     0,
      66,     0,     0,    72,    46,     0,    48,    78,    94,   159,
     128,   129,   130,   127,   132,   133,   135,   136,   143,   142,
     139,   138,   140,   141,   145,   146,   148,   150,   152,   154,
       0,   156,     0,     0,     0,     0,   552,   551,   407,   413,
       0,   415,     0,     0,   209,   419,   211,   210,   420,     0,
     544,   548,   527,     0,   515,   519,   333,     0,     0,     0,
       0,     0,     0,   581,     0,   447,   448,     0,   194,     0,
     382,   386,    81,    92,     0,     0,   508,     0,   507,    96,
      91,    90,    93,     0,   124,     0,     0,     0,   115,     0,
      73,    50,    45,    49,     0,    69,     0,    74,    70,   424,
     418,     0,   173,   550,     0,     0,     0,   325,     0,     0,
       0,     0,     0,   207,     0,     0,     0,   205,   581,     0,
       0,     0,   483,   482,   446,   193,   333,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
     296,     0,     0,     0,     0,     0,   198,     0,    16,    17,
       0,     0,     0,     0,     0,     0,     0,     0,   196,   177,
     178,     0,   195,   179,   175,   176,     0,     0,   180,   181,
     238,   239,   182,   189,   253,   254,   255,   256,   183,   279,
     280,   281,   282,   283,   184,   185,   186,   187,   188,   190,
      98,     0,    85,    42,   504,     0,   120,   118,   119,   116,
       0,    47,   158,     0,     0,     0,   581,     0,     0,     0,
       0,   214,     0,   579,     0,     0,   325,     0,   458,   457,
     469,   470,   451,   452,   459,   460,   461,   462,   463,   453,
     454,   464,   465,   466,   467,   468,   472,   471,   455,   456,
       0,   325,   400,     0,   399,   325,     0,   445,   325,   325,
       0,   285,   284,   311,     0,   287,   286,     0,     0,   586,
     585,   266,     0,     0,     0,     0,     0,     0,   297,     0,
       0,     0,     0,   312,   257,     0,   260,     0,   207,   204,
     224,   217,   227,   220,   228,   221,   225,   218,   229,   222,
     230,   223,   226,   219,   192,   197,   202,   200,   203,   201,
       0,    88,    42,   505,   509,   117,     0,     0,   325,   325,
       0,   325,   475,     0,   398,     0,   397,   436,     0,     0,
       0,     0,   208,     0,     0,   416,   417,   206,     0,   325,
       0,     0,     0,   325,   325,   199,   213,     0,     0,    56,
      99,   100,    84,   111,   112,   233,   272,   276,     0,   267,
     273,     0,   291,   288,     0,   293,   290,   174,     0,     0,
     295,   294,     0,   299,   298,     0,     0,   300,   303,   301,
     316,   315,     0,     0,     0,     0,     0,    86,    89,    43,
     212,     0,   537,   536,     0,     0,   325,     0,   477,   216,
     215,   325,     0,     0,   403,     0,   325,   443,   402,     0,
     444,   582,   582,   582,     0,   426,   429,     0,   427,   431,
       0,     0,     0,   318,   590,   589,   268,     0,     0,   292,
     289,   588,   587,     0,     0,     0,     0,   307,   310,   304,
     302,     0,     0,     0,     0,     0,   538,     0,     0,     0,
       0,   581,     0,     0,   478,     0,     0,   325,   325,     0,
       0,     0,   582,     0,     0,   442,     0,     0,     0,     0,
     274,     0,   269,   277,   592,   591,     0,   240,   313,   244,
     242,   308,   308,   314,     0,   259,   258,   481,   525,   524,
       0,     0,   582,     0,     0,     0,   485,   484,   476,   580,
     580,   580,     0,   438,     0,   439,   474,   473,     0,   449,
     425,   435,   434,   581,   581,     0,   320,   319,   317,   270,
       0,     0,     0,     0,     0,   245,   246,     0,   249,   309,
       0,     0,   261,   325,   325,   528,   325,    71,    71,     0,
       0,   437,     0,   432,   433,   264,   263,     0,   271,   275,
       0,   241,     0,   252,   243,   247,   248,   250,     0,     0,
     262,     0,     0,   529,     0,     0,     0,   579,   579,     0,
       0,   278,   251,   306,   305,     0,     0,   582,   479,   480,
     440,   441,   450,   265,   534,   535,   530,   531
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -815,  -815,  -815,  -815,   -75,    30,   771,  -815,    21,  -815,
     811,  -815,   -29,  -815,   772,   231,   -99,   541,  -815,   450,
    -815,  -815,  -815,  -815,  -416,  -336,  -815,  -815,  -241,  -815,
    -815,    47,    77,  -815,    81,  -815,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,   547,   289,   322,   491,  -815,  -239,
    -815,   559,  -156,   315,   195,   310,   625,   629,   636,   638,
     619,  -815,  -815,   512,  -815,   441,  -655,  -660,  -561,  -475,
    -249,  -815,  -815,    31,  -815,  -815,  -815,  -567,  -436,   311,
    -342,  -815,  -815,   299,   242,  -815,   145,  -815,  -815,  -815,
    -815,  -815,  -815,    50,  -815,    49,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,  -815,    52,
    -815,  -815,  -815,  -815,  -815,  -815,   428,  -815,  -815,  -815,
     202,    98,   204,  -815,  -815,  -815,  -815,  -815,  -815,  -815,
     115,  -815,   864,     1,  -815,  -815,  -815,  -117,    -1,   520,
    -815,  -815,   990,  -815,  -815,   848,    -2,  -140,  -221,  -815,
     952,  -815,  -815,  -815,  -815,  -113,  -815,  -815,  -815,   631,
    -231,  -205,  -190,  -815,  -497,  -815,  -815,  -599,   653,  -341,
    -333,   659,  -815,  -330,  -157,   268,  -815,  -815,   265,   269,
     146,  -142,  -815,   153,   156,  -137,  -815,  -815,  -132,  -815,
    -815,  -815,  -815,  -100,  -815,  -815,  -815,  -815,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,   750,  -271,  -815,  -815,
    -815,  -815,  -815,  -815,  -815,  -815,  -815,   663,  -815,  -815,
    -815,  -815,  -815,  -815,    79,  -815,  -814,  -815,  -815,  -815,
    -815,  -815,  -815,   678,  -815,  -815,  -815,   992,  -815,  -815,
    -815,  -815,   876,  -815,  -815,  -815,  -815,   857,  -323,  -254,
    -516,  -791,  -815,   -32,  -757,   150,  -815
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   189,   190,     9,    98,   557,   100,   101,   191,   103,
     104,   105,   192,   107,   108,   711,   398,   501,   413,   414,
     193,   194,   195,   196,   197,   415,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   787,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   399,
     400,   401,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   316,   416,   513,   768,   568,   569,
     570,   478,   571,   572,   573,   574,   575,   576,   526,   527,
     455,   456,   577,   620,   621,   578,   757,   579,   580,   581,
     880,   924,   925,   926,   927,   928,   582,   583,   584,   783,
     960,   585,   586,   758,   871,   947,   759,   872,   948,   760,
     587,   588,   589,   590,   591,   592,   679,   593,   594,   777,
     778,   930,   779,   595,   596,   597,   598,   782,   599,   822,
     823,     2,     3,   236,   234,    14,    81,   149,   233,    11,
     122,     4,     5,     6,     7,    15,    16,    17,    48,    49,
      50,    18,   162,   140,   141,   155,   269,   373,   374,   375,
     254,   255,   256,   257,   237,   110,   367,   238,   239,   240,
     241,   242,   344,   243,   258,   742,   815,   818,   743,   744,
     913,   259,   856,   857,   858,   260,   473,   530,   261,   474,
     475,   650,   476,   262,   798,   853,   854,   384,   534,   898,
      19,   137,   138,   159,   263,   264,   265,   457,   487,   488,
      20,   156,   134,   135,   251,   355,   356,   357,   358,   463,
     359,   963,   360,   987,   850,   361,   793,    21,   131,   132,
     153,   245,   246,   247,    22,    23,    24,    25,    76,    77,
      78,   117,   118,   145,   119,   146,    26,   165,   728,   939,
     531,   863,    65,   671,   833,   826,   876
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   115,   126,   443,    13,   449,   392,   458,   366,   127,
     128,   705,   656,    52,   450,   835,    51,   452,   253,   764,
     618,   864,   865,   157,   284,   125,   161,   785,    56,   125,
     386,   363,   106,   888,   889,    58,   248,   376,   523,   874,
     616,    32,   266,   402,   403,   324,     1,   125,   -11,   486,
     509,   364,   734,   484,   894,    55,   409,   365,   154,   740,
     109,   154,   560,   377,   154,   336,   667,   115,   799,   510,
     775,   910,   125,    12,    55,   116,   933,   934,   378,   875,
     325,   613,   102,   622,   615,   337,   524,   776,   690,   619,
     523,    99,   688,   717,   124,   821,   831,   442,   828,   745,
     720,   935,    90,   669,   756,   525,  -577,   617,   657,   859,
     160,   379,   489,   860,   895,    28,   861,   969,   781,    93,
     124,   689,   797,   842,   253,   560,   380,    29,   372,   731,
     295,   381,   116,   397,   362,   116,   382,   397,   116,   326,
     327,   116,   338,   376,   106,   124,   339,   124,    51,   485,
     479,   283,   385,   244,   370,   -11,   560,   124,   738,   252,
     866,   984,   985,   950,   424,   425,   870,   499,   383,   377,
     328,   329,   109,   125,   353,   652,   124,   296,   127,   286,
     397,   123,    30,   724,   378,   -56,   986,   406,  -231,   -56,
     970,   123,   154,   691,   102,   -56,   124,   124,   832,   124,
     124,   282,   124,   275,   670,   124,    79,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   124,   379,   -56,   -56,
     124,   794,   795,   124,   124,   533,   -56,   -56,   -56,   686,
     490,  -234,   380,    52,   372,  -235,    51,   381,   123,   446,
    -322,   142,   382,   143,   560,   661,  -232,   665,   116,   106,
     106,   354,    55,   673,   517,   749,   702,   302,   303,   304,
      28,   125,   706,   714,   674,   252,   116,   952,  -236,   371,
     391,   653,   675,   708,   383,  -237,   762,   109,   109,   725,
     654,   765,   770,  -577,  -231,   732,  -327,    31,   726,   663,
    -231,   773,   389,  -231,   824,   106,   106,   829,   945,   102,
     102,   124,   682,   683,   684,     8,   271,   297,   393,   395,
     653,    80,  -333,   106,  -333,   106,   272,   298,   735,   727,
      28,   736,   338,   109,   109,   735,   339,  -234,   736,    32,
     687,  -235,   627,  -234,   106,   893,  -234,  -235,  -577,    54,
    -235,   109,  -232,   109,   447,   102,   102,   163,  -232,    55,
     662,  -232,   666,   244,   428,   429,   338,   354,   877,   878,
     339,   703,   109,   102,  -236,   102,   883,   707,   885,   886,
    -236,  -237,   444,  -236,   445,   371,  -577,  -237,   709,  -545,
    -237,   763,    83,   111,   102,    84,   766,   771,   735,    59,
      57,   736,   922,   472,   918,   705,   774,   943,   944,   825,
     923,   120,   830,   946,   729,   730,   301,    60,   482,   932,
      88,   749,    61,   124,   124,    89,    62,   560,   560,  -577,
     364,   491,  -491,   112,   106,   560,   532,   560,   560,   124,
      91,    63,    92,  -577,   106,   341,  -328,   342,   106,   106,
     788,   791,   343,   113,    94,    95,   951,   792,    96,   559,
     106,    28,   109,   560,   868,   364,   698,    64,   908,   121,
     869,   896,   109,   364,   909,   449,   109,   109,   560,   911,
     522,   528,   114,   735,   102,   971,   736,   600,   109,  -577,
     123,  -577,  -516,   511,   102,   106,  -404,  -577,   102,   102,
    -492,   106,   106,   516,   301,   983,   500,   518,   519,   558,
     102,   128,   124,   749,   712,   560,   317,   318,   319,   472,
     106,   560,   672,   109,   676,   320,   321,   680,   623,   109,
     109,   430,   431,   432,   433,   561,   837,   838,  -577,  -577,
    -577,  -383,   460,  -517,   560,   102,  -577,   125,   109,  -384,
     560,   102,   102,   559,   614,  -577,  -577,   129,  -428,  -430,
     624,   625,   322,   323,   560,   562,   404,   318,   319,   563,
     102,   699,  -577,   130,  -577,  -532,    67,  -533,   301,   664,
     507,   600,   301,   148,   603,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,   144,   232,  -111,  -111,   561,   364,
     364,   273,   280,   558,   133,   806,   887,   807,    68,   660,
      28,   965,   966,   806,   897,   810,   806,   364,   851,   836,
     330,   331,   136,   712,   912,   912,   811,   812,   562,   561,
     139,   285,   563,    69,    70,    71,    72,    73,    74,    75,
     150,   559,   890,   891,   273,   899,   900,   426,   427,   106,
     434,   435,   559,   106,   980,   981,   940,   941,   152,   562,
     158,   249,   250,   563,   267,   268,   559,   295,   278,   600,
     741,   700,   279,   280,   299,   301,   296,   109,   300,   346,
     600,   109,   287,   288,   289,   290,   291,   292,   293,   294,
     332,   558,   333,   335,   600,   334,   340,   345,   347,   102,
     967,   968,   558,   102,   348,   349,   350,   351,   748,   352,
     106,   106,   761,   387,   106,   368,   558,   561,   390,   973,
     974,   405,   232,   407,   388,   408,   410,   418,   750,   459,
     462,   396,   464,   480,   506,   520,   483,   492,   109,   109,
     493,   495,   109,   496,   504,   505,   508,   562,   232,   521,
     741,   563,   417,   535,   814,   817,   692,   602,   751,   604,
     102,   102,   752,   605,   102,   610,   626,   419,   659,   802,
     803,   881,   651,   805,   655,   658,   701,   564,   668,   364,
     677,   710,   685,   704,   688,   721,   718,   440,   719,   232,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,   454,
     454,  -112,  -112,   722,   653,   723,   733,   849,   739,   747,
     565,   627,   855,   786,   391,   790,   619,   882,   420,   421,
     422,   423,   423,   423,   423,   796,   725,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   801,   423,   804,
     564,   232,   454,   808,   813,   116,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   820,   827,   314,   315,   834,
     841,   693,   502,   502,   843,   844,   845,   846,   902,   904,
     847,   564,   848,   565,   862,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   750,   852,   -99,   -99,   812,   106,
     561,   561,   811,   879,   -99,   -99,   -99,   884,   561,   867,
     561,   561,   892,   901,   565,   420,   906,   907,   559,   915,
     512,   821,   921,   929,   751,   936,   937,   109,   752,   938,
     562,   562,   900,   899,   563,   563,   561,   953,   562,   972,
     562,   562,   563,   954,   563,   563,   600,   559,   958,   102,
     959,   561,   975,   976,   961,   962,   977,   849,   942,   978,
     979,   151,   982,   789,   276,   277,   562,   612,   558,   564,
     563,   696,   498,   503,   611,   600,   441,   436,   956,   494,
     753,   562,   437,   746,   737,   563,   750,   800,   561,   566,
     438,   949,   873,   439,   561,   955,   957,   558,   681,   839,
     931,   840,   565,   917,   606,   147,   607,   608,   609,   678,
     567,   678,   529,   754,    27,   235,   751,   561,   562,   448,
     752,    66,   563,   561,   562,   481,   451,   809,   563,   819,
     914,   905,   816,   903,   369,   964,    53,   561,   164,   465,
     270,   919,     0,     0,     0,     0,     0,   562,     0,     0,
     461,   563,   566,   562,     0,     0,     0,   563,     0,     0,
       0,     0,     0,     0,     0,     0,   454,   562,   -84,     0,
       0,   563,   -84,   567,   716,   694,   697,     0,   -84,     0,
       0,     0,     0,   566,     0,     0,     0,     0,   454,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,   -84,   -84,     0,   567,     0,     0,     0,     0,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   715,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   512,   753,   767,   769,     0,
       0,   772,   564,   564,     0,     0,   780,     0,   767,     0,
     564,     0,   564,   564,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   754,
       0,   566,     0,     0,     0,   565,   565,     0,   564,     0,
     695,     0,   566,   565,   512,   565,   565,     0,     0,     0,
       0,     0,   567,   564,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,   755,     0,  -100,  -100,     0,     0,     0,
       0,   565,     0,  -100,  -100,  -100,     0,     0,     0,     0,
       0,     0,     0,   628,     0,     0,   565,     0,   753,     0,
     564,     0,     0,     0,     0,     0,   564,     0,     0,     0,
       0,     0,     0,     0,   767,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   564,
       0,   754,     0,   565,   629,   564,     0,     0,     0,   565,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   564,
       0,   767,     0,     0,     0,     0,     0,   767,     0,     0,
       0,     0,   565,     0,     0,   630,   631,     0,   565,     0,
     632,   633,   634,   635,   636,   637,   638,   639,   640,     0,
     641,     0,   565,     0,     0,     0,     0,     0,     0,     0,
     642,   643,     0,     0,   644,   645,   646,   647,   916,     0,
     648,   649,     0,  -321,     0,     0,     0,   920,   566,     0,
       0,     0,    33,     0,   566,   566,     0,     0,     0,     0,
       0,     0,   566,     0,   566,   566,     0,     0,     0,   755,
       0,     0,     0,     0,    34,   567,   567,     0,     0,     0,
       0,     0,     0,   567,     0,   567,   567,    35,     0,     0,
     566,    36,    37,   512,     0,     0,     0,    38,     0,    39,
      40,    41,    42,     0,     0,   566,    43,     0,     0,     0,
      44,   567,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,    46,   567,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     566,     0,   566,     0,     0,     0,     0,     0,   566,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   755,     0,   567,     0,     0,     0,     0,     0,   567,
       0,   566,     0,     0,     0,     0,     0,   566,     0,     0,
       0,     0,     0,   477,     0,     0,  -191,  -191,  -191,  -191,
    -191,   566,   567,  -191,  -191,  -191,  -191,     0,   567,  -191,
    -191,     0,  -191,  -191,  -191,     0,     0,  -191,  -191,     0,
       0,     0,   567,     0,  -191,     0,  -191,  -191,  -191,  -191,
    -191,  -191,     0,     0,  -191,     0,     0,     0,  -191,  -191,
       0,  -191,  -191,  -191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -191,  -191,     0,  -191,  -191,     0,     0,
    -191,     0,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,     0,  -191,     0,  -191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -191,  -191,  -191,     0,     0,     0,  -191,     0,
       0,  -191,  -191,  -191,     0,     0,  -191,     0,  -191,  -191,
       0,     0,   784,     0,     0,    55,   166,   167,   168,   169,
       0,     0,   170,    82,     0,    83,     0,     0,    84,   171,
       0,  -191,  -191,    85,     0,     0,     0,    86,     0,     0,
       0,     0,     0,   172,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    55,
     173,   174,    90,     0,     0,     0,     0,    82,     0,    83,
       0,     0,    84,    91,     0,    92,   175,    85,     0,    93,
       0,    86,   176,     0,   177,     0,   178,    94,    95,   179,
      87,    96,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,   180,     0,     0,     0,    91,     0,    92,
     181,   182,   183,    93,     0,   184,     0,   185,   186,     0,
       0,    94,    95,     0,     0,    96,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   536,   166,   167,   168,   169,
     187,   188,   170,    82,   537,    83,   922,     0,    84,   538,
       0,   539,   540,    85,   923,     0,   541,    86,     0,     0,
       0,     0,     0,   172,     0,   542,    87,   543,   544,   545,
     546,     0,     0,    88,     0,     0,     0,   547,    89,     0,
     173,   174,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   548,    91,     0,    92,   175,     0,     0,    93,
       0,   549,   176,   550,   177,   551,   178,    94,    95,   552,
     553,    96,   554,     0,   274,     0,   555,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,     0,   180,     0,     0,     0,   556,     0,     0,
     181,   182,   183,     0,     0,   184,     0,   185,   186,     0,
       0,   536,   166,   167,   168,   169,     0,     0,   170,    82,
     537,    83,     0,     0,    84,   538,     0,   539,   540,    85,
     187,   188,   541,    86,     0,     0,     0,     0,     0,   172,
       0,   542,    87,   543,   544,   545,   546,     0,     0,    88,
       0,     0,     0,   547,    89,     0,   173,   174,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   548,    91,
       0,    92,   175,     0,     0,    93,     0,   549,   176,   550,
     177,   551,   178,    94,    95,   552,   553,    96,   554,     0,
     274,     0,   555,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   364,     0,   180,
       0,     0,     0,   556,     0,     0,   181,   182,   183,     0,
       0,   184,     0,   185,   186,     0,     0,    55,   166,   167,
     168,   169,     0,     0,   170,    82,   537,    83,     0,     0,
      84,   538,     0,     0,   540,    85,   187,   188,   541,    86,
       0,     0,     0,     0,     0,   172,     0,   542,    87,   543,
     544,   545,   546,     0,     0,    88,     0,     0,     0,   547,
      89,     0,   173,   174,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   548,    91,     0,    92,   175,     0,
       0,    93,     0,   549,   176,   550,   177,   551,   178,    94,
      95,   552,   553,    96,   554,     0,     0,     0,   555,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   364,     0,   180,     0,     0,     0,   556,
       0,     0,   181,   182,   183,     0,     0,   184,     0,   185,
     186,     0,    55,   166,   167,   168,   169,     0,     0,   170,
      82,     0,    83,     0,     0,    84,   171,     0,     0,     0,
      85,     0,   187,   188,    86,     0,     0,     0,     0,     0,
     172,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   173,   174,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   175,   453,     0,    93,     0,     0,   176,
       0,   177,     0,   178,    94,    95,   179,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   391,   713,
     180,     0,     0,     0,     0,     0,     0,   181,   182,   183,
       0,     0,   184,     0,   185,   186,     0,    55,   166,   167,
     168,   169,     0,     0,   170,    82,     0,    83,     0,     0,
      84,   171,     0,     0,     0,    85,     0,   187,   188,    86,
       0,     0,     0,     0,     0,   172,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   173,   174,    90,     0,   411,     0,     0,     0,
       0,     0,     0,   412,     0,    91,     0,    92,   175,     0,
       0,    93,     0,     0,   176,     0,   177,     0,   178,    94,
      95,   179,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,   166,   167,   168,   169,     0,     0,
     170,    82,     0,    83,     0,   180,    84,   171,     0,     0,
       0,    85,   181,   182,   183,    86,     0,   184,     0,   185,
     186,   172,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,     0,   173,   174,
      90,     0,   187,   188,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,   175,   453,     0,    93,     0,     0,
     176,     0,   177,     0,   178,    94,    95,   179,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   391,
       0,   180,     0,     0,     0,     0,     0,     0,   181,   182,
     183,     0,     0,   184,     0,   185,   186,     0,    55,   166,
     167,   168,   169,     0,     0,   170,    82,     0,    83,     0,
       0,    84,   171,     0,     0,     0,    85,     0,   187,   188,
      86,     0,     0,     0,     0,     0,   172,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   173,   174,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   175,
       0,     0,    93,     0,     0,   176,     0,   177,     0,   178,
      94,    95,   179,     0,    96,     0,     0,   281,     0,     0,
       0,     0,     0,     0,    55,   166,   167,   168,   169,     0,
       0,   170,    82,     0,    83,     0,   180,    84,   171,     0,
       0,     0,    85,   181,   182,   183,    86,     0,   184,     0,
     185,   186,   172,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,     0,   173,
     174,    90,     0,   187,   188,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    92,   175,     0,     0,    93,     0,
       0,   176,     0,   177,     0,   178,    94,    95,   179,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   180,   497,     0,     0,     0,     0,     0,   181,
     182,   183,     0,     0,   184,     0,   185,   186,     0,    55,
     166,   167,   168,   169,     0,     0,   170,    82,     0,    83,
       0,     0,    84,   171,     0,     0,     0,    85,     0,   187,
     188,    86,     0,     0,     0,     0,     0,   172,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   173,   174,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
     175,     0,     0,    93,     0,     0,   176,     0,   177,     0,
     178,    94,    95,   179,     0,    96,     0,     0,   274,     0,
       0,     0,     0,     0,     0,    55,   166,   167,   168,   169,
       0,     0,   170,    82,     0,    83,     0,   180,    84,   171,
       0,     0,     0,    85,   181,   182,   183,    86,     0,   184,
       0,   185,   186,   172,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    55,
     173,   174,    90,     0,   187,   188,     0,    82,     0,    83,
       0,     0,    84,    91,     0,    92,   175,    85,     0,    93,
       0,    86,   176,     0,   177,     0,   178,    94,    95,   179,
      87,    96,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,   180,     0,     0,     0,    91,     0,    92,
     181,   182,   183,    93,     0,   184,     0,   185,   186,     0,
       0,    94,    95,     0,     0,    96,    59,     0,   274,   466,
       0,     0,     0,     0,     0,     0,     0,    82,     0,    83,
     187,   188,    84,     0,    60,   467,     0,    85,     0,    61,
       0,    86,     0,    62,   468,   469,     0,     0,     0,     0,
      87,     0,     0,     0,     0,   470,     0,    88,    63,     0,
       0,     0,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
       0,     0,     0,    93,    64,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,     0,   471,    55,
     166,   167,   168,   169,     0,     0,   170,    82,     0,    83,
       0,     0,    84,   171,     0,     0,     0,    85,     0,     0,
       0,    86,     0,     0,     0,     0,     0,   172,     0,     0,
      87,     0,   601,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   173,   174,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
     175,     0,     0,    93,     0,     0,   176,     0,   177,     0,
     178,    94,    95,   179,     0,    96,     0,     0,     0,     0,
      59,     0,     0,   466,     0,     0,     0,     0,     0,     0,
       0,    82,     0,    83,     0,     0,    84,   180,    60,   467,
       0,    85,     0,    61,     0,    86,     0,    62,   468,   469,
       0,   185,   186,     0,    87,     0,     0,     0,     0,   470,
       0,    88,    63,     0,     0,     0,    89,    55,     0,     0,
      90,     0,     0,     0,     0,    82,     0,    83,     0,     0,
      84,    91,     0,    92,     0,    85,     0,    93,    64,    86,
       0,     0,   514,     0,     0,    94,    95,     0,    87,    96,
       0,     0,   471,     0,     0,    88,     0,     0,     0,     0,
      89,    55,     0,     0,    90,     0,     0,     0,     0,    82,
       0,    83,     0,     0,    84,    91,     0,    92,     0,    85,
       0,    93,     0,    86,     0,     0,     0,     0,     0,    94,
      95,     0,    87,    96,     0,     0,   515,     0,     0,    88,
       0,     0,     0,     0,    89,     0,    33,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,     0,     0,     0,    93,     0,     0,    34,     0,
       0,     0,     0,    94,    95,    33,     0,    96,     0,     0,
     394,    35,     0,     0,     0,    36,    37,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    34,     0,     0,
      43,     0,     0,     0,    44,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,    37,    45,     0,     0,    46,
      38,    47,    39,    40,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,     0,
      47
};

static const yytype_int16 yycheck[] =
{
       1,    76,   101,   339,     3,   346,   277,   349,   257,   108,
     109,   572,   528,    15,   347,   772,    15,   347,   158,   674,
     517,   812,   813,   136,   180,     3,   139,   687,    29,     3,
     271,   252,    61,   847,   848,    36,   153,   268,     4,     1,
       4,     4,   159,   282,   283,    10,    81,     3,     4,   391,
       4,   100,   651,   389,    11,     4,   297,   106,   133,   658,
      61,   136,   478,   268,   139,   118,   541,   142,   723,     4,
      16,   862,     3,     0,     4,    76,   890,   891,   268,    41,
      45,    98,    61,   519,     4,   138,    52,    33,     1,     4,
       4,    61,     4,     4,   111,     4,     1,   338,     4,   660,
     616,   892,    51,     1,   671,    71,    98,    71,    71,     4,
     139,   268,   103,     4,    71,   108,     4,     4,   685,    68,
     111,   557,   721,   783,   264,   541,   268,   120,   268,   626,
     108,   268,   133,   111,   251,   136,   268,   111,   139,   104,
     105,   142,    98,   374,   173,   111,   102,   111,   147,   390,
     371,   180,   269,   152,   267,   111,   572,   111,   655,   158,
     820,   975,   976,   920,   320,   321,   826,   406,   268,   374,
     135,   136,   173,     3,   249,     1,   111,   108,   277,   180,
     111,   111,     1,     1,   374,    98,   977,   286,     1,   102,
     947,   111,   267,   106,   173,   108,   111,   111,   103,   111,
     111,   180,   111,   173,   102,   111,     1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   111,   374,   131,   132,
     111,   718,   719,   111,   111,   474,   139,   140,   141,     1,
     103,     1,   374,   235,   374,     1,   235,   374,   111,     1,
       0,    97,   374,    99,   660,     1,     1,     1,   249,   278,
     279,   250,     4,     4,   102,   671,     1,   139,   140,   141,
     108,     3,     1,   605,    15,   264,   267,   922,     1,   268,
     100,    97,    23,     1,   374,     1,     1,   278,   279,    97,
     106,     1,     1,    98,    97,   627,   101,   106,   106,   538,
     103,     1,   102,   106,     1,   324,   325,     1,     1,   278,
     279,   111,   551,   552,   553,     4,    98,    98,   278,   279,
      97,   106,   100,   342,   102,   344,   108,   108,   651,   106,
     108,   651,    98,   324,   325,   658,   102,    97,   658,     4,
     102,    97,   120,   103,   363,   851,   106,   103,    98,    98,
     106,   342,    97,   344,   106,   324,   325,    99,   103,     4,
     106,   106,   106,   352,   324,   325,    98,   356,   833,   834,
     102,   106,   363,   342,    97,   344,   841,   106,   843,   844,
     103,    97,   342,   106,   344,   374,    98,   103,   106,   101,
     106,   106,    14,     4,   363,    17,   106,   106,   721,     1,
     108,   721,    15,   363,   869,   956,   106,   913,   914,   106,
      23,   107,   106,   106,   102,   102,    97,    19,    99,   884,
      42,   827,    24,   111,   111,    47,    28,   833,   834,    98,
     100,   103,   101,     4,   453,   841,   106,   843,   844,   111,
      62,    43,    64,    98,   463,    53,   101,    55,   467,   468,
     711,   100,    60,     4,    76,    77,   921,   106,    80,   478,
     479,   108,   453,   869,    97,   100,     1,    69,    97,   100,
     103,   106,   463,   100,   103,   806,   467,   468,   884,   106,
     471,   472,     4,   806,   453,   950,   806,   478,   479,    98,
     111,    98,   101,   453,   463,   514,   103,    98,   467,   468,
     101,   520,   521,   463,    97,   970,    99,   467,   468,   478,
     479,   600,   111,   919,   603,   921,   111,   112,   113,   479,
     539,   927,   544,   514,   546,   109,   110,   549,   519,   520,
     521,   326,   327,   328,   329,   478,   775,   776,    98,    98,
      98,   101,   101,   101,   950,   514,    98,     3,   539,   101,
     956,   520,   521,   572,   514,    98,    98,     4,   101,   101,
     520,   521,   129,   130,   970,   478,   111,   112,   113,   478,
     539,   106,    98,   107,    98,   101,    29,   101,    97,   539,
      99,   572,    97,   106,    99,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   102,   144,   131,   132,   541,   100,
     100,   102,   102,   572,   107,    97,   845,    99,    61,   107,
     108,   937,   938,    97,   853,    99,    97,   100,    99,   102,
     133,   134,   107,   712,   863,   864,    93,    94,   541,   572,
     107,   180,   541,    86,    87,    88,    89,    90,    91,    92,
     102,   660,    93,    94,   102,    95,    96,   322,   323,   668,
     330,   331,   671,   672,   967,   968,   900,   901,   100,   572,
     100,    97,   100,   572,    97,   100,   685,   108,   102,   660,
     659,     1,   102,   102,   102,    97,   108,   668,   103,    97,
     671,   672,   181,   182,   183,   184,   185,   186,   187,   188,
     114,   660,   119,   137,   685,   115,   101,   103,    97,   668,
     939,   940,   671,   672,   120,   120,     4,   101,   668,    97,
     729,   730,   672,     4,   733,   101,   685,   660,    98,   958,
     959,   103,   271,     4,   273,     4,     4,     4,   671,   120,
      49,   280,   101,   101,   107,    52,   103,   103,   729,   730,
     103,   103,   733,   103,    97,   103,   103,   660,   297,    52,
     739,   660,   301,   101,   743,   744,     1,   103,   671,   101,
     729,   730,   671,    97,   733,   103,   102,   316,   100,   729,
     730,   836,    98,   733,   102,    98,   106,   478,   102,   100,
     102,     4,   102,   101,     4,    98,   102,   336,   102,   338,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   348,
     349,   131,   132,   103,    97,   120,   102,   796,   100,    85,
     478,   120,   801,   102,   100,    99,     4,   836,   317,   318,
     319,   320,   321,   322,   323,   100,    97,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   100,   337,   103,
     541,   390,   391,   103,   101,   836,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   102,    97,   131,   132,   103,
     103,   106,   411,   412,   103,   103,   103,   101,   857,   858,
     103,   572,   103,   541,   101,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   827,   107,   131,   132,    94,   908,
     833,   834,    93,   100,   139,   140,   141,     1,   841,   120,
     843,   844,   101,   101,   572,   404,   103,   103,   927,   103,
     459,     4,    27,     4,   827,   100,   102,   908,   827,   102,
     833,   834,    96,    95,   833,   834,   869,   107,   841,   107,
     843,   844,   841,   101,   843,   844,   927,   956,   103,   908,
     103,   884,    94,    93,   933,   934,   101,   936,   908,   103,
     103,   130,   103,   712,   173,   173,   869,   506,   927,   660,
     869,     1,   405,   412,   504,   956,   337,   332,   927,   400,
     671,   884,   333,   664,   653,   884,   919,   725,   921,   478,
     334,   919,   827,   335,   927,   925,   927,   956,   550,   777,
     882,   777,   660,   868,   493,   121,   495,   496,   497,   548,
     478,   550,   472,   671,     4,   147,   919,   950,   921,   346,
     919,    49,   921,   956,   927,   374,   347,   739,   927,   744,
     864,   858,   743,   857,   264,   936,    24,   970,   142,   356,
     163,   871,    -1,    -1,    -1,    -1,    -1,   950,    -1,    -1,
     352,   950,   541,   956,    -1,    -1,    -1,   956,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   605,   970,    98,    -1,
      -1,   970,   102,   541,   613,     1,   106,    -1,   108,    -1,
      -1,    -1,    -1,   572,    -1,    -1,    -1,    -1,   627,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,   131,   132,    -1,   572,    -1,    -1,    -1,    -1,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   610,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   674,   827,   676,   677,    -1,
      -1,   680,   833,   834,    -1,    -1,   685,    -1,   687,    -1,
     841,    -1,   843,   844,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   827,
      -1,   660,    -1,    -1,    -1,   833,   834,    -1,   869,    -1,
     106,    -1,   671,   841,   723,   843,   844,    -1,    -1,    -1,
      -1,    -1,   660,   884,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   671,    -1,   131,   132,    -1,    -1,    -1,
      -1,   869,    -1,   139,   140,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,   884,    -1,   919,    -1,
     921,    -1,    -1,    -1,    -1,    -1,   927,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   783,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   950,
      -1,   919,    -1,   921,    73,   956,    -1,    -1,    -1,   927,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   970,
      -1,   820,    -1,    -1,    -1,    -1,    -1,   826,    -1,    -1,
      -1,    -1,   950,    -1,    -1,   104,   105,    -1,   956,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,    -1,   970,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,    -1,   133,   134,   135,   136,   867,    -1,
     139,   140,    -1,     0,    -1,    -1,    -1,   876,   827,    -1,
      -1,    -1,     9,    -1,   833,   834,    -1,    -1,    -1,    -1,
      -1,    -1,   841,    -1,   843,   844,    -1,    -1,    -1,   827,
      -1,    -1,    -1,    -1,    31,   833,   834,    -1,    -1,    -1,
      -1,    -1,    -1,   841,    -1,   843,   844,    44,    -1,    -1,
     869,    48,    49,   922,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    -1,    -1,   884,    63,    -1,    -1,    -1,
      67,   869,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,   884,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     919,    -1,   921,    -1,    -1,    -1,    -1,    -1,   927,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   919,    -1,   921,    -1,    -1,    -1,    -1,    -1,   927,
      -1,   950,    -1,    -1,    -1,    -1,    -1,   956,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,     4,     5,     6,     7,
       8,   970,   950,    11,    12,    13,    14,    -1,   956,    17,
      18,    -1,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,   970,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,   106,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,   117,
      -1,    -1,     1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,   139,   140,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,     4,
      49,    50,    51,    -1,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    17,    62,    -1,    64,    65,    22,    -1,    68,
      -1,    26,    71,    -1,    73,    -1,    75,    76,    77,    78,
      35,    80,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    62,    -1,    64,
     109,   110,   111,    68,    -1,   114,    -1,   116,   117,    -1,
      -1,    76,    77,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
     139,   140,    11,    12,    13,    14,    15,    -1,    17,    18,
      -1,    20,    21,    22,    23,    -1,    25,    26,    -1,    -1,
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
      13,    14,    -1,    -1,    17,    18,    -1,    20,    21,    22,
     139,   140,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
      -1,    -1,    -1,   106,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    -1,    -1,
      17,    18,    -1,    -1,    21,    22,   139,   140,    25,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,
     117,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      22,    -1,   139,   140,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
      -1,    -1,   114,    -1,   116,   117,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    22,    -1,   139,   140,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    -1,    14,    -1,   102,    17,    18,    -1,    -1,
      -1,    22,   109,   110,   111,    26,    -1,   114,    -1,   116,
     117,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      51,    -1,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    64,    65,    66,    -1,    68,    -1,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,   139,
     140,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,   102,    17,    18,
      -1,    -1,    -1,    22,   109,   110,   111,    26,    -1,   114,
      -1,   116,   117,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,     4,
      49,    50,    51,    -1,   139,   140,    -1,    12,    -1,    14,
      -1,    -1,    17,    62,    -1,    64,    65,    22,    -1,    68,
      -1,    26,    71,    -1,    73,    -1,    75,    76,    77,    78,
      35,    80,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    62,    -1,    64,
     109,   110,   111,    68,    -1,   114,    -1,   116,   117,    -1,
      -1,    76,    77,    -1,    -1,    80,     1,    -1,    83,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,
     139,   140,    17,    -1,    19,    20,    -1,    22,    -1,    24,
      -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    80,    -1,    -1,    83,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,   117,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    17,   102,    19,    20,
      -1,    22,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,   116,   117,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    -1,    -1,    -1,    47,     4,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,
      17,    62,    -1,    64,    -1,    22,    -1,    68,    69,    26,
      -1,    -1,    29,    -1,    -1,    76,    77,    -1,    35,    80,
      -1,    -1,    83,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,     4,    -1,    -1,    51,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    62,    -1,    64,    -1,    22,
      -1,    68,    -1,    26,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,     9,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    76,    77,     9,    -1,    80,    -1,    -1,
      83,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    31,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    79,    -1,    -1,    82,
      54,    84,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   274,   275,   284,   285,   286,   287,     4,   146,
     281,   282,     0,   276,   278,   288,   289,   290,   294,   343,
     353,   370,   377,   378,   379,   380,   389,   285,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   291,   292,
     293,   276,   289,   380,    98,     4,   281,   108,   281,     1,
      19,    24,    28,    43,    69,   395,   293,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   381,   382,   383,     1,
     106,   279,    12,    14,    17,    22,    26,    35,    42,    47,
      51,    62,    64,    68,    76,    77,    80,    83,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   281,
     308,     4,     4,     4,     4,   147,   281,   384,   385,   387,
     107,   100,   283,   111,   111,     3,   159,   159,   159,     4,
     107,   371,   372,   107,   355,   356,   107,   344,   345,   107,
     296,   297,    97,    99,   102,   386,   388,   275,   106,   280,
     102,   153,   100,   373,   147,   298,   354,   298,   100,   346,
     155,   298,   295,    99,   385,   390,     5,     6,     7,     8,
      11,    18,    32,    49,    50,    65,    71,    73,    75,    78,
     102,   109,   110,   111,   114,   116,   117,   139,   140,   144,
     145,   151,   155,   163,   164,   165,   166,   167,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   208,   281,   277,   288,   276,   307,   310,   311,
     312,   313,   314,   316,   276,   374,   375,   376,   280,    97,
     100,   357,   276,   290,   303,   304,   305,   306,   317,   324,
     328,   331,   336,   347,   348,   349,   280,    97,   100,   299,
     390,    98,   108,   102,    83,   148,   149,   157,   102,   102,
     102,    83,   151,   155,   195,   208,   281,   190,   190,   190,
     190,   190,   190,   190,   190,   108,   108,    98,   108,   102,
     103,    97,   139,   140,   141,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   131,   132,   207,   111,   112,   113,
     109,   110,   129,   130,    10,    45,   104,   105,   135,   136,
     133,   134,   114,   119,   115,   137,   118,   138,    98,   102,
     101,    53,    55,    60,   315,   103,    97,    97,   120,   120,
       4,   101,    97,   147,   276,   358,   359,   360,   361,   363,
     365,   368,   280,   291,   100,   106,   213,   309,   101,   349,
     298,   276,   290,   300,   301,   302,   303,   304,   305,   317,
     324,   328,   331,   336,   340,   280,   171,     4,   208,   102,
      98,   100,   350,   148,    83,   148,   208,   111,   159,   192,
     193,   194,   192,   192,   111,   103,   159,     4,     4,   171,
       4,    53,    60,   161,   162,   168,   208,   208,     4,   208,
     190,   190,   190,   190,   195,   195,   196,   196,   148,   148,
     197,   197,   197,   197,   198,   198,   199,   200,   201,   202,
     208,   203,   171,   168,   148,   148,     1,   106,   311,   312,
     313,   314,   316,    66,   208,   223,   224,   350,   223,   120,
     101,   376,    49,   362,   101,   360,     4,    20,    29,    30,
      40,    83,   148,   329,   332,   333,   335,     1,   214,   291,
     101,   302,    99,   103,   168,   171,   223,   351,   352,   103,
     103,   103,   103,   103,   194,   103,   103,   103,   187,   192,
      99,   160,   208,   160,    97,   103,   107,    99,   103,     4,
       4,   148,   208,   209,    29,    83,   148,   102,   148,   148,
      52,    52,   281,     4,    52,    71,   221,   222,   281,   282,
     330,   393,   106,   213,   341,   101,     4,    13,    18,    20,
      21,    25,    34,    36,    37,    38,    39,    46,    61,    70,
      72,    74,    78,    79,    81,    85,   106,   148,   151,   155,
     167,   174,   175,   177,   188,   189,   190,   206,   211,   212,
     213,   215,   216,   217,   218,   219,   220,   225,   228,   230,
     231,   232,   239,   240,   241,   244,   245,   253,   254,   255,
     256,   257,   258,   260,   261,   266,   267,   268,   269,   271,
     281,   117,   103,    99,   101,    97,   190,   190,   190,   190,
     103,   162,   208,    98,   148,     4,     4,    71,   307,     4,
     226,   227,   221,   281,   148,   148,   102,   120,    32,    73,
     104,   105,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   119,   129,   130,   133,   134,   135,   136,   139,   140,
     334,    98,     1,    97,   106,   102,   393,    71,    98,   100,
     107,     1,   106,   213,   148,     1,   106,   212,   102,     1,
     102,   396,   396,     4,    15,    23,   396,   102,   208,   259,
     396,   259,   213,   213,   213,   102,     1,   102,     4,   221,
       1,   106,     1,   106,     1,   106,     1,   106,     1,   106,
       1,   106,     1,   106,   101,   211,     1,   106,     1,   106,
       4,   158,   159,   101,   223,   190,   208,     4,   102,   102,
     393,    98,   103,   120,     1,    97,   106,   106,   391,   102,
     102,   307,   223,   102,   310,   313,   316,   222,   307,   100,
     310,   276,   318,   321,   322,   211,   226,    85,   148,   167,
     174,   175,   177,   188,   189,   206,   220,   229,   246,   249,
     252,   148,     1,   106,   209,     1,   106,   208,   210,   208,
       1,   106,   208,     1,   106,    16,    33,   262,   263,   265,
     208,   220,   270,   242,     1,   210,   102,   179,   350,   158,
      99,   100,   106,   369,   307,   307,   100,   310,   337,   209,
     227,   100,   148,   148,   103,   148,    97,    99,   103,   318,
      99,    93,    94,   101,   276,   319,   322,   276,   320,   321,
     102,     4,   272,   273,     1,   106,   398,    97,     4,     1,
     106,     1,   103,   397,   103,   397,   102,   213,   213,   263,
     265,   103,   210,   103,   103,   103,   101,   103,   103,   276,
     367,    99,   107,   338,   339,   276,   325,   326,   327,     4,
       4,     4,   101,   394,   394,   394,   210,   120,    97,   103,
     210,   247,   250,   229,     1,    41,   399,   212,   212,   100,
     233,   147,   155,   212,     1,   212,   212,   213,   369,   369,
      93,    94,   101,   393,    11,    71,   106,   213,   342,    95,
      96,   101,   276,   327,   276,   326,   103,   103,    97,   103,
     394,   106,   213,   323,   323,   103,   208,   273,   212,   398,
     208,    27,    15,    23,   234,   235,   236,   237,   238,     4,
     264,   264,   212,   369,   369,   394,   100,   102,   102,   392,
     392,   392,   148,   393,   393,     1,   106,   248,   251,   252,
     397,   212,   209,   107,   101,   236,   216,   238,   103,   103,
     243,   276,   276,   364,   367,   168,   168,   213,   213,     4,
     397,   212,   107,   213,   213,    94,    93,   101,   103,   103,
     391,   391,   103,   212,   369,   369,   394,   366
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
     212,   214,   213,   213,   215,   215,   216,   216,   217,   218,
     219,   219,   219,   219,   220,   221,   221,   222,   222,   223,
     223,   223,   224,   225,   226,   226,   227,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   229,   229,   229,   229,   229,   229,   229,   230,   230,
     231,   231,   232,   233,   234,   234,   235,   235,   236,   237,
     237,   238,   238,   239,   239,   239,   239,   240,   241,   241,
     242,   243,   241,   244,   244,   245,   246,   246,   247,   247,
     248,   248,   249,   249,   250,   251,   252,   252,   253,   254,
     254,   254,   254,   254,   255,   255,   256,   256,   257,   257,
     257,   257,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   261,   261,   262,   262,   263,   263,   263,   264,   264,
     265,   266,   267,   268,   269,   270,   270,   271,   272,   272,
     273,   274,   274,   275,   275,   276,   276,   277,   277,   279,
     278,   280,   280,   281,   281,   282,   282,   283,   284,   284,
     285,   285,   286,   286,   287,   287,   288,   288,   289,   289,
     290,   290,   290,   290,   290,   291,   291,   292,   292,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   295,   294,   296,   296,   297,   297,   297,
     298,   298,   299,   300,   300,   301,   301,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   303,   303,   304,
     304,   305,   306,   306,   307,   307,   307,   307,   308,   308,
     309,   309,   310,   310,   311,   311,   312,   312,   313,   314,
     314,   315,   315,   315,   316,   317,   318,   318,   319,   319,
     320,   320,   321,   322,   323,   323,   324,   324,   325,   325,
     326,   327,   328,   329,   329,   330,   331,   332,   332,   333,
     333,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   335,   335,   337,   336,   338,   338,   339,
     339,   340,   341,   341,   342,   342,   343,   344,   344,   345,
     346,   347,   347,   348,   348,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   350,   350,   351,   351,   352,   352,
     354,   353,   355,   355,   356,   357,   358,   358,   359,   359,
     360,   360,   360,   360,   361,   361,   362,   362,   364,   363,
     366,   365,   367,   367,   367,   367,   368,   369,   369,   370,
     371,   371,   372,   373,   373,   374,   374,   375,   375,   376,
     376,   377,   377,   378,   379,   379,   380,   380,   381,   381,
     382,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     384,   384,   385,   386,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   395,   396,   396,   397,   397,   398,
     398,   399,   399
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
       1,     0,     4,     3,     0,     1,     1,     2,     1,     3,
       2,     2,     2,     2,     2,     1,     3,     1,     3,     1,
       1,     1,     5,     3,     1,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     7,     5,     3,     0,     1,     1,     2,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     2,     5,     5,
       0,     0,     7,     7,     7,     9,     0,     1,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     3,     8,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     3,     4,
       3,     3,     4,     3,     3,     3,     0,     1,     3,     3,
       3,     3,     4,     1,     2,     6,     6,     2,     0,     1,
       2,     2,     2,     5,     5,     1,     1,     6,     1,     3,
       3,     2,     2,     0,     1,     0,     1,     0,     1,     0,
       6,     0,     1,     1,     2,     2,     3,     4,     1,     2,
       1,     1,     5,     5,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     8,     0,     1,     2,     2,     4,
       1,     3,     3,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     6,     5,
       5,     2,     7,     7,     0,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     1,     4,     3,
       3,     0,     1,     1,     4,     9,     2,     2,     0,     1,
       0,     1,     5,     5,     1,     1,     6,    10,     2,     2,
       5,     5,     8,     5,     5,     2,     4,     1,     1,     7,
      10,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     7,     7,     0,     9,     0,     1,     5,
       5,     7,     1,     1,     1,     1,     7,     0,     1,     2,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     0,     1,     1,     3,
       0,     8,     0,     1,     2,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     8,     8,     0,     1,     0,    10,
       0,    13,     3,     3,     6,     6,     6,     1,     2,     7,
       0,     1,     2,     3,     4,     0,     1,     1,     3,     2,
       4,     9,     9,     1,     1,     2,     6,     7,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     1,     1,     3,     0,     0,     0,
       0,     0,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
    { SPL->add_scope(); }
#line 3799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);  SPL->endScope();}
#line 3805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 466 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 486 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 487 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 491 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),false,(yyvsp[0].r.line_no),(yyvsp[0].r.col_no)) ;
	}
#line 3881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 499 "yacc.y" /* yacc.c:1646  */
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 504 "yacc.y" /* yacc.c:1646  */
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
				  (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 511 "yacc.y" /* yacc.c:1646  */
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[0].r.str)) ; 
		  }
#line 3907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 515 "yacc.y" /* yacc.c:1646  */
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[-2].r.str));
		   }
#line 3915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 520 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 521 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3939 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 529 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),true,(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no)) ;
  }
#line 3948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 536 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",1);
  		(yyval.r.identifiers) = new queue<string>();
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
  }
#line 3958 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 542 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",2);
	  	(yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));	
  }
#line 3968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 549 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);(yyval.r.identifier) = new string((yyvsp[-2].r.str));}
#line 3974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 559 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 565 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 566 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 567 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 568 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 569 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 570 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 571 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 579 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 605 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 608 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 616 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 627 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 627 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 631 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);}
#line 4268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 649 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 686 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 701 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 704 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 705 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 710 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 719 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 728 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 734 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 738 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 742 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 749 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 752 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 768 "yacc.y" /* yacc.c:1646  */
    {SPL->addNamespace(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);SPL->endScope();}
#line 4652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 778 "yacc.y" /* yacc.c:1646  */
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[0].r.str));
		  }
#line 4672 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 782 "yacc.y" /* yacc.c:1646  */
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[-1].r.base)) + string((yyvsp[0].r.str)));
		}
#line 4680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[-1].r.str)) + ".");}
#line 4686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[-2].r.base) + string((yyvsp[-1].r.str)) + ".");}
#line 4692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 809 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 836 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
#line 4809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 841 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 4818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 848 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4828 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 854 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
#line 4844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
#line 4850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
#line 4856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
#line 4862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
#line 4868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 866 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
#line 4874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 867 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 4880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
#line 4886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
#line 4892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 870 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
#line 4898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
#line 4904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
#line 4910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
#line 4916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
#line 4922 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 885 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 888 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 4936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 4942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 894 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 897 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();}
#line 4954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 898 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 899 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);(yyval.r.bases) = new queue<string>();}
#line 4966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 903 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4976 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 909 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[-2].r.bases);
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 917 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 921 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 922 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 925 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 926 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 931 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 932 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 933 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 934 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 935 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 937 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 938 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 942 "yacc.y" /* yacc.c:1646  */
    {		l.a("constant_declaration",4);
				//SPL->add_var(*$<r.modifiers>2,1);
		  }
#line 5084 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 945 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5090 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 949 "yacc.y" /* yacc.c:1646  */
    {
		        SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
  		      l.a("field_declaration",4);
	      }
#line 5099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 954 "yacc.y" /* yacc.c:1646  */
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
        }
#line 5108 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 961 "yacc.y" /* yacc.c:1646  */

    {l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}

#line 5114 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 966 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type));
      }
#line 5122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 970 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);
      }
#line 5130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 977 "yacc.y" /* yacc.c:1646  */
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
#line 5138 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 981 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 985 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 989 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[-2].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[-2].r.types_ids))->front()); ((yyvsp[-2].r.types_ids))->pop();}
            while(!((yyvsp[0].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[0].r.types_ids))->front()); ((yyvsp[0].r.types_ids))->pop();}
        }
#line 5165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 997 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 998 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 1001 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1010 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5198 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1015 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
      }
#line 5207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5216 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
       }
#line 5225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[0].r.base) ;
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1042 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[0].r.base);
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1052 "yacc.y" /* yacc.c:1646  */
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));  
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no); 
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1063 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base) ;
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1071 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base);
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1087 "yacc.y" /* yacc.c:1646  */
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1103 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1107 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1108 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1111 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1112 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1124 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1127 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1128 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1145 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1157 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1160 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1165 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1169 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1172 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1180 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1184 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1188 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {
  SPL->addMethod(*(yyvsp[-4].r.modifiers),"",string((yyvsp[-3].r.str)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);
  }
#line 5623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1212 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);SPL->endScope();}
#line 5629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1215 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1220 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1240 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1243 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1244 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1252 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1253 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1256 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1259 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1262 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1263 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1266 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1267 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1270 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1271 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1272 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1273 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1274 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1275 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1276 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1277 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1279 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1284 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1285 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1288 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1289 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1292 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1293 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1299 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addInterface(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));		
  }
#line 5835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1302 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);SPL->endScope();}
#line 5841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1306 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 5847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1307 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1310 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1313 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1316 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1317 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1320 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1321 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1324 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1325 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1326 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1327 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1331 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1332 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1335 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1336 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1342 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1342 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1349 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1349 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1353 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1354 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1355 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1356 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1359 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1364 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1365 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1370 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1373 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1374 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1377 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1380 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1381 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1384 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1385 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1388 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1389 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1392 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1393 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1398 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1399 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1404 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1407 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1408 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1411 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1412 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1415 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1416 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1419 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1422 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1423 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1424 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1425 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1426 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1427 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1428 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1429 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1430 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1433 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1434 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1437 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1440 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1441 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1444 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1447 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1454 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1457 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1460 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1463 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1466 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1469 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1477 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0);}
#line 6273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1478 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0,1);yyerrok;yyclearin;}
#line 6279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1481 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 6285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1482 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1485 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 6297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1486 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1489 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0);}
#line 6309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1490 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0,1);}
#line 6315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1493 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0);}
#line 6321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1494 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0,1);yyerrok;}
#line 6327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6331 "yacc.tab.cpp" /* yacc.c:1646  */
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




