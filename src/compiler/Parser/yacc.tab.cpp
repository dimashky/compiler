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
#define YYLAST   3582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  245
/* YYNRULES -- Number of rules.  */
#define YYNRULES  586
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1005

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
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     525,   526,   527,   528,   529,   530,   531,   533,   534,   535,
     536,   537,   538,   539,   543,   544,   547,   548,   551,   554,
     557,   558,   561,   562,   565,   568,   569,   572,   573,   576,
     577,   578,   579,   582,   585,   586,   587,   587,   587,   590,
     591,   594,   595,   596,   597,   598,   598,   601,   602,   605,
     606,   609,   610,   613,   614,   617,   620,   623,   624,   627,
     630,   631,   632,   633,   634,   637,   638,   641,   642,   645,
     646,   647,   648,   649,   650,   653,   654,   657,   658,   661,
     662,   665,   666,   667,   670,   671,   674,   675,   676,   679,
     680,   683,   686,   689,   692,   695,   698,   699,   703,   706,
     707,   710,   713,   714,   717,   718,   721,   722,   725,   726,
     729,   732,   733,   742,   743,   746,   747,   750,   753,   754,
     757,   758,   761,   762,   765,   766,   769,   770,   773,   774,
     777,   778,   779,   780,   781,   792,   793,   796,   797,   800,
     801,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   813,   817,   818,   819,   822,   823,   826,   827,
     828,   831,   832,   835,   838,   839,   842,   843,   846,   847,
     848,   849,   850,   851,   852,   853,   854,   856,   859,   860,
     863,   864,   867,   871,   872,   873,   874,   877,   878,   881,
     882,   885,   886,   889,   890,   893,   894,   897,   900,   901,
     902,   906,   909,   915,   916,   919,   920,   923,   924,   927,
     933,   939,   940,   943,   944,   950,   951,   954,   960,   966,
     972,   974,   977,   981,   984,   985,   988,   989,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,
    1016,  1017,  1020,  1023,  1026,  1027,  1030,  1031,  1047,  1050,
    1051,  1054,  1055,  1060,  1063,  1064,  1067,  1070,  1073,  1074,
    1077,  1078,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,
    1090,  1095,  1096,  1099,  1100,  1103,  1104,  1109,  1112,  1113,
    1116,  1119,  1122,  1123,  1126,  1127,  1130,  1131,  1132,  1133,
    1137,  1138,  1141,  1142,  1145,  1151,  1159,  1160,  1161,  1162,
    1165,  1170,  1171,  1176,  1179,  1180,  1183,  1186,  1187,  1190,
    1191,  1194,  1195,  1198,  1199,  1204,  1205,  1210,  1213,  1214,
    1217,  1218,  1221,  1222,  1225,  1228,  1229,  1230,  1231,  1232,
    1233,  1234,  1235,  1236,  1239,  1240,  1243,  1246,  1247,  1250,
    1253,  1260,  1263,  1266,  1269,  1272,  1275
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
  "for_statement", "$@3", "for_initializer_opt", "for_condition_opt",
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
     395,   396,   397
};
# endif

#define YYPACT_NINF -827

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-827)))

#define YYTABLE_NINF -582

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -26,    68,    94,    11,   -26,  -827,  -827,  -827,   168,   106,
    -827,   118,  -827,  1540,  -827,    40,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,    11,  -827,   132,  -827,  -827,   273,
    -827,  -827,   151,  -827,  -827,  -827,   273,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,   437,   743,
    -827,  3498,  -827,  -827,   382,   164,   183,  -827,   195,   295,
     352,  1997,   336,   362,   392,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,  -827,   273,  -827,   296,  -827,  -827,
     -26,   335,   316,   316,   316,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
     351,  -827,   355,  -827,   475,  -827,  -827,  -827,  -827,  -827,
    -827,   475,   475,   485,   397,   405,   416,  -827,  -827,   570,
    -827,   432,  -827,   339,  -827,  -827,    46,   447,  -827,   447,
     447,  -827,  -827,  -827,  -827,  -827,  -827,   461,   767,   469,
    -827,   273,   508,  -827,   273,   526,  -827,   256,  -827,  3033,
    -827,  -827,   496,   387,  -827,   504,   535,   407,   335,   335,
     335,   -44,  -827,   421,   335,   535,   457,   335,   535,   466,
     335,  -827,  -827,  -827,  -827,  -827,  -827,  -827,   -10,   540,
    -827,  3077,  -827,   553,  -827,  -827,   562,   572,  2746,  3033,
    3033,  3033,  3033,  3033,  3033,  3033,  3033,  -827,  -827,   582,
     599,    17,   606,  -827,  -827,  -827,  -827,   612,   636,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,   507,  -827,  -827,  -827,   371,  -827,   538,   200,
     320,    13,   480,   595,   620,   625,   605,   -69,  -827,  -827,
    -827,   194,  -827,   273,   273,   743,  -827,   640,   467,  -827,
    -827,  -827,  -827,   224,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,   458,   641,   646,  -827,  -827,  -827,   745,
     650,   656,  -827,  -827,   705,   654,   487,  -827,  -827,  -827,
    -827,  -827,  -827,   743,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,   655,   491,  -827,  -827,  -827,  3033,   754,
    3033,   351,   201,   664,    19,  3077,  3458,  3033,    61,    21,
      45,   550,   661,   297,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,   761,   764,  3033,   765,  2545,  -827,  3033,  -827,
    -827,   768,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  3033,  3033,  3033,  3033,  3033,  3033,  3033,
    3033,  3077,  3077,  3033,  3033,  3033,  3033,  3033,  3033,  3033,
    3033,  3033,  3033,  3033,  3033,  3033,  2545,   535,  -827,  3157,
    -827,  -827,  1834,  -827,  -827,  -827,  -827,  3077,  -827,  3077,
     233,    11,   659,  -827,   492,  -827,  3414,  -827,  -827,  3370,
    -827,  -827,   573,  -827,   677,  2545,  3033,  2631,  -827,   247,
     267,   299,   682,  -827,  -827,   685,    61,  -827,   690,   693,
    2832,  3237,    61,  -827,  -827,   574,  -827,  3033,  3033,   701,
    -827,   700,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
     538,   538,   200,   200,   355,   355,   320,   320,   320,   320,
      13,    13,   480,   595,   620,   625,   697,   605,   578,   702,
     337,  3077,  3077,   763,   766,    26,   809,    34,  -827,   237,
    -827,  -827,   301,   719,   307,   235,   454,  3077,   238,  2315,
     714,   236,   721,    47,   722,   724,  3033,   726,  3033,   732,
     579,   732,   731,   269,  -827,    76,   582,   599,    77,  1666,
    1693,  1611,   101,   604,   371,   240,  -827,  -827,  -827,   720,
    2199,  -827,  -827,  -827,   248,   253,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,    78,    81,
      83,  -827,  -827,  -827,  3033,  -827,  -827,  3077,    85,   124,
    -827,  -827,   733,   585,  3077,  -827,  -827,  -827,  -827,   734,
     737,  -827,  -827,  -827,  -827,  3033,  -827,  3033,  3033,  3033,
    -827,   735,  -827,  -827,  -827,  -827,  2545,  -827,  3033,  -827,
    -827,   -44,    95,    99,  3077,  3077,   738,   744,   746,   747,
     304,  3233,   739,   181,  -827,   750,    37,   741,   755,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  2199,  -827,  -827,  -827,
      95,  -827,  -827,   760,  3077,  -827,  2947,  3077,   254,  3033,
     255,  3033,  3033,  -827,   268,  3033,   270,    30,  -827,  -827,
    2947,  -827,  1953,   736,   757,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,   102,
     756,   758,   769,  -827,   475,   -51,  -827,  2430,  -827,  -827,
    -827,  -827,  3033,  -827,  -827,   759,   748,   230,  -827,   216,
    -827,   215,   218,   -44,   -44,   762,   -44,  2631,  -827,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
     772,    11,  -827,   855,  -827,   -44,   771,  -827,    11,    11,
    -827,   778,   777,   108,  2947,   513,   953,  1643,  1575,   404,
    1182,   177,  -827,  -827,   274,  -827,   784,   127,  -827,  -827,
     278,  -827,  -827,  -827,   779,   783,  -827,  -827,   786,  -827,
    -827,   583,   732,    30,  -827,  -827,  -827,  -827,   788,  3033,
     790,   791,   358,   -44,   -44,   795,    11,   796,   475,  3033,
    -827,  -827,  -827,   792,  3033,  -827,   857,  -827,  -827,   797,
    3077,  3077,   798,   800,   732,   802,  -827,  3077,   589,  -827,
     803,    11,   590,   360,   806,   493,   497,  3033,   749,   412,
    -827,   804,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  3033,
    3033,  3033,   822,  -827,  -827,  2315,  2315,   808,    46,  -827,
    -827,  -827,  -827,  2315,   863,  2315,  2315,   811,  -827,  -827,
     810,   812,    11,   594,  -827,  -827,  -827,   815,    33,  -827,
    -827,  -827,  -827,    11,   131,   135,  -827,  -827,  -827,  -827,
     139,  -827,  -827,   816,  -827,  -827,  -827,  -827,   824,  -827,
    -827,   773,  -827,  -827,   813,  3033,   905,  2315,  3033,  -827,
     281,  -827,   284,  -827,  3033,   892,  -827,   385,  -827,   916,
     916,  -827,  2315,  -827,  -827,  -827,   358,   358,   524,   820,
    -827,  -827,   825,   829,   527,   821,    11,    11,   823,   830,
     442,  -827,   451,   451,  -827,   285,  -827,  -827,  -827,   818,
    3033,  3033,  3033,  3033,   832,  2315,  3033,   831,   835,   385,
    -827,  2083,  -827,  -827,   834,   836,  -827,  -827,  -827,   358,
     358,  -827,   840,  2545,  2545,  -827,  -827,  -827,   846,  -827,
     837,  -827,  -827,  -827,  3077,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  3033,   842,  -827,   784,   843,   844,   845,
    2315,  -827,   848,  -827,  -827,  -827,  2199,  -827,   732,   732,
    -827,   501,   511,  -827,    11,   847,   849,   732,   732,  -827,
     142,  -827,  -827,   942,  2315,  2315,  2315,  2315,  -827,  -827,
    -827,  -827,   859,   856,   850,  -827,  -827,  -827,  -827,   854,
    2315,  -827,  -827,  -827,  -827,   358,   358,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,  -827
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     334,     0,     0,   336,   335,   348,   350,   351,   343,     0,
      10,     0,     1,   365,   358,   336,   356,   359,   360,   361,
     362,   363,   364,   337,   557,   558,     0,   349,   345,     0,
     355,   354,   344,   369,   370,   371,     0,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,     0,   366,
     367,   365,   357,   559,   562,   343,     0,   346,     0,     0,
       0,     0,     0,     0,     0,   368,   567,   572,   565,   566,
     568,   569,   570,   571,   573,     0,   563,     0,   353,   352,
     334,   341,   386,   386,   386,    20,    25,    32,    23,    34,
      33,    28,    30,    35,    24,    26,    36,    29,    31,    27,
     420,    15,   419,    12,    14,    16,    19,    21,    22,    17,
      18,    13,    11,     0,   544,   518,   494,   579,    11,     0,
     574,   577,   564,   336,   342,   340,     0,     0,   387,     0,
       0,    38,    37,    44,    40,    39,    41,     0,     0,     0,
     545,     0,     0,   519,     0,     0,   495,     0,   582,    75,
     576,   578,     0,   336,   391,   388,   389,   336,   341,   341,
     341,   336,   546,   336,   341,   520,   336,   341,   496,   336,
     341,   582,   575,   560,     3,     4,     5,     6,     0,     0,
       9,     0,     7,     0,    79,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     2,     0,
       0,    97,    52,    51,    55,    56,    57,     0,    76,    58,
      59,    99,   100,    60,    84,    54,    61,    63,    64,   101,
     113,    62,   105,   114,   111,   112,   127,   104,   131,   134,
     137,   144,   147,   149,   151,   153,   155,   157,   171,   172,
      77,    98,   347,     0,     0,   365,   407,     0,   336,   396,
     398,   399,   400,     0,   401,   402,   403,   404,   405,   406,
     384,   385,   383,   428,     0,   418,   423,   425,   426,     0,
       0,   550,   551,   543,   532,     0,   336,   524,   526,   527,
     529,   528,   517,   365,   510,   502,   503,   504,   505,   506,
     507,   508,   509,     0,   336,   500,   493,   561,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,   121,   121,
     121,   131,     0,    98,   108,   109,   110,    95,   102,   103,
     106,   107,     0,     0,     0,     0,    71,   580,     0,    82,
      83,     0,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,   390,   392,     0,
     393,   397,     0,   422,   421,   412,   430,     0,   429,     0,
       0,   336,   553,   547,   336,   533,     0,   521,   525,     0,
     497,   501,     0,    80,     0,    71,     0,   513,    87,     0,
       0,     0,     0,   126,   125,     0,   122,   123,     0,     0,
       0,    65,   121,    67,    68,     0,    66,     0,     0,    72,
      46,     0,    48,    78,    94,   159,   128,   129,   130,   127,
     132,   133,   135,   136,   143,   142,   139,   138,   140,   141,
     145,   146,   148,   150,   152,   154,     0,   156,     0,     0,
     343,     0,     0,     0,     0,     0,     0,     0,   585,     0,
     454,   455,     0,     0,   343,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,     0,   307,     0,
       0,     0,     0,     0,   197,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,   195,   177,   178,     0,
     194,   179,   175,   176,     0,     0,   180,   181,   244,   245,
     182,   189,   259,   260,   261,   262,   183,   290,   291,   292,
     293,   294,   184,   185,   186,   187,   188,   190,    98,     0,
       0,   556,   555,   424,     0,   548,   552,     0,     0,     0,
      81,    92,     0,     0,     0,   208,   515,   210,   209,     0,
     514,    96,    91,    90,    93,     0,   124,     0,     0,     0,
     115,     0,    73,    50,    45,    49,     0,    69,     0,    74,
      70,   336,     0,     0,     0,     0,     0,     0,     0,     0,
     206,     0,     0,     0,   204,   585,     0,     0,     0,   490,
     489,   453,   492,   491,   482,   192,     0,   296,   295,   322,
       0,   298,   297,     0,     0,   275,   277,     0,     0,     0,
       0,     0,     0,   308,     0,     0,     0,     0,   323,   263,
       0,   266,     0,   206,   203,   223,   216,   226,   219,   227,
     220,   224,   217,   228,   221,   229,   222,   225,   218,   191,
     196,   201,   199,   202,   200,   431,   427,   173,   554,     0,
       0,   585,     0,    85,    42,     0,   511,     0,   120,   118,
     119,   116,     0,    47,   158,     0,     0,     0,   213,     0,
     583,     0,     0,   336,   336,     0,   336,     0,   465,   464,
     476,   477,   458,   459,   466,   467,   468,   469,   470,   460,
     461,   471,   472,   473,   474,   475,   479,   478,   462,   463,
       0,   336,   411,     0,   410,   336,     0,   452,   336,   336,
     198,   212,     0,     0,   277,     0,     0,     0,     0,     0,
       0,     0,   283,   287,     0,   278,   284,     0,   302,   299,
       0,   304,   301,   174,     0,     0,   306,   305,     0,   310,
     309,     0,     0,   311,   314,   312,   327,   326,     0,     0,
       0,     0,     0,   336,   336,     0,   336,    88,    42,     0,
     512,   516,   117,   484,     0,   409,     0,   408,   443,     0,
       0,     0,     0,     0,     0,     0,   207,     0,     0,   205,
       0,   336,     0,     0,     0,   336,   336,     0,     0,     0,
     329,     0,   237,   240,   241,   238,   242,   243,   239,   279,
     279,     0,     0,   303,   300,     0,     0,     0,     0,   318,
     321,   315,   313,     0,     0,     0,     0,     0,   541,   540,
       0,     0,   336,     0,    86,    89,    43,     0,     0,   483,
     485,   215,   214,   336,     0,     0,   416,   414,   488,   415,
       0,   450,   413,     0,   451,   586,   586,   586,     0,   433,
     436,     0,   434,   438,     0,     0,     0,     0,   279,   285,
       0,   280,     0,   288,     0,   246,   324,   250,   248,   319,
     319,   325,     0,   265,   264,   542,     0,     0,     0,     0,
     585,   211,     0,     0,     0,     0,   336,   336,     0,     0,
       0,   586,     0,     0,   449,     0,   331,   330,   328,     0,
     281,   281,   281,   281,     0,     0,     0,     0,     0,   251,
     252,     0,   255,   320,     0,     0,   267,   531,   530,     0,
       0,   586,     0,    71,    71,   584,   584,   584,     0,   445,
       0,   446,   481,   480,     0,   456,   432,   442,   441,   585,
     585,   270,   269,   281,     0,   282,   286,     0,     0,     0,
       0,   247,     0,   258,   249,   253,   254,   256,     0,     0,
     268,   336,   336,   534,   336,     0,     0,     0,     0,   444,
       0,   439,   440,     0,     0,     0,     0,     0,   289,   257,
     317,   316,     0,     0,     0,   486,   487,   583,   583,     0,
       0,   274,   272,   273,   271,     0,     0,   586,   447,   448,
     457,   276,   538,   539,   535
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -827,  -827,  -827,  -827,   -70,    -4,   782,  -827,   -54,  -827,
     826,  -827,   -58,  -827,   785,   207,   -93,   549,  -827,   402,
    -827,  -827,  -827,  -827,   211,  -364,  -827,  -827,    -8,  -827,
    -827,   294,   423,  -827,   532,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,  -827,   558,   569,   680,    72,  -827,  -226,
    -827,   564,  -179,   309,   225,   338,   617,   611,   618,   616,
     621,  -827,  -827,   715,  -827,   394,  -599,  -594,  -496,  -229,
    -117,  -827,    69,  -827,  -827,  -827,  -553,  -181,   279,  -581,
    -827,  -827,   381,   220,  -827,   186,  -827,  -827,  -827,  -827,
    -827,  -827,    75,  -827,    79,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,  -827,   275,  -757,  -810,  -827,  -827,  -827,  -590,
    -827,  -827,  -827,  -827,  -827,  -827,   510,  -827,  -827,  -827,
     249,   121,   250,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
     138,  -827,   915,    -3,  -827,  -827,   317,     0,   539,  -827,
    -827,   993,  -827,  -827,   875,    -1,  -132,  -193,  -827,   950,
    -827,   614,  -827,   140,   575,  -827,  -827,   752,  -154,  -143,
    -137,  -827,  -563,  -827,  -827,  -635,   623,  -827,  -827,  -827,
    -136,   221,  -827,  -827,   219,   222,   117,  -135,  -827,   126,
     125,  -130,  -827,  -827,  -127,  -827,  -827,  -827,  -827,  -124,
    -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,   727,  -298,  -827,  -827,  -827,  -827,  -827,  -827,
    -827,  -827,   742,  -827,  -827,  -827,  -827,    56,  -827,  -662,
    -827,  -827,  -827,  -827,  -827,  -827,   639,  -827,  -827,  -827,
    1001,  -827,  -827,  -827,  -827,   883,  -827,  -827,  -827,  -827,
     860,  -288,  -224,  -572,  -826
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   197,   198,     9,   101,   485,   103,   104,   199,   106,
     107,   108,   200,   110,   111,   757,   404,   563,   419,   420,
     201,   202,   203,   204,   205,   421,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   824,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   405,
     406,   407,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   343,   733,   648,   859,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   583,   584,   546,
     547,   505,   667,   668,   506,   723,   507,   508,   509,   868,
     908,   909,   910,   911,   912,   510,   511,   512,   749,   960,
     513,   514,   714,   724,   860,   944,   725,   861,   945,   946,
     515,   516,   517,   518,   519,   520,   614,   521,   522,   743,
     744,   914,   745,   523,   524,   525,   526,   748,   527,   789,
     790,     2,     3,   263,   152,    14,   125,   241,    11,    81,
       4,     5,     6,     7,    15,    16,    17,    48,    49,    50,
      18,   127,   128,   156,   158,   247,   248,   249,   250,   251,
     252,   253,   264,   113,   375,   265,   266,   267,   379,   268,
     254,   784,   849,   852,   785,   786,   939,   255,   885,   886,
     887,   256,   458,   587,   257,   459,   460,   700,   461,   258,
     462,   829,   830,   259,   591,   594,    19,   145,   146,   170,
     293,   294,   295,   548,   549,   550,    20,   142,   143,   167,
     275,   276,   277,   278,   386,   279,   280,   879,   281,   819,
      21,   139,   140,   164,   270,   271,   272,    22,    23,    24,
      25,    75,    76,    77,   119,   120,   150,   121,   151,    26,
     173,   769,   967,   588,   892
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    10,   449,   109,   640,   117,   398,   105,   665,   311,
     730,   134,    51,   706,    52,   285,   726,   734,   135,   136,
     893,   894,   133,   351,   133,   246,   286,   576,   751,    56,
      55,   542,   287,   288,   289,   579,    58,   284,   580,   290,
    -333,    32,   291,   862,   882,   292,   741,   759,   133,   363,
      55,   608,   369,   722,  -581,     1,   154,   102,   352,  -417,
     132,   112,   609,   742,   133,   936,   778,   747,   155,   364,
     610,   154,     8,   782,   154,   118,   761,   117,   625,   755,
     623,   133,   -11,   408,   409,   645,   581,   646,   298,   650,
     389,   947,   948,   949,    12,   963,   776,    93,   299,   666,
     710,   899,   633,   580,   883,   582,   752,    30,   707,  -581,
     772,   773,   788,   775,    96,   324,   246,   353,   354,   397,
      51,   823,    32,   109,   726,   325,   118,   105,   651,   322,
     310,   802,   403,   973,   309,   888,   374,   131,  -581,   889,
     285,   118,   780,   890,   118,   132,   989,   118,   355,   356,
      51,   286,    52,   323,   245,   814,   403,   287,   288,   289,
     269,   722,   284,   274,   290,   831,   283,   291,   430,   431,
     292,  1004,   403,   154,   368,   -56,   365,   302,   798,   -56,
     366,   112,   702,   626,    78,   -56,   561,   132,   313,   -11,
     820,   821,   132,   854,   132,   652,   131,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   132,   634,   -56,   -56,
     132,   135,    31,   132,   917,   918,   -56,   -56,   -56,   132,
     412,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
      54,   765,  -111,  -111,   531,   132,   597,   605,   132,   601,
     603,   637,   132,   118,   118,   245,   132,   109,   109,   641,
     132,   105,   105,   132,   643,   728,   731,   961,   962,    57,
      55,   314,   315,   316,   317,   318,   319,   320,   321,   736,
     621,   739,    28,   274,  -232,   799,    28,    55,   703,   803,
    -232,   165,   900,  -232,   168,   902,   941,   704,    29,    79,
     392,   283,   365,   109,   109,    80,   366,   105,   105,    82,
     133,   399,   401,   395,   624,   112,   112,   952,   922,   347,
     348,   109,   132,   703,   487,   105,   415,   770,   486,   109,
     771,   109,   768,   105,   372,   105,   132,   766,   109,   132,
     373,   109,   105,  1002,  1003,   105,   767,   372,   606,   532,
     114,   598,   590,   589,   602,   593,   638,   434,   435,   599,
     551,   112,   112,    83,   642,   171,    84,   448,   132,   644,
     729,   732,   617,   618,   619,   457,   115,   971,   972,   112,
     552,   622,   528,   529,   737,   530,   740,   112,   131,   112,
     800,   269,   539,   367,   804,   457,   112,   901,   543,   112,
     903,   942,   669,   109,   109,   365,   116,   105,   105,   366,
     906,   372,   553,   122,  -343,   796,  -343,   592,   907,   109,
     132,    66,    28,   105,   596,    28,   426,   427,   428,   429,
     429,   429,   429,   126,   677,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   136,   429,  -581,    59,   571,
    -338,   124,   487,    67,   494,    28,   486,   572,   573,   349,
     350,   112,   112,   845,   846,   577,    60,   585,   817,   825,
     640,    61,   131,   600,   818,    62,   132,   112,    68,    69,
      70,    71,    72,    73,    74,   260,   261,   262,   133,   109,
      63,   273,   426,   105,   282,  -581,   109,   296,  -339,   137,
     105,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     528,  -235,   341,   342,   138,  -581,    64,  -235,  -394,   856,
    -235,   376,   141,   377,   792,   857,   109,   109,   378,  -581,
     105,   105,  -549,   144,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,   649,   149,  -111,  -111,   112,   487,   934,
     655,   494,   486,   240,   112,   935,   109,   157,   487,   109,
     105,   372,   486,   105,   372,  -581,   300,   937,  -522,   965,
     966,   758,   487,   161,  -581,  -581,   486,  -498,  -395,   163,
     671,   672,   494,   670,   112,   112,   865,   866,   436,   437,
     438,   439,   312,   488,   871,  -581,   873,   874,  -523,  -581,
    -581,  -581,  -499,   535,  -435,  -581,   528,   242,  -437,  -581,
     713,   243,  -536,   727,   112,   635,   528,   112,   166,  -581,
    -230,   -56,  -537,   357,   358,   -56,  -230,   919,   920,  -230,
     528,   -56,   925,   926,   809,   810,   169,   658,   898,   659,
     660,   661,   244,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   300,   916,   -56,   -56,   329,   330,   331,   344,
     345,   346,   -56,   -56,   -56,   305,   487,   838,   432,   433,
     486,   410,   345,   346,   306,   758,   489,   147,   494,   148,
     328,   328,   540,   562,   307,   328,   951,   569,   494,   372,
     488,   307,   328,   372,   654,   808,   381,   381,   841,   844,
     322,   381,   240,   880,   394,   440,   441,   129,   130,   998,
     999,   402,   968,   969,   159,   160,   783,   323,   326,   359,
     636,   488,   109,   109,   528,   327,   105,   105,   240,   109,
     422,   978,   423,   105,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,   328,   762,  -112,  -112,   425,   869,   360,
     361,   370,   362,   381,   380,   991,   992,   993,   994,   382,
     870,   383,    33,   384,   385,   387,   390,   446,   393,   240,
     422,  1001,   396,   489,   411,   413,   834,   835,   414,   416,
     112,   112,   424,   840,    34,   938,   938,   112,   783,   534,
     541,    86,   848,   851,    87,   554,   494,    35,   555,   422,
     240,   545,    37,   557,   489,   490,   558,    38,   566,    39,
      40,    41,    42,   567,   568,   570,    43,   488,   118,    91,
      44,   564,   564,   578,    92,   574,   604,   715,   575,   878,
     595,   639,    45,   607,   611,    46,   612,    47,   615,    94,
     884,    95,   372,   620,   657,   656,   653,   701,   662,   708,
     673,   980,   981,    97,    98,   712,   674,    99,   675,   676,
     987,   988,   705,   487,   703,   709,   677,   486,   753,   623,
     754,   666,   763,   864,   872,   774,   845,   756,   764,   855,
     613,   781,   613,   494,   777,   766,   109,   494,   494,   787,
     105,   801,   805,   928,   930,   494,   806,   494,   494,   807,
     489,   813,   490,   815,   816,   822,   397,   833,   487,   828,
     716,   836,   486,   837,   491,   839,   842,   847,   867,   788,
     858,   528,   875,   876,   881,   877,   895,   891,   846,   905,
     913,   921,   927,   490,   943,   715,   932,   923,   647,   494,
     970,   924,   925,   933,   112,   950,   954,   958,   953,   959,
     964,   492,   926,   990,   494,   974,   975,   976,   977,   996,
     985,   997,   986,   995,   793,   979,   528,  1000,   982,   983,
     422,   878,   664,   303,   162,   826,   304,   565,   663,   560,
     556,   443,   494,   494,   494,   494,   442,   494,   445,   444,
     956,   711,   779,   494,   955,   447,   832,   863,   616,   791,
     957,   915,   811,   812,   897,   123,   586,    27,   153,    65,
     371,   491,   843,   647,   533,   853,   735,   850,   716,   738,
     940,   929,   715,   931,   746,   494,   488,   488,   388,   490,
     984,   391,   494,   536,   488,    53,   488,   488,   494,   717,
     172,   297,   491,     0,     0,     0,     0,     0,   492,     0,
       0,     0,     0,     0,     0,     0,   494,   494,   494,   494,
    -233,   545,   493,     0,     0,     0,  -233,     0,     0,  -233,
       0,     0,   494,     0,     0,     0,     0,     0,   488,   492,
       0,   545,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,     0,   488,   -99,   -99,     0,   495,     0,     0,
       0,     0,   -99,   -99,   -99,   716,     0,     0,     0,   489,
     489,     0,     0,     0,     0,     0,     0,   489,     0,   489,
     489,   715,   715,   715,   715,     0,   488,     0,     0,     0,
       0,     0,   488,     0,     0,     0,     0,     0,   491,     0,
       0,     0,     0,     0,     0,     0,     0,   717,   718,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   493,
       0,   489,     0,   827,   715,     0,     0,     0,   647,     0,
       0,   488,     0,     0,     0,   492,   489,   488,     0,     0,
       0,     0,     0,     0,     0,   719,     0,     0,     0,     0,
     493,     0,     0,   797,   495,   488,   488,   488,   488,     0,
       0,     0,     0,     0,   716,   716,   716,   716,     0,   489,
       0,   488,     0,     0,     0,   489,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   495,     0,     0,     0,     0,
       0,     0,     0,     0,   717,     0,     0,     0,   490,   490,
       0,     0,     0,     0,     0,     0,   490,   716,   490,   490,
       0,     0,     0,     0,   489,     0,   718,     0,     0,   896,
     489,     0,     0,     0,     0,     0,     0,     0,   904,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   489,   489,
     489,   489,     0,     0,     0,     0,   493,     0,     0,  -236,
     490,     0,     0,   719,   489,  -236,   720,     0,  -236,     0,
       0,     0,     0,     0,     0,   490,     0,     0,     0,     0,
     647,     0,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,   495,     0,  -112,  -112,     0,     0,   422,   422,     0,
       0,   721,     0,   717,   717,   717,   717,     0,   490,     0,
       0,     0,     0,   718,   490,     0,     0,   491,   491,     0,
       0,     0,     0,     0,     0,   491,     0,   491,   491,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   717,     0,     0,     0,
     719,     0,     0,   490,   492,   492,     0,     0,     0,   490,
       0,     0,   492,     0,   492,   492,     0,     0,     0,   491,
       0,     0,     0,     0,   720,     0,     0,   490,   490,   490,
     490,     0,     0,     0,   491,     0,     0,     0,     0,     0,
       0,     0,     0,   490,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   492,     0,     0,   721,
       0,     0,   718,   718,   718,   718,     0,   491,     0,     0,
       0,   492,     0,   491,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   719,
     719,   719,   719,     0,   492,   718,     0,     0,     0,     0,
     492,   720,   491,     0,     0,   493,   493,     0,   491,     0,
       0,     0,     0,   493,     0,   493,   493,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,   491,   491,   491,
       0,     0,   719,     0,     0,     0,   721,     0,     0,   492,
     495,   495,   491,     0,     0,   492,     0,     0,   495,     0,
     495,   495,     0,     0,     0,     0,     0,   493,     0,     0,
    -332,     0,     0,   492,   492,   492,   492,     0,     0,    33,
       0,     0,   493,     0,     0,     0,     0,     0,     0,   492,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,   495,     0,     0,     0,   795,     0,     0,     0,
     720,   720,   720,   720,    35,   493,     0,   495,    36,    37,
       0,   493,     0,     0,    38,     0,    39,    40,    41,    42,
       0,     0,     0,    43,     0,     0,     0,    44,     0,     0,
       0,     0,   631,     0,     0,   721,   721,   721,   721,    45,
     495,     0,    46,   720,    47,     0,   495,     0,     0,     0,
     493,     0,     0,     0,     0,     0,   493,     0,     0,     0,
       0,     0,     0,     0,   794,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   493,   493,   493,   493,   721,     0,
       0,     0,     0,     0,     0,   495,     0,   627,     0,     0,
     493,   495,  -231,   -84,     0,     0,     0,   -84,  -231,     0,
       0,  -231,     0,   -84,     0,     0,     0,     0,     0,   495,
     495,   495,   495,     0,   629,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   495,   -84,   -84,     0,   -84,
       0,     0,     0,   -84,   -84,   -84,   -84,   632,     0,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
    -234,     0,   -84,   -84,     0,     0,  -234,     0,     0,  -234,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,   628,     0,  -100,  -100,     0,     0,     0,     0,
       0,     0,  -100,  -100,  -100,     0,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,     0,     0,   -99,   -99,   630,
       0,     0,     0,     0,     0,   -99,   -99,   -99,     0,     0,
       0,     0,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,     0,     0,  -100,  -100,     0,     0,     0,     0,
       0,     0,  -100,  -100,  -100,   463,     0,     0,   464,   174,
     175,   176,   177,     0,     0,   178,    85,   465,    86,     0,
       0,    87,   466,     0,   467,   468,    88,     0,     0,   469,
      89,     0,     0,     0,     0,     0,   180,     0,   470,    90,
     471,   472,   473,   474,     0,     0,    91,     0,     0,     0,
     475,    92,     0,   181,   182,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   476,    94,     0,    95,   183,
       0,     0,    96,     0,   477,   184,   478,   185,   479,   186,
      97,    98,   480,   481,    99,   482,     0,   301,     0,   483,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,  -193,   188,     0,     0,     0,
     484,     0,     0,   189,   190,   191,     0,     0,   192,     0,
     193,   194,     0,     0,   750,     0,     0,    55,   174,   175,
     176,   177,     0,     0,   178,    85,     0,    86,     0,     0,
      87,   179,     0,   195,   196,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,   180,     0,     0,    90,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
      92,    55,   181,   182,    93,     0,     0,     0,     0,    85,
       0,    86,     0,     0,    87,    94,     0,    95,   183,    88,
       0,    96,     0,    89,   184,     0,   185,     0,   186,    97,
      98,   187,    90,    99,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,    92,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,   188,     0,     0,     0,    94,
       0,    95,   189,   190,   191,    96,     0,   192,     0,   193,
     194,     0,     0,    97,    98,     0,     0,    99,     0,     0,
     100,     0,     0,     0,     0,     0,     0,   464,   174,   175,
     176,   177,   195,   196,   178,    85,   465,    86,   906,     0,
      87,   466,     0,   467,   468,    88,   907,     0,   469,    89,
       0,     0,     0,     0,     0,   180,     0,   470,    90,   471,
     472,   473,   474,     0,     0,    91,     0,     0,     0,   475,
      92,     0,   181,   182,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,    94,     0,    95,   183,     0,
       0,    96,     0,   477,   184,   478,   185,   479,   186,    97,
      98,   480,   481,    99,   482,     0,   301,     0,   483,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,   188,     0,     0,     0,   484,
       0,     0,   189,   190,   191,     0,     0,   192,     0,   193,
     194,     0,     0,   464,   174,   175,   176,   177,     0,     0,
     178,    85,   465,    86,     0,     0,    87,   466,     0,   467,
     468,    88,   195,   196,   469,    89,     0,     0,     0,     0,
       0,   180,     0,   470,    90,   471,   472,   473,   474,     0,
       0,    91,     0,     0,     0,   475,    92,     0,   181,   182,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     476,    94,     0,    95,   183,     0,     0,    96,     0,   477,
     184,   478,   185,   479,   186,    97,    98,   480,   481,    99,
     482,     0,   301,     0,   483,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,   188,     0,     0,     0,   484,     0,     0,   189,   190,
     191,     0,     0,   192,     0,   193,   194,     0,     0,    55,
     174,   175,   176,   177,     0,     0,   178,    85,   465,    86,
       0,     0,    87,   466,     0,     0,   468,    88,   195,   196,
     469,    89,     0,     0,     0,     0,     0,   180,     0,   470,
      90,   471,   472,   473,   474,     0,     0,    91,     0,     0,
       0,   475,    92,     0,   181,   182,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,    94,     0,    95,
     183,     0,     0,    96,     0,   477,   184,   478,   185,   479,
     186,    97,    98,   480,   481,    99,   482,     0,     0,     0,
     483,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   372,     0,   188,     0,     0,
       0,   484,     0,     0,   189,   190,   191,     0,     0,   192,
       0,   193,   194,     0,    55,   174,   175,   176,   177,     0,
       0,   178,    85,     0,    86,     0,     0,    87,   179,     0,
       0,     0,    88,     0,   195,   196,    89,     0,     0,     0,
       0,     0,   180,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,    92,     0,   181,
     182,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,    95,   183,   544,     0,    96,     0,
       0,   184,     0,   185,     0,   186,    97,    98,   187,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     397,   760,   188,     0,     0,     0,     0,     0,     0,   189,
     190,   191,     0,     0,   192,     0,   193,   194,     0,    55,
     174,   175,   176,   177,     0,     0,   178,    85,     0,    86,
       0,     0,    87,   179,     0,     0,     0,    88,     0,   195,
     196,    89,     0,     0,     0,     0,     0,   180,     0,     0,
      90,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,    92,     0,   181,   182,    93,     0,   417,     0,
       0,     0,     0,     0,     0,   418,     0,    94,     0,    95,
     183,     0,     0,    96,     0,     0,   184,     0,   185,     0,
     186,    97,    98,   187,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,   174,   175,   176,   177,
       0,     0,   178,    85,     0,    86,     0,   188,    87,   179,
       0,     0,     0,    88,   189,   190,   191,    89,     0,   192,
       0,   193,   194,   180,     0,     0,    90,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,    92,     0,
     181,   182,    93,     0,   195,   196,     0,     0,     0,     0,
       0,     0,     0,    94,     0,    95,   183,   544,     0,    96,
       0,     0,   184,     0,   185,     0,   186,    97,    98,   187,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   397,     0,   188,     0,     0,     0,     0,     0,     0,
     189,   190,   191,     0,     0,   192,     0,   193,   194,     0,
      55,   174,   175,   176,   177,     0,     0,   178,    85,     0,
      86,     0,     0,    87,   179,     0,     0,     0,    88,     0,
     195,   196,    89,     0,     0,     0,     0,     0,   180,     0,
       0,    90,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,    92,     0,   181,   182,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
      95,   183,     0,     0,    96,     0,     0,   184,     0,   185,
       0,   186,    97,    98,   187,     0,    99,     0,     0,   308,
       0,     0,     0,     0,     0,     0,    55,   174,   175,   176,
     177,     0,     0,   178,    85,     0,    86,     0,   188,    87,
     179,     0,     0,     0,    88,   189,   190,   191,    89,     0,
     192,     0,   193,   194,   180,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,    92,
       0,   181,   182,    93,     0,   195,   196,     0,     0,     0,
       0,     0,     0,     0,    94,     0,    95,   183,     0,     0,
      96,     0,     0,   184,     0,   185,     0,   186,    97,    98,
     187,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   188,   559,     0,     0,     0,     0,
       0,   189,   190,   191,     0,     0,   192,     0,   193,   194,
       0,    55,   174,   175,   176,   177,     0,     0,   178,    85,
       0,    86,     0,     0,    87,   179,     0,     0,     0,    88,
       0,   195,   196,    89,     0,     0,     0,     0,     0,   180,
       0,     0,    90,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,    92,     0,   181,   182,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,    95,   183,     0,     0,    96,     0,     0,   184,     0,
     185,     0,   186,    97,    98,   187,     0,    99,     0,     0,
     301,     0,     0,     0,     0,     0,     0,    55,   174,   175,
     176,   177,     0,     0,   178,    85,     0,    86,     0,   188,
      87,   179,     0,     0,     0,    88,   189,   190,   191,    89,
       0,   192,     0,   193,   194,   180,     0,     0,    90,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
      92,    55,   181,   182,    93,     0,   195,   196,     0,    85,
       0,    86,     0,     0,    87,    94,     0,    95,   183,    88,
       0,    96,     0,    89,   184,     0,   185,     0,   186,    97,
      98,   187,    90,    99,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,    92,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,   188,     0,     0,     0,    94,
       0,    95,   189,   190,   191,    96,     0,   192,     0,   193,
     194,     0,     0,    97,    98,     0,     0,    99,    59,     0,
     301,   450,     0,     0,     0,     0,     0,     0,     0,    85,
       0,    86,   195,   196,    87,     0,    60,   451,     0,    88,
       0,    61,     0,    89,     0,    62,   452,   453,     0,     0,
       0,     0,    90,     0,     0,     0,     0,   454,     0,    91,
      63,     0,     0,     0,    92,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,    95,     0,     0,     0,    96,    64,     0,     0,     0,
       0,     0,     0,    97,    98,     0,     0,    99,     0,     0,
     455,    55,   174,   175,   176,   177,     0,     0,   178,    85,
       0,    86,     0,     0,    87,   179,     0,     0,     0,    88,
       0,     0,     0,    89,     0,   678,     0,     0,     0,   180,
       0,     0,    90,     0,   456,     0,     0,     0,     0,    91,
       0,     0,     0,     0,    92,     0,   181,   182,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,    95,   183,     0,     0,    96,   679,     0,   184,     0,
     185,     0,   186,    97,    98,   187,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   680,   681,   188,
       0,     0,   682,   683,   684,   685,   686,   687,   688,   689,
     690,     0,   691,   193,   194,     0,     0,     0,     0,     0,
       0,     0,   692,   693,     0,     0,   694,   695,   696,   697,
       0,    59,   698,   699,   450,     0,     0,     0,     0,     0,
       0,     0,    85,     0,    86,     0,     0,    87,     0,    60,
     451,     0,    88,     0,    61,     0,    89,     0,    62,   452,
     453,     0,     0,     0,     0,    90,     0,     0,     0,     0,
     454,     0,    91,    63,     0,     0,     0,    92,    55,     0,
       0,    93,     0,     0,     0,     0,    85,     0,    86,     0,
       0,    87,    94,     0,    95,     0,    88,     0,    96,    64,
      89,     0,     0,   537,     0,     0,    97,    98,     0,    90,
      99,     0,     0,   455,     0,     0,    91,     0,     0,     0,
       0,    92,    55,     0,     0,    93,     0,     0,     0,     0,
      85,     0,    86,     0,     0,    87,    94,     0,    95,     0,
      88,     0,    96,     0,    89,     0,     0,     0,     0,     0,
      97,    98,     0,    90,    99,     0,     0,   538,     0,     0,
      91,     0,     0,     0,     0,    92,     0,    33,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,    95,     0,     0,     0,    96,     0,     0,    34,
       0,     0,     0,     0,    97,    98,     0,     0,    99,     0,
       0,   400,    35,     0,     0,     0,    36,    37,     0,     0,
       0,     0,    38,     0,    39,    40,    41,    42,     0,     0,
       0,    43,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,     0,    47
};

static const yytype_int16 yycheck[] =
{
       3,     1,   366,    61,   500,    75,   304,    61,   571,   188,
     609,   104,    15,   585,    15,   169,   606,   611,   111,   112,
     846,   847,     3,    10,     3,   157,   169,     1,   622,    29,
       4,   395,   169,   169,   169,     1,    36,   169,     4,   169,
       0,     4,   169,   800,    11,   169,    16,    98,     3,   118,
       4,     4,   245,   606,    98,    81,   126,    61,    45,   103,
     111,    61,    15,    33,     3,   891,   701,   620,   126,   138,
      23,   141,     4,   708,   144,    75,   657,   147,     1,   651,
       4,     3,     4,   309,   310,     4,    52,     4,    98,     4,
     283,   901,   902,   903,     0,   921,   677,    51,   108,     4,
     596,   858,     1,     4,    71,    71,     4,     1,    71,    98,
     673,   674,     4,   676,    68,    98,   248,   104,   105,   100,
     123,   756,     4,   181,   714,   108,   126,   181,     4,   108,
     188,     4,   111,   943,   188,     4,   253,   111,    98,     4,
     294,   141,   705,     4,   144,   111,     4,   147,   135,   136,
     153,   294,   153,   108,   157,   749,   111,   294,   294,   294,
     163,   714,   294,   166,   294,   764,   169,   294,   347,   348,
     294,   997,   111,   243,   244,    98,    98,   181,     1,   102,
     102,   181,     1,   106,     1,   108,   412,   111,   188,   111,
     753,   754,   111,   787,   111,    71,   111,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   111,   106,   131,   132,
     111,   304,   106,   111,   876,   877,   139,   140,   141,   111,
     313,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      98,     1,   131,   132,     1,   111,     1,     1,   111,     1,
     469,     1,   111,   243,   244,   248,   111,   305,   306,     1,
     111,   305,   306,   111,     1,     1,     1,   919,   920,   108,
       4,   189,   190,   191,   192,   193,   194,   195,   196,     1,
       1,     1,   108,   276,    97,     1,   108,     4,    97,     1,
     103,   141,     1,   106,   144,     1,     1,   106,   120,   106,
     298,   294,    98,   351,   352,   100,   102,   351,   352,     4,
       3,   305,   306,   102,   485,   305,   306,   906,   880,   109,
     110,   369,   111,    97,   372,   369,   324,   102,   372,   377,
     102,   379,   106,   377,   100,   379,   111,    97,   386,   111,
     106,   389,   386,   995,   996,   389,   106,   100,   102,   106,
       4,   106,   459,   106,   106,   462,   106,   351,   352,   466,
     103,   351,   352,     1,   106,    99,     4,   365,   111,   106,
     106,   106,   479,   480,   481,   369,     4,   939,   940,   369,
     103,   102,   372,   377,   106,   379,   106,   377,   111,   379,
     106,   384,   386,   243,   106,   389,   386,   106,   396,   389,
     106,   106,   573,   451,   452,    98,     4,   451,   452,   102,
      15,   100,   103,   107,   100,     1,   102,   106,    23,   467,
     111,    29,   108,   467,   107,   108,   344,   345,   346,   347,
     348,   349,   350,   107,   120,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   528,   364,    98,     1,   102,
     101,   106,   500,    61,   372,   108,   500,   451,   452,   129,
     130,   451,   452,    93,    94,   455,    19,   457,   100,   757,
     956,    24,   111,   467,   106,    28,   111,   467,    86,    87,
      88,    89,    90,    91,    92,   158,   159,   160,     3,   537,
      43,   164,   410,   537,   167,    98,   544,   170,   101,     4,
     544,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     500,    97,   131,   132,   107,    98,    69,   103,   101,    97,
     106,    53,   107,    55,     1,   103,   574,   575,    60,    98,
     574,   575,   101,   107,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   537,   102,   131,   132,   537,   596,    97,
     544,   469,   596,   149,   544,   103,   604,   100,   606,   607,
     604,   100,   606,   607,   100,    98,   102,   106,   101,   923,
     924,   654,   620,   102,    98,    98,   620,   101,   101,   100,
     574,   575,   500,   573,   574,   575,   805,   806,   353,   354,
     355,   356,   188,   372,   813,    98,   815,   816,   101,    98,
      98,    98,   101,   101,   101,    98,   596,   101,   101,    98,
     604,    97,   101,   607,   604,     1,   606,   607,   100,    98,
      97,    98,   101,   133,   134,   102,   103,    93,    94,   106,
     620,   108,    95,    96,   741,   742,   100,   555,   857,   557,
     558,   559,    97,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   102,   872,   131,   132,   139,   140,   141,   111,
     112,   113,   139,   140,   141,   102,   714,   774,   349,   350,
     714,   111,   112,   113,   102,   758,   372,    97,   596,    99,
      97,    97,    99,    99,   102,    97,   905,    99,   606,   100,
     469,   102,    97,   100,    99,   102,    97,    97,    99,    99,
     108,    97,   298,    99,   300,   357,   358,    83,    84,   987,
     988,   307,   926,   927,   129,   130,   709,   108,   102,   114,
     106,   500,   770,   771,   714,   103,   770,   771,   324,   777,
     326,   950,   328,   777,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    97,   662,   131,   132,   343,   808,   119,
     115,   101,   137,    97,   103,   974,   975,   976,   977,     4,
     808,   101,     9,    97,    49,   101,   101,   363,     4,   365,
     366,   990,    98,   469,   103,     4,   770,   771,     4,     4,
     770,   771,     4,   777,    31,   892,   893,   777,   781,   120,
     103,    14,   785,   786,    17,   103,   714,    44,   103,   395,
     396,   397,    49,   103,   500,   372,   103,    54,    97,    56,
      57,    58,    59,   103,   107,   103,    63,   596,   808,    42,
      67,   417,   418,     4,    47,    52,   102,   606,    52,   822,
     101,   101,    79,   102,   102,    82,   102,    84,   102,    62,
     833,    64,   100,   102,    97,   101,   103,    98,   103,    98,
     102,   958,   959,    76,    77,    85,   102,    80,   102,   102,
     967,   968,   102,   911,    97,   100,   120,   911,   102,     4,
     102,     4,   103,    41,     1,   103,    93,    98,   120,   120,
     476,   100,   478,   801,   102,    97,   934,   805,   806,   102,
     934,    97,   103,   886,   887,   813,   103,   815,   816,   103,
     596,   103,   469,   103,   103,   100,   100,   100,   956,   107,
     606,   103,   956,   103,   372,   103,   103,   101,   100,     4,
     106,   911,   101,   103,    99,   103,   103,   101,    94,    27,
       4,   101,   101,   500,   106,   714,   103,   102,   534,   857,
     934,   102,    95,   103,   934,   103,   101,   103,   107,   103,
     100,   372,    96,     1,   872,   103,   103,   103,   103,    93,
     103,   101,   103,    94,     1,   107,   956,   103,   961,   962,
     566,   964,   568,   181,   138,   758,   181,   418,   566,   411,
     406,   360,   900,   901,   902,   903,   359,   905,   362,   361,
     911,   600,   703,   911,   909,   364,   766,   801,   478,   714,
     911,   870,   743,   743,   856,    80,   457,     4,   123,    49,
     248,   469,   781,   609,   381,   786,   612,   785,   714,   615,
     893,   886,   801,   887,   620,   943,   805,   806,   276,   596,
     964,   294,   950,   384,   813,    24,   815,   816,   956,   606,
     147,   171,   500,    -1,    -1,    -1,    -1,    -1,   469,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   974,   975,   976,   977,
      97,   657,   372,    -1,    -1,    -1,   103,    -1,    -1,   106,
      -1,    -1,   990,    -1,    -1,    -1,    -1,    -1,   857,   500,
      -1,   677,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,   872,   131,   132,    -1,   372,    -1,    -1,
      -1,    -1,   139,   140,   141,   801,    -1,    -1,    -1,   805,
     806,    -1,    -1,    -1,    -1,    -1,    -1,   813,    -1,   815,
     816,   900,   901,   902,   903,    -1,   905,    -1,    -1,    -1,
      -1,    -1,   911,    -1,    -1,    -1,    -1,    -1,   596,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   714,   606,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,
      -1,   857,    -1,   759,   943,    -1,    -1,    -1,   764,    -1,
      -1,   950,    -1,    -1,    -1,   596,   872,   956,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   606,    -1,    -1,    -1,    -1,
     500,    -1,    -1,     1,   469,   974,   975,   976,   977,    -1,
      -1,    -1,    -1,    -1,   900,   901,   902,   903,    -1,   905,
      -1,   990,    -1,    -1,    -1,   911,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   801,    -1,    -1,    -1,   805,   806,
      -1,    -1,    -1,    -1,    -1,    -1,   813,   943,   815,   816,
      -1,    -1,    -1,    -1,   950,    -1,   714,    -1,    -1,   855,
     956,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   864,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   974,   975,
     976,   977,    -1,    -1,    -1,    -1,   596,    -1,    -1,    97,
     857,    -1,    -1,   714,   990,   103,   606,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,   872,    -1,    -1,    -1,    -1,
     906,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   596,    -1,   131,   132,    -1,    -1,   923,   924,    -1,
      -1,   606,    -1,   900,   901,   902,   903,    -1,   905,    -1,
      -1,    -1,    -1,   801,   911,    -1,    -1,   805,   806,    -1,
      -1,    -1,    -1,    -1,    -1,   813,    -1,   815,   816,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   943,    -1,    -1,    -1,
     801,    -1,    -1,   950,   805,   806,    -1,    -1,    -1,   956,
      -1,    -1,   813,    -1,   815,   816,    -1,    -1,    -1,   857,
      -1,    -1,    -1,    -1,   714,    -1,    -1,   974,   975,   976,
     977,    -1,    -1,    -1,   872,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   990,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   857,    -1,    -1,   714,
      -1,    -1,   900,   901,   902,   903,    -1,   905,    -1,    -1,
      -1,   872,    -1,   911,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   900,
     901,   902,   903,    -1,   905,   943,    -1,    -1,    -1,    -1,
     911,   801,   950,    -1,    -1,   805,   806,    -1,   956,    -1,
      -1,    -1,    -1,   813,    -1,   815,   816,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   974,   975,   976,   977,
      -1,    -1,   943,    -1,    -1,    -1,   801,    -1,    -1,   950,
     805,   806,   990,    -1,    -1,   956,    -1,    -1,   813,    -1,
     815,   816,    -1,    -1,    -1,    -1,    -1,   857,    -1,    -1,
       0,    -1,    -1,   974,   975,   976,   977,    -1,    -1,     9,
      -1,    -1,   872,    -1,    -1,    -1,    -1,    -1,    -1,   990,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,   857,    -1,    -1,    -1,     1,    -1,    -1,    -1,
     900,   901,   902,   903,    44,   905,    -1,   872,    48,    49,
      -1,   911,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,     1,    -1,    -1,   900,   901,   902,   903,    79,
     905,    -1,    82,   943,    84,    -1,   911,    -1,    -1,    -1,
     950,    -1,    -1,    -1,    -1,    -1,   956,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   974,   975,   976,   977,   943,    -1,
      -1,    -1,    -1,    -1,    -1,   950,    -1,     1,    -1,    -1,
     990,   956,    97,    98,    -1,    -1,    -1,   102,   103,    -1,
      -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,   974,
     975,   976,   977,    -1,     1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,   990,   131,   132,    -1,    98,
      -1,    -1,    -1,   102,   139,   140,   141,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      97,    -1,   131,   132,    -1,    -1,   103,    -1,    -1,   106,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   106,    -1,   131,   132,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,   131,   132,   106,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,     1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    -1,
      -1,    17,    18,    -1,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,
     116,   117,    -1,    -1,     1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,   139,   140,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,     4,    49,    50,    51,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    62,    -1,    64,    65,    22,
      -1,    68,    -1,    26,    71,    -1,    73,    -1,    75,    76,
      77,    78,    35,    80,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    62,
      -1,    64,   109,   110,   111,    68,    -1,   114,    -1,   116,
     117,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,     4,    49,    50,    51,    -1,   139,   140,    -1,    12,
      -1,    14,    -1,    -1,    17,    62,    -1,    64,    65,    22,
      -1,    68,    -1,    26,    71,    -1,    73,    -1,    75,    76,
      77,    78,    35,    80,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    62,
      -1,    64,   109,   110,   111,    68,    -1,   114,    -1,   116,
     117,    -1,    -1,    76,    77,    -1,    -1,    80,     1,    -1,
      83,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,   139,   140,    17,    -1,    19,    20,    -1,    22,
      -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,    -1,
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
      -1,    -1,    12,    -1,    14,    -1,    -1,    17,    -1,    19,
      20,    -1,    22,    -1,    24,    -1,    26,    -1,    28,    29,
      30,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,    -1,    42,    43,    -1,    -1,    -1,    47,     4,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    62,    -1,    64,    -1,    22,    -1,    68,    69,
      26,    -1,    -1,    29,    -1,    -1,    76,    77,    -1,    35,
      80,    -1,    -1,    83,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,     4,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,    -1,
      22,    -1,    68,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    35,    80,    -1,    -1,    83,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,     9,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,
      -1,    83,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82,    -1,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   274,   275,   283,   284,   285,   286,     4,   146,
     280,   281,     0,   276,   278,   287,   288,   289,   293,   339,
     349,   363,   370,   371,   372,   373,   382,   284,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   290,   291,
     292,   276,   288,   373,    98,     4,   280,   108,   280,     1,
      19,    24,    28,    43,    69,   292,    29,    61,    86,    87,
      88,    89,    90,    91,    92,   374,   375,   376,     1,   106,
     100,   282,     4,     1,     4,    12,    14,    17,    22,    26,
      35,    42,    47,    51,    62,    64,    68,    76,    77,    80,
      83,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   280,   306,     4,     4,     4,   147,   280,   377,
     378,   380,   107,   275,   106,   279,   107,   294,   295,   294,
     294,   111,   111,     3,   159,   159,   159,     4,   107,   364,
     365,   107,   350,   351,   107,   340,   341,    97,    99,   102,
     379,   381,   277,   287,   147,   155,   296,   100,   297,   297,
     297,   102,   153,   100,   366,   296,   100,   352,   296,   100,
     342,    99,   378,   383,     5,     6,     7,     8,    11,    18,
      32,    49,    50,    65,    71,    73,    75,    78,   102,   109,
     110,   111,   114,   116,   117,   139,   140,   144,   145,   151,
     155,   163,   164,   165,   166,   167,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     208,   280,   101,    97,    97,   276,   289,   298,   299,   300,
     301,   302,   303,   304,   313,   320,   324,   327,   332,   336,
     279,   279,   279,   276,   305,   308,   309,   310,   312,   276,
     367,   368,   369,   279,   276,   353,   354,   355,   356,   358,
     359,   361,   279,   276,   289,   301,   302,   303,   313,   320,
     324,   327,   332,   343,   344,   345,   279,   383,    98,   108,
     102,    83,   148,   149,   157,   102,   102,   102,    83,   151,
     155,   195,   208,   280,   190,   190,   190,   190,   190,   190,
     190,   190,   108,   108,    98,   108,   102,   103,    97,   139,
     140,   141,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   131,   132,   207,   111,   112,   113,   109,   110,   129,
     130,    10,    45,   104,   105,   135,   136,   133,   134,   114,
     119,   115,   137,   118,   138,    98,   102,   296,   147,   290,
     101,   300,   100,   106,   213,   307,    53,    55,    60,   311,
     103,    97,     4,   101,    97,    49,   357,   101,   355,   290,
     101,   345,   171,     4,   208,   102,    98,   100,   346,   148,
      83,   148,   208,   111,   159,   192,   193,   194,   192,   192,
     111,   103,   159,     4,     4,   171,     4,    53,    60,   161,
     162,   168,   208,   208,     4,   208,   190,   190,   190,   190,
     195,   195,   196,   196,   148,   148,   197,   197,   197,   197,
     198,   198,   199,   200,   201,   202,   208,   203,   171,   168,
       4,    20,    29,    30,    40,    83,   117,   148,   325,   328,
     329,   331,   333,     1,     4,    13,    18,    20,    21,    25,
      34,    36,    37,    38,    39,    46,    61,    70,    72,    74,
      78,    79,    81,    85,   106,   148,   151,   155,   167,   174,
     175,   177,   188,   189,   190,   206,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   224,   227,   229,   230,   231,
     238,   239,   240,   243,   244,   253,   254,   255,   256,   257,
     258,   260,   261,   266,   267,   268,   269,   271,   280,   148,
     148,     1,   106,   309,   120,   101,   369,    29,    83,   148,
      99,   103,   168,   171,    66,   208,   222,   223,   346,   347,
     348,   103,   103,   103,   103,   103,   194,   103,   103,   103,
     187,   192,    99,   160,   208,   160,    97,   103,   107,    99,
     103,   102,   148,   148,    52,    52,     1,   280,     4,     1,
       4,    52,    71,   220,   221,   280,   281,   326,   386,   106,
     213,   337,   106,   213,   338,   101,   107,     1,   106,   213,
     148,     1,   106,   212,   102,     1,   102,   102,     4,    15,
      23,   102,   102,   208,   259,   102,   259,   213,   213,   213,
     102,     1,   102,     4,   220,     1,   106,     1,   106,     1,
     106,     1,   106,     1,   106,     1,   106,     1,   106,   101,
     211,     1,   106,     1,   106,     4,     4,   208,   209,   148,
       4,     4,    71,   103,    99,   148,   101,    97,   190,   190,
     190,   190,   103,   162,   208,   305,     4,   225,   226,   220,
     280,   148,   148,   102,   102,   102,   102,   120,    32,    73,
     104,   105,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   119,   129,   130,   133,   134,   135,   136,   139,   140,
     330,    98,     1,    97,   106,   102,   386,    71,    98,   100,
     211,   225,    85,   148,   245,   167,   174,   175,   177,   188,
     189,   206,   219,   228,   246,   249,   252,   148,     1,   106,
     209,     1,   106,   208,   210,   208,     1,   106,   208,     1,
     106,    16,    33,   262,   263,   265,   208,   219,   270,   241,
       1,   210,     4,   102,   102,   386,    98,   158,   159,    98,
     101,   222,   190,   103,   120,     1,    97,   106,   106,   384,
     102,   102,   305,   305,   103,   305,   222,   102,   308,   221,
     305,   100,   308,   276,   314,   317,   318,   102,     4,   272,
     273,   246,     1,     1,     1,     1,     1,     1,     1,     1,
     106,    97,     4,     1,   106,   103,   103,   103,   102,   213,
     213,   263,   265,   103,   210,   103,   103,   100,   106,   362,
     305,   305,   100,   308,   179,   346,   158,   208,   107,   334,
     335,   209,   226,   100,   148,   148,   103,   103,   213,   103,
     148,    99,   103,   314,    99,    93,    94,   101,   276,   315,
     318,   276,   316,   317,   210,   120,    97,   103,   106,   210,
     247,   250,   247,   228,    41,   212,   212,   100,   232,   147,
     155,   212,     1,   212,   212,   101,   103,   103,   276,   360,
      99,    99,    11,    71,   276,   321,   322,   323,     4,     4,
       4,   101,   387,   387,   387,   103,   208,   273,   212,   247,
       1,   106,     1,   106,   208,    27,    15,    23,   233,   234,
     235,   236,   237,     4,   264,   264,   212,   362,   362,    93,
      94,   101,   386,   102,   102,    95,    96,   101,   276,   323,
     276,   322,   103,   103,    97,   103,   387,   106,   213,   319,
     319,     1,   106,   106,   248,   251,   252,   248,   248,   248,
     103,   212,   209,   107,   101,   235,   215,   237,   103,   103,
     242,   362,   362,   387,   100,   168,   168,   385,   385,   385,
     148,   386,   386,   248,   103,   103,   103,   103,   212,   107,
     213,   213,   276,   276,   360,   103,   103,   213,   213,     4,
       1,   212,   212,   212,   212,    94,    93,   101,   384,   384,
     103,   212,   362,   362,   387
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
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   229,   229,   230,   230,   231,   232,
     233,   233,   234,   234,   235,   236,   236,   237,   237,   238,
     238,   238,   238,   239,   240,   240,   241,   242,   240,   243,
     243,   244,   244,   244,   244,   245,   244,   246,   246,   247,
     247,   248,   248,   249,   249,   250,   251,   252,   252,   253,
     254,   254,   254,   254,   254,   255,   255,   256,   256,   257,
     257,   257,   257,   257,   257,   258,   258,   259,   259,   260,
     260,   261,   261,   261,   262,   262,   263,   263,   263,   264,
     264,   265,   266,   267,   268,   269,   270,   270,   271,   272,
     272,   273,   274,   274,   275,   275,   276,   276,   277,   277,
     278,   279,   279,   280,   280,   281,   281,   282,   283,   283,
     284,   284,   285,   285,   286,   286,   287,   287,   288,   288,
     289,   289,   289,   289,   289,   290,   290,   291,   291,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   293,   293,   293,   294,   294,   295,   295,
     295,   296,   296,   297,   298,   298,   299,   299,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   301,   301,
     302,   302,   303,   304,   304,   304,   304,   305,   305,   306,
     306,   307,   307,   308,   308,   309,   309,   310,   311,   311,
     311,   312,   313,   314,   314,   315,   315,   316,   316,   317,
     318,   319,   319,   320,   320,   321,   321,   322,   323,   324,
     325,   325,   326,   327,   328,   328,   329,   329,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     331,   331,   332,   333,   334,   334,   335,   335,   336,   337,
     337,   338,   338,   339,   340,   340,   341,   342,   343,   343,
     344,   344,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   346,   346,   347,   347,   348,   348,   349,   350,   350,
     351,   352,   353,   353,   354,   354,   355,   355,   355,   355,
     356,   356,   357,   357,   358,   359,   360,   360,   360,   360,
     361,   362,   362,   363,   364,   364,   365,   366,   366,   367,
     367,   368,   368,   369,   369,   370,   370,   371,   372,   372,
     373,   373,   374,   374,   375,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   377,   377,   378,   379,   379,   380,
     381,   382,   383,   384,   385,   386,   387
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
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     5,     7,     5,     3,
       0,     1,     1,     2,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     2,     5,     5,     0,     0,     7,     7,
       7,     9,     9,     9,     9,     0,    10,     0,     1,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     3,     8,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     3,
       4,     3,     3,     4,     3,     3,     3,     0,     1,     3,
       3,     3,     3,     4,     1,     2,     6,     6,     2,     0,
       1,     2,     2,     2,     5,     5,     1,     1,     6,     1,
       3,     3,     2,     2,     0,     1,     0,     1,     0,     1,
       5,     0,     1,     1,     2,     2,     3,     4,     1,     2,
       1,     1,     5,     5,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     7,     7,     7,     0,     1,     2,     2,
       4,     1,     3,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     6,
       5,     5,     2,     7,     7,     7,     7,     0,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     4,     0,     1,
       1,     4,     9,     2,     2,     0,     1,     0,     1,     5,
       5,     1,     1,     6,    10,     2,     2,     5,     5,     8,
       5,     5,     2,     4,     1,     1,     7,    10,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     7,     4,     5,     0,     1,     5,     5,     7,     1,
       1,     1,     1,     7,     0,     1,     2,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     0,     1,     1,     3,     7,     0,     1,
       2,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       8,     8,     0,     1,     9,    12,     3,     3,     6,     6,
       6,     1,     2,     7,     0,     1,     2,     3,     4,     0,
       1,     1,     3,     2,     4,     9,     9,     1,     1,     2,
       6,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     0,     1,     1,
       3,     0,     0,     0,     0,     0,     0
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
#line 2737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);}
#line 2791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 132 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 133 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 136 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 137 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 140 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 141 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 145 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 146 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 150 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 169 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 179 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 183 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 3001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 3007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 200 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 204 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 238 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 259 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 273 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 276 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 277 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 280 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3277 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 286 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3289 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3295 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3301 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 295 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3307 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3313 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 297 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3319 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 298 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3325 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3331 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 302 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3337 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3343 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3349 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3355 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3361 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3367 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3373 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3379 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3385 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 317 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3391 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 318 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3397 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3403 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3409 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3415 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 329 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 330 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3427 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 331 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3433 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 332 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3439 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 333 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3445 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3451 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3457 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3463 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3469 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3475 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3481 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3487 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 350 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3493 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 351 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3499 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 354 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3505 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 355 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3511 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3517 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3523 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3529 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 366 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3559 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3577 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3601 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3613 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 387 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3637 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3667 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 412 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 413 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 437 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 443 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 471 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 474 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 477 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 3955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 482 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 3961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 486 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 487 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3979 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 490 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3985 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 493 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3991 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 496 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3997 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 497 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 4003 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 500 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 4009 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 509 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4015 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 510 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4021 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 511 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4027 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 512 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 514 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 515 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 516 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 517 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 518 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 519 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 520 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 521 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 522 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 527 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 530 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 531 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 533 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1,1);}
#line 4141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 534 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1,1);}
#line 4147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 535 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1,1);}
#line 4153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1,1);}
#line 4159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 537 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1,1);}
#line 4165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 538 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1,1);}
#line 4171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1,1);}
#line 4177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 544 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 547 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 548 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 551 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 554 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 565 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 568 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 569 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 572 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 573 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 579 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 582 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 585 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 586 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 587 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 587 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 590 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 591 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 594 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4);}
#line 4345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 595 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4,1);}
#line 4351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 596 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",4,1);}
#line 4357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",5,1);}
#line 4363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 598 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 598 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("for_statement",4,1);}
#line 4375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 602 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 605 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 606 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 610 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 614 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 620 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 623 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 624 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 631 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 632 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 633 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 634 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 638 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 642 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 646 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 649 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 650 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 654 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 657 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 658 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 661 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 665 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 667 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 674 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 675 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 679 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 683 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 686 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 692 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 695 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 698 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 699 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 707 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 710 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 714 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 717 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 726 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 729 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 732 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 733 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 742 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 743 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4783 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 747 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4789 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 750 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4801 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 754 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4807 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4813 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 758 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4819 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4825 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 762 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4831 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4837 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 766 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4843 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 770 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4855 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4861 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 774 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 777 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4873 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 778 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4879 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 779 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4885 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 780 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4891 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4897 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4903 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4909 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 4915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 4921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 802 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4939 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 803 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4945 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4951 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4957 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 806 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4963 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 807 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4969 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 809 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 810 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 811 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 813 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);}
#line 5011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 818 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",6,1);}
#line 5017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 819 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",7,1);}
#line 5023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 5029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 5035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 5041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 827 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 5047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 828 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 5053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 831 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 5059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 832 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 5065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 835 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 5071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 838 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 5077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 839 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 842 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 843 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 846 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 848 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 849 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 850 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 851 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 852 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 853 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5149 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 856 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 859 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 5161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 860 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 5173 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5179 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 867 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 5185 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5191 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 5197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 5203 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",3,1);}
#line 5209 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 5215 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 878 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 5221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 882 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 885 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 886 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 889 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 5251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 5257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 894 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 897 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 900 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 901 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5287 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 902 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 906 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5299 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 912 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5305 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 915 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5311 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 916 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5317 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 919 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5323 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5329 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 923 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5335 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 924 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5341 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5347 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5353 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 939 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5359 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 940 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5365 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 943 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5371 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 947 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5377 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 950 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5383 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 951 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5389 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 957 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5395 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 963 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5401 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 969 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5407 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 972 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5413 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 974 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5419 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 977 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5425 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 981 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5431 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 984 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5437 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 985 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5443 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 988 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5449 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 989 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5455 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 992 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5461 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 993 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5467 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5473 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 995 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5479 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 996 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5485 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 997 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5491 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 998 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5497 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 999 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5503 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5509 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1001 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5515 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5521 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5527 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1004 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5533 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1005 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5539 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5545 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1007 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5551 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1008 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5557 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1009 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5563 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1010 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5569 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5575 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1012 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5581 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1013 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5587 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1016 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5593 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1017 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1020 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5605 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5611 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1026 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1030 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1031 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1047 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1051 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1054 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1063 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1067 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1078 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1085 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1086 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1088 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1090 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1096 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1099 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1100 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1103 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1109 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 5815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1112 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 5821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1113 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 5827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1116 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 5833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1119 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1123 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1126 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1127 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1130 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1132 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1133 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1137 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1142 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1148 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1155 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1159 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1160 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1165 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5977 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1180 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5983 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 5989 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5995 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6001 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6007 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6013 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6019 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6025 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6031 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6037 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6043 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6049 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6055 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6061 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1214 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6067 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6073 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1218 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6079 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6085 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6091 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6097 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1228 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6103 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1229 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6109 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1230 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6115 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1231 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1232 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6127 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1233 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1234 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1235 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1240 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1243 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1246 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1247 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1250 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1253 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1260 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1263 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1266 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1269 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1272 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1275 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6233 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1280 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




