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
#define YYLAST   2965

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  250
/* YYNRULES -- Number of rules.  */
#define YYNRULES  577
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  970

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
     806,   808,   808,   809,   809,   812,   813,   816,   817,   818,
     821,   822,   825,   828,   829,   832,   833,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   846,   849,   850,   853,
     854,   857,   861,   862,   863,   864,   867,   868,   871,   872,
     875,   876,   879,   880,   883,   884,   887,   890,   891,   892,
     896,   899,   905,   906,   909,   910,   913,   914,   917,   923,
     929,   930,   933,   934,   940,   941,   944,   950,   956,   962,
     964,   967,   971,   974,   975,   978,   979,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1006,
    1007,  1010,  1013,  1016,  1017,  1020,  1021,  1037,  1040,  1041,
    1044,  1045,  1050,  1051,  1051,  1054,  1055,  1058,  1061,  1064,
    1065,  1068,  1069,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    1079,  1081,  1086,  1087,  1090,  1091,  1094,  1095,  1100,  1103,
    1104,  1107,  1110,  1113,  1114,  1117,  1118,  1121,  1122,  1123,
    1124,  1128,  1129,  1132,  1133,  1136,  1142,  1150,  1151,  1152,
    1153,  1156,  1161,  1162,  1167,  1170,  1171,  1174,  1177,  1178,
    1181,  1182,  1185,  1186,  1189,  1190,  1195,  1196,  1201,  1204,
    1205,  1208,  1209,  1212,  1213,  1216,  1219,  1220,  1221,  1222,
    1223,  1224,  1225,  1226,  1227,  1230,  1231,  1234,  1237,  1238,
    1241,  1244,  1251,  1254,  1257,  1260,  1263,  1266
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
  "constructor_body", "struct_declaration", "struct",
  "struct_interfaces_opt", "struct_interfaces", "struct_body",
  "struct_member_declarations_opt", "struct_member_declarations",
  "struct_member_declaration", "array_initializer",
  "variable_initializer_list_opt", "variable_initializer_list",
  "interface_declaration", "interface_base_opt", "interface_base",
  "interface_body", "interface_member_declarations_opt",
  "interface_member_declarations", "interface_member_declaration",
  "interface_method_declaration", "new_opt",
  "interface_property_declaration", "interface_indexer_declaration",
  "interface_accessors", "interface_event_declaration",
  "interface_empty_body", "enum_declaration", "enum_base_opt", "enum_base",
  "enum_body", "enum_member_declarations_opt", "enum_member_declarations",
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

#define YYPACT_NINF -797

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-797)))

#define YYTABLE_NINF -573

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    76,   125,     7,    13,  -797,  -797,  -797,   157,   103,
    -797,   251,  -797,  2707,  -797,   258,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,     7,  -797,   173,  -797,  -797,   305,
    -797,  -797,   184,  -797,  -797,  -797,   305,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,   256,  2881,
    -797,  2852,  -797,  -797,   354,   206,   116,  -797,   229,  -797,
    -797,   916,   355,   405,  -797,   344,   344,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,   305,  -797,   316,
    -797,  -797,    13,   333,  -797,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,   341,
    -797,   349,  -797,   461,  -797,  -797,  -797,  -797,  -797,  -797,
     461,   461,   471,   385,   430,  -797,  -797,   437,   440,  -797,
    -797,   -46,  -797,   406,  -797,   270,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,   417,   350,   465,  -797,   305,   481,
    -797,   245,   485,  -797,   305,   491,  -797,   250,  -797,  2575,
    -797,  -797,   472,   277,   308,  -797,   309,   333,  -797,   499,
     320,   333,   505,   499,   321,   333,   499,   327,   333,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,   148,   459,  -797,  1162,
    -797,   492,  -797,  -797,   503,   507,  2288,  2575,  2575,  2575,
    2575,  2575,  2575,  2575,  2575,  -797,  -797,   508,   511,   171,
     519,  -797,  -797,  -797,  -797,   520,   528,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,
     362,  -797,  -797,  -797,   363,  -797,   422,   281,   304,     9,
     314,   517,   513,   518,   500,   -71,  -797,  -797,  -797,   230,
    -797,   252,   531,   541,  -797,  -797,  -797,   636,   540,   546,
    -797,  -797,   305,   595,   544,   331,  -797,  -797,  -797,  -797,
    -797,  -797,   305,  2881,  -797,   545,   337,  -797,  -797,  -797,
    -797,   266,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  2881,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,   548,
     358,  -797,  -797,  -797,  2575,   648,  2575,   341,   -52,   555,
     239,  1162,  1539,  2575,    70,    68,    72,   445,   551,   259,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,   651,   654,
    2575,   655,  2087,  -797,  2575,  -797,  -797,   657,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  2575,
    2575,  2575,  2575,  2575,  2575,  2575,  2575,  1162,  1162,  2575,
    2575,  2575,  2575,  2575,  2575,  2575,  2575,  2575,  2575,  2575,
    2575,  2575,  2087,  -797,  1162,  -797,  1162,   121,     7,   542,
    -797,   364,  -797,  -797,  2812,  -797,  -797,   499,  1288,  -797,
    -797,  1376,  -797,  -797,  -797,  2768,  -797,  -797,   412,  -797,
     560,  2087,  2575,  2173,  -797,   191,   215,   247,   562,  -797,
    -797,   563,    70,  -797,   565,   566,  2374,  1085,    70,  -797,
    -797,   419,  -797,  2575,  2575,   573,  -797,   568,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,   422,   422,   281,   281,
     349,   349,   304,   304,   304,   304,     9,     9,   314,   517,
     513,   518,   567,   500,   441,   569,    38,    73,  -797,  -797,
    -797,  2575,  -797,  -797,  1162,    78,    19,   274,  1162,  1162,
     621,   630,    48,   679,    60,  -797,   279,  -797,  -797,   288,
     593,   480,   126,   460,  1162,   141,  1857,   594,   235,   596,
     244,   597,   598,  2575,   601,  2575,   604,   464,   604,   603,
     240,  -797,    80,   508,   511,   591,   600,   605,   606,   607,
     608,   363,   611,  -797,  -797,  -797,   609,  1741,  -797,  -797,
    -797,   146,   167,  -797,  -797,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,    18,  -797,  -797,   615,   444,
    1162,  -797,  -797,  -797,  -797,   618,   610,  -797,  -797,  -797,
    -797,  2575,  -797,  2575,  2575,  2575,  -797,   617,  -797,  -797,
    -797,  -797,  2087,  -797,  2575,  -797,  -797,  -797,  -797,  -797,
    -797,    81,   619,   622,   625,   308,    82,    83,  1162,  1162,
     623,   624,   627,   629,   166,  2589,   635,   133,  -797,   632,
      44,   637,   638,  -797,  -797,  -797,  -797,  -797,  -797,  -797,
    1741,  -797,  -797,  -797,    82,  -797,  -797,   642,  1162,  -797,
    -797,  2489,  1162,   181,  2575,   187,  2575,  2575,  -797,   189,
    2575,   197,    29,  -797,  -797,  2489,  -797,  1495,   616,   643,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,   461,   -43,  -797,  1972,  -797,  -797,
    -797,  -797,  2575,  -797,  -797,   289,   308,   308,   645,     7,
     639,   626,   134,  -797,   175,  -797,   174,   180,   308,   308,
     644,   308,  2173,  -797,  -797,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,   646,     7,  -797,   745,  -797,
     308,   652,  -797,     7,     7,  -797,   656,   649,    84,   100,
     105,   110,   117,   118,   132,  -797,  -797,  -797,   211,  -797,
     659,    85,  -797,  -797,   218,  -797,  -797,  -797,   661,   664,
    -797,  -797,   665,  -797,  -797,   469,   604,    29,  -797,  -797,
    -797,  -797,   667,  2575,   668,   671,   660,   461,  2575,  -797,
    -797,  -797,   658,  -797,  -797,   673,   674,     7,   473,   650,
    2575,  -797,   774,  -797,  -797,   681,  1162,  1162,   680,   682,
     604,   683,  -797,  1162,   483,  -797,   684,     7,   487,   458,
     687,   370,   371,  2575,   669,   296,  -797,  -797,  -797,  2575,
    2575,   743,  -797,  -797,  1857,  1857,   690,   245,  -797,  -797,
    -797,  -797,  1857,   790,  1857,  1857,  -797,  -797,  -797,   693,
    -797,   289,   289,   496,   696,  -797,    32,  -797,  -797,  -797,
    -797,     7,    88,    89,  -797,  -797,  -797,  -797,    93,  -797,
    -797,   697,  -797,  -797,  -797,  -797,   700,  -797,  -797,   708,
    -797,  -797,   699,  2575,   799,  1857,  -797,   211,  -797,  -797,
    2575,   777,  -797,   255,  -797,   805,   805,  -797,  1857,  -797,
    -797,  -797,  -797,  -797,   289,   289,  -797,   710,   711,   712,
     497,   714,     7,     7,   713,   715,   301,  -797,   302,   302,
    -797,   227,  -797,  -797,  -797,  2575,   717,  1857,  2575,   716,
     720,   255,  -797,  1625,  -797,  -797,   719,   721,  -797,   398,
     409,  -797,     7,  2087,  2087,  -797,  -797,  -797,   732,  -797,
     722,  -797,  -797,  -797,  1162,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,   123,  -797,   659,  1857,  -797,   723,  -797,
    -797,  -797,  1741,  -797,   604,   604,  -797,   735,   738,   731,
     730,   734,   604,   604,  -797,    94,  -797,  -797,  -797,  -797,
    1857,  -797,  -797,  -797,  -797,   289,   289,  -797,  -797,  -797,
    -797,  -797,   736,  -797,  -797,  -797,  -797,  -797,  -797,  -797
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     321,     0,     0,   323,   322,   335,   337,   338,   330,     0,
      10,     0,     1,   352,   345,   323,   343,   346,   347,   348,
     349,   350,   351,   324,   548,   549,     0,   336,   332,     0,
     342,   341,   331,   356,   357,   358,     0,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,     0,   353,
     354,   352,   344,   550,   553,   330,     0,   333,     0,   374,
     373,     0,     0,     0,   483,     0,     0,   355,   558,   563,
     556,   557,   559,   560,   561,   562,   564,     0,   554,     0,
     340,   339,   321,   328,    20,    25,    32,    23,    34,    33,
      28,    30,    35,    24,    26,    36,    29,    31,    27,   409,
      15,   408,    12,    14,    16,    19,    21,    22,    17,    18,
      13,    11,     0,   535,   509,   372,   371,   375,   485,   570,
      11,     0,   565,   568,   555,   323,   329,   327,    38,    37,
      44,    40,    39,    41,     0,     0,     0,   536,     0,     0,
     510,     0,     0,   376,     0,     0,   486,     0,   573,    75,
     567,   569,     0,   323,   323,   537,   323,   328,   380,   511,
     323,   328,   377,   378,   323,   328,   487,   323,   328,   573,
     566,   551,     3,     4,     5,     6,     0,     0,     9,     0,
       7,     0,    79,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     2,     0,     0,    97,
      52,    51,    55,    56,    57,     0,    76,    58,    59,    99,
     100,    60,    84,    54,    61,    63,    64,   101,   113,    62,
     105,   114,   111,   112,   127,   104,   131,   134,   137,   144,
     147,   149,   151,   153,   155,   157,   171,   172,    77,    98,
     334,   417,     0,   407,   412,   414,   415,     0,     0,   541,
     542,   534,     0,   523,     0,   323,   515,   517,   518,   520,
     519,   508,     0,   352,   396,     0,   323,   385,   387,   388,
     389,     0,   390,   391,   392,   393,   394,   395,   370,   352,
     501,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     323,   491,   482,   552,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,   121,   121,   121,   131,     0,    98,
     108,   109,   110,    95,   102,   103,   106,   107,     0,     0,
       0,     0,    71,   571,     0,    82,    83,     0,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,   419,     0,   418,     0,     0,   323,   544,
     538,   323,   381,   524,     0,   512,   516,   379,     0,   382,
     386,     0,   411,   410,   401,     0,   488,   492,     0,    80,
       0,    71,     0,   504,    87,     0,     0,     0,     0,   126,
     125,     0,   122,   123,     0,     0,     0,    65,   121,    67,
      68,     0,    66,     0,     0,    72,    46,     0,    48,    78,
      94,   159,   128,   129,   130,   127,   132,   133,   135,   136,
     143,   142,   139,   138,   140,   141,   145,   146,   148,   150,
     152,   154,     0,   156,     0,     0,     0,     0,   547,   546,
     413,     0,   539,   543,     0,     0,     0,   330,     0,     0,
       0,     0,     0,     0,     0,   576,     0,   443,   444,     0,
       0,   330,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,   294,     0,     0,     0,     0,
       0,   197,     0,    16,    17,    56,    99,   100,    84,   111,
     112,     0,     0,   195,   177,   178,     0,   194,   179,   175,
     176,     0,     0,   180,   181,   230,   231,   182,   189,   245,
     246,   247,   248,   183,   277,   278,   279,   280,   281,   184,
     185,   186,   187,   188,   190,    98,    81,    92,     0,     0,
       0,   208,   506,   210,   209,     0,   505,    96,    91,    90,
      93,     0,   124,     0,     0,     0,   115,     0,    73,    50,
      45,    49,     0,    69,     0,    74,    70,   420,   416,   173,
     545,     0,     0,   576,     0,   323,     0,     0,     0,     0,
       0,     0,     0,     0,   206,     0,     0,     0,   204,   576,
       0,     0,     0,   479,   478,   442,   481,   480,   471,   192,
       0,   283,   282,   309,     0,   285,   284,     0,     0,   259,
     258,   264,     0,     0,     0,     0,     0,     0,   295,     0,
       0,     0,     0,   310,   249,     0,   252,     0,   206,   203,
     216,   219,   220,   217,   221,   222,   218,   191,   196,   201,
     199,   202,   200,    85,    42,     0,   502,     0,   120,   118,
     119,   116,     0,    47,   158,     0,   323,   323,     0,   323,
       0,     0,     0,   213,     0,   574,     0,     0,   323,   323,
       0,   323,     0,   454,   453,   465,   466,   447,   448,   455,
     456,   457,   458,   459,   449,   450,   460,   461,   462,   463,
     464,   468,   467,   451,   452,     0,   323,   400,     0,   399,
     323,     0,   441,   323,   323,   198,   212,     0,     0,    56,
      99,   100,    84,   111,   112,   225,   270,   274,     0,   265,
     271,     0,   289,   286,     0,   291,   288,   174,     0,     0,
     293,   292,     0,   297,   296,     0,     0,   298,   301,   299,
     314,   313,     0,     0,     0,     0,    88,    42,     0,   503,
     507,   117,     0,   532,   531,     0,     0,   323,     0,   473,
       0,   398,     0,   397,   432,     0,     0,     0,     0,     0,
       0,     0,   207,     0,     0,   205,     0,   323,     0,     0,
       0,   323,   323,     0,     0,     0,   316,   263,   262,   266,
       0,     0,   290,   287,     0,     0,     0,     0,   305,   308,
     302,   300,     0,     0,     0,     0,    86,    89,    43,     0,
     533,     0,     0,     0,     0,   576,     0,   472,   474,   215,
     214,   323,     0,     0,   405,   403,   477,   404,     0,   439,
     402,     0,   440,   577,   577,   577,     0,   422,   425,     0,
     423,   427,     0,     0,     0,     0,   272,     0,   267,   275,
       0,   232,   311,   236,   234,   306,   306,   312,     0,   251,
     250,   211,   522,   521,     0,     0,   577,     0,     0,     0,
       0,     0,   323,   323,     0,     0,     0,   577,     0,     0,
     438,     0,   318,   317,   315,   268,     0,     0,     0,     0,
       0,   237,   238,     0,   241,   307,     0,     0,   253,   323,
     323,   525,   323,    71,    71,   575,   575,   575,     0,   434,
       0,   435,   470,   469,     0,   445,   421,   431,   430,   576,
     576,   256,   255,     0,   269,   273,     0,   233,     0,   244,
     235,   239,   240,   242,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,   433,     0,   428,   429,   261,   260,
       0,   276,   243,   304,   303,     0,     0,   577,   475,   476,
     574,   574,     0,   257,   529,   530,   526,   436,   437,   446
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -797,  -797,  -797,  -797,   -75,    -4,   662,  -797,    39,  -797,
     703,  -797,   -58,  -797,   666,    96,   -99,   426,  -797,   282,
    -797,  -797,  -797,  -797,  -290,  -355,  -797,  -797,   -57,  -797,
    -797,    56,   150,  -797,   225,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,   442,   401,   453,   335,  -797,   -72,
    -797,   450,  -170,   267,   129,   261,   498,   501,   502,   504,
     494,  -797,  -797,   474,  -797,   434,  -605,  -617,  -501,  -328,
    -135,  -797,   -30,  -797,  -797,  -797,  -579,  -247,   168,  -616,
    -797,  -797,   260,   106,  -797,    75,  -797,  -797,  -797,  -797,
    -797,  -797,   -24,  -797,   -21,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,    22,  -797,  -797,  -797,  -797,  -797,
    -797,   -12,  -797,  -797,  -797,  -797,  -797,  -797,   390,  -797,
    -797,  -797,   139,    23,   143,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,    34,  -797,   800,    -2,  -797,  -797,   154,    -1,
     420,  -797,  -797,   877,  -797,  -797,   758,     0,  -134,  -205,
    -797,   838,  -797,   825,  -797,  -797,  -797,  -124,  -797,  -797,
    -797,   628,  -149,  -140,  -138,  -797,  -561,  -797,  -797,  -594,
     525,  -797,  -797,  -797,  -133,   119,  -797,  -797,   113,   122,
      20,  -130,  -797,    31,    30,  -127,  -797,  -797,  -126,  -797,
    -797,  -797,  -797,  -123,  -797,  -797,  -797,  -797,  -797,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,   631,  -295,  -797,
    -797,  -797,  -797,  -797,  -797,  -797,  -797,   663,  -797,  -797,
    -797,  -797,     3,  -797,  -786,  -797,  -797,  -797,  -797,  -797,
    -797,   535,  -797,  -797,  -797,   883,  -797,  -797,  -797,  -797,
     762,  -797,  -797,  -797,  -797,   742,  -333,  -277,  -565,  -796
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   195,   196,     9,   100,   492,   102,   103,   197,   105,
     106,   107,   198,   109,   110,   746,   400,   559,   415,   416,
     199,   200,   201,   202,   203,   417,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   806,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   401,
     402,   403,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   339,   418,   570,   728,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   587,   588,   542,
     543,   512,   662,   663,   513,   717,   514,   515,   516,   854,
     890,   891,   892,   893,   894,   517,   518,   519,   743,   936,
     520,   521,   611,   950,   789,   718,   847,   923,   719,   848,
     924,   720,   522,   523,   524,   525,   526,   527,   619,   528,
     529,   737,   738,   896,   739,   530,   531,   532,   533,   742,
     534,   785,   786,     2,     3,   241,   152,    14,   127,   239,
      11,    83,     4,     5,     6,     7,    15,    16,    17,    48,
      49,    50,    18,   117,    65,   142,   143,   159,   165,   265,
     266,   267,   268,   269,   270,   271,   242,   112,   384,   243,
     244,   245,   366,   246,   272,   780,   837,   840,   781,   782,
     919,   273,   871,   872,   873,   274,   465,   591,   275,   466,
     467,   695,   468,   276,   469,   817,   818,   277,   595,   598,
      19,    66,   145,   146,   168,   289,   290,   291,   544,   545,
     546,    20,   139,   140,   161,   254,   255,   256,   257,   374,
     258,   259,   814,   260,   754,    21,   136,   137,   157,   248,
     249,   250,    22,    23,    24,    25,    77,    78,    79,   121,
     122,   150,   123,   151,    26,   171,   765,   942,   592,   878
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    13,   119,   108,   131,   394,   638,   445,   658,   724,
     745,   132,   133,    51,   660,    52,   307,   163,   281,   347,
     166,   130,   -11,   573,   701,   862,   863,   282,    56,   283,
     264,   750,   716,   280,   284,    58,   538,   285,   879,   880,
     286,   287,   567,   868,   288,   735,   741,   359,    32,   580,
     391,   147,    55,   148,   348,   748,   772,   101,   378,   129,
     111,   583,   736,   158,   584,   758,   158,   360,   129,   158,
     901,   130,   119,   130,   385,   130,   120,   568,   899,   900,
       8,   916,   572,   162,   628,   655,   661,   584,   784,   791,
     574,   495,   874,   875,     1,   755,   756,   876,   962,   705,
     104,  -223,   774,   869,    30,  -572,  -226,   768,   769,   778,
     771,  -227,   585,   349,   350,   702,   361,    80,  -224,  -228,
     362,   108,   448,    51,   948,    12,   803,   601,   306,   -11,
     129,   586,   264,  -229,   697,   761,   383,   120,   377,   776,
     120,   281,   605,   120,   351,   352,   120,   639,   607,   129,
     282,    51,   283,    52,   247,   819,   280,   284,   253,   128,
     285,   966,   263,   286,   287,   279,   842,   288,   641,   964,
     965,   129,   846,   426,   427,   298,   318,   372,   111,   399,
     319,   399,   722,   399,   129,   309,   495,   158,   725,   128,
     730,   129,   129,   129,   129,   129,   129,  -223,   733,   129,
     129,   132,  -226,  -223,   129,   129,  -223,  -227,  -226,    31,
     408,  -226,   787,  -227,  -224,  -228,  -227,   495,   104,   792,
    -224,  -228,    81,  -224,  -228,   305,   949,   449,   921,  -229,
     698,   762,   602,   404,   405,  -229,   609,   388,  -229,   699,
     763,   626,   130,   108,   108,   629,   294,   606,   613,    55,
     867,   120,   640,   253,    55,    32,   295,    59,  -320,   614,
    -484,   120,   130,   411,   263,    28,  -330,   615,  -330,   320,
     888,    54,   698,   642,    28,    60,   766,    29,   889,   321,
      61,   764,   767,   928,    62,   129,   672,   723,   279,   108,
     108,   129,    57,   726,   547,   731,    92,   395,   397,    63,
     111,   111,   129,   734,   444,   363,   108,   364,   108,    55,
     495,   251,   365,    95,    28,   261,   108,   788,   548,   278,
     108,   709,   292,   494,   793,    64,   128,   108,   361,    82,
     664,   594,   362,   922,   597,   539,   557,   610,   603,   393,
     104,   104,   627,   430,   431,   115,   111,   111,   116,   169,
     549,   622,   623,   624,   946,   947,  -572,   361,   129,   113,
     446,   362,   447,   111,    85,   111,   381,    86,  -572,   247,
     456,  -325,   382,   111,   464,  -572,   575,   111,  -326,   381,
     535,   464,    28,    68,   111,   593,   104,   104,   381,   752,
     343,   344,    90,   844,   596,   753,   108,    91,   914,   845,
     108,   108,   381,   104,   915,   104,  -572,  -572,   917,   114,
    -540,  -406,    93,   104,    94,    69,   108,   104,  -572,  -572,
     493,  -513,  -383,   124,   104,  -572,    96,    97,  -489,  -572,
      98,   638,  -514,   345,   346,  -572,   133,   496,  -384,   126,
      70,    71,    72,    73,    74,    75,    76,   353,   354,   494,
     571,   807,   128,   111,   576,   577,  -572,   111,   111,  -490,
     129,   581,  -572,   589,   130,   452,   851,   852,  -572,  -572,
     604,  -424,  -426,   111,   857,   134,   859,   860,   432,   433,
     434,   435,   108,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   135,   104,   337,   338,  -572,   104,   104,  -527,
     709,   325,   326,   327,   495,   495,   535,  -572,   149,   324,
    -528,   536,   495,   104,   495,   495,   324,   884,   558,   154,
     108,   108,   310,   311,   312,   313,   314,   315,   316,   317,
     898,   497,   496,   340,   341,   342,   645,   138,   324,   111,
     565,   324,   494,   644,   141,   747,   493,   144,   940,   941,
     108,   833,   834,   494,   108,   495,   406,   341,   342,   927,
     381,   296,   296,   496,   381,   156,   303,   494,   495,   381,
     368,   797,   815,   240,   666,   667,   665,   111,   111,   104,
     368,   160,   829,   238,   368,   164,   832,   600,    28,   864,
     865,   167,   905,   906,   301,   709,   252,   495,   951,   535,
     798,   799,   262,   495,   708,   302,   498,   111,   721,   303,
     535,   111,   428,   429,   436,   437,   318,   104,   104,   319,
     308,   322,   963,   323,   535,   324,   497,   967,   968,   943,
     944,   355,   356,   357,   367,   826,   495,   358,   368,   493,
     369,   370,   495,   371,   373,   375,   379,   104,   747,   386,
     493,   104,   389,   392,   407,   409,   496,   497,   410,   412,
     495,   420,   451,   537,   493,   550,   551,   710,   553,   554,
     562,   563,   566,   578,   564,   422,   423,   424,   425,   425,
     425,   425,   579,   582,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   599,   425,   608,   630,   612,   616,
     617,   498,   779,   620,   381,   625,   631,   647,   108,   108,
     637,   632,   633,   634,   635,   108,   501,   636,   643,   646,
     652,   656,   855,   659,   657,   668,   669,   707,   238,   670,
     390,   671,   498,   696,   700,   703,   672,   398,   704,   856,
     698,   422,   759,   918,   918,   757,   760,   770,   773,   628,
     497,   783,   777,   762,   238,   813,   790,   816,   419,   810,
     393,   711,   822,   823,   794,   111,   111,   795,   796,   828,
     802,   804,   111,   421,   805,   779,   811,   812,   661,   836,
     839,   821,   499,   824,   850,   825,   827,   830,   835,   843,
     853,   858,   861,   442,   834,   238,   120,   866,   877,   953,
     954,   833,   881,   784,   887,   104,   104,   960,   961,   895,
     902,   501,   104,   903,   904,   907,   912,   905,   913,   870,
     926,   930,   934,   929,   935,   498,   238,   541,   906,   955,
     952,   956,   957,   958,   500,   494,   712,   959,   155,   969,
     561,   299,   501,   808,   653,   300,   710,   560,   560,   556,
     496,   496,   552,   438,   443,   502,   108,   439,   496,   440,
     496,   496,   441,   932,   706,   849,   775,   931,   820,   885,
     908,   910,   933,   925,   494,   621,   800,   499,   883,   897,
     801,    27,   125,   153,   590,   569,   648,    67,   649,   650,
     651,   118,   535,   450,   380,   841,   831,   937,   938,   920,
     813,   496,   909,   838,   911,   939,   453,    53,   499,   170,
     945,   293,     0,   111,   496,     0,     0,   618,   376,   618,
      55,   387,     0,     0,     0,     0,     0,     0,    84,   500,
      85,   535,   493,    86,     0,   501,     0,     0,    87,     0,
     711,   710,    88,   496,   497,   497,   501,     0,     0,   496,
     502,    89,   497,   104,   497,   497,     0,     0,    90,     0,
     500,     0,     0,    91,     0,     0,     0,    92,     0,     0,
       0,   493,     0,     0,     0,     0,     0,     0,    93,     0,
      94,   502,   496,     0,    95,     0,     0,   751,   496,     0,
       0,     0,    96,    97,     0,   497,    98,     0,   654,    99,
       0,   499,     0,     0,     0,     0,   496,     0,   497,     0,
       0,     0,   713,     0,     0,   712,     0,     0,     0,   498,
     498,     0,     0,     0,     0,     0,     0,   498,     0,   498,
     498,     0,     0,     0,     0,   711,     0,   497,     0,     0,
       0,     0,     0,   497,     0,     0,     0,     0,   569,     0,
     727,   729,     0,   500,   732,     0,     0,     0,     0,   740,
       0,   727,     0,     0,   714,     0,     0,     0,     0,     0,
     498,     0,     0,     0,   502,     0,   497,     0,     0,     0,
       0,   541,   497,   498,     0,   715,     0,     0,     0,    55,
     172,   173,   174,   175,     0,     0,   176,    84,     0,    85,
     497,     0,    86,   177,     0,     0,   541,    87,     0,     0,
     712,    88,   498,     0,     0,     0,     0,   178,   498,     0,
      89,     0,     0,     0,     0,   501,     0,    90,     0,   501,
     501,     0,    91,     0,   179,   180,    92,   501,     0,   501,
     501,     0,     0,     0,     0,     0,     0,    93,     0,    94,
     181,   498,     0,    95,     0,     0,   182,   498,   183,     0,
     184,    96,    97,   185,     0,    98,    55,     0,     0,     0,
       0,     0,     0,     0,    84,   498,    85,   727,     0,    86,
     501,     0,   809,     0,    87,     0,     0,   186,    88,     0,
       0,   713,     0,   501,   569,   499,   499,    89,     0,     0,
       0,   191,   192,   499,    90,   499,   499,     0,     0,    91,
       0,     0,     0,    92,     0,     0,     0,   727,     0,     0,
     501,     0,   501,   727,    93,     0,    94,     0,   501,     0,
      95,     0,     0,     0,     0,     0,     0,     0,    96,    97,
       0,     0,    98,   714,     0,   297,   499,   500,   500,     0,
       0,     0,     0,     0,     0,   500,     0,   500,   500,   499,
       0,   501,     0,     0,   715,     0,     0,   501,   502,   502,
       0,     0,     0,     0,     0,     0,   502,   882,   502,   502,
       0,     0,     0,     0,   886,   501,   713,     0,   499,    59,
       0,     0,   457,     0,   499,     0,     0,     0,   500,     0,
      84,     0,    85,     0,     0,    86,     0,    60,   458,     0,
      87,   500,    61,     0,    88,     0,    62,   459,   460,   502,
       0,     0,   569,    89,     0,     0,     0,   499,   461,     0,
      90,    63,   502,   499,     0,    91,     0,     0,   714,    92,
     500,     0,     0,     0,     0,     0,   500,     0,     0,     0,
      93,   499,    94,     0,     0,     0,    95,    64,     0,   715,
       0,   502,     0,     0,    96,    97,     0,   502,    98,     0,
       0,   462,     0,     0,     0,     0,     0,   470,     0,   500,
     471,   172,   173,   174,   175,   500,     0,   176,    84,   472,
      85,     0,     0,    86,   473,     0,   474,   475,    87,     0,
     502,   476,    88,   500,     0,   463,   502,     0,   178,     0,
     477,    89,   478,   479,   480,   481,     0,     0,    90,     0,
       0,     0,   482,    91,   502,   179,   180,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   483,    93,     0,
      94,   181,     0,     0,    95,     0,   484,   182,   485,   183,
     486,   184,    96,    97,   487,   488,    98,   489,     0,   297,
       0,   490,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   381,  -193,   186,     0,
       0,     0,   491,     0,     0,   187,   188,   189,     0,     0,
     190,     0,   191,   192,     0,     0,   744,     0,     0,    55,
     172,   173,   174,   175,     0,     0,   176,    84,     0,    85,
       0,     0,    86,   177,     0,   193,   194,    87,     0,     0,
       0,    88,     0,     0,     0,     0,     0,   178,     0,     0,
      89,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,    91,    55,   179,   180,    92,     0,     0,     0,
       0,    84,     0,    85,     0,     0,    86,    93,     0,    94,
     181,    87,     0,    95,     0,    88,   182,     0,   183,     0,
     184,    96,    97,   185,    89,    98,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,    91,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,   186,     0,     0,
       0,    93,     0,    94,   187,   188,   189,    95,     0,   190,
       0,   191,   192,     0,     0,    96,    97,     0,     0,    98,
       0,     0,   396,     0,     0,     0,     0,     0,     0,   471,
     172,   173,   174,   175,   193,   194,   176,    84,   472,    85,
     888,     0,    86,   473,     0,   474,   475,    87,   889,     0,
     476,    88,     0,     0,     0,     0,     0,   178,     0,   477,
      89,   478,   479,   480,   481,     0,     0,    90,     0,     0,
       0,   482,    91,     0,   179,   180,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   483,    93,     0,    94,
     181,     0,     0,    95,     0,   484,   182,   485,   183,   486,
     184,    96,    97,   487,   488,    98,   489,     0,   297,     0,
     490,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   381,     0,   186,     0,     0,
       0,   491,     0,     0,   187,   188,   189,     0,     0,   190,
       0,   191,   192,     0,     0,   471,   172,   173,   174,   175,
       0,     0,   176,    84,   472,    85,     0,     0,    86,   473,
       0,   474,   475,    87,   193,   194,   476,    88,     0,     0,
       0,     0,     0,   178,     0,   477,    89,   478,   479,   480,
     481,     0,     0,    90,     0,     0,     0,   482,    91,     0,
     179,   180,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   483,    93,     0,    94,   181,     0,     0,    95,
       0,   484,   182,   485,   183,   486,   184,    96,    97,   487,
     488,    98,   489,     0,   297,     0,   490,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   381,     0,   186,     0,     0,     0,   491,     0,     0,
     187,   188,   189,     0,     0,   190,     0,   191,   192,     0,
       0,    55,   172,   173,   174,   175,     0,     0,   176,    84,
     472,    85,     0,     0,    86,   473,     0,     0,   475,    87,
     193,   194,   476,    88,     0,     0,     0,     0,     0,   178,
       0,   477,    89,   478,   479,   480,   481,     0,     0,    90,
       0,     0,     0,   482,    91,     0,   179,   180,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   483,    93,
       0,    94,   181,     0,     0,    95,     0,   484,   182,   485,
     183,   486,   184,    96,    97,   487,   488,    98,   489,     0,
       0,     0,   490,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   381,     0,   186,
       0,     0,     0,   491,     0,     0,   187,   188,   189,     0,
       0,   190,     0,   191,   192,     0,    55,   172,   173,   174,
     175,     0,     0,   176,    84,     0,    85,     0,     0,    86,
     177,     0,     0,     0,    87,     0,   193,   194,    88,     0,
       0,     0,     0,     0,   178,     0,     0,    89,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,    91,
       0,   179,   180,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,    94,   181,   540,     0,
      95,     0,     0,   182,     0,   183,     0,   184,    96,    97,
     185,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   393,   749,   186,     0,     0,     0,     0,     0,
       0,   187,   188,   189,     0,     0,   190,     0,   191,   192,
       0,    55,   172,   173,   174,   175,     0,     0,   176,    84,
       0,    85,     0,     0,    86,   177,     0,     0,     0,    87,
       0,   193,   194,    88,     0,     0,     0,     0,     0,   178,
       0,     0,    89,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,    91,     0,   179,   180,    92,     0,
     413,     0,     0,     0,     0,     0,     0,   414,     0,    93,
       0,    94,   181,     0,     0,    95,     0,     0,   182,     0,
     183,     0,   184,    96,    97,   185,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,   172,   173,
     174,   175,     0,     0,   176,    84,     0,    85,     0,   186,
      86,   177,     0,     0,     0,    87,   187,   188,   189,    88,
       0,   190,     0,   191,   192,   178,     0,     0,    89,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
      91,     0,   179,   180,    92,     0,   193,   194,     0,     0,
       0,     0,     0,     0,     0,    93,     0,    94,   181,   540,
       0,    95,     0,     0,   182,     0,   183,     0,   184,    96,
      97,   185,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   393,     0,   186,     0,     0,     0,     0,
       0,     0,   187,   188,   189,     0,     0,   190,     0,   191,
     192,     0,    55,   172,   173,   174,   175,     0,     0,   176,
      84,     0,    85,     0,     0,    86,   177,     0,     0,     0,
      87,     0,   193,   194,    88,     0,     0,     0,     0,     0,
     178,     0,     0,    89,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,    91,     0,   179,   180,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,    94,   181,     0,     0,    95,     0,     0,   182,
       0,   183,     0,   184,    96,    97,   185,     0,    98,     0,
       0,   304,     0,     0,     0,     0,     0,     0,    55,   172,
     173,   174,   175,     0,     0,   176,    84,     0,    85,     0,
     186,    86,   177,     0,     0,     0,    87,   187,   188,   189,
      88,     0,   190,     0,   191,   192,   178,     0,     0,    89,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,    91,     0,   179,   180,    92,     0,   193,   194,     0,
       0,     0,     0,     0,     0,     0,    93,     0,    94,   181,
       0,     0,    95,     0,     0,   182,     0,   183,     0,   184,
      96,    97,   185,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,   555,     0,     0,
       0,     0,     0,   187,   188,   189,     0,     0,   190,     0,
     191,   192,     0,    55,   172,   173,   174,   175,     0,     0,
     176,    84,     0,    85,     0,     0,    86,   177,     0,     0,
       0,    87,     0,   193,   194,    88,     0,     0,     0,     0,
       0,   178,     0,     0,    89,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,    91,     0,   179,   180,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,    94,   181,     0,     0,    95,     0,     0,
     182,     0,   183,     0,   184,    96,    97,   185,     0,    98,
       0,     0,   297,     0,     0,     0,     0,     0,     0,    55,
     172,   173,   174,   175,     0,     0,   176,    84,     0,    85,
       0,   186,    86,   177,     0,     0,     0,    87,   187,   188,
     189,    88,     0,   190,     0,   191,   192,   178,     0,     0,
      89,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,   673,    91,     0,   179,   180,    92,     0,   193,   194,
       0,     0,     0,     0,     0,     0,     0,    93,     0,    94,
     181,     0,     0,    95,     0,     0,   182,     0,   183,     0,
     184,    96,    97,   185,     0,    98,     0,     0,     0,     0,
       0,     0,   674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   186,     0,     0,
       0,     0,     0,     0,   187,   188,   189,     0,     0,   190,
       0,   191,   192,   675,   676,     0,     0,     0,   677,   678,
     679,   680,   681,   682,   683,   684,   685,  -319,   686,     0,
       0,     0,     0,     0,   193,   194,    33,     0,   687,   688,
       0,     0,   689,   690,   691,   692,     0,     0,   693,   694,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,    36,    37,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,     0,     0,    59,
      43,     0,   457,     0,    44,     0,     0,     0,     0,     0,
      84,     0,    85,     0,     0,    86,    45,    60,   458,    46,
      87,    47,    61,     0,    88,     0,    62,   459,   460,     0,
       0,     0,     0,    89,     0,     0,     0,     0,   461,     0,
      90,    63,     0,     0,     0,    91,    55,     0,     0,    92,
       0,     0,     0,     0,    84,     0,    85,     0,     0,    86,
      93,     0,    94,     0,    87,     0,    95,    64,    88,     0,
       0,   454,     0,     0,    96,    97,     0,    89,    98,     0,
       0,   462,     0,     0,    90,     0,     0,     0,     0,    91,
       0,    33,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,    94,     0,     0,     0,
      95,     0,     0,    34,     0,     0,     0,     0,    96,    97,
      33,     0,    98,     0,     0,   455,    35,     0,     0,     0,
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
       1,     3,    77,    61,   103,   300,   507,   362,   573,   614,
     627,   110,   111,    15,   575,    15,   186,   141,   167,    10,
     144,     3,     4,     4,   589,   811,   812,   167,    29,   167,
     164,   647,   611,   167,   167,    36,   391,   167,   834,   835,
     167,   167,     4,    11,   167,    16,   625,   118,     4,     1,
     102,    97,     4,    99,    45,    98,   672,    61,   263,   111,
      61,     1,    33,   138,     4,   659,   141,   138,   111,   144,
     866,     3,   147,     3,   279,     3,    77,     4,   864,   865,
       4,   877,     4,   141,     4,     4,     4,     4,     4,     4,
      71,   381,     4,     4,    81,   656,   657,     4,     4,   600,
      61,     1,   696,    71,     1,    98,     1,   668,   669,   703,
     671,     1,    52,   104,   105,    71,    98,     1,     1,     1,
     102,   179,     1,   125,     1,     0,   743,     1,   186,   111,
     111,    71,   266,     1,     1,     1,   271,   138,   262,   700,
     141,   290,     1,   144,   135,   136,   147,     1,   476,   111,
     290,   153,   290,   153,   156,   760,   290,   290,   160,   111,
     290,   957,   164,   290,   290,   167,   783,   290,     1,   955,
     956,   111,   789,   343,   344,   179,   108,   252,   179,   111,
     108,   111,     1,   111,   111,   186,   476,   262,     1,   111,
       1,   111,   111,   111,   111,   111,   111,    97,     1,   111,
     111,   300,    97,   103,   111,   111,   106,    97,   103,   106,
     309,   106,     1,   103,    97,    97,   106,   507,   179,     1,
     103,   103,   106,   106,   106,   186,   103,   106,     1,    97,
      97,    97,   106,   305,   306,   103,     1,   294,   106,   106,
     106,     1,     3,   301,   302,   492,    98,   106,     4,     4,
     815,   252,   106,   255,     4,     4,   108,     1,     0,    15,
       4,   262,     3,   320,   266,   108,   100,    23,   102,    98,
      15,    98,    97,   106,   108,    19,   102,   120,    23,   108,
      24,   106,   102,   888,    28,   111,   120,   106,   290,   347,
     348,   111,   108,   106,   103,   106,    51,   301,   302,    43,
     301,   302,   111,   106,   361,    53,   364,    55,   366,     4,
     600,   157,    60,    68,   108,   161,   374,   106,   103,   165,
     378,   611,   168,   381,   106,    69,   111,   385,    98,   100,
     577,   466,   102,   106,   469,   392,   408,   102,   473,   100,
     301,   302,   102,   347,   348,     1,   347,   348,     4,    99,
     103,   486,   487,   488,   919,   920,    98,    98,   111,     4,
     364,   102,   366,   364,    14,   366,   100,    17,    98,   371,
     374,   101,   106,   374,   378,    98,   102,   378,   101,   100,
     381,   385,   108,    29,   385,   106,   347,   348,   100,   100,
     109,   110,    42,    97,   106,   106,   454,    47,    97,   103,
     458,   459,   100,   364,   103,   366,    98,    98,   106,     4,
     101,   103,    62,   374,    64,    61,   474,   378,    98,    98,
     381,   101,   101,   107,   385,    98,    76,    77,   101,    98,
      80,   932,   101,   129,   130,    98,   535,   381,   101,   106,
      86,    87,    88,    89,    90,    91,    92,   133,   134,   507,
     454,   746,   111,   454,   458,   459,    98,   458,   459,   101,
     111,   462,    98,   464,     3,   101,   794,   795,    98,    98,
     474,   101,   101,   474,   802,     4,   804,   805,   349,   350,
     351,   352,   540,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   107,   454,   131,   132,    98,   458,   459,   101,
     790,   139,   140,   141,   794,   795,   507,    98,   102,    97,
     101,    99,   802,   474,   804,   805,    97,   845,    99,   102,
     578,   579,   187,   188,   189,   190,   191,   192,   193,   194,
     858,   381,   476,   111,   112,   113,   540,   107,    97,   540,
      99,    97,   600,    99,   107,   644,   507,   107,   903,   904,
     608,    93,    94,   611,   612,   845,   111,   112,   113,   887,
     100,   102,   102,   507,   100,   100,   102,   625,   858,   100,
      97,   102,    99,   101,   578,   579,   577,   578,   579,   540,
      97,   100,    99,   149,    97,   100,    99,   107,   108,    93,
      94,   100,    95,    96,   102,   885,    97,   887,   926,   600,
     735,   736,    97,   893,   608,   102,   381,   608,   612,   102,
     611,   612,   345,   346,   353,   354,   108,   578,   579,   108,
     186,   102,   950,   103,   625,    97,   476,   960,   961,   906,
     907,   114,   119,   115,   103,   770,   926,   137,    97,   600,
       4,   101,   932,    97,    49,   101,   101,   608,   747,   101,
     611,   612,     4,    98,   103,     4,   600,   507,     4,     4,
     950,     4,   120,   103,   625,   103,   103,   611,   103,   103,
      97,   103,   103,    52,   107,   340,   341,   342,   343,   344,
     345,   346,    52,     4,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   101,   360,   102,   106,   102,   102,
     102,   476,   704,   102,   100,   102,   106,    97,   766,   767,
     101,   106,   106,   106,   106,   773,   381,   106,   103,   101,
     103,   102,   797,    98,   102,   102,   102,    85,   294,   102,
     296,   102,   507,    98,   102,    98,   120,   303,   100,   797,
      97,   406,   103,   878,   879,   100,   120,   103,   102,     4,
     600,   102,   100,    97,   320,   757,    97,   107,   324,   101,
     100,   611,   766,   767,   103,   766,   767,   103,   103,   773,
     103,   103,   773,   339,   103,   777,   103,   103,     4,   781,
     782,   100,   381,   103,    41,   103,   103,   103,   101,   120,
     100,     1,    99,   359,    94,   361,   797,   101,   101,   934,
     935,    93,   103,     4,    27,   766,   767,   942,   943,     4,
     100,   476,   773,   102,   102,   101,   103,    95,   103,   821,
     103,   101,   103,   107,   103,   600,   392,   393,    96,    94,
     107,    93,   101,   103,   381,   893,   611,   103,   135,   103,
     414,   179,   507,   747,   562,   179,   790,   413,   414,   407,
     794,   795,   402,   355,   360,   381,   914,   356,   802,   357,
     804,   805,   358,   893,   604,   790,   698,   891,   762,   847,
     872,   873,   893,   885,   932,   485,   737,   476,   844,   856,
     737,     4,    82,   125,   464,   451,   551,    49,   553,   554,
     555,    66,   893,   368,   266,   782,   777,   899,   900,   879,
     902,   845,   872,   781,   873,   902,   371,    24,   507,   147,
     914,   169,    -1,   914,   858,    -1,    -1,   483,   255,   485,
       4,   290,    -1,    -1,    -1,    -1,    -1,    -1,    12,   476,
      14,   932,   893,    17,    -1,   600,    -1,    -1,    22,    -1,
     790,   885,    26,   887,   794,   795,   611,    -1,    -1,   893,
     476,    35,   802,   914,   804,   805,    -1,    -1,    42,    -1,
     507,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,
      -1,   932,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,   507,   926,    -1,    68,    -1,    -1,   652,   932,    -1,
      -1,    -1,    76,    77,    -1,   845,    80,    -1,   564,    83,
      -1,   600,    -1,    -1,    -1,    -1,   950,    -1,   858,    -1,
      -1,    -1,   611,    -1,    -1,   790,    -1,    -1,    -1,   794,
     795,    -1,    -1,    -1,    -1,    -1,    -1,   802,    -1,   804,
     805,    -1,    -1,    -1,    -1,   885,    -1,   887,    -1,    -1,
      -1,    -1,    -1,   893,    -1,    -1,    -1,    -1,   614,    -1,
     616,   617,    -1,   600,   620,    -1,    -1,    -1,    -1,   625,
      -1,   627,    -1,    -1,   611,    -1,    -1,    -1,    -1,    -1,
     845,    -1,    -1,    -1,   600,    -1,   926,    -1,    -1,    -1,
      -1,   647,   932,   858,    -1,   611,    -1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
     950,    -1,    17,    18,    -1,    -1,   672,    22,    -1,    -1,
     885,    26,   887,    -1,    -1,    -1,    -1,    32,   893,    -1,
      35,    -1,    -1,    -1,    -1,   790,    -1,    42,    -1,   794,
     795,    -1,    47,    -1,    49,    50,    51,   802,    -1,   804,
     805,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,   926,    -1,    68,    -1,    -1,    71,   932,    73,    -1,
      75,    76,    77,    78,    -1,    80,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,   950,    14,   743,    -1,    17,
     845,    -1,   748,    -1,    22,    -1,    -1,   102,    26,    -1,
      -1,   790,    -1,   858,   760,   794,   795,    35,    -1,    -1,
      -1,   116,   117,   802,    42,   804,   805,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,   783,    -1,    -1,
     885,    -1,   887,   789,    62,    -1,    64,    -1,   893,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    80,   790,    -1,    83,   845,   794,   795,    -1,
      -1,    -1,    -1,    -1,    -1,   802,    -1,   804,   805,   858,
      -1,   926,    -1,    -1,   790,    -1,    -1,   932,   794,   795,
      -1,    -1,    -1,    -1,    -1,    -1,   802,   843,   804,   805,
      -1,    -1,    -1,    -1,   850,   950,   885,    -1,   887,     1,
      -1,    -1,     4,    -1,   893,    -1,    -1,    -1,   845,    -1,
      12,    -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,
      22,   858,    24,    -1,    26,    -1,    28,    29,    30,   845,
      -1,    -1,   888,    35,    -1,    -1,    -1,   926,    40,    -1,
      42,    43,   858,   932,    -1,    47,    -1,    -1,   885,    51,
     887,    -1,    -1,    -1,    -1,    -1,   893,    -1,    -1,    -1,
      62,   950,    64,    -1,    -1,    -1,    68,    69,    -1,   885,
      -1,   887,    -1,    -1,    76,    77,    -1,   893,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,     1,    -1,   926,
       4,     5,     6,     7,     8,   932,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    20,    21,    22,    -1,
     926,    25,    26,   950,    -1,   117,   932,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,   950,    49,    50,    51,    -1,    -1,
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
      -1,    32,    47,    -1,    49,    50,    51,    -1,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,   114,
      -1,   116,   117,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,   116,   117,     0,   119,    -1,
      -1,    -1,    -1,    -1,   139,   140,     9,    -1,   129,   130,
      -1,    -1,   133,   134,   135,   136,    -1,    -1,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    -1,    -1,     1,
      63,    -1,     4,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    17,    79,    19,    20,    82,
      22,    84,    24,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    -1,    -1,    -1,    47,     4,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      62,    -1,    64,    -1,    22,    -1,    68,    69,    26,    -1,
      -1,    29,    -1,    -1,    76,    77,    -1,    35,    80,    -1,
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
       0,    81,   276,   277,   285,   286,   287,   288,     4,   146,
     282,   283,     0,   278,   280,   289,   290,   291,   295,   343,
     354,   368,   375,   376,   377,   378,   387,   286,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   292,   293,
     294,   278,   290,   378,    98,     4,   282,   108,   282,     1,
      19,    24,    28,    43,    69,   297,   344,   294,    29,    61,
      86,    87,    88,    89,    90,    91,    92,   379,   380,   381,
       1,   106,   100,   284,    12,    14,    17,    22,    26,    35,
      42,    47,    51,    62,    64,    68,    76,    77,    80,    83,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   282,   310,     4,     4,     1,     4,   296,   296,   147,
     282,   382,   383,   385,   107,   277,   106,   281,   111,   111,
       3,   159,   159,   159,     4,   107,   369,   370,   107,   355,
     356,   107,   298,   299,   107,   345,   346,    97,    99,   102,
     384,   386,   279,   289,   102,   153,   100,   371,   147,   300,
     100,   357,   155,   300,   100,   301,   300,   100,   347,    99,
     383,   388,     5,     6,     7,     8,    11,    18,    32,    49,
      50,    65,    71,    73,    75,    78,   102,   109,   110,   111,
     114,   116,   117,   139,   140,   144,   145,   151,   155,   163,
     164,   165,   166,   167,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   208,   282,
     101,   278,   309,   312,   313,   314,   316,   278,   372,   373,
     374,   281,    97,   278,   358,   359,   360,   361,   363,   364,
     366,   281,    97,   278,   291,   302,   303,   304,   305,   306,
     307,   308,   317,   324,   328,   331,   336,   340,   281,   278,
     291,   305,   306,   307,   317,   324,   328,   331,   336,   348,
     349,   350,   281,   388,    98,   108,   102,    83,   148,   149,
     157,   102,   102,   102,    83,   151,   155,   195,   208,   282,
     190,   190,   190,   190,   190,   190,   190,   190,   108,   108,
      98,   108,   102,   103,    97,   139,   140,   141,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   131,   132,   207,
     111,   112,   113,   109,   110,   129,   130,    10,    45,   104,
     105,   135,   136,   133,   134,   114,   119,   115,   137,   118,
     138,    98,   102,    53,    55,    60,   315,   103,    97,     4,
     101,    97,   147,    49,   362,   101,   360,   300,   292,   101,
     304,   100,   106,   213,   311,   292,   101,   350,   171,     4,
     208,   102,    98,   100,   351,   148,    83,   148,   208,   111,
     159,   192,   193,   194,   192,   192,   111,   103,   159,     4,
       4,   171,     4,    53,    60,   161,   162,   168,   208,   208,
       4,   208,   190,   190,   190,   190,   195,   195,   196,   196,
     148,   148,   197,   197,   197,   197,   198,   198,   199,   200,
     201,   202,   208,   203,   171,   168,   148,   148,     1,   106,
     313,   120,   101,   374,    29,    83,   148,     4,    20,    29,
      30,    40,    83,   117,   148,   329,   332,   333,   335,   337,
       1,     4,    13,    18,    20,    21,    25,    34,    36,    37,
      38,    39,    46,    61,    70,    72,    74,    78,    79,    81,
      85,   106,   148,   151,   155,   167,   174,   175,   177,   188,
     189,   190,   206,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   224,   227,   229,   230,   231,   238,   239,   240,
     243,   244,   255,   256,   257,   258,   259,   260,   262,   263,
     268,   269,   270,   271,   273,   282,    99,   103,   168,   171,
      66,   208,   222,   223,   351,   352,   353,   103,   103,   103,
     103,   103,   194,   103,   103,   103,   187,   192,    99,   160,
     208,   160,    97,   103,   107,    99,   103,     4,     4,   208,
     209,   148,     4,     4,    71,   102,   148,   148,    52,    52,
       1,   282,     4,     1,     4,    52,    71,   220,   221,   282,
     283,   330,   391,   106,   213,   341,   106,   213,   342,   101,
     107,     1,   106,   213,   148,     1,   106,   212,   102,     1,
     102,   245,   102,     4,    15,    23,   102,   102,   208,   261,
     102,   261,   213,   213,   213,   102,     1,   102,     4,   220,
     106,   106,   106,   106,   106,   106,   106,   101,   211,     1,
     106,     1,   106,   103,    99,   148,   101,    97,   190,   190,
     190,   190,   103,   162,   208,     4,   102,   102,   391,    98,
     309,     4,   225,   226,   220,   282,   148,   148,   102,   102,
     102,   102,   120,    32,    73,   104,   105,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   119,   129,   130,   133,
     134,   135,   136,   139,   140,   334,    98,     1,    97,   106,
     102,   391,    71,    98,   100,   211,   225,    85,   148,   167,
     174,   175,   177,   188,   189,   206,   219,   228,   248,   251,
     254,   148,     1,   106,   209,     1,   106,   208,   210,   208,
       1,   106,   208,     1,   106,    16,    33,   264,   265,   267,
     208,   219,   272,   241,     1,   210,   158,   159,    98,   101,
     222,   190,   100,   106,   367,   309,   309,   100,   312,   103,
     120,     1,    97,   106,   106,   389,   102,   102,   309,   309,
     103,   309,   222,   102,   312,   221,   309,   100,   312,   278,
     318,   321,   322,   102,     4,   274,   275,     1,   106,   247,
      97,     4,     1,   106,   103,   103,   103,   102,   213,   213,
     265,   267,   103,   210,   103,   103,   179,   351,   158,   208,
     101,   103,   103,   278,   365,    99,   107,   338,   339,   209,
     226,   100,   148,   148,   103,   103,   213,   103,   148,    99,
     103,   318,    99,    93,    94,   101,   278,   319,   322,   278,
     320,   321,   210,   120,    97,   103,   210,   249,   252,   228,
      41,   212,   212,   100,   232,   147,   155,   212,     1,   212,
     212,    99,   367,   367,    93,    94,   101,   391,    11,    71,
     278,   325,   326,   327,     4,     4,     4,   101,   392,   392,
     392,   103,   208,   275,   212,   247,   208,    27,    15,    23,
     233,   234,   235,   236,   237,     4,   266,   266,   212,   367,
     367,   392,   100,   102,   102,    95,    96,   101,   278,   327,
     278,   326,   103,   103,    97,   103,   392,   106,   213,   323,
     323,     1,   106,   250,   253,   254,   103,   212,   209,   107,
     101,   235,   215,   237,   103,   103,   242,   278,   278,   365,
     168,   168,   390,   390,   390,   148,   391,   391,     1,   103,
     246,   212,   107,   213,   213,    94,    93,   101,   103,   103,
     213,   213,     4,   212,   367,   367,   392,   389,   389,   103
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
     295,   296,   296,   297,   297,   298,   298,   299,   299,   299,
     300,   300,   301,   302,   302,   303,   303,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   305,   305,   306,
     306,   307,   308,   308,   308,   308,   309,   309,   310,   310,
     311,   311,   312,   312,   313,   313,   314,   315,   315,   315,
     316,   317,   318,   318,   319,   319,   320,   320,   321,   322,
     323,   323,   324,   324,   325,   325,   326,   327,   328,   329,
     329,   330,   331,   332,   332,   333,   333,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   335,
     335,   336,   337,   338,   338,   339,   339,   340,   341,   341,
     342,   342,   343,   344,   344,   345,   345,   346,   347,   348,
     348,   349,   349,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   351,   351,   352,   352,   353,   353,   354,   355,
     355,   356,   357,   358,   358,   359,   359,   360,   360,   360,
     360,   361,   361,   362,   362,   363,   364,   365,   365,   365,
     365,   366,   367,   367,   368,   369,   369,   370,   371,   371,
     372,   372,   373,   373,   374,   374,   375,   375,   376,   377,
     377,   378,   378,   379,   379,   380,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   382,   382,   383,   384,   384,
     385,   386,   387,   388,   389,   390,   391,   392
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
       7,     1,     1,     1,     1,     0,     1,     2,     2,     4,
       1,     3,     3,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     6,     5,
       5,     2,     7,     7,     7,     7,     0,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     4,     0,     1,     1,
       4,     9,     2,     2,     0,     1,     0,     1,     5,     5,
       1,     1,     6,    10,     2,     2,     5,     5,     8,     5,
       5,     2,     4,     1,     1,     7,    10,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       7,     4,     5,     0,     1,     5,     5,     7,     1,     1,
       1,     1,     7,     1,     0,     0,     1,     2,     3,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     0,     1,     1,     3,     7,     0,
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
#line 108 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_literal",1);}
#line 2599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2605 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2611 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);}
#line 2653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 132 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 133 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 136 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 137 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 140 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 141 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 145 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 146 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 150 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 169 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 179 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 183 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 200 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 204 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 2977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 238 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 259 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 273 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 276 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 277 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 280 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 286 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 295 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 297 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 298 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 317 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 329 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 332 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 333 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 350 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 351 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 354 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 355 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 387 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 412 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 413 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 437 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 443 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 471 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 477 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 3817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 482 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 3823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 486 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 487 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 490 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 493 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 496 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 497 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 3865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 500 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 3871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 509 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 510 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 511 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 512 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 514 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 515 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 518 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 519 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 520 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 521 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 524 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 532 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 3973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 533 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 3979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 3985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 3991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 542 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 3997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 546 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 547 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 550 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 553 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 554 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 572 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 572 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 572 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 576 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4);}
#line 4123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 583 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 585 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 590 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 595 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 599 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 603 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 606 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 616 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 620 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 621 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 623 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 631 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 634 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 638 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 639 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 642 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 646 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 650 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 651 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 654 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 664 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 668 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 675 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 678 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 695 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 699 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 702 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 707 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 710 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 711 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 715 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 732 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 735 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 736 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 739 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 742 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 743 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 747 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 750 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 751 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 754 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 755 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 758 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 759 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 762 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 763 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 766 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 767 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 770 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 782 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 785 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 4675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 786 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 4681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 790 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 791 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 795 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 798 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 799 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 802 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 806 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);}
#line 4771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 808 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 809 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4783 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 4789 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 4795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4801 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4807 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 818 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 4813 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 4819 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 4825 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 825 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4831 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 828 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4837 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 829 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4843 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 832 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 4849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 833 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 4855 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 836 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4861 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 838 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4873 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 839 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4879 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 840 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4885 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 841 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4891 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 842 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4897 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 843 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4903 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 844 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4909 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 846 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 849 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 4921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 850 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 4927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 853 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 4933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 4939 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 857 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 4945 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 4951 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 4957 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 4963 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",3,1);}
#line 4969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 867 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 4975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 4981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 4987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 4993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 875 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 4999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 876 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 879 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 5011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 880 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 5017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 883 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 884 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 887 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 891 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 892 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 896 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 902 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 905 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 906 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 909 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 910 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 913 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 914 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 926 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 933 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 937 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 940 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 941 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5149 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 947 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 953 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 959 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 962 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5173 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 964 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5179 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 967 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5185 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 971 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5191 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 974 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 975 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5203 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 978 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5209 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 979 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5215 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 982 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 983 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 984 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 985 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 986 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 987 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 988 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 989 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 990 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 991 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 992 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 993 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5287 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 995 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5299 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 996 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5305 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 997 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5311 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 998 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5317 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 999 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5323 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5329 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1001 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5335 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5341 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5347 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5353 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1007 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5359 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1010 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5365 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1013 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5371 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1016 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5377 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1017 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5383 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1020 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5389 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1021 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5395 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1037 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5401 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1040 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5407 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1041 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5413 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1044 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5419 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1045 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5425 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5431 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1051 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 5437 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1054 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5443 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5449 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1058 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5455 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5461 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5467 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5473 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1068 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5479 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5485 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1072 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5491 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5497 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5503 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1075 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5509 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1076 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5515 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5521 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1078 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5527 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1079 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5533 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5539 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1086 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5545 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5551 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1090 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5557 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1091 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5563 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1094 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5569 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5575 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 5581 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1103 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 5587 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 5593 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1107 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 5599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1110 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5605 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1113 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5611 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1114 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1117 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1123 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1124 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1128 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1132 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1133 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1146 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1150 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1152 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1174 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 5755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1178 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 5773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 5779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 5785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 5791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 5797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 5803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 5815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 5821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 5827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 5833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1208 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1212 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 5851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 5857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 5863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1220 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1223 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1224 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1226 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1230 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 5923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1231 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 5929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1234 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 5935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1237 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 5941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1238 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 5947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1241 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 5953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1244 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 5959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1251 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 5965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1254 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 5971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1257 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 5977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1260 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 5983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1263 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 5989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1266 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 5995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 5999 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1271 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




