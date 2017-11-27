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
#define YYLAST   3058

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  250
/* YYNRULES -- Number of rules.  */
#define YYNRULES  577
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  971

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
     602,   603,   606,   609,   612,   613,   616,   618,   618,   620,
     621,   622,   623,   624,   627,   628,   631,   632,   635,   636,
     637,   638,   639,   640,   643,   644,   647,   648,   651,   652,
     655,   656,   657,   660,   661,   664,   665,   666,   669,   670,
     673,   676,   679,   682,   685,   688,   689,   693,   696,   697,
     700,   703,   704,   707,   708,   711,   712,   715,   716,   719,
     722,   723,   732,   733,   736,   737,   740,   743,   744,   747,
     748,   751,   752,   755,   756,   759,   760,   763,   764,   767,
     768,   769,   770,   771,   782,   783,   786,   787,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   807,   809,   809,   810,   810,   813,   814,   817,
     818,   819,   822,   823,   826,   829,   830,   833,   834,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   847,   850,
     851,   854,   855,   858,   862,   863,   864,   865,   868,   869,
     872,   873,   876,   877,   880,   881,   884,   885,   888,   891,
     892,   893,   897,   900,   906,   907,   910,   911,   914,   915,
     918,   924,   930,   931,   934,   935,   941,   942,   945,   951,
     957,   963,   965,   968,   972,   975,   976,   979,   980,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1004,  1007,  1008,  1011,  1014,  1017,  1018,  1021,  1022,  1038,
    1041,  1042,  1045,  1046,  1051,  1054,  1055,  1058,  1061,  1064,
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
  "statement_expression_list", "foreach_statement", "in", "jump_statement",
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

#define YYPACT_NINF -800

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-800)))

#define YYTABLE_NINF -573

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -26,    59,    82,     9,   -26,  -800,  -800,  -800,   148,    24,
    -800,   255,  -800,   453,  -800,   182,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,     9,  -800,   221,  -800,  -800,   275,
    -800,  -800,   251,  -800,  -800,  -800,   275,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,   350,   743,
    -800,   661,  -800,  -800,   586,   259,    29,  -800,   281,  -800,
    -800,  1312,   381,   419,   424,    96,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,   275,  -800,   302,  -800,
    -800,   -26,   331,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,   321,  -800,
     334,  -800,   446,  -800,  -800,  -800,  -800,  -800,  -800,   446,
     446,   450,   352,   376,   406,  -800,  -800,   410,  -800,  -800,
     140,  -800,   429,  -800,   160,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,   463,   526,   421,  -800,   275,   452,  -800,
     275,   472,  -800,   240,   495,  -800,   222,  -800,  2699,  -800,
    -800,   460,   249,   194,  -800,   357,   331,  -800,   507,   369,
     331,   507,   389,   331,   510,   507,   390,   331,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,   -51,   482,  -800,  1663,  -800,
     512,  -800,  -800,   516,   519,  2412,  2699,  2699,  2699,  2699,
    2699,  2699,  2699,  2699,  -800,  -800,   536,   538,     3,   557,
    -800,  -800,  -800,  -800,   553,   569,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,   142,
    -800,  -800,  -800,   402,  -800,   458,   291,   339,     8,   483,
     555,   548,   564,   531,   -30,  -800,  -800,  -800,   218,  -800,
     327,   578,   585,  -800,  -800,  -800,   679,   583,   588,  -800,
    -800,   275,   638,   587,   405,  -800,  -800,  -800,  -800,  -800,
    -800,   743,  -800,  -800,  -800,  -800,   209,  -800,  -800,  -800,
    -800,  -800,   589,   407,  -800,  -800,   275,   743,  -800,   592,
     443,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  2699,   685,  2699,   321,   161,   596,   233,
    1663,  2975,  2699,    26,    40,    78,   467,   593,   242,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,   691,   693,  2699,
     695,  2211,  -800,  2699,  -800,  -800,   697,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  2699,  2699,
    2699,  2699,  2699,  2699,  2699,  2699,  1663,  1663,  2699,  2699,
    2699,  2699,  2699,  2699,  2699,  2699,  2699,  2699,  2699,  2699,
    2699,  2211,  -800,  1663,  -800,  1663,    65,     9,   582,  -800,
     444,  -800,  -800,   344,  -800,  -800,  2931,  1500,  -800,  -800,
    -800,  -800,  -800,   507,  1398,  -800,  -800,   317,  -800,   600,
    2211,  2699,  2297,  -800,   191,   200,   254,   601,  -800,  -800,
     605,    26,  -800,   613,   618,  2498,  2785,    26,  -800,  -800,
     395,  -800,  2699,  2699,   626,  -800,   622,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,   458,   458,   291,   291,   334,
     334,   339,   339,   339,   339,     8,     8,   483,   555,   548,
     564,   619,   531,   399,   624,    72,    76,  -800,  -800,  -800,
    2699,  -800,  -800,  1663,    79,    38,   282,  1663,  1663,   677,
     678,    61,   124,  -800,   296,  -800,  -800,   297,   630,   493,
     101,   230,  1663,   103,  1981,   631,   226,   226,   239,   632,
     635,  2699,   636,  2699,   639,   487,   639,   642,   229,  -800,
      81,   536,   538,   640,   643,   644,   645,   647,   649,   402,
     650,  -800,  -800,  -800,   656,  1865,  -800,  -800,  -800,   105,
     109,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,    83,   728,  -800,  -800,   655,   494,  1663,
    -800,  -800,  -800,  -800,   658,   651,  -800,  -800,  -800,  -800,
    2699,  -800,  2699,  2699,  2699,  -800,   659,  -800,  -800,  -800,
    -800,  2211,  -800,  2699,  -800,  -800,  -800,  -800,  -800,  -800,
      85,   664,   665,   663,   194,    86,    87,  1663,  1663,   666,
     667,   669,   147,  2794,   674,   117,  -800,   673,    34,   682,
     676,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  1865,  -800,
    -800,  -800,    86,  -800,  -800,   696,  1663,  -800,  -800,  2613,
    1663,   116,  2699,   122,  2699,  2699,  -800,   123,  2699,   179,
     237,  -800,  -800,  2613,  -800,  1619,   662,   686,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,   683,  -800,   446,   -52,  -800,  2096,  -800,  -800,  -800,
    -800,  2699,  -800,  -800,   304,   194,   194,   688,     9,   660,
     675,   204,  -800,   -48,  -800,   162,   163,   194,   194,   194,
    2297,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,   684,     9,  -800,   785,  -800,   194,   698,
    -800,     9,     9,  -800,   699,   701,    88,   113,   115,   128,
     154,   187,   192,  -800,  -800,  -800,   190,  -800,   708,    68,
    -800,  -800,   207,  -800,  -800,  -800,   706,   709,  -800,  -800,
     711,  -800,  -800,   492,   639,   237,  -800,  -800,  -800,  -800,
     713,  2699,   714,   717,   718,   723,   446,  2699,  -800,  -800,
    -800,   710,  -800,  -800,   721,   725,     9,   499,   719,  2699,
    -800,   825,  -800,  -800,   730,  1663,  1663,   729,   731,   734,
    -800,  1663,   513,  -800,   738,     9,   514,   530,   732,   448,
     459,  2699,   722,   314,  -800,  -800,  -800,  2699,  2699,    30,
    -800,  -800,  1981,  1981,   744,   240,  -800,  -800,  -800,  -800,
    1981,   830,  1981,  1981,   639,  -800,  -800,  -800,   747,  -800,
     304,   304,   539,   746,  -800,    25,  -800,  -800,  -800,  -800,
       9,    89,    90,  -800,  -800,  -800,    91,  -800,  -800,   748,
    -800,  -800,  -800,  -800,   754,  -800,  -800,   758,  -800,  -800,
     750,  2699,   853,  1981,  -800,   190,  -800,  -800,  -800,  -800,
    2699,   831,  -800,   348,  -800,   859,   859,  -800,  1981,  -800,
    -800,  -800,  -800,  -800,  -800,   304,   304,  -800,   766,   765,
     772,   554,   767,     9,     9,   774,   775,   328,  -800,   330,
     330,  -800,   223,  -800,  -800,  -800,  2699,   114,  1981,  2699,
     768,   778,   348,  -800,  1749,  -800,  -800,   777,   779,  -800,
     461,   465,  -800,     9,  2211,  2211,  -800,  -800,  -800,   787,
    -800,   786,  -800,  -800,  -800,  1663,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,   114,  -800,   708,  -800,  -800,  1981,
    -800,   780,  -800,  -800,  -800,  1865,  -800,   639,   639,  -800,
     791,   793,   788,   789,   794,   639,   639,  -800,    95,  -800,
    -800,  1981,  -800,  -800,  -800,  -800,   304,   304,  -800,  -800,
    -800,  -800,  -800,   797,  -800,  -800,  -800,  -800,  -800,  -800,
    -800
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     323,     0,     0,   325,   324,   337,   339,   340,   332,     0,
      10,     0,     1,   354,   347,   325,   345,   348,   349,   350,
     351,   352,   353,   326,   548,   549,     0,   338,   334,     0,
     344,   343,   333,   358,   359,   360,     0,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,     0,   355,
     356,   354,   346,   550,   553,   332,     0,   335,     0,   376,
     375,     0,     0,     0,     0,     0,   357,   558,   563,   556,
     557,   559,   560,   561,   562,   564,     0,   554,     0,   342,
     341,   323,   330,    20,    25,    32,    23,    34,    33,    28,
      30,    35,    24,    26,    36,    29,    31,    27,   411,    15,
     410,    12,    14,    16,    19,    21,    22,    17,    18,    13,
      11,     0,   535,   509,   485,   374,   373,   377,   570,    11,
       0,   565,   568,   555,   325,   331,   329,    38,    37,    44,
      40,    39,    41,     0,     0,     0,   536,     0,     0,   510,
       0,     0,   486,     0,     0,   378,     0,   573,    75,   567,
     569,     0,   325,   325,   537,   325,   330,   382,   511,   325,
     330,   487,   325,   330,   379,   380,   325,   330,   573,   566,
     551,     3,     4,     5,     6,     0,     0,     9,     0,     7,
       0,    79,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     2,     0,     0,    97,    52,
      51,    55,    56,    57,     0,    76,    58,    59,    99,   100,
      60,    84,    54,    61,    63,    64,   101,   113,    62,   105,
     114,   111,   112,   127,   104,   131,   134,   137,   144,   147,
     149,   151,   153,   155,   157,   171,   172,    77,    98,   336,
     419,     0,   409,   414,   416,   417,     0,     0,   541,   542,
     534,     0,   523,     0,   325,   515,   517,   518,   520,   519,
     508,   354,   501,   493,   494,   495,     0,   496,   497,   498,
     499,   500,     0,   325,   491,   484,     0,   354,   398,     0,
     325,   387,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   372,   552,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,   121,   121,   121,   131,     0,    98,   108,
     109,   110,    95,   102,   103,   106,   107,     0,     0,     0,
       0,    71,   571,     0,    82,    83,     0,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,   421,     0,   420,     0,     0,   325,   544,   538,
     325,   383,   524,     0,   512,   516,     0,     0,   413,   412,
     403,   488,   492,   381,     0,   384,   388,     0,    80,     0,
      71,     0,   504,    87,     0,     0,     0,     0,   126,   125,
       0,   122,   123,     0,     0,     0,    65,   121,    67,    68,
       0,    66,     0,     0,    72,    46,     0,    48,    78,    94,
     159,   128,   129,   130,   127,   132,   133,   135,   136,   143,
     142,   139,   138,   140,   141,   145,   146,   148,   150,   152,
     154,     0,   156,     0,     0,     0,     0,   547,   546,   415,
       0,   539,   543,     0,     0,     0,   332,     0,     0,     0,
       0,     0,     0,   576,     0,   445,   446,     0,     0,   332,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,   296,     0,     0,     0,     0,     0,   197,
       0,    16,    17,    56,    99,   100,    84,   111,   112,     0,
       0,   195,   177,   178,     0,   194,   179,   175,   176,     0,
       0,   180,   181,   230,   231,   182,   189,   245,   246,   247,
     248,   183,   279,   280,   281,   282,   283,   184,   185,   186,
     187,   188,   190,    98,     0,    81,    92,     0,     0,     0,
     208,   506,   210,   209,     0,   505,    96,    91,    90,    93,
       0,   124,     0,     0,     0,   115,     0,    73,    50,    45,
      49,     0,    69,     0,    74,    70,   422,   418,   173,   545,
       0,     0,   576,     0,   325,     0,     0,     0,     0,     0,
       0,     0,   206,     0,     0,     0,   204,   576,     0,     0,
       0,   481,   480,   444,   483,   482,   473,   192,     0,   285,
     284,   311,     0,   287,   286,     0,     0,   259,   258,   264,
       0,     0,     0,     0,     0,     0,   297,     0,     0,     0,
       0,   312,   249,     0,   252,     0,   206,   203,   216,   219,
     220,   217,   221,   222,   218,   191,   196,   201,   199,   202,
     200,     0,    85,    42,     0,   502,     0,   120,   118,   119,
     116,     0,    47,   158,     0,   325,   325,     0,   325,     0,
       0,     0,   213,     0,   574,     0,     0,   325,   325,   325,
       0,   456,   455,   467,   468,   449,   450,   457,   458,   459,
     460,   461,   451,   452,   462,   463,   464,   465,   466,   470,
     469,   453,   454,     0,   325,   402,     0,   401,   325,     0,
     443,   325,   325,   198,   212,     0,     0,    56,    99,   100,
      84,   111,   112,   225,   270,   274,     0,   265,   271,     0,
     291,   288,     0,   293,   290,   174,     0,     0,   295,   294,
       0,   299,   298,     0,     0,   300,   303,   301,   316,   315,
       0,     0,     0,     0,     0,    88,    42,     0,   503,   507,
     117,     0,   532,   531,     0,     0,   325,     0,   475,     0,
     400,     0,   399,   434,     0,     0,     0,     0,     0,     0,
     207,     0,     0,   205,     0,   325,     0,     0,     0,   325,
     325,     0,     0,     0,   318,   263,   262,   266,     0,     0,
     292,   289,     0,     0,     0,     0,   307,   310,   304,   302,
       0,     0,     0,     0,     0,    86,    89,    43,     0,   533,
       0,     0,     0,     0,   576,     0,   474,   476,   215,   214,
     325,     0,     0,   407,   405,   406,     0,   441,   404,     0,
     442,   577,   577,   577,     0,   424,   427,     0,   425,   429,
       0,     0,     0,     0,   272,     0,   267,   275,   278,   277,
       0,   232,   313,   236,   234,   308,   308,   314,     0,   251,
     250,   479,   211,   522,   521,     0,     0,   577,     0,     0,
       0,     0,     0,   325,   325,     0,     0,     0,   577,     0,
       0,   440,     0,   320,   319,   317,   268,     0,     0,     0,
       0,     0,   237,   238,     0,   241,   309,     0,     0,   253,
     325,   325,   525,   325,    71,    71,   575,   575,   575,     0,
     436,     0,   437,   472,   471,     0,   447,   423,   433,   432,
     576,   576,   256,   255,     0,   269,   273,   261,   260,     0,
     233,     0,   244,   235,   239,   240,   242,     0,     0,   254,
       0,     0,     0,     0,     0,     0,     0,   435,     0,   430,
     431,     0,   276,   243,   306,   305,     0,     0,   577,   477,
     478,   574,   574,     0,   257,   529,   530,   526,   438,   439,
     448
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -800,  -800,  -800,  -800,   -73,    42,   716,  -800,   -24,  -800,
     762,  -800,   -59,  -800,   724,   157,   -95,   491,  -800,   345,
    -800,  -800,  -800,  -800,    62,  -349,  -800,  -800,   -53,  -800,
    -800,   181,   206,  -800,   416,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,   501,   442,   484,   286,  -800,   -72,
    -800,   508,  -168,   309,    92,   305,   558,   560,   563,   556,
     565,  -800,  -800,   594,  -800,   550,  -603,  -614,  -500,  -466,
     -20,  -800,    28,  -800,  -800,  -800,  -569,  -252,   227,  -596,
    -800,  -800,   325,   167,  -800,   141,  -800,  -800,  -800,  -800,
    -800,  -800,    39,  -800,    36,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,   455,    11,    93,  -800,  -800,  -800,  -800,  -800,
    -800,    47,  -800,  -800,  -800,  -800,  -800,  -800,  -800,   456,
    -800,  -800,  -800,   201,    84,   208,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,   102,  -800,   864,    -2,  -800,  -800,   326,
      -1,   489,  -800,  -800,   942,  -800,  -800,   828,    -5,  -142,
    -216,  -800,   900,  -800,   234,  -800,  -800,  -800,  -124,  -800,
    -800,  -800,   680,  -140,  -139,  -134,  -800,  -535,  -800,  -800,
    -389,   597,  -800,  -800,  -800,  -122,   180,  -800,  -800,   174,
     186,    97,  -118,  -800,    94,    99,  -115,  -800,  -800,  -114,
    -800,  -800,  -800,  -800,  -110,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,   694,  -295,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,   705,  -800,  -800,
    -800,  -800,    58,  -800,  -788,  -800,  -800,  -800,  -800,  -800,
    -800,   606,  -800,  -800,  -800,   946,  -800,  -800,  -800,  -800,
     820,  -800,  -800,  -800,  -800,   807,  -300,  -243,  -566,  -799
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   194,   195,     9,    99,   490,   101,   102,   196,   104,
     105,   106,   197,   108,   109,   745,   399,   558,   414,   415,
     198,   199,   200,   201,   202,   416,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   805,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   400,
     401,   402,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   338,   417,   569,   726,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   585,   586,   541,
     542,   510,   661,   662,   511,   715,   512,   513,   514,   854,
     891,   892,   893,   894,   895,   515,   516,   517,   741,   939,
     518,   519,   609,   929,   787,   716,   845,   924,   717,   846,
     925,   718,   520,   850,   521,   522,   523,   524,   525,   617,
     526,   527,   735,   736,   897,   737,   528,   529,   530,   531,
     740,   532,   783,   784,     2,     3,   240,   151,    14,   126,
     238,    11,    82,     4,     5,     6,     7,    15,    16,    17,
      48,    49,    50,    18,   117,    65,   144,   145,   158,   167,
     279,   280,   281,   263,   264,   265,   266,   241,   111,   380,
     242,   243,   244,   365,   245,   267,   778,   835,   838,   779,
     780,   920,   268,   872,   873,   874,   269,   463,   589,   270,
     464,   465,   693,   466,   271,   467,   816,   817,   290,   593,
     596,    19,   141,   142,   163,   272,   273,   274,   543,   544,
     545,    20,   138,   139,   160,   253,   254,   255,   256,   373,
     257,   258,   813,   259,   753,    21,   135,   136,   156,   247,
     248,   249,    22,    23,    24,    25,    76,    77,    78,   120,
     121,   149,   122,   150,    26,   170,   764,   945,   590,   879
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    13,   107,   118,   393,   636,   657,   130,   605,   722,
      52,   743,   444,    51,   131,   132,   161,   306,   346,   165,
     262,   699,   863,   864,   278,    30,   282,   283,    56,   129,
      79,   848,   284,   880,   881,    58,   869,   103,    32,   659,
     714,   537,   572,   129,   285,   376,   747,   293,   286,   696,
     749,   287,   288,   347,   739,     1,   289,   294,   763,   128,
     110,   384,   579,     8,   157,    55,   447,   157,   902,   115,
     157,   849,   116,   118,   770,   119,   566,   900,   901,   917,
     567,   129,    12,   571,   164,   626,   129,   -11,   358,   654,
     660,   582,   782,   875,   876,   877,   870,   115,   703,   963,
     116,   319,   599,   100,   603,   700,   637,  -572,   359,   573,
     639,   320,   348,   349,  -223,   927,  -226,   720,   695,   107,
     754,   755,    51,   723,   728,   581,   305,   801,   582,  -227,
      31,   262,   767,   768,   769,    80,   119,   398,   278,   119,
     282,   283,   119,   350,   351,   119,   284,    52,   317,   128,
      51,   398,   383,   246,   103,  -224,   818,   252,   285,   967,
     261,   304,   286,   774,   277,   287,   288,   840,   965,   966,
     289,   448,   127,   844,   425,   426,   583,   110,   371,   128,
     731,   360,  -322,   128,   308,   361,   318,   128,  -228,   398,
     127,   785,   128,  -229,   -11,   584,   128,   128,   128,   128,
     128,   128,   128,   157,   131,   760,   128,   600,   790,   604,
    -223,   638,  -226,   407,   696,   640,  -223,   928,  -226,  -223,
     297,  -226,   721,   697,   922,  -227,    55,   607,   724,   729,
     624,  -227,   403,   404,  -227,   128,   129,   146,   627,   147,
     387,   107,   107,   611,    55,   129,   379,  -332,   868,  -332,
     119,  -224,   252,   733,   612,    28,    28,  -224,  -572,    32,
    -224,  -327,   613,   390,   765,   766,   410,   670,    29,   757,
     734,   261,   128,   128,   128,   119,   103,   103,   277,    55,
    -572,   324,   325,   326,  -228,   732,   931,   107,   107,  -229,
    -228,    91,  -572,  -228,   546,  -229,   786,  -408,  -229,   110,
     110,   761,   128,   547,   107,   772,   107,   443,    94,   377,
     762,   127,   776,   791,   107,   378,   360,   107,   492,    54,
     361,   168,   103,   103,   663,   107,   851,   852,   608,   923,
     377,   625,   295,   392,   857,   556,   859,   860,   538,   103,
     360,   103,   394,   396,   361,   110,   110,  -572,    55,   103,
    -328,    59,   103,   491,   949,   950,    83,   548,    84,    57,
     103,    85,   110,   889,   110,   128,    86,    28,   246,    60,
      87,   890,   110,   453,    61,   110,   533,   885,    62,    88,
     362,    81,   363,   110,   574,   112,    89,   364,   429,   430,
      28,    90,   899,    63,   107,    91,   377,   377,   107,   107,
     342,   343,   591,   594,   751,   445,    92,   446,    93,   123,
     752,   842,    94,   107,   323,   455,   535,   843,   462,    64,
      95,    96,   930,   113,    97,   915,   462,   454,   114,   103,
     377,   916,   127,   103,   103,   636,   918,   125,   132,   493,
     431,   432,   433,   434,   592,   128,   492,   595,   103,   129,
     806,   601,   110,  -321,   133,  -572,   110,   110,  -540,   134,
     580,   587,    33,   952,   620,   621,   622,  -572,   344,   345,
    -513,   110,   309,   310,   311,   312,   313,   314,   315,   316,
     107,   491,   250,   137,    34,   964,   260,  -572,  -572,   275,
    -489,  -385,   323,   291,   557,   570,   323,    35,   564,   575,
     576,    36,    37,  -572,   533,  -572,  -514,    38,  -490,    39,
      40,    41,    42,   140,   602,   103,    43,   143,   107,   107,
      44,   155,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   148,    45,   336,   337,    46,   493,    47,   110,   492,
      84,  -572,  -572,    85,  -386,   451,  -572,   107,   746,  -426,
     492,   107,   159,   103,   103,   943,   944,  -572,   494,  -572,
    -428,   239,  -527,  -572,   492,   153,  -528,   493,    89,   339,
     340,   341,   162,    90,   491,   664,   110,   110,   405,   340,
     341,   644,   103,   495,   295,   491,   103,   377,    92,   302,
      93,   323,   377,   643,   795,   166,   367,   533,   814,   491,
     598,    28,    95,    96,   251,   110,    97,   276,   533,   110,
     367,   367,   827,   830,   300,    67,   352,   353,   301,   665,
     666,   302,   533,   831,   832,   421,   422,   423,   424,   424,
     424,   424,   865,   866,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   317,   424,   318,    68,   706,   906,
     907,   746,   719,   427,   428,   494,   322,   435,   436,   321,
     493,   968,   969,   499,   946,   947,   323,   355,   357,   354,
      33,   707,    69,    70,    71,    72,    73,    74,    75,   356,
     495,   366,   367,   368,   369,   370,   494,   372,   374,   388,
     381,   421,    34,   385,   391,   408,   406,   409,   237,   411,
     777,   419,   450,   536,   549,    35,   107,   107,   550,    36,
      37,   495,   107,   796,   797,    38,   552,    39,    40,    41,
      42,   553,   855,   561,    43,   562,   563,   565,    44,   577,
     578,   597,   641,   606,   614,   307,   856,   615,   618,   377,
      45,   103,   103,    46,   623,    47,   628,   103,   646,   629,
     630,   631,    33,   632,   812,   633,   634,   635,   642,   645,
     499,   658,   651,   758,   110,   110,   655,   656,   667,   668,
     110,   669,   694,   777,    34,   698,   702,   834,   837,   494,
     701,   705,   670,   696,   861,   744,   771,    35,   756,   626,
     708,   499,    37,   496,   119,   759,   761,    38,   775,    39,
      40,    41,    42,   781,   495,   788,    43,   821,   822,   792,
      44,   809,   793,   826,   794,   709,   800,   802,   871,   497,
     803,   804,    45,   392,   810,    46,   815,    47,   811,   660,
     820,   858,   823,   833,   824,   492,   647,   825,   648,   649,
     650,   828,   841,   237,   853,   389,   862,   867,   832,   878,
     707,   831,   397,   882,   493,   493,   107,   782,   888,   919,
     919,   498,   493,   896,   493,   493,   903,   904,   908,   237,
     491,   909,   911,   418,   905,   932,   492,   913,   914,   933,
     937,   906,   938,   907,   499,   956,   957,   953,   420,   958,
     496,   103,   959,   533,   298,   499,   154,   960,   940,   941,
     970,   812,   299,   807,   560,   493,   652,   555,   441,   551,
     237,   491,   437,   440,   110,   438,   497,   954,   955,   439,
     493,   496,   935,   773,   442,   961,   962,   704,   819,   847,
     936,   934,   610,   926,   533,   951,   798,   750,   886,   619,
     898,   237,   540,   799,   884,   124,    27,   497,   707,    66,
     493,   588,   152,   789,   839,   829,   493,   948,   498,   375,
     386,   942,   559,   559,   449,   836,   169,   382,   912,   708,
      53,   500,   910,   494,   494,   292,   452,   921,     0,     0,
       0,   494,     0,   494,   494,     0,     0,     0,     0,   498,
       0,   493,     0,     0,   709,     0,     0,   493,   495,   495,
     568,     0,     0,     0,     0,     0,   495,     0,   495,   495,
       0,     0,     0,   493,   496,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   494,   710,     0,     0,     0,     0,
       0,   616,     0,   616,     0,     0,     0,     0,     0,   494,
     497,     0,     0,     0,     0,     0,     0,     0,     0,   495,
       0,   711,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   495,     0,     0,   708,   500,   494,
       0,     0,     0,     0,   499,   494,     0,     0,   499,   499,
       0,     0,   498,     0,     0,     0,   499,     0,   499,   499,
       0,     0,   709,   712,   495,     0,     0,     0,     0,   500,
     495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     494,     0,     0,   653,     0,     0,   494,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   499,
       0,     0,   494,     0,     0,   495,     0,     0,     0,     0,
       0,   495,     0,     0,   499,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   495,     0,     0,
       0,     0,   568,     0,   725,   727,     0,     0,   730,     0,
       0,     0,   499,   738,   499,   725,     0,     0,     0,     0,
     499,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   500,     0,     0,     0,   540,     0,     0,     0,
       0,     0,     0,   713,   710,     0,     0,     0,   496,   496,
       0,     0,     0,     0,     0,   499,   496,     0,   496,   496,
     540,   499,     0,     0,     0,     0,     0,     0,     0,     0,
     711,     0,     0,     0,   497,   497,     0,   499,     0,     0,
       0,     0,   497,     0,   497,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   496,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   712,     0,   496,     0,   498,   498,     0,     0,
       0,     0,     0,     0,   498,   497,   498,   498,     0,     0,
       0,   725,     0,     0,     0,     0,     0,   808,     0,     0,
     497,     0,   710,     0,   496,     0,     0,     0,     0,   568,
     496,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,    83,     0,    84,   498,   711,    85,
     497,   725,     0,     0,    86,     0,   497,   725,    87,     0,
       0,     0,   498,     0,     0,   496,     0,    88,     0,     0,
       0,   496,     0,     0,    89,     0,     0,     0,     0,    90,
       0,     0,     0,    91,     0,     0,     0,   496,     0,     0,
     712,   497,   498,     0,    92,     0,    93,   497,   498,     0,
      94,     0,   713,     0,     0,     0,   500,   500,    95,    96,
       0,   883,    97,   497,   500,    98,   500,   500,     0,    59,
     887,     0,   456,     0,     0,     0,     0,     0,     0,     0,
      83,     0,    84,   498,     0,    85,     0,    60,   457,   498,
      86,     0,    61,     0,    87,     0,    62,   458,   459,     0,
       0,     0,     0,    88,     0,   498,     0,   500,   460,   568,
      89,    63,     0,     0,     0,    90,     0,     0,     0,    91,
       0,     0,   500,     0,     0,     0,     0,     0,     0,     0,
      92,     0,    93,     0,     0,     0,    94,    64,     0,     0,
       0,     0,     0,     0,    95,    96,     0,     0,    97,     0,
     713,   461,   500,     0,     0,     0,     0,     0,   500,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   468,     0,     0,   469,   171,   172,   173,   174,     0,
       0,   175,    83,   470,    84,   534,     0,    85,   471,     0,
     472,   473,    86,   500,     0,   474,    87,     0,     0,   500,
       0,     0,   177,     0,   475,    88,   476,   477,   478,   479,
       0,     0,    89,     0,     0,   500,   480,    90,     0,   178,
     179,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   481,    92,     0,    93,   180,     0,     0,    94,     0,
     482,   181,   483,   182,   484,   183,    95,    96,   485,   486,
      97,   487,     0,   296,     0,   488,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     377,  -193,   185,     0,     0,     0,   489,     0,     0,   186,
     187,   188,     0,     0,   189,     0,   190,   191,     0,     0,
     742,     0,     0,    55,   171,   172,   173,   174,     0,     0,
     175,    83,     0,    84,     0,     0,    85,   176,     0,   192,
     193,    86,     0,     0,     0,    87,     0,     0,     0,     0,
       0,   177,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,    55,   178,   179,
      91,     0,     0,     0,     0,    83,     0,    84,     0,     0,
      85,    92,     0,    93,   180,    86,     0,    94,     0,    87,
     181,     0,   182,     0,   183,    95,    96,   184,    88,    97,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
      90,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,   185,     0,     0,     0,    92,     0,    93,   186,   187,
     188,    94,     0,   189,     0,   190,   191,     0,     0,    95,
      96,     0,     0,    97,     0,     0,   296,     0,     0,     0,
       0,     0,     0,   469,   171,   172,   173,   174,   192,   193,
     175,    83,   470,    84,   889,     0,    85,   471,     0,   472,
     473,    86,   890,     0,   474,    87,     0,     0,     0,     0,
       0,   177,     0,   475,    88,   476,   477,   478,   479,     0,
       0,    89,     0,     0,     0,   480,    90,     0,   178,   179,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     481,    92,     0,    93,   180,     0,     0,    94,     0,   482,
     181,   483,   182,   484,   183,    95,    96,   485,   486,    97,
     487,     0,   296,     0,   488,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   377,
       0,   185,     0,     0,     0,   489,     0,     0,   186,   187,
     188,     0,     0,   189,     0,   190,   191,     0,     0,   469,
     171,   172,   173,   174,     0,     0,   175,    83,   470,    84,
       0,     0,    85,   471,     0,   472,   473,    86,   192,   193,
     474,    87,     0,     0,     0,     0,     0,   177,     0,   475,
      88,   476,   477,   478,   479,     0,     0,    89,     0,     0,
       0,   480,    90,     0,   178,   179,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   481,    92,     0,    93,
     180,     0,     0,    94,     0,   482,   181,   483,   182,   484,
     183,    95,    96,   485,   486,    97,   487,     0,   296,     0,
     488,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   377,     0,   185,     0,     0,
       0,   489,     0,     0,   186,   187,   188,     0,     0,   189,
       0,   190,   191,     0,     0,    55,   171,   172,   173,   174,
       0,     0,   175,    83,   470,    84,     0,     0,    85,   471,
       0,     0,   473,    86,   192,   193,   474,    87,     0,     0,
       0,     0,     0,   177,     0,   475,    88,   476,   477,   478,
     479,     0,     0,    89,     0,     0,     0,   480,    90,     0,
     178,   179,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   481,    92,     0,    93,   180,     0,     0,    94,
       0,   482,   181,   483,   182,   484,   183,    95,    96,   485,
     486,    97,   487,     0,     0,     0,   488,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   377,     0,   185,     0,     0,     0,   489,     0,     0,
     186,   187,   188,     0,     0,   189,     0,   190,   191,     0,
      55,   171,   172,   173,   174,     0,     0,   175,    83,     0,
      84,     0,     0,    85,   176,     0,     0,     0,    86,     0,
     192,   193,    87,     0,     0,     0,     0,     0,   177,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    89,     0,
       0,     0,     0,    90,     0,   178,   179,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,     0,
      93,   180,   539,     0,    94,     0,     0,   181,     0,   182,
       0,   183,    95,    96,   184,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   392,   748,   185,     0,
       0,     0,     0,     0,     0,   186,   187,   188,     0,     0,
     189,     0,   190,   191,     0,    55,   171,   172,   173,   174,
       0,     0,   175,    83,     0,    84,     0,     0,    85,   176,
       0,     0,     0,    86,     0,   192,   193,    87,     0,     0,
       0,     0,     0,   177,     0,     0,    88,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,    90,     0,
     178,   179,    91,     0,   412,     0,     0,     0,     0,     0,
       0,   413,     0,    92,     0,    93,   180,     0,     0,    94,
       0,     0,   181,     0,   182,     0,   183,    95,    96,   184,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,   171,   172,   173,   174,     0,     0,   175,    83,
       0,    84,     0,   185,    85,   176,     0,     0,     0,    86,
     186,   187,   188,    87,     0,   189,     0,   190,   191,   177,
       0,     0,    88,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,    90,     0,   178,   179,    91,     0,
     192,   193,     0,     0,     0,     0,     0,     0,     0,    92,
       0,    93,   180,   539,     0,    94,     0,     0,   181,     0,
     182,     0,   183,    95,    96,   184,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   392,     0,   185,
       0,     0,     0,     0,     0,     0,   186,   187,   188,     0,
       0,   189,     0,   190,   191,     0,    55,   171,   172,   173,
     174,     0,     0,   175,    83,     0,    84,     0,     0,    85,
     176,     0,     0,     0,    86,     0,   192,   193,    87,     0,
       0,     0,     0,     0,   177,     0,     0,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    90,
       0,   178,   179,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,    93,   180,     0,     0,
      94,     0,     0,   181,     0,   182,     0,   183,    95,    96,
     184,     0,    97,     0,     0,   303,     0,     0,     0,     0,
       0,     0,    55,   171,   172,   173,   174,     0,     0,   175,
      83,     0,    84,     0,   185,    85,   176,     0,     0,     0,
      86,   186,   187,   188,    87,     0,   189,     0,   190,   191,
     177,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,    90,     0,   178,   179,    91,
       0,   192,   193,     0,     0,     0,     0,     0,     0,     0,
      92,     0,    93,   180,     0,     0,    94,     0,     0,   181,
       0,   182,     0,   183,    95,    96,   184,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,   554,     0,     0,     0,     0,     0,   186,   187,   188,
       0,     0,   189,     0,   190,   191,     0,    55,   171,   172,
     173,   174,     0,     0,   175,    83,     0,    84,     0,     0,
      85,   176,     0,     0,     0,    86,     0,   192,   193,    87,
       0,     0,     0,     0,     0,   177,     0,     0,    88,     0,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
      90,     0,   178,   179,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,    93,   180,     0,
       0,    94,     0,     0,   181,     0,   182,     0,   183,    95,
      96,   184,     0,    97,     0,     0,   296,     0,     0,     0,
       0,     0,     0,    55,   171,   172,   173,   174,     0,     0,
     175,    83,     0,    84,     0,   185,    85,   176,     0,     0,
       0,    86,   186,   187,   188,    87,     0,   189,     0,   190,
     191,   177,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,     0,   178,   179,
      91,     0,   192,   193,     0,     0,     0,     0,     0,     0,
       0,    92,     0,    93,   180,     0,     0,    94,     0,     0,
     181,     0,   182,     0,   183,    95,    96,   184,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
     171,   172,   173,   174,     0,     0,   175,    83,     0,    84,
       0,   185,    85,   176,     0,     0,     0,    86,   186,   187,
     188,    87,     0,   189,     0,   190,   191,   177,     0,     0,
      88,     0,     0,     0,     0,     0,   671,    89,     0,     0,
       0,     0,    90,     0,   178,   179,    91,     0,   192,   193,
       0,     0,     0,     0,     0,     0,     0,    92,     0,    93,
     180,     0,     0,    94,     0,     0,   181,     0,   182,     0,
     183,    95,    96,   184,     0,    97,     0,   672,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   673,   674,
       0,   190,   191,   675,   676,   677,   678,   679,   680,   681,
     682,   683,     0,   684,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   685,   686,     0,     0,   687,   688,   689,
     690,     0,    59,   691,   692,   456,     0,     0,     0,     0,
       0,     0,     0,    83,     0,    84,     0,     0,    85,     0,
      60,   457,     0,    86,     0,    61,     0,    87,     0,    62,
     458,   459,     0,     0,     0,     0,    88,     0,     0,     0,
       0,   460,     0,    89,    63,     0,     0,     0,    90,    55,
       0,     0,    91,     0,     0,     0,     0,    83,     0,    84,
       0,     0,    85,    92,     0,    93,     0,    86,     0,    94,
      64,    87,     0,     0,     0,     0,     0,    95,    96,     0,
      88,    97,     0,     0,   461,     0,     0,    89,     0,     0,
       0,     0,    90,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,    93,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,    97,     0,     0,   395
};

static const yytype_int16 yycheck[] =
{
       1,     3,    61,    76,   299,   505,   572,   102,   474,   612,
      15,   625,   361,    15,   109,   110,   140,   185,    10,   143,
     162,   587,   810,   811,   166,     1,   166,   166,    29,     3,
       1,     1,   166,   832,   833,    36,    11,    61,     4,   574,
     609,   390,     4,     3,   166,   261,    98,    98,   166,    97,
     646,   166,   166,    45,   623,    81,   166,   108,   106,   111,
      61,   277,     1,     4,   137,     4,     1,   140,   867,     1,
     143,    41,     4,   146,   670,    76,     4,   865,   866,   878,
       4,     3,     0,     4,   143,     4,     3,     4,   118,     4,
       4,     4,     4,     4,     4,     4,    71,     1,   598,     4,
       4,    98,     1,    61,     1,    71,     1,    98,   138,    71,
       1,   108,   104,   105,     1,     1,     1,     1,     1,   178,
     655,   656,   124,     1,     1,     1,   185,   741,     4,     1,
     106,   273,   667,   668,   669,   106,   137,   111,   280,   140,
     280,   280,   143,   135,   136,   146,   280,   152,   108,   111,
     152,   111,   276,   155,   178,     1,   759,   159,   280,   958,
     162,   185,   280,   698,   166,   280,   280,   781,   956,   957,
     280,   106,   111,   787,   342,   343,    52,   178,   251,   111,
       1,    98,     0,   111,   185,   102,   108,   111,     1,   111,
     111,     1,   111,     1,   111,    71,   111,   111,   111,   111,
     111,   111,   111,   276,   299,     1,   111,   106,     1,   106,
      97,   106,    97,   308,    97,   106,   103,   103,   103,   106,
     178,   106,   106,   106,     1,    97,     4,     1,   106,   106,
       1,   103,   304,   305,   106,   111,     3,    97,   490,    99,
     293,   300,   301,     4,     4,     3,   266,   100,   814,   102,
     251,    97,   254,    16,    15,   108,   108,   103,    98,     4,
     106,   101,    23,   102,   102,   102,   319,   120,   120,   658,
      33,   273,   111,   111,   111,   276,   300,   301,   280,     4,
      98,   139,   140,   141,    97,   106,   889,   346,   347,    97,
     103,    51,    98,   106,   103,   103,   106,   103,   106,   300,
     301,    97,   111,   103,   363,   694,   365,   360,    68,   100,
     106,   111,   701,   106,   373,   106,    98,   376,   377,    98,
     102,    99,   346,   347,   576,   384,   792,   793,   102,   106,
     100,   102,   102,   100,   800,   407,   802,   803,   391,   363,
      98,   365,   300,   301,   102,   346,   347,    98,     4,   373,
     101,     1,   376,   377,   920,   921,    12,   103,    14,   108,
     384,    17,   363,    15,   365,   111,    22,   108,   370,    19,
      26,    23,   373,    29,    24,   376,   377,   843,    28,    35,
      53,   100,    55,   384,   102,     4,    42,    60,   346,   347,
     108,    47,   858,    43,   453,    51,   100,   100,   457,   458,
     109,   110,   106,   106,   100,   363,    62,   365,    64,   107,
     106,    97,    68,   472,    97,   373,    99,   103,   376,    69,
      76,    77,   888,     4,    80,    97,   384,    83,     4,   453,
     100,   103,   111,   457,   458,   935,   106,   106,   533,   377,
     348,   349,   350,   351,   464,   111,   505,   467,   472,     3,
     745,   471,   453,     0,     4,    98,   457,   458,   101,   107,
     461,   462,     9,   929,   484,   485,   486,    98,   129,   130,
     101,   472,   186,   187,   188,   189,   190,   191,   192,   193,
     539,   505,   156,   107,    31,   951,   160,    98,    98,   163,
     101,   101,    97,   167,    99,   453,    97,    44,    99,   457,
     458,    48,    49,    98,   505,    98,   101,    54,   101,    56,
      57,    58,    59,   107,   472,   539,    63,   107,   577,   578,
      67,   100,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   102,    79,   131,   132,    82,   474,    84,   539,   598,
      14,    98,    98,    17,   101,   101,    98,   606,   643,   101,
     609,   610,   100,   577,   578,   904,   905,    98,   377,    98,
     101,   101,   101,    98,   623,   102,   101,   505,    42,   111,
     112,   113,   100,    47,   598,   576,   577,   578,   111,   112,
     113,   539,   606,   377,   102,   609,   610,   100,    62,   102,
      64,    97,   100,    99,   102,   100,    97,   598,    99,   623,
     107,   108,    76,    77,    97,   606,    80,    97,   609,   610,
      97,    97,    99,    99,   102,    29,   133,   134,   102,   577,
     578,   102,   623,    93,    94,   339,   340,   341,   342,   343,
     344,   345,    93,    94,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   108,   359,   108,    61,   606,    95,
      96,   746,   610,   344,   345,   474,   103,   352,   353,   102,
     598,   961,   962,   377,   907,   908,    97,   119,   137,   114,
       9,   609,    86,    87,    88,    89,    90,    91,    92,   115,
     474,   103,    97,     4,   101,    97,   505,    49,   101,     4,
     101,   405,    31,   101,    98,     4,   103,     4,   148,     4,
     702,     4,   120,   103,   103,    44,   765,   766,   103,    48,
      49,   505,   771,   733,   734,    54,   103,    56,    57,    58,
      59,   103,   795,    97,    63,   103,   107,   103,    67,    52,
      52,   101,     4,   102,   102,   185,   795,   102,   102,   100,
      79,   765,   766,    82,   102,    84,   106,   771,    97,   106,
     106,   106,     9,   106,   756,   106,   106,   101,   103,   101,
     474,    98,   103,   103,   765,   766,   102,   102,   102,   102,
     771,   102,    98,   775,    31,   102,   100,   779,   780,   598,
      98,    85,   120,    97,   804,   102,   102,    44,   100,     4,
     609,   505,    49,   377,   795,   120,    97,    54,   100,    56,
      57,    58,    59,   102,   598,    97,    63,   765,   766,   103,
      67,   101,   103,   771,   103,   609,   103,   103,   820,   377,
     103,   103,    79,   100,   103,    82,   107,    84,   103,     4,
     100,     1,   103,   101,   103,   894,   550,   103,   552,   553,
     554,   103,   120,   293,   100,   295,    99,   101,    94,   101,
     788,    93,   302,   103,   792,   793,   915,     4,    27,   879,
     880,   377,   800,     4,   802,   803,   100,   102,   101,   319,
     894,   873,   874,   323,   102,   107,   935,   103,   103,   101,
     103,    95,   103,    96,   598,    94,    93,   107,   338,   101,
     474,   915,   103,   894,   178,   609,   134,   103,   900,   901,
     103,   903,   178,   746,   413,   843,   561,   406,   358,   401,
     360,   935,   354,   357,   915,   355,   474,   937,   938,   356,
     858,   505,   894,   696,   359,   945,   946,   602,   761,   788,
     894,   892,   477,   886,   935,   924,   735,   651,   845,   483,
     856,   391,   392,   735,   842,    81,     4,   505,   886,    49,
     888,   462,   124,   719,   780,   775,   894,   915,   474,   254,
     280,   903,   412,   413,   367,   779,   146,   273,   874,   788,
      24,   377,   873,   792,   793,   168,   370,   880,    -1,    -1,
      -1,   800,    -1,   802,   803,    -1,    -1,    -1,    -1,   505,
      -1,   929,    -1,    -1,   788,    -1,    -1,   935,   792,   793,
     450,    -1,    -1,    -1,    -1,    -1,   800,    -1,   802,   803,
      -1,    -1,    -1,   951,   598,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   843,   609,    -1,    -1,    -1,    -1,
      -1,   481,    -1,   483,    -1,    -1,    -1,    -1,    -1,   858,
     598,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   843,
      -1,   609,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   858,    -1,    -1,   886,   474,   888,
      -1,    -1,    -1,    -1,   788,   894,    -1,    -1,   792,   793,
      -1,    -1,   598,    -1,    -1,    -1,   800,    -1,   802,   803,
      -1,    -1,   886,   609,   888,    -1,    -1,    -1,    -1,   505,
     894,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     929,    -1,    -1,   563,    -1,    -1,   935,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   843,
      -1,    -1,   951,    -1,    -1,   929,    -1,    -1,    -1,    -1,
      -1,   935,    -1,    -1,   858,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   951,    -1,    -1,
      -1,    -1,   612,    -1,   614,   615,    -1,    -1,   618,    -1,
      -1,    -1,   886,   623,   888,   625,    -1,    -1,    -1,    -1,
     894,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   598,    -1,    -1,    -1,   646,    -1,    -1,    -1,
      -1,    -1,    -1,   609,   788,    -1,    -1,    -1,   792,   793,
      -1,    -1,    -1,    -1,    -1,   929,   800,    -1,   802,   803,
     670,   935,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     788,    -1,    -1,    -1,   792,   793,    -1,   951,    -1,    -1,
      -1,    -1,   800,    -1,   802,   803,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   843,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   788,    -1,   858,    -1,   792,   793,    -1,    -1,
      -1,    -1,    -1,    -1,   800,   843,   802,   803,    -1,    -1,
      -1,   741,    -1,    -1,    -1,    -1,    -1,   747,    -1,    -1,
     858,    -1,   886,    -1,   888,    -1,    -1,    -1,    -1,   759,
     894,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    14,   843,   886,    17,
     888,   781,    -1,    -1,    22,    -1,   894,   787,    26,    -1,
      -1,    -1,   858,    -1,    -1,   929,    -1,    35,    -1,    -1,
      -1,   935,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,   951,    -1,    -1,
     886,   929,   888,    -1,    62,    -1,    64,   935,   894,    -1,
      68,    -1,   788,    -1,    -1,    -1,   792,   793,    76,    77,
      -1,   841,    80,   951,   800,    83,   802,   803,    -1,     1,
     850,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,   929,    -1,    17,    -1,    19,    20,   935,
      22,    -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    35,    -1,   951,    -1,   843,    40,   889,
      42,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      -1,    -1,   858,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,
     886,    83,   888,    -1,    -1,    -1,    -1,    -1,   894,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    14,   117,    -1,    17,    18,    -1,
      20,    21,    22,   929,    -1,    25,    26,    -1,    -1,   935,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,   951,    46,    47,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,    -1,    -1,   109,
     110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,    -1,
       1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,   139,
     140,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,     4,    49,    50,
      51,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,
      17,    62,    -1,    64,    65,    22,    -1,    68,    -1,    26,
      71,    -1,    73,    -1,    75,    76,    77,    78,    35,    80,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    62,    -1,    64,   109,   110,
     111,    68,    -1,   114,    -1,   116,   117,    -1,    -1,    76,
      77,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,   139,   140,
      11,    12,    13,    14,    15,    -1,    17,    18,    -1,    20,
      21,    22,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
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
      -1,    -1,    17,    18,    -1,    20,    21,    22,   139,   140,
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
      -1,    -1,    21,    22,   139,   140,    25,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    -1,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,
     139,   140,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    -1,    68,    -1,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,   102,    17,    18,    -1,    -1,    -1,    22,
     109,   110,   111,    26,    -1,   114,    -1,   116,   117,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,   102,    17,    18,    -1,    -1,    -1,
      22,   109,   110,   111,    26,    -1,   114,    -1,   116,   117,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,   102,    17,    18,    -1,    -1,    -1,    22,   109,   110,
     111,    26,    -1,   114,    -1,   116,   117,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    32,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    -1,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
      -1,   116,   117,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,    -1,   133,   134,   135,
     136,    -1,     1,   139,   140,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    -1,
      19,    20,    -1,    22,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,     4,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    17,    62,    -1,    64,    -1,    22,    -1,    68,
      69,    26,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      35,    80,    -1,    -1,    83,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    80,    -1,    -1,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   277,   278,   286,   287,   288,   289,     4,   146,
     283,   284,     0,   279,   281,   290,   291,   292,   296,   344,
     354,   368,   375,   376,   377,   378,   387,   287,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   293,   294,
     295,   279,   291,   378,    98,     4,   283,   108,   283,     1,
      19,    24,    28,    43,    69,   298,   295,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   379,   380,   381,     1,
     106,   100,   285,    12,    14,    17,    22,    26,    35,    42,
      47,    51,    62,    64,    68,    76,    77,    80,    83,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     283,   311,     4,     4,     4,     1,     4,   297,   147,   283,
     382,   383,   385,   107,   278,   106,   282,   111,   111,     3,
     159,   159,   159,     4,   107,   369,   370,   107,   355,   356,
     107,   345,   346,   107,   299,   300,    97,    99,   102,   384,
     386,   280,   290,   102,   153,   100,   371,   147,   301,   100,
     357,   301,   100,   347,   155,   301,   100,   302,    99,   383,
     388,     5,     6,     7,     8,    11,    18,    32,    49,    50,
      65,    71,    73,    75,    78,   102,   109,   110,   111,   114,
     116,   117,   139,   140,   144,   145,   151,   155,   163,   164,
     165,   166,   167,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   208,   283,   101,
     279,   310,   313,   314,   315,   317,   279,   372,   373,   374,
     282,    97,   279,   358,   359,   360,   361,   363,   364,   366,
     282,   279,   292,   306,   307,   308,   309,   318,   325,   329,
     332,   337,   348,   349,   350,   282,    97,   279,   292,   303,
     304,   305,   306,   307,   308,   318,   325,   329,   332,   337,
     341,   282,   388,    98,   108,   102,    83,   148,   149,   157,
     102,   102,   102,    83,   151,   155,   195,   208,   283,   190,
     190,   190,   190,   190,   190,   190,   190,   108,   108,    98,
     108,   102,   103,    97,   139,   140,   141,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   131,   132,   207,   111,
     112,   113,   109,   110,   129,   130,    10,    45,   104,   105,
     135,   136,   133,   134,   114,   119,   115,   137,   118,   138,
      98,   102,    53,    55,    60,   316,   103,    97,     4,   101,
      97,   147,    49,   362,   101,   360,   293,   100,   106,   213,
     312,   101,   350,   301,   293,   101,   305,   171,     4,   208,
     102,    98,   100,   351,   148,    83,   148,   208,   111,   159,
     192,   193,   194,   192,   192,   111,   103,   159,     4,     4,
     171,     4,    53,    60,   161,   162,   168,   208,   208,     4,
     208,   190,   190,   190,   190,   195,   195,   196,   196,   148,
     148,   197,   197,   197,   197,   198,   198,   199,   200,   201,
     202,   208,   203,   171,   168,   148,   148,     1,   106,   314,
     120,   101,   374,    29,    83,   148,     4,    20,    29,    30,
      40,    83,   148,   330,   333,   334,   336,   338,     1,     4,
      13,    18,    20,    21,    25,    34,    36,    37,    38,    39,
      46,    61,    70,    72,    74,    78,    79,    81,    85,   106,
     148,   151,   155,   167,   174,   175,   177,   188,   189,   190,
     206,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     224,   227,   229,   230,   231,   238,   239,   240,   243,   244,
     255,   257,   258,   259,   260,   261,   263,   264,   269,   270,
     271,   272,   274,   283,   117,    99,   103,   168,   171,    66,
     208,   222,   223,   351,   352,   353,   103,   103,   103,   103,
     103,   194,   103,   103,   103,   187,   192,    99,   160,   208,
     160,    97,   103,   107,    99,   103,     4,     4,   208,   209,
     148,     4,     4,    71,   102,   148,   148,    52,    52,     1,
     283,     1,     4,    52,    71,   220,   221,   283,   284,   331,
     391,   106,   213,   342,   106,   213,   343,   101,   107,     1,
     106,   213,   148,     1,   106,   212,   102,     1,   102,   245,
     245,     4,    15,    23,   102,   102,   208,   262,   102,   262,
     213,   213,   213,   102,     1,   102,     4,   220,   106,   106,
     106,   106,   106,   106,   106,   101,   211,     1,   106,     1,
     106,     4,   103,    99,   148,   101,    97,   190,   190,   190,
     190,   103,   162,   208,     4,   102,   102,   391,    98,   310,
       4,   225,   226,   220,   283,   148,   148,   102,   102,   102,
     120,    32,    73,   104,   105,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   129,   130,   133,   134,   135,
     136,   139,   140,   335,    98,     1,    97,   106,   102,   391,
      71,    98,   100,   211,   225,    85,   148,   167,   174,   175,
     177,   188,   189,   206,   219,   228,   248,   251,   254,   148,
       1,   106,   209,     1,   106,   208,   210,   208,     1,   106,
     208,     1,   106,    16,    33,   265,   266,   268,   208,   219,
     273,   241,     1,   210,   102,   158,   159,    98,   101,   222,
     190,   100,   106,   367,   310,   310,   100,   313,   103,   120,
       1,    97,   106,   106,   389,   102,   102,   310,   310,   310,
     222,   102,   313,   221,   310,   100,   313,   279,   319,   322,
     323,   102,     4,   275,   276,     1,   106,   247,    97,   297,
       1,   106,   103,   103,   103,   102,   213,   213,   266,   268,
     103,   210,   103,   103,   103,   179,   351,   158,   208,   101,
     103,   103,   279,   365,    99,   107,   339,   340,   209,   226,
     100,   148,   148,   103,   103,   103,   148,    99,   103,   319,
      99,    93,    94,   101,   279,   320,   323,   279,   321,   322,
     210,   120,    97,   103,   210,   249,   252,   228,     1,    41,
     256,   212,   212,   100,   232,   147,   155,   212,     1,   212,
     212,   213,    99,   367,   367,    93,    94,   101,   391,    11,
      71,   279,   326,   327,   328,     4,     4,     4,   101,   392,
     392,   392,   103,   208,   276,   212,   247,   208,    27,    15,
      23,   233,   234,   235,   236,   237,     4,   267,   267,   212,
     367,   367,   392,   100,   102,   102,    95,    96,   101,   279,
     328,   279,   327,   103,   103,    97,   103,   392,   106,   213,
     324,   324,     1,   106,   250,   253,   254,     1,   103,   246,
     212,   209,   107,   101,   235,   215,   237,   103,   103,   242,
     279,   279,   365,   168,   168,   390,   390,   390,   148,   391,
     391,   246,   212,   107,   213,   213,    94,    93,   101,   103,
     103,   213,   213,     4,   212,   367,   367,   392,   389,   389,
     103
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
     251,   251,   252,   253,   254,   254,   255,   256,   256,   257,
     257,   257,   257,   257,   258,   258,   259,   259,   260,   260,
     260,   260,   260,   260,   261,   261,   262,   262,   263,   263,
     264,   264,   264,   265,   265,   266,   266,   266,   267,   267,
     268,   269,   270,   271,   272,   273,   273,   274,   275,   275,
     276,   277,   277,   278,   278,   279,   279,   280,   280,   281,
     282,   282,   283,   283,   284,   284,   285,   286,   286,   287,
     287,   288,   288,   289,   289,   290,   290,   291,   291,   292,
     292,   292,   292,   292,   293,   293,   294,   294,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   296,   297,   297,   298,   298,   299,   299,   300,
     300,   300,   301,   301,   302,   303,   303,   304,   304,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   306,
     306,   307,   307,   308,   309,   309,   309,   309,   310,   310,
     311,   311,   312,   312,   313,   313,   314,   314,   315,   316,
     316,   316,   317,   318,   319,   319,   320,   320,   321,   321,
     322,   323,   324,   324,   325,   325,   326,   326,   327,   328,
     329,   330,   330,   331,   332,   333,   333,   334,   334,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   336,   336,   337,   338,   339,   339,   340,   340,   341,
     342,   342,   343,   343,   344,   345,   345,   346,   347,   348,
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
       1,     1,     1,     1,     2,     2,     2,     2,     3,     4,
       3,     3,     4,     3,     3,     3,     0,     1,     3,     3,
       3,     3,     4,     1,     2,     6,     6,     2,     0,     1,
       2,     2,     2,     5,     5,     1,     1,     6,     1,     3,
       3,     2,     2,     0,     1,     0,     1,     0,     1,     5,
       0,     1,     1,     2,     2,     3,     4,     1,     2,     1,
       1,     5,     5,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     1,     1,     1,     1,     0,     1,     2,
       2,     4,     1,     3,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     5,     5,     2,     7,     7,     7,     7,     0,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     4,     0,
       1,     1,     4,     9,     2,     2,     0,     1,     0,     1,
       5,     5,     1,     1,     6,    10,     2,     2,     5,     5,
       8,     5,     5,     2,     4,     1,     1,     7,    10,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     7,     4,     5,     0,     1,     5,     5,     7,
       1,     1,     1,     1,     7,     0,     1,     2,     3,     0,
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
#line 2620 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2626 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2632 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2638 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2644 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2650 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2656 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2662 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2668 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);}
#line 2674 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 132 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 133 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 136 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 137 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 140 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 141 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 145 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 146 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 150 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 169 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 179 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 183 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 200 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 204 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 2998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 238 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 259 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 273 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 276 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 277 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 280 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 286 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 295 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 297 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 298 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 317 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 329 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 332 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 333 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 350 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 351 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 354 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 355 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 387 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 412 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 413 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 437 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 443 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 471 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 477 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 3838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 482 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 3844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 486 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 487 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 490 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 493 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 496 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 497 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 3886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 500 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 3892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 509 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 510 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 511 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 512 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3922 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 514 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3928 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 515 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3934 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 518 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3940 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 519 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3946 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 520 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3952 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 521 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3958 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3964 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3970 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 524 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3976 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3982 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3988 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 532 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 3994 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 533 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4000 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4006 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4012 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 542 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4018 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4024 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 546 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4030 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 547 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4036 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 550 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4042 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 553 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4048 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 554 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4054 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4060 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4066 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4072 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4078 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 563 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4084 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4090 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4096 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 570 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4102 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4108 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 572 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4114 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 572 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4120 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 572 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4126 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4132 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 576 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4138 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4);}
#line 4144 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 583 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4150 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 585 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4156 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 590 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4162 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4168 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4174 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 595 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4180 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4186 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 599 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4192 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4198 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 603 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4204 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 606 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4210 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4216 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4222 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4228 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 616 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4234 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 618 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4240 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 620 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4246 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 621 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4252 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4258 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 623 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4264 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 624 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4270 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4276 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 628 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4282 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 631 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4288 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 632 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4294 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4300 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4306 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4312 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 638 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4318 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 639 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4324 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4330 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4336 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4342 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4348 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4354 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 651 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4360 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4366 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4372 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4378 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 657 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4384 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4390 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 661 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4396 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 664 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4402 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 665 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4408 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4414 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4420 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4426 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4432 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 679 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4438 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 682 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4444 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4450 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4456 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4462 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4468 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 696 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4474 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4480 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4486 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4492 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 704 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4498 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 707 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4504 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 708 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4510 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 711 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4516 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 712 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4522 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 715 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4528 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 716 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4534 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 719 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4540 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4546 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 723 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4552 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 732 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4558 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 733 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4564 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 736 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4570 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4576 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 740 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4582 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 743 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4588 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 744 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4594 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 747 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4600 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 748 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4606 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 751 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4612 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 752 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4618 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 755 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4624 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4630 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 759 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4636 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 760 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4642 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 763 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4648 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 764 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4654 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 767 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4660 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4666 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4672 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 770 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4678 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 771 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4684 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 782 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4690 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 783 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4696 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 786 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 4702 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 787 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 4708 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 790 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4714 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 791 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4720 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4726 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4732 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4738 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 795 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4744 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4750 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4756 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 798 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4762 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 799 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4768 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4774 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4780 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 802 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4786 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 803 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4792 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 807 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);}
#line 4798 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 809 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4804 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 810 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4810 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 4816 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 814 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 4822 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4828 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 818 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 4834 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 819 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 4840 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 4846 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 4852 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4858 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 829 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4864 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 830 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4870 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 833 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 4876 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 834 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 4882 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4888 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 838 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4894 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 839 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4900 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 840 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4906 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 841 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4912 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 842 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4918 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 843 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4924 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 844 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 845 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 850 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 4948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 851 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 4954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 4960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 855 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 4966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 858 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 4972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 4978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 4984 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 4990 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",3,1);}
#line 4996 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 5002 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 5008 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5014 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5020 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 876 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5032 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 880 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 5038 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 5044 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 884 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5050 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 885 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5056 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 888 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5062 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 891 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5068 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 892 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5074 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5080 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 897 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5086 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 903 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5092 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 906 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5098 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 907 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 910 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 911 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 914 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 915 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5128 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 921 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5134 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 927 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 931 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5152 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 934 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5158 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 938 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5164 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 941 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5170 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 942 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5176 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 948 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5182 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 954 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 960 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5194 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 963 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5200 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 965 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5206 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 968 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 972 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5218 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 975 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5224 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 976 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5230 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 979 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 980 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5242 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 983 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 984 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5254 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 985 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 986 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5266 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 987 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5272 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 988 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5278 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 989 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5284 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 990 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5290 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 991 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5296 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 992 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5302 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 993 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5308 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5314 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 995 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5320 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 996 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5326 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 997 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5332 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 998 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5338 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 999 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5344 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5350 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1001 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5356 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5362 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5368 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1004 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5374 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1007 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5380 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1008 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5386 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5392 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1014 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5398 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1017 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5404 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1018 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5410 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1021 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5416 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5422 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1038 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5428 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1041 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5434 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1042 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5440 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1045 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5446 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1046 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5452 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1051 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5458 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1054 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5464 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5470 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1058 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5476 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5482 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5488 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5494 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1068 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5500 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5506 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1072 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5512 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5518 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5524 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1075 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5530 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1076 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5536 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5542 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1078 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5548 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1079 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5554 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5560 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1086 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5566 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5572 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1090 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5578 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1091 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5584 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1094 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5590 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5596 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 5602 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1103 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 5608 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 5614 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1107 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 5620 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1110 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5626 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1113 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5632 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1114 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5638 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1117 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5644 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5650 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5656 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5662 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1123 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5668 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1124 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5674 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1128 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1132 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1133 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1146 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1150 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1152 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1174 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 5776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1177 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1178 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1181 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 5794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 5800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 5806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 5812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 5818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 5824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 5836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1201 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 5842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 5848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 5854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1208 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1212 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 5872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 5878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 5884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1220 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1223 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1224 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1226 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1230 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 5944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1231 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 5950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1234 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 5956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1237 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 5962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1238 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 5968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1241 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 5974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1244 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 5980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1251 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 5986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1254 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 5992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1257 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 5998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1260 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1263 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1266 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6020 "yacc.tab.cpp" /* yacc.c:1646  */
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




