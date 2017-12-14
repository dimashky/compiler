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
		queue<pair<string ,string > > * types_ids;
        
		}r;
	

#line 299 "yacc.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 316 "yacc.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   2808

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  247
/* YYNRULES -- Number of rules.  */
#define YYNRULES  559
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  940

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
       0,   119,   119,   120,   121,   122,   123,   124,   127,   128,
     134,   137,   141,   142,   145,   146,   149,   150,   151,   154,
     155,   158,   159,   160,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   174,   175,   178,   179,   182,   183,   186,
     187,   188,   191,   192,   195,   199,   203,   204,   207,   208,
     209,   212,   213,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   230,   233,   234,   235,   238,
     239,   242,   243,   246,   247,   250,   251,   254,   255,   258,
     261,   262,   265,   268,   271,   274,   277,   278,   281,   282,
     285,   286,   289,   292,   295,   298,   301,   304,   305,   306,
     307,   308,   311,   312,   313,   314,   317,   320,   323,   324,
     325,   326,   327,   328,   329,   337,   338,   339,   340,   341,
     342,   345,   346,   349,   350,   353,   354,   357,   358,   359,
     360,   363,   364,   365,   368,   369,   370,   373,   374,   375,
     376,   377,   378,   379,   382,   383,   384,   387,   388,   391,
     392,   395,   396,   399,   400,   403,   404,   407,   408,   411,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   427,   428,   431,   434,   438,   439,   440,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   458,   461,   462,   466,   467,   470,   473,   476,   477,
     478,   479,   482,   487,   493,   501,   505,   511,   512,   513,
     516,   519,   522,   523,   526,   529,   530,   533,   534,   535,
     536,   537,   538,   539,   542,   543,   546,   547,   550,   553,
     556,   557,   560,   561,   564,   567,   568,   571,   572,   575,
     576,   577,   578,   581,   584,   587,   588,   591,   592,   596,
     597,   600,   601,   604,   605,   608,   609,   612,   615,   618,
     619,   622,   625,   626,   627,   628,   629,   632,   633,   636,
     637,   640,   641,   642,   643,   644,   645,   648,   649,   652,
     653,   656,   657,   660,   661,   662,   665,   666,   669,   670,
     671,   674,   675,   678,   681,   684,   687,   690,   693,   694,
     698,   701,   702,   705,   708,   709,   712,   713,   716,   717,
     720,   721,   724,   724,   728,   729,   733,   738,   746,   747,
     751,   754,   755,   758,   759,   762,   763,   766,   767,   770,
     771,   774,   775,   778,   779,   780,   781,   782,   794,   798,
     805,   811,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,   842,   841,   848,   849,
     852,   853,   854,   857,   863,   872,   876,   877,   880,   881,
     884,   885,   886,   887,   888,   889,   890,   891,   892,   893,
     896,   901,   906,   904,   912,   910,   920,   924,   929,   936,
     939,   944,   945,   948,   949,   956,   960,   967,   968,   971,
     978,   979,   980,   984,   988,   994,   995,   998,   999,  1002,
    1003,  1006,  1012,  1018,  1019,  1022,  1023,  1029,  1030,  1033,
    1039,  1045,  1051,  1053,  1056,  1060,  1063,  1064,  1067,  1068,
    1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,
    1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,
    1091,  1092,  1095,  1096,  1099,  1102,  1105,  1106,  1109,  1110,
    1126,  1129,  1130,  1133,  1134,  1139,  1142,  1143,  1146,  1149,
    1152,  1153,  1156,  1157,  1160,  1161,  1162,  1163,  1164,  1165,
    1166,  1167,  1169,  1174,  1175,  1178,  1179,  1182,  1183,  1189,
    1188,  1196,  1197,  1200,  1203,  1206,  1207,  1210,  1211,  1214,
    1215,  1216,  1217,  1221,  1222,  1225,  1226,  1229,  1235,  1243,
    1244,  1245,  1246,  1249,  1254,  1255,  1260,  1263,  1264,  1267,
    1270,  1271,  1274,  1275,  1278,  1279,  1282,  1283,  1288,  1289,
    1294,  1297,  1298,  1301,  1302,  1305,  1306,  1309,  1312,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,  1320,  1323,  1324,  1327,
    1330,  1331,  1334,  1337,  1344,  1347,  1350,  1353,  1356,  1359
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
  "$@3", "$@4", "method_declaration", "method_header",
  "formal_parameter_list_opt", "return_type", "method_body",
  "formal_parameter_list", "formal_parameter", "fixed_parameter",
  "parameter_modifier_opt", "parameter_array", "property_declaration",
  "accessor_declarations", "set_accessor_declaration_opt",
  "get_accessor_declaration_opt", "get_accessor_declaration",
  "set_accessor_declaration", "accessor_body", "event_declaration",
  "event_accessor_declarations", "add_accessor_declaration",
  "remove_accessor_declaration", "indexer_declaration",
  "indexer_declarator", "qualified_this", "operator_declaration",
  "operator_declarator", "overloadable_operator_declarator",
  "overloadable_operator", "conversion_operator_declarator",
  "constructor_declaration", "constructor_declarator",
  "constructor_initializer_opt", "constructor_initializer",
  "destructor_declaration", "operator_body", "constructor_body",
  "struct_declaration", "struct_interfaces_opt", "struct_interfaces",
  "struct_body", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration", "$@5",
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

#define YYPACT_NINF -780

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-780)))

#define YYTABLE_NINF -555

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -24,    61,    82,   171,   -24,  -780,  -780,  -780,   -11,    38,
    -780,   273,  -780,   929,  -780,   129,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,   171,  -780,   212,  -780,  -780,   284,
    -780,  -780,   209,  -780,  -780,  -780,   284,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,   260,  2723,
    -780,  2692,  -780,  -780,   578,   249,    80,  -780,  -780,   359,
    2595,   381,   385,   389,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,   284,  -780,   292,  -780,  -780,   334,
     335,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,   344,  -780,   349,  -780,
     463,  -780,  -780,  -780,  -780,  -780,  -780,   463,   463,   469,
     370,   375,   383,  -780,  -780,   278,  -780,   393,  -780,   -24,
     411,   238,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
     399,   412,   404,  -780,   284,  -780,  -780,   284,   427,  -780,
     240,  -780,  2322,  -780,  -780,   269,  -780,  -780,  -780,   432,
     435,   436,   242,  -780,   275,   411,   435,   437,   435,   288,
     411,  -780,  -780,  -780,  -780,  -780,  -780,  -780,   146,   443,
    -780,  2638,  -780,   444,  -780,  -780,   447,   448,  2035,  2322,
    2322,  2322,  2322,  2322,  2322,  2322,  2322,  -780,  -780,   445,
     449,   174,   450,  -780,  -780,  -780,  -780,   452,   454,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,   266,  -780,  -780,  -780,   681,  -780,   338,   259,
     356,    33,   369,   453,   439,   446,   425,   -82,  -780,  -780,
    -780,   151,   462,   295,   284,   284,   299,   411,   256,   465,
     472,  -780,  -780,  -780,   563,   480,   485,  -780,  -780,   300,
     411,  2723,  -780,  -780,  -780,  -780,   -18,  -780,  -780,  -780,
    -780,  -780,   482,   313,  -780,  -780,  -780,  2322,   581,  2322,
     344,   179,   487,   165,  2638,  2662,  2322,    29,    18,    40,
     351,   483,   244,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,   584,   585,  2322,   587,  1834,  -780,  2322,  -780,  -780,
     588,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,
    2638,  2638,  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,
    2322,  2322,  2322,  2322,  2322,  1834,  -780,   435,  -780,  2723,
    -780,   491,   314,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  2638,  -780,  2638,    83,   171,
     473,  -780,   315,   545,   494,   320,  -780,  -780,  -780,  -780,
    -780,  -780,  2546,  1488,  -780,  -780,  -780,  -780,  -780,   333,
    -780,   497,  1834,  2322,  1920,  -780,    -1,   144,   182,   498,
    -780,  -780,   501,    29,  -780,   502,   503,  2121,  2408,    29,
    -780,  -780,   336,  -780,  2322,  2322,   512,  -780,   507,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,   338,   338,   259,
     259,   349,   349,   356,   356,   356,   356,    33,    33,   369,
     453,   439,   446,   504,   425,   340,   510,  2479,  -780,  -780,
      24,    41,  -780,  -780,  -780,  2322,  -780,  -780,  -780,  1106,
    -780,  -780,   189,  2638,  2638,   562,   564,    45,    51,  -780,
     201,  -780,  -780,   230,   398,    86,   343,  2638,    93,  1604,
     513,   516,   520,   248,   522,   523,  2322,   524,  2322,   531,
     368,   531,   530,   532,  -780,    46,   445,   449,    84,    91,
      99,   101,   106,   117,   681,  -780,  -780,  -780,  -780,   536,
    1488,  -780,  -780,  -780,   100,   104,  -780,   105,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,    23,
    -780,  -780,   535,   341,  2638,  -780,  -780,  -780,  -780,   543,
     548,  -780,  -780,  -780,  -780,  2322,  -780,  2322,  2322,  2322,
    -780,   544,  -780,  -780,  -780,  -780,  1834,  -780,  2322,  -780,
    -780,   643,  -780,  -780,  -780,  -780,  2638,    48,    43,   242,
      49,    55,  2638,  2638,   549,   148,  1217,   552,    21,  -780,
     551,   223,   556,   557,  -780,  -780,  -780,  -780,  -780,  -780,
    1488,  -780,  -780,  -780,    49,  -780,  -780,   571,  2638,  2236,
    2638,   107,  2322,   111,  2322,  2322,  -780,   113,  2322,   115,
      14,  -780,  -780,  2236,  2322,   538,   574,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,   463,   -19,  -780,  1719,
    -780,  -780,  -780,  -780,  2322,  -780,  -780,   558,    65,   570,
     572,   575,   579,   555,    94,  -780,   -65,  -780,   181,   184,
     242,  1920,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,   582,   171,   678,   577,   685,   242,
     586,  -780,   171,   171,  -780,   594,   590,    67,  -780,  -780,
     124,  -780,   599,    68,  -780,  -780,   130,  -780,  -780,  -780,
     596,   598,  -780,  -780,   600,  -780,  -780,   371,   531,    14,
    -780,  -780,  -780,  -780,   601,   603,   597,   463,  2322,  -780,
    -780,  -780,   612,   241,   242,   242,   602,   171,   619,  2322,
    -780,   727,  -780,  -780,   632,  2638,  2638,   630,  -780,  2638,
     394,  -780,  -780,  -780,   633,   171,   397,   416,   638,   321,
     322,  2322,   620,   252,  -780,  2322,  2322,  2322,   702,  -780,
    -780,  1604,  1604,   644,   238,  -780,  -780,  -780,  -780,  1604,
    1604,  -780,  -780,  -780,   648,   531,   647,  -780,  -780,   649,
     652,   171,   401,   231,  -780,  -780,  -780,  -780,   171,    69,
      71,  -780,    72,  -780,  -780,   655,  -780,  -780,  -780,  -780,
     663,  -780,  -780,   665,  -780,  -780,   656,  2322,   757,  1604,
    -780,   764,  -780,   662,  -780,  2322,   746,  -780,   285,  -780,
     771,   771,  -780,  -780,  -780,  -780,  -780,   241,   241,   418,
     675,  -780,   679,   680,   420,   682,   171,   171,   686,   687,
     263,  -780,   253,   253,  -780,   131,  -780,  -780,  -780,  2322,
    2322,   689,  1604,  2322,   690,   684,   285,  -780,  1372,  -780,
    -780,   693,   695,  -780,  -780,   241,   241,  -780,   700,  1834,
    1834,  -780,  -780,  -780,   697,  -780,   719,  -780,  -780,  -780,
    2638,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,   712,
    -780,   599,   713,  1604,  -780,   711,  -780,  -780,  -780,  1488,
    -780,   531,   531,   326,   327,  -780,   171,   716,   717,   531,
     531,  -780,    74,  -780,  -780,  1604,  1604,  -780,  -780,  -780,
    -780,   728,   730,   725,  -780,  -780,  -780,  -780,   731,  -780,
    -780,   241,   241,  -780,  -780,  -780,  -780,  -780,  -780,  -780
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     306,     0,     0,   308,   307,   321,   323,   324,   316,     0,
      10,     0,     1,   338,   331,   308,   329,   332,   333,   334,
     335,   336,   337,   309,   530,   531,     0,   322,   318,     0,
     328,   327,   317,   342,   343,   344,     0,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,     0,   339,
     340,   338,   330,   532,   535,   316,     0,   319,   312,     0,
       0,     0,     0,     0,   341,   540,   545,   538,   539,   541,
     542,   543,   544,   546,     0,   536,     0,   326,   325,     0,
     358,    20,    25,    32,    23,    34,    33,    28,    30,    35,
      24,    26,    36,    29,    31,    27,   392,    15,   391,    12,
      14,    16,    19,    21,    22,    17,    18,    13,    11,     0,
     517,   491,   466,   552,    11,     0,   547,   550,   537,   306,
     314,     0,   356,   359,    38,    37,    44,    40,    39,    41,
       0,     0,     0,   518,     0,   489,   492,     0,     0,   467,
       0,   555,    75,   549,   551,   308,   315,   313,   363,   360,
     361,     0,   308,   519,   308,   314,   493,     0,   468,   308,
     314,   555,   548,   533,     3,     4,     5,     6,     0,     0,
       9,     0,     7,     0,    79,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     2,     0,
       0,    97,    52,    51,    55,    56,    57,     0,    76,    58,
      59,    99,   100,    60,    84,    54,    61,    63,    64,   101,
     114,    62,   102,   108,   112,   113,   127,   105,   131,   134,
     137,   144,   147,   149,   151,   153,   155,   157,   171,   172,
      77,    98,     0,   308,     0,     0,   308,   314,   400,     0,
     390,   395,   397,   398,     0,     0,   523,   524,   516,   308,
     314,   338,   482,   474,   475,   476,     0,   477,   478,   479,
     480,   481,     0,   308,   472,   465,   534,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,   121,   121,   121,
     131,     0,    98,   109,   110,   111,    95,   103,   104,   106,
     107,     0,     0,     0,     0,    71,   553,     0,    82,    83,
       0,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,   320,   362,   364,   338,
     379,     0,   308,   368,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   357,   402,     0,   401,     0,     0,   308,
     526,   520,   308,   505,     0,   308,   497,   499,   500,   502,
     501,   490,     0,   192,   394,   393,   386,   469,   473,     0,
      80,     0,    71,     0,   485,    87,     0,     0,     0,     0,
     126,   125,     0,   122,   123,     0,     0,     0,    65,   121,
      67,    68,     0,    66,     0,     0,    72,    46,     0,    48,
      78,    94,   159,   128,   129,   130,   127,   132,   133,   135,
     136,   143,   142,   139,   138,   140,   141,   145,   146,   148,
     150,   152,   154,     0,   156,     0,     0,     0,   365,   369,
       0,     0,   529,   528,   396,     0,   521,   525,   506,     0,
     494,   498,   316,     0,     0,     0,     0,     0,     0,   558,
       0,   426,   427,     0,   316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   279,     0,   279,     0,
       0,     0,     0,     0,   196,     0,    16,    17,    56,    99,
     100,    84,   112,   113,     0,   219,   194,   177,   178,     0,
     193,   179,   175,   176,     0,     0,   180,     0,   181,   224,
     225,   182,   189,   239,   240,   241,   242,   183,   262,   263,
     264,   265,   266,   184,   185,   186,   187,   188,   190,    98,
      81,    92,     0,     0,     0,   207,   487,   209,   208,     0,
     486,    96,    91,    90,    93,     0,   124,     0,     0,     0,
     115,     0,    73,    50,    45,    49,     0,    69,     0,    74,
      70,     0,   403,   399,   173,   527,     0,     0,     0,   308,
       0,     0,     0,     0,     0,   205,     0,     0,   382,   203,
     558,     0,     0,     0,   462,   461,   425,   464,   463,   454,
       0,   268,   267,   294,     0,   270,   269,     0,     0,   249,
       0,     0,     0,     0,     0,     0,   280,     0,     0,     0,
       0,   295,   243,     0,     0,   205,   202,   191,   195,   200,
     198,   201,   199,   216,   215,    85,    42,     0,   483,     0,
     120,   118,   119,   116,     0,    47,   158,     0,     0,     0,
     558,     0,     0,     0,     0,   212,     0,   556,     0,     0,
     308,     0,   437,   436,   448,   449,   430,   431,   438,   439,
     440,   441,   442,   432,   433,   443,   444,   445,   446,   447,
     451,   450,   434,   435,     0,   308,     0,     0,     0,   308,
       0,   424,   308,   308,   197,   211,     0,     0,   255,   259,
       0,   250,   256,     0,   274,   271,     0,   276,   273,   174,
       0,     0,   278,   277,     0,   282,   281,     0,     0,   283,
     286,   284,   299,   298,     0,     0,    88,    42,     0,   484,
     488,   117,     0,     0,   308,   308,     0,   308,   456,     0,
     381,     0,   380,   415,     0,     0,     0,     0,   206,     0,
       0,   204,   383,   385,     0,   308,     0,     0,     0,   308,
     308,     0,     0,     0,   301,   251,   251,     0,     0,   275,
     272,     0,     0,     0,     0,   290,   293,   287,   285,     0,
       0,    86,    89,    43,     0,     0,     0,   514,   513,     0,
       0,   308,     0,     0,   455,   457,   214,   213,   308,     0,
       0,   388,     0,   422,   387,     0,   423,   559,   559,   559,
       0,   405,   408,     0,   406,   410,     0,     0,     0,     0,
     257,     0,   252,     0,   260,     0,   226,   296,   230,   228,
     291,   291,   297,   244,   210,   460,   515,     0,     0,     0,
       0,   558,     0,     0,     0,     0,   308,   308,     0,     0,
       0,   559,     0,     0,   421,     0,   303,   302,   300,   253,
     253,     0,     0,     0,     0,     0,   231,   232,     0,   235,
     292,     0,     0,   504,   503,     0,     0,   559,     0,    71,
      71,   557,   557,   557,     0,   417,     0,   418,   453,   452,
       0,   428,   404,   414,   413,   558,   558,   246,   245,     0,
     254,   258,     0,     0,   227,     0,   238,   229,   233,   234,
     236,     0,     0,   308,   308,   507,   308,     0,     0,     0,
       0,   416,     0,   411,   412,     0,     0,   261,   237,   289,
     288,     0,     0,     0,   458,   459,   556,   556,     0,   248,
     247,     0,     0,   559,   419,   420,   429,   511,   512,   508
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -780,  -780,  -780,  -780,   -70,    90,   660,  -780,    31,  -780,
     701,  -780,   -58,  -780,   666,   119,   -97,   433,  -780,   283,
    -780,  -780,  -780,  -780,  -120,  -321,  -780,  -780,  -237,  -780,
    -780,    19,   153,  -780,   318,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,   451,   342,   457,   395,  -780,  -255,
    -780,   455,  -169,   202,    59,   196,   518,   515,   517,   519,
     521,  -780,  -780,   467,  -780,   367,  -586,  -589,  -494,  -434,
    -147,  -780,    -7,  -780,  -780,  -780,  -559,  -447,   176,  -583,
    -780,  -780,   261,   122,  -780,  -591,  -780,  -780,  -780,  -780,
    -780,  -780,     1,  -780,    -2,  -780,  -780,  -780,  -780,  -780,
    -780,   103,    10,  -780,  -780,  -780,   262,  -780,  -780,  -780,
    -780,  -780,  -780,   384,  -780,  -780,  -780,   154,    44,   157,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,    62,  -780,   748,
      -3,  -780,  -780,  -780,   116,     0,   414,  -780,  -780,   869,
    -780,  -780,   729,    -8,  -146,   -15,  -780,   826,  -780,  -780,
    -780,  -780,    92,  -780,  -780,  -780,   534,  -170,  -103,  -780,
    -780,   -77,  -780,  -551,  -780,  -780,  -641,   525,  -780,  -780,
    -780,   -61,   133,  -780,  -780,   132,   134,    36,   -42,  -780,
      50,    52,   -17,  -780,  -780,   -13,  -780,  -780,  -780,  -780,
      -4,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,   618,  -268,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,   526,  -780,  -780,  -780,  -780,   -21,
    -780,  -587,  -780,  -780,  -780,  -780,  -780,  -780,   528,  -780,
    -780,  -780,   862,  -780,  -780,  -780,  -780,   752,  -780,  -780,
    -780,  -780,   732,  -402,  -337,  -563,  -779
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   187,   188,     9,    97,   485,    99,   100,   189,   102,
     103,   104,   190,   106,   107,   716,   391,   553,   406,   407,
     191,   192,   193,   194,   195,   408,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   771,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   392,
     393,   394,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   312,   409,   565,   810,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   578,   579,   536,
     537,   505,   644,   645,   506,   507,   508,   509,   510,   819,
     855,   856,   857,   858,   859,   511,   512,   513,   514,   515,
     690,   811,   889,   691,   812,   890,   891,   516,   517,   518,
     519,   520,   521,   607,   522,   523,   709,   710,   861,   711,
     524,   525,   526,   527,   714,   528,   753,   754,     2,     3,
     238,   232,    14,    79,   147,   231,    11,   120,     4,     5,
       6,     7,    15,    16,    17,    48,    49,    50,    18,   151,
     122,   123,   150,   237,   341,   342,   343,   253,   254,   677,
     678,   255,   256,   239,   109,   376,   240,   241,   242,   357,
     243,   257,   748,   801,   804,   749,   750,   885,   258,   835,
     836,   837,   259,   459,   582,   260,   460,   461,   674,   462,
     261,   463,   784,   785,   352,   586,   589,    19,   138,   139,
     160,   262,   263,   264,   538,   539,   540,    20,   157,   135,
     136,   250,   364,   365,   366,   367,   449,   368,   369,   830,
     370,   778,    21,   132,   133,   155,   245,   246,   247,    22,
      23,    24,    25,    74,    75,    76,   115,   116,   143,   117,
     144,    26,   163,   734,   909,   583,   842
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    10,   105,   127,   113,   385,   618,    52,   689,   280,
     128,   129,    51,   252,   436,   700,   696,   680,   642,   843,
     844,   126,  -384,   395,   396,   715,   126,   -11,   562,    56,
     379,   707,   126,   676,   740,   597,    58,   332,   616,    30,
     688,   746,   733,   126,   320,   563,   720,   640,   708,    55,
     615,   148,   639,   643,   713,   575,   402,   333,     1,   575,
     108,   532,   882,   149,   148,     8,   344,   148,   738,   723,
     113,   752,   758,   838,   114,   839,   840,   726,   928,   321,
     718,    77,    12,   373,   442,  -217,   782,   591,   905,   374,
     340,   101,  -220,   125,   595,   730,   684,   435,    28,   737,
    -221,   619,  -218,   541,   576,   621,   623,  -222,   694,   375,
      29,   125,   697,   105,   702,   641,   705,   252,  -223,   676,
     279,   114,   334,   577,   646,   755,   335,   291,   744,  -305,
     390,   759,   887,   345,   114,   -11,   125,   114,   322,   323,
     114,   390,    51,   786,   551,    31,   533,   417,   418,   292,
      98,   244,   390,   125,   939,   125,   251,   124,   125,   346,
     124,   125,   806,   125,   148,   338,   814,   125,   126,   324,
     325,   108,   344,   779,   780,   347,   128,   125,   282,   125,
     125,   125,  -217,   125,   125,   399,   125,    78,  -217,  -220,
     443,  -217,   731,   592,   348,  -220,   340,  -221,  -220,  -218,
     596,   732,   101,  -221,  -222,  -218,  -221,   620,  -218,   278,
    -222,   622,   624,  -222,   695,  -223,   105,   105,   698,   349,
     703,  -223,   706,   350,  -223,    52,   156,    32,  -554,   158,
      51,   756,   351,   339,   114,   114,   372,   760,   888,   345,
     863,   864,    55,   832,    55,   267,   363,   126,   542,  -316,
     334,  -316,   601,   488,   335,   268,   124,    28,   689,   689,
     251,   271,   105,   105,   602,   346,   384,   895,   868,   651,
    -554,   248,   603,   293,   108,   108,   265,    32,   903,   904,
      59,   347,   382,   294,   735,    60,   543,   736,    55,    61,
      89,   125,   569,   125,   125,   681,   125,   105,    28,   105,
     348,   853,   373,   833,    62,   101,   101,    92,   584,   854,
     354,    54,   355,   585,   105,   487,   588,   356,    57,   593,
     108,   108,   913,   914,   437,   349,   337,   816,   817,   350,
      63,   373,   610,   611,   612,   822,   823,   587,   351,   339,
     161,  -554,   776,   334,   937,   938,  -389,   335,   777,   488,
     808,   101,   101,   353,   373,   108,   809,   108,    28,   244,
     883,   880,   363,    80,   386,   388,   371,   881,  -554,   316,
     317,  -310,   108,   529,  -554,   848,   140,  -522,   141,   105,
     488,   423,   424,   425,   426,   110,   101,  -554,   101,   111,
    -470,   105,   489,   112,  -554,   105,   105,  -311,  -554,  -554,
     118,  -366,  -495,   101,   486,   618,   298,   299,   300,   105,
     421,   422,  -554,  -554,  -554,  -471,  -367,   446,   894,  -554,
    -554,  -554,  -496,  -407,  -409,  -554,  -554,    82,  -509,  -510,
      83,   297,   129,   530,   297,   119,   552,   108,   297,   297,
     559,   626,   487,   121,   373,   440,   269,   441,   772,   108,
     313,   314,   315,   108,   108,    87,   124,   574,   580,   917,
      88,   125,   458,   397,   314,   315,   126,   108,   101,   373,
     488,   276,   373,   130,   764,    90,   105,    91,   131,   488,
     101,   929,   930,   134,   101,   101,   318,   319,   489,    93,
      94,   137,   359,    95,   793,   359,   142,   796,   101,   359,
     529,   831,   152,   326,   327,   154,   590,    28,   105,   230,
     797,   798,   865,   866,   105,   105,   871,   872,   146,   489,
     419,   420,   427,   428,   934,   935,   490,   458,   159,   717,
     234,   486,   487,   235,   108,   910,   911,   236,   249,   568,
     105,   487,   105,   570,   571,   281,   269,   274,   907,   908,
     275,   276,   297,   295,   291,   487,   296,   594,   292,   329,
     765,   766,   330,   331,   336,   101,   108,   360,   328,   358,
     359,   647,   108,   108,   283,   284,   285,   286,   287,   288,
     289,   290,   361,   362,   377,   380,   383,   398,   400,   401,
     529,   403,   411,   438,   445,   448,   450,   101,   108,   529,
     108,   531,   544,   101,   101,   545,   547,   548,    65,   489,
     556,   557,   558,   529,   560,   572,   598,   573,   489,   599,
     717,   486,   490,   600,   627,   604,   605,   608,   825,   101,
     486,   101,   373,   613,   230,   614,   381,   488,   617,   625,
      66,   488,   488,   389,   486,   628,   629,   637,   634,   488,
     488,   675,   650,   490,   679,   682,   638,   686,   683,   651,
     230,   722,   648,   649,   410,    67,    68,    69,    70,    71,
      72,    73,   676,   724,   727,   725,   729,   105,   105,   412,
     747,   105,   615,   728,   742,   739,   743,   745,   687,   488,
     693,   491,   731,   751,   820,   884,   884,   757,   384,   433,
     761,   230,   762,   781,   763,   769,   821,   770,   413,   414,
     415,   416,   416,   416,   416,   492,   775,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   783,   416,   488,
     488,   643,   488,   788,   791,   108,   108,   794,   488,   108,
     799,   807,   747,   490,   815,   818,   800,   803,   824,   826,
     230,   535,   490,   827,   919,   920,   828,   841,   798,   797,
     845,   752,   926,   927,   114,   849,   101,   101,   494,   850,
     101,   554,   554,   488,   852,   860,   489,   867,   829,   488,
     489,   489,   869,   870,   873,   834,   897,   491,   489,   489,
     878,   879,   413,   893,   872,   488,   488,   901,   896,   902,
     487,   906,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   492,   564,   310,   311,   871,   915,   916,   491,   918,
     924,   925,   105,   931,   932,   789,   790,   933,   489,   792,
     493,   272,   153,   874,   876,   936,   773,   273,   555,   635,
     495,   487,   492,   606,   430,   606,   429,   431,   546,   550,
     432,   899,   741,   787,   434,   685,   900,   898,   529,   813,
     892,   692,   609,   767,   494,   862,   768,   145,   489,   489,
     847,   489,   581,    27,   233,    64,   439,   489,   795,   886,
     108,   378,   805,   802,   444,   923,    53,   877,   875,   486,
     447,   451,   162,   266,     0,   494,     0,     0,     0,   529,
     921,   922,     0,   829,     0,     0,     0,     0,   491,     0,
     490,   101,   489,     0,   490,   490,     0,   491,   489,     0,
       0,     0,   490,   490,     0,   636,   493,     0,     0,  -304,
     486,     0,   492,     0,   489,   489,   495,     0,     0,    33,
     630,   492,   631,   632,   633,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   493,     0,     0,
       0,    34,   490,     0,     0,     0,     0,   495,     0,   564,
     912,   699,   701,     0,    35,   704,     0,     0,    36,    37,
     712,   699,     0,     0,    38,   494,    39,    40,    41,    42,
       0,     0,     0,    43,   494,     0,   535,    44,     0,     0,
       0,     0,   490,   490,     0,   490,     0,     0,     0,    45,
       0,   490,    46,     0,    47,     0,     0,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   721,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   490,   493,     0,     0,
       0,     0,   490,     0,     0,     0,   493,   495,     0,     0,
       0,     0,     0,     0,     0,     0,   495,     0,   490,   490,
       0,     0,     0,     0,     0,   491,     0,     0,     0,   491,
     491,     0,     0,     0,     0,   774,     0,   491,   491,     0,
       0,     0,     0,     0,     0,     0,   564,     0,     0,   492,
       0,     0,     0,   492,   492,     0,     0,     0,     0,     0,
      55,   492,   492,     0,     0,     0,     0,     0,   699,    81,
       0,    82,   699,   699,    83,     0,     0,   491,     0,    84,
       0,     0,     0,    85,     0,     0,   566,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,    87,
       0,   492,   494,     0,    88,     0,   494,   494,    89,     0,
       0,     0,     0,     0,   494,   494,     0,   491,   491,    90,
     491,    91,     0,     0,   846,    92,   491,     0,     0,     0,
       0,     0,   851,    93,    94,     0,     0,    95,     0,     0,
     567,   492,   492,     0,   492,     0,     0,     0,     0,     0,
     492,     0,     0,     0,   494,     0,     0,     0,     0,     0,
       0,   491,     0,     0,   493,     0,     0,   491,   493,   493,
     564,     0,     0,     0,   495,     0,   493,   493,   495,   495,
       0,     0,     0,   491,   491,   492,   495,   495,     0,     0,
       0,   492,     0,     0,   494,   494,     0,   494,     0,     0,
     652,     0,     0,   494,     0,     0,     0,   492,   492,     0,
       0,     0,     0,     0,     0,     0,   493,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   495,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   494,     0,
       0,   653,     0,     0,   494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   493,   493,     0,   493,
     494,   494,     0,     0,     0,   493,   495,   495,     0,   495,
       0,     0,   654,   655,     0,   495,     0,   656,   657,   658,
     659,   660,   661,   662,   663,   664,     0,   665,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   666,   667,     0,
     493,   668,   669,   670,   671,     0,   493,   672,   673,     0,
     495,     0,     0,     0,     0,     0,   495,     0,     0,     0,
       0,     0,   493,   493,     0,     0,   464,     0,   164,   165,
     166,   167,   495,   495,   168,    81,   465,    82,   853,     0,
      83,   466,     0,   467,   468,    84,   854,     0,   469,    85,
       0,     0,     0,     0,     0,   170,     0,   470,    86,   471,
     472,   473,   474,     0,     0,    87,     0,     0,     0,   475,
      88,     0,   171,   172,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,    90,     0,    91,   173,     0,
       0,    92,     0,   477,   174,   478,   175,   479,   176,    93,
      94,   480,   481,    95,   482,     0,   270,     0,   483,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,   178,     0,     0,     0,   484,
       0,     0,   179,   180,   181,     0,     0,   182,     0,   183,
     184,     0,   464,     0,   164,   165,   166,   167,     0,     0,
     168,    81,   465,    82,     0,     0,    83,   466,     0,   467,
     468,    84,   185,   186,   469,    85,     0,     0,     0,     0,
       0,   170,     0,   470,    86,   471,   472,   473,   474,     0,
       0,    87,     0,     0,     0,   475,    88,     0,   171,   172,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     476,    90,     0,    91,   173,     0,     0,    92,     0,   477,
     174,   478,   175,   479,   176,    93,    94,   480,   481,    95,
     482,     0,   270,     0,   483,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
       0,   178,     0,     0,     0,   484,     0,     0,   179,   180,
     181,     0,     0,   182,     0,   183,   184,     0,    55,     0,
     164,   165,   166,   167,     0,     0,   168,    81,   465,    82,
       0,     0,    83,   466,     0,     0,   468,    84,   185,   186,
     469,    85,     0,     0,     0,     0,     0,   170,     0,   470,
      86,   471,   472,   473,   474,     0,     0,    87,     0,     0,
       0,   475,    88,     0,   171,   172,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,    90,     0,    91,
     173,     0,     0,    92,     0,   477,   174,   478,   175,   479,
     176,    93,    94,   480,   481,    95,   482,     0,     0,     0,
     483,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,     0,   178,     0,     0,
       0,   484,     0,     0,   179,   180,   181,     0,     0,   182,
       0,   183,   184,    55,     0,   164,   165,   166,   167,     0,
       0,   168,    81,     0,    82,     0,     0,    83,   169,     0,
       0,     0,    84,     0,   185,   186,    85,     0,     0,     0,
       0,     0,   170,     0,     0,    86,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,    88,     0,   171,
     172,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,     0,    91,   173,   534,     0,    92,     0,
       0,   174,     0,   175,     0,   176,    93,    94,   177,     0,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     384,   719,   178,     0,     0,     0,     0,     0,     0,   179,
     180,   181,     0,     0,   182,     0,   183,   184,    55,     0,
     164,   165,   166,   167,     0,     0,   168,    81,     0,    82,
       0,     0,    83,   169,     0,     0,     0,    84,     0,   185,
     186,    85,     0,     0,     0,     0,     0,   170,     0,     0,
      86,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,    88,     0,   171,   172,    89,     0,   404,     0,
       0,     0,     0,     0,     0,   405,     0,    90,     0,    91,
     173,     0,     0,    92,     0,     0,   174,     0,   175,     0,
     176,    93,    94,   177,     0,    95,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,   164,   165,   166,   167,
       0,     0,   168,    81,     0,    82,     0,   178,    83,   169,
       0,     0,     0,    84,   179,   180,   181,    85,     0,   182,
       0,   183,   184,   170,     0,     0,    86,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,    88,     0,
     171,   172,    89,     0,   185,   186,     0,     0,     0,     0,
       0,     0,     0,    90,     0,    91,   173,   534,     0,    92,
       0,     0,   174,     0,   175,     0,   176,    93,    94,   177,
       0,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   384,     0,   178,     0,     0,     0,     0,     0,     0,
     179,   180,   181,     0,     0,   182,     0,   183,   184,    55,
       0,   164,   165,   166,   167,     0,     0,   168,    81,     0,
      82,     0,     0,    83,   169,     0,     0,     0,    84,     0,
     185,   186,    85,     0,     0,     0,     0,     0,   170,     0,
       0,    86,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,    88,     0,   171,   172,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
      91,   173,     0,     0,    92,     0,     0,   174,     0,   175,
       0,   176,    93,    94,   177,     0,    95,     0,     0,   277,
       0,     0,     0,     0,     0,    55,     0,   164,   165,   166,
     167,     0,     0,   168,    81,     0,    82,     0,   178,    83,
     169,     0,     0,     0,    84,   179,   180,   181,    85,     0,
     182,     0,   183,   184,   170,     0,     0,    86,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,    88,
       0,   171,   172,    89,     0,   185,   186,     0,     0,     0,
       0,     0,     0,     0,    90,     0,    91,   173,     0,     0,
      92,     0,     0,   174,     0,   175,     0,   176,    93,    94,
     177,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   549,     0,     0,     0,     0,
       0,   179,   180,   181,     0,     0,   182,     0,   183,   184,
      55,     0,   164,   165,   166,   167,     0,     0,   168,    81,
       0,    82,     0,     0,    83,   169,     0,     0,     0,    84,
       0,   185,   186,    85,     0,     0,     0,     0,     0,   170,
       0,     0,    86,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,    88,     0,   171,   172,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,    91,   173,     0,     0,    92,     0,     0,   174,     0,
     175,     0,   176,    93,    94,   177,     0,    95,     0,     0,
     270,     0,     0,     0,     0,     0,    55,     0,   164,   165,
     166,   167,     0,     0,   168,    81,     0,    82,     0,   178,
      83,   169,     0,     0,     0,    84,   179,   180,   181,    85,
       0,   182,     0,   183,   184,   170,     0,     0,    86,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
      88,     0,   171,   172,    89,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,    90,     0,    91,   173,     0,
       0,    92,     0,     0,   174,     0,   175,     0,   176,    93,
      94,   177,     0,    95,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,   164,   165,   166,   167,     0,     0,
     168,    81,     0,    82,     0,   178,    83,   169,     0,     0,
       0,    84,   179,   180,   181,    85,     0,   182,     0,   183,
     184,   170,     0,     0,    86,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,    88,     0,   171,   172,
      89,     0,   185,   186,     0,     0,     0,     0,     0,     0,
       0,    90,     0,    91,   173,     0,     0,    92,     0,     0,
     174,     0,   175,   452,   176,    93,    94,   177,     0,    95,
       0,     0,    81,     0,    82,     0,     0,    83,     0,    59,
     453,     0,    84,     0,    60,     0,    85,     0,    61,   454,
     455,   178,     0,     0,     0,    86,     0,     0,     0,     0,
     456,     0,    87,    62,     0,   183,   184,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,     0,    91,     0,     0,     0,    92,    63,
     452,     0,     0,     0,     0,     0,    93,    94,     0,    81,
      95,    82,     0,   457,    83,     0,    59,   453,     0,    84,
       0,    60,     0,    85,     0,    61,   454,   455,     0,     0,
       0,     0,    86,     0,     0,     0,     0,   456,     0,    87,
      62,     0,     0,     0,    88,     0,     0,   561,    89,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    90,
      82,    91,     0,    83,     0,    92,    63,     0,    84,     0,
       0,     0,    85,    93,    94,     0,     0,    95,     0,     0,
     457,    86,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,    55,    88,     0,     0,     0,    89,     0,     0,
       0,    81,     0,    82,     0,     0,    83,     0,    90,     0,
      91,    84,     0,     0,    92,    85,    55,     0,     0,     0,
       0,     0,    93,    94,    86,    81,    95,    82,     0,    96,
      83,    87,     0,     0,     0,    84,    88,     0,     0,    85,
      89,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       0,    90,    33,    91,     0,    87,     0,    92,     0,     0,
      88,     0,     0,     0,    89,    93,    94,     0,     0,    95,
       0,     0,   270,     0,    34,    90,     0,    91,     0,     0,
       0,    92,     0,    33,     0,     0,     0,    35,     0,    93,
      94,    36,    37,    95,     0,     0,   387,    38,     0,    39,
      40,    41,    42,     0,     0,    34,    43,     0,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,    45,    37,     0,    46,     0,    47,    38,     0,
      39,    40,    41,    42,     0,     0,     0,    43,     0,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,     0,    47
};

static const yytype_int16 yycheck[] =
{
       3,     1,    60,   100,    74,   273,   500,    15,   599,   178,
     107,   108,    15,   159,   335,   604,   602,   580,   569,   798,
     799,     3,     1,   278,   279,   614,     3,     4,     4,    29,
     267,    17,     3,    98,   675,   469,    36,   119,   485,     1,
     599,   682,   107,     3,    11,     4,   629,     4,    34,     4,
       4,   121,     4,     4,   613,     4,   293,   139,    82,     4,
      60,   382,   841,   121,   134,     4,   236,   137,   651,     4,
     140,     4,     4,     4,    74,     4,     4,   640,     4,    46,
      99,     1,     0,   101,     1,     1,   727,     1,   867,   107,
     236,    60,     1,   112,     1,     1,   590,   334,   109,   650,
       1,     1,     1,   104,    53,     1,     1,     1,     1,   256,
     121,   112,     1,   171,     1,    72,     1,   263,     1,    98,
     178,   121,    99,    72,   571,     1,   103,   109,   679,     0,
     112,     1,     1,   236,   134,   112,   112,   137,   105,   106,
     140,   112,   145,   729,   399,   107,   383,   316,   317,   109,
      60,   154,   112,   112,   933,   112,   159,   112,   112,   236,
     112,   112,   751,   112,   234,   235,   757,   112,     3,   136,
     137,   171,   342,   724,   725,   236,   273,   112,   178,   112,
     112,   112,    98,   112,   112,   282,   112,   107,   104,    98,
     107,   107,    98,   107,   236,   104,   342,    98,   107,    98,
     107,   107,   171,   104,    98,   104,   107,   107,   107,   178,
     104,   107,   107,   107,   107,    98,   274,   275,   107,   236,
     107,   104,   107,   236,   107,   233,   134,     4,    99,   137,
     233,   107,   236,   236,   234,   235,   251,   107,   107,   342,
     827,   828,     4,    12,     4,    99,   249,     3,   104,   101,
      99,   103,     4,   373,   103,   109,   112,   109,   849,   850,
     263,   171,   320,   321,    16,   342,   101,   853,   831,   121,
      99,   155,    24,    99,   274,   275,   160,     4,   865,   866,
      20,   342,   103,   109,   103,    25,   104,   103,     4,    29,
      52,   112,   103,   112,   112,    72,   112,   355,   109,   357,
     342,    16,   101,    72,    44,   274,   275,    69,   107,    24,
      54,    99,    56,   460,   372,   373,   463,    61,   109,   466,
     320,   321,   885,   886,   339,   342,   234,   761,   762,   342,
      70,   101,   479,   480,   481,   769,   770,   107,   342,   342,
     100,    99,   101,    99,   931,   932,   104,   103,   107,   469,
      98,   320,   321,   237,   101,   355,   104,   357,   109,   362,
     107,    98,   365,     4,   274,   275,   250,   104,    99,   110,
     111,   102,   372,   373,    99,   809,    98,   102,   100,   437,
     500,   322,   323,   324,   325,     4,   355,    99,   357,     4,
     102,   449,   373,     4,    99,   453,   454,   102,    99,    99,
     108,   102,   102,   372,   373,   899,   140,   141,   142,   467,
     320,   321,    99,    99,    99,   102,   102,   102,   852,    99,
      99,    99,   102,   102,   102,    99,    99,    15,   102,   102,
      18,    98,   529,   100,    98,   101,   100,   437,    98,    98,
     100,   100,   500,   108,   101,   355,   103,   357,   716,   449,
     112,   113,   114,   453,   454,    43,   112,   457,   458,   893,
      48,   112,   372,   112,   113,   114,     3,   467,   437,   101,
     590,   103,   101,     4,   103,    63,   534,    65,   108,   599,
     449,   915,   916,   108,   453,   454,   130,   131,   469,    77,
      78,   108,    98,    81,   100,    98,   103,   100,   467,    98,
     500,   100,   103,   134,   135,   101,   108,   109,   566,   142,
      94,    95,    94,    95,   572,   573,    96,    97,   107,   500,
     318,   319,   326,   327,   926,   927,   373,   437,   101,   626,
      98,   500,   590,    98,   534,   872,   873,   101,   101,   449,
     598,   599,   600,   453,   454,   178,   103,   103,   869,   870,
     103,   103,    98,   103,   109,   613,   104,   467,   109,   120,
     707,   708,   116,   138,   102,   534,   566,     4,   115,   104,
      98,   571,   572,   573,   179,   180,   181,   182,   183,   184,
     185,   186,   102,    98,   102,     4,    99,   104,     4,     4,
     590,     4,     4,   102,   121,    50,   102,   566,   598,   599,
     600,   104,   104,   572,   573,   104,   104,   104,    30,   590,
      98,   104,   108,   613,   104,    53,   103,    53,   599,   103,
     717,   590,   469,   103,   534,   103,   103,   103,   775,   598,
     599,   600,   101,   103,   267,   103,   269,   757,   102,   104,
      62,   761,   762,   276,   613,   102,    98,     4,   104,   769,
     770,    99,   103,   500,   103,    99,   566,    86,   101,   121,
     293,   103,   572,   573,   297,    87,    88,    89,    90,    91,
      92,    93,    98,   103,    99,   103,   121,   735,   736,   312,
     683,   739,     4,   104,   107,   103,     1,   101,   598,   809,
     600,   373,    98,   103,   764,   842,   843,    98,   101,   332,
     104,   334,   104,   101,   104,   104,   764,   104,   313,   314,
     315,   316,   317,   318,   319,   373,   104,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   108,   333,   849,
     850,     4,   852,   101,   104,   735,   736,   104,   858,   739,
     102,   121,   745,   590,    42,   101,   749,   750,   100,   102,
     383,   384,   599,   104,   901,   902,   104,   102,    95,    94,
     104,     4,   909,   910,   764,     1,   735,   736,   373,   107,
     739,   404,   405,   893,    28,     4,   757,   102,   781,   899,
     761,   762,   103,   103,   102,   788,   102,   469,   769,   770,
     104,   104,   397,   104,    97,   915,   916,   104,   108,   104,
     858,   101,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   469,   445,   132,   133,    96,   104,   104,   500,   108,
     104,   104,   880,    95,    94,   735,   736,   102,   809,   739,
     373,   171,   131,   836,   837,   104,   717,   171,   405,   556,
     373,   899,   500,   476,   329,   478,   328,   330,   393,   398,
     331,   858,   676,   731,   333,   594,   858,   856,   858,   756,
     850,   599,   478,   709,   469,   821,   709,   119,   849,   850,
     808,   852,   458,     4,   145,    49,   342,   858,   745,   843,
     880,   263,   750,   749,   359,   906,    24,   837,   836,   858,
     362,   365,   140,   161,    -1,   500,    -1,    -1,    -1,   899,
     903,   904,    -1,   906,    -1,    -1,    -1,    -1,   590,    -1,
     757,   880,   893,    -1,   761,   762,    -1,   599,   899,    -1,
      -1,    -1,   769,   770,    -1,   558,   469,    -1,    -1,     0,
     899,    -1,   590,    -1,   915,   916,   469,    -1,    -1,    10,
     545,   599,   547,   548,   549,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,
      -1,    32,   809,    -1,    -1,    -1,    -1,   500,    -1,   602,
     880,   604,   605,    -1,    45,   608,    -1,    -1,    49,    50,
     613,   614,    -1,    -1,    55,   590,    57,    58,    59,    60,
      -1,    -1,    -1,    64,   599,    -1,   629,    68,    -1,    -1,
      -1,    -1,   849,   850,    -1,   852,    -1,    -1,    -1,    80,
      -1,   858,    83,    -1,    85,    -1,    -1,    -1,   651,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   634,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   893,   590,    -1,    -1,
      -1,    -1,   899,    -1,    -1,    -1,   599,   590,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   599,    -1,   915,   916,
      -1,    -1,    -1,    -1,    -1,   757,    -1,    -1,    -1,   761,
     762,    -1,    -1,    -1,    -1,   718,    -1,   769,   770,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   729,    -1,    -1,   757,
      -1,    -1,    -1,   761,   762,    -1,    -1,    -1,    -1,    -1,
       4,   769,   770,    -1,    -1,    -1,    -1,    -1,   751,    13,
      -1,    15,   755,   756,    18,    -1,    -1,   809,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,   809,   757,    -1,    48,    -1,   761,   762,    52,    -1,
      -1,    -1,    -1,    -1,   769,   770,    -1,   849,   850,    63,
     852,    65,    -1,    -1,   807,    69,   858,    -1,    -1,    -1,
      -1,    -1,   815,    77,    78,    -1,    -1,    81,    -1,    -1,
      84,   849,   850,    -1,   852,    -1,    -1,    -1,    -1,    -1,
     858,    -1,    -1,    -1,   809,    -1,    -1,    -1,    -1,    -1,
      -1,   893,    -1,    -1,   757,    -1,    -1,   899,   761,   762,
     853,    -1,    -1,    -1,   757,    -1,   769,   770,   761,   762,
      -1,    -1,    -1,   915,   916,   893,   769,   770,    -1,    -1,
      -1,   899,    -1,    -1,   849,   850,    -1,   852,    -1,    -1,
      33,    -1,    -1,   858,    -1,    -1,    -1,   915,   916,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   809,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   809,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   893,    -1,
      -1,    74,    -1,    -1,   899,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   849,   850,    -1,   852,
     915,   916,    -1,    -1,    -1,   858,   849,   850,    -1,   852,
      -1,    -1,   105,   106,    -1,   858,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,
     893,   134,   135,   136,   137,    -1,   899,   140,   141,    -1,
     893,    -1,    -1,    -1,    -1,    -1,   899,    -1,    -1,    -1,
      -1,    -1,   915,   916,    -1,    -1,     4,    -1,     6,     7,
       8,     9,   915,   916,    12,    13,    14,    15,    16,    -1,
      18,    19,    -1,    21,    22,    23,    24,    -1,    26,    27,
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
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    21,
      22,    23,   140,   141,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,   103,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,
     112,    -1,    -1,   115,    -1,   117,   118,    -1,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,   140,   141,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,
      -1,   107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,
      -1,   117,   118,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,
      -1,    -1,    23,    -1,   140,   141,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,    -1,
      -1,    72,    -1,    74,    -1,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,    -1,    -1,   115,    -1,   117,   118,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    -1,    -1,    -1,    23,    -1,   140,
     141,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,
      66,    -1,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,   103,    18,    19,
      -1,    -1,    -1,    23,   110,   111,   112,    27,    -1,   115,
      -1,   117,   118,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,   140,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,
      -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
     110,   111,   112,    -1,    -1,   115,    -1,   117,   118,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    18,    19,    -1,    -1,    -1,    23,    -1,
     140,   141,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,    74,
      -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    -1,   103,    18,
      19,    -1,    -1,    -1,    23,   110,   111,   112,    27,    -1,
     115,    -1,   117,   118,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    -1,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,
      69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,   104,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,    -1,    -1,   115,    -1,   117,   118,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,    23,
      -1,   140,   141,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,   103,
      18,    19,    -1,    -1,    -1,    23,   110,   111,   112,    27,
      -1,   115,    -1,   117,   118,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,   140,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,
      -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    15,    -1,   103,    18,    19,    -1,    -1,
      -1,    23,   110,   111,   112,    27,    -1,   115,    -1,   117,
     118,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,
      72,    -1,    74,     4,    76,    77,    78,    79,    -1,    81,
      -1,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,    20,
      21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,    30,
      31,   103,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      41,    -1,    43,    44,    -1,   117,   118,    48,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    69,    70,
       4,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    13,
      81,    15,    -1,    84,    18,    -1,    20,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,   118,    52,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    63,
      15,    65,    -1,    18,    -1,    69,    70,    -1,    23,    -1,
      -1,    -1,    27,    77,    78,    -1,    -1,    81,    -1,    -1,
      84,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,     4,    48,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    13,    -1,    15,    -1,    -1,    18,    -1,    63,    -1,
      65,    23,    -1,    -1,    69,    27,     4,    -1,    -1,    -1,
      -1,    -1,    77,    78,    36,    13,    81,    15,    -1,    84,
      18,    43,    -1,    -1,    -1,    23,    48,    -1,    -1,    27,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    63,    10,    65,    -1,    43,    -1,    69,    -1,    -1,
      48,    -1,    -1,    -1,    52,    77,    78,    -1,    -1,    81,
      -1,    -1,    84,    -1,    32,    63,    -1,    65,    -1,    -1,
      -1,    69,    -1,    10,    -1,    -1,    -1,    45,    -1,    77,
      78,    49,    50,    81,    -1,    -1,    84,    55,    -1,    57,
      58,    59,    60,    -1,    -1,    32,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    80,    50,    -1,    83,    -1,    85,    55,    -1,
      57,    58,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    82,   272,   273,   282,   283,   284,   285,     4,   147,
     279,   280,     0,   274,   276,   286,   287,   288,   292,   341,
     351,   366,   373,   374,   375,   376,   385,   283,   109,   121,
       1,   107,     4,    10,    32,    45,    49,    50,    55,    57,
      58,    59,    60,    64,    68,    80,    83,    85,   289,   290,
     291,   274,   287,   376,    99,     4,   279,   109,   279,    20,
      25,    29,    44,    70,   291,    30,    62,    87,    88,    89,
      90,    91,    92,    93,   377,   378,   379,     1,   107,   277,
       4,    13,    15,    18,    23,    27,    36,    43,    48,    52,
      63,    65,    69,    77,    78,    81,    84,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   279,   308,
       4,     4,     4,   148,   279,   380,   381,   383,   108,   101,
     281,   108,   294,   295,   112,   112,     3,   160,   160,   160,
       4,   108,   367,   368,   108,   353,   354,   108,   342,   343,
      98,   100,   103,   382,   384,   273,   107,   278,   148,   156,
     296,   293,   103,   154,   101,   369,   296,   352,   296,   101,
     344,   100,   381,   386,     6,     7,     8,     9,    12,    19,
      33,    50,    51,    66,    72,    74,    76,    79,   103,   110,
     111,   112,   115,   117,   118,   140,   141,   145,   146,   152,
     156,   164,   165,   166,   167,   168,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     209,   279,   275,   286,    98,    98,   101,   297,   274,   307,
     310,   311,   312,   314,   274,   370,   371,   372,   278,   101,
     355,   274,   288,   301,   302,   305,   306,   315,   322,   326,
     329,   334,   345,   346,   347,   278,   386,    99,   109,   103,
      84,   149,   150,   158,   103,   103,   103,    84,   152,   156,
     196,   209,   279,   191,   191,   191,   191,   191,   191,   191,
     191,   109,   109,    99,   109,   103,   104,    98,   140,   141,
     142,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     132,   133,   208,   112,   113,   114,   110,   111,   130,   131,
      11,    46,   105,   106,   136,   137,   134,   135,   115,   120,
     116,   138,   119,   139,    99,   103,   102,   296,   148,   274,
     288,   298,   299,   300,   301,   302,   305,   315,   322,   326,
     329,   334,   338,   278,    54,    56,    61,   313,   104,    98,
       4,   102,    98,   274,   356,   357,   358,   359,   361,   362,
     364,   278,   289,   101,   107,   214,   309,   102,   347,   172,
       4,   209,   103,    99,   101,   348,   149,    84,   149,   209,
     112,   160,   193,   194,   195,   193,   193,   112,   104,   160,
       4,     4,   172,     4,    54,    61,   162,   163,   169,   209,
     209,     4,   209,   191,   191,   191,   191,   196,   196,   197,
     197,   149,   149,   198,   198,   198,   198,   199,   199,   200,
     201,   202,   203,   209,   204,   172,   169,   289,   102,   300,
     149,   149,     1,   107,   311,   121,   102,   372,    50,   360,
     102,   358,     4,    21,    30,    31,    41,    84,   149,   327,
     330,   331,   333,   335,     4,    14,    19,    21,    22,    26,
      35,    37,    38,    39,    40,    47,    62,    71,    73,    75,
      79,    80,    82,    86,   107,   149,   152,   156,   168,   175,
     176,   178,   189,   190,   191,   207,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   225,   228,   229,   230,   231,
     232,   239,   240,   241,   242,   243,   251,   252,   253,   254,
     255,   256,   258,   259,   264,   265,   266,   267,   269,   279,
     100,   104,   169,   172,    67,   209,   223,   224,   348,   349,
     350,   104,   104,   104,   104,   104,   195,   104,   104,   104,
     188,   193,   100,   161,   209,   161,    98,   104,   108,   100,
     104,   118,     4,     4,   209,   210,    30,    84,   149,   103,
     149,   149,    53,    53,   279,     4,    53,    72,   221,   222,
     279,   280,   328,   389,   107,   214,   339,   107,   214,   340,
     108,     1,   107,   214,   149,     1,   107,   213,   103,   103,
     103,     4,    16,    24,   103,   103,   209,   257,   103,   257,
     214,   214,   214,   103,   103,     4,   221,   102,   212,     1,
     107,     1,   107,     1,   107,   104,   100,   149,   102,    98,
     191,   191,   191,   191,   104,   163,   209,     4,   149,     4,
       4,    72,   307,     4,   226,   227,   221,   279,   149,   149,
     103,   121,    33,    74,   105,   106,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   120,   130,   131,   134,   135,
     136,   137,   140,   141,   332,    99,    98,   303,   304,   103,
     389,    72,    99,   101,   212,   226,    86,   149,   220,   229,
     244,   247,   250,   149,     1,   107,   210,     1,   107,   209,
     211,   209,     1,   107,   209,     1,   107,    17,    34,   260,
     261,   263,   209,   220,   268,   211,   159,   160,    99,   102,
     223,   191,   103,     4,   103,   103,   389,    99,   104,   121,
       1,    98,   107,   107,   387,   103,   103,   307,   223,   103,
     310,   222,   107,     1,   307,   101,   310,   274,   316,   319,
     320,   103,     4,   270,   271,     1,   107,    98,     4,     1,
     107,   104,   104,   104,   103,   214,   214,   261,   263,   104,
     104,   180,   348,   159,   209,   104,   101,   107,   365,   307,
     307,   101,   310,   108,   336,   337,   210,   227,   101,   149,
     149,   104,   149,   100,   104,   316,   100,    94,    95,   102,
     274,   317,   320,   274,   318,   319,   211,   121,    98,   104,
     211,   245,   248,   245,   229,    42,   213,   213,   101,   233,
     148,   156,   213,   213,   100,   214,   102,   104,   104,   274,
     363,   100,    12,    72,   274,   323,   324,   325,     4,     4,
       4,   102,   390,   390,   390,   104,   209,   271,   213,     1,
     107,   209,    28,    16,    24,   234,   235,   236,   237,   238,
       4,   262,   262,   365,   365,    94,    95,   102,   389,   103,
     103,    96,    97,   102,   274,   325,   274,   324,   104,   104,
      98,   104,   390,   107,   214,   321,   321,     1,   107,   246,
     249,   250,   246,   104,   213,   210,   108,   102,   236,   216,
     238,   104,   104,   365,   365,   390,   101,   169,   169,   388,
     388,   388,   149,   389,   389,   104,   104,   213,   108,   214,
     214,   274,   274,   363,   104,   104,   214,   214,     4,   213,
     213,    95,    94,   102,   387,   387,   104,   365,   365,   390
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
     301,   301,   303,   302,   304,   302,   305,   306,   306,   307,
     307,   308,   308,   309,   309,   310,   310,   311,   311,   312,
     313,   313,   313,   314,   315,   316,   316,   317,   317,   318,
     318,   319,   320,   321,   321,   322,   322,   323,   323,   324,
     325,   326,   327,   327,   328,   329,   330,   330,   331,   331,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   333,   333,   334,   335,   336,   336,   337,   337,
     338,   339,   339,   340,   340,   341,   342,   342,   343,   344,
     345,   345,   346,   346,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   348,   348,   349,   349,   350,   350,   352,
     351,   353,   353,   354,   355,   356,   356,   357,   357,   358,
     358,   358,   358,   359,   359,   360,   360,   361,   362,   363,
     363,   363,   363,   364,   365,   365,   366,   367,   367,   368,
     369,   369,   370,   370,   371,   371,   372,   372,   373,   373,
     374,   375,   375,   376,   376,   377,   377,   378,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   380,   380,   381,
     382,   382,   383,   384,   385,   386,   387,   388,   389,   390
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
       6,     6,     0,     6,     0,     6,     2,     7,     7,     0,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     4,
       0,     1,     1,     4,     9,     2,     2,     0,     1,     0,
       1,     5,     5,     1,     1,     6,    10,     2,     2,     5,
       5,     8,     5,     5,     2,     4,     1,     1,     7,    10,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     7,     4,     5,     0,     1,     5,     5,
       7,     1,     1,     1,     1,     7,     0,     1,     2,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     0,     1,     1,     3,     0,
       8,     0,     1,     2,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     8,     8,     0,     1,     9,    12,     3,
       3,     6,     6,     6,     1,     2,     7,     0,     1,     2,
       3,     4,     0,     1,     1,     3,     2,     4,     9,     9,
       1,     1,     2,     6,     7,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       0,     1,     1,     3,     0,     0,     0,     0,     0,     0
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
#line 2566 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 120 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2572 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 121 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2578 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 122 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2584 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2590 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 124 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2596 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2602 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2608 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 134 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2614 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 137 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2620 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 141 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2626 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2632 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 145 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2638 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 146 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);}
#line 2644 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2650 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 150 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2656 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2662 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2668 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2674 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 163 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 167 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 168 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 169 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 170 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 174 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);printf("dasdasdasdas");(yyval.r.str) = (yyvsp[0].r.str);}
#line 2764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 179 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.str) = (yyvsp[0].r.str);}
#line 2770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 183 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 187 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 188 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 191 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 192 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 195 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 2830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 204 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 2836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 208 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 2854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 2866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 222 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 2938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 2944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 235 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 2962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 238 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 2968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 239 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 2974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 2980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 243 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 2986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 2992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 247 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 2998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 250 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 251 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 254 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 255 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 258 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 261 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 271 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 274 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 277 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 281 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 282 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 285 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 286 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 289 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 292 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 295 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 298 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 301 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression primary_expression",1);}
#line 3136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression qualified_identifier",1);}
#line 3142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 306 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression post_increment_expression",1);}
#line 3148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 307 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression post_decrement_expression",1);}
#line 3154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression pointer_member_access",1);}
#line 3160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus postfix_expression",1);}
#line 3166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus EXCLAMATION_POINT",1);}
#line 3172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus TILDE",1);}
#line 3178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus cast_expression",1);}
#line 3184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 317 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 323 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression unary_expression_not_plusminus",1);}
#line 3202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression PLUS",1);}
#line 3208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 325 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression MINUS",1);}
#line 3214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression STAR",1);}
#line 3220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression pre_increment_expression",1);}
#line 3226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression pre_decrement_expression",1);}
#line 3232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 329 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression addressof_expression",1);}
#line 3238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 338 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 339 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 342 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 346 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 350 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 354 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 358 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 363 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 382 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 387 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 388 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 392 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 395 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 396 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 400 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 403 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 404 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 411 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 414 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 416 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 420 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 427 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 431 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 434 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 438 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 443 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 458 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 461 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 462 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 466 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 467 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 473 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 476 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 477 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 479 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 482 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);
           SPL->addLocalVariable(string((yyvsp[-1].r.str)),*(yyvsp[0].r.identifiers),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no)) , SPL->endScope();
  }
#line 3762 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 488 "yacc.y" /* yacc.c:1646  */
    {
         l.a("variable_declarators",1); 
         (yyval.r.identifiers) = new queue<string>();
		 (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
   }
#line 3772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 494 "yacc.y" /* yacc.c:1646  */
    {     
          l.a("variable_declarators",2);
		  (yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
		  (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
   }
#line 3782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 502 "yacc.y" /* yacc.c:1646  */
    {          l.a("variable_declarator",0); 
         (yyval.r.identifier) = new string ((yyvsp[0].r.str)) ; 
  }
#line 3790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 506 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1); 
           (yyval.r.identifier) = new string ((yyvsp[-2].r.str));
   }
#line 3798 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 511 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3804 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 512 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3810 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 3816 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 516 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 3822 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 519 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 3828 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 3834 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 3840 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 3846 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 3852 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 530 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 3858 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 533 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3864 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 534 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3870 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 535 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3876 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 536 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3882 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 537 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3888 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 538 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3894 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 3900 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 542 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3906 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 3912 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 546 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 3918 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 547 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 3924 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 550 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 3930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 553 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 3936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 556 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 3942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 3948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 560 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 3954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 3960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 564 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 3966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 567 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 3972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 568 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 3978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 3984 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 572 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 3990 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 3996 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4002 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 577 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4008 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 578 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4014 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 581 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4020 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4032 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4038 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",3);}
#line 4044 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 592 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",3);}
#line 4050 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 596 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4056 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4062 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 600 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4068 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4074 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 604 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4080 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 605 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4086 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 608 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4092 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4098 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 612 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 615 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4128 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 625 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4134 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 628 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4152 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 629 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4158 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 632 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4164 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 633 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4170 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4176 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4182 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4194 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 642 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4200 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4206 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4218 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4224 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 649 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4230 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4242 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 657 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4254 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 661 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4266 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4272 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 665 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4278 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4284 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4290 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4296 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 674 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4302 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 675 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4308 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 678 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4314 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4320 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4326 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 687 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4332 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 690 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4338 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4344 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 694 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4350 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 698 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4356 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 701 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4362 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 702 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4368 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 705 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4374 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 708 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);SPL->check();}
#line 4380 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);SPL->check();}
#line 4386 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 712 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4392 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4398 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 716 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4404 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 717 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4410 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 720 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4416 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4422 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 724 "yacc.y" /* yacc.c:1646  */
    {SPL->addNamespace(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4428 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);SPL->endScope();}
#line 4434 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 728 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4440 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 729 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4446 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 734 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("qualified_identifier",0);
		(yyval.r.base) = new string((yyvsp[0].r.str));
  }
#line 4455 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 739 "yacc.y" /* yacc.c:1646  */
    {
		l.a("qualified_identifier",1);
		(yyval.r.base) = new string(string(*(yyvsp[-1].r.base)) + string((yyvsp[0].r.str)));
	}
#line 4464 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[-1].r.str)) + ".");}
#line 4470 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 747 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[-2].r.base) + string((yyvsp[-1].r.str)) + ".");}
#line 4476 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 751 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4482 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 754 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4488 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 755 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4494 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 758 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4500 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 759 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4506 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 762 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4512 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 763 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4518 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 766 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4524 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 767 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4530 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 770 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4536 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 771 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4542 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 774 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4548 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 775 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4554 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 778 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4560 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 779 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4566 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 780 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4572 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4578 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 782 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4584 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 794 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
#line 4593 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 799 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 4602 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 806 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4612 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 812 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 4622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 819 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
#line 4628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
#line 4634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
#line 4640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
#line 4646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
#line 4652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
#line 4658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 825 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 4664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
#line 4670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 827 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
#line 4676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 828 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
#line 4682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 829 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
#line 4688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 830 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
#line 4694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 831 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
#line 4700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 832 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
#line 4706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 842 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 4714 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 845 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 4720 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 848 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 4726 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 849 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4732 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 852 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();}
#line 4738 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 853 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 4744 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);(yyval.r.bases) = new queue<string>();}
#line 4750 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 858 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 864 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[-2].r.bases);
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 4770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 4776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 876 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 4782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 4788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 880 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 4794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 4800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 884 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 885 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 886 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 887 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 888 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 889 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 891 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 892 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 4860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 897 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("constant_declaration",4);
		//SPL->add_var(*$<r.modifiers>2,1);
  }
#line 4869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 901 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 4875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 906 "yacc.y" /* yacc.c:1646  */
    {SPL->addField(*(yyvsp[-2].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.identifiers),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 907 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4); SPL->endScope(); }
#line 4887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 912 "yacc.y" /* yacc.c:1646  */
    {SPL->addField(*(yyvsp[-2].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.identifiers),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 914 "yacc.y" /* yacc.c:1646  */
    {
       l.a("field_declaration",4,1);
	   SPL->endScope();
  }
#line 4902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2); SPL->endScope();}

#line 4908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 925 "yacc.y" /* yacc.c:1646  */
    {
      l.a("method_header",5); 
	  {SPL->addMethod(*(yyvsp[-5].r.modifiers),string((yyvsp[-4].r.str)),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no));}
  }
#line 4917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);
  
  	SPL->addMethod(*(yyvsp[-5].r.modifiers),string((yyvsp[-4].r.str)),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no));

  }
#line 4927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);
       (yyval.r.types_ids) = new queue<pair<string ,string> >();
  }
#line 4935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 939 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);
       (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
  }
#line 4943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 944 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 4949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 945 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 4955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 948 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 4961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 949 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 4967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 956 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);
        (yyval.r.types_ids) = new queue<pair<string ,string> >(); 
		(yyval.r.types_ids)->push(make_pair(*(new string ((yyvsp[0].r.str))) ,*(yyvsp[0].r.identifier)));
  }
#line 4976 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 960 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);
   
		(yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		(yyval.r.types_ids)->push(make_pair(*(new string ((yyvsp[0].r.str))),*(yyvsp[0].r.identifier))); 
  }
#line 4986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 967 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1); (yyval.r.str) = (yyvsp[0].r.str) ;(yyval.r.identifier) = (yyvsp[0].r.identifier);}
#line 4992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 968 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);(yyval.r.str) = (yyvsp[0].r.str) ;(yyval.r.identifier) = (yyvsp[0].r.identifier);}
#line 4998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 971 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);
	    (yyval.r.str) = (yyvsp[-1].r.str)  , (yyval.r.identifier) = new string ((yyvsp[0].r.str));  
	 	 

  }
#line 5008 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 978 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5014 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 979 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5020 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 980 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 984 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);
  (yyval.r.str) = (yyvsp[-1].r.str)  ,(yyval.r.identifier) = new string ((yyvsp[0].r.str));}
#line 5033 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 991 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5039 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5045 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 995 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5051 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 998 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5057 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 999 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5063 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5069 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5075 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 1009 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5081 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1015 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5087 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 1018 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5093 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1019 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5099 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5105 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1026 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5111 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1029 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5117 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1030 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1036 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5129 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1042 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5135 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1048 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5141 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1051 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5147 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1053 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5153 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1056 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5159 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5165 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1063 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5171 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5177 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1067 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5183 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1068 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5189 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1071 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5195 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1072 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5201 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5207 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5213 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1075 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5219 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1076 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1078 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5237 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1079 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5243 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1080 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5249 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5255 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5261 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5267 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5273 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1085 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5279 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1086 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5285 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1088 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1089 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1090 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1091 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1092 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1095 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1096 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1099 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1102 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1105 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1106 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1109 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1110 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1126 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1130 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1133 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1134 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1142 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1143 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1146 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1149 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1152 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1157 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1160 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1163 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1164 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1165 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1169 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1174 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1175 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1178 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1182 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addInterface(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));		
  }
#line 5551 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1192 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);SPL->endScope();}
#line 5557 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 5563 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5569 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5575 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 5581 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 5587 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1207 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 5593 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 5599 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1211 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 5605 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1214 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5611 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1215 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5617 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5623 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 5629 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1221 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 5635 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 5641 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1225 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5647 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1226 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 5653 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1232 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 5659 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 5665 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1243 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5671 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1244 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 5677 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1245 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5683 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1246 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 5689 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 5695 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1254 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5701 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1255 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 5707 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1260 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 5713 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1263 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 5719 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1264 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 5725 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1267 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 5731 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1270 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5737 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1271 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 5743 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1274 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 5749 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1275 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 5755 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1278 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 5761 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1279 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 5767 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1282 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 5773 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1283 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 5779 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1288 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5785 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1289 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 5791 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1294 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 5797 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1297 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 5803 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1298 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 5809 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1301 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1302 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 5821 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1305 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 5827 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1306 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 5833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1309 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 5839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1313 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1314 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1315 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1316 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1317 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1319 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1320 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 5893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1323 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 5899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1324 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 5905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1327 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 5911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1330 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 5917 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1331 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 5923 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1334 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 5929 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1337 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 5935 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1344 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 5941 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1347 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 5947 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1350 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 5953 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1353 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 5959 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1356 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 5965 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1359 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 5971 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 5975 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1364 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




