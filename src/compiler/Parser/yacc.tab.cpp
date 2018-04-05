/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 8 "yacc.y"

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

	extern symbolParser* SPL;

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;
	extern Procedure* AST;

	Logger l("logs/parser.log");
	void yyerror(const char *);
		


/* Line 371 of yacc.c  */
#line 109 "yacc.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 49 "yacc.y"

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

		queue<Node*>*nodes,*exps;

		Procedure* proc;
		Symbol* symbol;
		Expression *exp;
		Statement* st;
		Operator op;
		Node* node;

		bool known_type;
        
		}r;
	

/* Line 387 of yacc.c  */
#line 325 "yacc.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 353 "yacc.tab.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3470

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  267
/* YYNRULES -- Number of rules.  */
#define YYNRULES  608
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1010

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   397

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    76,    79,
      82,    85,    88,    89,    92,    94,    96,    98,   102,   104,
     107,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   136,   138,   142,   146,   150,   154,
     159,   164,   165,   167,   172,   177,   178,   180,   182,   186,
     188,   192,   197,   200,   203,   205,   211,   219,   223,   224,
     226,   231,   236,   241,   246,   250,   253,   258,   260,   262,
     264,   266,   268,   271,   274,   276,   278,   281,   284,   287,
     290,   293,   295,   297,   299,   301,   306,   312,   319,   325,
     331,   337,   338,   340,   342,   345,   347,   349,   351,   355,
     359,   363,   365,   369,   373,   375,   379,   383,   385,   389,
     393,   397,   401,   405,   409,   411,   415,   419,   421,   425,
     427,   431,   433,   437,   439,   443,   445,   449,   451,   457,
     461,   463,   465,   467,   469,   471,   473,   475,   477,   479,
     481,   483,   485,   487,   489,   491,   493,   495,   497,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   519,
     521,   523,   524,   529,   533,   534,   536,   538,   541,   543,
     547,   550,   553,   556,   559,   562,   564,   568,   570,   574,
     576,   578,   580,   586,   590,   592,   596,   600,   603,   606,
     609,   612,   615,   618,   621,   624,   627,   630,   633,   636,
     639,   642,   644,   646,   648,   650,   652,   654,   656,   658,
     660,   664,   665,   672,   676,   682,   686,   687,   689,   691,
     694,   697,   699,   702,   706,   709,   711,   713,   715,   717,
     720,   721,   728,   734,   735,   736,   744,   745,   754,   756,
     766,   768,   769,   771,   772,   774,   775,   777,   779,   781,
     783,   785,   787,   791,   794,   802,   804,   806,   808,   810,
     812,   815,   818,   821,   824,   828,   833,   837,   841,   846,
     850,   854,   858,   859,   861,   865,   869,   873,   877,   882,
     884,   887,   894,   901,   904,   905,   907,   910,   913,   916,
     922,   928,   930,   932,   939,   941,   945,   949,   952,   955,
     956,   958,   959,   961,   962,   964,   965,   972,   973,   975,
     977,   980,   983,   987,   992,   994,   997,   999,  1001,  1007,
    1013,  1017,  1021,  1023,  1026,  1028,  1030,  1032,  1034,  1036,
    1038,  1040,  1041,  1043,  1045,  1048,  1050,  1052,  1054,  1056,
    1058,  1060,  1062,  1064,  1066,  1068,  1070,  1072,  1074,  1076,
    1077,  1086,  1087,  1096,  1097,  1099,  1102,  1105,  1110,  1112,
    1116,  1120,  1121,  1123,  1125,  1128,  1130,  1132,  1134,  1136,
    1138,  1140,  1142,  1144,  1146,  1148,  1155,  1162,  1168,  1174,
    1176,  1177,  1187,  1188,  1198,  1199,  1209,  1210,  1220,  1229,
    1238,  1247,  1256,  1257,  1259,  1261,  1265,  1267,  1269,  1271,
    1275,  1277,  1281,  1283,  1285,  1290,  1294,  1298,  1299,  1301,
    1303,  1308,  1318,  1321,  1324,  1325,  1327,  1328,  1330,  1336,
    1342,  1344,  1346,  1353,  1364,  1367,  1370,  1376,  1382,  1391,
    1397,  1403,  1406,  1411,  1413,  1415,  1423,  1434,  1436,  1438,
    1440,  1442,  1444,  1446,  1448,  1450,  1452,  1454,  1456,  1458,
    1460,  1462,  1464,  1466,  1468,  1470,  1472,  1474,  1476,  1478,
    1486,  1494,  1495,  1505,  1506,  1508,  1514,  1520,  1528,  1530,
    1532,  1534,  1536,  1544,  1545,  1547,  1550,  1554,  1555,  1557,
    1559,  1562,  1564,  1566,  1568,  1570,  1572,  1574,  1576,  1578,
    1580,  1584,  1589,  1590,  1592,  1594,  1598,  1599,  1608,  1609,
    1611,  1614,  1618,  1619,  1621,  1623,  1626,  1628,  1630,  1632,
    1634,  1643,  1652,  1653,  1655,  1656,  1667,  1668,  1682,  1686,
    1690,  1697,  1704,  1711,  1713,  1716,  1724,  1725,  1727,  1730,
    1734,  1739,  1740,  1742,  1744,  1748,  1751,  1756,  1766,  1776,
    1778,  1780,  1783,  1790,  1798,  1799,  1801,  1804,  1806,  1808,
    1810,  1812,  1814,  1816,  1818,  1820,  1822,  1824,  1828,  1831,
    1832,  1834,  1836,  1840,  1841,  1842,  1843,  1844,  1845,  1846,
    1848,  1850,  1852,  1854,  1856,  1858,  1860,  1862,  1864
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     280,     0,    -1,   145,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,    50,    -1,    73,    -1,    32,    -1,   287,
      -1,   287,    -1,   149,    -1,   157,    -1,   150,    -1,   147,
      -1,   151,    -1,   155,    -1,   156,    -1,   152,    -1,    12,
      -1,   153,    -1,   154,    -1,    22,    -1,    62,    -1,    14,
      -1,    64,    -1,    80,    -1,    42,    -1,    76,    -1,    47,
      -1,    77,    -1,    17,    -1,    35,    -1,    26,    -1,    51,
      -1,    68,    -1,   148,   111,    -1,    83,   111,    -1,   157,
     159,    -1,   150,   159,    -1,   287,   159,    -1,    -1,   159,
     158,    -1,     3,    -1,   208,    -1,   162,    -1,   161,    97,
     162,    -1,   208,    -1,    60,   160,    -1,    53,   160,    -1,
     165,    -1,   164,    -1,   144,    -1,   178,    -1,   166,    -1,
     167,    -1,   169,    -1,   172,    -1,   173,    -1,   176,    -1,
     180,    -1,   185,    -1,   181,    -1,   182,    -1,   102,   208,
     103,    -1,   163,   108,     4,    -1,   151,   108,     4,    -1,
     155,   108,     4,    -1,   164,   102,   168,   103,    -1,   287,
     102,   168,   103,    -1,    -1,   161,    -1,   163,    98,   171,
      99,    -1,   287,    98,   171,    99,    -1,    -1,   171,    -1,
     208,    -1,   171,    97,   208,    -1,    71,    -1,    11,   108,
       4,    -1,    11,    98,   171,    99,    -1,   186,   139,    -1,
     186,   140,    -1,   177,    -1,    49,   148,   102,   168,   103,
      -1,    49,   149,    98,   171,    99,   158,   179,    -1,    49,
     157,   360,    -1,    -1,   360,    -1,    75,   102,   148,   103,
      -1,    75,   102,    83,   103,    -1,    18,   102,   208,   103,
      -1,    78,   102,   208,   103,    -1,   186,   141,     4,    -1,
     114,   190,    -1,    65,   102,   148,   103,    -1,   163,    -1,
     287,    -1,   174,    -1,   175,    -1,   183,    -1,   116,   190,
      -1,   117,   190,    -1,   191,    -1,   186,    -1,   139,   190,
      -1,   140,   190,    -1,   109,   190,    -1,   110,   190,    -1,
     111,   190,    -1,   188,    -1,   189,    -1,   184,    -1,   187,
      -1,   102,   208,   103,   187,    -1,   102,   195,   111,   103,
     190,    -1,   102,   287,   159,   192,   103,   190,    -1,   102,
     151,   192,   103,   190,    -1,   102,   155,   192,   103,   190,
      -1,   102,    83,   192,   103,   190,    -1,    -1,   193,    -1,
     194,    -1,   193,   194,    -1,   159,    -1,   111,    -1,   190,
      -1,   195,   111,   190,    -1,   195,   112,   190,    -1,   195,
     113,   190,    -1,   195,    -1,   196,   109,   195,    -1,   196,
     110,   195,    -1,   196,    -1,   197,   129,   196,    -1,   197,
     130,   196,    -1,   197,    -1,   198,   105,   197,    -1,   198,
     104,   197,    -1,   198,   135,   197,    -1,   198,   136,   197,
      -1,   198,    45,   148,    -1,   198,    10,   148,    -1,   198,
      -1,   199,   133,   198,    -1,   199,   134,   198,    -1,   199,
      -1,   200,   114,   199,    -1,   200,    -1,   201,   119,   200,
      -1,   201,    -1,   202,   115,   201,    -1,   202,    -1,   203,
     137,   202,    -1,   203,    -1,   204,   138,   203,    -1,   204,
      -1,   204,   118,   208,   107,   208,    -1,   190,   207,   208,
      -1,   120,    -1,   121,    -1,   122,    -1,   123,    -1,   124,
      -1,   125,    -1,   126,    -1,   127,    -1,   128,    -1,   131,
      -1,   132,    -1,   205,    -1,   206,    -1,   208,    -1,   208,
      -1,   218,    -1,   219,    -1,   212,    -1,   213,    -1,   217,
      -1,   228,    -1,   230,    -1,   241,    -1,   260,    -1,   267,
      -1,   272,    -1,   273,    -1,   274,    -1,   275,    -1,   242,
      -1,   277,    -1,    -1,   100,   214,   215,   101,    -1,   100,
       1,   101,    -1,    -1,   216,    -1,   211,    -1,   216,   211,
      -1,   106,    -1,     4,   107,   211,    -1,   220,   106,    -1,
     225,   106,    -1,   220,     1,    -1,   225,     1,    -1,   148,
     221,    -1,   222,    -1,   221,    97,   222,    -1,     4,    -1,
       4,   120,   223,    -1,   208,    -1,   360,    -1,   224,    -1,
      66,   148,    98,   208,    99,    -1,    20,   148,   226,    -1,
     227,    -1,   226,    97,   227,    -1,     4,   120,   209,    -1,
     167,   106,    -1,   177,   106,    -1,   206,   106,    -1,   174,
     106,    -1,   175,   106,    -1,   188,   106,    -1,   189,   106,
      -1,   167,     1,    -1,   177,     1,    -1,   206,     1,    -1,
     174,     1,    -1,   175,     1,    -1,   188,     1,    -1,   189,
       1,    -1,   167,    -1,   177,    -1,   206,    -1,   174,    -1,
     175,    -1,   188,    -1,   189,    -1,   231,    -1,   234,    -1,
      39,   233,   212,    -1,    -1,    39,   233,   212,    27,   232,
     212,    -1,   406,   210,   407,    -1,    70,   406,   208,   407,
     235,    -1,   100,   236,   101,    -1,    -1,   237,    -1,   238,
      -1,   237,   238,    -1,   239,   216,    -1,   240,    -1,   239,
     240,    -1,    15,   209,   107,    -1,    23,   107,    -1,   243,
      -1,   247,    -1,   250,    -1,   259,    -1,    79,   213,    -1,
      -1,    85,   102,   210,   103,   244,   212,    -1,    85,   102,
       1,   103,   212,    -1,    -1,    -1,    85,     1,   245,   210,
       1,   212,   246,    -1,    -1,   249,   212,    85,   102,   210,
     248,   103,   106,    -1,    25,    -1,   251,   406,   252,   408,
     253,   408,   254,   407,   212,    -1,    36,    -1,    -1,   255,
      -1,    -1,   256,    -1,    -1,   257,    -1,   220,    -1,   258,
      -1,   210,    -1,   258,    -1,   229,    -1,   258,    97,   229,
      -1,   251,   212,    -1,    37,   406,   148,     4,   409,   208,
     407,    -1,   261,    -1,   262,    -1,   263,    -1,   264,    -1,
     266,    -1,    13,   106,    -1,    13,     1,    -1,    21,   106,
      -1,    21,     1,    -1,    38,     4,   106,    -1,    38,    15,
     209,   106,    -1,    38,    23,   106,    -1,    38,     4,     1,
      -1,    38,    15,   209,     1,    -1,    38,    23,     1,    -1,
      61,   265,   106,    -1,    61,   265,     1,    -1,    -1,   208,
      -1,    72,   265,   106,    -1,    72,   265,     1,    -1,    74,
     213,   268,    -1,    74,   213,   271,    -1,    74,   213,   268,
     271,    -1,   269,    -1,   268,   269,    -1,    16,   102,   155,
     270,   103,   213,    -1,    16,   102,   147,   270,   103,   213,
      -1,    16,   213,    -1,    -1,     4,    -1,    33,   213,    -1,
      18,   213,    -1,    78,   213,    -1,    46,   102,   208,   103,
     212,    -1,    81,   102,   276,   103,   212,    -1,   220,    -1,
     208,    -1,    34,   102,   148,   278,   103,   212,    -1,   279,
      -1,   278,    97,   279,    -1,     4,   120,   208,    -1,   281,
     282,    -1,   281,   294,    -1,    -1,   290,    -1,    -1,   388,
      -1,    -1,   294,    -1,    -1,   282,    48,   287,   285,   289,
     286,    -1,    -1,   106,    -1,     4,    -1,   288,     4,    -1,
       4,   108,    -1,   288,     4,   108,    -1,   100,   281,   283,
     101,    -1,   291,    -1,   290,   291,    -1,   292,    -1,   293,
      -1,    81,     4,   120,   287,   106,    -1,    81,     4,   120,
     287,     1,    -1,    81,   146,   106,    -1,    81,   146,     1,
      -1,   295,    -1,   294,   295,    -1,   284,    -1,   296,    -1,
     300,    -1,   353,    -1,   363,    -1,   380,    -1,   387,    -1,
      -1,   298,    -1,   299,    -1,   298,   299,    -1,     9,    -1,
      31,    -1,    44,    -1,    49,    -1,    54,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    63,    -1,    67,    -1,
      79,    -1,    82,    -1,    84,    -1,    -1,   282,   297,   405,
       4,   303,   301,   306,   286,    -1,    -1,   282,   297,   405,
       4,   303,   302,     1,   286,    -1,    -1,   304,    -1,   107,
     155,    -1,   107,   305,    -1,   107,   155,    97,   305,    -1,
     147,    -1,   305,    97,   147,    -1,   100,   307,   101,    -1,
      -1,   308,    -1,   309,    -1,   308,   309,    -1,   310,    -1,
     311,    -1,   312,    -1,   327,    -1,   334,    -1,   338,    -1,
     341,    -1,   346,    -1,   350,    -1,   296,    -1,   282,   297,
      20,   148,   226,   106,    -1,   282,   297,    20,   148,   226,
       1,    -1,   282,   297,   148,   221,   106,    -1,   282,   297,
     148,   221,     1,    -1,   313,    -1,    -1,   282,   297,   148,
     287,   102,   318,   103,   314,   213,    -1,    -1,   282,   297,
      83,   287,   102,   318,   103,   315,   213,    -1,    -1,   282,
     297,   148,   287,   102,     1,   103,   316,   213,    -1,    -1,
     282,   297,    83,   287,   102,     1,   103,   317,   213,    -1,
     282,   297,   148,   287,   102,   318,   103,   106,    -1,   282,
     297,    83,   287,   102,   318,   103,   106,    -1,   282,   297,
     148,   287,   102,     1,   103,   106,    -1,   282,   297,    83,
     287,   102,     1,   103,   106,    -1,    -1,   320,    -1,   321,
      -1,   320,    97,   321,    -1,   148,    -1,    83,    -1,   322,
      -1,   320,    97,   322,    -1,   324,    -1,   321,    97,   324,
      -1,   323,    -1,   326,    -1,   282,   325,   148,     4,    -1,
     323,   120,   223,    -1,   326,   120,   223,    -1,    -1,    60,
      -1,    53,    -1,   282,    55,   148,     4,    -1,   282,   297,
     148,   287,   403,   100,   328,   101,   404,    -1,   331,   329,
      -1,   332,   330,    -1,    -1,   332,    -1,    -1,   331,    -1,
     282,    93,   404,   333,   403,    -1,   282,    94,   404,   333,
     403,    -1,   213,    -1,   106,    -1,   282,   297,    29,   148,
     221,   106,    -1,   282,   297,    29,   148,   287,   401,   100,
     335,   101,   402,    -1,   336,   337,    -1,   337,   336,    -1,
     282,    95,   402,   213,   401,    -1,   282,    96,   402,   213,
     401,    -1,   282,   297,   339,   403,   100,   328,   101,   404,
      -1,   148,    71,    98,   320,    99,    -1,   148,   340,    98,
     320,    99,    -1,   288,    71,    -1,   282,   297,   342,   351,
      -1,   343,    -1,   345,    -1,   148,    52,   344,   102,   148,
       4,   103,    -1,   148,    52,   344,   102,   148,     4,    97,
     148,     4,   103,    -1,   109,    -1,   110,    -1,   116,    -1,
     117,    -1,   139,    -1,   140,    -1,    73,    -1,    32,    -1,
     111,    -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,
     119,    -1,   129,    -1,   130,    -1,   133,    -1,   134,    -1,
     104,    -1,   105,    -1,   136,    -1,   135,    -1,    40,    52,
     148,   102,   148,     4,   103,    -1,    30,    52,   148,   102,
     148,     4,   103,    -1,    -1,   282,   297,     4,   102,   318,
     103,   347,   348,   352,    -1,    -1,   349,    -1,   107,    11,
     102,   168,   103,    -1,   107,    71,   102,   168,   103,    -1,
     282,   297,   117,     4,   102,   103,   213,    -1,   213,    -1,
     106,    -1,   213,    -1,   106,    -1,   282,   297,    69,     4,
     354,   356,   286,    -1,    -1,   355,    -1,   107,   305,    -1,
     100,   357,   101,    -1,    -1,   358,    -1,   359,    -1,   358,
     359,    -1,   310,    -1,   311,    -1,   312,    -1,   327,    -1,
     334,    -1,   338,    -1,   341,    -1,   346,    -1,   296,    -1,
     100,   361,   101,    -1,   100,   362,    97,   101,    -1,    -1,
     362,    -1,   223,    -1,   362,    97,   223,    -1,    -1,   282,
     297,    43,     4,   365,   364,   367,   286,    -1,    -1,   366,
      -1,   107,   305,    -1,   100,   368,   101,    -1,    -1,   369,
      -1,   370,    -1,   369,   370,    -1,   371,    -1,   373,    -1,
     378,    -1,   375,    -1,   282,   372,   148,     4,   102,   318,
     103,   379,    -1,   282,   372,    83,     4,   102,   318,   103,
     379,    -1,    -1,    49,    -1,    -1,   282,   372,   148,     4,
     403,   100,   377,   101,   404,   374,    -1,    -1,   282,   372,
     148,    71,    98,   320,    99,   403,   100,   377,   101,   404,
     376,    -1,   282,    93,   379,    -1,   282,    94,   379,    -1,
     282,    93,   379,   282,    94,   379,    -1,   282,    94,   379,
     282,    93,   379,    -1,   282,   372,    29,   148,     4,   379,
      -1,   106,    -1,   100,   101,    -1,   282,   297,    28,     4,
     381,   383,   286,    -1,    -1,   382,    -1,   107,   153,    -1,
     100,   384,   101,    -1,   100,   385,    97,   101,    -1,    -1,
     385,    -1,   386,    -1,   385,    97,   386,    -1,   282,     4,
      -1,   282,     4,   120,   209,    -1,   282,   297,    24,   319,
       4,   102,   318,   103,   106,    -1,   282,   297,    24,   319,
       4,   102,   318,   103,     1,    -1,   389,    -1,   390,    -1,
     389,   390,    -1,   399,    98,   391,   394,    99,   400,    -1,
     399,    98,   391,   394,    97,    99,   400,    -1,    -1,   392,
      -1,   393,   107,    -1,    86,    -1,    87,    -1,    29,    -1,
      88,    -1,    89,    -1,    90,    -1,    91,    -1,    61,    -1,
      92,    -1,   395,    -1,   394,    97,   395,    -1,   397,   396,
      -1,    -1,   398,    -1,   147,    -1,   102,   170,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,     1,    -1,
     102,    -1,     1,    -1,   103,    -1,     1,    -1,   106,    -1,
       1,    -1,    41,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   142,   142,   143,   144,   145,   146,   147,   150,   151,
     157,   161,   166,   167,   171,   172,   176,   177,   178,   182,
     183,   187,   188,   189,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   204,   205,   208,   209,   212,   213,   216,
     217,   218,   221,   222,   225,   229,   233,   234,   237,   238,
     239,   242,   243,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   260,   263,   264,   265,   268,
     269,   272,   273,   276,   277,   280,   281,   284,   285,   288,
     291,   292,   295,   298,   301,   304,   307,   308,   311,   312,
     315,   316,   319,   322,   325,   328,   331,   334,   335,   336,
     337,   338,   341,   342,   343,   344,   347,   350,   353,   354,
     355,   356,   357,   358,   359,   367,   368,   369,   370,   371,
     372,   375,   376,   379,   380,   383,   384,   387,   388,   393,
     398,   406,   411,   416,   424,   429,   434,   442,   447,   452,
     457,   462,   467,   472,   480,   485,   490,   498,   503,   510,
     515,   523,   528,   536,   541,   549,   554,   563,   568,   576,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   597,   598,   601,   608,   612,   613,   614,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,   628,
     629,   632,   632,   633,   636,   637,   641,   642,   645,   648,
     651,   652,   653,   654,   657,   665,   672,   682,   687,   694,
     695,   696,   699,   702,   709,   718,   730,   739,   740,   741,
     742,   743,   744,   745,   747,   748,   749,   750,   751,   752,
     753,   756,   757,   758,   759,   760,   761,   762,   765,   766,
     769,   770,   770,   773,   777,   780,   783,   784,   787,   788,
     791,   794,   795,   798,   799,   802,   803,   804,   805,   808,
     811,   811,   812,   813,   813,   813,   817,   816,   825,   829,
     832,   837,   838,   847,   848,   856,   857,   864,   865,   868,
     871,   874,   875,   878,   882,   886,   887,   888,   889,   890,
     893,   894,   897,   898,   901,   902,   903,   904,   905,   906,
     909,   910,   913,   914,   917,   918,   921,   922,   923,   926,
     927,   930,   931,   932,   935,   936,   939,   942,   945,   948,
     951,   954,   955,   959,   962,   963,   966,   969,   970,   973,
     974,   977,   978,   981,   982,   985,   985,   989,   990,   994,
     998,  1005,  1006,  1010,  1013,  1014,  1017,  1018,  1021,  1022,
    1025,  1026,  1029,  1030,  1033,  1034,  1037,  1038,  1039,  1040,
    1041,  1053,  1057,  1064,  1070,  1078,  1079,  1080,  1081,  1082,
    1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,  1091,  1102,
    1101,  1107,  1106,  1115,  1116,  1119,  1120,  1121,  1133,  1139,
    1148,  1152,  1153,  1156,  1157,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1168,  1169,  1172,  1177,  1185,  1190,  1198,
    1203,  1202,  1210,  1209,  1216,  1215,  1222,  1220,  1231,  1235,
    1239,  1243,  1251,  1254,  1258,  1262,  1271,  1272,  1284,  1289,
    1296,  1301,  1308,  1316,  1326,  1337,  1345,  1356,  1357,  1358,
    1361,  1372,  1378,  1379,  1382,  1383,  1386,  1387,  1390,  1396,
    1402,  1403,  1406,  1407,  1413,  1414,  1417,  1423,  1429,  1435,
    1437,  1440,  1444,  1447,  1448,  1451,  1452,  1455,  1456,  1457,
    1458,  1459,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,
    1468,  1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1479,
    1480,  1484,  1483,  1490,  1491,  1494,  1495,  1511,  1514,  1515,
    1518,  1519,  1524,  1527,  1528,  1531,  1534,  1537,  1538,  1541,
    1542,  1545,  1546,  1547,  1548,  1549,  1550,  1551,  1552,  1554,
    1559,  1560,  1563,  1564,  1567,  1568,  1574,  1573,  1581,  1582,
    1585,  1588,  1591,  1592,  1595,  1596,  1599,  1600,  1601,  1602,
    1606,  1612,  1620,  1621,  1627,  1624,  1634,  1630,  1638,  1639,
    1640,  1641,  1644,  1649,  1650,  1655,  1658,  1659,  1662,  1665,
    1666,  1669,  1670,  1673,  1674,  1677,  1678,  1683,  1684,  1689,
    1692,  1693,  1696,  1697,  1700,  1701,  1704,  1707,  1708,  1709,
    1710,  1711,  1712,  1713,  1714,  1715,  1718,  1719,  1722,  1725,
    1726,  1729,  1732,  1739,  1742,  1745,  1748,  1751,  1754,  1762,
    1763,  1766,  1767,  1770,  1771,  1774,  1775,  1778,  1779
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
  "left_bracket_circle", "right_bracket_circle", "semicolon", "in", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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
       1,     1,     3,     2,     7,     1,     1,     1,     1,     1,
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

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
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
     331,   331,   193,   339,     0,     0,     0,     0,   268,     0,
     270,     0,     0,     0,     0,   302,     0,   302,     0,     0,
       0,     0,     0,   198,     0,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   177,   178,     0,   195,
     179,   175,   176,     0,     0,   180,   181,   238,   239,   182,
     189,   255,   256,     0,   257,     0,   258,   183,   285,   286,
     287,   288,   289,   184,   185,   186,   187,   188,   190,    98,
       0,    86,    89,    43,   212,     0,   553,   552,     0,     0,
     331,     0,   493,   216,   215,   331,     0,     0,   416,   412,
       0,   331,   459,   414,   410,     0,   460,   598,   598,   598,
       0,   442,   445,     0,   443,   447,     0,   291,   290,   317,
       0,   293,   292,     0,   602,   601,     0,     0,     0,     0,
       0,     0,     0,   303,     0,     0,     0,     0,   318,   259,
       0,   263,     0,   204,   224,   217,   227,   220,   228,   221,
     225,   218,   229,   222,   230,   223,   226,   219,   192,   197,
     202,   200,   203,   201,     0,   601,   283,   271,     0,   554,
       0,     0,     0,     0,   597,     0,     0,   494,     0,     0,
     331,   331,     0,     0,   421,     0,   419,     0,     0,   420,
       0,   418,     0,   598,     0,     0,   458,   199,   213,     0,
       0,   297,   294,     0,   299,   296,   240,   174,     0,     0,
     301,   300,     0,   305,   304,     0,     0,   306,   309,   307,
     322,   321,     0,     0,     0,     0,     0,    56,    99,   100,
      84,   111,   112,   233,   277,   281,     0,   272,   278,   497,
     541,   540,     0,     0,   598,     0,     0,     0,   501,   500,
     492,   596,   596,   596,     0,   454,     0,   455,   490,   489,
     417,   413,     0,   465,   415,   411,   441,   451,   450,   597,
     597,     0,     0,   324,     0,   298,   295,   241,   604,   603,
     243,     0,     0,     0,   313,   316,   310,   308,     0,     0,
       0,   260,     0,   606,   605,   273,     0,   331,   331,   544,
     331,    71,    71,     0,     0,   453,     0,   448,   449,     0,
       0,     0,   608,   607,     0,     0,   319,   246,   244,   314,
     314,   320,     0,   262,     0,   266,   279,     0,   274,   282,
       0,     0,   545,     0,     0,     0,   595,   595,     0,   326,
     325,   323,     0,   242,     0,     0,     0,   247,   248,     0,
     251,   315,     0,     0,   264,   261,     0,   275,     0,     0,
     598,   495,   496,   456,   457,   466,   284,     0,   254,   245,
     249,   250,   252,     0,     0,   265,     0,     0,   276,   280,
     550,   551,   546,   253,   312,   311,   267,     0,   547,   269
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
     229,   230,   231,   232,   318,   415,   510,   828,   665,   666,
     667,   593,   668,   669,   670,   671,   672,   673,   523,   524,
     454,   455,   674,   552,   553,   675,   855,   676,   677,   935,
     750,   678,   938,   966,   967,   968,   969,   970,   679,   680,
     681,   944,   843,   995,   682,   976,   683,   684,   685,   856,
     947,   997,   857,   948,   998,   858,   686,   687,   688,   689,
     690,   691,   754,   692,   693,   837,   838,   972,   839,   694,
     695,   696,   697,   842,   698,   892,   893,     2,     3,   237,
     235,    14,    81,   149,   234,    11,   122,     4,     5,     6,
       7,    15,    16,    17,    48,    49,    50,    18,   162,   163,
     140,   141,   155,   270,   371,   372,   373,   255,   256,   257,
     258,   812,   807,   810,   805,   238,   110,   239,   240,   241,
     242,   243,   346,   244,   259,   629,   731,   734,   630,   631,
     889,   260,   799,   800,   801,   261,   472,   527,   262,   473,
     474,   582,   475,   263,   712,   796,   797,   382,   532,   870,
      19,   137,   138,   159,   264,   265,   266,   456,   484,   485,
      20,   156,   134,   135,   252,   357,   358,   359,   360,   462,
     361,   952,   362,  1008,   793,   363,   707,    21,   131,   132,
     153,   246,   247,   248,    22,    23,    24,    25,    76,    77,
      78,   117,   118,   145,   119,   146,    26,   166,   612,   923,
     528,   814,    65,   746,   900,   915,   934
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -813
static const yytype_int16 yypact[] =
{
     -13,   101,   281,   238,   -13,  -813,  -813,  -813,   155,    56,
    -813,   368,  -813,  1171,  -813,   252,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   238,  -813,   285,  -813,  -813,   393,
    -813,  -813,   332,  -813,  -813,  -813,   393,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,    35,  1388,
    -813,  3386,  -813,  -813,   299,   370,    91,  -813,  -813,  -813,
    -813,  1761,   446,   480,   527,   536,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,   393,  -813,   300,  -813,
    -813,   445,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,   470,  -813,   479,
    -813,   568,  -813,  -813,  -813,  -813,  -813,  -813,   568,   568,
     593,   492,   497,   498,   500,  -813,  -813,   322,  -813,   508,
    -813,   -13,   509,  -813,  -813,  -813,  -813,  -813,  -813,   518,
     627,   521,  -813,   393,  -813,  -813,   393,   522,  -813,   255,
     622,  -813,   267,  -813,  2797,  -813,  -813,   -51,  -813,  -813,
     179,  -813,   248,   509,  -813,   528,   524,   528,   301,   509,
     532,   528,   530,   630,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,    14,   534,  -813,  3302,  -813,   538,  -813,  -813,   540,
     541,  2510,  2797,  2797,  2797,  2797,  2797,  2797,  2797,  2797,
    -813,  -813,   537,   551,   205,   559,  -813,  -813,  -813,  -813,
     531,   570,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   373,  -813,  -813,  -813,   303,
    -813,   441,     9,   338,    32,   122,   556,   553,   558,   539,
     -52,  -813,  -813,  -813,   312,   574,   351,   343,   576,   580,
     583,  -813,   561,  -813,   562,   679,   589,   587,  -813,  -813,
     393,   357,   509,  1388,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   591,   378,  -813,  -813,   393,   379,
     509,   509,  -813,  2797,   689,  2797,   470,   159,   596,   251,
    3302,  3346,  2797,    42,    22,    70,   453,   595,   239,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,   692,   695,  2797,
     696,  2309,  -813,  2797,  -813,  -813,   697,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  2797,  2797,
    2797,  2797,  2797,  2797,  2797,  2797,  3302,  3302,  2797,  2797,
    2797,  2797,  2797,  2797,  2797,  2797,  2797,  2797,  2797,  2797,
    2797,  2309,  -813,  -813,  3302,  -813,  3302,    93,   238,   238,
    2395,  2395,   588,  -813,   384,  -813,   662,   613,   385,  -813,
    -813,  -813,  -813,  -813,  -813,  3214,  -813,  -813,   528,  1388,
    -813,   614,   410,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   346,  -813,   615,  2309,  2797,
    2395,  -813,   229,   259,   266,   617,  -813,  -813,   618,    42,
    -813,   620,   621,  2596,  3001,    42,  -813,  -813,   435,  -813,
    2797,  2797,   631,  -813,   628,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,   441,   441,     9,     9,   479,   479,   338,
     338,   338,   338,    32,    32,   122,   556,   553,   558,   625,
     539,   439,   633,    49,    52,  -813,  -813,   583,  -813,   561,
    -813,   562,  3302,  -813,  -813,  -813,  -813,  -813,  2797,  -813,
    -813,  -813,  3258,  -813,  -813,   197,  3302,  3302,   681,   685,
      61,    44,  -813,   305,  -813,  -813,  2921,  -813,  -813,  -813,
    -813,   635,   444,  -813,   638,   643,  -813,  -813,  -813,  -813,
    2797,  -813,  2797,  2797,  2797,  -813,   640,  -813,  -813,  -813,
    -813,  2309,  -813,  2797,  -813,  -813,  -813,  -813,   211,  -813,
    -813,  3302,    65,    29,   179,    66,    72,  3302,  3302,   639,
     293,  2997,   646,   128,  -813,   644,    30,   649,   648,  1478,
    -813,  -813,  -813,   745,  -813,   568,  -813,  2194,  -813,  -813,
    -813,  -813,  2797,  -813,  -813,  2797,    75,   650,   651,   652,
     653,   642,   142,  -813,   213,  -813,   231,   237,  2841,  2395,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,   656,   238,  -813,   760,  -813,  3134,   665,  -813,
     238,   238,   666,  1963,   664,   669,   568,  -813,  -813,  -813,
     671,   306,   179,   179,   674,   238,  -813,  2797,  -813,   767,
    -813,  -813,   677,  3302,  3302,   678,   680,  -813,  3302,   451,
    -813,  -813,   660,  -813,   682,   700,   238,   460,   403,   687,
     420,   421,  -813,   355,    94,   354,  3302,   108,  -813,   698,
    -813,    96,   279,    96,   702,  2797,    96,  2797,   699,   472,
     699,   703,   109,  -813,    76,   537,   551,   670,  1202,  1337,
     876,   526,  1289,   303,   112,  -813,  -813,  -813,   705,  1963,
    -813,  -813,  -813,   113,   120,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  2079,  -813,  1598,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,    68,
     709,  -813,  -813,  -813,  -813,   713,  -813,  -813,   712,   714,
     238,   483,   675,  -813,  -813,   238,    78,    79,   710,   716,
      80,   238,  -813,   717,   719,   718,  -813,  -813,  -813,  -813,
     724,  -813,  -813,   727,  -813,  -813,  1963,  -813,  -813,  -813,
      66,  -813,  -813,  3302,  -813,  -813,  3302,   126,  2797,   130,
    2079,  2797,  2797,  -813,   147,  2797,   168,    87,  -813,  -813,
    2711,  -813,  1717,   729,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   744,  2510,  -813,  2711,   699,  -813,
     306,   306,   468,   730,  -813,    40,   333,  -813,   481,   731,
     238,   238,   733,   734,  -813,   699,  -813,   699,   341,  -813,
     699,  -813,   699,  -813,   342,   342,  -813,  -813,   736,    81,
      83,  -813,  -813,   183,  -813,  -813,   803,  -813,    98,   735,
    -813,  -813,    98,  -813,  -813,   491,   699,    87,  -813,  -813,
    -813,  -813,   739,  2797,   741,   743,   732,   106,   107,   124,
     187,   214,   215,  -813,  -813,  -813,   195,  -813,   750,  -813,
    -813,  -813,   306,   306,  -813,   748,   747,   756,  -813,  -813,
    -813,  -813,  -813,  -813,   754,  -813,   764,  -813,  -813,  -813,
    -813,  -813,  3302,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,   740,   344,  -813,    48,  -813,  -813,  -813,  -813,  -813,
    -813,  2079,   762,   255,  -813,  -813,  -813,  -813,  2079,   862,
    2079,  -813,  2797,  -813,  -813,  2797,  2797,   428,   432,  -813,
     238,  2309,  2309,   699,   699,  -813,    84,  -813,  -813,  2797,
     860,  2079,  -813,  -813,  2797,  2079,  -813,   369,  -813,   864,
     864,  -813,  2079,  -813,  2079,  -813,  -813,   195,  -813,  -813,
     772,   776,  -813,   769,   768,   770,  -813,  -813,   771,  -813,
    -813,  -813,    98,  -813,  2797,   765,   775,   369,  -813,  1847,
    -813,  -813,   777,   779,  -813,  -813,   781,  2797,   306,   306,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,   778,  -813,  -813,
    -813,  1963,  -813,   699,   699,  -813,   780,    98,  -813,   750,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  2079,  -813,  -813
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -813,  -813,  -813,  -813,   -75,   243,   704,  -813,   -30,  -813,
     757,  -813,   -58,  -813,   715,   292,   -71,   482,  -813,   389,
    -813,  -813,  -813,  -813,   104,  -326,  -813,  -813,  -247,  -813,
    -813,   158,   182,  -813,   282,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,   488,   371,   449,   170,  -813,  -241,
    -813,   496,  -176,   261,   143,   268,   563,   564,   560,   566,
     565,  -813,  -813,   459,  -813,   276,  -596,  -741,  -662,  -644,
    -268,  -813,  -813,   -69,  -813,  -813,  -813,  -514,  -493,   313,
    -335,  -813,  -813,   161,   296,  -813,    -9,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   -57,  -813,   -60,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   -65,  -813,  -813,  -813,  -813,
    -813,  -813,   269,  -813,  -813,  -813,    77,   -27,    82,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,   -15,  -813,   796,     7,
    -813,  -813,  -813,  -113,    -1,   455,  -813,  -813,   918,  -813,
    -813,   782,    -3,  -141,  -224,  -813,   879,  -813,  -813,  -813,
    -813,  -813,  -112,  -813,  -813,  -813,   569,  -152,  -143,  -135,
    -813,  -813,  -813,  -813,  -813,  -187,  -813,  -275,   582,  -346,
    -345,   585,  -813,  -343,   -87,   309,  -813,  -813,   307,   310,
     116,   -41,  -813,   135,   137,   -34,  -813,  -813,   -28,  -813,
    -813,  -813,  -813,   -25,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,   683,  -271,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,   584,  -813,  -813,
    -813,  -813,  -813,  -813,    23,  -813,  -772,  -813,  -813,  -813,
    -813,  -813,  -813,   590,  -813,  -813,  -813,   922,  -813,  -813,
    -813,  -813,   805,  -813,  -813,  -813,  -813,   785,  -354,  -254,
    -516,  -715,  -813,  -351,  -812,     3,  -813
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -594
static const yytype_int16 yytable[] =
{
      10,   115,   448,   106,   449,   286,   451,   779,   391,   588,
      13,   713,    52,   815,   816,   442,   457,   254,   860,   861,
     902,   845,    51,   554,   157,   125,   385,   161,    56,   365,
     126,   102,   604,   548,    32,    58,    59,   127,   128,   784,
     249,   786,   326,   401,   402,   125,   267,  -593,   520,   932,
    -333,   866,   408,   506,    60,   483,   507,    30,   154,    61,
     109,   154,   481,    62,   154,    55,   338,   115,     1,   547,
     551,   125,   -11,   125,   817,   116,   520,   327,    63,   601,
     622,   160,   802,   803,   808,   891,   339,   894,   958,   933,
     917,   918,    79,   441,   445,   737,   521,   744,   886,   898,
     549,   589,   909,   835,    64,     8,   826,  -231,  -234,   741,
     761,   867,   273,   776,   780,   522,   106,   374,   322,   323,
     836,   782,   274,   285,   254,  -235,   375,   821,   370,   584,
     297,   824,   116,   396,   376,   116,   328,   329,   116,   364,
     124,   116,   482,   608,   102,   476,   423,   424,   830,   919,
     986,   284,   823,   396,    51,   124,   368,   383,   384,   245,
     124,   763,    31,   124,   496,   253,   340,   330,   331,   833,
     341,   945,   123,   109,   946,   355,   123,   124,   298,   -11,
     288,   396,   377,   124,   895,  1007,   124,   124,  -232,   124,
     124,   124,   124,   154,   124,   124,   913,    80,   745,   446,
     738,   899,   598,  -231,  -234,   531,  1000,  1001,   127,  -231,
    -234,   762,  -231,  -234,   742,  -236,  -237,   405,   777,   781,
     374,  -235,   106,   106,   617,   585,   783,  -235,   378,   375,
    -235,   370,   822,    52,   586,   379,   825,   376,   620,   609,
     621,   380,   125,    51,   381,   620,   841,   621,   610,   116,
     102,   102,  -328,   831,   125,   332,   333,   936,   356,    55,
     620,   388,   621,    28,   941,  1002,   943,   116,   106,   106,
     124,    55,   253,   854,   834,    29,   369,  -593,   865,   109,
     109,    12,  -422,   747,  -232,   377,   106,   961,   106,   896,
    -232,   963,   751,  -232,   748,   755,   102,   102,   974,   514,
     975,   914,   749,   299,    99,    28,    90,   106,   619,   545,
     585,  -236,  -237,   300,   102,   627,   102,  -236,  -237,   611,
    -236,  -237,   124,    93,   702,   109,   109,   550,    67,   779,
     711,   378,   486,   613,   787,   102,  -593,   340,   379,   614,
     124,   341,   124,   109,   380,   109,  -593,   381,   124,  -561,
    -593,   390,   289,   290,   291,   292,   293,   294,   295,   296,
      68,   245,   487,  1009,   109,   356,   164,   739,   987,   488,
     123,   616,    32,   927,   928,   448,   620,   124,   621,   369,
     757,   758,   759,    54,   964,    69,    70,    71,    72,    73,
      74,    75,   965,  -339,   106,  -339,   343,    55,   344,  -593,
     625,    28,  -507,   345,   106,   529,   705,   120,   106,   106,
     340,   530,   706,   559,   341,   708,   709,   277,   106,   142,
     233,   143,   102,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   102,   529,   316,   317,   102,   102,   882,   868,
      57,   930,   529,   303,   883,   479,   102,   931,   887,  -593,
     111,   109,  -334,   106,   529,  -593,   275,   287,  -532,   106,
     106,   109,   736,    28,   596,   109,   109,   324,   325,   519,
     525,   429,   430,   431,   432,   109,  -593,  -593,    28,  -508,
    -391,   102,  -593,  -593,   112,   459,  -533,   102,   102,   419,
     420,   421,   422,   422,   422,   422,   727,   728,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,  -593,   422,
     109,  -392,   304,   305,   306,   555,   109,   109,  -593,  -593,
     859,  -444,  -446,   392,   394,   596,  -593,   772,   869,  -548,
    -593,   113,   303,  -549,   497,   656,   303,   880,   504,   881,
     114,   303,   884,   535,   885,   121,   888,   888,   721,   233,
     722,   387,   319,   320,   321,   106,   106,   721,   395,   726,
     106,   862,   863,   655,   403,   320,   321,   904,   905,   427,
     428,   125,   529,   419,   282,   233,   871,   872,   106,   416,
     721,   123,   794,   102,   102,   425,   426,   443,   102,   444,
     124,   529,   699,   903,   418,   954,   955,   129,   628,   130,
     433,   434,   983,   984,   133,   136,   102,   139,   471,   286,
     144,   656,   109,   109,   439,   148,   233,   109,   924,   925,
     150,   152,   158,  -381,   251,   250,   453,   453,   128,   268,
     269,   271,   773,   628,   302,   109,   275,   730,   733,   655,
     280,    83,   281,   282,    84,   297,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,   956,   957,  -111,  -111,   298,
     538,   301,   539,   540,   541,   233,   453,   303,   699,    88,
     334,   764,   335,   336,    89,   342,   337,   348,   656,   347,
     349,   350,   351,   352,   354,   106,   499,   499,   106,    91,
     353,    92,   366,   386,   389,   508,   406,   657,   404,   407,
     409,   417,   656,    94,    95,   513,   655,    96,   458,   515,
     516,   461,   599,   102,   463,   477,   102,   792,   480,   471,
     489,   490,   798,   492,   493,  1004,  1005,   285,   501,   656,
     655,   502,   503,   517,   509,   699,   505,   518,   534,   536,
     537,   558,   109,   542,   583,   109,   587,   590,   591,   594,
     605,   658,   602,   603,   546,   284,   606,   655,   618,   699,
     556,   557,   607,   663,   622,   626,   700,   632,   -56,   390,
     704,   551,   -56,   657,   710,   659,   765,   715,   -56,   544,
     559,   718,   795,   719,   288,   723,   699,   657,   729,   657,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   529,
     743,   -56,   -56,   724,   752,   760,   778,   874,   876,   -56,
     -56,   -56,   788,   453,   789,   790,   804,   791,   728,   813,
     727,   600,   806,   809,   106,   811,   585,   658,   939,   846,
     897,   864,   873,   609,   912,   453,   878,   879,   901,   663,
     657,   658,   908,   658,   910,   940,   911,   916,   920,   921,
     872,   659,   102,   663,   657,   663,   716,   717,   922,   871,
     929,   720,   937,   942,   891,   659,   978,   659,   971,   979,
     980,   981,   988,   982,   985,   660,   989,   770,   278,   740,
     993,   109,   994,   509,   996,  1003,  1006,   151,   703,   279,
     543,   847,   495,   500,   658,   491,   437,   435,   623,   436,
     991,   818,   116,   438,   440,   714,   663,   949,   658,   992,
     990,   656,   999,   973,   906,   960,   756,   147,   659,   907,
     663,   753,    27,   753,   950,   951,   526,   792,    66,   236,
     447,   890,   659,   656,   450,   725,   877,   875,   735,   655,
     732,   478,   464,   953,   460,   848,    53,   165,   367,   272,
     977,   660,     0,     0,     0,     0,     0,   663,     0,     0,
       0,   655,     0,     0,   661,   660,     0,   660,   699,   849,
       0,     0,     0,     0,   -84,     0,     0,     0,   -84,     0,
       0,     0,   771,     0,   -84,     0,   819,     0,     0,   820,
     699,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   657,     0,   -84,   -84,     0,
       0,     0,   657,     0,   657,   -84,   -84,   -84,   660,     0,
     847,     0,     0,     0,   509,     0,     0,   827,   829,     0,
       0,   832,   660,     0,     0,   657,   840,     0,   827,   657,
     661,     0,   662,     0,     0,     0,   657,     0,   657,     0,
       0,     0,   664,     0,   661,     0,   661,     0,     0,   658,
       0,   287,     0,     0,     0,     0,   658,     0,   658,   850,
       0,   663,     0,   657,   848,     0,     0,     0,   663,     0,
     663,   847,     0,   659,     0,     0,   663,     0,     0,   658,
     659,     0,   659,   658,     0,   657,     0,     0,   849,     0,
     658,   663,   658,     0,     0,   663,     0,   661,     0,     0,
       0,   657,   663,   659,   663,     0,     0,   659,   662,   827,
       0,   661,     0,     0,   659,   926,   659,   658,   664,     0,
       0,     0,   662,     0,   662,   848,     0,     0,     0,   663,
       0,     0,   664,     0,   664,     0,     0,   663,     0,   658,
       0,   659,     0,     0,     0,     0,     0,     0,   851,   849,
       0,   663,     0,     0,     0,   658,     0,     0,     0,     0,
       0,  -327,     0,   659,     0,     0,     0,   663,     0,     0,
      33,     0,     0,   660,     0,   662,     0,     0,   827,   659,
     660,   827,   660,     0,     0,   664,     0,     0,   850,   662,
       0,     0,    34,   766,     0,   959,     0,     0,     0,   664,
     962,     0,     0,   660,     0,    35,     0,   660,     0,    36,
      37,     0,     0,     0,   660,    38,   660,    39,    40,    41,
      42,     0,     0,     0,    43,     0,   852,     0,    44,     0,
     509,     0,     0,     0,     0,     0,   853,     0,     0,     0,
      45,   660,     0,    46,     0,    47,     0,     0,     0,   850,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   661,   660,     0,     0,     0,     0,     0,   661,
       0,   661,     0,     0,     0,     0,     0,   851,     0,   660,
     774,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   661,     0,     0,     0,   661,     0,   767,     0,
       0,     0,     0,   661,     0,   661,     0,     0,     0,     0,
       0,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,     0,     0,   -99,   -99,     0,     0,     0,   768,     0,
     661,   -99,   -99,   -99,     0,     0,     0,     0,   851,     0,
     662,     0,     0,     0,     0,     0,     0,   662,     0,   662,
     664,     0,   661,     0,     0,   852,     0,   664,     0,   664,
       0,     0,     0,     0,     0,   853,     0,     0,   661,     0,
     662,     0,     0,     0,   662,     0,     0,     0,     0,     0,
     664,   662,     0,   662,   664,   775,     0,    33,     0,     0,
       0,   664,     0,   664,     0,     0,     0,     0,     0,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,   662,    34,
    -112,  -112,     0,     0,     0,     0,   852,     0,   664,     0,
       0,     0,    35,     0,     0,     0,   853,    37,     0,     0,
     662,     0,    38,   769,    39,    40,    41,    42,     0,     0,
     664,    43,     0,     0,     0,    44,   662,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,   664,    45,  -100,  -100,
      46,     0,    47,     0,     0,     0,  -100,  -100,  -100,   592,
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
       0,     0,  -191,     0,  -191,  -191,     0,     0,     0,   744,
       0,     0,    55,   167,   168,   169,   170,     0,     0,   171,
      82,   634,    83,     0,     0,    84,   635,  -191,  -191,   637,
      85,     0,     0,   638,    86,     0,     0,     0,     0,     0,
     173,     0,   639,    87,   640,   641,   642,   643,     0,     0,
      88,     0,     0,     0,   644,    89,     0,   174,   175,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   645,
      91,     0,    92,   176,     0,     0,    93,     0,   646,   177,
     647,   178,   648,   179,    94,    95,   649,   650,    96,   651,
       0,     0,     0,   652,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   529,     0,
     785,     0,     0,     0,   653,     0,     0,   182,   183,   184,
       0,     0,   185,     0,   186,   187,     0,     0,   844,     0,
       0,    55,   167,   168,   169,   170,     0,     0,   171,    82,
       0,    83,     0,     0,    84,   172,     0,   188,   189,    85,
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
     634,    83,   964,     0,    84,   635,     0,   636,   637,    85,
     965,     0,   638,    86,     0,     0,     0,     0,     0,   173,
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
     187,     0,     0,    55,   167,   168,   169,   170,     0,     0,
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
      85,     0,    93,    64,    86,     0,     0,   511,     0,     0,
      94,    95,     0,    87,    96,     0,     0,   470,     0,     0,
      88,     0,     0,     0,     0,    89,    55,     0,     0,    90,
       0,     0,     0,     0,    82,     0,    83,     0,     0,    84,
      91,     0,    92,     0,    85,     0,    93,     0,    86,     0,
       0,     0,     0,     0,    94,    95,     0,    87,    96,     0,
       0,   512,     0,     0,    88,     0,     0,     0,     0,    89,
      55,     0,     0,    90,     0,     0,     0,     0,    82,     0,
      83,     0,     0,    84,    91,     0,    92,     0,    85,     0,
      93,     0,    86,     0,     0,     0,     0,     0,    94,    95,
       0,    87,    96,     0,     0,   276,     0,     0,    88,     0,
       0,     0,     0,    89,     0,    33,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,     0,
      92,     0,     0,     0,    93,     0,     0,    34,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,     0,   393,
      35,     0,     0,     0,    36,    37,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,     0,
      47
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-813)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    76,   348,    61,   349,   181,   349,   669,   279,   525,
       3,   607,    15,   728,   729,   341,   351,   158,   790,   791,
     832,   762,    15,   516,   136,     3,   273,   139,    29,   253,
     101,    61,   548,     4,     4,    36,     1,   108,   109,   683,
     153,   685,    10,   284,   285,     3,   159,    98,     4,     1,
     101,    11,   299,     4,    19,   390,     4,     1,   133,    24,
      61,   136,   388,    28,   139,     4,   118,   142,    81,     4,
       4,     3,     4,     3,   736,    76,     4,    45,    43,     4,
       4,   139,     4,     4,     4,     4,   138,     4,     4,    41,
     862,   863,     1,   340,     1,     1,    52,     1,   813,     1,
      71,    71,   843,    16,    69,     4,   750,     1,     1,     1,
       1,    71,    98,     1,     1,    71,   174,   269,   109,   110,
      33,     1,   108,   181,   265,     1,   269,     1,   269,     1,
     108,     1,   133,   111,   269,   136,   104,   105,   139,   252,
     111,   142,   389,     1,   174,   369,   322,   323,     1,   864,
     962,   181,   748,   111,   147,   111,   268,   270,   271,   152,
     111,   654,   106,   111,   405,   158,    98,   135,   136,     1,
     102,   912,   111,   174,   915,   250,   111,   111,   108,   111,
     181,   111,   269,   111,     1,   997,   111,   111,     1,   111,
     111,   111,   111,   268,   111,   111,     1,   106,   102,   106,
     106,   103,   537,    97,    97,   473,   978,   979,   279,   103,
     103,   102,   106,   106,   106,     1,     1,   288,   106,   106,
     372,    97,   280,   281,   559,    97,   106,   103,   269,   372,
     106,   372,   106,   236,   106,   269,   106,   372,   583,    97,
     583,   269,     3,   236,   269,   590,   760,   590,   106,   250,
     280,   281,     0,   106,     3,   133,   134,   901,   251,     4,
     605,   102,   605,   108,   908,   980,   910,   268,   326,   327,
     111,     4,   265,   787,   106,   120,   269,    98,   794,   280,
     281,     0,   103,     4,    97,   372,   344,   931,   346,   106,
     103,   935,   643,   106,    15,   646,   326,   327,   942,   102,
     944,   106,    23,    98,    61,   108,    51,   365,   583,    98,
      97,    97,    97,   108,   344,   590,   346,   103,   103,   106,
     106,   106,   111,    68,   595,   326,   327,   514,    29,   991,
     605,   372,   103,   102,   685,   365,    98,    98,   372,   102,
     111,   102,   111,   344,   372,   346,    98,   372,   111,   101,
      98,   100,   182,   183,   184,   185,   186,   187,   188,   189,
      61,   354,   103,  1007,   365,   358,    99,   635,   964,   103,
     111,   558,     4,   889,   890,   721,   721,   111,   721,   372,
     648,   649,   650,    98,    15,    86,    87,    88,    89,    90,
      91,    92,    23,   100,   452,   102,    53,     4,    55,    98,
     587,   108,   101,    60,   462,   100,   100,   107,   466,   467,
      98,   106,   106,   120,   102,   602,   603,   174,   476,    97,
     144,    99,   452,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   462,   100,   131,   132,   466,   467,    97,   106,
     108,    97,   100,    97,   103,    99,   476,   103,   106,    98,
       4,   452,   101,   511,   100,    98,   102,   181,   101,   517,
     518,   462,   107,   108,   535,   466,   467,   129,   130,   470,
     471,   328,   329,   330,   331,   476,    98,    98,   108,   101,
     101,   511,    98,    98,     4,   101,   101,   517,   518,   319,
     320,   321,   322,   323,   324,   325,    93,    94,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,    98,   339,
     511,   101,   139,   140,   141,   516,   517,   518,    98,    98,
     788,   101,   101,   280,   281,   596,    98,     1,   796,   101,
      98,     4,    97,   101,    99,   593,    97,   805,    99,   807,
       4,    97,   810,    99,   812,   100,   814,   815,    97,   273,
      99,   275,   111,   112,   113,   613,   614,    97,   282,    99,
     618,    93,    94,   593,   111,   112,   113,   835,   836,   326,
     327,     3,   100,   403,   102,   299,    95,    96,   636,   303,
      97,   111,    99,   613,   614,   324,   325,   344,   618,   346,
     111,   100,   593,   102,   318,   921,   922,     4,   591,   107,
     332,   333,   956,   957,   107,   107,   636,   107,   365,   785,
     102,   669,   613,   614,   338,   106,   340,   618,   872,   873,
     102,   100,   100,     1,   100,    97,   350,   351,   699,    97,
     100,     1,   106,   626,   103,   636,   102,   630,   631,   669,
     102,    14,   102,   102,    17,   108,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   923,   924,   131,   132,   108,
     490,   102,   492,   493,   494,   389,   390,    97,   669,    42,
     114,     1,   119,   115,    47,   101,   137,    97,   736,   103,
      97,   120,   120,     4,    97,   743,   410,   411,   746,    62,
     101,    64,   101,     4,    98,   452,     4,   593,   103,     4,
       4,     4,   760,    76,    77,   462,   736,    80,   120,   466,
     467,    49,   542,   743,   101,   101,   746,   710,   103,   476,
     103,   103,   715,   103,   103,   993,   994,   785,    97,   787,
     760,   103,   107,    52,   458,   736,   103,    52,   103,   101,
      97,   102,   743,   103,    98,   746,   102,    98,   100,     4,
      98,   593,   102,   102,   511,   785,   103,   787,   102,   760,
     517,   518,   120,   593,     4,   100,   102,   101,    98,   100,
      99,     4,   102,   669,   100,   593,   106,   100,   108,   503,
     120,   103,   107,   103,   785,   103,   787,   683,   101,   685,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   100,
     102,   131,   132,   103,   102,   102,   101,   800,   801,   139,
     140,   141,   103,   537,   101,   103,   106,   103,    94,   101,
      93,   545,   106,   106,   882,   106,    97,   669,   903,    85,
      27,   101,   101,    97,   102,   559,   103,   103,   103,   669,
     736,   683,   103,   685,   103,   903,   103,    97,   100,   102,
      96,   669,   882,   683,   750,   685,   613,   614,   102,    95,
     120,   618,   100,     1,     4,   683,    94,   685,     4,    93,
     101,   103,   107,   103,   103,   593,   101,     1,   174,   636,
     103,   882,   103,   607,   103,   107,   106,   130,   596,   174,
     501,   787,   404,   411,   736,   399,   336,   334,   585,   335,
     969,   740,   903,   337,   339,   609,   736,   916,   750,   969,
     967,   969,   977,   940,   837,   930,   647,   121,   736,   837,
     750,   645,     4,   647,   917,   918,   471,   920,    49,   147,
     348,   815,   750,   991,   349,   626,   801,   800,   631,   969,
     630,   372,   358,   920,   354,   787,    24,   142,   265,   164,
     947,   669,    -1,    -1,    -1,    -1,    -1,   787,    -1,    -1,
      -1,   991,    -1,    -1,   593,   683,    -1,   685,   969,   787,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,   108,    -1,   743,    -1,    -1,   746,
     991,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   901,    -1,   131,   132,    -1,
      -1,    -1,   908,    -1,   910,   139,   140,   141,   736,    -1,
     916,    -1,    -1,    -1,   748,    -1,    -1,   751,   752,    -1,
      -1,   755,   750,    -1,    -1,   931,   760,    -1,   762,   935,
     669,    -1,   593,    -1,    -1,    -1,   942,    -1,   944,    -1,
      -1,    -1,   593,    -1,   683,    -1,   685,    -1,    -1,   901,
      -1,   785,    -1,    -1,    -1,    -1,   908,    -1,   910,   787,
      -1,   901,    -1,   969,   916,    -1,    -1,    -1,   908,    -1,
     910,   977,    -1,   901,    -1,    -1,   916,    -1,    -1,   931,
     908,    -1,   910,   935,    -1,   991,    -1,    -1,   916,    -1,
     942,   931,   944,    -1,    -1,   935,    -1,   736,    -1,    -1,
      -1,  1007,   942,   931,   944,    -1,    -1,   935,   669,   843,
      -1,   750,    -1,    -1,   942,   882,   944,   969,   669,    -1,
      -1,    -1,   683,    -1,   685,   977,    -1,    -1,    -1,   969,
      -1,    -1,   683,    -1,   685,    -1,    -1,   977,    -1,   991,
      -1,   969,    -1,    -1,    -1,    -1,    -1,    -1,   787,   977,
      -1,   991,    -1,    -1,    -1,  1007,    -1,    -1,    -1,    -1,
      -1,     0,    -1,   991,    -1,    -1,    -1,  1007,    -1,    -1,
       9,    -1,    -1,   901,    -1,   736,    -1,    -1,   912,  1007,
     908,   915,   910,    -1,    -1,   736,    -1,    -1,   916,   750,
      -1,    -1,    31,     1,    -1,   929,    -1,    -1,    -1,   750,
     934,    -1,    -1,   931,    -1,    44,    -1,   935,    -1,    48,
      49,    -1,    -1,    -1,   942,    54,   944,    56,    57,    58,
      59,    -1,    -1,    -1,    63,    -1,   787,    -1,    67,    -1,
     964,    -1,    -1,    -1,    -1,    -1,   787,    -1,    -1,    -1,
      79,   969,    -1,    82,    -1,    84,    -1,    -1,    -1,   977,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   901,   991,    -1,    -1,    -1,    -1,    -1,   908,
      -1,   910,    -1,    -1,    -1,    -1,    -1,   916,    -1,  1007,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   931,    -1,    -1,    -1,   935,    -1,   106,    -1,
      -1,    -1,    -1,   942,    -1,   944,    -1,    -1,    -1,    -1,
      -1,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,   131,   132,    -1,    -1,    -1,     1,    -1,
     969,   139,   140,   141,    -1,    -1,    -1,    -1,   977,    -1,
     901,    -1,    -1,    -1,    -1,    -1,    -1,   908,    -1,   910,
     901,    -1,   991,    -1,    -1,   916,    -1,   908,    -1,   910,
      -1,    -1,    -1,    -1,    -1,   916,    -1,    -1,  1007,    -1,
     931,    -1,    -1,    -1,   935,    -1,    -1,    -1,    -1,    -1,
     931,   942,    -1,   944,   935,   106,    -1,     9,    -1,    -1,
      -1,   942,    -1,   944,    -1,    -1,    -1,    -1,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   969,    31,
     131,   132,    -1,    -1,    -1,    -1,   977,    -1,   969,    -1,
      -1,    -1,    44,    -1,    -1,    -1,   977,    49,    -1,    -1,
     991,    -1,    54,   106,    56,    57,    58,    59,    -1,    -1,
     991,    63,    -1,    -1,    -1,    67,  1007,   120,   121,   122,
     123,   124,   125,   126,   127,   128,  1007,    79,   131,   132,
      82,    -1,    84,    -1,    -1,    -1,   139,   140,   141,     1,
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
      -1,    -1,   114,    -1,   116,   117,    -1,    -1,    -1,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,   139,   140,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
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
      22,    -1,    68,    69,    26,    -1,    -1,    29,    -1,    -1,
      76,    77,    -1,    35,    80,    -1,    -1,    83,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,     4,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      62,    -1,    64,    -1,    22,    -1,    68,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    35,    80,    -1,
      -1,    83,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
       4,    -1,    -1,    51,    -1,    -1,    -1,    -1,    12,    -1,
      14,    -1,    -1,    17,    62,    -1,    64,    -1,    22,    -1,
      68,    -1,    26,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,     9,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    -1,    -1,    -1,    68,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,    83,
      44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      84
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
     282,   329,   332,   282,   330,   331,   107,     1,   106,   213,
     148,     1,   106,   102,     1,   102,   406,     4,    15,    23,
     233,   406,   102,   208,   265,   406,   265,   213,   213,   213,
     102,     1,   102,   221,     1,   106,     1,   106,     1,   106,
       1,   106,     1,   106,     1,   106,     1,   106,   101,   211,
       1,   106,     1,   106,   212,   102,   212,   406,   103,   101,
     103,   103,   282,   377,    99,   107,   348,   349,   282,   335,
     336,   337,     4,     4,   106,   317,   106,   315,     4,   106,
     316,   106,   314,   101,   404,   404,   404,   211,   226,   148,
     148,     1,   106,   209,     1,   106,   212,   208,   210,   208,
       1,   106,   208,     1,   106,    16,    33,   268,   269,   271,
     208,   220,   276,   245,     1,   210,    85,   167,   174,   175,
     177,   188,   189,   206,   220,   229,   252,   255,   258,   213,
     379,   379,    93,    94,   101,   403,    11,    71,   106,   213,
     352,    95,    96,   101,   282,   337,   282,   336,   103,   103,
     213,   213,    97,   103,   213,   213,   404,   106,   213,   333,
     333,     4,   278,   279,     4,     1,   106,    27,     1,   103,
     407,   103,   407,   102,   213,   213,   269,   271,   103,   210,
     103,   103,   102,     1,   106,   408,    97,   379,   379,   404,
     100,   102,   102,   402,   402,   402,   148,   403,   403,   120,
      97,   103,     1,    41,   409,   232,   212,   100,   235,   147,
     155,   212,     1,   212,   244,   210,   210,   253,   256,   229,
     282,   282,   374,   377,   168,   168,   213,   213,     4,   208,
     279,   212,   208,   212,    15,    23,   236,   237,   238,   239,
     240,     4,   270,   270,   212,   212,   248,   408,    94,    93,
     101,   103,   103,   401,   401,   103,   407,   209,   107,   101,
     238,   216,   240,   103,   103,   246,   103,   254,   257,   258,
     379,   379,   404,   107,   213,   213,   106,   407,   376,   212
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 142 "yacc.y"
    {l.a("boolean_literal",1);	  (yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 143 "yacc.y"
    {l.a("INTEGER_LITERAL",0);	  (yyval.r.node) = new AutoConst("INT",new int((yyvsp[(1) - (1)].r.i)),Node::current);}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 144 "yacc.y"
    {l.a("REAL_LITERAL",0);		  (yyval.r.node) = new AutoConst("FLOAT",new float((yyvsp[(1) - (1)].r.f)),Node::current);}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 145 "yacc.y"
    {l.a("CHARACTER_LITERAL",0);  (yyval.r.node) = new AutoConst("CHAR",new char((yyvsp[(1) - (1)].r.c)),Node::current);}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 146 "yacc.y"
    {l.a("STRING_LITERAL",0);     (yyval.r.node) = new AutoConst("STRING",new string((yyvsp[(1) - (1)].r.str)),Node::current);}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 147 "yacc.y"
    {l.a("NULL_LITERAL",0);       (yyval.r.node) = new AutoConst("NULL",nullptr,Node::current);}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 150 "yacc.y"
    {l.a("TRUE",0);(yyval.r.node) = new AutoConst("BOOL",new bool(true),Node::current);}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 151 "yacc.y"
    {l.a("FALSE",0);(yyval.r.node) = new AutoConst("BOOL",new bool(false),Node::current);}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 157 "yacc.y"
    {l.a("namespace_name",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 161 "yacc.y"
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 166 "yacc.y"
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 167 "yacc.y"
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 171 "yacc.y"
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 172 "yacc.y"
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 176 "yacc.y"
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 177 "yacc.y"
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 178 "yacc.y"
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 182 "yacc.y"
    {l.a("primitive_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 183 "yacc.y"
    {l.a("primitive_type",0);(yyval.r.base) = new string("BOOL");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 187 "yacc.y"
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 188 "yacc.y"
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 189 "yacc.y"
    {l.a("numeric_type",0);(yyval.r.base) = new string("DECIMAL");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 193 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("SBYTE");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 194 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("BYTE");}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 195 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("SHORT");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 196 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("USHORT");}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 197 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("INT");}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 198 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("UINT");}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 199 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("LONG");}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 200 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("ULONG");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 201 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("CHAR");}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 204 "yacc.y"
    {l.a("floating_point_type",0);(yyval.r.base) = new string("FLOAT");}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 205 "yacc.y"
    {l.a("floating_point_type",0);(yyval.r.base) = new string("DOUBLE");}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 208 "yacc.y"
    {l.a("class_type",0);(yyval.r.base) = new string("OBJECT");}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 209 "yacc.y"
    {l.a("class_type",0);(yyval.r.base) = new string("STRING");}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 212 "yacc.y"
    {l.a("pointer_type",1);}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 213 "yacc.y"
    {l.a("pointer_type",0);}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 216 "yacc.y"
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[(1) - (2)].r.known_type);(yyval.r.base) = (yyvsp[(1) - (2)].r.base);}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 217 "yacc.y"
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[(1) - (2)].r.base);}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 218 "yacc.y"
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[(1) - (2)].r.base);}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 221 "yacc.y"
    {l.a("rank_specifiers_opt",0);}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 222 "yacc.y"
    {l.a("rank_specifiers_opt",2);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 225 "yacc.y"
    {l.a("rank_specifier",0);}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 229 "yacc.y"
    {l.a("variable_reference",1);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 233 "yacc.y"
    {l.a("argument_list",1);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 234 "yacc.y"
    {l.a("argument_list",2);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 237 "yacc.y"
    {l.a("argument",1);}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 238 "yacc.y"
    {l.a("argument",1);}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 239 "yacc.y"
    {l.a("argument",1);}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 242 "yacc.y"
    {l.a("primary_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 243 "yacc.y"
    {l.a("primary_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 246 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 247 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 248 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 249 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 250 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 251 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 252 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 253 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 254 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 255 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 256 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 257 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 260 "yacc.y"
    {l.a("parenthesized_expression",1);(yyval.r.node) = (yyvsp[(2) - (3)].r.node);}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 263 "yacc.y"
    {l.a("member_access",1);}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 264 "yacc.y"
    {l.a("member_access",1);}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 265 "yacc.y"
    {l.a("member_access",1);}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 268 "yacc.y"
    {l.a("invocation_expression",2);}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 269 "yacc.y"
    {l.a("invocation_expression",2);}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 272 "yacc.y"
    {l.a("argument_list_opt",0);}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 273 "yacc.y"
    {l.a("argument_list_opt",1);}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 276 "yacc.y"
    {l.a("element_access",2);}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 277 "yacc.y"
    {l.a("element_access",2);}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 280 "yacc.y"
    {l.a("expression_list_opt",0);}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 281 "yacc.y"
    {l.a("expression_list_opt",1);}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 284 "yacc.y"
    {l.a("expression_list",1);}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 285 "yacc.y"
    {l.a("expression_list",2);}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 288 "yacc.y"
    {l.a("this_access",0);}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 291 "yacc.y"
    {l.a("base_access",0);}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 292 "yacc.y"
    {l.a("base_access",1);}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 295 "yacc.y"
    {l.a("post_increment_expression",1);(yyval.r.node) = new UnaryExpression(post_plusplus,(yyvsp[(1) - (2)].r.node),Node::current);}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 298 "yacc.y"
    {l.a("post_decrement_expression",1);(yyval.r.node) = new UnaryExpression(post_minusminus,(yyvsp[(1) - (2)].r.node),Node::current);}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 301 "yacc.y"
    {l.a("new_expression",1);}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 304 "yacc.y"
    {l.a("object_creation_expression",2);}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 307 "yacc.y"
    {l.a("array_creation_expression",4);}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 308 "yacc.y"
    {l.a("array_creation_expression",2);}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 311 "yacc.y"
    {l.a("array_initializer_opt",0);}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 312 "yacc.y"
    {l.a("array_initializer_opt",1);}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 315 "yacc.y"
    {l.a("typeof_expression",1);}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 316 "yacc.y"
    {l.a("typeof_expression",0);}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 319 "yacc.y"
    {l.a("checked_expression",1);}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 322 "yacc.y"
    {l.a("unchecked_expression",1);}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 325 "yacc.y"
    {l.a("pointer_member_access",1);}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 328 "yacc.y"
    {l.a("addressof_expression",1);(yyval.r.node) = new UnaryExpression(And,(yyvsp[(2) - (2)].r.node),Node::current);}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 331 "yacc.y"
    {l.a("sizeof_expression",1);}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 334 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 335 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.node) = new Identifier(SPL->find(*(yyvsp[(1) - (1)].r.base)));}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 336 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 337 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 338 "yacc.y"
    {l.a("postfix_expression",1);}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 341 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);(yyval.r.node) = new UnaryExpression(exclamation_point,(yyvsp[(2) - (2)].r.node),Node::current);}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 342 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);(yyval.r.node) = new UnaryExpression(tilde,(yyvsp[(2) - (2)].r.node),Node::current);}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 343 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 344 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 347 "yacc.y"
    {l.a("pre_increment_expression",1);(yyval.r.node) = (yyvsp[(2) - (2)].r.node);}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 350 "yacc.y"
    {l.a("pre_decrement_expression",1);(yyval.r.node) = (yyvsp[(2) - (2)].r.node);}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 353 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[(2) - (2)].r.node);}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 354 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[(2) - (2)].r.node);}
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 355 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[(2) - (2)].r.node);}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 356 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 357 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 358 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 359 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 367 "yacc.y"
    {l.a("cast_expression",2);}
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 368 "yacc.y"
    {l.a("cast_expression",2);}
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 369 "yacc.y"
    {l.a("cast_expression",4);}
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 370 "yacc.y"
    {l.a("cast_expression",3);}
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 371 "yacc.y"
    {l.a("cast_expression",3);}
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 372 "yacc.y"
    {l.a("cast_expression",2);}
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 375 "yacc.y"
    {l.a("type_quals_opt",0);}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 376 "yacc.y"
    {l.a("type_quals_opt",1);}
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 379 "yacc.y"
    {l.a("type_quals",1);}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 380 "yacc.y"
    {l.a("type_quals",2);}
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 383 "yacc.y"
    {l.a("type_qual",1);}
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 384 "yacc.y"
    {l.a("type_qual",0);}
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 387 "yacc.y"
    {(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 389 "yacc.y"
    {
		l.a("multiplicative_expression STAR",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),star,(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 394 "yacc.y"
    {
		l.a("multiplicative_expression SLASH",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),slash,(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 399 "yacc.y"
    {
		l.a("multiplicative_expression PERCENT",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),percent,(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 407 "yacc.y"
    {
		l.a("additive_expression multiplicative_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 412 "yacc.y"
    {
		l.a("additive_expression PLUS",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),Plus,(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 417 "yacc.y"
    {
		l.a("additive_expression MINUS",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),Minus,(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 425 "yacc.y"
    {
		l.a("shift_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 430 "yacc.y"
    {
		l.a("shift_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),ltlt,(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 435 "yacc.y"
    {
		l.a("shift_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),gtgt,(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 443 "yacc.y"
    {
		l.a("relational_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 448 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),smaller,(yyvsp[(3) - (3)].r.node),Node::current);  
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 453 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),Greater,(yyvsp[(3) - (3)].r.node),Node::current);  
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 458 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),leq,(yyvsp[(3) - (3)].r.node),Node::current);  
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 463 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),geq,(yyvsp[(3) - (3)].r.node),Node::current);  
  }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 468 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),Is,(yyvsp[(3) - (3)].r.node),Node::current);  
  }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 473 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),As,(yyvsp[(3) - (3)].r.node),Node::current);		
  }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 481 "yacc.y"
    {
		l.a("equality_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 486 "yacc.y"
    {
		l.a("equality_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),eqeq,(yyvsp[(3) - (3)].r.node),Node::current);  
  }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 491 "yacc.y"
    {
		l.a("equality_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),noteq,(yyvsp[(3) - (3)].r.node),Node::current);  
  }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 499 "yacc.y"
    {
		l.a("and_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 504 "yacc.y"
    {
		l.a("and_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),And,(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 511 "yacc.y"
    {
		l.a("exclusive_or_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 516 "yacc.y"
    {
		l.a("exclusive_or_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),power,(yyvsp[(3) - (3)].r.node),Node::current);  
  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 524 "yacc.y"
    {
		l.a("inclusive_or_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 529 "yacc.y"
    {
		l.a("inclusive_or_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),Or,(yyvsp[(3) - (3)].r.node),Node::current);  
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 537 "yacc.y"
    {
		l.a("conditional_and_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 542 "yacc.y"
    {
		l.a("conditional_and_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),andand,(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 550 "yacc.y"
    {
		l.a("conditional_or_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 555 "yacc.y"
    {
		l.a("conditional_or_expression",2);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (3)].r.node),oror,(yyvsp[(3) - (3)].r.node),Node::current);
  
  }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 564 "yacc.y"
    {
		l.a("conditional_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 569 "yacc.y"
    {
		l.a("conditional_expression",3);
		(yyval.r.node) = new BinaryExpression((yyvsp[(1) - (5)].r.node),question_mark,(yyvsp[(3) - (5)].r.node),Node::current);  
  }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 577 "yacc.y"
    {
		l.a("assignment",3);
		(yyval.r.node) = new Assignment((Identifier*)(yyvsp[(1) - (3)].r.node),(yyvsp[(2) - (3)].r.op),(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 584 "yacc.y"
    {l.a("assignment_operator EQUAL",0);(yyval.r.op) = Equal;}
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 585 "yacc.y"
    {l.a("assignment_operator PLUSEQ",0);(yyval.r.op) = pluseq;}
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 586 "yacc.y"
    {l.a("assignment_operator MINUSEQ",0);(yyval.r.op) = minuseq;}
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 587 "yacc.y"
    {l.a("assignment_operator STAREQ",0);(yyval.r.op) = stareq;}
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 588 "yacc.y"
    {l.a("assignment_operator DIVEQ",0);(yyval.r.op) = diveq;}
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 589 "yacc.y"
    {l.a("assignment_operator MODEQ",0);(yyval.r.op) = modeq;}
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 590 "yacc.y"
    {l.a("assignment_operator XOREQ",0);(yyval.r.op) = xoreq;}
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 591 "yacc.y"
    {l.a("assignment_operator ANDEQ",0);(yyval.r.op) = andeq;}
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 592 "yacc.y"
    {l.a("assignment_operator OREQ",0);(yyval.r.op) = oreq;}
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 593 "yacc.y"
    {l.a("assignment_operator GTGTEQ",0);(yyval.r.op) = gtgteq;}
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 594 "yacc.y"
    {l.a("assignment_operator LTLTEQ",0);(yyval.r.op) = ltlteq;}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 597 "yacc.y"
    {l.a("expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 598 "yacc.y"
    {l.a("expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 602 "yacc.y"
    {
		l.a("constant_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 608 "yacc.y"
    {l.a("boolean_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 612 "yacc.y"
    {l.a("statement",1);}
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 613 "yacc.y"
    {l.a("statement",1);}
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 614 "yacc.y"
    {l.a("statement",1);}
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 617 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 618 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 619 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 620 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 621 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 622 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 623 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 624 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 625 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 626 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 627 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 628 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 629 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 632 "yacc.y"
    { SPL->add_scope(); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 632 "yacc.y"
    {l.a("block",1);  SPL->endScope();}
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 633 "yacc.y"
    {l.a("block",1,1);}
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 636 "yacc.y"
    {l.a("statement_list_opt",0);}
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 637 "yacc.y"
    {l.a("statement_list_opt",1);}
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 641 "yacc.y"
    {l.a("statement_list",1);}
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 642 "yacc.y"
    {l.a("statement_list",2);}
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 645 "yacc.y"
    {l.a("empty_statement",0);}
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 648 "yacc.y"
    {l.a("labeled_statement",1);}
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 651 "yacc.y"
    {l.a("declaration_statement",1);}
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 652 "yacc.y"
    {l.a("declaration_statement",1);}
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 653 "yacc.y"
    { l.a("declaration_statement",1,1);}
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 654 "yacc.y"
    { l.a("declaration_statement",1,1);}
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 658 "yacc.y"
    {
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*(yyvsp[(1) - (2)].r.base),*(yyvsp[(2) - (2)].r.identifiers),*(yyvsp[(2) - (2)].r.exps),(yyvsp[(1) - (2)].r.known_type),false,(yyvsp[(2) - (2)].r.line_no),(yyvsp[(2) - (2)].r.col_no)) ;
	}
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 666 "yacc.y"
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.exps) = new queue<Node*>();
				 (yyval.r.identifiers)->push(*(yyvsp[(1) - (1)].r.identifier));
				 (yyval.r.exps)->push((yyvsp[(1) - (1)].r.node));
		   }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 673 "yacc.y"
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[(1) - (3)].r.identifiers);
				  (yyval.r.exps) = (yyvsp[(1) - (3)].r.exps);
				  
				  (yyval.r.identifiers)->push(*(yyvsp[(3) - (3)].r.identifier));
				  (yyval.r.exps)->push((yyvsp[(3) - (3)].r.node));
		   }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 683 "yacc.y"
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[(1) - (1)].r.str)) ; 
				 (yyval.r.node) = nullptr;
		  }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 688 "yacc.y"
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[(1) - (3)].r.str));
					(yyval.r.node) = (yyvsp[(3) - (3)].r.node);
		   }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 694 "yacc.y"
    {l.a("variable_initializer",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 695 "yacc.y"
    {l.a("variable_initializer",1);}
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 696 "yacc.y"
    {l.a("variable_initializer",1);}
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 699 "yacc.y"
    {l.a("stackalloc_initializer",2);}
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 703 "yacc.y"
    {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*(yyvsp[(2) - (3)].r.base),*(yyvsp[(3) - (3)].r.identifiers),*(yyvsp[(3) - (3)].r.exps),(yyvsp[(2) - (3)].r.known_type),true,(yyvsp[(2) - (3)].r.line_no),(yyvsp[(2) - (3)].r.col_no)) ;
  }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 710 "yacc.y"
    {
		l.a("constant_declarators",1);
  		(yyval.r.identifiers) = new queue<string>();
		(yyval.r.identifiers)->push(*(yyvsp[(1) - (1)].r.identifier));

		(yyval.r.exps) = new queue<Node*>();
		(yyval.r.exps)->push((yyvsp[(1) - (1)].r.node));
  }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 719 "yacc.y"
    {
		l.a("constant_declarators",2);
	  	(yyval.r.identifiers) = (yyvsp[(1) - (3)].r.identifiers);
		(yyval.r.identifiers)->push(*(yyvsp[(3) - (3)].r.identifier));	

		(yyval.r.exps) = (yyvsp[(1) - (3)].r.exps);		  
		(yyval.r.exps)->push((yyvsp[(3) - (3)].r.node));
		
  }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 731 "yacc.y"
    {
		l.a("constant_declarator",1);
		(yyval.r.identifier) = new string((yyvsp[(1) - (3)].r.str));
		(yyval.r.node) = (yyvsp[(3) - (3)].r.node);
  }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 739 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 740 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 741 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 742 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 743 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 744 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 745 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 747 "yacc.y"
    { l.a("expression_statement",1,1);}
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 748 "yacc.y"
    {l.a("expression_statement",1,1);}
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 749 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 750 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 751 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 752 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 753 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.node));}
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 756 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 757 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 758 "yacc.y"
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 759 "yacc.y"
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 760 "yacc.y"
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 761 "yacc.y"
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 762 "yacc.y"
    {l.a("statement_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 765 "yacc.y"
    {l.a("selection_statement",1);}
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 766 "yacc.y"
    {l.a("selection_statement",1);}
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 769 "yacc.y"
    {l.a("if_statement",2);SPL->closeASTscope();}
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 770 "yacc.y"
    {SPL->closeASTscope(true);}
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 770 "yacc.y"
    {l.a("if_statement",3);SPL->closeASTscope();}
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 773 "yacc.y"
    {SPL->addStatement(new If((Expression*)(yyvsp[(2) - (3)].r.node),Node::current));}
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 777 "yacc.y"
    {l.a("switch_statement",2);}
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 780 "yacc.y"
    {l.a("switch_block",1);}
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 783 "yacc.y"
    {l.a("switch_sections_opt",0);}
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 784 "yacc.y"
    {l.a("switch_sections_opt",1);}
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 787 "yacc.y"
    {l.a("switch_sections",1);}
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 788 "yacc.y"
    {l.a("switch_sections",2);}
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 791 "yacc.y"
    {l.a("switch_section",2);}
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 794 "yacc.y"
    {l.a("switch_labels",1);}
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 795 "yacc.y"
    {l.a("switch_labels",2);}
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 798 "yacc.y"
    {l.a("switch_label",1);}
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 799 "yacc.y"
    {l.a("switch_label",0);}
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 802 "yacc.y"
    {l.a("iteration_statement",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 803 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 804 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 805 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 808 "yacc.y"
    {l.a("unsafe_statement",1);}
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 811 "yacc.y"
    {SPL->addStatement(new While((yyvsp[(3) - (4)].r.node),nullptr,Node::current));}
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 811 "yacc.y"
    {l.a("while_statement",2);SPL->closeASTscope();}
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 812 "yacc.y"
    {l.a("while_statement",2,1);}
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 813 "yacc.y"
    {yyclearin;}
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 813 "yacc.y"
    {  }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 813 "yacc.y"
    {l.a("while_statement",2,1);}
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 817 "yacc.y"
    {
		l.a("do_statement",2);
		((DoWhile*)Node::current)->setCondition((yyvsp[(5) - (5)].r.node));
		SPL->closeASTscope();
  }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 825 "yacc.y"
    { SPL->addStatement(new DoWhile(nullptr,nullptr,Node::current)); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 829 "yacc.y"
    {l.a("for_statement",8);SPL->closeASTscope();}
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 832 "yacc.y"
    {SPL->addStatement(new For(Node::current));}
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 837 "yacc.y"
    {l.a("for_initializer_opt",0);}
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 839 "yacc.y"
    {
		l.a("for_initializer_opt",1);
		if((yyvsp[(1) - (1)].r.nodes) != nullptr) {
			((For*)Node::current)->setInitializers(*(yyvsp[(1) - (1)].r.nodes));
		}
  }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 847 "yacc.y"
    {l.a("for_condition_opt",0);}
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 849 "yacc.y"
    {
		l.a("for_condition_opt",1);
		((For*)Node::current)->setCondition((yyvsp[(1) - (1)].r.node));
		
  }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 856 "yacc.y"
    {l.a("for_iterator_opt",0);}
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 858 "yacc.y"
    {
		l.a("for_iterator_opt",1);
		((For*)Node::current)->setIterators(*(yyvsp[(1) - (1)].r.nodes));
  }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 864 "yacc.y"
    {l.a("for_initializer",1);(yyval.r.nodes) = nullptr;}
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 865 "yacc.y"
    {l.a("for_initializer",1);(yyval.r.nodes) = (yyvsp[(1) - (1)].r.nodes);}
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 868 "yacc.y"
    {l.a("for_condition",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 871 "yacc.y"
    {l.a("for_iterator",1);(yyval.r.nodes) = (yyvsp[(1) - (1)].r.nodes);}
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 874 "yacc.y"
    {l.a("statement_expression_list",1);(yyval.r.nodes) = new queue<Node*>();(yyval.r.nodes)->push((yyvsp[(1) - (1)].r.node));}
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 875 "yacc.y"
    {l.a("statement_expression_list",2);(yyval.r.nodes) = (yyvsp[(1) - (3)].r.nodes);(yyval.r.nodes)->push((yyvsp[(3) - (3)].r.node));}
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 878 "yacc.y"
    {l.a("foreach_statement",7);SPL->closeASTscope();}
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 882 "yacc.y"
    {SPL->addStatement(new Foreach(new Symbol(*(new string((yyvsp[(4) - (7)].r.str))),0,0),(yyvsp[(6) - (7)].r.node),Node::current));}
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 886 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 887 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 888 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 889 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 890 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 893 "yacc.y"
    {l.a("break_statement",0);}
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 894 "yacc.y"
    {l.a("break_statement",0,1);}
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 897 "yacc.y"
    {l.a("continue_statement",0);}
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 898 "yacc.y"
    {l.a("continue_statement",0,1);}
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 901 "yacc.y"
    {l.a("goto_statement",0);}
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 902 "yacc.y"
    {l.a("goto_statement",1);}
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 903 "yacc.y"
    {l.a("goto_statement",0);}
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 904 "yacc.y"
    {l.a("goto_statement",0,1);}
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 905 "yacc.y"
    {l.a("goto_statement",1,1);}
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 906 "yacc.y"
    {l.a("goto_statement",0,1);}
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 909 "yacc.y"
    {l.a("return_statement",1);}
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 910 "yacc.y"
    {l.a("return_statement",1,1);}
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 913 "yacc.y"
    {l.a("expression_opt",0);}
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 914 "yacc.y"
    {l.a("expression_opt",1);}
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 917 "yacc.y"
    {l.a("throw_statement",1);}
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 918 "yacc.y"
    {l.a("throw_statement",1);}
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 921 "yacc.y"
    {l.a("try_statement",2);}
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 922 "yacc.y"
    {l.a("try_statement",2);}
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 923 "yacc.y"
    {l.a("try_statement",3);}
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 926 "yacc.y"
    {l.a("catch_clauses",1);}
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 927 "yacc.y"
    {l.a("catch_clauses",2);}
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 930 "yacc.y"
    {l.a("catch_clause",3);}
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 931 "yacc.y"
    {l.a("catch_clause",3);}
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 935 "yacc.y"
    {l.a("identifier_opt",0);}
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 936 "yacc.y"
    {l.a("identifier_opt",0);}
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 939 "yacc.y"
    {l.a("finally_clause",1);}
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 942 "yacc.y"
    {l.a("checked_statement",1);}
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 945 "yacc.y"
    {l.a("unchecked_statement",1);}
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 948 "yacc.y"
    {l.a("lock_statement",2);}
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 951 "yacc.y"
    {l.a("using_statement",2);}
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 954 "yacc.y"
    {l.a("resource_acquisition",1);}
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 955 "yacc.y"
    {l.a("resource_acquisition",1);}
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 959 "yacc.y"
    {l.a("fixed_statement",3);}
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 962 "yacc.y"
    {l.a("fixed_pointer_declarators",1);}
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 963 "yacc.y"
    {l.a("fixed_pointer_declarators",2);}
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 966 "yacc.y"
    {l.a("fixed_pointer_declarator",1);}
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 969 "yacc.y"
    {l.a("compilation_unit",2);}
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 970 "yacc.y"
    {l.a("compilation_unit",2);}
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 973 "yacc.y"
    {l.a("using_directives_opt",0);}
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 974 "yacc.y"
    {l.a("using_directives_opt",1);}
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 977 "yacc.y"
    {l.a("attributes_opt",0);}
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 978 "yacc.y"
    {l.a("attributes_opt",1);}
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 981 "yacc.y"
    {l.a("namespace_member_declarations_opt",0);}
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 982 "yacc.y"
    {l.a("namespace_member_declarations_opt",1);}
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 985 "yacc.y"
    {SPL->addNamespace(*(yyvsp[(3) - (3)].r.base),(yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no));}
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 986 "yacc.y"
    {l.a("namespace_declaration",4);SPL->endScope();}
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 989 "yacc.y"
    {l.a("comma_opt",0);}
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 990 "yacc.y"
    {l.a("comma_opt",0);}
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 995 "yacc.y"
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[(1) - (1)].r.str));
		  }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 999 "yacc.y"
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[(1) - (2)].r.base)) + string((yyvsp[(2) - (2)].r.str)));
		}
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 1005 "yacc.y"
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[(1) - (2)].r.str)) + ".");}
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 1006 "yacc.y"
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[(1) - (3)].r.base) + string((yyvsp[(2) - (3)].r.str)) + ".");}
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 1010 "yacc.y"
    {l.a("namespace_body",2);}
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 1013 "yacc.y"
    {l.a("using_directives",1);}
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 1014 "yacc.y"
    {l.a("using_directives",2);}
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 1017 "yacc.y"
    {l.a("using_directive",1);}
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 1018 "yacc.y"
    {l.a("using_directive",1);}
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 1021 "yacc.y"
    {l.a("using_alias_directive",1);}
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 1022 "yacc.y"
    {l.a("using_alias_directive",1,1);}
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 1025 "yacc.y"
    {l.a("using_namespace_directive",1);  SPL->add_using(*(yyvsp[(2) - (3)].r.base),(yyvsp[(1) - (3)].r.line_no),(yyvsp[(1) - (3)].r.col_no));}
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 1026 "yacc.y"
    {l.a("using_namespace_directive",1,1);SPL->add_using(*(yyvsp[(2) - (3)].r.base),(yyvsp[(1) - (3)].r.line_no),(yyvsp[(1) - (3)].r.col_no));}
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 1029 "yacc.y"
    {l.a("namespace_member_declarations",1);}
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 1030 "yacc.y"
    {l.a("namespace_member_declarations",2);}
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 1033 "yacc.y"
    {l.a("namespace_member_declaration",1);}
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 1034 "yacc.y"
    {l.a("namespace_member_declaration",1);}
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 1037 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 1038 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 1039 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 1040 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 1041 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 1053 "yacc.y"
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 1058 "yacc.y"
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[(1) - (1)].r.modifiers);
  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 1065 "yacc.y"
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[(1) - (1)].r.modifier));
  }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 1071 "yacc.y"
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[(1) - (2)].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[(2) - (2)].r.modifier));
  }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 1078 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 1079 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 1080 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 1081 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 1082 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 1083 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 1084 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 1085 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 1086 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 1087 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 1088 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 1089 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 1090 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 1091 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 1102 "yacc.y"
    {
		SPL->addClass(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));
  }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 1105 "yacc.y"
    {l.a("class_declaration",6);SPL->endScope();}
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 1107 "yacc.y"
    {
		SPL->addClass(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));
  }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 1110 "yacc.y"
    {l.a("class_declaration",5);SPL->endScope();}
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 1115 "yacc.y"
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 1116 "yacc.y"
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[(1) - (1)].r.bases);}
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 1119 "yacc.y"
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();(yyval.r.bases)->push(*(yyvsp[(2) - (2)].r.base));}
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 1120 "yacc.y"
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[(2) - (2)].r.bases);}
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 1122 "yacc.y"
    {
		l.a("class_base",2);(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[(2) - (4)].r.base));
		while(!(yyvsp[(4) - (4)].r.bases)->empty())
		{
			(yyval.r.bases)->push((yyvsp[(4) - (4)].r.bases)->front());
			(yyvsp[(4) - (4)].r.bases)->pop();
		}
  }
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 1134 "yacc.y"
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[(1) - (1)].r.base));
  }
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 1140 "yacc.y"
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[(1) - (3)].r.bases);
		(yyval.r.bases)->push(*(yyvsp[(3) - (3)].r.base));
  }
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 1148 "yacc.y"
    {l.a("class_body",1);}
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 1152 "yacc.y"
    {l.a("class_member_declarations_opt",0);}
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 1153 "yacc.y"
    {l.a("class_member_declarations_opt",1);}
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 1156 "yacc.y"
    {l.a("class_member_declarations",1);}
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 1157 "yacc.y"
    {l.a("class_member_declarations",2);}
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 1160 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 1161 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 1162 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 1163 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 1164 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 400:
/* Line 1792 of yacc.c  */
#line 1165 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 401:
/* Line 1792 of yacc.c  */
#line 1166 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 402:
/* Line 1792 of yacc.c  */
#line 1167 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 403:
/* Line 1792 of yacc.c  */
#line 1168 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 404:
/* Line 1792 of yacc.c  */
#line 1169 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 405:
/* Line 1792 of yacc.c  */
#line 1173 "yacc.y"
    {		
		         l.a("constant_declaration",4);
	          SPL->addFieldConst(*(yyvsp[(2) - (6)].r.modifiers),string("CONST"),*(yyvsp[(4) - (6)].r.base),*(yyvsp[(5) - (6)].r.identifiers),(yyvsp[(5) - (6)].r.line_no),(yyvsp[(5) - (6)].r.col_no),(yyvsp[(4) - (6)].r.known_type));
		  }
    break;

  case 406:
/* Line 1792 of yacc.c  */
#line 1178 "yacc.y"
    {
		    l.a("constant_declaration",4,1);
         SPL->addFieldConst(*(yyvsp[(2) - (6)].r.modifiers),string("CONST"),*(yyvsp[(4) - (6)].r.base),*(yyvsp[(5) - (6)].r.identifiers),(yyvsp[(5) - (6)].r.line_no),(yyvsp[(5) - (6)].r.col_no),(yyvsp[(4) - (6)].r.known_type));

		 }
    break;

  case 407:
/* Line 1792 of yacc.c  */
#line 1186 "yacc.y"
    {
		        SPL->addField(*(yyvsp[(2) - (5)].r.modifiers),*(yyvsp[(3) - (5)].r.base),*(yyvsp[(4) - (5)].r.identifiers),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no),(yyvsp[(3) - (5)].r.known_type));
  		      l.a("field_declaration",4);
	      }
    break;

  case 408:
/* Line 1792 of yacc.c  */
#line 1191 "yacc.y"
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[(2) - (5)].r.modifiers),*(yyvsp[(3) - (5)].r.base),*(yyvsp[(4) - (5)].r.identifiers),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no),(yyvsp[(3) - (5)].r.known_type));
        }
    break;

  case 409:
/* Line 1792 of yacc.c  */
#line 1198 "yacc.y"
    {l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}
    break;

  case 410:
/* Line 1792 of yacc.c  */
#line 1203 "yacc.y"
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),*(yyvsp[(3) - (7)].r.base),string(*(yyvsp[(4) - (7)].r.base)),*(yyvsp[(6) - (7)].r.types_ids),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),(yyvsp[(3) - (7)].r.known_type),1);
      }
    break;

  case 412:
/* Line 1792 of yacc.c  */
#line 1210 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),"VOID",string(*(yyvsp[(4) - (7)].r.base)),*(yyvsp[(6) - (7)].r.types_ids),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),1,1);
      }
    break;

  case 414:
/* Line 1792 of yacc.c  */
#line 1216 "yacc.y"
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),*(yyvsp[(3) - (7)].r.base),string(*(yyvsp[(4) - (7)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),(yyvsp[(3) - (7)].r.known_type),1);
         }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 1222 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),"VOID",string(*(yyvsp[(4) - (7)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),1,1);
         }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 1232 "yacc.y"
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string(*(yyvsp[(4) - (8)].r.base)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
      }
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 1236 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string(*(yyvsp[(4) - (8)].r.base)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
      }
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 1240 "yacc.y"
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string(*(yyvsp[(4) - (8)].r.base)),queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>(),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
         }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 1244 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string(*(yyvsp[(4) - (8)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
         }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 1251 "yacc.y"
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 1255 "yacc.y"
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[(1) - (1)].r.types_ids) ;
        }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 1259 "yacc.y"
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[(1) - (1)].r.types_ids) ;
        }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 1263 "yacc.y"
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[(1) - (3)].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[(1) - (3)].r.types_ids))->front()); ((yyvsp[(1) - (3)].r.types_ids))->pop();}
            while(!((yyvsp[(3) - (3)].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[(3) - (3)].r.types_ids))->front()); ((yyvsp[(3) - (3)].r.types_ids))->pop();}
        }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 1271 "yacc.y"
    {l.a("return_type",1);}
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 1272 "yacc.y"
    {l.a("return_type",0);}
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 1285 "yacc.y"
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(1) - (1)].r.base) ,*(yyvsp[(1) - (1)].r.identifier)),make_pair((yyvsp[(1) - (1)].r.line_no),(yyvsp[(1) - (1)].r.col_no))),(yyvsp[(1) - (1)].r.known_type)));
      }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 1290 "yacc.y"
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[(1) - (3)].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(3) - (3)].r.base) ,*(yyvsp[(3) - (3)].r.identifier)),make_pair((yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no))),(yyvsp[(3) - (3)].r.known_type))); 
      }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 1297 "yacc.y"
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(1) - (1)].r.base) ,*(yyvsp[(1) - (1)].r.identifier)),make_pair((yyvsp[(1) - (1)].r.line_no),(yyvsp[(1) - (1)].r.col_no))),(yyvsp[(1) - (1)].r.known_type)));
      }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 1302 "yacc.y"
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[(1) - (3)].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(3) - (3)].r.base) ,*(yyvsp[(3) - (3)].r.identifier)),make_pair((yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no))),(yyvsp[(3) - (3)].r.known_type))); 
       }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 1309 "yacc.y"
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[(1) - (1)].r.base) ;
        (yyval.r.identifier) = (yyvsp[(1) - (1)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (1)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (1)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);
      }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 1317 "yacc.y"
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[(1) - (1)].r.base);
        (yyval.r.identifier) = (yyvsp[(1) - (1)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (1)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (1)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);
      }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 1327 "yacc.y"
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[(3) - (4)].r.base);
        (yyval.r.identifier) = new string ((yyvsp[(4) - (4)].r.str));  
        (yyval.r.line_no) = (yyvsp[(4) - (4)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(4) - (4)].r.col_no); 
        (yyval.r.known_type) = (yyvsp[(3) - (4)].r.known_type);
      }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 1338 "yacc.y"
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[(1) - (3)].r.base) ;
        (yyval.r.identifier) = (yyvsp[(1) - (3)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (3)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (3)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (3)].r.known_type);
      }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 1346 "yacc.y"
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[(1) - (3)].r.base);
        (yyval.r.identifier) = (yyvsp[(1) - (3)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (3)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (3)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (3)].r.known_type);
      }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 1356 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 1357 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 1358 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 1362 "yacc.y"
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[(3) - (4)].r.base);
        (yyval.r.identifier) = new string ((yyvsp[(4) - (4)].r.str));
        (yyval.r.line_no) = (yyvsp[(4) - (4)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(4) - (4)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(3) - (4)].r.known_type);
      }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 1375 "yacc.y"
    {l.a("property_declaration",7);}
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 1378 "yacc.y"
    {l.a("accessor_declarations",2);}
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 1379 "yacc.y"
    {l.a("accessor_declarations",2);}
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 1382 "yacc.y"
    {l.a("set_accessor_declaration_opt",0);}
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 1383 "yacc.y"
    {l.a("set_accessor_declaration_opt",1);}
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 1386 "yacc.y"
    {l.a("get_accessor_declaration_opt",0);}
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 1387 "yacc.y"
    {l.a("get_accessor_declaration_opt",1);}
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 1393 "yacc.y"
    {l.a("get_accessor_declaration",4);}
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 1399 "yacc.y"
    {l.a("set_accessor_declaration",4);}
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 1402 "yacc.y"
    {l.a("accessor_body",1);}
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 1403 "yacc.y"
    {l.a("accessor_body",0);}
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 1406 "yacc.y"
    {l.a("event_declaration",4);}
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 1410 "yacc.y"
    {l.a("event_declaration",7);}
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 1413 "yacc.y"
    {l.a("event_accessor_declarations",2);}
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 1414 "yacc.y"
    {l.a("event_accessor_declarations",2);}
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 1420 "yacc.y"
    {l.a("add_accessor_declaration",4);}
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 1426 "yacc.y"
    {l.a("remove_accessor_declaration",4);}
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 1432 "yacc.y"
    {l.a("indexer_declaration",6);}
    break;

  case 459:
/* Line 1792 of yacc.c  */
#line 1435 "yacc.y"
    {l.a("indexer_declarator",2);}
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 1437 "yacc.y"
    {l.a("indexer_declarator",3);}
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 1440 "yacc.y"
    {l.a("qualified_this",1);}
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 1444 "yacc.y"
    {l.a("operator_declaration",4);}
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 1447 "yacc.y"
    {l.a("operator_declarator",2);}
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 1448 "yacc.y"
    {l.a("operator_declarator",2);}
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 1451 "yacc.y"
    {l.a("overloadable_operator_declarator",3);}
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 1452 "yacc.y"
    {l.a("overloadable_operator_declarator",4);}
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 1455 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 1456 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 1457 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 1458 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 1459 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 1460 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 1461 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 1462 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 1463 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 1464 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 1465 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 1466 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 1467 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 1468 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 1469 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 1470 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 1471 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 1472 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 1473 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 1474 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 1475 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 1476 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 1479 "yacc.y"
    {l.a("conversion_operator_declarator",2);}
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 1480 "yacc.y"
    {l.a("conversion_operator_declarator",2);}
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 1484 "yacc.y"
    {
  SPL->addMethod(*(yyvsp[(2) - (6)].r.modifiers),"",string((yyvsp[(3) - (6)].r.str)),*(yyvsp[(5) - (6)].r.types_ids),(yyvsp[(3) - (6)].r.line_no),(yyvsp[(3) - (6)].r.col_no),1,1);
  }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 1487 "yacc.y"
    {l.a("constructor_declaration",4);SPL->endScope();}
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 1490 "yacc.y"
    {l.a("constructor_initializer_opt",0);}
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 1491 "yacc.y"
    {l.a("constructor_initializer_opt",1);}
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 1494 "yacc.y"
    {l.a("constructor_initializer",1);}
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 1495 "yacc.y"
    {l.a("constructor_initializer",1);}
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 1511 "yacc.y"
    {l.a("destructor_declaration",3);}
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 1514 "yacc.y"
    {l.a("operator_body",1);}
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 1515 "yacc.y"
    {l.a("operator_body",0);}
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 1518 "yacc.y"
    {l.a("constructor_body",1);}
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 1519 "yacc.y"
    {l.a("constructor_body",0);}
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 1524 "yacc.y"
    {l.a("struct_declaration",5);}
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 1527 "yacc.y"
    {l.a("struct_interfaces_opt",0);}
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 1528 "yacc.y"
    {l.a("struct_interfaces_opt",1);}
    break;

  case 505:
/* Line 1792 of yacc.c  */
#line 1531 "yacc.y"
    {l.a("struct_interfaces",1);}
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 1534 "yacc.y"
    {l.a("struct_body",1);}
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 1537 "yacc.y"
    {l.a("struct_member_declarations_opt",0);}
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 1538 "yacc.y"
    {l.a("struct_member_declarations_opt",1);}
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 1541 "yacc.y"
    {l.a("struct_member_declarations",1);}
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 1542 "yacc.y"
    {l.a("struct_member_declarations",2);}
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 1545 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 1546 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 1547 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 1548 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 1549 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 1550 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 1551 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 1552 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 1554 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 1559 "yacc.y"
    {l.a("array_initializer",1);}
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 1560 "yacc.y"
    {l.a("array_initializer",1);}
    break;

  case 522:
/* Line 1792 of yacc.c  */
#line 1563 "yacc.y"
    {l.a("variable_initializer_list_opt",0);}
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 1564 "yacc.y"
    {l.a("variable_initializer_list_opt",1);}
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 1567 "yacc.y"
    {l.a("variable_initializer_list",1);}
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 1568 "yacc.y"
    {l.a("variable_initializer_list",2);}
    break;

  case 526:
/* Line 1792 of yacc.c  */
#line 1574 "yacc.y"
    {
		SPL->addInterface(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));		
  }
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 1577 "yacc.y"
    {l.a("interface_declaration",5);SPL->endScope();}
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 1581 "yacc.y"
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
    break;

  case 529:
/* Line 1792 of yacc.c  */
#line 1582 "yacc.y"
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[(1) - (1)].r.bases);}
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 1585 "yacc.y"
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[(2) - (2)].r.bases);}
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 1588 "yacc.y"
    {l.a("interface_body",1);}
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 1591 "yacc.y"
    {l.a("interface_member_declarations_opt",0);}
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 1592 "yacc.y"
    {l.a("interface_member_declarations_opt",1);}
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 1595 "yacc.y"
    {l.a("interface_member_declarations",1);}
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 1596 "yacc.y"
    {l.a("interface_member_declarations",2);}
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 1599 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 1600 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 1601 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 539:
/* Line 1792 of yacc.c  */
#line 1602 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 540:
/* Line 1792 of yacc.c  */
#line 1607 "yacc.y"
    {
     l.a("interface_method_declaration",5);
	 SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string((yyvsp[(4) - (8)].r.str)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
	 SPL->endScope();
    }
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 1613 "yacc.y"
    {
	  l.a("interface_method_declaration",4);
	  SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string((yyvsp[(4) - (8)].r.str)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
	  SPL->endScope();
    }
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 1620 "yacc.y"
    {l.a("new_opt",0); (yyval.r.modifiers) = new queue<string>();}
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 1621 "yacc.y"
    {l.a("new_opt",0);(yyval.r.modifiers) = new queue<string>() ; (yyval.r.modifiers)->push("NEW");}
    break;

  case 544:
/* Line 1792 of yacc.c  */
#line 1627 "yacc.y"
    {l.a("interface_property_declaration",1);}
    break;

  case 545:
/* Line 1792 of yacc.c  */
#line 1627 "yacc.y"
    {l.a("interface_property_declaration",1);}
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 1634 "yacc.y"
    {l.a("interface_indexer_declaration",7);}
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 1634 "yacc.y"
    {l.a("interface_indexer_declaration",7);}
    break;

  case 548:
/* Line 1792 of yacc.c  */
#line 1638 "yacc.y"
    {l.a("interface_accessors",2);}
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 1639 "yacc.y"
    {l.a("interface_accessors",2);}
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 1640 "yacc.y"
    {l.a("interface_accessors",4);}
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 1641 "yacc.y"
    {l.a("interface_accessors",4);}
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 1644 "yacc.y"
    {l.a("interface_event_declaration",4);}
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 1649 "yacc.y"
    {l.a("interface_empty_body",0);}
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 1650 "yacc.y"
    {l.a("interface_empty_body",0);}
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 1655 "yacc.y"
    {l.a("enum_declaration",5);}
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 1658 "yacc.y"
    {l.a("enum_base_opt",0);}
    break;

  case 557:
/* Line 1792 of yacc.c  */
#line 1659 "yacc.y"
    {l.a("enum_base_opt",1);}
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 1662 "yacc.y"
    {l.a("enum_base",1);}
    break;

  case 559:
/* Line 1792 of yacc.c  */
#line 1665 "yacc.y"
    {l.a("enum_body",1);}
    break;

  case 560:
/* Line 1792 of yacc.c  */
#line 1666 "yacc.y"
    {l.a("enum_body",1);}
    break;

  case 561:
/* Line 1792 of yacc.c  */
#line 1669 "yacc.y"
    {l.a("enum_member_declarations_opt",0);}
    break;

  case 562:
/* Line 1792 of yacc.c  */
#line 1670 "yacc.y"
    {l.a("enum_member_declarations_opt",1);}
    break;

  case 563:
/* Line 1792 of yacc.c  */
#line 1673 "yacc.y"
    {l.a("enum_member_declarations",1);}
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 1674 "yacc.y"
    {l.a("enum_member_declarations",2);}
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 1677 "yacc.y"
    {l.a("enum_member_declaration",1);}
    break;

  case 566:
/* Line 1792 of yacc.c  */
#line 1678 "yacc.y"
    {l.a("enum_member_declaration",2);}
    break;

  case 567:
/* Line 1792 of yacc.c  */
#line 1683 "yacc.y"
    {l.a("enum_member_declaration",4);}
    break;

  case 568:
/* Line 1792 of yacc.c  */
#line 1684 "yacc.y"
    {l.a("enum_member_declaration",4,1);}
    break;

  case 569:
/* Line 1792 of yacc.c  */
#line 1689 "yacc.y"
    {l.a("attributes",1);}
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 1692 "yacc.y"
    {l.a("attribute_sections",1);}
    break;

  case 571:
/* Line 1792 of yacc.c  */
#line 1693 "yacc.y"
    {l.a("attribute_sections",2);}
    break;

  case 572:
/* Line 1792 of yacc.c  */
#line 1696 "yacc.y"
    {l.a("attribute_section",4);}
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 1697 "yacc.y"
    {l.a("attribute_section",4);}
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 1700 "yacc.y"
    {l.a("attribute_target_specifier_opt",0);}
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 1701 "yacc.y"
    {l.a("attribute_target_specifier_opt",1);}
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 1704 "yacc.y"
    {l.a("attribute_target_specifier",1);}
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 1707 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 1708 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 1709 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 1710 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 1711 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 1712 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 1713 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 1714 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 1715 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 1718 "yacc.y"
    {l.a("attribute_list",1);}
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 1719 "yacc.y"
    {l.a("attribute_list",2);}
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 1722 "yacc.y"
    {l.a("attribute",2);}
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 1725 "yacc.y"
    {l.a("attribute_arguments_opt",0);}
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 1726 "yacc.y"
    {l.a("attribute_arguments_opt",1);}
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 1729 "yacc.y"
    {l.a("attribute_name",1);}
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 1732 "yacc.y"
    {l.a("attribute_arguments",1);}
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 1739 "yacc.y"
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 1742 "yacc.y"
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 1745 "yacc.y"
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 1748 "yacc.y"
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 1751 "yacc.y"
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
    break;

  case 598:
/* Line 1792 of yacc.c  */
#line 1754 "yacc.y"
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
    break;

  case 599:
/* Line 1792 of yacc.c  */
#line 1762 "yacc.y"
    {l.a("CLASS",0);}
    break;

  case 600:
/* Line 1792 of yacc.c  */
#line 1763 "yacc.y"
    {l.a("CLASS",0,1);yyclearin;}
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 1766 "yacc.y"
    {l.a("left_bracket_circle",0);}
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 1767 "yacc.y"
    {l.a("left_bracket_circle",0,1);yyclearin;}
    break;

  case 603:
/* Line 1792 of yacc.c  */
#line 1770 "yacc.y"
    {l.a("right_bracket_circle",0);}
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 1771 "yacc.y"
    {l.a("right_bracket_circle",0,1);yyclearin;}
    break;

  case 605:
/* Line 1792 of yacc.c  */
#line 1774 "yacc.y"
    { l.a("semicolon",0);}
    break;

  case 606:
/* Line 1792 of yacc.c  */
#line 1775 "yacc.y"
    { l.a("semicolon",0,1);}
    break;

  case 607:
/* Line 1792 of yacc.c  */
#line 1778 "yacc.y"
    {l.a("in",0);}
    break;

  case 608:
/* Line 1792 of yacc.c  */
#line 1779 "yacc.y"
    {l.a("in",0,1);}
    break;


/* Line 1792 of yacc.c  */
#line 7038 "yacc.tab.cpp"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 1784 "yacc.y"


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




