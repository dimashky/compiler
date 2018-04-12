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
	#include "../Symbol Table/Symbol.h"
	#include "../AST/Object/Procedure.h"
	#include "../AST/Node.h"
	#include "../AST/Expression/Expression.h"
	#include "../AST/Expression/AutoConst.h"
	#include "../AST/Expression/Identifier.h"
	#include "../AST/Expression/BinaryExpression.h"
	#include "../AST/Expression/UnaryExpression.h"
	#include "../AST/Statement/Statement.h"
	#include "../AST/Statement/Assignment.h"
	#include "../AST/Statement/While.h"
	#include "../AST/Statement/For.h"
	#include "../AST/Statement/Foreach.h"
	#include "../AST/Statement/Call.h"

	extern symbolParser* SPL;

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;
	extern Procedure* AST;

	Logger l("logs/parser.log");
	void yyerror(const char *);
		


#line 108 "yacc.tab.cpp" /* yacc.c:339  */

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
#line 50 "yacc.y" /* yacc.c:355  */

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

		vector<pair<Node*,int> >*args;
		pair<Node*,int>* arg;


		queue<Node*>*nodes,*exps;

		Procedure* proc;
		Symbol* symbol;
		Expression *exp;
		Statement* st;
		Operator op;
		Node* node;

		bool known_type;
        
		}r;
	

#line 326 "yacc.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 343 "yacc.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   3405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  267
/* YYNRULES -- Number of rules.  */
#define YYNRULES  608
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1011

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
       0,   147,   147,   148,   149,   150,   151,   152,   155,   156,
     162,   166,   171,   172,   176,   177,   181,   182,   183,   187,
     188,   192,   193,   194,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   209,   210,   213,   214,   217,   218,   221,
     222,   223,   226,   227,   230,   234,   238,   244,   252,   253,
     254,   257,   258,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   275,   278,   285,   286,   289,
     299,   307,   308,   311,   312,   315,   316,   319,   320,   323,
     330,   335,   338,   341,   344,   347,   356,   357,   360,   361,
     364,   365,   368,   371,   374,   377,   380,   383,   384,   385,
     386,   387,   390,   391,   392,   393,   396,   399,   402,   403,
     404,   405,   406,   407,   408,   416,   417,   418,   419,   420,
     421,   424,   425,   428,   429,   432,   433,   436,   437,   442,
     447,   455,   460,   465,   473,   478,   483,   491,   496,   501,
     506,   511,   516,   521,   529,   534,   539,   547,   552,   559,
     564,   572,   577,   585,   590,   598,   603,   612,   617,   625,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   646,   647,   650,   657,   661,   662,   663,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   681,   681,   682,   685,   686,   690,   691,   694,   697,
     700,   701,   702,   703,   706,   714,   721,   731,   736,   743,
     744,   745,   748,   751,   758,   767,   779,   788,   789,   790,
     791,   792,   793,   794,   796,   797,   798,   799,   800,   801,
     802,   805,   806,   807,   808,   809,   810,   811,   814,   815,
     818,   819,   819,   822,   826,   829,   832,   833,   836,   837,
     840,   843,   844,   847,   848,   851,   852,   853,   854,   857,
     860,   860,   861,   862,   862,   862,   866,   865,   874,   878,
     881,   886,   887,   896,   897,   905,   906,   913,   914,   917,
     920,   923,   924,   927,   931,   935,   936,   937,   938,   939,
     942,   943,   946,   947,   950,   951,   952,   953,   954,   955,
     958,   959,   962,   963,   966,   967,   970,   971,   972,   975,
     976,   979,   980,   981,   984,   985,   988,   991,   994,   997,
    1000,  1003,  1004,  1008,  1011,  1012,  1015,  1018,  1019,  1022,
    1023,  1026,  1027,  1030,  1031,  1034,  1034,  1038,  1039,  1043,
    1048,  1056,  1057,  1061,  1064,  1065,  1068,  1069,  1072,  1073,
    1076,  1077,  1080,  1081,  1084,  1085,  1088,  1089,  1090,  1091,
    1092,  1104,  1108,  1115,  1121,  1129,  1130,  1131,  1132,  1133,
    1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1153,
    1152,  1158,  1157,  1166,  1167,  1170,  1171,  1172,  1184,  1190,
    1199,  1203,  1204,  1207,  1208,  1211,  1212,  1213,  1214,  1215,
    1216,  1217,  1218,  1219,  1220,  1223,  1228,  1236,  1241,  1249,
    1254,  1253,  1261,  1260,  1267,  1266,  1273,  1271,  1282,  1286,
    1290,  1294,  1302,  1305,  1309,  1313,  1322,  1323,  1335,  1340,
    1347,  1352,  1359,  1367,  1377,  1388,  1396,  1407,  1408,  1409,
    1412,  1423,  1429,  1430,  1433,  1434,  1437,  1438,  1441,  1447,
    1453,  1454,  1457,  1458,  1464,  1465,  1468,  1474,  1480,  1486,
    1488,  1491,  1495,  1498,  1499,  1502,  1503,  1506,  1507,  1508,
    1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,
    1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1530,
    1531,  1535,  1534,  1541,  1542,  1545,  1546,  1562,  1565,  1566,
    1569,  1570,  1575,  1578,  1579,  1582,  1585,  1588,  1589,  1592,
    1593,  1596,  1597,  1598,  1599,  1600,  1601,  1602,  1603,  1605,
    1610,  1611,  1614,  1615,  1618,  1619,  1625,  1624,  1632,  1633,
    1636,  1639,  1642,  1643,  1646,  1647,  1650,  1651,  1652,  1653,
    1657,  1663,  1671,  1672,  1678,  1675,  1685,  1681,  1689,  1690,
    1691,  1692,  1695,  1700,  1701,  1706,  1709,  1710,  1713,  1716,
    1717,  1720,  1721,  1724,  1725,  1728,  1729,  1734,  1735,  1740,
    1743,  1744,  1747,  1748,  1751,  1752,  1755,  1758,  1759,  1760,
    1761,  1762,  1763,  1764,  1765,  1766,  1769,  1770,  1773,  1776,
    1777,  1780,  1783,  1790,  1793,  1796,  1799,  1802,  1805,  1813,
    1814,  1817,  1818,  1821,  1822,  1825,  1826,  1829,  1830
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
  "statement_expression", "selection_statement", "if_statement", "$@2",
  "do_if_exp", "switch_statement", "switch_block", "switch_sections_opt",
  "switch_sections", "switch_section", "switch_labels", "switch_label",
  "iteration_statement", "unsafe_statement", "while_statement", "$@3",
  "$@4", "$@5", "do_statement", "$@6", "do_init", "for_statement",
  "for_init", "for_initializer_opt", "for_condition_opt",
  "for_iterator_opt", "for_initializer", "for_condition", "for_iterator",
  "statement_expression_list", "foreach_statement", "jump_statement",
  "break_statement", "continue_statement", "goto_statement",
  "return_statement", "expression_opt", "throw_statement", "try_statement",
  "catch_clauses", "catch_clause", "identifier_opt", "finally_clause",
  "checked_statement", "unchecked_statement", "lock_statement",
  "using_statement", "resource_acquisition", "fixed_statement",
  "fixed_pointer_declarators", "fixed_pointer_declarator",
  "compilation_unit", "using_directives_opt", "attributes_opt",
  "namespace_member_declarations_opt", "namespace_declaration", "$@7",
  "comma_opt", "qualified_identifier", "qualifier", "namespace_body",
  "using_directives", "using_directive", "using_alias_directive",
  "using_namespace_directive", "namespace_member_declarations",
  "namespace_member_declaration", "type_declaration", "modifiers_opt",
  "modifiers", "modifier", "class_declaration", "$@8", "$@9",
  "class_base_opt", "class_base", "interface_type_list", "class_body",
  "class_member_declarations_opt", "class_member_declarations",
  "class_member_declaration", "constant_declaration", "field_declaration",
  "method_declaration", "method_header", "$@10", "$@11", "$@12", "$@13",
  "formal_parameter_list_opt", "return_type", "formal_parameter_list",
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
  "conversion_operator_declarator", "constructor_declaration", "$@14",
  "constructor_initializer_opt", "constructor_initializer",
  "destructor_declaration", "operator_body", "constructor_body",
  "struct_declaration", "struct_interfaces_opt", "struct_interfaces",
  "struct_body", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration", "$@15",
  "interface_base_opt", "interface_base", "interface_body",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration",
  "new_opt", "interface_property_declaration", "$@16",
  "interface_indexer_declaration", "$@17", "interface_accessors",
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

#define YYPACT_NINF -817

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-817)))

#define YYTABLE_NINF -594

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,    81,   133,   158,   -28,  -817,  -817,  -817,   -71,   100,
    -817,   181,  -817,  1203,  -817,    36,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,   158,  -817,   173,  -817,  -817,   242,
    -817,  -817,   170,  -817,  -817,  -817,   242,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,   424,  3321,
    -817,  3292,  -817,  -817,   652,   177,   104,  -817,  -817,  -817,
    -817,  1711,   333,   359,   366,   391,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,   242,  -817,   235,  -817,
    -817,   302,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,   320,  -817,   331,
    -817,   455,  -817,  -817,  -817,  -817,  -817,  -817,   455,   455,
     469,   347,   418,   432,   446,  -817,  -817,   341,  -817,   411,
    -817,   -28,   388,  -817,  -817,  -817,  -817,  -817,  -817,   445,
     579,   458,  -817,   242,  -817,  -817,   242,   473,  -817,    59,
     560,  -817,   240,  -817,  2747,  -817,  -817,   200,  -817,  -817,
     202,  -817,   243,   388,  -817,   494,   495,   494,   370,   388,
     521,   494,   527,   635,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,   222,   538,  -817,  3208,  -817,   540,  -817,  -817,   542,
     561,  2460,  2747,  2747,  2747,  2747,  2747,  2747,  2747,  2747,
    -817,  -817,   564,   571,   313,   585,  -817,  -817,  -817,  -817,
     566,   592,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,   -10,  -817,  -817,  -817,  1218,
    -817,   211,   477,   493,    35,   497,   576,   573,   578,   557,
     -19,  -817,  -817,  -817,   -46,   597,   400,   375,   596,   603,
     604,  -817,   582,  -817,   583,   700,   605,   612,  -817,  -817,
     242,   407,   388,  3321,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,   609,   425,  -817,  -817,   242,   440,
     388,   388,  -817,  2747,   707,  2747,   320,   217,   614,    63,
    3208,  3252,  2747,    31,    39,    68,   468,   611,   308,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,   711,   714,  2747,
     716,  2259,  -817,  2747,  -817,  -817,   719,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  2747,  2747,
    2747,  2747,  2747,  2747,  2747,  2747,  3208,  3208,  2747,  2747,
    2747,  2747,  2747,  2747,  2747,  2747,  2747,  2747,  2747,  2747,
    2747,  2259,  -817,  -817,  3208,  -817,  3208,   113,   158,   158,
    2345,  2345,   606,  -817,   450,  -817,   675,   624,   451,  -817,
    -817,  -817,  -817,  -817,  -817,  3164,  -817,  -817,   494,  3321,
    -817,   626,   456,  -817,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,   386,  -817,   625,  2259,  2747,
    2345,  -817,   171,   316,   338,   627,  -817,  -817,   629,    31,
    -817,   631,   633,  2546,  2951,    31,  -817,  -817,   422,  -817,
    2747,  2747,   632,  -817,   643,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,   211,   211,   477,   477,   331,   331,   493,
     493,   493,   493,    35,    35,   497,   576,   573,   578,   640,
     557,   502,   647,    58,    61,  -817,  -817,   604,  -817,   582,
    -817,   583,  3208,  -817,  -817,  -817,  -817,  -817,  2747,  -817,
    -817,  -817,   460,  -817,  -817,   -34,  3208,  3208,   699,   701,
      73,    37,  -817,   344,  -817,  -817,  2871,  -817,  -817,  -817,
    -817,   649,   505,  -817,   654,   660,  -817,  -817,  -817,  -817,
    2747,  -817,  2747,  2747,  2747,  -817,   655,  -817,  -817,  -817,
    -817,  2259,  -817,  2747,  -817,  -817,  -817,  -817,   206,  -817,
    -817,  3208,    75,    55,   202,    78,    79,  3208,  3208,   658,
     213,  2947,   663,    99,  -817,   662,    44,   667,   668,  1548,
    -817,  -817,  -817,   765,  -817,   455,  -817,  2144,  -817,  -817,
    -817,  -817,  2747,  -817,  -817,  2747,    80,   670,   671,   672,
     673,   657,   111,  -817,   317,  -817,   315,   318,  2791,  2345,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,   676,   158,  -817,   770,  -817,  3084,   679,  -817,
     158,   158,   674,  1913,   680,   681,   455,  -817,  -817,  -817,
     686,   356,   202,   202,   687,   158,  -817,  2747,  -817,   782,
    -817,  -817,   691,  3208,  3208,   689,   690,  -817,  3208,   510,
    -817,  -817,   678,  -817,   692,   693,   158,   511,   567,   702,
     461,   476,  -817,  1311,   119,     4,  3208,   121,  -817,   698,
    -817,   244,   392,   244,   704,  2747,   244,  2747,   694,   404,
     694,   705,   290,  -817,    84,   564,   571,   526,  1249,  1407,
    1347,   228,   444,  1218,   148,  -817,  -817,  -817,   703,  1913,
    -817,  -817,  -817,   230,   241,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  2029,  -817,   244,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,    66,
     709,  -817,  -817,  -817,  -817,   712,  -817,  -817,   713,   715,
     158,   517,   695,  -817,  -817,   158,    86,    87,   708,   717,
      88,   158,  -817,   718,   720,   721,  -817,  -817,  -817,  -817,
     723,  -817,  -817,   722,  -817,  -817,  -817,  -817,  1913,  2747,
    -817,  -817,  -817,    78,  -817,  -817,  3208,  -817,  -817,  3208,
     251,  2747,   252,  2029,  2747,  2747,  -817,   256,  2747,   260,
     232,  -817,  -817,  2661,  -817,  1667,   731,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,  1383,   735,  2661,
     694,  -817,   356,   356,   580,   728,  -817,    32,   357,  -817,
     438,   729,   158,   158,   732,   733,  -817,   694,  -817,   694,
     381,  -817,   694,  -817,   694,  -817,   390,   390,  -817,  -817,
      71,   737,    90,    50,  -817,  -817,   262,  -817,  -817,   774,
    -817,    71,   739,  -817,  -817,    71,  -817,  -817,   412,   694,
     232,  -817,  -817,  -817,  -817,   740,  2747,   741,   743,   706,
      97,   110,   112,   127,   186,   187,  -817,  -817,  -817,   263,
    -817,   750,  -817,  -817,  -817,   356,   356,  -817,   748,   738,
     747,  -817,  -817,  -817,  -817,  -817,  -817,   755,  -817,   758,
    -817,  -817,  -817,  -817,  -817,  3208,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,   742,   406,  -817,
     246,  2029,  -817,  -817,  -817,  -817,  2029,   757,    59,  -817,
    -817,  -817,  -817,  2029,   857,  2029,  -817,  2747,  -817,  -817,
    2747,  2747,   484,   499,  -817,   158,  2259,  2259,   694,   694,
    -817,    91,  -817,  -817,  2747,   856,  2029,  -817,  2029,  -817,
     401,  -817,   861,   861,  -817,  2029,  -817,  2029,  -817,  -817,
     263,  -817,  -817,   772,   775,  -817,   768,   769,   771,  -817,
    -817,   773,  -817,  -817,  -817,  -817,  2747,   766,   776,   401,
    -817,  1797,  -817,  -817,   777,   778,  -817,  -817,   779,  2747,
     356,   356,  -817,  -817,  -817,  -817,  -817,  -817,   781,  -817,
    -817,  -817,  1913,  -817,   694,   694,  -817,   783,    71,  -817,
     750,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  2029,  -817,
    -817
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     329,     0,     0,   331,   330,   344,   346,   347,   339,     0,
      10,     0,     1,   361,   354,   331,   352,   355,   356,   357,
     358,   359,   360,   332,   569,   570,     0,   345,   341,     0,
     351,   350,   340,   365,   366,   367,     0,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,     0,   362,
     363,   361,   353,   571,   574,   339,     0,   342,   335,   600,
     599,     0,     0,     0,     0,     0,   364,   579,   584,   577,
     578,   580,   581,   582,   583,   585,     0,   575,     0,   349,
     348,     0,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   427,    15,   426,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   556,   528,   503,   383,   591,    11,     0,   586,   589,
     576,   329,   337,    38,    37,    44,    40,    39,    41,     0,
       0,     0,   557,     0,   526,   529,     0,     0,   504,     0,
     379,   384,     0,   594,    75,   588,   590,   331,   338,   336,
     331,   558,   331,   337,   388,   530,     0,   505,   331,   337,
     385,   386,     0,     0,   594,   587,   572,     3,     4,     5,
       6,     0,     0,     9,     0,     7,     0,    79,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     2,     0,     0,    97,    52,    51,    55,    56,    57,
       0,    76,    58,    59,    99,   100,    60,    84,    54,    61,
      63,    64,   101,   113,    62,   105,   114,   111,   112,   127,
     104,   131,   134,   137,   144,   147,   149,   151,   153,   155,
     157,   171,   172,    77,    98,     0,   331,   437,     0,   423,
     424,   428,   432,   430,   433,     0,     0,   562,   563,   555,
       0,   331,   337,   361,   519,   511,   512,   513,   409,   514,
     515,   516,   517,   518,     0,   331,   509,   502,     0,   331,
     337,   337,   573,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,   121,   121,   121,   131,     0,    98,   108,
     109,   110,    95,   102,   103,   106,   107,     0,     0,     0,
       0,    71,   592,     0,    82,    83,     0,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,   343,   439,     0,   438,     0,     0,   331,   331,
       0,     0,   565,   559,   331,   389,   542,     0,   331,   534,
     536,   537,   539,   538,   527,     0,   506,   510,   387,   361,
     404,     0,   331,   393,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   380,   382,     0,    80,     0,    71,     0,
     522,    87,     0,     0,     0,     0,   126,   125,     0,   122,
     123,     0,     0,     0,    65,   121,    67,    68,     0,    66,
       0,     0,    72,    46,     0,    48,    78,    94,   159,   128,
     129,   130,   127,   132,   133,   135,   136,   143,   142,   139,
     138,   140,   141,   145,   146,   148,   150,   152,   154,     0,
     156,     0,     0,     0,     0,   568,   567,   425,   429,     0,
     431,     0,     0,   209,   435,   211,   210,   436,     0,   560,
     564,   543,     0,   531,   535,   339,     0,     0,     0,     0,
       0,     0,   597,     0,   463,   464,     0,   390,   394,    81,
      92,     0,     0,   524,     0,   523,    96,    91,    90,    93,
       0,   124,     0,     0,     0,   115,     0,    73,    50,    45,
      49,     0,    69,     0,    74,    70,   440,   434,     0,   173,
     566,     0,     0,     0,   331,     0,     0,     0,     0,     0,
     207,     0,     0,     0,   205,   597,     0,     0,     0,     0,
     499,   498,   462,     0,    85,    42,   520,     0,   120,   118,
     119,   116,     0,    47,   158,     0,     0,     0,   597,     0,
       0,     0,     0,   214,     0,   595,     0,     0,     0,     0,
     474,   473,   485,   486,   467,   468,   475,   476,   477,   478,
     479,   469,   470,   480,   481,   482,   483,   484,   488,   487,
     471,   472,     0,   331,   408,     0,   407,     0,     0,   461,
     331,   331,     0,   194,     0,    88,    42,   521,   525,   117,
       0,     0,   331,   331,     0,   331,   491,     0,   406,     0,
     405,   452,     0,     0,     0,     0,     0,   208,     0,     0,
     432,   433,   207,   206,     0,     0,   331,     0,     0,     0,
     331,   331,   193,     0,     0,     0,     0,     0,   268,     0,
     270,     0,     0,     0,     0,   302,     0,   302,     0,     0,
       0,     0,     0,   198,     0,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   177,   178,     0,   195,
     179,   175,   176,     0,     0,   180,   181,   238,   239,   182,
     189,   255,   256,     0,   257,     0,   258,   183,   285,   286,
     287,   288,   289,   184,   185,   186,   187,   188,   190,    98,
       0,    86,    89,    43,   212,     0,   553,   552,     0,     0,
     331,     0,   493,   216,   215,   331,     0,     0,   416,   412,
       0,   331,   459,   414,   410,     0,   460,   598,   598,   598,
       0,   442,   445,     0,   443,   447,   608,   607,     0,     0,
     291,   290,   317,     0,   293,   292,     0,   602,   601,     0,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
       0,   318,   259,     0,   263,     0,   204,   224,   217,   227,
     220,   228,   221,   225,   218,   229,   222,   230,   223,   226,
     219,   192,   197,   202,   200,   203,   201,     0,     0,   271,
       0,   554,     0,     0,     0,     0,   597,     0,     0,   494,
       0,     0,   331,   331,     0,     0,   421,     0,   419,     0,
       0,   420,     0,   418,     0,   598,     0,     0,   458,   199,
       0,   213,     0,     0,   297,   294,     0,   299,   296,   240,
     174,     0,     0,   301,   300,     0,   305,   304,     0,     0,
     306,   309,   307,   322,   321,     0,     0,     0,     0,     0,
      56,    99,   100,    84,   111,   112,   233,   277,   281,     0,
     272,   278,   497,   541,   540,     0,     0,   598,     0,     0,
       0,   501,   500,   492,   596,   596,   596,     0,   454,     0,
     455,   490,   489,   417,   413,     0,   465,   415,   411,   441,
     451,   450,   597,   597,   604,   603,   284,     0,     0,   324,
       0,     0,   298,   295,   241,   243,     0,     0,     0,   313,
     316,   310,   308,     0,     0,     0,   260,     0,   606,   605,
     273,     0,   331,   331,   544,   331,    71,    71,     0,     0,
     453,     0,   448,   449,     0,     0,     0,   283,     0,   319,
     246,   244,   314,   314,   320,     0,   262,     0,   266,   279,
       0,   274,   282,     0,     0,   545,     0,     0,     0,   595,
     595,     0,   326,   325,   323,   242,     0,     0,     0,   247,
     248,     0,   251,   315,     0,     0,   264,   261,     0,   275,
       0,     0,   598,   495,   496,   456,   457,   466,     0,   254,
     245,   249,   250,   252,     0,     0,   265,     0,     0,   276,
     280,   550,   551,   546,   253,   312,   311,   267,     0,   547,
     269
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -817,  -817,  -817,  -817,   -75,   153,   724,  -817,   -30,  -817,
     745,  -817,   -58,  -817,   726,   282,   -96,   472,  -817,   378,
    -817,  -817,  -817,  -817,   114,  -337,  -817,  -817,  -253,  -817,
    -817,   156,   218,  -817,   245,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,   486,   327,   387,    52,  -817,  -245,
    -817,   496,  -165,   351,   201,   345,   559,   562,   568,   569,
     572,  -817,  -817,   415,  -817,   481,  -599,  -739,  -660,  -607,
      47,  -817,  -817,   -66,  -817,  -817,  -817,  -716,  -487,   311,
    -333,  -817,  -817,   165,   301,  -817,    -9,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,   -54,  -817,   -55,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,    94,  -817,
    -817,  -817,  -817,  -817,  -817,   -61,  -817,  -817,  -817,  -817,
    -817,  -817,   272,  -817,  -817,  -817,    82,   -22,    83,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,   -11,  -817,   804,     7,
    -817,  -817,  -817,  -115,    -1,   462,  -817,  -817,   922,  -817,
    -817,   780,    -4,  -144,  -226,  -817,   882,  -817,  -817,  -817,
    -817,  -817,  -106,  -817,  -817,  -817,   563,  -219,  -152,  -151,
    -817,  -817,  -817,  -817,  -817,  -111,  -817,  -481,   588,  -331,
    -328,   589,  -817,  -324,     6,   314,  -817,  -817,   306,   312,
     126,    26,  -817,   141,   144,    33,  -817,  -817,    40,  -817,
    -817,  -817,  -817,    41,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,   682,  -277,  -817,  -817,
    -817,  -817,  -817,  -817,  -817,  -817,  -817,   590,  -817,  -817,
    -817,  -817,  -817,  -817,    24,  -817,  -769,  -817,  -817,  -817,
    -817,  -817,  -817,   598,  -817,  -817,  -817,   926,  -817,  -817,
    -817,  -817,   809,  -817,  -817,  -817,  -817,   790,  -276,  -190,
    -493,  -722,  -817,  -373,  -816,     5,  -817
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   190,   191,     9,    98,   654,   100,   101,   192,   103,
     104,   105,   193,   107,   108,   595,   397,   498,   412,   413,
     194,   195,   196,   197,   198,   414,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   701,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   398,
     399,   400,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   318,   415,   510,   831,   665,   666,
     667,   593,   668,   669,   670,   671,   672,   673,   523,   524,
     454,   455,   674,   552,   553,   675,   858,   676,   677,   938,
     753,   678,   941,   968,   969,   970,   971,   972,   679,   680,
     681,   947,   846,   996,   682,   978,   683,   684,   685,   859,
     950,   998,   860,   951,   999,   861,   686,   687,   688,   689,
     690,   691,   757,   692,   693,   840,   841,   974,   842,   694,
     695,   696,   697,   845,   698,   898,   899,     2,     3,   237,
     235,    14,    81,   149,   234,    11,   122,     4,     5,     6,
       7,    15,    16,    17,    48,    49,    50,    18,   162,   163,
     140,   141,   155,   270,   371,   372,   373,   255,   256,   257,
     258,   814,   809,   812,   807,   238,   110,   239,   240,   241,
     242,   243,   346,   244,   259,   629,   731,   734,   630,   631,
     892,   260,   801,   802,   803,   261,   472,   527,   262,   473,
     474,   582,   475,   263,   712,   798,   799,   382,   532,   873,
      19,   137,   138,   159,   264,   265,   266,   456,   484,   485,
      20,   156,   134,   135,   252,   357,   358,   359,   360,   462,
     361,   955,   362,  1009,   795,   363,   707,    21,   131,   132,
     153,   246,   247,   248,    22,    23,    24,    25,    76,    77,
      78,   117,   118,   145,   119,   146,    26,   166,   612,   928,
     528,   816,    65,   749,   896,   920,   739
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   115,   391,   106,   442,   126,   817,   818,   713,   782,
      13,    52,   127,   128,   254,   905,   286,   448,   457,   907,
     385,   449,    51,   863,   864,   451,   848,   365,    56,   554,
     157,   102,   588,   161,   125,    58,  -328,    28,   249,   401,
     402,   520,   125,   869,   267,   326,   408,   844,    32,    29,
     374,   481,   340,     1,   900,   604,   341,   483,   154,   548,
     109,   154,   506,    55,   154,   507,   125,   115,   514,   125,
     -11,   125,   894,   857,    28,   116,   788,    55,   819,   547,
     327,   160,   551,   520,   601,     8,   640,   441,   622,   521,
     804,   805,   810,   889,   897,   961,   922,   923,  -231,   338,
     584,    30,   619,   870,   529,    79,   275,   914,   522,   627,
      90,  -234,   608,  -235,   445,   589,   106,   375,   376,   339,
     740,   254,   744,   285,   711,   370,   549,    93,  -232,   304,
     305,   306,   116,    12,  -593,   116,   482,   364,   116,   328,
     329,   116,   396,   476,   102,   924,   829,   297,   124,   779,
     396,   284,   826,   374,    51,   383,   384,   423,   424,   245,
     496,   124,   368,   390,   340,   253,   124,   766,   341,   124,
     330,   331,   124,   109,   895,   355,   298,   -11,   948,   396,
     288,   949,  1008,   127,   123,    32,   123,  -236,  -237,   124,
     124,   124,   405,   154,  -231,   124,   585,   124,   124,   124,
    -231,   124,   124,  -231,   598,   586,    31,  -234,   609,  -235,
      80,  1001,  1002,  -234,    99,  -235,  -234,   610,  -235,   446,
     375,   376,   106,   106,  -232,   741,   617,   745,   370,   775,
    -232,   783,    52,  -232,   289,   290,   291,   292,   293,   294,
     295,   296,   785,    51,    55,   747,    55,   736,   838,   116,
     102,   102,   824,   827,   780,   620,  -593,   833,   356,   621,
    1003,   836,   620,   902,   918,   839,   621,   116,   106,   106,
     754,    54,   253,   758,   486,   377,   369,   620,    57,   109,
     109,   621,   124,  -236,  -237,    28,   106,   737,   106,  -236,
    -237,   764,  -236,  -237,   937,   378,   102,   102,  -593,   939,
    -593,  -333,   379,   868,   545,  -422,   944,   106,   946,   380,
     381,   125,   789,  -339,   102,  -339,   102,   124,   702,   388,
     273,    28,   319,   320,   321,   109,   109,   277,   124,   964,
     274,   965,   782,   559,   776,   102,   784,   111,   976,   164,
     977,  -593,   120,   109,  -561,   109,   748,   786,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,   825,   828,  -111,
    -111,   245,   834,   112,   109,   356,   837,   988,   903,   919,
     113,   419,   420,   421,   422,   422,   422,   422,   377,   369,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     448,   422,   765,   620,   106,   114,   750,   621,   378,   932,
     933,  1010,   121,   550,   106,   379,   340,   751,   106,   106,
     341,   299,   380,   381,   585,   752,   966,   613,   106,   487,
     614,   300,   102,   611,   967,    59,   124,   123,   343,   124,
     344,   123,   102,   392,   394,   345,   102,   102,   142,   596,
     143,   488,   124,    60,   529,   777,   102,   616,    61,   124,
     530,   109,    62,   106,   130,   419,   705,   529,   125,   106,
     106,   109,   706,   871,    55,   109,   109,    63,  -593,   519,
     525,  -507,    82,   129,    83,   109,   625,    84,   885,   427,
     428,   102,    85,   303,   886,   479,    86,   102,   102,   511,
     529,   708,   709,    64,   148,    87,   890,   443,  -593,   444,
     596,  -334,    88,   935,   529,  -593,   282,    89,  -532,   936,
     109,    90,   529,   144,   908,   555,   109,   109,   471,   303,
     531,   497,    91,  -593,    92,   133,  -508,   767,    93,   429,
     430,   431,   432,   874,   875,   656,    94,    95,  -593,   136,
      96,  -391,   538,   512,   539,   540,   541,   150,  -593,  -593,
     778,   459,  -533,   139,  -593,   106,   106,  -392,   152,  -593,
     106,  -381,  -444,   655,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,   158,  -593,  -112,  -112,  -446,   106,   403,
     320,   321,  -593,   102,   102,  -548,   322,   323,   102,   957,
     958,   250,   699,    83,   599,   251,    84,  -593,   628,   303,
    -549,   504,   303,   128,   535,   508,   102,   721,   721,   722,
     726,   656,   109,   109,   721,   513,   796,   109,   268,   515,
     516,    88,   324,   325,   -56,   233,    89,   269,   -56,   471,
     332,   333,   768,   628,   -56,   109,   271,   730,   733,   655,
     275,    91,   280,    92,   281,   663,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,    94,    95,   -56,   -56,    96,
     727,   728,   287,   282,   546,   -56,   -56,   -56,   699,   302,
     556,   557,   297,   865,   866,   425,   426,   433,   434,   298,
     656,    67,   742,   985,   986,   929,   930,   301,   106,   303,
     334,   106,   335,   336,   337,   760,   761,   762,   342,   347,
     348,   349,   350,   351,   352,   656,   353,   657,   655,   354,
     366,   386,   389,    68,   404,   406,   102,   794,   407,   102,
     409,   663,   800,   417,   461,   463,   458,   477,   480,   501,
     489,   656,   490,   655,   492,   663,   493,   699,    69,    70,
      71,    72,    73,    74,    75,   109,   502,   503,   109,   658,
     505,   517,   534,   518,   233,   536,   387,   537,   542,   655,
     558,   583,   699,   395,   587,   590,   716,   717,   591,   594,
     605,   720,   602,   603,   622,   632,   606,   607,   618,   626,
     233,   390,   700,   657,   416,   704,   551,   710,   699,   743,
     663,   715,   718,   719,   529,   723,   724,   657,   559,   418,
     746,   904,   797,   729,   781,   663,   755,   763,   917,   877,
     879,   659,   790,   791,   806,   727,   792,   728,   793,   439,
     849,   233,   815,   808,   811,   658,   813,   106,   585,   867,
     876,   453,   453,   942,   609,   881,   882,   862,   660,   658,
     926,   663,   906,   913,   915,   872,   916,   921,   925,   927,
     943,   875,   657,   874,   883,   102,   884,   940,   945,   887,
     897,   888,   934,   891,   891,   973,   980,   657,   981,   982,
     233,   453,   983,   989,   984,   151,   987,   990,   703,   543,
     994,   995,   997,   500,   109,   909,   910,   659,  1004,  1007,
     495,   499,   499,   435,   658,   491,   623,   436,   278,   822,
     279,   659,   823,   850,   437,   992,   438,   116,   821,   658,
     714,   440,   952,   656,   660,   991,   993,   901,  1000,   759,
     661,   975,   911,   912,   963,   147,    27,   236,   660,   953,
     954,    66,   794,   526,   656,   478,   447,   735,   450,   509,
     725,   655,   732,   893,   880,   851,   878,   367,   464,   956,
      53,   165,   460,   663,   272,   979,   659,     0,   663,     0,
       0,     0,   655,     0,     0,   663,     0,   663,     0,     0,
     699,   659,     0,   663,     0,   959,   960,     0,     0,     0,
     662,     0,     0,   660,   544,     0,     0,     0,   663,     0,
     663,   699,     0,     0,     0,     0,   661,   663,   660,   663,
       0,     0,     0,     0,     0,     0,     0,   852,   664,     0,
     661,     0,     0,     0,     0,   657,     0,     0,   453,     0,
     657,     0,     0,   663,     0,     0,   600,   657,     0,   657,
       0,   663,     0,     0,   853,   850,     0,     0,   931,     0,
     453,  1005,  1006,     0,   663,     0,     0,     0,     0,     0,
     657,     0,   657,     0,     0,     0,   662,   658,     0,   657,
     663,   657,   658,     0,     0,   661,     0,     0,     0,   658,
     662,   658,     0,     0,     0,     0,     0,   851,     0,     0,
     661,     0,     0,     0,   664,   657,     0,     0,   509,     0,
       0,     0,   658,   850,   658,     0,     0,     0,   664,     0,
       0,   658,     0,   658,     0,     0,   657,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   854,     0,     0,   659,
       0,     0,   657,     0,   659,   662,   756,   658,   756,     0,
       0,   659,     0,   659,     0,   851,     0,     0,     0,   852,
     662,     0,     0,     0,     0,     0,   660,     0,   658,     0,
       0,   660,     0,   664,   659,     0,   659,     0,   660,     0,
     660,     0,     0,   659,   658,   659,   853,     0,   664,     0,
       0,     0,     0,     0,     0,     0,   855,     0,     0,     0,
       0,   660,     0,   660,     0,     0,     0,     0,     0,   659,
     660,     0,   660,     0,     0,     0,     0,   852,     0,     0,
       0,     0,     0,  -327,   856,     0,     0,     0,     0,     0,
     659,     0,    33,     0,     0,     0,   660,     0,     0,     0,
     820,     0,     0,     0,   853,     0,   659,     0,   661,     0,
       0,     0,   509,   661,    34,   830,   832,   660,     0,   835,
     661,     0,   661,     0,   843,     0,   830,    35,   854,     0,
     769,    36,    37,   660,     0,     0,     0,    38,     0,    39,
      40,    41,    42,   661,     0,   661,    43,     0,     0,     0,
      44,     0,   661,     0,   661,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,    46,     0,    47,   662,     0,
       0,     0,     0,   662,     0,     0,     0,     0,   661,     0,
     662,     0,   662,     0,     0,     0,   854,     0,   855,     0,
       0,     0,   736,     0,  -339,  -339,   664,     0,     0,   661,
       0,   664,     0,   662,     0,   662,     0,   830,   664,     0,
     664,     0,   662,     0,   662,   661,   856,     0,   307,   308,
     309,   310,   311,   312,   313,   314,   315,     0,   773,   316,
     317,   664,   737,   664,     0,   770,     0,     0,   662,     0,
     664,     0,   664,     0,     0,     0,   855,     0,     0,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,     0,   662,
     -99,   -99,     0,     0,   736,     0,   664,     0,   -99,   -99,
     -99,     0,     0,     0,   856,   662,     0,     0,   830,     0,
       0,   830,     0,     0,     0,     0,     0,   664,   771,  -339,
       0,     0,     0,  -339,     0,   962,     0,     0,   738,    28,
       0,     0,  -339,   664,   737,     0,     0,     0,     0,     0,
       0,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
       0,     0,  -339,  -339,     0,   -84,     0,   509,     0,   -84,
    -339,  -339,  -339,   774,     0,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,   -84,
       0,  -339,     0,     0,     0,  -339,   -84,   -84,   -84,     0,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,     0,   772,  -339,  -339,     0,     0,     0,     0,
       0,     0,  -339,  -339,  -339,     0,     0,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,     0,     0,  -100,  -100,
       0,     0,     0,     0,     0,     0,  -100,  -100,  -100,   592,
       0,     0,  -191,  -191,  -191,  -191,  -191,     0,     0,  -191,
    -191,  -191,  -191,     0,     0,  -191,  -191,     0,  -191,  -191,
    -191,     0,     0,  -191,  -191,     0,     0,     0,     0,     0,
    -191,     0,  -191,  -191,  -191,  -191,  -191,  -191,     0,     0,
    -191,     0,     0,     0,  -191,  -191,     0,  -191,  -191,  -191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -191,
    -191,     0,  -191,  -191,     0,     0,  -191,     0,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
       0,  -191,     0,  -191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -191,  -191,
    -191,     0,     0,     0,  -191,     0,     0,  -191,  -191,  -191,
       0,     0,  -191,     0,  -191,  -191,     0,     0,   847,     0,
       0,    55,   167,   168,   169,   170,     0,     0,   171,    82,
       0,    83,     0,     0,    84,   172,     0,  -191,  -191,    85,
       0,     0,     0,    86,     0,     0,     0,     0,     0,   173,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    55,   174,   175,    90,     0,
       0,     0,     0,    82,     0,    83,     0,     0,    84,    91,
       0,    92,   176,    85,     0,    93,     0,    86,   177,     0,
     178,     0,   179,    94,    95,   180,    87,    96,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,   181,
       0,     0,     0,    91,     0,    92,   182,   183,   184,    93,
       0,   185,     0,   186,   187,     0,     0,    94,    95,     0,
       0,    96,     0,     0,    97,     0,     0,     0,     0,     0,
       0,   633,   167,   168,   169,   170,   188,   189,   171,    82,
     634,    83,   966,     0,    84,   635,     0,   636,   637,    85,
     967,     0,   638,    86,     0,     0,     0,     0,     0,   173,
       0,   639,    87,   640,   641,   642,   643,     0,     0,    88,
       0,     0,     0,   644,    89,     0,   174,   175,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   645,    91,
       0,    92,   176,     0,     0,    93,     0,   646,   177,   647,
     178,   648,   179,    94,    95,   649,   650,    96,   651,     0,
     276,     0,   652,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   529,     0,   181,
       0,     0,     0,   653,     0,     0,   182,   183,   184,     0,
       0,   185,     0,   186,   187,     0,     0,   633,   167,   168,
     169,   170,     0,     0,   171,    82,   634,    83,     0,     0,
      84,   635,     0,   636,   637,    85,   188,   189,   638,    86,
       0,     0,     0,     0,     0,   173,     0,   639,    87,   640,
     641,   642,   643,     0,     0,    88,     0,     0,     0,   644,
      89,     0,   174,   175,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   645,    91,     0,    92,   176,     0,
       0,    93,     0,   646,   177,   647,   178,   648,   179,    94,
      95,   649,   650,    96,   651,     0,   276,     0,   652,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   529,     0,   181,     0,     0,     0,   653,
       0,     0,   182,   183,   184,     0,     0,   185,     0,   186,
     187,     0,     0,   787,   167,   168,   169,   170,     0,     0,
     171,    82,   634,    83,     0,     0,    84,   635,     0,     0,
     637,    85,   188,   189,   638,    86,     0,     0,     0,     0,
       0,   173,     0,   639,    87,   640,   641,   642,   643,     0,
       0,    88,     0,     0,     0,   644,    89,     0,   174,   175,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     645,    91,     0,    92,   176,     0,     0,    93,     0,   646,
     177,   647,   178,   648,   179,    94,    95,   649,   650,    96,
     651,     0,     0,     0,   652,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   529,
       0,   181,     0,     0,     0,   653,     0,     0,   182,   183,
     184,     0,     0,   185,     0,   186,   187,     0,    55,   167,
     168,   169,   170,     0,     0,   171,    82,     0,    83,     0,
       0,    84,   172,     0,     0,     0,    85,     0,   188,   189,
      86,     0,     0,     0,     0,     0,   173,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,     0,   174,   175,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,   176,
     452,     0,    93,     0,     0,   177,     0,   178,     0,   179,
      94,    95,   180,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   390,   597,   181,     0,     0,     0,
       0,     0,     0,   182,   183,   184,     0,     0,   185,     0,
     186,   187,     0,    55,   167,   168,   169,   170,     0,     0,
     171,    82,     0,    83,     0,     0,    84,   172,     0,     0,
       0,    85,     0,   188,   189,    86,     0,     0,     0,     0,
       0,   173,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,     0,   174,   175,
      90,     0,   410,     0,     0,     0,     0,     0,     0,   411,
       0,    91,     0,    92,   176,     0,     0,    93,     0,     0,
     177,     0,   178,     0,   179,    94,    95,   180,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
     167,   168,   169,   170,     0,     0,   171,    82,     0,    83,
       0,   181,    84,   172,     0,     0,     0,    85,   182,   183,
     184,    86,     0,   185,     0,   186,   187,   173,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,     0,   174,   175,    90,     0,   188,   189,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
     176,   452,     0,    93,     0,     0,   177,     0,   178,     0,
     179,    94,    95,   180,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   390,     0,   181,     0,     0,
       0,     0,     0,     0,   182,   183,   184,     0,     0,   185,
       0,   186,   187,     0,    55,   167,   168,   169,   170,     0,
       0,   171,    82,     0,    83,     0,     0,    84,   172,     0,
       0,     0,    85,     0,   188,   189,    86,     0,     0,     0,
       0,     0,   173,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,     0,   174,
     175,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    92,   176,     0,     0,    93,     0,
       0,   177,     0,   178,     0,   179,    94,    95,   180,     0,
      96,     0,     0,   283,     0,     0,     0,     0,     0,     0,
      55,   167,   168,   169,   170,     0,     0,   171,    82,     0,
      83,     0,   181,    84,   172,     0,     0,     0,    85,   182,
     183,   184,    86,     0,   185,     0,   186,   187,   173,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,     0,   174,   175,    90,     0,   188,
     189,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,   176,     0,     0,    93,     0,     0,   177,     0,   178,
       0,   179,    94,    95,   180,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,   494,
       0,     0,     0,     0,     0,   182,   183,   184,     0,     0,
     185,     0,   186,   187,     0,    55,   167,   168,   169,   170,
       0,     0,   171,    82,     0,    83,     0,     0,    84,   172,
       0,     0,     0,    85,     0,   188,   189,    86,     0,     0,
       0,     0,     0,   173,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,     0,
     174,   175,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,   176,     0,     0,    93,
       0,     0,   177,     0,   178,     0,   179,    94,    95,   180,
       0,    96,     0,     0,   276,     0,     0,     0,     0,     0,
       0,    55,   167,   168,   169,   170,     0,     0,   171,    82,
       0,    83,     0,   181,    84,   172,     0,     0,     0,    85,
     182,   183,   184,    86,     0,   185,     0,   186,   187,   173,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,   615,     0,    89,  -331,   174,   175,    90,     0,
     188,   189,     0,  -331,     0,  -331,     0,     0,  -331,    91,
       0,    92,   176,  -331,     0,    93,     0,  -331,   177,     0,
     178,     0,   179,    94,    95,   180,  -331,    96,     0,     0,
       0,     0,     0,  -331,     0,     0,     0,     0,  -331,     0,
       0,     0,  -331,     0,  -331,     0,  -331,     0,     0,   181,
       0,  -331,     0,  -331,     0,  -331,   182,   183,   184,  -331,
       0,   185,     0,   186,   187,     0,     0,  -331,  -331,     0,
       0,  -331,    59,     0,  -331,   465,     0,     0,     0,     0,
       0,     0,     0,    82,     0,    83,   188,   189,    84,  -593,
      60,   466,     0,    85,  -422,    61,     0,    86,     0,    62,
     467,   468,     0,     0,     0,     0,    87,     0,     0,     0,
       0,   469,     0,    88,    63,     0,     0,     0,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,     0,     0,     0,    93,
      64,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,    96,     0,     0,   470,    55,   167,   168,   169,   170,
       0,     0,   171,    82,     0,    83,     0,     0,    84,   172,
       0,     0,     0,    85,     0,     0,     0,    86,     0,   560,
       0,     0,     0,   173,     0,     0,    87,     0,   533,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,     0,
     174,   175,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,   176,     0,     0,    93,
     561,     0,   177,     0,   178,     0,   179,    94,    95,   180,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   562,   563,   181,     0,     0,   564,   565,   566,   567,
     568,   569,   570,   571,   572,     0,   573,   186,   187,     0,
       0,     0,     0,     0,     0,     0,   574,   575,     0,     0,
     576,   577,   578,   579,     0,   624,   580,   581,  -331,     0,
       0,     0,     0,     0,     0,     0,  -331,     0,  -331,     0,
       0,  -331,     0,     0,     0,     0,  -331,     0,     0,     0,
    -331,     0,     0,     0,     0,     0,     0,     0,     0,  -331,
       0,     0,     0,     0,     0,     0,  -331,     0,     0,     0,
       0,  -331,     0,     0,     0,  -331,     0,  -331,     0,  -331,
       0,     0,     0,     0,  -331,     0,  -331,     0,  -331,     0,
       0,     0,  -331,     0,     0,     0,     0,     0,     0,     0,
    -331,  -331,     0,     0,  -331,    59,     0,  -331,   465,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    83,     0,
       0,    84,  -593,    60,   466,     0,    85,  -422,    61,     0,
      86,     0,    62,   467,   468,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   469,     0,    88,    63,     0,     0,
       0,    89,    55,     0,     0,    90,     0,     0,     0,     0,
      82,     0,    83,     0,     0,    84,    91,     0,    92,     0,
      85,     0,    93,    64,    86,     0,     0,     0,     0,     0,
      94,    95,     0,    87,    96,     0,     0,   470,     0,     0,
      88,     0,     0,     0,     0,    89,    55,     0,     0,    90,
       0,     0,     0,     0,    82,     0,    83,     0,     0,    84,
      91,     0,    92,     0,    85,     0,    93,     0,    86,     0,
       0,     0,     0,     0,    94,    95,     0,    87,    96,     0,
       0,   276,     0,     0,    88,     0,     0,     0,     0,    89,
       0,    33,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,     0,    92,     0,     0,     0,
      93,     0,     0,    34,     0,     0,     0,     0,    94,    95,
      33,     0,    96,     0,     0,   393,    35,     0,     0,     0,
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
       1,    76,   279,    61,   341,   101,   728,   729,   607,   669,
       3,    15,   108,   109,   158,   831,   181,   348,   351,   835,
     273,   349,    15,   792,   793,   349,   765,   253,    29,   516,
     136,    61,   525,   139,     3,    36,     0,   108,   153,   284,
     285,     4,     3,    11,   159,    10,   299,   763,     4,   120,
     269,   388,    98,    81,     4,   548,   102,   390,   133,     4,
      61,   136,     4,     4,   139,     4,     3,   142,   102,     3,
       4,     3,     1,   789,   108,    76,   683,     4,   738,     4,
      45,   139,     4,     4,     4,     4,    36,   340,     4,    52,
       4,     4,     4,   815,     4,     4,   865,   866,     1,   118,
       1,     1,   583,    71,   100,     1,   102,   846,    71,   590,
      51,     1,     1,     1,     1,    71,   174,   269,   269,   138,
       1,   265,     1,   181,   605,   269,    71,    68,     1,   139,
     140,   141,   133,     0,    98,   136,   389,   252,   139,   104,
     105,   142,   111,   369,   174,   867,   753,   108,   111,     1,
     111,   181,   751,   372,   147,   270,   271,   322,   323,   152,
     405,   111,   268,   100,    98,   158,   111,   654,   102,   111,
     135,   136,   111,   174,   103,   250,   108,   111,   917,   111,
     181,   920,   998,   279,   111,     4,   111,     1,     1,   111,
     111,   111,   288,   268,    97,   111,    97,   111,   111,   111,
     103,   111,   111,   106,   537,   106,   106,    97,    97,    97,
     106,   980,   981,   103,    61,   103,   106,   106,   106,   106,
     372,   372,   280,   281,    97,   106,   559,   106,   372,     1,
     103,     1,   236,   106,   182,   183,   184,   185,   186,   187,
     188,   189,     1,   236,     4,     1,     4,     1,    16,   250,
     280,   281,     1,     1,   106,   583,    98,     1,   251,   583,
     982,     1,   590,     1,     1,    33,   590,   268,   326,   327,
     643,    98,   265,   646,   103,   269,   269,   605,   108,   280,
     281,   605,   111,    97,    97,   108,   344,    41,   346,   103,
     103,     1,   106,   106,   901,   269,   326,   327,    98,   906,
      98,   101,   269,   796,    98,   103,   913,   365,   915,   269,
     269,     3,   685,   100,   344,   102,   346,   111,   595,   102,
      98,   108,   111,   112,   113,   326,   327,   174,   111,   936,
     108,   938,   992,   120,   106,   365,   106,     4,   945,    99,
     947,    98,   107,   344,   101,   346,   102,   106,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   106,   106,   131,
     132,   354,   106,     4,   365,   358,   106,   966,   106,   106,
       4,   319,   320,   321,   322,   323,   324,   325,   372,   372,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     721,   339,   102,   721,   452,     4,     4,   721,   372,   892,
     893,  1008,   100,   514,   462,   372,    98,    15,   466,   467,
     102,    98,   372,   372,    97,    23,    15,   102,   476,   103,
     102,   108,   452,   106,    23,     1,   111,   111,    53,   111,
      55,   111,   462,   280,   281,    60,   466,   467,    97,   535,
      99,   103,   111,    19,   100,     1,   476,   558,    24,   111,
     106,   452,    28,   511,   107,   403,   100,   100,     3,   517,
     518,   462,   106,   106,     4,   466,   467,    43,    98,   470,
     471,   101,    12,     4,    14,   476,   587,    17,    97,   326,
     327,   511,    22,    97,   103,    99,    26,   517,   518,    29,
     100,   602,   603,    69,   106,    35,   106,   344,    98,   346,
     596,   101,    42,    97,   100,    98,   102,    47,   101,   103,
     511,    51,   100,   102,   102,   516,   517,   518,   365,    97,
     473,    99,    62,    98,    64,   107,   101,     1,    68,   328,
     329,   330,   331,    95,    96,   593,    76,    77,    98,   107,
      80,   101,   490,    83,   492,   493,   494,   102,    98,    98,
     106,   101,   101,   107,    98,   613,   614,   101,   100,    98,
     618,     1,   101,   593,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   100,    98,   131,   132,   101,   636,   111,
     112,   113,    98,   613,   614,   101,   109,   110,   618,   926,
     927,    97,   593,    14,   542,   100,    17,    98,   591,    97,
     101,    99,    97,   699,    99,   452,   636,    97,    97,    99,
      99,   669,   613,   614,    97,   462,    99,   618,    97,   466,
     467,    42,   129,   130,    98,   144,    47,   100,   102,   476,
     133,   134,   106,   626,   108,   636,     1,   630,   631,   669,
     102,    62,   102,    64,   102,   593,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    76,    77,   131,   132,    80,
      93,    94,   181,   102,   511,   139,   140,   141,   669,   103,
     517,   518,   108,    93,    94,   324,   325,   332,   333,   108,
     738,    29,   635,   959,   960,   875,   876,   102,   746,    97,
     114,   749,   119,   115,   137,   648,   649,   650,   101,   103,
      97,    97,   120,   120,     4,   763,   101,   593,   738,    97,
     101,     4,    98,    61,   103,     4,   746,   710,     4,   749,
       4,   669,   715,     4,    49,   101,   120,   101,   103,    97,
     103,   789,   103,   763,   103,   683,   103,   738,    86,    87,
      88,    89,    90,    91,    92,   746,   103,   107,   749,   593,
     103,    52,   103,    52,   273,   101,   275,    97,   103,   789,
     102,    98,   763,   282,   102,    98,   613,   614,   100,     4,
      98,   618,   102,   102,     4,   101,   103,   120,   102,   100,
     299,   100,   102,   669,   303,    99,     4,   100,   789,   636,
     738,   100,   103,   103,   100,   103,   103,   683,   120,   318,
     102,    27,   107,   101,   101,   753,   102,   102,   102,   802,
     803,   593,   103,   101,   106,    93,   103,    94,   103,   338,
      85,   340,   101,   106,   106,   669,   106,   885,    97,   101,
     101,   350,   351,   908,    97,   103,   103,   790,   593,   683,
     102,   789,   103,   103,   103,   798,   103,    97,   100,   102,
     908,    96,   738,    95,   807,   885,   809,   100,     1,   812,
       4,   814,   120,   816,   817,     4,    94,   753,    93,   101,
     389,   390,   103,   107,   103,   130,   103,   101,   596,   501,
     103,   103,   103,   411,   885,   838,   839,   669,   107,   106,
     404,   410,   411,   334,   738,   399,   585,   335,   174,   746,
     174,   683,   749,   789,   336,   971,   337,   908,   743,   753,
     609,   339,   921,   971,   669,   969,   971,   823,   979,   647,
     593,   943,   840,   840,   935,   121,     4,   147,   683,   922,
     923,    49,   925,   471,   992,   372,   348,   631,   349,   458,
     626,   971,   630,   817,   803,   789,   802,   265,   358,   925,
      24,   142,   354,   901,   164,   950,   738,    -1,   906,    -1,
      -1,    -1,   992,    -1,    -1,   913,    -1,   915,    -1,    -1,
     971,   753,    -1,   921,    -1,   928,   929,    -1,    -1,    -1,
     593,    -1,    -1,   738,   503,    -1,    -1,    -1,   936,    -1,
     938,   992,    -1,    -1,    -1,    -1,   669,   945,   753,   947,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   789,   593,    -1,
     683,    -1,    -1,    -1,    -1,   901,    -1,    -1,   537,    -1,
     906,    -1,    -1,   971,    -1,    -1,   545,   913,    -1,   915,
      -1,   979,    -1,    -1,   789,   921,    -1,    -1,   885,    -1,
     559,   994,   995,    -1,   992,    -1,    -1,    -1,    -1,    -1,
     936,    -1,   938,    -1,    -1,    -1,   669,   901,    -1,   945,
    1008,   947,   906,    -1,    -1,   738,    -1,    -1,    -1,   913,
     683,   915,    -1,    -1,    -1,    -1,    -1,   921,    -1,    -1,
     753,    -1,    -1,    -1,   669,   971,    -1,    -1,   607,    -1,
      -1,    -1,   936,   979,   938,    -1,    -1,    -1,   683,    -1,
      -1,   945,    -1,   947,    -1,    -1,   992,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   789,    -1,    -1,   901,
      -1,    -1,  1008,    -1,   906,   738,   645,   971,   647,    -1,
      -1,   913,    -1,   915,    -1,   979,    -1,    -1,    -1,   921,
     753,    -1,    -1,    -1,    -1,    -1,   901,    -1,   992,    -1,
      -1,   906,    -1,   738,   936,    -1,   938,    -1,   913,    -1,
     915,    -1,    -1,   945,  1008,   947,   921,    -1,   753,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   789,    -1,    -1,    -1,
      -1,   936,    -1,   938,    -1,    -1,    -1,    -1,    -1,   971,
     945,    -1,   947,    -1,    -1,    -1,    -1,   979,    -1,    -1,
      -1,    -1,    -1,     0,   789,    -1,    -1,    -1,    -1,    -1,
     992,    -1,     9,    -1,    -1,    -1,   971,    -1,    -1,    -1,
     739,    -1,    -1,    -1,   979,    -1,  1008,    -1,   901,    -1,
      -1,    -1,   751,   906,    31,   754,   755,   992,    -1,   758,
     913,    -1,   915,    -1,   763,    -1,   765,    44,   921,    -1,
       1,    48,    49,  1008,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,   936,    -1,   938,    63,    -1,    -1,    -1,
      67,    -1,   945,    -1,   947,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    84,   901,    -1,
      -1,    -1,    -1,   906,    -1,    -1,    -1,    -1,   971,    -1,
     913,    -1,   915,    -1,    -1,    -1,   979,    -1,   921,    -1,
      -1,    -1,     1,    -1,     3,     4,   901,    -1,    -1,   992,
      -1,   906,    -1,   936,    -1,   938,    -1,   846,   913,    -1,
     915,    -1,   945,    -1,   947,  1008,   921,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,     1,   131,
     132,   936,    41,   938,    -1,   106,    -1,    -1,   971,    -1,
     945,    -1,   947,    -1,    -1,    -1,   979,    -1,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   992,
     131,   132,    -1,    -1,     1,    -1,   971,    -1,   139,   140,
     141,    -1,    -1,    -1,   979,  1008,    -1,    -1,   917,    -1,
      -1,   920,    -1,    -1,    -1,    -1,    -1,   992,     1,    98,
      -1,    -1,    -1,   102,    -1,   934,    -1,    -1,   107,   108,
      -1,    -1,   111,  1008,    41,    -1,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,   131,   132,    -1,    98,    -1,   966,    -1,   102,
     139,   140,   141,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,   131,   132,
      -1,    98,    -1,    -1,    -1,   102,   139,   140,   141,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,   106,   131,   132,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,    -1,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,   131,   132,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,    -1,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,    -1,    -1,   109,   110,   111,
      -1,    -1,   114,    -1,   116,   117,    -1,    -1,     1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,   139,   140,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,     4,    49,    50,    51,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    62,
      -1,    64,    65,    22,    -1,    68,    -1,    26,    71,    -1,
      73,    -1,    75,    76,    77,    78,    35,    80,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    62,    -1,    64,   109,   110,   111,    68,
      -1,   114,    -1,   116,   117,    -1,    -1,    76,    77,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,     8,   139,   140,    11,    12,
      13,    14,    15,    -1,    17,    18,    -1,    20,    21,    22,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,
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
      17,    18,    -1,    20,    21,    22,   139,   140,    25,    26,
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
      11,    12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,
      21,    22,   139,   140,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,   109,   110,
     111,    -1,    -1,   114,    -1,   116,   117,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,   139,   140,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      66,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,
     116,   117,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    22,    -1,   139,   140,    26,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,   102,    17,    18,    -1,    -1,    -1,    22,   109,   110,
     111,    26,    -1,   114,    -1,   116,   117,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    -1,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    66,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,   102,    17,    18,    -1,    -1,    -1,    22,
     109,   110,   111,    26,    -1,   114,    -1,   116,   117,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,     1,    -1,    47,     4,    49,    50,    51,    -1,
     139,   140,    -1,    12,    -1,    14,    -1,    -1,    17,    62,
      -1,    64,    65,    22,    -1,    68,    -1,    26,    71,    -1,
      73,    -1,    75,    76,    77,    78,    35,    80,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    -1,    53,    -1,    55,    -1,    -1,   102,
      -1,    60,    -1,    62,    -1,    64,   109,   110,   111,    68,
      -1,   114,    -1,   116,   117,    -1,    -1,    76,    77,    -1,
      -1,    80,     1,    -1,    83,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    14,   139,   140,    17,    98,
      19,    20,    -1,    22,   103,    24,    -1,    26,    -1,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    80,    -1,    -1,    83,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    32,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,   117,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    68,
      73,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   102,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    -1,   119,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,    -1,
     133,   134,   135,   136,    -1,     1,   139,   140,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    -1,    53,    -1,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    80,     1,    -1,    83,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    98,    19,    20,    -1,    22,   103,    24,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,
      -1,    47,     4,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,    -1,
      22,    -1,    68,    69,    26,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    35,    80,    -1,    -1,    83,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,     4,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      62,    -1,    64,    -1,    22,    -1,    68,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    35,    80,    -1,
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
       0,    81,   280,   281,   290,   291,   292,   293,     4,   146,
     287,   288,     0,   282,   284,   294,   295,   296,   300,   353,
     363,   380,   387,   388,   389,   390,   399,   291,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   297,   298,
     299,   282,   295,   390,    98,     4,   287,   108,   287,     1,
      19,    24,    28,    43,    69,   405,   299,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   391,   392,   393,     1,
     106,   285,    12,    14,    17,    22,    26,    35,    42,    47,
      51,    62,    64,    68,    76,    77,    80,    83,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   287,
     319,     4,     4,     4,     4,   147,   287,   394,   395,   397,
     107,   100,   289,   111,   111,     3,   159,   159,   159,     4,
     107,   381,   382,   107,   365,   366,   107,   354,   355,   107,
     303,   304,    97,    99,   102,   396,   398,   281,   106,   286,
     102,   153,   100,   383,   147,   305,   364,   305,   100,   356,
     155,   305,   301,   302,    99,   395,   400,     5,     6,     7,
       8,    11,    18,    32,    49,    50,    65,    71,    73,    75,
      78,   102,   109,   110,   111,   114,   116,   117,   139,   140,
     144,   145,   151,   155,   163,   164,   165,   166,   167,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   208,   287,   283,   294,   282,   318,   320,
     321,   322,   323,   324,   326,   282,   384,   385,   386,   286,
      97,   100,   367,   282,   296,   310,   311,   312,   313,   327,
     334,   338,   341,   346,   357,   358,   359,   286,    97,   100,
     306,     1,   400,    98,   108,   102,    83,   148,   149,   157,
     102,   102,   102,    83,   151,   155,   195,   208,   287,   190,
     190,   190,   190,   190,   190,   190,   190,   108,   108,    98,
     108,   102,   103,    97,   139,   140,   141,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   131,   132,   207,   111,
     112,   113,   109,   110,   129,   130,    10,    45,   104,   105,
     135,   136,   133,   134,   114,   119,   115,   137,   118,   138,
      98,   102,   101,    53,    55,    60,   325,   103,    97,    97,
     120,   120,     4,   101,    97,   147,   282,   368,   369,   370,
     371,   373,   375,   378,   286,   297,   101,   359,   305,   282,
     296,   307,   308,   309,   310,   311,   312,   327,   334,   338,
     341,   346,   350,   286,   286,   171,     4,   208,   102,    98,
     100,   360,   148,    83,   148,   208,   111,   159,   192,   193,
     194,   192,   192,   111,   103,   159,     4,     4,   171,     4,
      53,    60,   161,   162,   168,   208,   208,     4,   208,   190,
     190,   190,   190,   195,   195,   196,   196,   148,   148,   197,
     197,   197,   197,   198,   198,   199,   200,   201,   202,   208,
     203,   171,   168,   148,   148,     1,   106,   321,   322,   323,
     324,   326,    66,   208,   223,   224,   360,   223,   120,   101,
     386,    49,   372,   101,   370,     4,    20,    29,    30,    40,
      83,   148,   339,   342,   343,   345,   297,   101,   309,    99,
     103,   168,   171,   223,   361,   362,   103,   103,   103,   103,
     103,   194,   103,   103,   103,   187,   192,    99,   160,   208,
     160,    97,   103,   107,    99,   103,     4,     4,   148,   208,
     209,    29,    83,   148,   102,   148,   148,    52,    52,   287,
       4,    52,    71,   221,   222,   287,   288,   340,   403,   100,
     106,   213,   351,   117,   103,    99,   101,    97,   190,   190,
     190,   190,   103,   162,   208,    98,   148,     4,     4,    71,
     318,     4,   226,   227,   221,   287,   148,   148,   102,   120,
      32,    73,   104,   105,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   119,   129,   130,   133,   134,   135,   136,
     139,   140,   344,    98,     1,    97,   106,   102,   403,    71,
      98,   100,     1,   214,     4,   158,   159,   101,   223,   190,
     208,     4,   102,   102,   403,    98,   103,   120,     1,    97,
     106,   106,   401,   102,   102,     1,   318,   223,   102,   320,
     323,   326,     4,   222,     1,   318,   100,   320,   282,   328,
     331,   332,   101,     4,    13,    18,    20,    21,    25,    34,
      36,    37,    38,    39,    46,    61,    70,    72,    74,    78,
      79,    81,    85,   106,   148,   151,   155,   167,   174,   175,
     177,   188,   189,   190,   206,   211,   212,   213,   215,   216,
     217,   218,   219,   220,   225,   228,   230,   231,   234,   241,
     242,   243,   247,   249,   250,   251,   259,   260,   261,   262,
     263,   264,   266,   267,   272,   273,   274,   275,   277,   287,
     102,   179,   360,   158,    99,   100,   106,   379,   318,   318,
     100,   320,   347,   209,   227,   100,   148,   148,   103,   103,
     148,    97,    99,   103,   103,   328,    99,    93,    94,   101,
     282,   329,   332,   282,   330,   331,     1,    41,   107,   409,
       1,   106,   213,   148,     1,   106,   102,     1,   102,   406,
       4,    15,    23,   233,   406,   102,   208,   265,   406,   265,
     213,   213,   213,   102,     1,   102,   221,     1,   106,     1,
     106,     1,   106,     1,   106,     1,   106,     1,   106,     1,
     106,   101,   211,     1,   106,     1,   106,     4,   212,   406,
     103,   101,   103,   103,   282,   377,    99,   107,   348,   349,
     282,   335,   336,   337,     4,     4,   106,   317,   106,   315,
       4,   106,   316,   106,   314,   101,   404,   404,   404,   211,
     208,   226,   148,   148,     1,   106,   209,     1,   106,   212,
     208,   210,   208,     1,   106,   208,     1,   106,    16,    33,
     268,   269,   271,   208,   220,   276,   245,     1,   210,    85,
     167,   174,   175,   177,   188,   189,   206,   220,   229,   252,
     255,   258,   213,   379,   379,    93,    94,   101,   403,    11,
      71,   106,   213,   352,    95,    96,   101,   282,   337,   282,
     336,   103,   103,   213,   213,    97,   103,   213,   213,   404,
     106,   213,   333,   333,     1,   103,   407,     4,   278,   279,
       4,   251,     1,   106,    27,   407,   103,   407,   102,   213,
     213,   269,   271,   103,   210,   103,   103,   102,     1,   106,
     408,    97,   379,   379,   404,   100,   102,   102,   402,   402,
     402,   148,   403,   403,   120,    97,   103,   212,   232,   212,
     100,   235,   147,   155,   212,     1,   212,   244,   210,   210,
     253,   256,   229,   282,   282,   374,   377,   168,   168,   213,
     213,     4,   208,   279,   212,   212,    15,    23,   236,   237,
     238,   239,   240,     4,   270,   270,   212,   212,   248,   408,
      94,    93,   101,   103,   103,   401,   401,   103,   209,   107,
     101,   238,   216,   240,   103,   103,   246,   103,   254,   257,
     258,   379,   379,   404,   107,   213,   213,   106,   407,   376,
     212
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
     231,   232,   231,   233,   234,   235,   236,   236,   237,   237,
     238,   239,   239,   240,   240,   241,   241,   241,   241,   242,
     244,   243,   243,   245,   246,   243,   248,   247,   249,   250,
     251,   252,   252,   253,   253,   254,   254,   255,   255,   256,
     257,   258,   258,   259,   251,   260,   260,   260,   260,   260,
     261,   261,   262,   262,   263,   263,   263,   263,   263,   263,
     264,   264,   265,   265,   266,   266,   267,   267,   267,   268,
     268,   269,   269,   269,   270,   270,   271,   272,   273,   274,
     275,   276,   276,   277,   278,   278,   279,   280,   280,   281,
     281,   282,   282,   283,   283,   285,   284,   286,   286,   287,
     287,   288,   288,   289,   290,   290,   291,   291,   292,   292,
     293,   293,   294,   294,   295,   295,   296,   296,   296,   296,
     296,   297,   297,   298,   298,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   301,
     300,   302,   300,   303,   303,   304,   304,   304,   305,   305,
     306,   307,   307,   308,   308,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   310,   310,   311,   311,   312,
     314,   313,   315,   313,   316,   313,   317,   313,   313,   313,
     313,   313,   318,   318,   318,   318,   319,   319,   320,   320,
     321,   321,   322,   322,   323,   324,   324,   325,   325,   325,
     326,   327,   328,   328,   329,   329,   330,   330,   331,   332,
     333,   333,   334,   334,   335,   335,   336,   337,   338,   339,
     339,   340,   341,   342,   342,   343,   343,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   345,
     345,   347,   346,   348,   348,   349,   349,   350,   351,   351,
     352,   352,   353,   354,   354,   355,   356,   357,   357,   358,
     358,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     360,   360,   361,   361,   362,   362,   364,   363,   365,   365,
     366,   367,   368,   368,   369,   369,   370,   370,   370,   370,
     371,   371,   372,   372,   374,   373,   376,   375,   377,   377,
     377,   377,   378,   379,   379,   380,   381,   381,   382,   383,
     383,   384,   384,   385,   385,   386,   386,   387,   387,   388,
     389,   389,   390,   390,   391,   391,   392,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   394,   394,   395,   396,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     405,   406,   406,   407,   407,   408,   408,   409,   409
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
       3,     0,     6,     3,     5,     3,     0,     1,     1,     2,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     2,
       0,     6,     5,     0,     0,     7,     0,     8,     1,     9,
       1,     0,     1,     0,     1,     0,     1,     1,     1,     1,
       1,     1,     3,     5,     4,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     4,     3,     3,     4,     3,
       3,     3,     0,     1,     3,     3,     3,     3,     4,     1,
       2,     6,     6,     2,     0,     1,     2,     2,     2,     5,
       5,     1,     1,     6,     1,     3,     3,     2,     2,     0,
       1,     0,     1,     0,     1,     0,     6,     0,     1,     1,
       2,     2,     3,     4,     1,     2,     1,     1,     5,     5,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       8,     0,     8,     0,     1,     2,     2,     4,     1,     3,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     6,     5,     5,     1,
       0,     9,     0,     9,     0,     9,     0,     9,     8,     8,
       8,     8,     0,     1,     1,     3,     1,     1,     1,     3,
       1,     3,     1,     1,     4,     3,     3,     0,     1,     1,
       4,     9,     2,     2,     0,     1,     0,     1,     5,     5,
       1,     1,     6,    10,     2,     2,     5,     5,     8,     5,
       5,     2,     4,     1,     1,     7,    10,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       7,     0,     9,     0,     1,     5,     5,     7,     1,     1,
       1,     1,     7,     0,     1,     2,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     0,     1,     1,     3,     0,     8,     0,     1,
       2,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       8,     8,     0,     1,     0,    10,     0,    13,     3,     3,
       6,     6,     6,     1,     2,     7,     0,     1,     2,     3,
       4,     0,     1,     1,     3,     2,     4,     9,     9,     1,
       1,     2,     6,     7,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     0,
       1,     1,     3,     0,     0,     0,     0,     0,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 147 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_literal",1);	  (yyval.r.node) = (yyvsp[0].r.node);}
#line 2758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);	  (yyval.r.node) = new AutoConst("INT",new int((yyvsp[0].r.i)),Node::current);}
#line 2764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);		  (yyval.r.node) = new AutoConst("FLOAT",new float((yyvsp[0].r.f)),Node::current);}
#line 2770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 150 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);  (yyval.r.node) = new AutoConst("CHAR",new char((yyvsp[0].r.c)),Node::current);}
#line 2776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);     (yyval.r.node) = new AutoConst("STRING",new string((yyvsp[0].r.str)),Node::current);}
#line 2782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 152 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);       (yyval.r.node) = new AutoConst("NULL",nullptr,Node::current);}
#line 2788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 155 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);(yyval.r.node) = new AutoConst("BOOL",new bool(true),Node::current);}
#line 2794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);(yyval.r.node) = new AutoConst("BOOL",new bool(false),Node::current);}
#line 2800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 166 "yacc.y" /* yacc.c:1646  */
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[0].r.known_type);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[0].r.base);}
#line 2836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 183 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 187 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 188 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);(yyval.r.base) = new string("BOOL");}
#line 2866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 192 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[0].r.base);}
#line 2878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);(yyval.r.base) = new string("DECIMAL");}
#line 2884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("SBYTE");}
#line 2890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("BYTE");}
#line 2896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 200 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("SHORT");}
#line 2902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 201 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("USHORT");}
#line 2908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("INT");}
#line 2914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("UINT");}
#line 2920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 204 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("LONG");}
#line 2926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 205 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("ULONG");}
#line 2932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);(yyval.r.base) = new string("CHAR");}
#line 2938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 209 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("FLOAT");}
#line 2944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);(yyval.r.base) = new string("DOUBLE");}
#line 2950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("OBJECT");}
#line 2956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);(yyval.r.base) = new string("STRING");}
#line 2962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[-1].r.known_type);(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 222 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 223 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[-1].r.base);}
#line 2992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 226 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 3004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 3010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 239 "yacc.y" /* yacc.c:1646  */
    {
		l.a("argument_list",1);
		(yyval.r.args) = new vector<pair<Node*,int> >(); 
		(yyval.r.args)->push_back(*(yyvsp[0].r.arg));
  }
#line 3026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 245 "yacc.y" /* yacc.c:1646  */
    {
		l.a("argument_list",2);
		(yyval.r.args) = (yyvsp[-2].r.args);
		(yyval.r.args)->push_back(*(yyvsp[0].r.arg));
  }
#line 3036 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);(yyval.r.arg) = new pair<Node*,int>((yyvsp[0].r.node),0);}
#line 3042 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);(yyval.r.arg) = new pair<Node*,int>((yyvsp[0].r.node),1);}
#line 3048 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 254 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);(yyval.r.arg) = new pair<Node*,int>((yyvsp[0].r.node),2);}
#line 3054 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 257 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3060 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 258 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3066 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 261 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3072 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3078 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 263 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3084 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 264 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3090 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3096 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 266 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3102 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 267 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3108 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3114 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3120 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 270 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3126 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 271 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3132 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 272 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3138 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);(yyval.r.node) = (yyvsp[-1].r.node);}
#line 3144 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 279 "yacc.y" /* yacc.c:1646  */
    {
		l.a("member_access",1);
		if((yyvsp[-2].r.node)->getType() == "identifier") {
			(yyval.r.node) = new Identifier(new Symbol(((Identifier*)(yyvsp[-2].r.node))->getSymbol()->getName() + '.' + string((yyvsp[0].r.str)),(yyvsp[0].r.line_no),-13));
		}
  }
#line 3155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 285 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 286 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 290 "yacc.y" /* yacc.c:1646  */
    {
		l.a("invocation_expression",2);

		if((yyvsp[-3].r.node)->getType()=="identifier") {
			(yyval.r.node) = new Call(((Identifier*)(yyvsp[-3].r.node))->getSymbol(),Node::current);
			((Call*)(yyval.r.node))->setParams(*(yyvsp[-1].r.args));
		}
  
  }
#line 3181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 300 "yacc.y" /* yacc.c:1646  */
    {
		l.a("invocation_expression",2);
		(yyval.r.node) = new Call(new Symbol(*(yyvsp[-3].r.base),-1,-1),Node::current);
		((Call*)(yyval.r.node))->setParams(*(yyvsp[-1].r.args));
  }
#line 3191 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 307 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);(yyval.r.args) = new vector<pair<Node*,int> >();}
#line 3197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);(yyval.r.args) = (yyvsp[0].r.args);}
#line 3203 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3209 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3215 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 315 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 324 "yacc.y" /* yacc.c:1646  */
    {
		l.a("this_access",0);
		(yyval.r.node) = new Identifier(new Symbol("this",(yyvsp[0].r.line_no),-13));
  }
#line 3248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 331 "yacc.y" /* yacc.c:1646  */
    {
		l.a("base_access",0);
		(yyval.r.node) = new Identifier(new Symbol("base." + string((yyvsp[0].r.str)),(yyvsp[-2].r.line_no),-13));
  }
#line 3257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 335 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 338 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);(yyval.r.node) = new UnaryExpression(post_plusplus,(yyvsp[-1].r.node),Node::current);}
#line 3269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);(yyval.r.node) = new UnaryExpression(post_minusminus,(yyvsp[-1].r.node),Node::current);}
#line 3275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 348 "yacc.y" /* yacc.c:1646  */
    {
		l.a("object_creation_expression",2);
		(yyval.r.node) = new Call(new Symbol(*(yyvsp[-3].r.base),-1,-1),Node::current,true,(yyvsp[-3].r.known_type));
		((Call*)(yyval.r.node))->setParams(*(yyvsp[-1].r.args));

  }
#line 3292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 356 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 361 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 371 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);(yyval.r.node) = new UnaryExpression(And,(yyvsp[0].r.node),Node::current);}
#line 3352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);(yyval.r.node) = new Identifier(new Symbol(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),-13));}
#line 3370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 387 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);(yyval.r.node) = new UnaryExpression(exclamation_point,(yyvsp[0].r.node),Node::current);}
#line 3394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 391 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);(yyval.r.node) = new UnaryExpression(tilde,(yyvsp[0].r.node),Node::current);}
#line 3400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 392 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 393 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 396 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 399 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 403 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 404 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 407 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 416 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 420 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 432 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 433 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 436 "yacc.y" /* yacc.c:1646  */
    {(yyval.r.node) = (yyvsp[0].r.node);}
#line 3544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 438 "yacc.y" /* yacc.c:1646  */
    {
		l.a("multiplicative_expression STAR",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),star,(yyvsp[0].r.node),Node::current);
  }
#line 3553 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 443 "yacc.y" /* yacc.c:1646  */
    {
		l.a("multiplicative_expression SLASH",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),slash,(yyvsp[0].r.node),Node::current);
  }
#line 3562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 448 "yacc.y" /* yacc.c:1646  */
    {
		l.a("multiplicative_expression PERCENT",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),percent,(yyvsp[0].r.node),Node::current);
  }
#line 3571 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 456 "yacc.y" /* yacc.c:1646  */
    {
		l.a("additive_expression multiplicative_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 461 "yacc.y" /* yacc.c:1646  */
    {
		l.a("additive_expression PLUS",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),Plus,(yyvsp[0].r.node),Node::current);
  }
#line 3589 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 466 "yacc.y" /* yacc.c:1646  */
    {
		l.a("additive_expression MINUS",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),Minus,(yyvsp[0].r.node),Node::current);
  }
#line 3598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 474 "yacc.y" /* yacc.c:1646  */
    {
		l.a("shift_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 479 "yacc.y" /* yacc.c:1646  */
    {
		l.a("shift_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),ltlt,(yyvsp[0].r.node),Node::current);
  }
#line 3616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 484 "yacc.y" /* yacc.c:1646  */
    {
		l.a("shift_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),gtgt,(yyvsp[0].r.node),Node::current);
  }
#line 3625 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 492 "yacc.y" /* yacc.c:1646  */
    {
		l.a("relational_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 497 "yacc.y" /* yacc.c:1646  */
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),smaller,(yyvsp[0].r.node),Node::current);  
  }
#line 3643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 502 "yacc.y" /* yacc.c:1646  */
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),Greater,(yyvsp[0].r.node),Node::current);  
  }
#line 3652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 507 "yacc.y" /* yacc.c:1646  */
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),leq,(yyvsp[0].r.node),Node::current);  
  }
#line 3661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 512 "yacc.y" /* yacc.c:1646  */
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),geq,(yyvsp[0].r.node),Node::current);  
  }
#line 3670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 517 "yacc.y" /* yacc.c:1646  */
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),Is,(yyvsp[0].r.node),Node::current);  
  }
#line 3679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 522 "yacc.y" /* yacc.c:1646  */
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),As,(yyvsp[0].r.node),Node::current);		
  }
#line 3688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 530 "yacc.y" /* yacc.c:1646  */
    {
		l.a("equality_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 535 "yacc.y" /* yacc.c:1646  */
    {
		l.a("equality_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),eqeq,(yyvsp[0].r.node),Node::current);  
  }
#line 3706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 540 "yacc.y" /* yacc.c:1646  */
    {
		l.a("equality_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),noteq,(yyvsp[0].r.node),Node::current);  
  }
#line 3715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 548 "yacc.y" /* yacc.c:1646  */
    {
		l.a("and_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 553 "yacc.y" /* yacc.c:1646  */
    {
		l.a("and_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),And,(yyvsp[0].r.node),Node::current);
  }
#line 3733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 560 "yacc.y" /* yacc.c:1646  */
    {
		l.a("exclusive_or_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 565 "yacc.y" /* yacc.c:1646  */
    {
		l.a("exclusive_or_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),power,(yyvsp[0].r.node),Node::current);  
  }
#line 3751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 573 "yacc.y" /* yacc.c:1646  */
    {
		l.a("inclusive_or_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 578 "yacc.y" /* yacc.c:1646  */
    {
		l.a("inclusive_or_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),Or,(yyvsp[0].r.node),Node::current);  
  }
#line 3769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 586 "yacc.y" /* yacc.c:1646  */
    {
		l.a("conditional_and_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 591 "yacc.y" /* yacc.c:1646  */
    {
		l.a("conditional_and_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),andand,(yyvsp[0].r.node),Node::current);
  }
#line 3787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 599 "yacc.y" /* yacc.c:1646  */
    {
		l.a("conditional_or_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 604 "yacc.y" /* yacc.c:1646  */
    {
		l.a("conditional_or_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[-2].r.node),oror,(yyvsp[0].r.node),Node::current);
  
  }
#line 3806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 613 "yacc.y" /* yacc.c:1646  */
    {
		l.a("conditional_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3815 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 618 "yacc.y" /* yacc.c:1646  */
    {
		l.a("conditional_expression",3);
		(yyval.r.node) = new BinaryExpression((yyvsp[-4].r.node),question_mark,(yyvsp[-2].r.node),Node::current);  
  }
#line 3824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 626 "yacc.y" /* yacc.c:1646  */
    {
		l.a("assignment",3);
		(yyval.r.node) = new Assignment((Identifier*)(yyvsp[-2].r.node),(yyvsp[-1].r.op),(yyvsp[0].r.node),Node::current);
  }
#line 3833 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 633 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);(yyval.r.op) = Equal;}
#line 3839 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 634 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);(yyval.r.op) = pluseq;}
#line 3845 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);(yyval.r.op) = minuseq;}
#line 3851 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);(yyval.r.op) = stareq;}
#line 3857 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);(yyval.r.op) = diveq;}
#line 3863 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 638 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);(yyval.r.op) = modeq;}
#line 3869 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 639 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);(yyval.r.op) = xoreq;}
#line 3875 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);(yyval.r.op) = andeq;}
#line 3881 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);(yyval.r.op) = oreq;}
#line 3887 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 642 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);(yyval.r.op) = gtgteq;}
#line 3893 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 643 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);(yyval.r.op) = ltlteq;}
#line 3899 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 646 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3905 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3911 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 651 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_expression",1);
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 3920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 657 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 3926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 661 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 666 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 667 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 668 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 674 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 675 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 4004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 4010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 4016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 678 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 4022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 681 "yacc.y" /* yacc.c:1646  */
    { SPL->add_scope(); }
#line 4028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);  SPL->endScope();}
#line 4034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 682 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 4040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 4046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 686 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 4052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 690 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 4058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 691 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 4064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 694 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 4070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 4076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 4082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 701 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 4088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 702 "yacc.y" /* yacc.c:1646  */
    { l.a("declaration_statement",1,1);}
#line 4094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 703 "yacc.y" /* yacc.c:1646  */
    { l.a("declaration_statement",1,1);}
#line 4100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 707 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),*(yyvsp[0].r.exps),(yyvsp[-1].r.known_type),false,(yyvsp[0].r.line_no),(yyvsp[0].r.col_no)) ;
	}
#line 4110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 715 "yacc.y" /* yacc.c:1646  */
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.exps) = new queue<Node*>();
				 (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
				 (yyval.r.exps)->push((yyvsp[0].r.node));
		   }
#line 4121 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 722 "yacc.y" /* yacc.c:1646  */
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
				  (yyval.r.exps) = (yyvsp[-2].r.exps);
				  
				  (yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));
				  (yyval.r.exps)->push((yyvsp[0].r.node));
		   }
#line 4133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 732 "yacc.y" /* yacc.c:1646  */
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[0].r.str)) ; 
				 (yyval.r.node) = nullptr;
		  }
#line 4142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 737 "yacc.y" /* yacc.c:1646  */
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[-2].r.str));
					(yyval.r.node) = (yyvsp[0].r.node);
		   }
#line 4151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 743 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 4157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 744 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 748 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 4175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 752 "yacc.y" /* yacc.c:1646  */
    {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*(yyvsp[-1].r.base),*(yyvsp[0].r.identifiers),*(yyvsp[0].r.exps),(yyvsp[-1].r.known_type),true,(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no)) ;
  }
#line 4184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 759 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",1);
  		(yyval.r.identifiers) = new queue<string>();
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));

		(yyval.r.exps) = new queue<Node*>();
		(yyval.r.exps)->push((yyvsp[0].r.node));
  }
#line 4197 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 768 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarators",2);
	  	(yyval.r.identifiers) = (yyvsp[-2].r.identifiers);
		(yyval.r.identifiers)->push(*(yyvsp[0].r.identifier));	

		(yyval.r.exps) = (yyvsp[-2].r.exps);		  
		(yyval.r.exps)->push((yyvsp[0].r.node));
		
  }
#line 4211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 780 "yacc.y" /* yacc.c:1646  */
    {
		l.a("constant_declarator",1);
		(yyval.r.identifier) = new string((yyvsp[-2].r.str));
		(yyval.r.node) = (yyvsp[0].r.node);
  }
#line 4221 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[-1].r.node));}
#line 4227 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4233 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 790 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[-1].r.node));}
#line 4239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 791 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[-1].r.node));}
#line 4245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[-1].r.node));}
#line 4251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[-1].r.node));}
#line 4257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[-1].r.node));}
#line 4263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4275 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 798 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 799 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4287 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 800 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4299 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 802 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1,1);}
#line 4305 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 4311 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 806 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4317 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 807 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 4323 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 4329 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 809 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 4335 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 810 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 4341 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 811 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 4347 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 814 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4353 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 815 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4359 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 818 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);SPL->closeASTscope();}
#line 4365 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 819 "yacc.y" /* yacc.c:1646  */
    {SPL->closeASTscope(true);}
#line 4371 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 819 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);SPL->closeASTscope();}
#line 4377 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 822 "yacc.y" /* yacc.c:1646  */
    {SPL->addStatement(new If((Expression*)(yyvsp[-1].r.node),Node::current));}
#line 4383 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4389 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 829 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4395 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 832 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4401 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 833 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4407 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 836 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4413 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4419 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 840 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4425 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 843 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4431 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 844 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4437 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4443 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 848 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4449 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 851 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 4455 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 852 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4461 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 853 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4467 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4473 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 857 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4479 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 860 "yacc.y" /* yacc.c:1646  */
    {SPL->addStatement(new While((yyvsp[-1].r.node),nullptr,Node::current));}
#line 4485 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 860 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);SPL->closeASTscope();}
#line 4491 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4497 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 862 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4503 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 862 "yacc.y" /* yacc.c:1646  */
    {  }
#line 4509 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4515 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 866 "yacc.y" /* yacc.c:1646  */
    {
		l.a("do_statement",2);
		((DoWhile*)Node::current)->setCondition((yyvsp[0].r.node));
		SPL->closeASTscope();
  }
#line 4525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 874 "yacc.y" /* yacc.c:1646  */
    { SPL->addStatement(new DoWhile(nullptr,nullptr,Node::current)); }
#line 4531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 878 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);SPL->closeASTscope();}
#line 4537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 881 "yacc.y" /* yacc.c:1646  */
    {SPL->addStatement(new For(Node::current));}
#line 4543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 886 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 888 "yacc.y" /* yacc.c:1646  */
    {
		l.a("for_initializer_opt",1);
		if((yyvsp[0].r.nodes) != nullptr) {
			((For*)Node::current)->setInitializers(*(yyvsp[0].r.nodes));
		}
  }
#line 4560 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 896 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4566 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 898 "yacc.y" /* yacc.c:1646  */
    {
		l.a("for_condition_opt",1);
		((For*)Node::current)->setCondition((yyvsp[0].r.node));
		
  }
#line 4576 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 905 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4582 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 907 "yacc.y" /* yacc.c:1646  */
    {
		l.a("for_iterator_opt",1);
		((For*)Node::current)->setIterators(*(yyvsp[0].r.nodes));
  }
#line 4591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 913 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);(yyval.r.nodes) = nullptr;}
#line 4597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 914 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);(yyval.r.nodes) = (yyvsp[0].r.nodes);}
#line 4603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 917 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);(yyval.r.node) = (yyvsp[0].r.node);}
#line 4609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);(yyval.r.nodes) = (yyvsp[0].r.nodes);}
#line 4615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 923 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);(yyval.r.nodes) = new queue<Node*>();(yyval.r.nodes)->push((yyvsp[0].r.node));}
#line 4621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 924 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);(yyval.r.nodes) = (yyvsp[-2].r.nodes);(yyval.r.nodes)->push((yyvsp[0].r.node));}
#line 4627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 927 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);SPL->closeASTscope();}
#line 4633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 931 "yacc.y" /* yacc.c:1646  */
    {SPL->addStatement(new Foreach(new Symbol(*(new string((yyvsp[-3].r.str))),0,0),(yyvsp[-1].r.node),Node::current));}
#line 4639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 935 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 937 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 938 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 939 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 942 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 943 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 946 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 947 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 950 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4699 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 951 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4705 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 952 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4711 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 953 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4717 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 954 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4723 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 955 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4729 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 958 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4735 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 959 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4741 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 962 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4747 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 963 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4753 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 966 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4759 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 967 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4765 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 970 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4771 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 971 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4777 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 972 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4783 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 975 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4789 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 976 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4795 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 979 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4801 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 980 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4807 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 984 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4813 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 985 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4819 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 988 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4825 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 991 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4831 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4837 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 997 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4843 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4849 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1003 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4855 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1004 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4861 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1008 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4867 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1011 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4873 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1012 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4879 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1015 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4885 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1018 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4891 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1019 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4897 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4903 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4909 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1026 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4915 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1027 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4921 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1030 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4927 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1031 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4933 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {SPL->addNamespace(*(yyvsp[0].r.base),(yyvsp[0].r.line_no),(yyvsp[0].r.col_no));}
#line 4939 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1035 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);SPL->endScope();}
#line 4945 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1038 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4951 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1039 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4957 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1044 "yacc.y" /* yacc.c:1646  */
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[0].r.str));
				(yyval.r.line_no) = (yyvsp[0].r.line_no);
		  }
#line 4966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1049 "yacc.y" /* yacc.c:1646  */
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[-1].r.base)) + string((yyvsp[0].r.str)));
			(yyval.r.line_no) = (yyvsp[0].r.line_no);
		}
#line 4975 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1056 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[-1].r.str)) + ".");}
#line 4981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1057 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[-2].r.base) + string((yyvsp[-1].r.str)) + ".");}
#line 4987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 5005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1068 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 5011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 5017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1072 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 5023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 5029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1076 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);  SPL->add_using(*(yyvsp[-1].r.base),(yyvsp[-2].r.line_no),(yyvsp[-2].r.col_no));}
#line 5035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);SPL->add_using(*(yyvsp[-1].r.base),(yyvsp[-2].r.line_no),(yyvsp[-2].r.col_no));}
#line 5041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1080 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 5047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 5053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 5059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1085 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 5065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1088 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 5071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1089 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 5077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1090 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 5083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1091 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 5089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1092 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 5095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
#line 5104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1109 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[0].r.modifiers);
  }
#line 5113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1116 "yacc.y" /* yacc.c:1646  */
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 5123 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[-1].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[0].r.modifier));
  }
#line 5133 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1129 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
#line 5139 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1130 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
#line 5145 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
#line 5151 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1132 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
#line 5157 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 1133 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
#line 5163 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 1134 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
#line 5169 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
#line 5175 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1136 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
#line 5181 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 1137 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
#line 5187 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
#line 5193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
#line 5199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 1140 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
#line 5205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
#line 5211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 1142 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
#line 5217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 5225 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",6);SPL->endScope();}
#line 5231 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 1158 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addClass(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));
  }
#line 5239 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);SPL->endScope();}
#line 5245 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 5251 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5257 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();(yyval.r.bases)->push(*(yyvsp[0].r.base));}
#line 5263 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 5269 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {
		l.a("class_base",2);(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[-2].r.base));
		while(!(yyvsp[0].r.bases)->empty())
		{
			(yyval.r.bases)->push((yyvsp[0].r.bases)->front());
			(yyvsp[0].r.bases)->pop();
		}
  }
#line 5283 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 1185 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 5293 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 1191 "yacc.y" /* yacc.c:1646  */
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[-2].r.bases);
		(yyval.r.bases)->push(*(yyvsp[0].r.base));
  }
#line 5303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 5309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 1203 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 5315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 1207 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 1208 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 1211 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 1212 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 1213 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 1214 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 1215 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 1218 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 1219 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 1220 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 1224 "yacc.y" /* yacc.c:1646  */
    {		
		         l.a("constant_declaration",4);
	          SPL->addFieldConst(*(yyvsp[-4].r.modifiers),string("CONST"),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
		  }
#line 5402 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 1229 "yacc.y" /* yacc.c:1646  */
    {
		    l.a("constant_declaration",4,1);
         SPL->addFieldConst(*(yyvsp[-4].r.modifiers),string("CONST"),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));

		 }
#line 5412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 1237 "yacc.y" /* yacc.c:1646  */
    {
		        SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
  		      l.a("field_declaration",4);
	      }
#line 5421 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 1242 "yacc.y" /* yacc.c:1646  */
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[-3].r.modifiers),*(yyvsp[-2].r.base),*(yyvsp[-1].r.identifiers),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no),(yyvsp[-2].r.known_type));
        }
#line 5430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}
#line 5436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 1254 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type),1);
      }
#line 5444 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1261 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1,1);
      }
#line 5452 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 1267 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[-5].r.modifiers),*(yyvsp[-4].r.base),string(*(yyvsp[-3].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),(yyvsp[-4].r.known_type),1);
         }
#line 5460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1273 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-5].r.modifiers),"VOID",string(*(yyvsp[-3].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1,1);
         }
#line 5468 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 1283 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[-6].r.modifiers),*(yyvsp[-5].r.base),string(*(yyvsp[-4].r.base)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),(yyvsp[-5].r.known_type),0);
      }
#line 5476 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1287 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-6].r.modifiers),"VOID",string(*(yyvsp[-4].r.base)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),1,0);
      }
#line 5484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1291 "yacc.y" /* yacc.c:1646  */
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[-6].r.modifiers),*(yyvsp[-5].r.base),string(*(yyvsp[-4].r.base)),queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>(),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),(yyvsp[-5].r.known_type),0);
         }
#line 5492 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1295 "yacc.y" /* yacc.c:1646  */
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[-6].r.modifiers),"VOID",string(*(yyvsp[-4].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),1,0);
         }
#line 5500 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 1302 "yacc.y" /* yacc.c:1646  */
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
#line 5508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1306 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5516 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1310 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[0].r.types_ids) ;
        }
#line 5524 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1314 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[-2].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[-2].r.types_ids))->front()); ((yyvsp[-2].r.types_ids))->pop();}
            while(!((yyvsp[0].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[0].r.types_ids))->front()); ((yyvsp[0].r.types_ids))->pop();}
        }
#line 5535 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1322 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5541 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1323 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5547 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1336 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1341 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
      }
#line 5565 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1348 "yacc.y" /* yacc.c:1646  */
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type)));
      }
#line 5574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1353 "yacc.y" /* yacc.c:1646  */
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[-2].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[0].r.base) ,*(yyvsp[0].r.identifier)),make_pair((yyvsp[0].r.line_no),(yyvsp[0].r.col_no))),(yyvsp[0].r.known_type))); 
       }
#line 5583 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1360 "yacc.y" /* yacc.c:1646  */
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[0].r.base) ;
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5595 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1368 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[0].r.base);
        (yyval.r.identifier) = (yyvsp[0].r.identifier);
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[0].r.known_type);
      }
#line 5607 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 1378 "yacc.y" /* yacc.c:1646  */
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));  
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no); 
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5619 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1389 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base) ;
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5631 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1397 "yacc.y" /* yacc.c:1646  */
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[-2].r.base);
        (yyval.r.identifier) = (yyvsp[-2].r.identifier);
        (yyval.r.line_no) = (yyvsp[-2].r.line_no);
        (yyval.r.col_no) = (yyvsp[-2].r.col_no);
        (yyval.r.known_type) = (yyvsp[-2].r.known_type);
      }
#line 5643 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1407 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5649 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1408 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5655 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 1409 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5661 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1413 "yacc.y" /* yacc.c:1646  */
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[-1].r.base);
        (yyval.r.identifier) = new string ((yyvsp[0].r.str));
        (yyval.r.line_no) = (yyvsp[0].r.line_no);
        (yyval.r.col_no) = (yyvsp[0].r.col_no);
        (yyval.r.known_type) = (yyvsp[-1].r.known_type);
      }
#line 5673 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1426 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5679 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1429 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5685 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1430 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5691 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1433 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5697 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1434 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5703 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1437 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5709 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1438 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5715 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1444 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5721 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1450 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5727 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1453 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5733 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1454 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5739 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 1457 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5745 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1461 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5751 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1464 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5757 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1465 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5763 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1471 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5769 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1477 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5775 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1483 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5781 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1486 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5787 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1488 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5793 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1491 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5799 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1495 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5805 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1498 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5811 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1499 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5817 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1502 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5823 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1503 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5829 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1506 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5835 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1507 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5841 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1508 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5847 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1509 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5853 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1510 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5859 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1511 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5865 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1512 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5871 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1513 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5877 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1514 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5883 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1515 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5889 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1516 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5895 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1517 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5901 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1518 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5907 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1519 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5913 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1520 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5919 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1521 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5925 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1522 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5931 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1523 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5937 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1524 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5943 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1525 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5949 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1526 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5955 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1527 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5961 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1530 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5967 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1531 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5973 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1535 "yacc.y" /* yacc.c:1646  */
    {
  SPL->addMethod(*(yyvsp[-4].r.modifiers),"",string((yyvsp[-3].r.str)),*(yyvsp[-1].r.types_ids),(yyvsp[-3].r.line_no),(yyvsp[-3].r.col_no),1,1);
  }
#line 5981 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1538 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);SPL->endScope();}
#line 5987 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1541 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5993 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1542 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5999 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1545 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 6005 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1546 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 6011 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1562 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 6017 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1565 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 6023 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1566 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 6029 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1569 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 6035 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1570 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 6041 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1575 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 6047 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1578 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 6053 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1579 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 6059 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1582 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 6065 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1585 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 6071 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1588 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 6077 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1589 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 6083 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1592 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 6089 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1593 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 6095 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1596 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6101 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1597 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6107 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1598 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6113 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1599 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6119 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1600 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6125 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1601 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6131 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1602 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6137 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1603 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6143 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1605 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6149 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1610 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 6155 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1611 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 6161 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1614 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 6167 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1615 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 6173 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1618 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 6179 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1619 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 6185 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1625 "yacc.y" /* yacc.c:1646  */
    {
		SPL->addInterface(*(yyvsp[-3].r.modifiers),string((yyvsp[-1].r.str)),*(yyvsp[0].r.bases),(yyvsp[-1].r.line_no),(yyvsp[-1].r.col_no));		
  }
#line 6193 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1628 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);SPL->endScope();}
#line 6199 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1632 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
#line 6205 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1633 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 6211 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1636 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[0].r.bases);}
#line 6217 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1639 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 6223 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1642 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 6229 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1643 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 6235 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1646 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 6241 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1647 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 6247 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1650 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6253 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1651 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6259 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1652 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6265 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1653 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6271 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1658 "yacc.y" /* yacc.c:1646  */
    {
     l.a("interface_method_declaration",5);
	 SPL->addMethod(*(yyvsp[-6].r.modifiers),*(yyvsp[-5].r.base),string((yyvsp[-4].r.str)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),(yyvsp[-5].r.known_type),0);
	 SPL->endScope();
    }
#line 6281 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1664 "yacc.y" /* yacc.c:1646  */
    {
	  l.a("interface_method_declaration",4);
	  SPL->addMethod(*(yyvsp[-6].r.modifiers),"VOID",string((yyvsp[-4].r.str)),*(yyvsp[-2].r.types_ids),(yyvsp[-4].r.line_no),(yyvsp[-4].r.col_no),1,0);
	  SPL->endScope();
    }
#line 6291 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1671 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0); (yyval.r.modifiers) = new queue<string>();}
#line 6297 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1672 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);(yyval.r.modifiers) = new queue<string>() ; (yyval.r.modifiers)->push("NEW");}
#line 6303 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1678 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6309 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1678 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6315 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1685 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6321 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1685 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6327 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1689 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6333 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1690 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6339 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1691 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6345 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1692 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6351 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1695 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6357 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1700 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6363 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1701 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6369 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1706 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6375 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1709 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6381 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1710 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6387 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1713 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6393 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1716 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6399 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1717 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6405 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1720 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6411 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1721 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6417 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1724 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6423 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1725 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6429 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1728 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6435 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1729 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6441 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1734 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6447 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1735 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6453 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1740 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6459 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1743 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6465 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1744 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6471 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1747 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6477 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1748 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6483 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1751 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6489 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1752 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6495 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1755 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6501 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1758 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6507 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1759 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6513 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1760 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6519 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1761 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6525 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1762 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6531 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1763 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6537 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1764 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6543 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1765 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6549 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1766 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6555 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1769 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6561 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1770 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6567 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1773 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6573 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1776 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6579 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1777 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6585 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1780 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6591 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1783 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6597 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 1790 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6603 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 1793 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6609 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 1796 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6615 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 1799 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6621 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 597:
#line 1802 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6627 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 598:
#line 1805 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6633 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 599:
#line 1813 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0);}
#line 6639 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 600:
#line 1814 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0,1);yyclearin;}
#line 6645 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 601:
#line 1817 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 6651 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 602:
#line 1818 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyclearin;}
#line 6657 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 603:
#line 1821 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 6663 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 604:
#line 1822 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyclearin;}
#line 6669 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 605:
#line 1825 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0);}
#line 6675 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 606:
#line 1826 "yacc.y" /* yacc.c:1646  */
    { l.a("semicolon",0,1);}
#line 6681 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 607:
#line 1829 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0);}
#line 6687 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 608:
#line 1830 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0,1);}
#line 6693 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6697 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1835 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




