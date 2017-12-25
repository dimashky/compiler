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
#define YYLAST   3361

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  258
/* YYNRULES -- Number of rules.  */
#define YYNRULES  596
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  995

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
     872,   873,   874,   885,   884,   890,   889,   898,   899,   902,
     903,   904,   907,   913,   922,   926,   927,   930,   931,   934,
     935,   936,   937,   938,   939,   940,   941,   942,   943,   946,
     951,   959,   964,   972,   976,   980,   984,   985,   990,   993,
     997,  1001,  1010,  1011,  1014,  1015,  1022,  1027,  1034,  1039,
    1046,  1054,  1064,  1075,  1083,  1094,  1095,  1096,  1099,  1110,
    1116,  1117,  1120,  1121,  1124,  1125,  1128,  1134,  1140,  1141,
    1144,  1145,  1151,  1152,  1155,  1161,  1167,  1173,  1175,  1178,
    1182,  1185,  1186,  1189,  1190,  1193,  1194,  1195,  1196,  1197,
    1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,
    1208,  1209,  1210,  1211,  1212,  1213,  1214,  1217,  1218,  1222,
    1221,  1228,  1229,  1232,  1233,  1249,  1252,  1253,  1256,  1257,
    1262,  1265,  1266,  1269,  1272,  1275,  1276,  1279,  1280,  1283,
    1284,  1285,  1286,  1287,  1288,  1289,  1290,  1292,  1297,  1298,
    1301,  1302,  1305,  1306,  1312,  1311,  1319,  1320,  1323,  1326,
    1329,  1330,  1333,  1334,  1337,  1338,  1339,  1340,  1344,  1350,
    1358,  1359,  1365,  1362,  1372,  1368,  1376,  1377,  1378,  1379,
    1382,  1387,  1388,  1393,  1396,  1397,  1400,  1403,  1404,  1407,
    1408,  1411,  1412,  1415,  1416,  1421,  1422,  1427,  1430,  1431,
    1434,  1435,  1438,  1439,  1442,  1445,  1446,  1447,  1448,  1449,
    1450,  1451,  1452,  1453,  1456,  1457,  1460,  1463,  1464,  1467,
    1470,  1477,  1480,  1483,  1486,  1489,  1492,  1500,  1501,  1504,
    1505,  1508,  1509,  1512,  1513,  1516,  1517
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
  "class_declaration", "$@5", "$@6", "class_base_opt", "class_base",
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
  "constructor_declaration", "$@7", "constructor_initializer_opt",
  "constructor_initializer", "destructor_declaration", "operator_body",
  "constructor_body", "struct_declaration", "struct_interfaces_opt",
  "struct_interfaces", "struct_body", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration", "$@8",
  "interface_base_opt", "interface_base", "interface_body",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration",
  "new_opt", "interface_property_declaration", "$@9",
  "interface_indexer_declaration", "$@10", "interface_accessors",
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

#define YYPACT_NINF -806

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-806)))

#define YYTABLE_NINF -582

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,   119,   106,    64,   -29,  -806,  -806,  -806,   174,    68,
    -806,   277,  -806,  2990,  -806,   102,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,    64,  -806,   214,  -806,  -806,   292,
    -806,  -806,   227,  -806,  -806,  -806,   292,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,   474,   951,
    -806,  3277,  -806,  -806,   668,   282,    84,  -806,  -806,  -806,
    -806,  3149,   366,   399,   409,   431,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,   292,  -806,   339,  -806,
    -806,   368,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,   379,  -806,   422,
    -806,   546,  -806,  -806,  -806,  -806,  -806,  -806,   546,   546,
     555,   485,   496,   501,   504,  -806,  -806,   200,  -806,   462,
    -806,   -29,   517,  -806,  -806,  -806,  -806,  -806,  -806,   514,
     663,   548,  -806,   292,  -806,  -806,   292,   549,  -806,   249,
     634,  -806,   298,  -806,  2623,  -806,  -806,   271,  -806,  -806,
     152,  -806,   325,   517,  -806,   554,   552,   554,   363,   517,
     556,   554,   557,   645,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,   -61,   553,  -806,  3193,  -806,   558,  -806,  -806,   562,
     563,  2336,  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,
    -806,  -806,   550,   551,   -35,   564,  -806,  -806,  -806,  -806,
     565,   559,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,   318,  -806,  -806,  -806,   697,
    -806,   401,   252,   256,    35,   344,   540,   560,   561,   530,
     -50,  -806,  -806,  -806,   255,   568,   365,   278,   575,   574,
     584,  -806,   566,  -806,   569,   678,   582,   591,  -806,  -806,
     292,   386,   517,   951,  -806,  -806,  -806,  -806,   216,  -806,
    -806,  -806,  -806,  -806,   597,   390,  -806,  -806,   292,   391,
     517,   517,  -806,  2623,   696,  2623,   379,    10,   603,    30,
    3193,  3237,  2623,    33,    38,    73,   416,   599,   269,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,   702,   703,  2623,
     704,  2135,  -806,  2623,  -806,  -806,   705,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  2623,  2623,
    2623,  2623,  2623,  2623,  2623,  2623,  3193,  3193,  2623,  2623,
    2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,
    2623,  2135,  -806,  -806,  3193,  -806,  3193,   228,    64,    64,
    2221,  2221,   593,  -806,   398,  -806,   662,   613,   402,  -806,
    -806,  -806,  -806,  -806,  -806,  3061,  1424,  -806,  -806,  -806,
    -806,  -806,   554,   951,  -806,   615,   408,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,   466,
    -806,   614,  2135,  2623,  2221,  -806,   208,   212,   225,   616,
    -806,  -806,   618,    33,  -806,   619,   623,  2422,  2827,    33,
    -806,  -806,   479,  -806,  2623,  2623,   621,  -806,   625,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,   401,   401,   252,
     252,   422,   422,   256,   256,   256,   256,    35,    35,   344,
     540,   560,   561,   626,   530,   480,   631,    40,    55,  -806,
    -806,   584,  -806,   566,  -806,   569,  3193,  -806,  -806,  -806,
    -806,  -806,  2623,  -806,  -806,  -806,  3105,  -806,  -806,   299,
    3193,  3193,   683,   686,    61,   127,  -806,   302,  -806,  -806,
     640,  1789,  2747,  -806,  -806,  -806,  -806,   639,   483,  -806,
     643,   650,  -806,  -806,  -806,  -806,  2623,  -806,  2623,  2623,
    2623,  -806,   648,  -806,  -806,  -806,  -806,  2135,  -806,  2623,
    -806,  -806,  -806,  -806,   -27,  -806,  -806,  3193,    74,    34,
     152,    75,    77,  3193,  3193,   646,   296,  2823,   654,   186,
    -806,   660,    47,   672,   666,  -806,  -806,  -806,  -806,   387,
     233,   322,  3193,   246,  1905,   669,   289,   289,    39,   289,
     670,  2623,   289,  2623,   673,   438,   673,   675,   290,  -806,
      86,   550,   551,   729,    85,   430,  1272,   795,  1507,   697,
     250,  -806,  -806,  -806,   674,  1789,  -806,  -806,  -806,   259,
     260,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,    52,   770,  -806,   546,  -806,  2020,  -806,
    -806,  -806,  -806,  2623,  -806,  -806,  2623,    91,   676,   681,
     689,   685,   671,   244,  -806,    19,  -806,   196,   207,  2667,
    2221,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,   687,    64,  -806,   786,  -806,  2960,   692,
    -806,    64,    64,  1789,  -806,  -806,  -806,    75,  -806,  -806,
     709,  3193,  -806,  -806,  2537,  3193,   262,  2623,   267,  2623,
    2623,  -806,   272,  2623,   273,    54,  -806,  -806,  2537,  -806,
    1543,   680,   698,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,   699,   706,   546,  -806,  -806,  -806,   711,
     305,   152,   152,   708,    64,  -806,  2623,  -806,   800,  -806,
    -806,   713,  3193,  3193,   712,   723,  -806,  3193,   484,  -806,
    -806,  -806,   727,   730,    64,   510,   533,   710,   410,   441,
    -806,   719,   734,    92,   151,   159,   181,   198,   245,   257,
    -806,  -806,  -806,   274,  -806,   741,    93,  -806,  -806,   275,
    -806,  -806,  -806,    98,   736,  -806,  -806,    98,  -806,  -806,
     515,   673,    54,  -806,  -806,  -806,  -806,   740,  2623,   743,
     744,   755,  -806,  -806,  -806,  -806,   758,  -806,  -806,   759,
     760,    64,   523,   757,  -806,  -806,    64,   103,   104,  -806,
    -806,   107,    64,  -806,  -806,  -806,   766,  -806,  -806,  -806,
    -806,   777,  -806,  -806,   780,  -806,  -806,  2623,   756,   309,
    -806,  -806,  -806,  2623,  2623,    41,  -806,  -806,  -806,  -806,
    1905,  1905,   775,   249,  -806,  -806,  -806,  -806,  1905,   879,
    1905,  1905,   673,  -806,   305,   305,   535,   781,  -806,    29,
     321,  -806,   472,   783,    64,    64,   778,   782,   337,  -806,
     356,   356,  -806,   787,  2623,   882,  1905,  -806,   274,  -806,
    -806,  -806,  -806,  2623,   862,  -806,   317,  -806,   887,   887,
    -806,  1905,  -806,  -806,  -806,  -806,  -806,   305,   305,  -806,
     792,   791,   793,  -806,  -806,  -806,  -806,  -806,  -806,   798,
    -806,   802,  -806,  -806,  -806,  3193,  -806,  -806,  -806,  -806,
    -806,  -806,   276,  -806,  -806,  -806,  2623,    98,  1905,  2623,
     796,   797,   317,  -806,  1673,  -806,  -806,   799,   803,  -806,
     446,   447,  -806,    64,  2135,  2135,   673,   673,  -806,   110,
    -806,  -806,  -806,  -806,    98,  -806,   741,  1905,  -806,   804,
    -806,  -806,  -806,  1789,  -806,   673,   673,  -806,   805,   807,
    -806,   806,   809,   810,  -806,  -806,   821,  1905,  -806,  -806,
    -806,  -806,   305,   305,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     323,     0,     0,   325,   324,   338,   340,   341,   333,     0,
      10,     0,     1,   355,   348,   325,   346,   349,   350,   351,
     352,   353,   354,   326,   557,   558,     0,   339,   335,     0,
     345,   344,   334,   359,   360,   361,     0,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,     0,   356,
     357,   355,   347,   559,   562,   333,     0,   336,   329,   588,
     587,     0,     0,     0,     0,     0,   358,   567,   572,   565,
     566,   568,   569,   570,   571,   573,     0,   563,     0,   343,
     342,     0,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   413,    15,   412,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   544,   516,   491,   377,   579,    11,     0,   574,   577,
     564,   323,   331,    38,    37,    44,    40,    39,    41,     0,
       0,     0,   545,     0,   514,   517,     0,     0,   492,     0,
     373,   378,     0,   582,    75,   576,   578,   325,   332,   330,
     325,   546,   325,   331,   382,   518,     0,   493,   325,   331,
     379,   380,     0,     0,   582,   575,   560,     3,     4,     5,
       6,     0,     0,     9,     0,     7,     0,    79,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     2,     0,     0,    97,    52,    51,    55,    56,    57,
       0,    76,    58,    59,    99,   100,    60,    84,    54,    61,
      63,    64,   101,   113,    62,   105,   114,   111,   112,   127,
     104,   131,   134,   137,   144,   147,   149,   151,   153,   155,
     157,   171,   172,    77,    98,     0,   325,   425,     0,   409,
     410,   416,   420,   418,   421,     0,     0,   550,   551,   543,
       0,   325,   331,   355,   507,   499,   500,   501,     0,   502,
     503,   504,   505,   506,     0,   325,   497,   490,     0,   325,
     331,   331,   561,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,   121,   121,   121,   131,     0,    98,   108,
     109,   110,    95,   102,   103,   106,   107,     0,     0,     0,
       0,    71,   580,     0,    82,    83,     0,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,   337,   427,     0,   426,     0,     0,   325,   325,
       0,     0,   553,   547,   325,   383,   530,     0,   325,   522,
     524,   525,   527,   526,   515,     0,     0,   415,   414,   403,
     494,   498,   381,   355,   398,     0,   325,   387,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   374,   376,     0,
      80,     0,    71,     0,   510,    87,     0,     0,     0,     0,
     126,   125,     0,   122,   123,     0,     0,     0,    65,   121,
      67,    68,     0,    66,     0,     0,    72,    46,     0,    48,
      78,    94,   159,   128,   129,   130,   127,   132,   133,   135,
     136,   143,   142,   139,   138,   140,   141,   145,   146,   148,
     150,   152,   154,     0,   156,     0,     0,     0,     0,   556,
     555,   411,   417,     0,   419,     0,     0,   209,   423,   211,
     210,   424,     0,   548,   552,   531,     0,   519,   523,   333,
       0,     0,     0,     0,     0,     0,   585,     0,   451,   452,
       0,   194,     0,   384,   388,    81,    92,     0,     0,   512,
       0,   511,    96,    91,    90,    93,     0,   124,     0,     0,
       0,   115,     0,    73,    50,    45,    49,     0,    69,     0,
      74,    70,   428,   422,     0,   173,   554,     0,     0,     0,
     325,     0,     0,     0,     0,     0,   207,     0,     0,     0,
     205,   585,     0,     0,     0,   487,   486,   450,   193,   333,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,   296,     0,     0,     0,     0,     0,   198,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,   196,   177,   178,     0,   195,   179,   175,   176,     0,
       0,   180,   181,   238,   239,   182,   189,   253,   254,   255,
     256,   183,   279,   280,   281,   282,   283,   184,   185,   186,
     187,   188,   190,    98,     0,    85,    42,   508,     0,   120,
     118,   119,   116,     0,    47,   158,     0,     0,     0,   585,
       0,     0,     0,     0,   214,     0,   583,     0,     0,     0,
       0,   462,   461,   473,   474,   455,   456,   463,   464,   465,
     466,   467,   457,   458,   468,   469,   470,   471,   472,   476,
     475,   459,   460,     0,   325,   402,     0,   401,     0,     0,
     449,   325,   325,     0,   285,   284,   311,     0,   287,   286,
       0,     0,   590,   589,   266,     0,     0,     0,     0,     0,
       0,   297,     0,     0,     0,     0,   312,   257,     0,   260,
       0,   207,   204,   224,   217,   227,   220,   228,   221,   225,
     218,   229,   222,   230,   223,   226,   219,   192,   197,   202,
     200,   203,   201,     0,    88,    42,   509,   513,   117,     0,
       0,   325,   325,     0,   325,   479,     0,   400,     0,   399,
     440,     0,     0,     0,     0,     0,   208,     0,     0,   420,
     421,   206,     0,     0,   325,     0,     0,     0,   325,   325,
     199,   213,     0,     0,    56,    99,   100,    84,   111,   112,
     233,   272,   276,     0,   267,   273,     0,   291,   288,     0,
     293,   290,   174,     0,     0,   295,   294,     0,   299,   298,
       0,     0,   300,   303,   301,   316,   315,     0,     0,     0,
       0,     0,    86,    89,    43,   212,     0,   541,   540,     0,
       0,   325,     0,   481,   216,   215,   325,     0,     0,   407,
     405,     0,   325,   447,   406,   404,     0,   448,   586,   586,
     586,     0,   430,   433,     0,   431,   435,     0,     0,     0,
     318,   594,   593,   268,     0,     0,   292,   289,   592,   591,
       0,     0,     0,     0,   307,   310,   304,   302,     0,     0,
       0,     0,     0,   542,     0,     0,     0,     0,   585,     0,
       0,   482,     0,     0,   325,   325,     0,     0,     0,   586,
       0,     0,   446,     0,     0,     0,     0,   274,     0,   269,
     277,   596,   595,     0,   240,   313,   244,   242,   308,   308,
     314,     0,   259,   258,   485,   529,   528,     0,     0,   586,
       0,     0,     0,   489,   488,   480,   584,   584,   584,     0,
     442,     0,   443,   478,   477,     0,   453,   429,   439,   438,
     585,   585,     0,   320,   319,   317,   270,     0,     0,     0,
       0,     0,   245,   246,     0,   249,   309,     0,     0,   261,
     325,   325,   532,   325,    71,    71,     0,     0,   441,     0,
     436,   437,   264,   263,     0,   271,   275,     0,   241,     0,
     252,   243,   247,   248,   250,     0,     0,   262,     0,     0,
     533,     0,     0,     0,   583,   583,     0,     0,   278,   251,
     306,   305,     0,     0,   586,   483,   484,   444,   445,   454,
     265,   538,   539,   534,   535
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -806,  -806,  -806,  -806,   -75,   -41,   762,  -806,    49,  -806,
     801,  -806,   -38,  -806,   763,   195,   -96,   519,  -806,   423,
    -806,  -806,  -806,  -806,  -316,  -339,  -806,  -806,  -251,  -806,
    -806,   140,   209,  -806,   304,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,   521,   360,   424,   265,  -806,  -254,
    -806,   529,  -155,   307,   108,   310,   606,   608,   609,   610,
     607,  -806,  -806,   457,  -806,   494,  -660,  -669,  -569,  -431,
    -167,  -806,  -806,    14,  -806,  -806,  -806,  -571,  -488,   293,
    -337,  -806,  -806,   283,   223,  -806,   118,  -806,  -806,  -806,
    -806,  -806,  -806,    21,  -806,    20,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,    31,
    -806,  -806,  -806,  -806,  -806,  -806,   405,  -806,  -806,  -806,
     173,    70,   179,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
      88,  -806,   844,     1,  -806,  -806,  -806,   -76,    -1,   491,
    -806,  -806,   965,  -806,  -806,   823,    -4,  -143,  -226,  -806,
     922,  -806,  -806,  -806,  -806,  -806,  -107,  -806,  -806,  -806,
     596,  -154,  -149,  -145,  -806,  -502,  -806,  -806,  -615,   627,
    -345,  -341,   624,  -806,  -340,  -141,   232,  -806,  -806,   230,
     229,   113,  -140,  -806,   120,   122,  -135,  -806,  -806,  -132,
    -806,  -806,  -806,  -806,  -112,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,   722,  -272,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,   635,  -806,
    -806,  -806,  -806,  -806,  -806,    46,  -806,  -805,  -806,  -806,
    -806,  -806,  -806,  -806,   638,  -806,  -806,  -806,   970,  -806,
    -806,  -806,  -806,   854,  -806,  -806,  -806,  -806,   833,  -335,
    -263,  -521,  -795,  -806,  -203,  -758,   124,  -806
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   190,   191,     9,    98,   560,   100,   101,   192,   103,
     104,   105,   193,   107,   108,   714,   401,   504,   416,   417,
     194,   195,   196,   197,   198,   418,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   792,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   402,
     403,   404,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   318,   419,   516,   773,   571,   572,
     573,   481,   574,   575,   576,   577,   578,   579,   529,   530,
     458,   459,   580,   623,   624,   581,   762,   582,   583,   584,
     887,   931,   932,   933,   934,   935,   585,   586,   587,   788,
     967,   588,   589,   763,   878,   954,   764,   879,   955,   765,
     590,   591,   592,   593,   594,   595,   682,   596,   597,   782,
     783,   937,   784,   598,   599,   600,   601,   787,   602,   829,
     830,     2,     3,   237,   235,    14,    81,   149,   234,    11,
     122,     4,     5,     6,     7,    15,    16,    17,    48,    49,
      50,    18,   162,   163,   140,   141,   155,   270,   375,   376,
     377,   255,   256,   257,   258,   238,   110,   369,   239,   240,
     241,   242,   243,   346,   244,   259,   747,   822,   825,   748,
     749,   920,   260,   863,   864,   865,   261,   476,   533,   262,
     477,   478,   653,   479,   263,   803,   860,   861,   386,   537,
     905,    19,   137,   138,   159,   264,   265,   266,   460,   490,
     491,    20,   156,   134,   135,   252,   357,   358,   359,   360,
     466,   361,   970,   362,   994,   857,   363,   798,    21,   131,
     132,   153,   246,   247,   248,    22,    23,    24,    25,    76,
      77,    78,   117,   118,   145,   119,   146,    26,   166,   731,
     946,   534,   870,    65,   674,   840,   833,   883
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   115,   446,   452,    13,   126,   708,   395,   453,   455,
     659,    52,   127,   128,   461,   254,    51,   769,   621,   842,
      99,   790,   389,   106,   871,   872,   286,   365,    56,   157,
     405,   406,   161,   125,   625,    58,   125,   273,   619,   738,
     901,   125,   881,   676,   512,   326,   745,   274,   412,   895,
     896,    32,     1,   487,   677,   125,   -11,   489,   154,   513,
     109,   154,   678,   299,   154,    55,   804,   115,   338,    30,
     780,   616,   692,   300,   917,   116,   125,   249,   618,   622,
     327,   526,   882,   267,   124,    79,   695,   781,   339,   445,
     691,   368,   940,   941,   750,   720,   828,   835,   723,   838,
     902,   160,  -322,   761,   942,   620,    12,   866,   867,   802,
     102,   868,   392,   670,   976,   378,   656,   786,   660,   849,
     379,   124,   254,     8,   380,   730,   374,   735,   381,   382,
     394,   526,   116,   277,   383,   116,   106,   384,   116,   328,
     329,   116,   488,   285,   400,   124,   297,   482,    51,   400,
     340,   124,  -231,   245,   341,   502,   743,   385,   873,   253,
    -234,   372,  -581,   -11,   877,   563,   124,   427,   428,   957,
     330,   331,   123,   109,    31,   355,   364,   991,   992,   527,
     288,   298,  -235,   127,   400,   123,   124,   655,   124,   993,
      80,   696,   409,   154,   387,   388,   977,   124,   528,  -232,
    -581,   839,   124,   124,   124,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   124,   124,   -99,   -99,   124,   799,
     800,   124,   378,   102,   -99,   -99,   -99,   379,   563,   449,
     284,   380,    52,   374,   664,   381,   382,    51,   124,   396,
     398,   383,   106,   106,   384,   727,  -236,   668,  -231,   116,
    -581,   705,   356,    55,  -231,  -408,  -234,  -231,  -237,   563,
     709,   711,  -234,   767,   385,  -234,   253,   116,   770,   959,
     373,   717,   125,   775,   778,   831,   836,   952,  -235,   109,
     109,    32,    28,   656,  -235,   431,   432,  -235,   106,   106,
     672,   689,   657,   736,    29,  -232,    55,   142,   732,   143,
      90,  -232,    55,   447,  -232,   448,   106,   124,   106,   733,
     536,   492,    54,   739,   740,   493,   366,    93,   124,   124,
     739,   740,   367,   123,   475,   109,   109,   106,   494,   102,
     102,   343,   929,   344,   450,    57,   124,   900,   345,   665,
     930,   728,  -236,   109,   675,   109,   679,   563,  -236,   683,
     729,  -236,   669,   340,  -237,   245,   706,   341,   754,   356,
    -237,   322,   323,  -237,   109,   710,   712,   340,   768,  -581,
     111,   341,  -327,   771,   666,   102,   102,   373,   776,   779,
     832,   837,   953,   739,   740,   324,   325,   685,   686,   687,
      28,   673,   690,   102,   708,   102,  -333,   164,  -333,   950,
     951,   520,   366,   112,    28,   796,   875,    28,   535,   884,
     885,   797,   876,   113,   102,   514,   630,   890,   106,   892,
     893,   366,   366,  -581,   275,   519,  -549,   903,   106,   521,
     522,   697,   106,   106,   915,   114,   433,   434,   435,   436,
     916,   475,   793,   562,   106,   925,   120,   289,   290,   291,
     292,   293,   294,   295,   296,   109,   366,   304,   305,   306,
     939,  -581,   918,  -581,  -495,   109,  -328,   452,   121,   109,
     109,   739,   740,   525,   531,    59,   617,   332,   333,   106,
     603,   109,   627,   628,  -581,   106,   106,  -520,  -581,  -581,
     123,  -496,  -385,    60,   663,    28,  -581,   958,    61,   463,
    -581,   667,    62,  -521,   106,   102,  -581,   128,  -581,  -386,
     715,  -432,   319,   320,   321,   102,   109,    63,   754,   102,
     102,   626,   109,   109,   563,   563,   978,   407,   320,   321,
     561,   102,   563,   124,   563,   563,   698,   562,   366,  -581,
     282,   109,  -434,    64,  -581,  -581,   990,  -536,  -537,   125,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   129,
     563,  -100,  -100,   303,   144,   485,   102,   906,   907,  -100,
    -100,  -100,   102,   102,   603,   563,   303,   303,   503,   510,
     303,   812,   606,   813,   423,   424,   425,   426,   426,   426,
     426,   102,   130,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   133,   426,   972,   973,   812,   136,   817,
     754,   139,   563,   844,   845,   366,   150,   843,   563,   715,
     812,   564,   858,   148,   561,   562,   818,   819,   897,   898,
     753,   429,   430,   106,   766,  -375,   562,   106,   233,   987,
     988,   563,   437,   438,   947,   948,   271,   563,   152,   158,
     562,   250,   251,   268,   334,   275,   303,   269,   297,   298,
     280,   563,   603,   746,   281,   282,   301,   337,   302,   342,
     109,   348,   423,   603,   109,   287,   336,    83,   347,   335,
      84,   349,   352,   353,   564,   894,   350,   603,   354,   351,
     565,   807,   808,   904,   106,   106,   811,    67,   370,   106,
     390,   393,   408,   919,   919,    88,   410,   411,   413,   421,
      89,   465,   561,   462,   467,   564,   483,   486,   507,   495,
     102,   496,   498,   561,   102,    91,   499,    92,   508,    68,
     693,   109,   109,   509,   511,   523,   109,   561,   524,    94,
      95,   538,   605,    96,   607,   746,   569,   608,   629,   821,
     824,   613,   654,   565,    69,    70,    71,    72,    73,    74,
      75,   609,   658,   610,   611,   612,   662,   233,   888,   391,
     661,   671,   680,   366,   713,   707,   399,   688,   721,   974,
     975,   102,   102,   722,   565,   566,   102,   724,   725,   737,
     691,   726,   744,   233,   752,   656,   701,   420,   980,   981,
     630,   791,   856,   564,   622,   889,   394,   862,   801,   569,
     795,   820,   422,   806,   755,   809,   728,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   810,   -56,   316,   317,
     814,   -56,   443,   815,   233,   694,   827,   -56,   834,   841,
     569,   567,   116,   848,   457,   457,   850,   851,   566,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   852,   853,
     -56,   -56,   854,   855,   859,   909,   911,   869,   -56,   -56,
     -56,   819,   565,   818,   949,   886,   874,   106,   718,   566,
     891,   913,   899,   756,   908,   914,   828,   233,   457,   928,
     922,   936,   943,   944,   907,   945,   562,   906,   961,   982,
     983,   702,   965,   960,   567,   568,   966,   984,   505,   505,
     794,   979,   985,   986,   109,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,   989,   562,  -111,  -111,   569,   501,
     614,   151,   497,   603,   506,   567,   278,   279,   570,   569,
     439,   968,   969,   440,   856,   441,   444,   442,   963,   741,
     751,   805,   880,   962,   964,   846,   515,   956,   684,   938,
      33,   847,   603,   924,   102,   147,   532,   566,   568,    27,
     236,    66,   484,   454,   755,   451,   816,   823,   757,   826,
     564,   564,    34,   561,   921,   912,   910,   371,   564,   971,
     564,   564,   464,   468,    53,    35,   165,   272,     0,   568,
      37,   570,   926,   615,     0,    38,     0,    39,    40,    41,
      42,     0,   561,     0,    43,     0,   564,     0,    44,     0,
       0,     0,     0,   567,     0,     0,     0,     0,     0,     0,
      45,   564,   570,    46,   758,    47,     0,     0,     0,     0,
       0,     0,     0,   756,     0,   681,     0,   681,     0,   565,
     565,     0,     0,     0,     0,     0,     0,   565,     0,   565,
     565,     0,     0,     0,     0,     0,   755,     0,   564,     0,
       0,     0,     0,     0,   564,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   565,     0,   568,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   564,   759,   569,
     565,     0,   457,   564,     0,   569,   569,     0,     0,     0,
     719,     0,     0,   569,     0,   569,   569,   564,     0,     0,
     570,     0,     0,     0,   457,     0,     0,     0,     0,     0,
       0,   760,     0,     0,     0,   756,     0,   565,   757,     0,
       0,   569,     0,   565,   566,   566,     0,     0,     0,     0,
       0,     0,   566,     0,   566,   566,   569,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   565,     0,     0,     0,
       0,   515,   565,   772,   774,     0,     0,   777,     0,     0,
     566,     0,   785,     0,   772,     0,   565,     0,     0,     0,
       0,   569,     0,   569,   758,   566,     0,     0,     0,   569,
     567,   567,     0,     0,     0,     0,     0,     0,   567,     0,
     567,   567,     0,     0,     0,     0,     0,     0,     0,     0,
     515,     0,   569,     0,     0,     0,     0,     0,   569,     0,
     757,     0,   566,     0,     0,     0,   567,     0,   566,     0,
       0,     0,   569,     0,     0,     0,     0,     0,     0,     0,
       0,   567,     0,     0,     0,     0,     0,     0,   759,     0,
       0,   566,     0,     0,   568,   568,     0,   566,     0,     0,
       0,     0,   568,   699,   568,   568,     0,     0,     0,     0,
       0,   566,   772,     0,     0,     0,   758,     0,   567,     0,
       0,   760,     0,     0,   567,     0,     0,   570,   570,     0,
     568,     0,     0,     0,     0,   570,     0,   570,   570,     0,
       0,     0,     0,     0,     0,   568,     0,   567,     0,     0,
       0,   772,     0,   567,     0,     0,     0,   772,     0,     0,
       0,     0,     0,   570,     0,     0,     0,   567,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   570,     0,
     759,     0,   568,     0,     0,     0,     0,     0,   568,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   923,     0,
     -84,     0,     0,     0,   -84,     0,     0,   927,   700,     0,
     -84,   568,     0,   760,     0,   570,     0,   568,     0,     0,
       0,   570,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   568,     0,   -84,   -84,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   570,     0,     0,     0,     0,     0,
     570,     0,     0,   515,     0,   480,     0,     0,  -191,  -191,
    -191,  -191,  -191,     0,   570,  -191,  -191,  -191,  -191,     0,
       0,  -191,  -191,     0,  -191,  -191,  -191,     0,     0,  -191,
    -191,     0,     0,     0,     0,     0,  -191,     0,  -191,  -191,
    -191,  -191,  -191,  -191,     0,     0,  -191,     0,     0,     0,
    -191,  -191,     0,  -191,  -191,  -191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -191,  -191,     0,  -191,  -191,
       0,     0,  -191,     0,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,     0,  -191,   703,  -191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -191,  -191,  -191,     0,     0,     0,
    -191,     0,     0,  -191,  -191,  -191,     0,     0,  -191,     0,
    -191,  -191,     0,     0,   789,     0,     0,    55,   167,   168,
     169,   170,     0,     0,   171,    82,     0,    83,     0,     0,
      84,   172,     0,  -191,  -191,    85,     0,     0,     0,    86,
       0,     0,     0,     0,     0,   173,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   174,   175,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    92,   176,     0,
       0,    93,     0,   704,   177,     0,   178,     0,   179,    94,
      95,   180,     0,    96,     0,     0,     0,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,     0,     0,  -112,  -112,
       0,     0,     0,     0,     0,   181,     0,     0,     0,     0,
       0,     0,   182,   183,   184,     0,     0,   185,     0,   186,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   539,   167,   168,
     169,   170,   188,   189,   171,    82,   540,    83,   929,     0,
      84,   541,     0,   542,   543,    85,   930,     0,   544,    86,
       0,     0,     0,     0,     0,   173,     0,   545,    87,   546,
     547,   548,   549,     0,     0,    88,     0,     0,     0,   550,
      89,     0,   174,   175,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   551,    91,     0,    92,   176,     0,
       0,    93,     0,   552,   177,   553,   178,   554,   179,    94,
      95,   555,   556,    96,   557,     0,   276,     0,   558,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   366,     0,   181,     0,     0,     0,   559,
       0,     0,   182,   183,   184,     0,     0,   185,     0,   186,
     187,     0,     0,   539,   167,   168,   169,   170,     0,     0,
     171,    82,   540,    83,     0,     0,    84,   541,     0,   542,
     543,    85,   188,   189,   544,    86,     0,     0,     0,     0,
       0,   173,     0,   545,    87,   546,   547,   548,   549,     0,
       0,    88,     0,     0,     0,   550,    89,     0,   174,   175,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     551,    91,     0,    92,   176,     0,     0,    93,     0,   552,
     177,   553,   178,   554,   179,    94,    95,   555,   556,    96,
     557,     0,   276,     0,   558,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   366,
       0,   181,     0,     0,     0,   559,     0,     0,   182,   183,
     184,     0,     0,   185,     0,   186,   187,     0,     0,    55,
     167,   168,   169,   170,     0,     0,   171,    82,   540,    83,
       0,     0,    84,   541,     0,     0,   543,    85,   188,   189,
     544,    86,     0,     0,     0,     0,     0,   173,     0,   545,
      87,   546,   547,   548,   549,     0,     0,    88,     0,     0,
       0,   550,    89,     0,   174,   175,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   551,    91,     0,    92,
     176,     0,     0,    93,     0,   552,   177,   553,   178,   554,
     179,    94,    95,   555,   556,    96,   557,     0,     0,     0,
     558,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   366,     0,   181,     0,     0,
       0,   559,     0,     0,   182,   183,   184,     0,     0,   185,
       0,   186,   187,     0,    55,   167,   168,   169,   170,     0,
       0,   171,    82,     0,    83,     0,     0,    84,   172,     0,
       0,     0,    85,     0,   188,   189,    86,     0,     0,     0,
       0,     0,   173,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,     0,   174,
     175,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    92,   176,   456,     0,    93,     0,
       0,   177,     0,   178,     0,   179,    94,    95,   180,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     394,   716,   181,     0,     0,     0,     0,     0,     0,   182,
     183,   184,     0,     0,   185,     0,   186,   187,     0,    55,
     167,   168,   169,   170,     0,     0,   171,    82,     0,    83,
       0,     0,    84,   172,     0,     0,     0,    85,     0,   188,
     189,    86,     0,     0,     0,     0,     0,   173,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   174,   175,    90,     0,   414,     0,
       0,     0,     0,     0,     0,   415,     0,    91,     0,    92,
     176,     0,     0,    93,     0,     0,   177,     0,   178,     0,
     179,    94,    95,   180,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,   167,   168,   169,   170,
       0,     0,   171,    82,     0,    83,     0,   181,    84,   172,
       0,     0,     0,    85,   182,   183,   184,    86,     0,   185,
       0,   186,   187,   173,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,     0,
     174,   175,    90,     0,   188,   189,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,   176,   456,     0,    93,
       0,     0,   177,     0,   178,     0,   179,    94,    95,   180,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   394,     0,   181,     0,     0,     0,     0,     0,     0,
     182,   183,   184,     0,     0,   185,     0,   186,   187,     0,
      55,   167,   168,   169,   170,     0,     0,   171,    82,     0,
      83,     0,     0,    84,   172,     0,     0,     0,    85,     0,
     188,   189,    86,     0,     0,     0,     0,     0,   173,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,     0,   174,   175,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,   176,     0,     0,    93,     0,     0,   177,     0,   178,
       0,   179,    94,    95,   180,     0,    96,     0,     0,   283,
       0,     0,     0,     0,     0,     0,    55,   167,   168,   169,
     170,     0,     0,   171,    82,     0,    83,     0,   181,    84,
     172,     0,     0,     0,    85,   182,   183,   184,    86,     0,
     185,     0,   186,   187,   173,     0,     0,    87,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
       0,   174,   175,    90,     0,   188,   189,     0,     0,     0,
       0,     0,     0,     0,    91,     0,    92,   176,     0,     0,
      93,     0,     0,   177,     0,   178,     0,   179,    94,    95,
     180,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   500,     0,     0,     0,     0,
       0,   182,   183,   184,     0,     0,   185,     0,   186,   187,
       0,    55,   167,   168,   169,   170,     0,     0,   171,    82,
       0,    83,     0,     0,    84,   172,     0,     0,     0,    85,
       0,   188,   189,    86,     0,     0,     0,     0,     0,   173,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,     0,   174,   175,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,   176,     0,     0,    93,     0,     0,   177,     0,
     178,     0,   179,    94,    95,   180,     0,    96,     0,     0,
     276,     0,     0,     0,     0,     0,     0,    55,   167,   168,
     169,   170,     0,     0,   171,    82,     0,    83,     0,   181,
      84,   172,     0,     0,     0,    85,   182,   183,   184,    86,
       0,   185,     0,   186,   187,   173,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,   734,     0,
      89,  -325,   174,   175,    90,     0,   188,   189,     0,  -325,
       0,  -325,     0,     0,  -325,    91,     0,    92,   176,  -325,
       0,    93,     0,  -325,   177,     0,   178,     0,   179,    94,
      95,   180,  -325,    96,     0,     0,     0,     0,     0,  -325,
       0,     0,     0,     0,  -325,     0,     0,     0,  -325,     0,
    -325,     0,  -325,     0,     0,   181,     0,  -325,     0,  -325,
       0,  -325,   182,   183,   184,  -325,     0,   185,     0,   186,
     187,     0,     0,  -325,  -325,     0,     0,  -325,    59,     0,
    -325,   469,     0,     0,     0,     0,     0,     0,     0,    82,
       0,    83,   188,   189,    84,  -581,    60,   470,     0,    85,
    -408,    61,     0,    86,     0,    62,   471,   472,     0,     0,
       0,     0,    87,     0,     0,     0,     0,   473,     0,    88,
      63,     0,     0,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,     0,     0,     0,    93,    64,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,     0,
     474,    55,   167,   168,   169,   170,     0,     0,   171,    82,
       0,    83,     0,     0,    84,   172,     0,     0,     0,    85,
       0,     0,     0,    86,     0,   631,     0,     0,     0,   173,
       0,     0,    87,     0,   604,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,     0,   174,   175,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,   176,     0,     0,    93,   632,     0,   177,     0,
     178,     0,   179,    94,    95,   180,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   633,   634,   181,
       0,     0,   635,   636,   637,   638,   639,   640,   641,   642,
     643,     0,   644,   186,   187,     0,     0,     0,     0,     0,
       0,     0,   645,   646,     0,     0,   647,   648,   649,   650,
       0,   742,   651,   652,  -325,     0,     0,     0,     0,     0,
       0,     0,  -325,     0,  -325,     0,     0,  -325,     0,     0,
       0,     0,  -325,     0,     0,     0,  -325,     0,     0,     0,
    -321,     0,     0,     0,     0,  -325,     0,     0,     0,    33,
       0,     0,  -325,     0,     0,     0,     0,  -325,     0,     0,
       0,  -325,     0,  -325,     0,  -325,     0,     0,     0,     0,
    -325,    34,  -325,     0,  -325,     0,     0,     0,  -325,     0,
       0,     0,     0,     0,    35,     0,  -325,  -325,    36,    37,
    -325,     0,     0,  -325,    38,     0,    39,    40,    41,    42,
       0,     0,     0,    43,     0,     0,     0,    44,  -581,     0,
       0,     0,    59,  -408,     0,   469,     0,     0,     0,    45,
       0,     0,    46,    82,    47,    83,     0,     0,    84,     0,
      60,   470,     0,    85,     0,    61,     0,    86,     0,    62,
     471,   472,     0,     0,     0,     0,    87,     0,     0,     0,
       0,   473,     0,    88,    63,     0,     0,     0,    89,    55,
       0,     0,    90,     0,     0,     0,     0,    82,     0,    83,
       0,     0,    84,    91,     0,    92,     0,    85,     0,    93,
      64,    86,     0,     0,   517,     0,     0,    94,    95,     0,
      87,    96,     0,     0,   474,     0,     0,    88,     0,     0,
       0,     0,    89,    55,     0,     0,    90,     0,     0,     0,
       0,    82,     0,    83,     0,     0,    84,    91,     0,    92,
       0,    85,     0,    93,     0,    86,     0,     0,     0,     0,
       0,    94,    95,     0,    87,    96,     0,     0,   518,     0,
       0,    88,     0,     0,     0,     0,    89,    55,     0,     0,
      90,     0,     0,     0,     0,    82,     0,    83,     0,     0,
      84,    91,     0,    92,     0,    85,     0,    93,     0,    86,
       0,     0,     0,     0,     0,    94,    95,     0,    87,    96,
       0,     0,    97,     0,     0,    88,     0,     0,     0,     0,
      89,    55,     0,     0,    90,     0,     0,     0,     0,    82,
       0,    83,     0,     0,    84,    91,     0,    92,     0,    85,
       0,    93,     0,    86,     0,     0,     0,     0,     0,    94,
      95,     0,    87,    96,     0,     0,   276,     0,     0,    88,
       0,     0,     0,     0,    89,     0,    33,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,     0,     0,     0,    93,     0,     0,    34,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,     0,
     397,    35,     0,     0,     0,    36,    37,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,     0,     0,     0,
      43,     0,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,    46,
       0,    47
};

static const yytype_int16 yycheck[] =
{
       1,    76,   341,   348,     3,   101,   575,   279,   349,   349,
     531,    15,   108,   109,   351,   158,    15,   677,   520,   777,
      61,   690,   273,    61,   819,   820,   181,   253,    29,   136,
     284,   285,   139,     3,   522,    36,     3,    98,     4,   654,
      11,     3,     1,     4,     4,    10,   661,   108,   299,   854,
     855,     4,    81,   392,    15,     3,     4,   394,   133,     4,
      61,   136,    23,    98,   139,     4,   726,   142,   118,     1,
      16,    98,   560,   108,   869,    76,     3,   153,     4,     4,
      45,     4,    41,   159,   111,     1,     1,    33,   138,   340,
       4,   258,   897,   898,   663,     4,     4,     4,   619,     1,
      71,   139,     0,   674,   899,    71,     0,     4,     4,   724,
      61,     4,   102,   544,     4,   269,    97,   688,    71,   788,
     269,   111,   265,     4,   269,   106,   269,   629,   269,   269,
     100,     4,   133,   174,   269,   136,   174,   269,   139,   104,
     105,   142,   393,   181,   111,   111,   108,   373,   147,   111,
      98,   111,     1,   152,   102,   409,   658,   269,   827,   158,
       1,   268,    98,   111,   833,   481,   111,   322,   323,   927,
     135,   136,   111,   174,   106,   250,   252,   982,   983,    52,
     181,   108,     1,   279,   111,   111,   111,     1,   111,   984,
     106,   106,   288,   268,   270,   271,   954,   111,    71,     1,
      98,   103,   111,   111,   111,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   111,   111,   131,   132,   111,   721,
     722,   111,   376,   174,   139,   140,   141,   376,   544,     1,
     181,   376,   236,   376,     1,   376,   376,   236,   111,   280,
     281,   376,   280,   281,   376,     1,     1,     1,    97,   250,
      98,     1,   251,     4,   103,   103,    97,   106,     1,   575,
       1,     1,   103,     1,   376,   106,   265,   268,     1,   929,
     269,   608,     3,     1,     1,     1,     1,     1,    97,   280,
     281,     4,   108,    97,   103,   326,   327,   106,   326,   327,
       1,     1,   106,   630,   120,    97,     4,    97,   102,    99,
      51,   103,     4,   344,   106,   346,   344,   111,   346,   102,
     477,   103,    98,   654,   654,   103,   100,    68,   111,   111,
     661,   661,   106,   111,   365,   326,   327,   365,   103,   280,
     281,    53,    15,    55,   106,   108,   111,   858,    60,   106,
      23,    97,    97,   344,   547,   346,   549,   663,   103,   552,
     106,   106,   106,    98,    97,   354,   106,   102,   674,   358,
     103,   109,   110,   106,   365,   106,   106,    98,   106,    98,
       4,   102,   101,   106,   541,   326,   327,   376,   106,   106,
     106,   106,   106,   724,   724,   129,   130,   554,   555,   556,
     108,   102,   102,   344,   963,   346,   100,    99,   102,   920,
     921,   102,   100,     4,   108,   100,    97,   108,   106,   840,
     841,   106,   103,     4,   365,   456,   120,   848,   456,   850,
     851,   100,   100,    98,   102,   466,   101,   106,   466,   470,
     471,     1,   470,   471,    97,     4,   328,   329,   330,   331,
     103,   482,   714,   481,   482,   876,   107,   182,   183,   184,
     185,   186,   187,   188,   189,   456,   100,   139,   140,   141,
     891,    98,   106,    98,   101,   466,   101,   812,   100,   470,
     471,   812,   812,   474,   475,     1,   517,   133,   134,   517,
     481,   482,   523,   524,    98,   523,   524,   101,    98,    98,
     111,   101,   101,    19,   107,   108,    98,   928,    24,   101,
      98,   542,    28,   101,   542,   456,    98,   603,    98,   101,
     606,   101,   111,   112,   113,   466,   517,    43,   834,   470,
     471,   522,   523,   524,   840,   841,   957,   111,   112,   113,
     481,   482,   848,   111,   850,   851,   106,   575,   100,    98,
     102,   542,   101,    69,    98,    98,   977,   101,   101,     3,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     4,
     876,   131,   132,    97,   102,    99,   517,    95,    96,   139,
     140,   141,   523,   524,   575,   891,    97,    97,    99,    99,
      97,    97,    99,    99,   319,   320,   321,   322,   323,   324,
     325,   542,   107,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   107,   339,   944,   945,    97,   107,    99,
     926,   107,   928,   780,   781,   100,   102,   102,   934,   715,
      97,   481,    99,   106,   575,   663,    93,    94,    93,    94,
     671,   324,   325,   671,   675,     1,   674,   675,   144,   974,
     975,   957,   332,   333,   907,   908,     1,   963,   100,   100,
     688,    97,   100,    97,   114,   102,    97,   100,   108,   108,
     102,   977,   663,   662,   102,   102,   102,   137,   103,   101,
     671,    97,   407,   674,   675,   181,   115,    14,   103,   119,
      17,    97,     4,   101,   544,   852,   120,   688,    97,   120,
     481,   732,   733,   860,   732,   733,   737,    29,   101,   737,
       4,    98,   103,   870,   871,    42,     4,     4,     4,     4,
      47,    49,   663,   120,   101,   575,   101,   103,    97,   103,
     671,   103,   103,   674,   675,    62,   103,    64,   103,    61,
       1,   732,   733,   107,   103,    52,   737,   688,    52,    76,
      77,   101,   103,    80,   101,   744,   481,    97,   102,   748,
     749,   103,    98,   544,    86,    87,    88,    89,    90,    91,
      92,   496,   102,   498,   499,   500,   100,   273,   843,   275,
      98,   102,   102,   100,     4,   101,   282,   102,   102,   946,
     947,   732,   733,   102,   575,   481,   737,    98,   103,   102,
       4,   120,   100,   299,    85,    97,     1,   303,   965,   966,
     120,   102,   801,   663,     4,   843,   100,   806,   100,   544,
      99,   101,   318,   100,   674,   103,    97,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   103,    98,   131,   132,
     103,   102,   338,   103,   340,   106,   102,   108,    97,   103,
     575,   481,   843,   103,   350,   351,   103,   103,   544,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   103,   101,
     131,   132,   103,   103,   107,   864,   865,   101,   139,   140,
     141,    94,   663,    93,   915,   100,   120,   915,   613,   575,
       1,   103,   101,   674,   101,   103,     4,   393,   394,    27,
     103,     4,   100,   102,    96,   102,   934,    95,   101,    94,
      93,   106,   103,   107,   544,   481,   103,   101,   414,   415,
     715,   107,   103,   103,   915,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   103,   963,   131,   132,   663,   408,
     507,   130,   403,   934,   415,   575,   174,   174,   481,   674,
     334,   940,   941,   335,   943,   336,   339,   337,   934,   656,
     667,   728,   834,   932,   934,   782,   462,   926,   553,   889,
       9,   782,   963,   875,   915,   121,   475,   663,   544,     4,
     147,    49,   376,   349,   834,   348,   744,   748,   674,   749,
     840,   841,    31,   934,   871,   865,   864,   265,   848,   943,
     850,   851,   354,   358,    24,    44,   142,   164,    -1,   575,
      49,   544,   878,   509,    -1,    54,    -1,    56,    57,    58,
      59,    -1,   963,    -1,    63,    -1,   876,    -1,    67,    -1,
      -1,    -1,    -1,   663,    -1,    -1,    -1,    -1,    -1,    -1,
      79,   891,   575,    82,   674,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   834,    -1,   551,    -1,   553,    -1,   840,
     841,    -1,    -1,    -1,    -1,    -1,    -1,   848,    -1,   850,
     851,    -1,    -1,    -1,    -1,    -1,   926,    -1,   928,    -1,
      -1,    -1,    -1,    -1,   934,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   876,    -1,   663,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   957,   674,   834,
     891,    -1,   608,   963,    -1,   840,   841,    -1,    -1,    -1,
     616,    -1,    -1,   848,    -1,   850,   851,   977,    -1,    -1,
     663,    -1,    -1,    -1,   630,    -1,    -1,    -1,    -1,    -1,
      -1,   674,    -1,    -1,    -1,   926,    -1,   928,   834,    -1,
      -1,   876,    -1,   934,   840,   841,    -1,    -1,    -1,    -1,
      -1,    -1,   848,    -1,   850,   851,   891,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   957,    -1,    -1,    -1,
      -1,   677,   963,   679,   680,    -1,    -1,   683,    -1,    -1,
     876,    -1,   688,    -1,   690,    -1,   977,    -1,    -1,    -1,
      -1,   926,    -1,   928,   834,   891,    -1,    -1,    -1,   934,
     840,   841,    -1,    -1,    -1,    -1,    -1,    -1,   848,    -1,
     850,   851,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     726,    -1,   957,    -1,    -1,    -1,    -1,    -1,   963,    -1,
     926,    -1,   928,    -1,    -1,    -1,   876,    -1,   934,    -1,
      -1,    -1,   977,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   891,    -1,    -1,    -1,    -1,    -1,    -1,   834,    -1,
      -1,   957,    -1,    -1,   840,   841,    -1,   963,    -1,    -1,
      -1,    -1,   848,     1,   850,   851,    -1,    -1,    -1,    -1,
      -1,   977,   788,    -1,    -1,    -1,   926,    -1,   928,    -1,
      -1,   834,    -1,    -1,   934,    -1,    -1,   840,   841,    -1,
     876,    -1,    -1,    -1,    -1,   848,    -1,   850,   851,    -1,
      -1,    -1,    -1,    -1,    -1,   891,    -1,   957,    -1,    -1,
      -1,   827,    -1,   963,    -1,    -1,    -1,   833,    -1,    -1,
      -1,    -1,    -1,   876,    -1,    -1,    -1,   977,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   891,    -1,
     926,    -1,   928,    -1,    -1,    -1,    -1,    -1,   934,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   874,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,   883,   106,    -1,
     108,   957,    -1,   926,    -1,   928,    -1,   963,    -1,    -1,
      -1,   934,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   977,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   957,    -1,    -1,    -1,    -1,    -1,
     963,    -1,    -1,   929,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,   977,    11,    12,    13,    14,    -1,
      -1,    17,    18,    -1,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    83,     1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,
     116,   117,    -1,    -1,     1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,   139,   140,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,   106,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,   131,   132,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,     8,   139,   140,    11,    12,    13,    14,    15,    -1,
      17,    18,    -1,    20,    21,    22,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    83,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,
     117,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    13,    14,    -1,    -1,    17,    18,    -1,    20,
      21,    22,   139,   140,    25,    26,    -1,    -1,    -1,    -1,
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
      -1,    -1,    17,    18,    -1,    -1,    21,    22,   139,   140,
      25,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,    -1,
      -1,   106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,
      -1,   116,   117,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,    22,    -1,   139,   140,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    64,    65,    66,    -1,    68,    -1,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,   139,
     140,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,   102,    17,    18,
      -1,    -1,    -1,    22,   109,   110,   111,    26,    -1,   114,
      -1,   116,   117,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    -1,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    -1,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    -1,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,
     139,   140,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    -1,    14,    -1,   102,    17,
      18,    -1,    -1,    -1,    22,   109,   110,   111,    26,    -1,
     114,    -1,   116,   117,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,   117,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,   139,   140,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,   102,
      17,    18,    -1,    -1,    -1,    22,   109,   110,   111,    26,
      -1,   114,    -1,   116,   117,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,     1,    -1,
      47,     4,    49,    50,    51,    -1,   139,   140,    -1,    12,
      -1,    14,    -1,    -1,    17,    62,    -1,    64,    65,    22,
      -1,    68,    -1,    26,    71,    -1,    73,    -1,    75,    76,
      77,    78,    35,    80,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,
      53,    -1,    55,    -1,    -1,   102,    -1,    60,    -1,    62,
      -1,    64,   109,   110,   111,    68,    -1,   114,    -1,   116,
     117,    -1,    -1,    76,    77,    -1,    -1,    80,     1,    -1,
      83,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,   139,   140,    17,    98,    19,    20,    -1,    22,
     103,    24,    -1,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,
      83,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    32,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,   117,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    68,    73,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   102,
      -1,    -1,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,   119,   116,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,    -1,   133,   134,   135,   136,
      -1,     1,   139,   140,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    14,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
       0,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,     9,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    -1,    53,    -1,    55,    -1,    -1,    -1,    -1,
      60,    31,    62,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    76,    77,    48,    49,
      80,    -1,    -1,    83,    54,    -1,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    98,    -1,
      -1,    -1,     1,   103,    -1,     4,    -1,    -1,    -1,    79,
      -1,    -1,    82,    12,    84,    14,    -1,    -1,    17,    -1,
      19,    20,    -1,    22,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,     4,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    17,    62,    -1,    64,    -1,    22,    -1,    68,
      69,    26,    -1,    -1,    29,    -1,    -1,    76,    77,    -1,
      35,    80,    -1,    -1,    83,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,     4,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,
      -1,    22,    -1,    68,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    35,    80,    -1,    -1,    83,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,     4,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,
      17,    62,    -1,    64,    -1,    22,    -1,    68,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    35,    80,
      -1,    -1,    83,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,     4,    -1,    -1,    51,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    62,    -1,    64,    -1,    22,
      -1,    68,    -1,    26,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,     9,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,
      83,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   274,   275,   284,   285,   286,   287,     4,   146,
     281,   282,     0,   276,   278,   288,   289,   290,   294,   344,
     354,   371,   378,   379,   380,   381,   390,   285,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   291,   292,
     293,   276,   289,   381,    98,     4,   281,   108,   281,     1,
      19,    24,    28,    43,    69,   396,   293,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   382,   383,   384,     1,
     106,   279,    12,    14,    17,    22,    26,    35,    42,    47,
      51,    62,    64,    68,    76,    77,    80,    83,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   281,
     309,     4,     4,     4,     4,   147,   281,   385,   386,   388,
     107,   100,   283,   111,   111,     3,   159,   159,   159,     4,
     107,   372,   373,   107,   356,   357,   107,   345,   346,   107,
     297,   298,    97,    99,   102,   387,   389,   275,   106,   280,
     102,   153,   100,   374,   147,   299,   355,   299,   100,   347,
     155,   299,   295,   296,    99,   386,   391,     5,     6,     7,
       8,    11,    18,    32,    49,    50,    65,    71,    73,    75,
      78,   102,   109,   110,   111,   114,   116,   117,   139,   140,
     144,   145,   151,   155,   163,   164,   165,   166,   167,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   208,   281,   277,   288,   276,   308,   311,
     312,   313,   314,   315,   317,   276,   375,   376,   377,   280,
      97,   100,   358,   276,   290,   304,   305,   306,   307,   318,
     325,   329,   332,   337,   348,   349,   350,   280,    97,   100,
     300,     1,   391,    98,   108,   102,    83,   148,   149,   157,
     102,   102,   102,    83,   151,   155,   195,   208,   281,   190,
     190,   190,   190,   190,   190,   190,   190,   108,   108,    98,
     108,   102,   103,    97,   139,   140,   141,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   131,   132,   207,   111,
     112,   113,   109,   110,   129,   130,    10,    45,   104,   105,
     135,   136,   133,   134,   114,   119,   115,   137,   118,   138,
      98,   102,   101,    53,    55,    60,   316,   103,    97,    97,
     120,   120,     4,   101,    97,   147,   276,   359,   360,   361,
     362,   364,   366,   369,   280,   291,   100,   106,   213,   310,
     101,   350,   299,   276,   290,   301,   302,   303,   304,   305,
     306,   318,   325,   329,   332,   337,   341,   280,   280,   171,
       4,   208,   102,    98,   100,   351,   148,    83,   148,   208,
     111,   159,   192,   193,   194,   192,   192,   111,   103,   159,
       4,     4,   171,     4,    53,    60,   161,   162,   168,   208,
     208,     4,   208,   190,   190,   190,   190,   195,   195,   196,
     196,   148,   148,   197,   197,   197,   197,   198,   198,   199,
     200,   201,   202,   208,   203,   171,   168,   148,   148,     1,
     106,   312,   313,   314,   315,   317,    66,   208,   223,   224,
     351,   223,   120,   101,   377,    49,   363,   101,   361,     4,
      20,    29,    30,    40,    83,   148,   330,   333,   334,   336,
       1,   214,   291,   101,   303,    99,   103,   168,   171,   223,
     352,   353,   103,   103,   103,   103,   103,   194,   103,   103,
     103,   187,   192,    99,   160,   208,   160,    97,   103,   107,
      99,   103,     4,     4,   148,   208,   209,    29,    83,   148,
     102,   148,   148,    52,    52,   281,     4,    52,    71,   221,
     222,   281,   282,   331,   394,   106,   213,   342,   101,     4,
      13,    18,    20,    21,    25,    34,    36,    37,    38,    39,
      46,    61,    70,    72,    74,    78,    79,    81,    85,   106,
     148,   151,   155,   167,   174,   175,   177,   188,   189,   190,
     206,   211,   212,   213,   215,   216,   217,   218,   219,   220,
     225,   228,   230,   231,   232,   239,   240,   241,   244,   245,
     253,   254,   255,   256,   257,   258,   260,   261,   266,   267,
     268,   269,   271,   281,   117,   103,    99,   101,    97,   190,
     190,   190,   190,   103,   162,   208,    98,   148,     4,     4,
      71,   308,     4,   226,   227,   221,   281,   148,   148,   102,
     120,    32,    73,   104,   105,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   129,   130,   133,   134,   135,
     136,   139,   140,   335,    98,     1,    97,   106,   102,   394,
      71,    98,   100,   107,     1,   106,   213,   148,     1,   106,
     212,   102,     1,   102,   397,   397,     4,    15,    23,   397,
     102,   208,   259,   397,   259,   213,   213,   213,   102,     1,
     102,     4,   221,     1,   106,     1,   106,     1,   106,     1,
     106,     1,   106,     1,   106,     1,   106,   101,   211,     1,
     106,     1,   106,     4,   158,   159,   101,   223,   190,   208,
       4,   102,   102,   394,    98,   103,   120,     1,    97,   106,
     106,   392,   102,   102,     1,   308,   223,   102,   311,   314,
     317,   222,     1,   308,   100,   311,   276,   319,   322,   323,
     211,   226,    85,   148,   167,   174,   175,   177,   188,   189,
     206,   220,   229,   246,   249,   252,   148,     1,   106,   209,
       1,   106,   208,   210,   208,     1,   106,   208,     1,   106,
      16,    33,   262,   263,   265,   208,   220,   270,   242,     1,
     210,   102,   179,   351,   158,    99,   100,   106,   370,   308,
     308,   100,   311,   338,   209,   227,   100,   148,   148,   103,
     103,   148,    97,    99,   103,   103,   319,    99,    93,    94,
     101,   276,   320,   323,   276,   321,   322,   102,     4,   272,
     273,     1,   106,   399,    97,     4,     1,   106,     1,   103,
     398,   103,   398,   102,   213,   213,   263,   265,   103,   210,
     103,   103,   103,   101,   103,   103,   276,   368,    99,   107,
     339,   340,   276,   326,   327,   328,     4,     4,     4,   101,
     395,   395,   395,   210,   120,    97,   103,   210,   247,   250,
     229,     1,    41,   400,   212,   212,   100,   233,   147,   155,
     212,     1,   212,   212,   213,   370,   370,    93,    94,   101,
     394,    11,    71,   106,   213,   343,    95,    96,   101,   276,
     328,   276,   327,   103,   103,    97,   103,   395,   106,   213,
     324,   324,   103,   208,   273,   212,   399,   208,    27,    15,
      23,   234,   235,   236,   237,   238,     4,   264,   264,   212,
     370,   370,   395,   100,   102,   102,   393,   393,   393,   148,
     394,   394,     1,   106,   248,   251,   252,   398,   212,   209,
     107,   101,   236,   216,   238,   103,   103,   243,   276,   276,
     365,   368,   168,   168,   213,   213,     4,   398,   212,   107,
     213,   213,    94,    93,   101,   103,   103,   392,   392,   103,
     212,   370,   370,   395,   367
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
     293,   293,   293,   295,   294,   296,   294,   297,   297,   298,
     298,   298,   299,   299,   300,   301,   301,   302,   302,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   304,
     304,   305,   305,   306,   307,   307,   307,   307,   308,   308,
     308,   308,   309,   309,   310,   310,   311,   311,   312,   312,
     313,   313,   314,   315,   315,   316,   316,   316,   317,   318,
     319,   319,   320,   320,   321,   321,   322,   323,   324,   324,
     325,   325,   326,   326,   327,   328,   329,   330,   330,   331,
     332,   333,   333,   334,   334,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   336,   336,   338,
     337,   339,   339,   340,   340,   341,   342,   342,   343,   343,
     344,   345,   345,   346,   347,   348,   348,   349,   349,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   351,   351,
     352,   352,   353,   353,   355,   354,   356,   356,   357,   358,
     359,   359,   360,   360,   361,   361,   361,   361,   362,   362,
     363,   363,   365,   364,   367,   366,   368,   368,   368,   368,
     369,   370,   370,   371,   372,   372,   373,   374,   374,   375,
     375,   376,   376,   377,   377,   378,   378,   379,   380,   380,
     381,   381,   382,   382,   383,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   385,   385,   386,   387,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   396,   397,
     397,   398,   398,   399,   399,   400,   400
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
       1,     1,     1,     0,     8,     0,     8,     0,     1,     2,
       2,     4,     1,     3,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     5,     5,     2,     7,     7,     7,     7,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     4,     3,     3,     0,     1,     1,     4,     9,
       2,     2,     0,     1,     0,     1,     5,     5,     1,     1,
       6,    10,     2,     2,     5,     5,     8,     5,     5,     2,
       4,     1,     1,     7,    10,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,     0,
       9,     0,     1,     5,     5,     7,     1,     1,     1,     1,
       7,     0,     1,     2,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       0,     1,     1,     3,     0,     8,     0,     1,     2,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     8,     8,
       0,     1,     0,    10,     0,    13,     3,     3,     6,     6,
       6,     1,     2,     7,     0,     1,     2,     3,     4,     0,
       1,     1,     3,     2,     4,     9,     9,     1,     1,     2,
       6,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     0,     1,     1,
       3,     0,     0,     0,     0,     0,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 2710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 120 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 121 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 122 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 124 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 134 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 138 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);(yyval.r.base) = new string("bool");}
#line 2818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);(yyval.r.base) = new string("decimal");}
#line 2836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("sbyte");}
#line 2842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("byte");}
#line 2848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("short");}
#line 2854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("ushort");}
#line 2860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("int");}
#line 2866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("uint");}
#line 2872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("long");}
#line 2878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("ulong");}
#line 2884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("char");}
#line 2890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("float");}
#line 2896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("double");}
#line 2902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("object");}
#line 2908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("string");}
#line 2914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[-1].r.known_type);(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = new string("");}
#line 2938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 231 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 250 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 254 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 257 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 258 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 261 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 281 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 285 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 288 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 293 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 321 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 332 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 333 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 334 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 335 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 346 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 347 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 348 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 371 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 381 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 403 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 426 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 427 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 457 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 461 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 465 "yacc.y" /* yacc.c:1646  */
    { SPL->add_scope(); }
#line 3838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);  SPL->endScope();}
#line 3844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 466 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 486 "yacc.y" /* yacc.c:1646  */
    { l.a("declaration_statement",1,1);}
#line 3904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 487 "yacc.y" /* yacc.c:1646  */
    { l.a("declaration_statement",1,1);}
#line 3910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 491 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),false,(yyvsp[0].r.line_no),(yyvsp[0].r.col_no)) ;
	}
#line 3920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 499 "yacc.y" /* yacc.c:1646  */
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 504 "yacc.y" /* yacc.c:1646  */
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
				  (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 511 "yacc.y" /* yacc.c:1646  */
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[0].r.str)) ; 
		  }
#line 3946 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 515 "yacc.y" /* yacc.c:1646  */
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[-2].r.str));
		   }
#line 3954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 520 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 521 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 529 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),true,(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no)) ;
  }
#line 3987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 536 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",1);
  		(yyval.r.identifiers) = new queue<string>();
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
  }
#line 3997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 542 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",2);
	  	(yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));	
  }
#line 4007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 549 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);(yyval.r.identifier) = new string((yyvsp[-2].r.str));}
#line 4013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 559 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 565 "yacc.y" /* yacc.c:1646  */
    { l.a("expression_statement",1,1);}
#line 4061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 566 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 568 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 569 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 579 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 605 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 608 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 616 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 627 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 627 "yacc.y" /* yacc.c:1646  */
    {  }
#line 4283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 631 "yacc.y" /* yacc.c:1646  */
    { l.a("do_statement",2,1);}
#line 4301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);}
#line 4307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 649 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 686 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 701 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 704 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 705 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 710 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 719 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 728 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 734 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 738 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 742 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 749 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 752 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 768 "yacc.y" /* yacc.c:1646  */
    {SPL->addNamespace(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);SPL->endScope();}
#line 4691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 778 "yacc.y" /* yacc.c:1646  */
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[0].r.str));
		  }
#line 4711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 782 "yacc.y" /* yacc.c:1646  */
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[-1].r.base)) + string((yyvsp[0].r.str)));
		}
#line 4719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[-1].r.str)) + ".");}
#line 4725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[-2].r.base) + string((yyvsp[-1].r.str)) + ".");}
#line 4731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 809 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 836 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
#line 4848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 841 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 4857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 848 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 854 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
#line 4883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
#line 4889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
#line 4895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
#line 4901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
#line 4907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 866 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
#line 4913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 867 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 4919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
#line 4925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
#line 4931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 870 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
#line 4937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
#line 4943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
#line 4949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
#line 4955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
#line 4961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 885 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 888 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 4975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 890 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 4989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 898 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 4995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 899 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 902 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();}
#line 5007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 903 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 904 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);(yyval.r.bases) = new queue<string>();}
#line 5019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 908 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 5029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 914 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[-2].r.bases);
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 5039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 922 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 5045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 926 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 5051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 927 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 931 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 934 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 935 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 937 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 938 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 939 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 940 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 941 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 942 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 943 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 947 "yacc.y" /* yacc.c:1646  */
    {		
		         l.a("constant_declaration",4);
	          SPL->addFieldConst(*(yyvsp[-4].r.modifiers),string("CONST"),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
		  }
#line 5138 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 952 "yacc.y" /* yacc.c:1646  */
    {
		    l.a("constant_declaration",4,1);
         SPL->addFieldConst(*(yyvsp[-4].r.modifiers),string("CONST"),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));

		 }
#line 5148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 960 "yacc.y" /* yacc.c:1646  */
    {
		        SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
  		      l.a("field_declaration",4);
	      }
#line 5157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 965 "yacc.y" /* yacc.c:1646  */
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
        }
#line 5166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 972 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}
#line 5172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 977 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type));
      }
#line 5180 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 981 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);
      }
#line 5188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 990 "yacc.y" /* yacc.c:1646  */
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
#line 5196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 994 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5204 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 998 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[-2].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[-2].r.types_ids))->front()); ((yyvsp[-2].r.types_ids))->pop();}
            while(!((yyvsp[0].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[0].r.types_ids))->front()); ((yyvsp[0].r.types_ids))->pop();}
        }
#line 5223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1010 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1014 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1015 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1028 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
      }
#line 5265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1035 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1040 "yacc.y" /* yacc.c:1646  */
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
       }
#line 5283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1047 "yacc.y" /* yacc.c:1646  */
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[0].r.base) ;
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1055 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[0].r.base);
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1065 "yacc.y" /* yacc.c:1646  */
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));  
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no); 
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1076 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base) ;
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1084 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base);
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1094 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1096 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1100 "yacc.y" /* yacc.c:1646  */
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1113 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1116 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1117 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1120 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1124 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1125 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1137 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1140 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1144 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1148 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1152 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1158 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1164 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1175 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1178 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1202 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1207 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1208 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1211 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1212 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1214 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1218 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {
  SPL->addMethod(*(yyvsp[-4].r.modifiers),"",string((yyvsp[-3].r.str)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);
  }
#line 5681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);SPL->endScope();}
#line 5687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1228 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1229 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1232 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1233 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1252 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1253 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1256 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1257 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1262 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1265 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1266 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1269 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1272 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1275 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1276 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5783 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1279 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5789 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1280 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1283 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5801 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1284 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5807 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1285 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5813 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1286 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5819 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1287 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5825 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1288 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5831 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1289 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5837 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1290 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5843 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1292 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1297 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5855 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1298 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5861 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1301 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1302 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5873 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1305 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5879 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1306 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5885 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addInterface(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));		
  }
#line 5893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1315 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);SPL->endScope();}
#line 5899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1319 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 5905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1320 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1323 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1326 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1329 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1330 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1333 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1334 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1337 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1338 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1339 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1340 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1345 "yacc.y" /* yacc.c:1646  */
    {
     l.a("interface_method_declaration",5);
	 SPL->addMethod(*(yyvsp[-6].r.modifiers),*(yyvsp[-5].r.base),string((yyvsp[-4].r.str)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),(yyvsp[-5].r.known_type));
	 SPL->endScope();
    }
#line 5981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1351 "yacc.y" /* yacc.c:1646  */
    {
	  l.a("interface_method_declaration",4);
	  SPL->addMethod(*(yyvsp[-6].r.modifiers),"VOID",string((yyvsp[-4].r.str)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),1);
	  SPL->endScope();
    }
#line 5991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1358 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0); (yyval.r.modifiers) = new queue<string>();}
#line 5997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1359 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);(yyval.r.modifiers) = new queue<string>() ; (yyval.r.modifiers)->push("NEW");}
#line 6003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1365 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1365 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1372 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1372 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1376 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1377 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1378 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1379 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1382 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1387 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1388 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1393 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1396 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1397 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1400 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1403 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1404 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1407 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1408 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1411 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1412 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1415 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1416 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1421 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1422 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1427 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1430 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1431 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1434 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1435 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1438 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1439 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1442 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1445 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1446 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1447 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1448 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1449 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1450 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1451 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1452 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1453 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1456 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1457 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1460 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1463 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1464 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1467 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1470 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1477 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1480 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1483 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1486 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1489 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1492 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1500 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0);}
#line 6339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1501 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0,1);yyclearin;}
#line 6345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1504 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 6351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1505 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyclearin;}
#line 6357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1508 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 6363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1509 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyclearin;}
#line 6369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 1512 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0);}
#line 6375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 1513 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0,1);}
#line 6381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 1516 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0);}
#line 6387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 1517 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0,1);}
#line 6393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6397 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1522 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




