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
#define YYLAST   3279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  257
/* YYNRULES -- Number of rules.  */
#define YYNRULES  594
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  992

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
     953,   961,   965,   969,   973,   974,   979,   982,   986,   990,
     999,  1000,  1003,  1004,  1011,  1016,  1023,  1028,  1035,  1043,
    1053,  1064,  1072,  1083,  1084,  1085,  1088,  1099,  1105,  1106,
    1109,  1110,  1113,  1114,  1117,  1123,  1129,  1130,  1133,  1134,
    1140,  1141,  1144,  1150,  1156,  1162,  1164,  1167,  1171,  1174,
    1175,  1178,  1179,  1182,  1183,  1184,  1185,  1186,  1187,  1188,
    1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,  1203,  1206,  1207,  1211,  1210,  1217,
    1218,  1221,  1222,  1238,  1241,  1242,  1245,  1246,  1251,  1254,
    1255,  1258,  1261,  1264,  1265,  1268,  1269,  1272,  1273,  1274,
    1275,  1276,  1277,  1278,  1279,  1281,  1286,  1287,  1290,  1291,
    1294,  1295,  1301,  1300,  1308,  1309,  1312,  1315,  1318,  1319,
    1322,  1323,  1326,  1327,  1328,  1329,  1333,  1339,  1347,  1348,
    1354,  1351,  1361,  1357,  1365,  1366,  1367,  1368,  1371,  1376,
    1377,  1382,  1385,  1386,  1389,  1392,  1393,  1396,  1397,  1400,
    1401,  1404,  1405,  1410,  1411,  1416,  1419,  1420,  1423,  1424,
    1427,  1428,  1431,  1434,  1435,  1436,  1437,  1438,  1439,  1440,
    1441,  1442,  1445,  1446,  1449,  1452,  1453,  1456,  1459,  1466,
    1469,  1472,  1475,  1478,  1481,  1489,  1490,  1493,  1494,  1497,
    1498,  1501,  1502,  1505,  1506
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

#define YYPACT_NINF -819

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-819)))

#define YYTABLE_NINF -580

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,    75,   102,   176,   -33,  -819,  -819,  -819,   178,   122,
    -819,   323,  -819,  1419,  -819,   275,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   176,  -819,   285,  -819,  -819,   447,
    -819,  -819,   241,  -819,  -819,  -819,   447,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,   328,  3195,
    -819,   974,  -819,  -819,   476,   357,   141,  -819,  -819,  -819,
    -819,  1680,   469,   472,   491,   499,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,   447,  -819,   380,  -819,
    -819,   407,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,   405,  -819,   415,
    -819,   555,  -819,  -819,  -819,  -819,  -819,  -819,   555,   555,
     566,   478,   481,   497,   518,  -819,  -819,    29,  -819,   496,
    -819,   -33,   528,  -819,  -819,  -819,  -819,  -819,  -819,   535,
     768,   544,  -819,   447,  -819,  -819,   447,   546,  -819,   355,
    -819,  -819,   313,  -819,  2716,  -819,  -819,   -51,  -819,  -819,
     312,  -819,   297,   528,  -819,   551,   552,   551,   316,   528,
     569,   551,   577,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
     284,   539,  -819,  3116,  -819,   567,  -819,  -819,   578,   580,
    2429,  2716,  2716,  2716,  2716,  2716,  2716,  2716,  2716,  -819,
    -819,   571,   579,   296,   584,  -819,  -819,  -819,  -819,   587,
     591,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   341,  -819,  -819,  -819,   595,  -819,
     461,   251,   418,    41,   483,   582,   572,   588,   560,   -66,
    -819,  -819,  -819,   362,   598,   345,   375,   601,   610,   611,
    -819,   590,  -819,   592,   707,   623,   628,  -819,  -819,   447,
     374,   528,  3195,  -819,  -819,  -819,  -819,   170,  -819,  -819,
    -819,  -819,  -819,   629,   410,  -819,  -819,   447,   414,   528,
    -819,  2716,   727,  2716,   405,   229,   634,   237,  3116,  3160,
    2716,    52,    60,    77,   479,   631,   309,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,   731,   733,  2716,   735,  2228,
    -819,  2716,  -819,  -819,   736,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  2716,  2716,  2716,  2716,
    2716,  2716,  2716,  2716,  3116,  3116,  2716,  2716,  2716,  2716,
    2716,  2716,  2716,  2716,  2716,  2716,  2716,  2716,  2716,  2228,
    -819,  -819,  3116,  -819,  3116,   166,   176,   176,  2314,  2314,
     621,  -819,   416,  -819,   694,   643,   429,  -819,  -819,  -819,
    -819,  -819,  -819,  3072,  1517,  -819,  -819,  -819,  -819,  -819,
     551,  3195,  -819,   648,   435,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,   208,  -819,   649,  2228,
    2716,  2314,  -819,     2,   190,   222,   650,  -819,  -819,   651,
      52,  -819,   653,   654,  2515,  2802,    52,  -819,  -819,   364,
    -819,  2716,  2716,   661,  -819,   658,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   461,   461,   251,   251,   415,   415,
     418,   418,   418,   418,    41,    41,   483,   582,   572,   588,
     656,   560,   504,   672,    39,    58,  -819,  -819,   611,  -819,
     590,  -819,   592,  3116,  -819,  -819,  -819,  -819,  -819,  2716,
    -819,  -819,  -819,   585,  -819,  -819,   135,  3116,  3116,   724,
     725,    62,    36,  -819,   220,  -819,  -819,   677,  1882,  1378,
    -819,  -819,  -819,  -819,   680,   513,  -819,   679,   687,  -819,
    -819,  -819,  -819,  2716,  -819,  2716,  2716,  2716,  -819,   683,
    -819,  -819,  -819,  -819,  2228,  -819,  2716,  -819,  -819,  -819,
    -819,   -54,  -819,  -819,  3116,    80,    23,   312,    89,    91,
    3116,  3116,   685,   325,  2811,   690,   238,  -819,   688,    33,
     691,   692,  -819,  -819,  -819,  -819,   522,   181,   432,  3116,
     188,  1998,   689,   212,   212,   114,   212,   696,  2716,   212,
    2716,   693,   521,   693,   698,   266,  -819,   107,   571,   579,
    1201,   455,   978,  1246,    84,   132,   595,   216,  -819,  -819,
    -819,   695,  1882,  -819,  -819,  -819,   226,   244,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
      38,   790,  -819,   555,  -819,  2113,  -819,  -819,  -819,  -819,
    2716,  -819,  -819,  2716,   110,   700,   703,   708,   704,   697,
     279,  -819,     3,  -819,   288,   311,  2948,  2314,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
     710,   176,  -819,   805,  -819,  2992,   718,  -819,   176,   176,
    1882,  -819,  -819,  -819,    89,  -819,  -819,   734,  3116,  -819,
    -819,  2630,  3116,   260,  2716,   272,  2716,  2716,  -819,   280,
    2716,   281,    65,  -819,  -819,  2630,  -819,  1636,   701,   723,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
     720,   726,   555,  -819,  -819,  -819,   728,   326,   312,   312,
     729,   176,  -819,  2716,  -819,   819,  -819,  -819,   737,  3116,
    3116,   721,   722,  -819,  3116,   525,  -819,  -819,  -819,   730,
     732,   176,   529,   446,   739,   448,   454,  -819,   741,   740,
     111,   138,   182,   213,   233,   245,   261,  -819,  -819,  -819,
     282,  -819,   744,   112,  -819,  -819,   283,  -819,  -819,  -819,
     194,   743,  -819,  -819,   194,  -819,  -819,   533,   693,    65,
    -819,  -819,  -819,  -819,   748,  2716,   749,   750,   751,  -819,
    -819,  -819,  -819,   746,  -819,  -819,   758,   761,   176,   541,
     759,  -819,  -819,   176,   113,   115,  -819,  -819,   118,   176,
    -819,  -819,  -819,   764,  -819,  -819,  -819,  -819,   742,  -819,
    -819,   738,  -819,  -819,  2716,   752,   334,  -819,  -819,  -819,
    2716,  2716,    55,  -819,  -819,  -819,  -819,  1998,  1998,   769,
     355,  -819,  -819,  -819,  -819,  1998,   827,  1998,  1998,   693,
    -819,   326,   326,   557,   767,  -819,    59,   336,  -819,   559,
     770,   176,   176,   771,   772,   344,  -819,   348,   348,  -819,
     777,  2716,   866,  1998,  -819,   282,  -819,  -819,  -819,  -819,
    2716,   846,  -819,   406,  -819,   877,   877,  -819,  1998,  -819,
    -819,  -819,  -819,  -819,   326,   326,  -819,   782,   784,   785,
    -819,  -819,  -819,  -819,  -819,  -819,   788,  -819,   793,  -819,
    -819,  -819,  3116,  -819,  -819,  -819,  -819,  -819,  -819,   290,
    -819,  -819,  -819,  2716,   194,  1998,  2716,   783,   791,   406,
    -819,  1766,  -819,  -819,   792,   795,  -819,   456,   458,  -819,
     176,  2228,  2228,   693,   693,  -819,   121,  -819,  -819,  -819,
    -819,   194,  -819,   744,  1998,  -819,   786,  -819,  -819,  -819,
    1882,  -819,   693,   693,  -819,   797,   801,  -819,   798,   822,
     823,  -819,  -819,   824,  1998,  -819,  -819,  -819,  -819,   326,
     326,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     323,     0,     0,   325,   324,   338,   340,   341,   333,     0,
      10,     0,     1,   355,   348,   325,   346,   349,   350,   351,
     352,   353,   354,   326,   555,   556,     0,   339,   335,     0,
     345,   344,   334,   359,   360,   361,     0,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,     0,   356,
     357,   355,   347,   557,   560,   333,     0,   336,   329,   586,
     585,     0,     0,     0,     0,     0,   358,   565,   570,   563,
     564,   566,   567,   568,   569,   571,     0,   561,     0,   343,
     342,     0,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   411,    15,   410,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   542,   514,   489,   375,   577,    11,     0,   572,   575,
     562,   323,   331,    38,    37,    44,    40,    39,    41,     0,
       0,     0,   543,     0,   512,   515,     0,     0,   490,     0,
     373,   376,     0,   580,    75,   574,   576,   325,   332,   330,
     325,   544,   325,   331,   380,   516,     0,   491,   325,   331,
     377,   378,     0,   580,   573,   558,     3,     4,     5,     6,
       0,     0,     9,     0,     7,     0,    79,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       2,     0,     0,    97,    52,    51,    55,    56,    57,     0,
      76,    58,    59,    99,   100,    60,    84,    54,    61,    63,
      64,   101,   113,    62,   105,   114,   111,   112,   127,   104,
     131,   134,   137,   144,   147,   149,   151,   153,   155,   157,
     171,   172,    77,    98,     0,   325,   423,     0,   407,   408,
     414,   418,   416,   419,     0,     0,   548,   549,   541,     0,
     325,   331,   355,   505,   497,   498,   499,     0,   500,   501,
     502,   503,   504,     0,   325,   495,   488,     0,   325,   331,
     559,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,   121,   121,   121,   131,     0,    98,   108,   109,   110,
      95,   102,   103,   106,   107,     0,     0,     0,     0,    71,
     578,     0,    82,    83,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
     337,   425,     0,   424,     0,     0,   325,   325,     0,     0,
     551,   545,   325,   381,   528,     0,   325,   520,   522,   523,
     525,   524,   513,     0,     0,   413,   412,   401,   492,   496,
     379,   355,   396,     0,   325,   385,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   374,     0,    80,     0,    71,
       0,   508,    87,     0,     0,     0,     0,   126,   125,     0,
     122,   123,     0,     0,     0,    65,   121,    67,    68,     0,
      66,     0,     0,    72,    46,     0,    48,    78,    94,   159,
     128,   129,   130,   127,   132,   133,   135,   136,   143,   142,
     139,   138,   140,   141,   145,   146,   148,   150,   152,   154,
       0,   156,     0,     0,     0,     0,   554,   553,   409,   415,
       0,   417,     0,     0,   209,   421,   211,   210,   422,     0,
     546,   550,   529,     0,   517,   521,   333,     0,     0,     0,
       0,     0,     0,   583,     0,   449,   450,     0,   194,     0,
     382,   386,    81,    92,     0,     0,   510,     0,   509,    96,
      91,    90,    93,     0,   124,     0,     0,     0,   115,     0,
      73,    50,    45,    49,     0,    69,     0,    74,    70,   426,
     420,     0,   173,   552,     0,     0,     0,   325,     0,     0,
       0,     0,     0,   207,     0,     0,     0,   205,   583,     0,
       0,     0,   485,   484,   448,   193,   333,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
     296,     0,     0,     0,     0,     0,   198,     0,    16,    17,
       0,     0,     0,     0,     0,     0,     0,     0,   196,   177,
     178,     0,   195,   179,   175,   176,     0,     0,   180,   181,
     238,   239,   182,   189,   253,   254,   255,   256,   183,   279,
     280,   281,   282,   283,   184,   185,   186,   187,   188,   190,
      98,     0,    85,    42,   506,     0,   120,   118,   119,   116,
       0,    47,   158,     0,     0,     0,   583,     0,     0,     0,
       0,   214,     0,   581,     0,     0,     0,     0,   460,   459,
     471,   472,   453,   454,   461,   462,   463,   464,   465,   455,
     456,   466,   467,   468,   469,   470,   474,   473,   457,   458,
       0,   325,   400,     0,   399,     0,     0,   447,   325,   325,
       0,   285,   284,   311,     0,   287,   286,     0,     0,   588,
     587,   266,     0,     0,     0,     0,     0,     0,   297,     0,
       0,     0,     0,   312,   257,     0,   260,     0,   207,   204,
     224,   217,   227,   220,   228,   221,   225,   218,   229,   222,
     230,   223,   226,   219,   192,   197,   202,   200,   203,   201,
       0,    88,    42,   507,   511,   117,     0,     0,   325,   325,
       0,   325,   477,     0,   398,     0,   397,   438,     0,     0,
       0,     0,     0,   208,     0,     0,   418,   419,   206,     0,
       0,   325,     0,     0,     0,   325,   325,   199,   213,     0,
       0,    56,    99,   100,    84,   111,   112,   233,   272,   276,
       0,   267,   273,     0,   291,   288,     0,   293,   290,   174,
       0,     0,   295,   294,     0,   299,   298,     0,     0,   300,
     303,   301,   316,   315,     0,     0,     0,     0,     0,    86,
      89,    43,   212,     0,   539,   538,     0,     0,   325,     0,
     479,   216,   215,   325,     0,     0,   405,   403,     0,   325,
     445,   404,   402,     0,   446,   584,   584,   584,     0,   428,
     431,     0,   429,   433,     0,     0,     0,   318,   592,   591,
     268,     0,     0,   292,   289,   590,   589,     0,     0,     0,
       0,   307,   310,   304,   302,     0,     0,     0,     0,     0,
     540,     0,     0,     0,     0,   583,     0,     0,   480,     0,
       0,   325,   325,     0,     0,     0,   584,     0,     0,   444,
       0,     0,     0,     0,   274,     0,   269,   277,   594,   593,
       0,   240,   313,   244,   242,   308,   308,   314,     0,   259,
     258,   483,   527,   526,     0,     0,   584,     0,     0,     0,
     487,   486,   478,   582,   582,   582,     0,   440,     0,   441,
     476,   475,     0,   451,   427,   437,   436,   583,   583,     0,
     320,   319,   317,   270,     0,     0,     0,     0,     0,   245,
     246,     0,   249,   309,     0,     0,   261,   325,   325,   530,
     325,    71,    71,     0,     0,   439,     0,   434,   435,   264,
     263,     0,   271,   275,     0,   241,     0,   252,   243,   247,
     248,   250,     0,     0,   262,     0,     0,   531,     0,     0,
       0,   581,   581,     0,     0,   278,   251,   306,   305,     0,
       0,   584,   481,   482,   442,   443,   452,   265,   536,   537,
     532,   533
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -819,  -819,  -819,  -819,   -75,    30,   756,  -819,    21,  -819,
     766,  -819,   -29,  -819,   763,   189,   -99,   510,  -819,   428,
    -819,  -819,  -819,  -819,  -429,  -336,  -819,  -819,  -232,  -819,
    -819,    12,   137,  -819,   207,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   540,   317,   338,   586,  -819,  -252,
    -819,   534,  -156,   335,   195,   333,   608,   613,   614,   609,
     612,  -819,  -819,   356,  -819,   465,  -655,  -664,  -557,  -468,
    -249,  -819,  -819,    16,  -819,  -819,  -819,  -379,  -460,   298,
    -337,  -819,  -819,   286,   228,  -819,   123,  -819,  -819,  -819,
    -819,  -819,  -819,    26,  -819,    25,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,    34,
    -819,  -819,  -819,  -819,  -819,  -819,   408,  -819,  -819,  -819,
     183,    74,   184,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
      92,  -819,   840,     1,  -819,  -819,  -819,   -70,    -1,   493,
    -819,  -819,   963,  -819,  -819,   826,    -2,  -144,  -216,  -819,
     920,  -819,  -819,  -819,  -819,  -110,  -819,  -819,  -819,   596,
    -243,  -222,  -199,  -819,  -499,  -819,  -819,  -613,   630,  -341,
    -340,   633,  -819,  -330,  -194,   246,  -819,  -819,   232,   247,
     125,  -190,  -819,   127,   130,  -181,  -819,  -819,  -178,  -819,
    -819,  -819,  -819,  -176,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,   747,  -271,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,   638,  -819,  -819,
    -819,  -819,  -819,  -819,    56,  -819,  -818,  -819,  -819,  -819,
    -819,  -819,  -819,   645,  -819,  -819,  -819,   971,  -819,  -819,
    -819,  -819,   857,  -819,  -819,  -819,  -819,   837,  -298,  -229,
    -517,  -795,  -819,   -91,  -754,   126,  -819
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   189,   190,     9,    98,   557,   100,   101,   191,   103,
     104,   105,   192,   107,   108,   711,   398,   501,   413,   414,
     193,   194,   195,   196,   197,   415,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   789,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   399,
     400,   401,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   316,   416,   513,   770,   568,   569,
     570,   478,   571,   572,   573,   574,   575,   576,   526,   527,
     455,   456,   577,   620,   621,   578,   759,   579,   580,   581,
     884,   928,   929,   930,   931,   932,   582,   583,   584,   785,
     964,   585,   586,   760,   875,   951,   761,   876,   952,   762,
     587,   588,   589,   590,   591,   592,   679,   593,   594,   779,
     780,   934,   781,   595,   596,   597,   598,   784,   599,   826,
     827,     2,     3,   236,   234,    14,    81,   149,   233,    11,
     122,     4,     5,     6,     7,    15,    16,    17,    48,    49,
      50,    18,   162,   140,   141,   155,   269,   373,   374,   375,
     254,   255,   256,   257,   237,   110,   367,   238,   239,   240,
     241,   242,   344,   243,   258,   744,   819,   822,   745,   746,
     917,   259,   860,   861,   862,   260,   473,   530,   261,   474,
     475,   650,   476,   262,   800,   857,   858,   384,   534,   902,
      19,   137,   138,   159,   263,   264,   265,   457,   487,   488,
      20,   156,   134,   135,   251,   355,   356,   357,   358,   463,
     359,   967,   360,   991,   854,   361,   795,    21,   131,   132,
     153,   245,   246,   247,    22,    23,    24,    25,    76,    77,
      78,   117,   118,   145,   119,   146,    26,   165,   728,   943,
     531,   867,    65,   671,   837,   830,   880
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   115,   126,   443,    13,   449,   392,   450,   366,   127,
     128,   656,   458,    52,   253,   705,    51,   452,   618,   766,
     839,   868,   869,   787,   284,   376,   157,   616,    56,   161,
     402,   403,   106,   892,   893,    58,   363,    32,   735,   386,
     523,   125,   -11,   509,   613,   742,   377,  -579,     1,   560,
    -327,   324,   336,   484,   486,   125,   878,   124,   154,   622,
     109,   154,   510,   125,   154,   409,    55,   115,   801,   378,
     898,   914,   337,   667,   379,   116,   937,   938,   380,     8,
     125,   777,   102,   248,   615,   698,   325,   381,   524,   266,
     382,    99,   383,   619,   617,   523,   879,   689,   778,   720,
     653,   939,    12,   747,   657,   489,   442,   525,   799,   727,
     160,   688,   560,   124,   717,   825,   832,   863,   673,   864,
     253,   846,   865,    30,   372,   973,   142,   732,   143,   674,
     899,   376,   116,   700,   124,   116,   338,   675,   116,  -231,
     339,   116,    79,   560,   106,   326,   327,   124,    51,   -11,
     124,   283,   377,   244,   499,   479,   740,   370,   485,   252,
     870,   988,   989,   397,   424,   425,   874,   446,   295,   124,
     954,   397,   109,   123,   353,   378,   328,   329,   127,   286,
     379,   362,   661,  -234,   380,   296,   990,   406,   397,   665,
     699,   123,   154,   381,   102,   835,   382,   974,   383,   385,
     124,   282,   124,   275,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,   669,  -235,  -111,  -111,   702,   124,   796,
     797,   124,   124,   124,   124,   533,   124,   706,    31,   124,
     372,   560,   124,    52,  -232,  -231,    51,   517,   701,   652,
     125,  -231,   751,    28,  -231,   708,  -236,    80,   116,   106,
     106,   354,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,   764,  -237,  -112,  -112,   252,   116,   686,   714,   371,
     364,   956,   447,   767,  -579,  -322,   365,   109,   109,  -234,
     724,   772,   775,   828,   833,  -234,    28,   662,  -234,   663,
     733,   949,   758,   490,   666,   106,   106,   836,    29,   102,
     102,   123,   682,   683,   684,   301,   783,   482,   393,   395,
    -235,   736,   125,   106,   670,   106,  -235,    55,   736,  -235,
     364,   737,   703,   109,   109,   491,   532,    32,   737,    59,
    -232,   389,   707,   124,   106,   653,  -232,   391,   897,  -232,
     124,   109,  -236,   109,   654,   102,   102,    60,  -236,    57,
     709,  -236,    61,   244,   428,   429,    62,   354,  -237,    55,
     320,   321,   109,   102,  -237,   102,   765,  -237,   687,   881,
     882,    63,   444,  -579,   445,   371,   725,   887,   768,   889,
     890,   736,   271,    54,   102,   726,   773,   776,   829,   834,
     729,   737,   272,   472,   297,  -579,   950,    64,  -547,   124,
     947,   948,   751,   705,   298,   922,    90,   338,   560,   560,
    -579,   339,   163,   730,  -579,  -406,   560,  -493,   560,   560,
     936,   926,   124,    93,   106,  -333,   793,  -333,   341,   927,
     342,   872,   794,    28,   106,   343,   364,   873,   106,   106,
     790,   912,   900,  -579,   560,   627,  -328,   913,   364,   559,
     106,    55,   109,   672,   915,   676,   692,   955,   680,   560,
     338,   301,   109,   500,   339,    28,   109,   109,   449,   736,
     522,   528,  -579,   111,   102,  -518,   112,   600,   109,   737,
     302,   303,   304,   511,   102,   106,   975,   120,   102,   102,
     561,   106,   106,   516,   751,   113,   560,   518,   519,   558,
     102,   128,   560,   114,   712,    67,   987,   121,  -579,   472,
     106,  -494,  -579,   109,  -579,  -383,   123,   460,   623,   109,
     109,   430,   431,   432,   433,   560,   124,  -579,   841,   842,
    -519,   560,   364,  -579,   273,   102,  -384,    68,   109,   815,
     816,   102,   102,   559,   614,   560,  -579,   322,   323,  -430,
     624,   625,  -579,   561,  -579,  -432,  -579,  -534,   125,  -535,
     102,   693,    69,    70,    71,    72,    73,    74,    75,   664,
     129,   600,   317,   318,   319,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   561,   130,   -99,   -99,   133,    55,
     404,   318,   319,   558,   -99,   -99,   -99,    82,   144,    83,
     891,   301,    84,   507,   136,   969,   970,    85,   901,   232,
     301,    86,   603,   712,   514,   562,   330,   331,   916,   916,
      87,   364,   809,   280,   810,   139,   809,    88,   814,   660,
      28,   559,    89,   364,   148,   840,    90,   150,   809,   106,
     855,   273,   559,   106,   152,   285,   158,    91,   249,    92,
     894,   895,   250,    93,   903,   904,   559,   426,   427,   600,
     743,    94,    95,   434,   435,    96,   267,   109,   515,   278,
     600,   109,   561,   984,   985,   944,   945,   268,   562,   295,
     279,   558,   280,   752,   600,   563,   299,   296,   301,   102,
     300,   333,   558,   102,   971,   972,   332,   335,   750,   340,
     106,   106,   763,   334,   345,   106,   558,   346,   347,   562,
     348,   350,   349,   977,   978,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   351,   352,   314,   315,   109,   109,
     368,   387,   390,   109,   405,   407,   232,   408,   388,   410,
     418,   459,   743,   462,   464,   396,   818,   821,   563,   480,
     102,   102,   483,   492,   493,   102,   495,   496,   504,   804,
     805,   505,   232,   506,   808,   885,   417,   287,   288,   289,
     290,   291,   292,   293,   294,   508,   520,   521,   535,   563,
     604,   419,    83,   602,   605,    84,   610,   626,   651,   658,
     655,   668,   659,   364,   710,   564,   704,   562,   677,   853,
     685,   440,   718,   232,   859,   719,   721,   722,   753,   688,
      88,   886,   734,   454,   454,    89,   565,   723,   741,   749,
     653,   627,   788,   619,   806,   807,   391,   792,   888,   798,
      91,   815,    92,   811,   567,   812,   816,   803,   725,   116,
     817,   831,   824,   752,    94,    95,   838,   850,    96,   561,
     561,   845,   847,   848,   849,   232,   454,   561,   564,   561,
     561,   851,   906,   908,   852,   866,   856,   563,   896,   883,
     825,   905,   871,   925,   910,   911,   502,   502,   754,   565,
     919,   933,   940,   106,   904,   561,   941,   942,   903,   564,
     957,   979,   958,   976,   980,   962,   151,   567,   963,   981,
     561,   791,   559,   420,   421,   422,   423,   423,   423,   423,
     565,   109,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   503,   423,   512,   982,   983,   986,   567,   276,
     600,   559,   611,   102,   494,   752,   277,   561,   965,   966,
     436,   853,   946,   561,   439,   498,   437,   960,   438,   441,
     748,   738,   558,   802,   877,   959,   961,   953,   681,   600,
     935,   147,   843,   844,   921,   529,   561,    27,   753,    66,
     481,   612,   561,   235,   562,   562,   448,   564,   823,   694,
     451,   558,   562,    33,   562,   562,   561,   813,   755,   909,
     420,   907,   820,   918,   465,    53,   968,   461,   565,   164,
     270,   923,     0,     0,     0,    34,     0,     0,     0,   756,
     562,   369,     0,   678,     0,   678,   567,     0,    35,     0,
       0,     0,    36,    37,     0,   562,     0,   757,    38,     0,
      39,    40,    41,    42,     0,     0,     0,    43,   754,     0,
       0,    44,     0,     0,   563,   563,     0,     0,     0,     0,
       0,     0,   563,    45,   563,   563,    46,     0,    47,     0,
     753,     0,   562,     0,   566,     0,     0,     0,   562,     0,
     454,     0,     0,     0,     0,     0,     0,     0,   716,   606,
     563,   607,   608,   609,   695,     0,     0,     0,     0,     0,
       0,   562,   454,     0,     0,   563,     0,   562,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,  -100,
    -100,   562,     0,     0,     0,     0,     0,  -100,  -100,  -100,
       0,     0,     0,     0,     0,     0,     0,   566,     0,     0,
     754,     0,   563,     0,     0,     0,     0,     0,   563,   512,
       0,   769,   771,     0,     0,   774,     0,     0,   755,     0,
     782,     0,   769,     0,   564,   564,     0,     0,   566,     0,
       0,   563,   564,     0,   564,   564,     0,   563,     0,   756,
       0,     0,     0,     0,     0,   565,   565,     0,     0,     0,
       0,   563,     0,   565,     0,   565,   565,   757,   512,     0,
     564,     0,     0,   567,   567,     0,   715,     0,     0,     0,
       0,   567,   690,   567,   567,   564,     0,     0,     0,     0,
       0,   565,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   565,     0,     0,   567,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     755,     0,   564,     0,   567,     0,   566,   696,   564,     0,
     769,     0,     0,     0,     0,     0,     0,   566,     0,     0,
       0,   756,     0,   565,     0,     0,     0,     0,     0,   565,
       0,   564,     0,     0,     0,     0,     0,   564,     0,   757,
       0,   567,     0,     0,     0,     0,     0,   567,     0,   769,
       0,   564,   565,     0,     0,   769,     0,     0,   565,   -56,
       0,     0,     0,   -56,     0,     0,     0,   691,     0,   -56,
     567,     0,   565,     0,     0,     0,   567,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     567,     0,   -56,   -56,     0,     0,   920,     0,     0,     0,
     -56,   -56,   -56,     0,   -84,   924,     0,     0,   -84,     0,
       0,     0,   697,     0,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,   -84,   -84,    59,
       0,     0,   466,     0,     0,   -84,   -84,   -84,     0,     0,
      82,   512,    83,     0,     0,    84,     0,    60,   467,     0,
      85,     0,    61,     0,    86,     0,    62,   468,   469,     0,
       0,     0,     0,    87,     0,     0,     0,   566,   470,  -321,
      88,    63,     0,   566,   566,    89,     0,     0,    33,    90,
       0,   566,     0,   566,   566,     0,     0,     0,     0,     0,
      91,     0,    92,     0,     0,     0,    93,    64,     0,     0,
      34,     0,     0,     0,    94,    95,     0,     0,    96,   566,
       0,   471,     0,    35,     0,     0,     0,    36,    37,     0,
       0,     0,     0,    38,   566,    39,    40,    41,    42,     0,
       0,     0,    43,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,   601,     0,     0,    45,     0,
       0,    46,     0,    47,     0,     0,     0,     0,     0,   566,
       0,   566,     0,     0,     0,     0,     0,   566,   477,     0,
       0,  -191,  -191,  -191,  -191,  -191,     0,     0,  -191,  -191,
    -191,  -191,     0,     0,  -191,  -191,     0,  -191,  -191,  -191,
     566,     0,  -191,  -191,     0,     0,   566,     0,     0,  -191,
       0,  -191,  -191,  -191,  -191,  -191,  -191,     0,     0,  -191,
     566,     0,     0,  -191,  -191,     0,  -191,  -191,  -191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -191,  -191,
       0,  -191,  -191,     0,     0,  -191,     0,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,     0,
    -191,     0,  -191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -191,  -191,  -191,
       0,     0,     0,  -191,     0,     0,  -191,  -191,  -191,     0,
       0,  -191,     0,  -191,  -191,     0,     0,   786,     0,     0,
      55,   166,   167,   168,   169,     0,     0,   170,    82,     0,
      83,     0,     0,    84,   171,     0,  -191,  -191,    85,     0,
       0,     0,    86,     0,     0,     0,     0,     0,   172,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    55,   173,   174,    90,     0,     0,
       0,     0,    82,     0,    83,     0,     0,    84,    91,     0,
      92,   175,    85,     0,    93,     0,    86,   176,     0,   177,
       0,   178,    94,    95,   179,    87,    96,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   180,     0,
       0,     0,    91,     0,    92,   181,   182,   183,    93,     0,
     184,     0,   185,   186,     0,     0,    94,    95,     0,     0,
      96,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     536,   166,   167,   168,   169,   187,   188,   170,    82,   537,
      83,   926,     0,    84,   538,     0,   539,   540,    85,   927,
       0,   541,    86,     0,     0,     0,     0,     0,   172,     0,
     542,    87,   543,   544,   545,   546,     0,     0,    88,     0,
       0,     0,   547,    89,     0,   173,   174,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   548,    91,     0,
      92,   175,     0,     0,    93,     0,   549,   176,   550,   177,
     551,   178,    94,    95,   552,   553,    96,   554,     0,   274,
       0,   555,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,     0,   180,     0,
       0,     0,   556,     0,     0,   181,   182,   183,     0,     0,
     184,     0,   185,   186,     0,     0,   536,   166,   167,   168,
     169,     0,     0,   170,    82,   537,    83,     0,     0,    84,
     538,     0,   539,   540,    85,   187,   188,   541,    86,     0,
       0,     0,     0,     0,   172,     0,   542,    87,   543,   544,
     545,   546,     0,     0,    88,     0,     0,     0,   547,    89,
       0,   173,   174,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   548,    91,     0,    92,   175,     0,     0,
      93,     0,   549,   176,   550,   177,   551,   178,    94,    95,
     552,   553,    96,   554,     0,   274,     0,   555,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   364,     0,   180,     0,     0,     0,   556,     0,
       0,   181,   182,   183,     0,     0,   184,     0,   185,   186,
       0,     0,    55,   166,   167,   168,   169,     0,     0,   170,
      82,   537,    83,     0,     0,    84,   538,     0,     0,   540,
      85,   187,   188,   541,    86,     0,     0,     0,     0,     0,
     172,     0,   542,    87,   543,   544,   545,   546,     0,     0,
      88,     0,     0,     0,   547,    89,     0,   173,   174,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   548,
      91,     0,    92,   175,     0,     0,    93,     0,   549,   176,
     550,   177,   551,   178,    94,    95,   552,   553,    96,   554,
       0,     0,     0,   555,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   364,     0,
     180,     0,     0,     0,   556,     0,     0,   181,   182,   183,
       0,     0,   184,     0,   185,   186,     0,    55,   166,   167,
     168,   169,     0,     0,   170,    82,     0,    83,     0,     0,
      84,   171,     0,     0,     0,    85,     0,   187,   188,    86,
       0,     0,     0,     0,     0,   172,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   173,   174,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    92,   175,   453,
       0,    93,     0,     0,   176,     0,   177,     0,   178,    94,
      95,   179,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   391,   713,   180,     0,     0,     0,     0,
       0,     0,   181,   182,   183,     0,     0,   184,     0,   185,
     186,     0,    55,   166,   167,   168,   169,     0,     0,   170,
      82,     0,    83,     0,     0,    84,   171,     0,     0,     0,
      85,     0,   187,   188,    86,     0,     0,     0,     0,     0,
     172,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   173,   174,    90,
       0,   411,     0,     0,     0,     0,     0,     0,   412,     0,
      91,     0,    92,   175,     0,     0,    93,     0,     0,   176,
       0,   177,     0,   178,    94,    95,   179,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,   166,
     167,   168,   169,     0,     0,   170,    82,     0,    83,     0,
     180,    84,   171,     0,     0,     0,    85,   181,   182,   183,
      86,     0,   184,     0,   185,   186,   172,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   173,   174,    90,     0,   187,   188,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   175,
     453,     0,    93,     0,     0,   176,     0,   177,     0,   178,
      94,    95,   179,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   391,     0,   180,     0,     0,     0,
       0,     0,     0,   181,   182,   183,     0,     0,   184,     0,
     185,   186,     0,    55,   166,   167,   168,   169,     0,     0,
     170,    82,     0,    83,     0,     0,    84,   171,     0,     0,
       0,    85,     0,   187,   188,    86,     0,     0,     0,     0,
       0,   172,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,     0,   173,   174,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,   175,     0,     0,    93,     0,     0,
     176,     0,   177,     0,   178,    94,    95,   179,     0,    96,
       0,     0,   281,     0,     0,     0,     0,     0,     0,    55,
     166,   167,   168,   169,     0,     0,   170,    82,     0,    83,
       0,   180,    84,   171,     0,     0,     0,    85,   181,   182,
     183,    86,     0,   184,     0,   185,   186,   172,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   173,   174,    90,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
     175,     0,     0,    93,     0,     0,   176,     0,   177,     0,
     178,    94,    95,   179,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   180,   497,     0,
       0,     0,     0,     0,   181,   182,   183,     0,     0,   184,
       0,   185,   186,     0,    55,   166,   167,   168,   169,     0,
       0,   170,    82,     0,    83,     0,     0,    84,   171,     0,
       0,     0,    85,     0,   187,   188,    86,     0,     0,     0,
       0,     0,   172,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,     0,   173,
     174,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    92,   175,     0,     0,    93,     0,
       0,   176,     0,   177,     0,   178,    94,    95,   179,     0,
      96,     0,     0,   274,     0,     0,     0,     0,     0,     0,
      55,   166,   167,   168,   169,     0,     0,   170,    82,     0,
      83,     0,   180,    84,   171,     0,     0,     0,    85,   181,
     182,   183,    86,     0,   184,     0,   185,   186,   172,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,     0,   173,   174,    90,     0,   187,
     188,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,   175,     0,     0,    93,     0,     0,   176,     0,   177,
       0,   178,    94,    95,   179,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,   166,   167,   168,
     169,     0,     0,   170,    82,     0,    83,     0,   180,    84,
     171,     0,     0,     0,    85,   181,   182,   183,    86,     0,
     184,     0,   185,   186,   172,     0,     0,    87,     0,     0,
       0,     0,     0,   628,    88,     0,     0,     0,     0,    89,
       0,   173,   174,    90,     0,   187,   188,     0,     0,     0,
       0,     0,     0,     0,    91,     0,    92,   175,     0,     0,
      93,     0,     0,   176,     0,   177,     0,   178,    94,    95,
     179,     0,    96,     0,   629,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   630,   631,     0,   185,   186,
     632,   633,   634,   635,   636,   637,   638,   639,   640,     0,
     641,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     642,   643,     0,     0,   644,   645,   646,   647,     0,   731,
     648,   649,  -325,     0,     0,     0,     0,     0,     0,     0,
    -325,     0,  -325,     0,     0,  -325,     0,     0,     0,     0,
    -325,     0,     0,     0,  -325,     0,     0,     0,     0,     0,
       0,     0,     0,  -325,     0,     0,     0,     0,     0,     0,
    -325,     0,     0,   739,     0,  -325,  -325,     0,     0,  -325,
       0,  -325,     0,  -325,  -325,     0,  -325,     0,  -325,  -325,
    -325,     0,  -325,     0,  -325,     0,  -325,     0,  -325,     0,
       0,     0,     0,     0,  -325,  -325,     0,  -325,  -325,     0,
       0,  -325,     0,     0,  -325,     0,     0,     0,     0,  -325,
       0,     0,     0,  -325,     0,  -325,  -579,  -325,     0,     0,
       0,  -406,  -325,     0,  -325,     0,  -325,     0,     0,     0,
    -325,     0,     0,     0,     0,     0,     0,     0,  -325,  -325,
       0,     0,  -325,    59,     0,  -325,   466,     0,     0,     0,
       0,     0,     0,     0,    82,     0,    83,     0,     0,    84,
    -579,    60,   467,     0,    85,  -406,    61,     0,    86,     0,
      62,   468,   469,     0,     0,     0,     0,    87,     0,     0,
       0,     0,   470,     0,    88,    63,     0,     0,     0,    89,
      55,     0,     0,    90,     0,     0,     0,     0,    82,     0,
      83,     0,     0,    84,    91,     0,    92,     0,    85,     0,
      93,    64,    86,     0,     0,     0,     0,     0,    94,    95,
       0,    87,    96,     0,     0,   471,     0,     0,    88,     0,
       0,     0,     0,    89,    55,     0,     0,    90,     0,     0,
       0,     0,    82,     0,    83,     0,     0,    84,    91,     0,
      92,     0,    85,     0,    93,     0,    86,     0,     0,     0,
       0,     0,    94,    95,     0,    87,    96,     0,     0,   274,
       0,     0,    88,     0,    33,     0,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    92,     0,    34,     0,    93,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,    35,
      96,     0,     0,   394,    37,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,     0,     0,     0,    43,     0,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,    46,     0,    47
};

static const yytype_int16 yycheck[] =
{
       1,    76,   101,   339,     3,   346,   277,   347,   257,   108,
     109,   528,   349,    15,   158,   572,    15,   347,   517,   674,
     774,   816,   817,   687,   180,   268,   136,     4,    29,   139,
     282,   283,    61,   851,   852,    36,   252,     4,   651,   271,
       4,     3,     4,     4,    98,   658,   268,    98,    81,   478,
     101,    10,   118,   389,   391,     3,     1,   111,   133,   519,
      61,   136,     4,     3,   139,   297,     4,   142,   723,   268,
      11,   866,   138,   541,   268,    76,   894,   895,   268,     4,
       3,    16,    61,   153,     4,     1,    45,   268,    52,   159,
     268,    61,   268,     4,    71,     4,    41,   557,    33,   616,
      97,   896,     0,   660,    71,   103,   338,    71,   721,   106,
     139,     4,   541,   111,     4,     4,     4,     4,     4,     4,
     264,   785,     4,     1,   268,     4,    97,   626,    99,    15,
      71,   374,   133,     1,   111,   136,    98,    23,   139,     1,
     102,   142,     1,   572,   173,   104,   105,   111,   147,   111,
     111,   180,   374,   152,   406,   371,   655,   267,   390,   158,
     824,   979,   980,   111,   320,   321,   830,     1,   108,   111,
     924,   111,   173,   111,   249,   374,   135,   136,   277,   180,
     374,   251,     1,     1,   374,   108,   981,   286,   111,     1,
     106,   111,   267,   374,   173,     1,   374,   951,   374,   269,
     111,   180,   111,   173,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     1,     1,   131,   132,     1,   111,   718,
     719,   111,   111,   111,   111,   474,   111,     1,   106,   111,
     374,   660,   111,   235,     1,    97,   235,   102,   106,     1,
       3,   103,   671,   108,   106,     1,     1,   106,   249,   278,
     279,   250,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     1,     1,   131,   132,   264,   267,     1,   605,   268,
     100,   926,   106,     1,    98,     0,   106,   278,   279,    97,
       1,     1,     1,     1,     1,   103,   108,   106,   106,   538,
     627,     1,   671,   103,   106,   324,   325,   103,   120,   278,
     279,   111,   551,   552,   553,    97,   685,    99,   278,   279,
      97,   651,     3,   342,   102,   344,   103,     4,   658,   106,
     100,   651,   106,   324,   325,   103,   106,     4,   658,     1,
      97,   102,   106,   111,   363,    97,   103,   100,   855,   106,
     111,   342,    97,   344,   106,   324,   325,    19,   103,   108,
     106,   106,    24,   352,   324,   325,    28,   356,    97,     4,
     109,   110,   363,   342,   103,   344,   106,   106,   102,   837,
     838,    43,   342,    98,   344,   374,    97,   845,   106,   847,
     848,   721,    98,    98,   363,   106,   106,   106,   106,   106,
     102,   721,   108,   363,    98,    98,   106,    69,   101,   111,
     917,   918,   831,   960,   108,   873,    51,    98,   837,   838,
      98,   102,    99,   102,    98,   103,   845,   101,   847,   848,
     888,    15,   111,    68,   453,   100,   100,   102,    53,    23,
      55,    97,   106,   108,   463,    60,   100,   103,   467,   468,
     711,    97,   106,    98,   873,   120,   101,   103,   100,   478,
     479,     4,   453,   544,   106,   546,     1,   925,   549,   888,
      98,    97,   463,    99,   102,   108,   467,   468,   809,   809,
     471,   472,    98,     4,   453,   101,     4,   478,   479,   809,
     139,   140,   141,   453,   463,   514,   954,   107,   467,   468,
     478,   520,   521,   463,   923,     4,   925,   467,   468,   478,
     479,   600,   931,     4,   603,    29,   974,   100,    98,   479,
     539,   101,    98,   514,    98,   101,   111,   101,   519,   520,
     521,   326,   327,   328,   329,   954,   111,    98,   777,   778,
     101,   960,   100,    98,   102,   514,   101,    61,   539,    93,
      94,   520,   521,   572,   514,   974,    98,   129,   130,   101,
     520,   521,    98,   541,    98,   101,    98,   101,     3,   101,
     539,   106,    86,    87,    88,    89,    90,    91,    92,   539,
       4,   572,   111,   112,   113,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   572,   107,   131,   132,   107,     4,
     111,   112,   113,   572,   139,   140,   141,    12,   102,    14,
     849,    97,    17,    99,   107,   941,   942,    22,   857,   144,
      97,    26,    99,   712,    29,   478,   133,   134,   867,   868,
      35,   100,    97,   102,    99,   107,    97,    42,    99,   107,
     108,   660,    47,   100,   106,   102,    51,   102,    97,   668,
      99,   102,   671,   672,   100,   180,   100,    62,    97,    64,
      93,    94,   100,    68,    95,    96,   685,   322,   323,   660,
     659,    76,    77,   330,   331,    80,    97,   668,    83,   102,
     671,   672,   660,   971,   972,   904,   905,   100,   541,   108,
     102,   660,   102,   671,   685,   478,   102,   108,    97,   668,
     103,   119,   671,   672,   943,   944,   114,   137,   668,   101,
     729,   730,   672,   115,   103,   734,   685,    97,    97,   572,
     120,     4,   120,   962,   963,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   101,    97,   131,   132,   729,   730,
     101,     4,    98,   734,   103,     4,   271,     4,   273,     4,
       4,   120,   741,    49,   101,   280,   745,   746,   541,   101,
     729,   730,   103,   103,   103,   734,   103,   103,    97,   729,
     730,   103,   297,   107,   734,   840,   301,   181,   182,   183,
     184,   185,   186,   187,   188,   103,    52,    52,   101,   572,
     101,   316,    14,   103,    97,    17,   103,   102,    98,    98,
     102,   102,   100,   100,     4,   478,   101,   660,   102,   798,
     102,   336,   102,   338,   803,   102,    98,   103,   671,     4,
      42,   840,   102,   348,   349,    47,   478,   120,   100,    85,
      97,   120,   102,     4,   103,   103,   100,    99,     1,   100,
      62,    93,    64,   103,   478,   103,    94,   100,    97,   840,
     101,    97,   102,   831,    76,    77,   103,   101,    80,   837,
     838,   103,   103,   103,   103,   390,   391,   845,   541,   847,
     848,   103,   861,   862,   103,   101,   107,   660,   101,   100,
       4,   101,   120,    27,   103,   103,   411,   412,   671,   541,
     103,     4,   100,   912,    96,   873,   102,   102,    95,   572,
     107,    94,   101,   107,    93,   103,   130,   541,   103,   101,
     888,   712,   931,   317,   318,   319,   320,   321,   322,   323,
     572,   912,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   412,   337,   459,   103,   103,   103,   572,   173,
     931,   960,   504,   912,   400,   923,   173,   925,   937,   938,
     332,   940,   912,   931,   335,   405,   333,   931,   334,   337,
     664,   653,   931,   725,   831,   929,   931,   923,   550,   960,
     886,   121,   779,   779,   872,   472,   954,     4,   831,    49,
     374,   506,   960,   147,   837,   838,   346,   660,   746,     1,
     347,   960,   845,     9,   847,   848,   974,   741,   671,   862,
     404,   861,   745,   868,   356,    24,   940,   352,   660,   142,
     163,   875,    -1,    -1,    -1,    31,    -1,    -1,    -1,   671,
     873,   264,    -1,   548,    -1,   550,   660,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,   888,    -1,   671,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    63,   831,    -1,
      -1,    67,    -1,    -1,   837,   838,    -1,    -1,    -1,    -1,
      -1,    -1,   845,    79,   847,   848,    82,    -1,    84,    -1,
     923,    -1,   925,    -1,   478,    -1,    -1,    -1,   931,    -1,
     605,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   613,   493,
     873,   495,   496,   497,   106,    -1,    -1,    -1,    -1,    -1,
      -1,   954,   627,    -1,    -1,   888,    -1,   960,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,   131,
     132,   974,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   541,    -1,    -1,
     923,    -1,   925,    -1,    -1,    -1,    -1,    -1,   931,   674,
      -1,   676,   677,    -1,    -1,   680,    -1,    -1,   831,    -1,
     685,    -1,   687,    -1,   837,   838,    -1,    -1,   572,    -1,
      -1,   954,   845,    -1,   847,   848,    -1,   960,    -1,   831,
      -1,    -1,    -1,    -1,    -1,   837,   838,    -1,    -1,    -1,
      -1,   974,    -1,   845,    -1,   847,   848,   831,   723,    -1,
     873,    -1,    -1,   837,   838,    -1,   610,    -1,    -1,    -1,
      -1,   845,     1,   847,   848,   888,    -1,    -1,    -1,    -1,
      -1,   873,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   888,    -1,    -1,   873,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     923,    -1,   925,    -1,   888,    -1,   660,     1,   931,    -1,
     785,    -1,    -1,    -1,    -1,    -1,    -1,   671,    -1,    -1,
      -1,   923,    -1,   925,    -1,    -1,    -1,    -1,    -1,   931,
      -1,   954,    -1,    -1,    -1,    -1,    -1,   960,    -1,   923,
      -1,   925,    -1,    -1,    -1,    -1,    -1,   931,    -1,   824,
      -1,   974,   954,    -1,    -1,   830,    -1,    -1,   960,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,   108,
     954,    -1,   974,    -1,    -1,    -1,   960,    -1,    -1,    -1,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     974,    -1,   131,   132,    -1,    -1,   871,    -1,    -1,    -1,
     139,   140,   141,    -1,    98,   880,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,   131,   132,     1,
      -1,    -1,     4,    -1,    -1,   139,   140,   141,    -1,    -1,
      12,   926,    14,    -1,    -1,    17,    -1,    19,    20,    -1,
      22,    -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,   831,    40,     0,
      42,    43,    -1,   837,   838,    47,    -1,    -1,     9,    51,
      -1,   845,    -1,   847,   848,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,
      31,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,   873,
      -1,    83,    -1,    44,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,   888,    56,    57,    58,    59,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    79,    -1,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,   923,
      -1,   925,    -1,    -1,    -1,    -1,    -1,   931,     1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      13,    14,    -1,    -1,    17,    18,    -1,    20,    21,    22,
     954,    -1,    25,    26,    -1,    -1,   960,    -1,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
     974,    -1,    -1,    46,    47,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
      -1,    -1,    -1,   106,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,    -1,    -1,     1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    -1,
      14,    -1,    -1,    17,    18,    -1,   139,   140,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,     4,    49,    50,    51,    -1,    -1,
      -1,    -1,    12,    -1,    14,    -1,    -1,    17,    62,    -1,
      64,    65,    22,    -1,    68,    -1,    26,    71,    -1,    73,
      -1,    75,    76,    77,    78,    35,    80,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    62,    -1,    64,   109,   110,   111,    68,    -1,
     114,    -1,   116,   117,    -1,    -1,    76,    77,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,   139,   140,    11,    12,    13,
      14,    15,    -1,    17,    18,    -1,    20,    21,    22,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
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
      18,    -1,    20,    21,    22,   139,   140,    25,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,   117,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    21,
      22,   139,   140,    25,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,   109,   110,   111,
      -1,    -1,   114,    -1,   116,   117,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    22,    -1,   139,   140,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,
      -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,
     117,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      22,    -1,   139,   140,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
     102,    17,    18,    -1,    -1,    -1,    22,   109,   110,   111,
      26,    -1,   114,    -1,   116,   117,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    -1,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      66,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,    -1,    -1,    -1,
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
      -1,    -1,    47,    -1,    49,    50,    51,    -1,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,   114,
      -1,   116,   117,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,    22,    -1,   139,   140,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    -1,
      14,    -1,   102,    17,    18,    -1,    -1,    -1,    22,   109,
     110,   111,    26,    -1,   114,    -1,   116,   117,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    -1,    14,    -1,   102,    17,
      18,    -1,    -1,    -1,    22,   109,   110,   111,    26,    -1,
     114,    -1,   116,   117,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    32,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,    -1,   116,   117,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,    -1,   133,   134,   135,   136,    -1,     1,
     139,   140,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,     1,    -1,    47,     4,    -1,    -1,    51,
      -1,    53,    -1,    55,    12,    -1,    14,    -1,    60,    17,
      62,    -1,    64,    -1,    22,    -1,    68,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    35,    80,    -1,
      -1,    83,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    53,    98,    55,    -1,    -1,
      -1,   103,    60,    -1,    62,    -1,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    80,     1,    -1,    83,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      98,    19,    20,    -1,    22,   103,    24,    -1,    26,    -1,
      28,    29,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,
       4,    -1,    -1,    51,    -1,    -1,    -1,    -1,    12,    -1,
      14,    -1,    -1,    17,    62,    -1,    64,    -1,    22,    -1,
      68,    69,    26,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,     4,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    12,    -1,    14,    -1,    -1,    17,    62,    -1,
      64,    -1,    22,    -1,    68,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    35,    80,    -1,    -1,    83,
      -1,    -1,    42,    -1,     9,    -1,    -1,    47,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    64,    -1,    31,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    44,
      80,    -1,    -1,    83,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    84
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
     102,     1,   307,   223,   102,   310,   313,   316,   222,     1,
     307,   100,   310,   276,   318,   321,   322,   211,   226,    85,
     148,   167,   174,   175,   177,   188,   189,   206,   220,   229,
     246,   249,   252,   148,     1,   106,   209,     1,   106,   208,
     210,   208,     1,   106,   208,     1,   106,    16,    33,   262,
     263,   265,   208,   220,   270,   242,     1,   210,   102,   179,
     350,   158,    99,   100,   106,   369,   307,   307,   100,   310,
     337,   209,   227,   100,   148,   148,   103,   103,   148,    97,
      99,   103,   103,   318,    99,    93,    94,   101,   276,   319,
     322,   276,   320,   321,   102,     4,   272,   273,     1,   106,
     398,    97,     4,     1,   106,     1,   103,   397,   103,   397,
     102,   213,   213,   263,   265,   103,   210,   103,   103,   103,
     101,   103,   103,   276,   367,    99,   107,   338,   339,   276,
     325,   326,   327,     4,     4,     4,   101,   394,   394,   394,
     210,   120,    97,   103,   210,   247,   250,   229,     1,    41,
     399,   212,   212,   100,   233,   147,   155,   212,     1,   212,
     212,   213,   369,   369,    93,    94,   101,   393,    11,    71,
     106,   213,   342,    95,    96,   101,   276,   327,   276,   326,
     103,   103,    97,   103,   394,   106,   213,   323,   323,   103,
     208,   273,   212,   398,   208,    27,    15,    23,   234,   235,
     236,   237,   238,     4,   264,   264,   212,   369,   369,   394,
     100,   102,   102,   392,   392,   392,   148,   393,   393,     1,
     106,   248,   251,   252,   397,   212,   209,   107,   101,   236,
     216,   238,   103,   103,   243,   276,   276,   364,   367,   168,
     168,   213,   213,     4,   397,   212,   107,   213,   213,    94,
      93,   101,   103,   103,   391,   391,   103,   212,   369,   369,
     394,   366
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
     304,   305,   306,   306,   306,   306,   307,   307,   307,   307,
     308,   308,   309,   309,   310,   310,   311,   311,   312,   312,
     313,   314,   314,   315,   315,   315,   316,   317,   318,   318,
     319,   319,   320,   320,   321,   322,   323,   323,   324,   324,
     325,   325,   326,   327,   328,   329,   329,   330,   331,   332,
     332,   333,   333,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   335,   335,   337,   336,   338,
     338,   339,   339,   340,   341,   341,   342,   342,   343,   344,
     344,   345,   346,   347,   347,   348,   348,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   350,   350,   351,   351,
     352,   352,   354,   353,   355,   355,   356,   357,   358,   358,
     359,   359,   360,   360,   360,   360,   361,   361,   362,   362,
     364,   363,   366,   365,   367,   367,   367,   367,   368,   369,
     369,   370,   371,   371,   372,   373,   373,   374,   374,   375,
     375,   376,   376,   377,   377,   378,   379,   379,   380,   380,
     381,   381,   382,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   384,   384,   385,   386,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   395,   396,   396,   397,
     397,   398,   398,   399,   399
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
       5,     2,     7,     7,     7,     7,     0,     1,     1,     3,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     1,
       4,     3,     3,     0,     1,     1,     4,     9,     2,     2,
       0,     1,     0,     1,     5,     5,     1,     1,     6,    10,
       2,     2,     5,     5,     8,     5,     5,     2,     4,     1,
       1,     7,    10,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     7,     0,     9,     0,
       1,     5,     5,     7,     1,     1,     1,     1,     7,     0,
       1,     2,     3,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     0,     1,
       1,     3,     0,     8,     0,     1,     2,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     8,     8,     0,     1,
       0,    10,     0,    13,     3,     3,     6,     6,     6,     1,
       2,     7,     0,     1,     2,     3,     4,     0,     1,     1,
       3,     2,     4,     9,     9,     1,     1,     2,     6,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     0,     1,     1,     3,     0,
       0,     0,     0,     0,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 2692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 120 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 121 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 122 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 124 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 134 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 138 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);(yyval.r.base) = new string("bool");}
#line 2800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);(yyval.r.base) = new string("decimal");}
#line 2818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("sbyte");}
#line 2824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("byte");}
#line 2830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("short");}
#line 2836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("ushort");}
#line 2842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("int");}
#line 2848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("uint");}
#line 2854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("long");}
#line 2860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("ulong");}
#line 2866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("char");}
#line 2872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("float");}
#line 2878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("double");}
#line 2884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("object");}
#line 2890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("string");}
#line 2896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[-1].r.known_type);(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = new string("");}
#line 2920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 231 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 250 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 254 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 257 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 258 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 261 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 281 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 285 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 288 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 293 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 321 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 332 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 333 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 334 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 335 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 346 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 347 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 348 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 371 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 381 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 403 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 426 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 427 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 457 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 461 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 465 "yacc.y" /* yacc.c:1646  */
    { SPL->add_scope(); }
#line 3820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);  SPL->endScope();}
#line 3826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 466 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 486 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 487 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 491 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),false,(yyvsp[0].r.line_no),(yyvsp[0].r.col_no)) ;
	}
#line 3902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 499 "yacc.y" /* yacc.c:1646  */
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 504 "yacc.y" /* yacc.c:1646  */
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
				  (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
		   }
#line 3920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 511 "yacc.y" /* yacc.c:1646  */
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[0].r.str)) ; 
		  }
#line 3928 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 515 "yacc.y" /* yacc.c:1646  */
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[-2].r.str));
		   }
#line 3936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 520 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 521 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 529 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),(yyvsp[-1].r.known_type),true,(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no)) ;
  }
#line 3969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 536 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",1);
  		(yyval.r.identifiers) = new queue<string>();
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
  }
#line 3979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 542 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",2);
	  	(yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));	
  }
#line 3989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 549 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);(yyval.r.identifier) = new string((yyvsp[-2].r.str));}
#line 3995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 559 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 565 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 566 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 567 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 568 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 569 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 570 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 571 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 574 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 579 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 605 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 608 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 616 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 627 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 627 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 631 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);}
#line 4289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 649 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 686 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 701 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 704 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 705 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 710 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 719 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 728 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 734 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 738 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 742 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 749 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 752 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 768 "yacc.y" /* yacc.c:1646  */
    {SPL->addNamespace(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);SPL->endScope();}
#line 4673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 778 "yacc.y" /* yacc.c:1646  */
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[0].r.str));
		  }
#line 4693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 782 "yacc.y" /* yacc.c:1646  */
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[-1].r.base)) + string((yyvsp[0].r.str)));
		}
#line 4701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[-1].r.str)) + ".");}
#line 4707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[-2].r.base) + string((yyvsp[-1].r.str)) + ".");}
#line 4713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 809 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 836 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
#line 4830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 841 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 4839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 848 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 854 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
#line 4865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
#line 4871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
#line 4877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
#line 4883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
#line 4889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 866 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
#line 4895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 867 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 4901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
#line 4907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
#line 4913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 870 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
#line 4919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
#line 4925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
#line 4931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
#line 4937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
#line 4943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 885 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4951 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 888 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 4957 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 4963 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 894 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 897 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();}
#line 4975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 898 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 899 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);(yyval.r.bases) = new queue<string>();}
#line 4987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 903 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 909 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[-2].r.bases);
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 5007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 917 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 5013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 921 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 5019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 922 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 925 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 926 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 931 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 932 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 933 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 934 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 935 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 937 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 938 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 942 "yacc.y" /* yacc.c:1646  */
    {		l.a("constant_declaration",4);
				//SPL->add_var(*$<r.modifiers>2,1);
		  }
#line 5105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 945 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 949 "yacc.y" /* yacc.c:1646  */
    {
		        SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
  		      l.a("field_declaration",4);
	      }
#line 5120 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 954 "yacc.y" /* yacc.c:1646  */
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
        }
#line 5129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 961 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}
#line 5135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 966 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type));
      }
#line 5143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 970 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);
      }
#line 5151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 979 "yacc.y" /* yacc.c:1646  */
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
#line 5159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 983 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 987 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 991 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[-2].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[-2].r.types_ids))->front()); ((yyvsp[-2].r.types_ids))->pop();}
            while(!((yyvsp[0].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[0].r.types_ids))->front()); ((yyvsp[0].r.types_ids))->pop();}
        }
#line 5186 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 999 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5192 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5198 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5204 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1004 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5210 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1012 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1017 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
      }
#line 5228 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1024 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1029 "yacc.y" /* yacc.c:1646  */
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
       }
#line 5246 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1036 "yacc.y" /* yacc.c:1646  */
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[0].r.base) ;
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5258 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1044 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[0].r.base);
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5270 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1054 "yacc.y" /* yacc.c:1646  */
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));  
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no); 
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5282 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1065 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base) ;
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5294 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1073 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base);
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5306 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5312 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5318 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1085 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5324 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1089 "yacc.y" /* yacc.c:1646  */
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5336 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1102 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5342 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1105 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5348 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1106 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5354 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1109 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5360 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1110 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5366 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1113 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5372 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1114 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5378 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1120 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5384 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1126 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5390 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5396 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1130 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5402 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1133 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5408 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1137 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5414 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1140 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5420 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5426 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1147 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5432 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5438 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1159 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5444 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5450 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1164 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5456 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5462 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5468 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1174 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5474 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1175 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5480 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1178 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5486 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5492 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5498 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5504 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1184 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5510 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5516 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5522 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5528 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1188 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5534 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5540 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5546 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5552 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5558 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5564 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5570 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5576 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5582 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5588 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5594 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5600 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5606 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5612 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1202 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5618 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5624 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5630 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1207 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5636 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1211 "yacc.y" /* yacc.c:1646  */
    {
  SPL->addMethod(*(yyvsp[-4].r.modifiers),"",string((yyvsp[-3].r.str)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1);
  }
#line 5644 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1214 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);SPL->endScope();}
#line 5650 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5656 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1218 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5662 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5668 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5674 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1238 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1241 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1242 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1245 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1246 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1251 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1254 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1255 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1258 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1261 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1264 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1265 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1268 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1269 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1272 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1273 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1274 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1275 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1276 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1277 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1278 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1279 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1281 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1286 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1287 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1290 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1291 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1294 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1295 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1301 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addInterface(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));		
  }
#line 5856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1304 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);SPL->endScope();}
#line 5862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1308 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 5868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1309 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1315 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1319 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1322 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1323 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1326 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1327 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5922 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1328 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5928 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1329 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5934 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1334 "yacc.y" /* yacc.c:1646  */
    {
     l.a("interface_method_declaration",5);
	 SPL->addMethod(*(yyvsp[-6].r.modifiers),*(yyvsp[-5].r.base),string((yyvsp[-4].r.str)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),(yyvsp[-5].r.known_type));
	 SPL->endScope();
    }
#line 5944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1340 "yacc.y" /* yacc.c:1646  */
    {
	  l.a("interface_method_declaration",4);
	  SPL->addMethod(*(yyvsp[-6].r.modifiers),"VOID",string((yyvsp[-4].r.str)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),1);
	  SPL->endScope();
    }
#line 5954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1347 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0); (yyval.r.modifiers) = new queue<string>();}
#line 5960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1348 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);(yyval.r.modifiers) = new queue<string>() ; (yyval.r.modifiers)->push("NEW");}
#line 5966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1354 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1354 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1361 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5984 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1361 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5990 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1365 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5996 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1366 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6002 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1367 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6008 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1368 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6014 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1371 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6020 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1376 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1377 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6032 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1382 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6038 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1385 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6044 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1386 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6050 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1389 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6056 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1392 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6062 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1393 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6068 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1396 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6074 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1397 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6080 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1400 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6086 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1401 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6092 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1404 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6098 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1405 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1410 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1411 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1416 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1419 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6128 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1420 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6134 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1423 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1424 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1427 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6152 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1428 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6158 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1431 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6164 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1434 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6170 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1435 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6176 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1436 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6182 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1437 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1438 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6194 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1439 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6200 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1440 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6206 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1441 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1442 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6218 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1445 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6224 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1446 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6230 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1449 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1452 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6242 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1453 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1456 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6254 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1459 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1466 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6266 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1469 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6272 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1472 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6278 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1475 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6284 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1478 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6290 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1481 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6296 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1489 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0);}
#line 6302 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1490 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0,1);yyerrok;yyclearin;}
#line 6308 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1493 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 6314 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1494 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6320 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1497 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 6326 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1498 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6332 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1501 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0);}
#line 6338 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1502 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0,1);}
#line 6344 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 1505 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0);}
#line 6350 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 1506 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0,1);yyerrok;}
#line 6356 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6360 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1511 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




