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
#define YYLAST   3090

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  248
/* YYNRULES -- Number of rules.  */
#define YYNRULES  573
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  967

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
     123,   127,   132,   133,   136,   137,   140,   141,   142,   145,
     146,   149,   150,   151,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   165,   166,   169,   170,   173,   174,   177,
     178,   179,   182,   183,   186,   190,   194,   195,   198,   199,
     200,   203,   204,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   221,   224,   225,   226,   229,
     230,   233,   234,   237,   238,   241,   242,   245,   246,   249,
     252,   253,   256,   259,   262,   265,   268,   269,   272,   273,
     276,   277,   280,   283,   286,   289,   292,   295,   296,   297,
     298,   299,   302,   303,   304,   305,   308,   311,   314,   315,
     316,   317,   318,   319,   320,   328,   329,   330,   331,   332,
     333,   336,   337,   340,   341,   344,   345,   348,   349,   350,
     351,   354,   355,   356,   359,   360,   361,   364,   365,   366,
     367,   368,   369,   370,   373,   374,   375,   378,   379,   382,
     383,   386,   387,   390,   391,   394,   395,   398,   399,   402,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   418,   419,   422,   425,   429,   430,   431,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   449,   450,   453,   454,   458,   459,   462,   465,   468,
     469,   470,   471,   474,   477,   478,   481,   482,   485,   486,
     487,   490,   493,   496,   497,   500,   509,   510,   511,   512,
     513,   514,   515,   518,   519,   520,   521,   522,   523,   524,
     528,   529,   532,   533,   536,   539,   542,   543,   546,   547,
     550,   553,   554,   557,   558,   561,   562,   563,   564,   567,
     570,   571,   572,   572,   572,   575,   576,   580,   582,   583,
     584,   585,   586,   587,   590,   591,   594,   595,   598,   599,
     602,   603,   606,   609,   612,   613,   616,   619,   620,   621,
     622,   623,   626,   627,   630,   631,   634,   635,   636,   637,
     638,   639,   642,   643,   646,   647,   650,   651,   654,   655,
     656,   659,   660,   663,   664,   665,   668,   669,   672,   675,
     678,   681,   684,   687,   688,   692,   695,   696,   699,   702,
     703,   706,   707,   710,   711,   714,   715,   718,   721,   722,
     731,   732,   735,   736,   739,   742,   743,   746,   747,   750,
     751,   754,   755,   758,   759,   762,   763,   766,   767,   768,
     769,   770,   781,   782,   785,   786,   789,   790,   791,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
     806,   808,   808,   810,   811,   814,   815,   816,   819,   820,
     823,   826,   827,   830,   831,   834,   835,   836,   837,   838,
     839,   840,   841,   842,   844,   847,   848,   851,   852,   855,
     859,   860,   861,   862,   865,   866,   869,   870,   873,   874,
     877,   878,   881,   882,   885,   888,   889,   890,   894,   897,
     903,   904,   907,   908,   911,   912,   915,   921,   927,   928,
     931,   932,   938,   939,   942,   948,   954,   960,   962,   965,
     969,   972,   973,   976,   977,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1004,  1005,  1008,
    1011,  1014,  1015,  1018,  1019,  1035,  1038,  1039,  1042,  1043,
    1048,  1051,  1052,  1055,  1058,  1061,  1062,  1065,  1066,  1069,
    1070,  1071,  1072,  1073,  1074,  1075,  1076,  1078,  1083,  1084,
    1087,  1088,  1091,  1092,  1097,  1100,  1101,  1104,  1107,  1110,
    1111,  1114,  1115,  1118,  1119,  1120,  1121,  1125,  1126,  1129,
    1130,  1133,  1139,  1147,  1148,  1149,  1150,  1153,  1158,  1159,
    1164,  1167,  1168,  1171,  1174,  1175,  1178,  1179,  1182,  1183,
    1186,  1187,  1192,  1193,  1198,  1201,  1202,  1205,  1206,  1209,
    1210,  1213,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1223,
    1224,  1227,  1228,  1231,  1234,  1235,  1238,  1241,  1248,  1251,
    1254,  1257,  1260,  1263
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
  "unsafe_statement", "while_statement", "$@1", "$@2", "do_statement",
  "for_statement", "left_bracket_circle", "right_bracket_circle",
  "semicolon", "for_initializer_opt", "for_condition_opt",
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
  "modifiers", "modifier", "class_declaration", "errorIDENTIFIER",
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

#define YYPACT_NINF -813

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-813)))

#define YYTABLE_NINF -569

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -41,    57,   307,   177,   -41,  -813,  -813,  -813,     8,    29,
    -813,   328,  -813,   933,  -813,   258,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   177,  -813,   255,  -813,  -813,   364,
    -813,  -813,   250,  -813,  -813,  -813,   364,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,   228,  1350,
    -813,  1133,  -813,  -813,   381,   265,    95,  -813,   306,   304,
    1599,   398,   415,   419,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   364,  -813,   331,  -813,  -813,   -41,
     341,  -813,  -813,   346,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,   367,
    -813,   375,  -813,   489,  -813,  -813,  -813,  -813,  -813,  -813,
     489,   489,   504,   418,   431,   435,  -813,  -813,   232,  -813,
     426,  -813,    20,  -813,  -813,   249,   447,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   429,   399,   470,  -813,   364,   484,
    -813,   364,   488,  -813,   244,  -813,  2635,  -813,  -813,   434,
     298,  -813,   468,   498,   302,   341,   -39,  -813,   316,   341,
     498,   326,   341,   498,   327,   341,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,   153,   494,  -813,  2963,  -813,   496,  -813,
    -813,   497,   500,  2348,  2635,  2635,  2635,  2635,  2635,  2635,
    2635,  2635,  -813,  -813,   495,   503,   161,   502,  -813,  -813,
    -813,  -813,   506,   508,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,   200,  -813,  -813,
    -813,   428,  -813,   180,   -15,   301,    27,   325,   499,   493,
     505,   478,   -80,  -813,  -813,  -813,   175,  -813,   364,   364,
    1350,  -813,   515,   342,  -813,  -813,  -813,  -813,    -8,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,   267,   516,   524,  -813,
    -813,  -813,   618,   522,   527,  -813,  -813,   576,   525,   354,
    -813,  -813,  -813,  -813,  -813,  -813,  1350,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,   526,   356,  -813,  -813,
    -813,  2635,   624,  2635,   367,   152,   531,   234,  2963,  3007,
    2635,    25,    18,    32,   353,   530,   252,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   626,   630,  2635,   631,  2147,
    -813,  2635,  -813,  -813,   633,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  2635,  2635,  2635,  2635,
    2635,  2635,  2635,  2635,  2963,  2963,  2635,  2635,  2635,  2635,
    2635,  2635,  2635,  2635,  2635,  2635,  2635,  2635,  2635,  2147,
     498,  -813,  2800,  -813,  -813,  1436,  -813,  -813,  -813,  -813,
    2963,  -813,  2963,    99,   177,   518,  -813,   379,  -813,  1069,
    -813,  -813,  2919,  -813,  -813,   279,  -813,   538,  2147,  2635,
    2233,  -813,   167,   179,   199,   539,  -813,  -813,   541,    25,
    -813,   542,   543,  2434,  2721,    25,  -813,  -813,   293,  -813,
    2635,  2635,   546,  -813,   545,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,   180,   180,   -15,   -15,   375,   375,   301,
     301,   301,   301,    27,    27,   325,   499,   493,   505,   547,
     478,   407,   549,   261,  2963,  2963,   601,   603,    23,   652,
      62,  -813,   260,  -813,  -813,   271,   556,   389,   106,   421,
    2963,   116,  1917,   557,   231,   558,    74,   559,   560,  2635,
     561,  2635,   565,   424,   565,   571,   240,  -813,    28,   495,
     503,   552,   568,   579,   581,   582,   585,   428,   586,  -813,
    -813,  -813,   594,  1801,  -813,  -813,  -813,   122,   123,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,    77,    41,    43,  -813,  -813,  -813,  2635,  -813,  -813,
    2963,    48,    75,  -813,  -813,   593,   410,  2963,  -813,  -813,
    -813,  -813,   596,   605,  -813,  -813,  -813,  -813,  2635,  -813,
    2635,  2635,  2635,  -813,   600,  -813,  -813,  -813,  -813,  2147,
    -813,  2635,  -813,  -813,   -39,    49,    58,  2963,  2963,   602,
     606,   607,   608,   160,  2786,   613,    90,  -813,   610,    44,
     615,   614,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  1801,
    -813,  -813,  -813,    49,  -813,  -813,   620,  2963,  -813,  -813,
    2549,  2963,   181,  2635,   188,  2635,  2635,  -813,   207,  2635,
     209,    34,  -813,  -813,  2549,  -813,  1555,   595,   623,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,    61,   619,   621,   628,
    -813,   489,   -43,  -813,  2032,  -813,  -813,  -813,  -813,  2635,
    -813,  -813,   625,   609,   103,  -813,   168,  -813,   165,   170,
     -39,   -39,   627,   -39,  2233,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,   632,   177,  -813,
     718,  -813,   -39,   635,  -813,   177,   177,  -813,   636,   634,
      79,   100,   101,   121,   198,   215,   222,  -813,  -813,  -813,
     224,  -813,   640,    80,  -813,  -813,   229,  -813,  -813,  -813,
     637,   638,  -813,  -813,   641,  -813,  -813,   427,   565,    34,
    -813,  -813,  -813,  -813,   642,  2635,   644,   645,   275,   -39,
     -39,   639,   177,   643,   489,  2635,  -813,  -813,  -813,   646,
    2635,  -813,   723,  -813,  -813,   649,  2963,  2963,   647,   648,
     565,   651,  -813,  2963,   437,  -813,   655,   177,   464,   479,
     654,   387,   400,  2635,   650,   283,  -813,  -813,  -813,  2635,
    2635,   697,  -813,  -813,  1917,  1917,   659,   249,  -813,  -813,
    -813,  -813,  1917,   751,  1917,  1917,   661,  -813,  -813,   657,
     662,   177,   465,  -813,  -813,  -813,   667,    38,  -813,  -813,
    -813,  -813,   177,    81,    82,  -813,  -813,  -813,  -813,    83,
    -813,  -813,   666,  -813,  -813,  -813,  -813,   677,  -813,  -813,
     679,  -813,  -813,   670,  2635,   771,  1917,  -813,   224,  -813,
    -813,  2635,   749,  -813,   288,  -813,   773,   773,  -813,  1917,
    -813,  -813,  -813,   275,   275,   481,   681,  -813,  -813,   678,
     682,   482,   684,   177,   177,   687,   689,   290,  -813,   285,
     285,  -813,   230,  -813,  -813,  -813,  2635,   690,  1917,  2635,
     692,   693,   288,  -813,  1685,  -813,  -813,   694,   698,  -813,
    -813,  -813,   275,   275,  -813,   700,  2147,  2147,  -813,  -813,
    -813,   708,  -813,   710,  -813,  -813,  -813,  2963,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,   110,  -813,   640,  1917,
    -813,   701,  -813,  -813,  -813,  1801,  -813,   565,   565,  -813,
     402,   404,  -813,   177,   707,   709,   565,   565,  -813,    84,
    -813,  -813,  -813,  -813,  1917,  -813,  -813,  -813,  -813,   717,
     724,   715,  -813,  -813,  -813,  -813,   716,  -813,   275,   275,
    -813,  -813,  -813,  -813,  -813,  -813,  -813
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     321,     0,     0,   323,   322,   335,   337,   338,   330,     0,
      10,     0,     1,   352,   345,   323,   343,   346,   347,   348,
     349,   350,   351,   324,   544,   545,     0,   336,   332,     0,
     342,   341,   331,   356,   357,   358,     0,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,     0,   353,
     354,   352,   344,   546,   549,   330,     0,   333,     0,     0,
       0,     0,     0,     0,   355,   554,   559,   552,   553,   555,
     556,   557,   558,   560,     0,   550,     0,   340,   339,   321,
     328,   372,   371,   373,    20,    25,    32,    23,    34,    33,
      28,    30,    35,    24,    26,    36,    29,    31,    27,   407,
      15,   406,    12,    14,    16,    19,    21,    22,    17,    18,
      13,    11,     0,   531,   505,   481,   566,    11,     0,   561,
     564,   551,   323,   329,   327,     0,     0,   374,    38,    37,
      44,    40,    39,    41,     0,     0,     0,   532,     0,     0,
     506,     0,     0,   482,     0,   569,    75,   563,   565,     0,
     323,   378,   375,   376,   323,   328,   323,   533,   323,   328,
     507,   323,   328,   483,   323,   328,   569,   562,   547,     3,
       4,     5,     6,     0,     0,     9,     0,     7,     0,    79,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     2,     0,     0,    97,    52,    51,    55,
      56,    57,     0,    76,    58,    59,    99,   100,    60,    84,
      54,    61,    63,    64,   101,   113,    62,   105,   114,   111,
     112,   127,   104,   131,   134,   137,   144,   147,   149,   151,
     153,   155,   157,   171,   172,    77,    98,   334,     0,     0,
     352,   394,     0,   323,   383,   385,   386,   387,     0,   388,
     389,   390,   391,   392,   393,   370,   415,     0,   405,   410,
     412,   413,     0,     0,   537,   538,   530,   519,     0,   323,
     511,   513,   514,   516,   515,   504,   352,   497,   489,   490,
     491,   492,   493,   494,   495,   496,     0,   323,   487,   480,
     548,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,   121,   121,   121,   131,     0,    98,   108,   109,   110,
      95,   102,   103,   106,   107,     0,     0,     0,     0,    71,
     567,     0,    82,    83,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
     377,   379,     0,   380,   384,     0,   409,   408,   399,   417,
       0,   416,     0,     0,   323,   540,   534,   323,   520,     0,
     508,   512,     0,   484,   488,     0,    80,     0,    71,     0,
     500,    87,     0,     0,     0,     0,   126,   125,     0,   122,
     123,     0,     0,     0,    65,   121,    67,    68,     0,    66,
       0,     0,    72,    46,     0,    48,    78,    94,   159,   128,
     129,   130,   127,   132,   133,   135,   136,   143,   142,   139,
     138,   140,   141,   145,   146,   148,   150,   152,   154,     0,
     156,     0,     0,   330,     0,     0,     0,     0,     0,     0,
       0,   572,     0,   441,   442,     0,     0,   330,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   294,
       0,   294,     0,     0,     0,     0,     0,   197,     0,    16,
      17,    56,    99,   100,    84,   111,   112,     0,     0,   195,
     177,   178,     0,   194,   179,   175,   176,     0,     0,   180,
     181,   230,   231,   182,   189,   245,   246,   247,   248,   183,
     277,   278,   279,   280,   281,   184,   185,   186,   187,   188,
     190,    98,     0,     0,   543,   542,   411,     0,   535,   539,
       0,     0,     0,    81,    92,     0,     0,     0,   208,   502,
     210,   209,     0,   501,    96,    91,    90,    93,     0,   124,
       0,     0,     0,   115,     0,    73,    50,    45,    49,     0,
      69,     0,    74,    70,   323,     0,     0,     0,     0,     0,
       0,     0,     0,   206,     0,     0,     0,   204,   572,     0,
       0,     0,   477,   476,   440,   479,   478,   469,   192,     0,
     283,   282,   309,     0,   285,   284,     0,     0,   259,   258,
     264,     0,     0,     0,     0,     0,     0,   295,     0,     0,
       0,     0,   310,   249,     0,   252,     0,   206,   203,   216,
     219,   220,   217,   221,   222,   218,   191,   196,   201,   199,
     202,   200,   418,   414,   173,   541,     0,     0,   572,     0,
      85,    42,     0,   498,     0,   120,   118,   119,   116,     0,
      47,   158,     0,     0,     0,   213,     0,   570,     0,     0,
     323,   323,     0,   323,     0,   452,   451,   463,   464,   445,
     446,   453,   454,   455,   456,   457,   447,   448,   458,   459,
     460,   461,   462,   466,   465,   449,   450,     0,   323,   398,
       0,   397,   323,     0,   439,   323,   323,   198,   212,     0,
       0,    56,    99,   100,    84,   111,   112,   225,   270,   274,
       0,   265,   271,     0,   289,   286,     0,   291,   288,   174,
       0,     0,   293,   292,     0,   297,   296,     0,     0,   298,
     301,   299,   314,   313,     0,     0,     0,     0,     0,   323,
     323,     0,   323,    88,    42,     0,   499,   503,   117,   471,
       0,   396,     0,   395,   430,     0,     0,     0,     0,     0,
       0,     0,   207,     0,     0,   205,     0,   323,     0,     0,
       0,   323,   323,     0,     0,     0,   316,   263,   262,   266,
       0,     0,   290,   287,     0,     0,     0,     0,   305,   308,
     302,   300,     0,     0,     0,     0,     0,   528,   527,     0,
       0,   323,     0,    86,    89,    43,     0,     0,   470,   472,
     215,   214,   323,     0,     0,   403,   401,   475,   402,     0,
     437,   400,     0,   438,   573,   573,   573,     0,   420,   423,
       0,   421,   425,     0,     0,     0,     0,   272,     0,   267,
     275,     0,   232,   311,   236,   234,   306,   306,   312,     0,
     251,   250,   529,     0,     0,     0,     0,   572,   211,     0,
       0,     0,     0,   323,   323,     0,     0,     0,   573,     0,
       0,   436,     0,   318,   317,   315,   268,     0,     0,     0,
       0,     0,   237,   238,     0,   241,   307,     0,     0,   253,
     518,   517,     0,     0,   573,     0,    71,    71,   571,   571,
     571,     0,   432,     0,   433,   468,   467,     0,   443,   419,
     429,   428,   572,   572,   256,   255,     0,   269,   273,     0,
     233,     0,   244,   235,   239,   240,   242,     0,     0,   254,
     323,   323,   521,   323,     0,     0,     0,     0,   431,     0,
     426,   427,   261,   260,     0,   276,   243,   304,   303,     0,
       0,     0,   473,   474,   570,   570,     0,   257,     0,     0,
     573,   434,   435,   444,   525,   526,   522
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -813,  -813,  -813,  -813,   -68,    39,   653,  -813,    50,  -813,
     683,  -813,   -56,  -813,   656,    76,   -95,   412,  -813,   266,
    -813,  -813,  -813,  -813,    -6,  -357,  -813,  -813,   -34,  -813,
    -813,   117,   359,  -813,   438,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   420,   477,   501,   329,  -813,   -58,
    -813,   432,  -163,   239,    87,   235,   474,   480,   473,   483,
     487,  -813,  -813,   540,  -813,   425,  -600,  -605,  -486,  -387,
    -238,  -813,   -50,  -813,  -813,  -813,  -350,  -453,   147,  -593,
    -813,  -813,   246,    88,  -813,    65,  -813,  -813,  -813,  -813,
    -813,  -813,   -36,  -813,   -37,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,    10,  -813,  -813,  -813,  -813,  -813,
    -813,   -35,  -813,  -813,  -813,  -813,  -813,  -813,   378,  -813,
    -813,  -813,   124,     7,   126,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,    15,  -813,   777,    -3,  -813,  -813,   202,     0,
     408,  -813,  -813,   853,  -813,  -813,   737,     3,  -131,  -186,
    -813,   813,  -813,  -813,  -813,  -813,   108,  -813,  -813,  -813,
     622,  -145,  -142,  -138,  -813,  -555,  -813,  -813,  -649,   490,
    -813,  -813,  -813,  -130,    96,  -813,  -813,   102,    97,     1,
    -123,  -813,     9,     4,  -122,  -813,  -813,  -121,  -813,  -813,
    -813,  -813,  -120,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   588,  -292,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   616,  -813,  -813,  -813,  -813,
     -57,  -813,  -673,  -813,  -813,  -813,  -813,  -813,  -813,   509,
    -813,  -813,  -813,   858,  -813,  -813,  -813,  -813,   739,  -813,
    -813,  -813,  -813,   721,  -364,  -307,  -561,  -812
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   192,   193,     9,   100,   478,   102,   103,   194,   105,
     106,   107,   195,   109,   110,   743,   397,   556,   412,   413,
     196,   197,   198,   199,   200,   414,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   803,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   398,
     399,   400,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   336,   415,   635,   720,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   576,   577,   539,
     540,   498,   654,   655,   499,   709,   500,   501,   502,   845,
     881,   882,   883,   884,   885,   503,   504,   505,   735,   929,
     506,   507,   600,   944,   779,   710,   838,   916,   711,   839,
     917,   712,   508,   509,   510,   511,   512,   513,   608,   514,
     515,   729,   730,   887,   731,   516,   517,   518,   519,   734,
     520,   775,   776,     2,     3,   256,   149,    14,   124,   236,
      11,    80,     4,     5,     6,     7,    15,    16,    17,    48,
      49,    50,    18,    83,   126,   127,   153,   155,   242,   243,
     244,   245,   246,   247,   248,   257,   112,   368,   258,   259,
     260,   372,   261,   249,   770,   828,   831,   771,   772,   912,
     250,   862,   863,   864,   251,   451,   580,   252,   452,   453,
     687,   454,   253,   455,   808,   809,   254,   584,   587,    19,
     142,   143,   165,   286,   287,   288,   541,   542,   543,    20,
     139,   140,   162,   268,   269,   270,   271,   379,   272,   273,
     856,   274,   798,    21,   136,   137,   159,   263,   264,   265,
      22,    23,    24,    25,    74,    75,    76,   118,   119,   147,
     120,   148,    26,   168,   755,   936,   581,   869
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    10,   442,   716,   108,   391,   116,   627,   131,   652,
     367,   737,    51,   870,   871,   132,   133,   693,    52,   278,
     304,   130,   279,   241,   569,   618,   280,    55,   130,    56,
      30,   535,   617,   277,   281,   130,    58,   344,   356,   764,
       1,   282,   283,   284,   285,   632,   768,   633,    32,   859,
     727,   747,   637,   653,   362,   745,   909,   151,   357,  -568,
     111,     8,   573,   572,  -404,   738,   573,   728,   129,   152,
     151,   762,   345,   151,   117,   596,   116,   741,   602,   638,
     130,   -11,   932,   774,   781,   865,   866,   867,   956,   603,
     382,   689,   365,   802,   340,   341,    77,   604,   366,   101,
     524,  -223,  -226,   697,   751,   758,   759,   590,   761,   860,
     104,   942,   241,   656,   574,   694,    28,   594,  -568,    51,
     108,  -325,  -227,   628,   630,   117,   315,   303,    29,   396,
     793,   346,   347,   575,   128,    31,   396,   766,   117,   129,
     316,   117,   278,   396,   117,   279,   639,    51,   966,   280,
     810,   240,   129,    52,   129,   262,   277,   281,   267,   128,
     129,   276,   348,   349,   282,   283,   284,   285,   833,   129,
     151,   361,   129,   129,   837,   358,   111,   423,   424,   359,
     890,   891,   714,   306,   799,   800,   129,   690,   -11,   717,
     129,   129,   129,   129,   129,   129,   691,  -223,  -226,  -224,
     752,    78,   132,  -223,  -226,   525,  -223,  -226,   722,   753,
     725,   405,   591,   943,   583,   295,  -228,   586,  -227,   930,
     931,   592,   595,  -229,  -227,   777,   104,  -227,   629,   631,
     782,   914,   598,   302,   611,   612,   613,   130,   117,   117,
     240,   615,   108,   108,   401,   402,   160,    59,    55,   163,
     708,   291,    60,    55,   388,   130,    61,   385,  -320,   317,
    -330,   292,  -330,   129,   733,   690,   267,   756,    28,   318,
     544,    62,   757,   358,   754,  -568,   129,   359,   129,   921,
     664,   129,   545,   408,   276,   964,   965,   715,   108,   108,
     128,   337,   338,   339,   718,  -224,   895,    63,   111,   111,
      92,  -224,   546,   879,  -224,    81,   108,    12,    82,   480,
     129,   880,  -228,   723,   108,   726,   108,    95,  -228,  -229,
     369,  -228,   370,   108,   441,  -229,   108,   371,  -229,   144,
     778,   145,    32,   599,   390,   783,   915,   392,   394,   322,
     323,   324,   616,   166,   111,   111,   360,   554,   104,   104,
     358,   940,   941,    54,   359,   536,  -568,   255,    57,   481,
     365,   266,   111,   564,   275,   521,   582,   289,    55,    28,
     111,   365,   111,    28,   262,   796,   321,   585,   533,   111,
     835,   797,   111,   427,   428,   365,   836,   907,   108,   108,
     321,   910,   555,   908,   104,   104,  -568,   842,   843,  -326,
    -568,   450,   113,  -381,   108,   848,    79,   850,   851,   522,
      65,   523,   104,    85,  -568,   479,    86,  -536,   532,   114,
     104,   450,   104,   115,  -568,  -568,   133,  -509,  -485,   104,
     342,   343,   104,   429,   430,   431,   432,   480,   121,   627,
    -568,    90,    66,  -382,   111,   111,    91,   123,   570,   875,
     578,   804,  -568,   125,  -568,  -510,   481,  -486,   350,   351,
     111,    93,   889,    94,   403,   338,   339,    67,    68,    69,
      70,    71,    72,    73,   108,    96,    97,  -568,   128,    98,
     528,   108,   482,   565,   566,  -568,   129,   481,  -422,   788,
     789,   920,   130,   521,   104,   104,   589,    28,  -568,   593,
    -568,  -424,  -568,  -523,   321,  -524,   562,   321,   134,   641,
     104,   108,   108,   307,   308,   309,   310,   311,   312,   313,
     314,   365,   817,   293,   365,   135,   300,   365,   146,   787,
     111,   156,   945,   480,   374,   237,   820,   111,   138,   934,
     935,   108,   141,   479,   480,   108,   744,   154,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   957,   480,   334,
     335,   374,   374,   823,   857,   238,   657,   111,   111,   636,
     158,   235,   824,   825,   892,   893,   642,   898,   899,   482,
     104,   425,   426,   481,   161,   433,   434,   104,   164,   521,
     961,   962,   937,   938,   701,   239,   293,   111,   298,   299,
     521,   111,   300,   315,   319,   321,   658,   659,   305,   320,
     482,   316,   353,   352,   521,   355,   363,   104,   104,   373,
     354,   374,   375,   376,   377,   378,   380,   383,   386,   389,
     406,   911,   911,   404,   407,   409,   700,   417,   527,   479,
     713,   534,   547,   559,   548,   550,   551,   104,   560,   744,
     479,   104,   563,   567,   561,   568,   571,   588,   619,   597,
     601,   605,   606,   609,   479,   365,   419,   420,   421,   422,
     422,   422,   422,   614,   620,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   621,   422,   622,   623,   947,
     948,   624,   625,   769,   487,   626,   640,   643,   954,   955,
     108,   108,   644,   649,   660,   699,   482,   108,   661,   662,
     663,   688,   692,   695,   696,   664,   235,   702,   387,   846,
     690,   739,   617,   740,   483,   395,   742,   653,   749,   750,
     760,   847,   419,   752,   763,   767,   773,   780,   841,   801,
     784,   785,   235,   390,   786,   792,   416,   794,   795,   812,
     815,   816,   849,   807,   818,   826,   111,   111,   821,   844,
     853,   418,   852,   111,   769,   854,   858,   868,   827,   830,
     834,   825,   824,   872,   701,   774,   878,   886,   481,   481,
     896,   439,   894,   235,   897,   900,   481,   117,   481,   481,
     905,   487,   906,   919,   923,   813,   814,   927,   855,   922,
     933,   928,   819,   484,   899,   898,   104,   104,   946,   861,
     952,   958,   953,   104,   235,   538,   960,   959,   157,   963,
     805,   483,   487,   558,   553,   650,   435,   437,   480,   296,
     481,   549,   297,   436,   925,   557,   557,   765,   438,   698,
     811,   918,   485,   481,   440,   840,   924,   926,   876,   610,
     874,   108,   483,   790,   888,   791,   122,    27,   579,   150,
     901,   903,    64,   822,   526,   364,   486,   902,   829,   480,
     701,   913,   481,   904,   832,   384,   951,   645,   481,   646,
     647,   648,    53,   167,   521,   381,   529,   290,     0,     0,
       0,     0,     0,     0,   607,     0,   607,   702,     0,     0,
     484,   482,   482,     0,     0,   488,     0,   111,     0,   482,
       0,   482,   482,   481,     0,     0,     0,     0,   487,   481,
       0,     0,     0,     0,     0,   521,     0,   949,   950,   487,
     855,   484,     0,  -319,   479,     0,     0,     0,   481,   485,
       0,     0,    33,     0,     0,     0,   939,     0,   483,     0,
       0,     0,   634,   482,     0,     0,     0,   104,     0,   703,
       0,     0,     0,   486,    34,     0,   482,     0,     0,     0,
     485,     0,     0,     0,     0,   479,     0,    35,   748,     0,
       0,    36,    37,     0,     0,     0,   651,    38,     0,    39,
      40,    41,    42,   702,   486,   482,    43,     0,     0,     0,
      44,   482,   488,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,    46,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   484,   634,     0,
     719,   721,     0,   488,   724,     0,   482,     0,   704,   732,
       0,   719,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   482,     0,     0,     0,     0,   485,     0,     0,   538,
       0,     0,     0,    55,     0,     0,     0,   705,     0,     0,
       0,    84,     0,    85,     0,     0,    86,     0,     0,   538,
     486,    87,     0,     0,     0,    88,     0,     0,   530,     0,
       0,   706,     0,     0,    89,     0,     0,     0,     0,   487,
       0,    90,     0,   487,   487,     0,    91,     0,     0,     0,
      92,   487,     0,   487,   487,     0,     0,     0,     0,   488,
       0,    93,     0,    94,     0,     0,     0,    95,     0,   703,
     707,     0,    33,   483,   483,    96,    97,     0,     0,    98,
       0,   483,   531,   483,   483,     0,     0,     0,     0,     0,
     719,     0,     0,     0,    34,   487,     0,     0,     0,     0,
     806,     0,     0,     0,     0,   634,     0,    35,   487,     0,
       0,    36,    37,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,     0,     0,   483,    43,     0,   719,     0,
      44,     0,     0,     0,   719,   487,     0,   487,   483,     0,
       0,     0,    45,   487,     0,    46,     0,    47,   704,     0,
       0,     0,   484,   484,     0,     0,     0,     0,     0,     0,
     484,     0,   484,   484,     0,   703,     0,   483,     0,     0,
       0,     0,     0,   483,     0,     0,     0,     0,   487,     0,
       0,     0,     0,     0,   487,     0,     0,   705,     0,   873,
       0,   485,   485,     0,     0,     0,   877,     0,     0,   485,
       0,   485,   485,   487,   484,     0,     0,     0,   483,     0,
       0,   706,     0,     0,   483,   486,   486,   484,     0,     0,
       0,     0,     0,   486,     0,   486,   486,     0,     0,     0,
       0,     0,     0,   483,   634,     0,     0,     0,     0,     0,
       0,     0,     0,   485,   704,     0,   484,     0,     0,     0,
     707,     0,   484,     0,   488,   488,   485,     0,     0,     0,
       0,     0,   488,     0,   488,   488,     0,   486,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     486,     0,     0,   705,     0,   485,     0,   484,     0,    33,
       0,   485,     0,   484,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   488,   706,     0,   486,
       0,    34,   484,     0,     0,   486,     0,     0,     0,   488,
       0,     0,     0,     0,    35,     0,   485,     0,     0,    37,
       0,     0,   485,     0,    38,     0,    39,    40,    41,    42,
       0,     0,     0,    43,     0,     0,   707,    44,   488,     0,
     486,   485,     0,     0,   488,     0,   486,     0,     0,    45,
       0,     0,    46,     0,    47,     0,     0,   456,     0,     0,
     457,   169,   170,   171,   172,   486,     0,   173,    84,   458,
      85,     0,     0,    86,   459,     0,   460,   461,    87,   488,
       0,   462,    88,     0,     0,   488,     0,     0,   175,     0,
     463,    89,   464,   465,   466,   467,     0,     0,    90,     0,
       0,     0,   468,    91,   488,   176,   177,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,    93,     0,
      94,   178,     0,     0,    95,     0,   470,   179,   471,   180,
     472,   181,    96,    97,   473,   474,    98,   475,     0,   294,
       0,   476,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   365,  -193,   183,     0,
       0,     0,   477,     0,     0,   184,   185,   186,     0,     0,
     187,     0,   188,   189,     0,     0,   736,     0,     0,    55,
     169,   170,   171,   172,     0,     0,   173,    84,     0,    85,
       0,     0,    86,   174,     0,   190,   191,    87,     0,     0,
       0,    88,     0,     0,     0,     0,     0,   175,     0,     0,
      89,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,    91,    55,   176,   177,    92,     0,     0,     0,
       0,    84,     0,    85,     0,     0,    86,    93,     0,    94,
     178,    87,     0,    95,     0,    88,   179,     0,   180,     0,
     181,    96,    97,   182,    89,    98,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,    91,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,    93,     0,    94,   184,   185,   186,    95,     0,   187,
       0,   188,   189,     0,     0,    96,    97,     0,     0,    98,
       0,     0,    99,     0,     0,     0,     0,     0,     0,   457,
     169,   170,   171,   172,   190,   191,   173,    84,   458,    85,
     879,     0,    86,   459,     0,   460,   461,    87,   880,     0,
     462,    88,     0,     0,     0,     0,     0,   175,     0,   463,
      89,   464,   465,   466,   467,     0,     0,    90,     0,     0,
       0,   468,    91,     0,   176,   177,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,    93,     0,    94,
     178,     0,     0,    95,     0,   470,   179,   471,   180,   472,
     181,    96,    97,   473,   474,    98,   475,     0,   294,     0,
     476,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     0,   183,     0,     0,
       0,   477,     0,     0,   184,   185,   186,     0,     0,   187,
       0,   188,   189,     0,     0,   457,   169,   170,   171,   172,
       0,     0,   173,    84,   458,    85,     0,     0,    86,   459,
       0,   460,   461,    87,   190,   191,   462,    88,     0,     0,
       0,     0,     0,   175,     0,   463,    89,   464,   465,   466,
     467,     0,     0,    90,     0,     0,     0,   468,    91,     0,
     176,   177,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   469,    93,     0,    94,   178,     0,     0,    95,
       0,   470,   179,   471,   180,   472,   181,    96,    97,   473,
     474,    98,   475,     0,   294,     0,   476,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   365,     0,   183,     0,     0,     0,   477,     0,     0,
     184,   185,   186,     0,     0,   187,     0,   188,   189,     0,
       0,    55,   169,   170,   171,   172,     0,     0,   173,    84,
     458,    85,     0,     0,    86,   459,     0,     0,   461,    87,
     190,   191,   462,    88,     0,     0,     0,     0,     0,   175,
       0,   463,    89,   464,   465,   466,   467,     0,     0,    90,
       0,     0,     0,   468,    91,     0,   176,   177,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   469,    93,
       0,    94,   178,     0,     0,    95,     0,   470,   179,   471,
     180,   472,   181,    96,    97,   473,   474,    98,   475,     0,
       0,     0,   476,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   365,     0,   183,
       0,     0,     0,   477,     0,     0,   184,   185,   186,     0,
       0,   187,     0,   188,   189,     0,    55,   169,   170,   171,
     172,     0,     0,   173,    84,     0,    85,     0,     0,    86,
     174,     0,     0,     0,    87,     0,   190,   191,    88,     0,
       0,     0,     0,     0,   175,     0,     0,    89,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,    91,
       0,   176,   177,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,    94,   178,   537,     0,
      95,     0,     0,   179,     0,   180,     0,   181,    96,    97,
     182,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   390,   746,   183,     0,     0,     0,     0,     0,
       0,   184,   185,   186,     0,     0,   187,     0,   188,   189,
       0,    55,   169,   170,   171,   172,     0,     0,   173,    84,
       0,    85,     0,     0,    86,   174,     0,     0,     0,    87,
       0,   190,   191,    88,     0,     0,     0,     0,     0,   175,
       0,     0,    89,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,    91,     0,   176,   177,    92,     0,
     410,     0,     0,     0,     0,     0,     0,   411,     0,    93,
       0,    94,   178,     0,     0,    95,     0,     0,   179,     0,
     180,     0,   181,    96,    97,   182,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,   169,   170,
     171,   172,     0,     0,   173,    84,     0,    85,     0,   183,
      86,   174,     0,     0,     0,    87,   184,   185,   186,    88,
       0,   187,     0,   188,   189,   175,     0,     0,    89,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
      91,     0,   176,   177,    92,     0,   190,   191,     0,     0,
       0,     0,     0,     0,     0,    93,     0,    94,   178,   537,
       0,    95,     0,     0,   179,     0,   180,     0,   181,    96,
      97,   182,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   390,     0,   183,     0,     0,     0,     0,
       0,     0,   184,   185,   186,     0,     0,   187,     0,   188,
     189,     0,    55,   169,   170,   171,   172,     0,     0,   173,
      84,     0,    85,     0,     0,    86,   174,     0,     0,     0,
      87,     0,   190,   191,    88,     0,     0,     0,     0,     0,
     175,     0,     0,    89,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,    91,     0,   176,   177,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,    94,   178,     0,     0,    95,     0,     0,   179,
       0,   180,     0,   181,    96,    97,   182,     0,    98,     0,
       0,   301,     0,     0,     0,     0,     0,     0,    55,   169,
     170,   171,   172,     0,     0,   173,    84,     0,    85,     0,
     183,    86,   174,     0,     0,     0,    87,   184,   185,   186,
      88,     0,   187,     0,   188,   189,   175,     0,     0,    89,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,    91,     0,   176,   177,    92,     0,   190,   191,     0,
       0,     0,     0,     0,     0,     0,    93,     0,    94,   178,
       0,     0,    95,     0,     0,   179,     0,   180,     0,   181,
      96,    97,   182,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,   552,     0,     0,
       0,     0,     0,   184,   185,   186,     0,     0,   187,     0,
     188,   189,     0,    55,   169,   170,   171,   172,     0,     0,
     173,    84,     0,    85,     0,     0,    86,   174,     0,     0,
       0,    87,     0,   190,   191,    88,     0,     0,     0,     0,
       0,   175,     0,     0,    89,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,    91,     0,   176,   177,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,    94,   178,     0,     0,    95,     0,     0,
     179,     0,   180,     0,   181,    96,    97,   182,     0,    98,
       0,     0,   294,     0,     0,     0,     0,     0,     0,    55,
     169,   170,   171,   172,     0,     0,   173,    84,     0,    85,
       0,   183,    86,   174,     0,     0,     0,    87,   184,   185,
     186,    88,     0,   187,     0,   188,   189,   175,     0,     0,
      89,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,    91,     0,   176,   177,    92,     0,   190,   191,
       0,     0,     0,     0,     0,     0,     0,    93,     0,    94,
     178,     0,     0,    95,     0,     0,   179,     0,   180,     0,
     181,    96,    97,   182,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,   169,   170,   171,   172,
       0,     0,   173,    84,     0,    85,     0,   183,    86,   174,
       0,     0,     0,    87,   184,   185,   186,    88,     0,   187,
       0,   188,   189,   175,     0,     0,    89,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,    91,     0,
     176,   177,    92,     0,   190,   191,     0,     0,     0,     0,
       0,     0,     0,    93,     0,    94,   178,     0,     0,    95,
       0,     0,   179,     0,   180,     0,   181,    96,    97,   182,
       0,    98,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,    84,     0,    85,     0,     0,    86,   665,    59,
     444,     0,    87,   183,    60,     0,    88,     0,    61,   445,
     446,     0,     0,     0,     0,    89,     0,   188,   189,     0,
     447,     0,    90,    62,     0,     0,     0,    91,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,   666,
       0,     0,    93,     0,    94,     0,     0,     0,    95,    63,
       0,     0,     0,     0,     0,     0,    96,    97,     0,     0,
      98,     0,     0,   448,     0,     0,     0,     0,     0,     0,
     667,   668,     0,     0,     0,   669,   670,   671,   672,   673,
     674,   675,   676,   677,     0,   678,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   679,   680,   449,     0,   681,
     682,   683,   684,   443,     0,   685,   686,     0,     0,     0,
       0,    84,     0,    85,     0,     0,    86,     0,    59,   444,
       0,    87,     0,    60,     0,    88,     0,    61,   445,   446,
       0,     0,     0,     0,    89,     0,     0,     0,     0,   447,
       0,    90,    62,     0,     0,     0,    91,    55,     0,     0,
      92,     0,     0,     0,     0,    84,     0,    85,     0,     0,
      86,    93,     0,    94,     0,    87,     0,    95,    63,    88,
       0,     0,     0,     0,     0,    96,    97,     0,    89,    98,
       0,     0,   448,     0,     0,    90,     0,     0,     0,     0,
      91,    55,     0,     0,    92,     0,     0,     0,     0,    84,
       0,    85,     0,     0,    86,    93,     0,    94,     0,    87,
       0,    95,     0,    88,     0,     0,     0,     0,     0,    96,
      97,     0,    89,    98,     0,     0,   294,     0,     0,    90,
       0,     0,     0,     0,    91,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,    94,     0,     0,     0,    95,     0,     0,     0,     0,
       0,     0,     0,    96,    97,     0,     0,    98,     0,     0,
     393
};

static const yytype_int16 yycheck[] =
{
       3,     1,   359,   603,    60,   297,    74,   493,   103,   564,
     248,   616,    15,   825,   826,   110,   111,   578,    15,   164,
     183,     3,   164,   154,     1,   478,   164,     4,     3,    29,
       1,   388,     4,   164,   164,     3,    36,    10,   118,   688,
      81,   164,   164,   164,   164,     4,   695,     4,     4,    11,
      16,   644,     4,     4,   240,    98,   868,   125,   138,    98,
      60,     4,     4,     1,   103,     4,     4,    33,   111,   125,
     138,   664,    45,   141,    74,   462,   144,   638,     4,     4,
       3,     4,   894,     4,     4,     4,     4,     4,     4,    15,
     276,     1,   100,   742,   109,   110,     1,    23,   106,    60,
       1,     1,     1,   589,     1,   660,   661,     1,   663,    71,
      60,     1,   243,   566,    52,    71,   108,     1,    98,   122,
     176,   101,     1,     1,     1,   125,   108,   183,   120,   111,
     735,   104,   105,    71,   111,   106,   111,   692,   138,   111,
     108,   141,   287,   111,   144,   287,    71,   150,   960,   287,
     750,   154,   111,   150,   111,   158,   287,   287,   161,   111,
     111,   164,   135,   136,   287,   287,   287,   287,   773,   111,
     238,   239,   111,   111,   779,    98,   176,   340,   341,   102,
     853,   854,     1,   183,   739,   740,   111,    97,   111,     1,
     111,   111,   111,   111,   111,   111,   106,    97,    97,     1,
      97,   106,   297,   103,   103,   106,   106,   106,     1,   106,
       1,   306,   106,   103,   452,   176,     1,   455,    97,   892,
     893,   459,   106,     1,   103,     1,   176,   106,   106,   106,
       1,     1,     1,   183,   472,   473,   474,     3,   238,   239,
     243,     1,   298,   299,   302,   303,   138,    19,     4,   141,
     600,    98,    24,     4,   102,     3,    28,   291,     0,    98,
     100,   108,   102,   111,   614,    97,   269,   102,   108,   108,
     103,    43,   102,    98,   106,    98,   111,   102,   111,   879,
     120,   111,   103,   317,   287,   958,   959,   106,   344,   345,
     111,   111,   112,   113,   106,    97,   857,    69,   298,   299,
      51,   103,   103,    15,   106,     1,   362,     0,     4,   365,
     111,    23,    97,   106,   370,   106,   372,    68,   103,    97,
      53,   106,    55,   379,   358,   103,   382,    60,   106,    97,
     106,    99,     4,   102,   100,   106,   106,   298,   299,   139,
     140,   141,   102,    99,   344,   345,   238,   405,   298,   299,
      98,   912,   913,    98,   102,   389,    98,   155,   108,   365,
     100,   159,   362,   102,   162,   365,   106,   165,     4,   108,
     370,   100,   372,   108,   377,   100,    97,   106,    99,   379,
      97,   106,   382,   344,   345,   100,   103,    97,   444,   445,
      97,   106,    99,   103,   344,   345,    98,   784,   785,   101,
      98,   362,     4,   101,   460,   792,   100,   794,   795,   370,
      29,   372,   362,    14,    98,   365,    17,   101,   379,     4,
     370,   382,   372,     4,    98,    98,   521,   101,   101,   379,
     129,   130,   382,   346,   347,   348,   349,   493,   107,   925,
      98,    42,    61,   101,   444,   445,    47,   106,   448,   836,
     450,   743,    98,   107,    98,   101,   462,   101,   133,   134,
     460,    62,   849,    64,   111,   112,   113,    86,    87,    88,
      89,    90,    91,    92,   530,    76,    77,    98,   111,    80,
     101,   537,   365,   444,   445,    98,   111,   493,   101,   727,
     728,   878,     3,   493,   444,   445,   107,   108,    98,   460,
      98,   101,    98,   101,    97,   101,    99,    97,     4,    99,
     460,   567,   568,   184,   185,   186,   187,   188,   189,   190,
     191,   100,   760,   102,   100,   107,   102,   100,   102,   102,
     530,   102,   919,   589,    97,   101,    99,   537,   107,   896,
     897,   597,   107,   493,   600,   601,   641,   100,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   944,   614,   131,
     132,    97,    97,    99,    99,    97,   566,   567,   568,   530,
     100,   146,    93,    94,    93,    94,   537,    95,    96,   462,
     530,   342,   343,   589,   100,   350,   351,   537,   100,   589,
     954,   955,   899,   900,   600,    97,   102,   597,   102,   102,
     600,   601,   102,   108,   102,    97,   567,   568,   183,   103,
     493,   108,   119,   114,   614,   137,   101,   567,   568,   103,
     115,    97,     4,   101,    97,    49,   101,   101,     4,    98,
       4,   869,   870,   103,     4,     4,   597,     4,   120,   589,
     601,   103,   103,    97,   103,   103,   103,   597,   103,   744,
     600,   601,   103,    52,   107,    52,     4,   101,   106,   102,
     102,   102,   102,   102,   614,   100,   337,   338,   339,   340,
     341,   342,   343,   102,   106,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   106,   357,   106,   106,   927,
     928,   106,   106,   696,   365,   101,   103,   101,   936,   937,
     756,   757,    97,   103,   102,    85,   589,   763,   102,   102,
     102,    98,   102,    98,   100,   120,   291,   600,   293,   787,
      97,   102,     4,   102,   365,   300,    98,     4,   103,   120,
     103,   787,   403,    97,   102,   100,   102,    97,    41,   100,
     103,   103,   317,   100,   103,   103,   321,   103,   103,   100,
     103,   103,     1,   107,   103,   101,   756,   757,   103,   100,
     103,   336,   101,   763,   767,   103,    99,   101,   771,   772,
     120,    94,    93,   103,   780,     4,    27,     4,   784,   785,
     102,   356,   101,   358,   102,   101,   792,   787,   794,   795,
     103,   462,   103,   103,   101,   756,   757,   103,   801,   107,
     100,   103,   763,   365,    96,    95,   756,   757,   107,   812,
     103,    94,   103,   763,   389,   390,   101,    93,   135,   103,
     744,   462,   493,   411,   404,   559,   352,   354,   884,   176,
     836,   399,   176,   353,   884,   410,   411,   690,   355,   593,
     752,   876,   365,   849,   357,   780,   882,   884,   838,   471,
     835,   907,   493,   729,   847,   729,    79,     4,   450,   122,
     863,   864,    49,   767,   374,   243,   365,   863,   771,   925,
     876,   870,   878,   864,   772,   287,   933,   548,   884,   550,
     551,   552,    24,   144,   884,   269,   377,   166,    -1,    -1,
      -1,    -1,    -1,    -1,   469,    -1,   471,   780,    -1,    -1,
     462,   784,   785,    -1,    -1,   365,    -1,   907,    -1,   792,
      -1,   794,   795,   919,    -1,    -1,    -1,    -1,   589,   925,
      -1,    -1,    -1,    -1,    -1,   925,    -1,   930,   931,   600,
     933,   493,    -1,     0,   884,    -1,    -1,    -1,   944,   462,
      -1,    -1,     9,    -1,    -1,    -1,   907,    -1,   589,    -1,
      -1,    -1,   527,   836,    -1,    -1,    -1,   907,    -1,   600,
      -1,    -1,    -1,   462,    31,    -1,   849,    -1,    -1,    -1,
     493,    -1,    -1,    -1,    -1,   925,    -1,    44,   649,    -1,
      -1,    48,    49,    -1,    -1,    -1,   561,    54,    -1,    56,
      57,    58,    59,   876,   493,   878,    63,    -1,    -1,    -1,
      67,   884,   462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   589,   603,    -1,
     605,   606,    -1,   493,   609,    -1,   919,    -1,   600,   614,
      -1,   616,   925,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   944,    -1,    -1,    -1,    -1,   589,    -1,    -1,   644,
      -1,    -1,    -1,     4,    -1,    -1,    -1,   600,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    17,    -1,    -1,   664,
     589,    22,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      -1,   600,    -1,    -1,    35,    -1,    -1,    -1,    -1,   780,
      -1,    42,    -1,   784,   785,    -1,    47,    -1,    -1,    -1,
      51,   792,    -1,   794,   795,    -1,    -1,    -1,    -1,   589,
      -1,    62,    -1,    64,    -1,    -1,    -1,    68,    -1,   780,
     600,    -1,     9,   784,   785,    76,    77,    -1,    -1,    80,
      -1,   792,    83,   794,   795,    -1,    -1,    -1,    -1,    -1,
     735,    -1,    -1,    -1,    31,   836,    -1,    -1,    -1,    -1,
     745,    -1,    -1,    -1,    -1,   750,    -1,    44,   849,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    -1,    -1,   836,    63,    -1,   773,    -1,
      67,    -1,    -1,    -1,   779,   876,    -1,   878,   849,    -1,
      -1,    -1,    79,   884,    -1,    82,    -1,    84,   780,    -1,
      -1,    -1,   784,   785,    -1,    -1,    -1,    -1,    -1,    -1,
     792,    -1,   794,   795,    -1,   876,    -1,   878,    -1,    -1,
      -1,    -1,    -1,   884,    -1,    -1,    -1,    -1,   919,    -1,
      -1,    -1,    -1,    -1,   925,    -1,    -1,   780,    -1,   834,
      -1,   784,   785,    -1,    -1,    -1,   841,    -1,    -1,   792,
      -1,   794,   795,   944,   836,    -1,    -1,    -1,   919,    -1,
      -1,   780,    -1,    -1,   925,   784,   785,   849,    -1,    -1,
      -1,    -1,    -1,   792,    -1,   794,   795,    -1,    -1,    -1,
      -1,    -1,    -1,   944,   879,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   836,   876,    -1,   878,    -1,    -1,    -1,
     780,    -1,   884,    -1,   784,   785,   849,    -1,    -1,    -1,
      -1,    -1,   792,    -1,   794,   795,    -1,   836,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     849,    -1,    -1,   876,    -1,   878,    -1,   919,    -1,     9,
      -1,   884,    -1,   925,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   836,   876,    -1,   878,
      -1,    31,   944,    -1,    -1,   884,    -1,    -1,    -1,   849,
      -1,    -1,    -1,    -1,    44,    -1,   919,    -1,    -1,    49,
      -1,    -1,   925,    -1,    54,    -1,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    -1,    -1,   876,    67,   878,    -1,
     919,   944,    -1,    -1,   884,    -1,   925,    -1,    -1,    79,
      -1,    -1,    82,    -1,    84,    -1,    -1,     1,    -1,    -1,
       4,     5,     6,     7,     8,   944,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    20,    21,    22,   919,
      -1,    25,    26,    -1,    -1,   925,    -1,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,   944,    49,    50,    51,    -1,    -1,
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
      -1,    -1,    47,    -1,    49,    50,    51,    -1,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,   102,    17,    18,
      -1,    -1,    -1,    22,   109,   110,   111,    26,    -1,   114,
      -1,   116,   117,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    -1,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    14,    -1,    -1,    17,    32,    19,
      20,    -1,    22,   102,    24,    -1,    26,    -1,    28,    29,
      30,    -1,    -1,    -1,    -1,    35,    -1,   116,   117,    -1,
      40,    -1,    42,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   117,    -1,   133,
     134,   135,   136,     4,    -1,   139,   140,    -1,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    17,    -1,    19,    20,
      -1,    22,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    -1,    -1,    -1,    47,     4,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,
      17,    62,    -1,    64,    -1,    22,    -1,    68,    69,    26,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    35,    80,
      -1,    -1,    83,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,     4,    -1,    -1,    51,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    62,    -1,    64,    -1,    22,
      -1,    68,    -1,    26,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,
      83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   276,   277,   285,   286,   287,   288,     4,   146,
     282,   283,     0,   278,   280,   289,   290,   291,   295,   342,
     352,   366,   373,   374,   375,   376,   385,   286,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   292,   293,
     294,   278,   290,   376,    98,     4,   282,   108,   282,    19,
      24,    28,    43,    69,   294,    29,    61,    86,    87,    88,
      89,    90,    91,    92,   377,   378,   379,     1,   106,   100,
     284,     1,     4,   296,    12,    14,    17,    22,    26,    35,
      42,    47,    51,    62,    64,    68,    76,    77,    80,    83,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   282,   309,     4,     4,     4,   147,   282,   380,   381,
     383,   107,   277,   106,   281,   107,   297,   298,   111,   111,
       3,   159,   159,   159,     4,   107,   367,   368,   107,   353,
     354,   107,   343,   344,    97,    99,   102,   382,   384,   279,
     289,   147,   155,   299,   100,   300,   102,   153,   100,   369,
     299,   100,   355,   299,   100,   345,    99,   381,   386,     5,
       6,     7,     8,    11,    18,    32,    49,    50,    65,    71,
      73,    75,    78,   102,   109,   110,   111,   114,   116,   117,
     139,   140,   144,   145,   151,   155,   163,   164,   165,   166,
     167,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   208,   282,   101,    97,    97,
     278,   291,   301,   302,   303,   304,   305,   306,   307,   316,
     323,   327,   330,   335,   339,   281,   278,   308,   311,   312,
     313,   315,   278,   370,   371,   372,   281,   278,   356,   357,
     358,   359,   361,   362,   364,   281,   278,   291,   304,   305,
     306,   316,   323,   327,   330,   335,   346,   347,   348,   281,
     386,    98,   108,   102,    83,   148,   149,   157,   102,   102,
     102,    83,   151,   155,   195,   208,   282,   190,   190,   190,
     190,   190,   190,   190,   190,   108,   108,    98,   108,   102,
     103,    97,   139,   140,   141,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   131,   132,   207,   111,   112,   113,
     109,   110,   129,   130,    10,    45,   104,   105,   135,   136,
     133,   134,   114,   119,   115,   137,   118,   138,    98,   102,
     299,   147,   292,   101,   303,   100,   106,   213,   310,    53,
      55,    60,   314,   103,    97,     4,   101,    97,    49,   360,
     101,   358,   292,   101,   348,   171,     4,   208,   102,    98,
     100,   349,   148,    83,   148,   208,   111,   159,   192,   193,
     194,   192,   192,   111,   103,   159,     4,     4,   171,     4,
      53,    60,   161,   162,   168,   208,   208,     4,   208,   190,
     190,   190,   190,   195,   195,   196,   196,   148,   148,   197,
     197,   197,   197,   198,   198,   199,   200,   201,   202,   208,
     203,   171,   168,     4,    20,    29,    30,    40,    83,   117,
     148,   328,   331,   332,   334,   336,     1,     4,    13,    18,
      20,    21,    25,    34,    36,    37,    38,    39,    46,    61,
      70,    72,    74,    78,    79,    81,    85,   106,   148,   151,
     155,   167,   174,   175,   177,   188,   189,   190,   206,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   224,   227,
     229,   230,   231,   238,   239,   240,   243,   244,   255,   256,
     257,   258,   259,   260,   262,   263,   268,   269,   270,   271,
     273,   282,   148,   148,     1,   106,   312,   120,   101,   372,
      29,    83,   148,    99,   103,   168,   171,    66,   208,   222,
     223,   349,   350,   351,   103,   103,   103,   103,   103,   194,
     103,   103,   103,   187,   192,    99,   160,   208,   160,    97,
     103,   107,    99,   103,   102,   148,   148,    52,    52,     1,
     282,     4,     1,     4,    52,    71,   220,   221,   282,   283,
     329,   389,   106,   213,   340,   106,   213,   341,   101,   107,
       1,   106,   213,   148,     1,   106,   212,   102,     1,   102,
     245,   102,     4,    15,    23,   102,   102,   208,   261,   102,
     261,   213,   213,   213,   102,     1,   102,     4,   220,   106,
     106,   106,   106,   106,   106,   106,   101,   211,     1,   106,
       1,   106,     4,     4,   208,   209,   148,     4,     4,    71,
     103,    99,   148,   101,    97,   190,   190,   190,   190,   103,
     162,   208,   308,     4,   225,   226,   220,   282,   148,   148,
     102,   102,   102,   102,   120,    32,    73,   104,   105,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   119,   129,
     130,   133,   134,   135,   136,   139,   140,   333,    98,     1,
      97,   106,   102,   389,    71,    98,   100,   211,   225,    85,
     148,   167,   174,   175,   177,   188,   189,   206,   219,   228,
     248,   251,   254,   148,     1,   106,   209,     1,   106,   208,
     210,   208,     1,   106,   208,     1,   106,    16,    33,   264,
     265,   267,   208,   219,   272,   241,     1,   210,     4,   102,
     102,   389,    98,   158,   159,    98,   101,   222,   190,   103,
     120,     1,    97,   106,   106,   387,   102,   102,   308,   308,
     103,   308,   222,   102,   311,   221,   308,   100,   311,   278,
     317,   320,   321,   102,     4,   274,   275,     1,   106,   247,
      97,     4,     1,   106,   103,   103,   103,   102,   213,   213,
     265,   267,   103,   210,   103,   103,   100,   106,   365,   308,
     308,   100,   311,   179,   349,   158,   208,   107,   337,   338,
     209,   226,   100,   148,   148,   103,   103,   213,   103,   148,
      99,   103,   317,    99,    93,    94,   101,   278,   318,   321,
     278,   319,   320,   210,   120,    97,   103,   210,   249,   252,
     228,    41,   212,   212,   100,   232,   147,   155,   212,     1,
     212,   212,   101,   103,   103,   278,   363,    99,    99,    11,
      71,   278,   324,   325,   326,     4,     4,     4,   101,   390,
     390,   390,   103,   208,   275,   212,   247,   208,    27,    15,
      23,   233,   234,   235,   236,   237,     4,   266,   266,   212,
     365,   365,    93,    94,   101,   389,   102,   102,    95,    96,
     101,   278,   326,   278,   325,   103,   103,    97,   103,   390,
     106,   213,   322,   322,     1,   106,   250,   253,   254,   103,
     212,   209,   107,   101,   235,   215,   237,   103,   103,   242,
     365,   365,   390,   100,   168,   168,   388,   388,   388,   148,
     389,   389,     1,   103,   246,   212,   107,   213,   213,   278,
     278,   363,   103,   103,   213,   213,     4,   212,    94,    93,
     101,   387,   387,   103,   365,   365,   390
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
     227,   227,   227,   228,   228,   228,   228,   228,   228,   228,
     229,   229,   230,   230,   231,   232,   233,   233,   234,   234,
     235,   236,   236,   237,   237,   238,   238,   238,   238,   239,
     240,   240,   241,   242,   240,   243,   243,   244,   245,   245,
     246,   246,   247,   247,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   253,   254,   254,   255,   256,   256,   256,
     256,   256,   257,   257,   258,   258,   259,   259,   259,   259,
     259,   259,   260,   260,   261,   261,   262,   262,   263,   263,
     263,   264,   264,   265,   265,   265,   266,   266,   267,   268,
     269,   270,   271,   272,   272,   273,   274,   274,   275,   276,
     276,   277,   277,   278,   278,   279,   279,   280,   281,   281,
     282,   282,   283,   283,   284,   285,   285,   286,   286,   287,
     287,   288,   288,   289,   289,   290,   290,   291,   291,   291,
     291,   291,   292,   292,   293,   293,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     295,   296,   296,   297,   297,   298,   298,   298,   299,   299,
     300,   301,   301,   302,   302,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   304,   304,   305,   305,   306,
     307,   307,   307,   307,   308,   308,   309,   309,   310,   310,
     311,   311,   312,   312,   313,   314,   314,   314,   315,   316,
     317,   317,   318,   318,   319,   319,   320,   321,   322,   322,
     323,   323,   324,   324,   325,   326,   327,   328,   328,   329,
     330,   331,   331,   332,   332,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   334,   334,   335,
     336,   337,   337,   338,   338,   339,   340,   340,   341,   341,
     342,   343,   343,   344,   345,   346,   346,   347,   347,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   349,   349,
     350,   350,   351,   351,   352,   353,   353,   354,   355,   356,
     356,   357,   357,   358,   358,   358,   358,   359,   359,   360,
     360,   361,   362,   363,   363,   363,   363,   364,   365,   365,
     366,   367,   367,   368,   369,   369,   370,   370,   371,   371,
     372,   372,   373,   373,   374,   375,   375,   376,   376,   377,
     377,   378,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   380,   380,   381,   382,   382,   383,   384,   385,   386,
     387,   388,   389,   390
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
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     5,     3,     0,     1,     1,     2,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     2,
       5,     5,     0,     0,     7,     7,     7,     9,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       1,     1,     1,     1,     1,     3,     8,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     4,     3,     3,
       4,     3,     3,     3,     0,     1,     3,     3,     3,     3,
       4,     1,     2,     6,     6,     2,     0,     1,     2,     2,
       2,     5,     5,     1,     1,     6,     1,     3,     3,     2,
       2,     0,     1,     0,     1,     0,     1,     5,     0,     1,
       1,     2,     2,     3,     4,     1,     2,     1,     1,     5,
       5,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     1,     1,     0,     1,     2,     2,     4,     1,     3,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     6,     5,     5,     2,
       7,     7,     7,     7,     0,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     4,     0,     1,     1,     4,     9,
       2,     2,     0,     1,     0,     1,     5,     5,     1,     1,
       6,    10,     2,     2,     5,     5,     8,     5,     5,     2,
       4,     1,     1,     7,    10,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,     4,
       5,     0,     1,     5,     5,     7,     1,     1,     1,     1,
       7,     0,     1,     2,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       0,     1,     1,     3,     7,     0,     1,     2,     3,     0,
       1,     1,     2,     1,     1,     1,     1,     8,     8,     0,
       1,     9,    12,     3,     3,     6,     6,     6,     1,     2,
       7,     0,     1,     2,     3,     4,     0,     1,     1,     3,
       2,     4,     9,     9,     1,     1,     2,     6,     7,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     0,     1,     1,     3,     0,     0,
       0,     0,     0,     0
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
#line 2625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);}
#line 2679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 132 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 133 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 136 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 137 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 140 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 141 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 145 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 146 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 150 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 169 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 179 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 183 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 200 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 204 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 238 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 259 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 273 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 276 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 277 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 280 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 286 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 295 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 297 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 298 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 317 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 329 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 332 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 333 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 350 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 351 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 354 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 355 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 387 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 412 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 413 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 437 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 443 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3783 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3789 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3801 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3807 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3813 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 471 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3819 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3825 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 477 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3831 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3837 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 3843 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 482 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 3849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3855 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 486 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3861 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 487 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 490 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3873 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 493 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3879 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 496 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3885 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 497 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 3891 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 500 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 3897 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 509 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3903 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 510 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3909 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 511 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 512 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 514 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 515 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3939 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 518 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3945 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 519 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3951 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 520 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3957 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 521 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3963 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 524 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 532 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 3999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 533 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 542 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 546 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 547 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 550 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 553 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 554 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 572 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 572 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 572 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 576 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4);}
#line 4149 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 583 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 585 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 590 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4173 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4179 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 595 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4185 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4191 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 599 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4203 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 603 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4209 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 606 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4215 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 616 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 620 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 621 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 623 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4287 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 631 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 634 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4299 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4305 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4311 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4317 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 638 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4323 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 639 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4329 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 642 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4335 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4341 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 646 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4347 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4353 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 650 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4359 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 651 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4365 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 654 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4371 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4377 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4383 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4389 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4395 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4401 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 664 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4407 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 668 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4413 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4419 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4425 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 675 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4431 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 678 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4437 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4443 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4449 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4455 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4461 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4467 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 695 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4473 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4479 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 699 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4485 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 702 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4491 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4497 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4503 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 707 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4509 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 710 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4515 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 711 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4521 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4527 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 715 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4533 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4539 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4545 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4551 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4557 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 732 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4563 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 735 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4569 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 736 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4575 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 739 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4581 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 742 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4587 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 743 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4593 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 747 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4605 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 750 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4611 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 751 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 754 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 755 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 758 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 759 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 762 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 763 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 766 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 767 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 770 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 782 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 785 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 4701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 786 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 4707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 790 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 791 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 795 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 798 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 799 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 802 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 806 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);}
#line 4797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 810 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 4803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 811 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 4809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 814 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 815 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 4827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 819 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 4833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 4839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 827 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 830 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 4863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 831 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 4869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 834 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 835 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 836 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 838 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 839 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 840 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 841 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 842 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 844 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 4935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 848 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 4941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 851 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 4947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 852 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 4953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 855 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 4959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 859 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 4965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 860 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 4971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 4977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",3,1);}
#line 4983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 4989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 866 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 4995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 870 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 5025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 878 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 5031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 882 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 885 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 888 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 889 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 894 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 900 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 903 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 904 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 907 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 908 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 911 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 912 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 918 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 924 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 927 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 928 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 931 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 935 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 938 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 939 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 945 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 951 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 957 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 960 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 962 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 965 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 969 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 972 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 973 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 976 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 977 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 980 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 981 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 982 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 983 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 984 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 985 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 986 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 987 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 988 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 989 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 990 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 991 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 992 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 993 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 995 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 996 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 997 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 998 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 999 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1001 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1004 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1005 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1008 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1014 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1015 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1018 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1019 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1035 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1038 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1039 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1042 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1043 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1048 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1051 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1052 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1058 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1062 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1066 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1071 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1072 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1075 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1076 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1078 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1088 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1091 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1092 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1097 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 5589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 5595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1101 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 5601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 5607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1107 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1110 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1111 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1114 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1115 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1119 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1120 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1125 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1126 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1130 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1136 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1143 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1147 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1148 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1149 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1150 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1158 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1159 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1164 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1168 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 5763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1174 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1175 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1178 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 5781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 5787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 5793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 5799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 5805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 5811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 5823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 5829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 5835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1202 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 5841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 5859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 5865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 5871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1218 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1220 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1223 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1224 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 5931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1228 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 5937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1231 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 5943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1234 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 5949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1235 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 5955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1238 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 5961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1241 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 5967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1248 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 5973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1251 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 5979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1254 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 5985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1257 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 5991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1260 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 5997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1263 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6007 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1268 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




